#include "ps2_memory.h"
#include <iostream>
#include <cstring>
#include <stdexcept>
#include <algorithm>
#include <string>

namespace
{
    inline void inRange(uint32_t offset, size_t bytes, size_t regionSize, const char *op, uint32_t address)
    {
        if (static_cast<uint64_t>(offset) + static_cast<uint64_t>(bytes) > static_cast<uint64_t>(regionSize))
        {
            throw std::runtime_error(std::string(op) + " out-of-bounds at address: 0x" + std::to_string(address));
        }
    }

    template <typename T>
    inline T loadScalar(const uint8_t *base, uint32_t offset, size_t regionSize, const char *op, uint32_t address)
    {
        inRange(offset, sizeof(T), regionSize, op, address);
        T value{};
        std::memcpy(&value, base + offset, sizeof(T));
        return value;
    }

    template <typename T>
    inline void storeScalar(uint8_t *base, uint32_t offset, size_t regionSize, T value, const char *op, uint32_t address)
    {
        inRange(offset, sizeof(T), regionSize, op, address);
        std::memcpy(base + offset, &value, sizeof(T));
    }

    inline bool isGsPrivReg(uint32_t addr)
    {
        return addr >= PS2_GS_PRIV_REG_BASE && addr < PS2_GS_PRIV_REG_BASE + PS2_GS_PRIV_REG_SIZE;
    }

    inline int dmaChannelIndex(uint32_t channelBase)
    {
        switch (channelBase)
        {
        case 0x10008000: return 0;  // VIF0
        case 0x10009000: return 1;  // VIF1
        case 0x1000A000: return 2;  // GIF
        case 0x1000B000: return 3;  // IPU_FROM
        case 0x1000B400: return 4;  // IPU_TO
        case 0x1000C000: return 5;  // SIF0
        case 0x1000C400: return 6;  // SIF1
        case 0x1000C800: return 7;  // SIF2
        case 0x1000D000: return 8;  // SPR_FROM
        case 0x1000D400: return 9;  // SPR_TO
        default:         return -1;
        }
    }

    // Returns a pointer into VU1 code or data memory for the given physical address, or nullptr.
    inline uint8_t *vu1MemPtr(uint8_t *vu1Code, uint8_t *vu1Data, uint32_t physAddr, uint32_t size)
    {
        if (physAddr >= PS2_VU1_CODE_BASE && physAddr + size <= PS2_VU1_CODE_BASE + PS2_VU1_CODE_SIZE)
            return vu1Code + (physAddr - PS2_VU1_CODE_BASE);
        if (physAddr >= PS2_VU1_DATA_BASE && physAddr + size <= PS2_VU1_DATA_BASE + PS2_VU1_DATA_SIZE)
            return vu1Data + (physAddr - PS2_VU1_DATA_BASE);
        return nullptr;
    }

    inline uint64_t *gsRegPtr(GSRegisters &gs, uint32_t addr)
    {
        uint32_t off = addr - PS2_GS_PRIV_REG_BASE;
        switch (off)
        {
        case 0x0000:
            return &gs.pmode;
        case 0x0010:
            return &gs.smode1;
        case 0x0020:
            return &gs.smode2;
        case 0x0030:
            return &gs.srfsh;
        case 0x0040:
            return &gs.synch1;
        case 0x0050:
            return &gs.synch2;
        case 0x0060:
            return &gs.syncv;
        case 0x0070:
            return &gs.dispfb1;
        case 0x0080:
            return &gs.display1;
        case 0x0090:
            return &gs.dispfb2;
        case 0x00A0:
            return &gs.display2;
        case 0x00B0:
            return &gs.extbuf;
        case 0x00C0:
            return &gs.extdata;
        case 0x00D0:
            return &gs.extwrite;
        case 0x00E0:
            return &gs.bgcolor;
        case 0x1000:
            return &gs.csr;
        case 0x1010:
            return &gs.imr;
        case 0x1040:
            return &gs.busdir;
        case 0x1080:
            return &gs.siglblid;
        default:
            return nullptr;
        }
    }

}

// Helpers for GS VRAM addressing (PSMCT32 path).
static inline uint32_t gs_vram_offset(uint32_t basePage, uint32_t x, uint32_t y, uint32_t fbw)
{
    // basePage is in 2048-byte units; fbw is in blocks of 64 pixels.
    uint32_t strideBytes = fbw * 64 * 4;
    return basePage * 2048 + y * strideBytes + x * 4;
}

PS2Memory::PS2Memory()
    : m_rdram(nullptr), m_scratchpad(nullptr), iop_ram(nullptr), m_seenGifCopy(false), m_gsVRAM(nullptr)
{
    ps2SetScratchpadHostPtr(nullptr);
}

PS2Memory::~PS2Memory()
{
    if (m_rdram)
    {
        delete[] m_rdram;
        m_rdram = nullptr;
    }

    if (m_scratchpad)
    {
        ps2SetScratchpadHostPtr(nullptr);
        delete[] m_scratchpad;
        m_scratchpad = nullptr;
    }

    if (m_gsVRAM)
    {
        delete[] m_gsVRAM;
        m_gsVRAM = nullptr;
    }

    if (iop_ram)
    {
        delete[] iop_ram;
        iop_ram = nullptr;
    }
}

bool PS2Memory::initialize(size_t ramSize)
{
    auto cleanup = [this]()
    {
        delete[] m_rdram;
        delete[] m_scratchpad;
        delete[] iop_ram;
        delete[] m_gsVRAM;
        m_rdram = nullptr;
        m_scratchpad = nullptr;
        ps2SetScratchpadHostPtr(nullptr);
        iop_ram = nullptr;
        m_gsVRAM = nullptr;
    };

    cleanup();
    m_seenGifCopy = false;
    m_dmaStartCount.store(0, std::memory_order_relaxed);
    m_gifCopyCount.store(0, std::memory_order_relaxed);
    m_gsWriteCount.store(0, std::memory_order_relaxed);
    m_vifWriteCount.store(0, std::memory_order_relaxed);
    m_codeRegions.clear();

    try
    {
        // Allocate main RAM
        m_rdram = new uint8_t[ramSize];
        std::memset(m_rdram, 0, ramSize);

        // Allocate scratchpad
        m_scratchpad = new uint8_t[PS2_SCRATCHPAD_SIZE];
        std::memset(m_scratchpad, 0, PS2_SCRATCHPAD_SIZE);
        ps2SetScratchpadHostPtr(m_scratchpad);

        // Initialize EE TLB entries (R5900 has 48 entries).
        m_tlbEntries.assign(48, TLBEntry{0, 0, 0, false});

        // Allocate IOP RAM
        iop_ram = new uint8_t[2 * 1024 * 1024]; // 2MB

        // Initialize IOP RAM with zeros
        std::memset(iop_ram, 0, 2 * 1024 * 1024);

        // Initialize I/O registers
        m_ioRegisters.clear();

        // Initialize GS registers
        memset(&gs_regs, 0, sizeof(gs_regs));

        // Allocate GS VRAM (4MB)
        m_gsVRAM = new uint8_t[PS2_GS_VRAM_SIZE];
        std::memset(m_gsVRAM, 0, PS2_GS_VRAM_SIZE);

        m_gsEmu.init(m_gsVRAM, PS2_GS_VRAM_SIZE, &gs_regs);

        m_iop.init(m_rdram);

        // Initialize VIF registers
        memset(&vif0_regs, 0, sizeof(vif0_regs));
        memset(&vif1_regs, 0, sizeof(vif1_regs));

        // Initialize DMA registers
        memset(dma_regs, 0, sizeof(dma_regs));

        // Initialize VU1 memory
        std::memset(m_vu1Code, 0, PS2_VU1_CODE_SIZE);
        std::memset(m_vu1Data, 0, PS2_VU1_DATA_SIZE);
        m_vif1Itop = 0;

        return true;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Error initializing PS2 memory: " << e.what() << std::endl;
        cleanup();
        return false;
    }
}

bool PS2Memory::isScratchpad(uint32_t address) const
{
    return address >= PS2_SCRATCHPAD_BASE &&
           address < PS2_SCRATCHPAD_BASE + PS2_SCRATCHPAD_SIZE;
}

uint32_t PS2Memory::translateAddress(uint32_t virtualAddress)
{
    if (isScratchpad(virtualAddress))
    {
        return virtualAddress - PS2_SCRATCHPAD_BASE;
    }

    // KSEG0/KSEG1 direct-mapped window.
    if (virtualAddress >= 0x80000000 && virtualAddress < 0xC0000000)
    {
        return virtualAddress & 0x1FFFFFFF;
    }

    // In this runtime, low segments are treated as physical-style addresses already.
    if (virtualAddress < 0x80000000)
    {
        return virtualAddress;
    }

    // KSEG2/KSEG3 are TLB mapped.
    if (virtualAddress >= 0xC0000000)
    {
        for (const auto &entry : m_tlbEntries)
        {
            if (entry.valid)
            {
                // PageMask uses bits [24:13]. Build an address-level mask (plus 4KB base page bits).
                const uint32_t mask = entry.mask & 0x01FFE000u;
                const uint32_t compareMask = ~(mask | 0xFFFu);
                if ((virtualAddress & compareMask) == (entry.vpn & compareMask))
                {
                    // TLB hit
                    const uint32_t pageOffsetMask = mask | 0xFFFu;
                    const uint32_t physBase = entry.pfn << 12;
                    return physBase | (virtualAddress & pageOffsetMask);
                }
            }
        }
        throw std::runtime_error("TLB miss for address: 0x" + std::to_string(virtualAddress));
    }

    return virtualAddress;
}

bool PS2Memory::tlbRead(uint32_t index, uint32_t &vpn, uint32_t &pfn, uint32_t &mask, bool &valid) const
{
    if (index >= m_tlbEntries.size())
    {
        return false;
    }

    const TLBEntry &entry = m_tlbEntries[index];
    vpn = entry.vpn;
    pfn = entry.pfn;
    mask = entry.mask;
    valid = entry.valid;
    return true;
}

bool PS2Memory::tlbWrite(uint32_t index, uint32_t vpn, uint32_t pfn, uint32_t mask, bool valid)
{
    if (index >= m_tlbEntries.size())
    {
        return false;
    }

    TLBEntry &entry = m_tlbEntries[index];
    entry.vpn = vpn & 0xFFFFF000u;
    entry.pfn = pfn & 0x000FFFFFu;
    entry.mask = mask & 0x01FFE000u;
    entry.valid = valid;
    return true;
}

int32_t PS2Memory::tlbProbe(uint32_t vpn) const
{
    const uint32_t normalizedVpn = vpn & 0xFFFFF000u;
    for (uint32_t i = 0; i < static_cast<uint32_t>(m_tlbEntries.size()); ++i)
    {
        const TLBEntry &entry = m_tlbEntries[i];
        if (!entry.valid)
        {
            continue;
        }

        const uint32_t mask = entry.mask & 0x01FFE000u;
        const uint32_t compareMask = ~(mask | 0xFFFu);
        if ((normalizedVpn & compareMask) == (entry.vpn & compareMask))
        {
            return static_cast<int32_t>(i);
        }
    }

    return -1;
}

uint8_t PS2Memory::read8(uint32_t address)
{
    const bool scratch = isScratchpad(address);
    uint32_t physAddr = translateAddress(address);

    if (scratch)
    {
        return m_scratchpad[physAddr];
    }
    if (uint8_t *p = vu1MemPtr(m_vu1Code, m_vu1Data, physAddr, 1))
        return *p;
    if (physAddr < PS2_RAM_SIZE)
    {
        return m_rdram[physAddr];
    }
    else if (physAddr >= PS2_IO_BASE && physAddr < PS2_IO_BASE + PS2_IO_SIZE)
    {
        uint32_t regAddr = physAddr & ~0x3;
        uint32_t value = readIORegister(regAddr);
        uint32_t shift = (physAddr & 3) * 8;
        return static_cast<uint8_t>((value >> shift) & 0xFF);
    }

    return 0;
}

uint16_t PS2Memory::read16(uint32_t address)
{
    if (address & 1)
    {
        throw std::runtime_error("Unaligned 16-bit read at address: 0x" + std::to_string(address));
    }

    const bool scratch = isScratchpad(address);
    uint32_t physAddr = translateAddress(address);

    if (scratch)
    {
        return loadScalar<uint16_t>(m_scratchpad, physAddr, PS2_SCRATCHPAD_SIZE, "read16 scratchpad", address);
    }
    if (uint8_t *p = vu1MemPtr(m_vu1Code, m_vu1Data, physAddr, 2))
    {
        uint16_t v; std::memcpy(&v, p, 2); return v;
    }
    if (physAddr < PS2_RAM_SIZE)
    {
        return loadScalar<uint16_t>(m_rdram, physAddr, PS2_RAM_SIZE, "read16 rdram", address);
    }
    else if (physAddr >= PS2_IO_BASE && physAddr < PS2_IO_BASE + PS2_IO_SIZE)
    {
        uint32_t regAddr = physAddr & ~0x3;
        uint32_t value = readIORegister(regAddr);
        uint32_t shift = (physAddr & 2) * 8;
        return static_cast<uint16_t>((value >> shift) & 0xFFFF);
    }

    return 0;
}

uint32_t PS2Memory::read32(uint32_t address)
{
    if (address & 3)
    {
        throw std::runtime_error("Unaligned 32-bit read at address: 0x" + std::to_string(address));
    }

    if (isGsPrivReg(address))
    {
        uint64_t *reg = gsRegPtr(gs_regs, address);
        uint32_t off = address & 7;
        uint64_t val = reg ? *reg : 0;
        return (uint32_t)(val >> (off * 8));
    }

    const bool scratch = isScratchpad(address);
    uint32_t physAddr = translateAddress(address);

    if (scratch)
    {
        return loadScalar<uint32_t>(m_scratchpad, physAddr, PS2_SCRATCHPAD_SIZE, "read32 scratchpad", address);
    }
    if (uint8_t *p = vu1MemPtr(m_vu1Code, m_vu1Data, physAddr, 4))
    {
        uint32_t v; std::memcpy(&v, p, 4); return v;
    }
    if (physAddr < PS2_RAM_SIZE)
    {
        return loadScalar<uint32_t>(m_rdram, physAddr, PS2_RAM_SIZE, "read32 rdram", address);
    }
    else if (physAddr >= PS2_IO_BASE && physAddr < PS2_IO_BASE + PS2_IO_SIZE)
    {
        return readIORegister(physAddr);
    }

    return 0;
}

uint64_t PS2Memory::read64(uint32_t address)
{
    if (address & 7)
    {
        throw std::runtime_error("Unaligned 64-bit read at address: 0x" + std::to_string(address));
    }

    if (isGsPrivReg(address))
    {
        uint64_t *reg = gsRegPtr(gs_regs, address);
        return reg ? *reg : 0;
    }

    const bool scratch = isScratchpad(address);
    uint32_t physAddr = translateAddress(address);

    if (scratch)
    {
        return loadScalar<uint64_t>(m_scratchpad, physAddr, PS2_SCRATCHPAD_SIZE, "read64 scratchpad", address);
    }
    if (uint8_t *p = vu1MemPtr(m_vu1Code, m_vu1Data, physAddr, 8))
    {
        uint64_t v; std::memcpy(&v, p, 8); return v;
    }
    if (physAddr < PS2_RAM_SIZE)
    {
        return loadScalar<uint64_t>(m_rdram, physAddr, PS2_RAM_SIZE, "read64 rdram", address);
    }

    return (uint64_t)read32(address) | ((uint64_t)read32(address + 4) << 32);
}

__m128i PS2Memory::read128(uint32_t address)
{
    if (address & 15)
    {
        throw std::runtime_error("Unaligned 128-bit read at address: 0x" + std::to_string(address));
    }

    const bool scratch = isScratchpad(address);
    uint32_t physAddr = translateAddress(address);

    if (scratch)
    {
        inRange(physAddr, sizeof(__m128i), PS2_SCRATCHPAD_SIZE, "read128 scratchpad", address);
        return _mm_loadu_si128(reinterpret_cast<__m128i *>(&m_scratchpad[physAddr]));
    }
    if (uint8_t *p = vu1MemPtr(m_vu1Code, m_vu1Data, physAddr, 16))
        return _mm_loadu_si128(reinterpret_cast<__m128i *>(p));
    if (physAddr < PS2_RAM_SIZE)
    {
        inRange(physAddr, sizeof(__m128i), PS2_RAM_SIZE, "read128 rdram", address);
        return _mm_loadu_si128(reinterpret_cast<__m128i *>(&m_rdram[physAddr]));
    }

    return _mm_setzero_si128();
}

void PS2Memory::write8(uint32_t address, uint8_t value)
{
    const bool scratch = isScratchpad(address);
    uint32_t physAddr = translateAddress(address);

    if (scratch)
    {
        m_scratchpad[physAddr] = value;
    }
    else if (uint8_t *p = vu1MemPtr(m_vu1Code, m_vu1Data, physAddr, 1))
    {
        *p = value;
    }
    else if (physAddr < PS2_RAM_SIZE)
    {
        m_rdram[physAddr] = value;
    }
    else if (physAddr >= PS2_IO_BASE && physAddr < PS2_IO_BASE + PS2_IO_SIZE)
    {
        // IO registers - handle byte writes by modifying the appropriate byte in the word
        uint32_t regAddr = physAddr & ~0x3;
        uint32_t shift = (physAddr & 3) * 8;
        uint32_t mask = ~(0xFF << shift);
        uint32_t newValue = (m_ioRegisters[regAddr] & mask) | ((uint32_t)value << shift);
        writeIORegister(regAddr, newValue);
    }
}

void PS2Memory::write16(uint32_t address, uint16_t value)
{
    if (address & 1)
    {
        throw std::runtime_error("Unaligned 16-bit write at address: 0x" + std::to_string(address));
    }

    const bool scratch = isScratchpad(address);
    uint32_t physAddr = translateAddress(address);

    if (scratch)
    {
        storeScalar<uint16_t>(m_scratchpad, physAddr, PS2_SCRATCHPAD_SIZE, value, "write16 scratchpad", address);
    }
    else if (uint8_t *p = vu1MemPtr(m_vu1Code, m_vu1Data, physAddr, 2))
    {
        std::memcpy(p, &value, 2);
    }
    else if (physAddr < PS2_RAM_SIZE)
    {
        storeScalar<uint16_t>(m_rdram, physAddr, PS2_RAM_SIZE, value, "write16 rdram", address);
    }
    else if (physAddr >= PS2_IO_BASE && physAddr < PS2_IO_BASE + PS2_IO_SIZE)
    {
        uint32_t regAddr = physAddr & ~0x3;
        uint32_t shift = (physAddr & 2) * 8;
        uint32_t mask = ~(0xFFFF << shift);
        uint32_t newValue = (m_ioRegisters[regAddr] & mask) | ((uint32_t)value << shift);
        writeIORegister(regAddr, newValue);
    }
}

void PS2Memory::write32(uint32_t address, uint32_t value)
{
    if (address & 3)
    {
        throw std::runtime_error("Unaligned 32-bit write at address: 0x" + std::to_string(address));
    }

    if (isGsPrivReg(address))
    {
        uint64_t *reg = gsRegPtr(gs_regs, address);
        if (reg)
        {
            uint32_t off = address & 7;
            uint64_t mask = 0xFFFFFFFFULL << (off * 8);
            uint64_t newVal = (*reg & ~mask) | ((uint64_t)value << (off * 8));
            *reg = newVal;
        }
        return;
    }

    const bool scratch = isScratchpad(address);
    uint32_t physAddr = translateAddress(address);

    if (scratch)
    {
        storeScalar<uint32_t>(m_scratchpad, physAddr, PS2_SCRATCHPAD_SIZE, value, "write32 scratchpad", address);
    }
    else if (uint8_t *p = vu1MemPtr(m_vu1Code, m_vu1Data, physAddr, 4))
    {
        std::memcpy(p, &value, 4);
    }
    else if (physAddr < PS2_RAM_SIZE)
    {
        markModified(address, 4);
        storeScalar<uint32_t>(m_rdram, physAddr, PS2_RAM_SIZE, value, "write32 rdram", address);
    }
    else if (physAddr >= PS2_IO_BASE && physAddr < PS2_IO_BASE + PS2_IO_SIZE)
    {
        writeIORegister(physAddr, value);
    }
}

void PS2Memory::write64(uint32_t address, uint64_t value)
{
    if (address & 7)
    {
        throw std::runtime_error("Unaligned 64-bit write at address: 0x" + std::to_string(address));
    }

    if (isGsPrivReg(address))
    {
        uint64_t *reg = gsRegPtr(gs_regs, address);
        if (reg)
        {
            uint32_t off = address - PS2_GS_PRIV_REG_BASE;
            if (off == 0x0070 || off == 0x0080 || off == 0x0020) {
                static int s_gsPrivLog = 0;
                if (++s_gsPrivLog <= 30 || (s_gsPrivLog % 200) == 0) {
                    const char *name = (off == 0x0070) ? "DISPFB1" : (off == 0x0080) ? "DISPLAY1" : "SMODE2";
                    printf("[GS_PRIV_WRITE #%d] %s(0x%08x) = 0x%016llx\n",
                           s_gsPrivLog, name, address, (unsigned long long)value);
                    if (off == 0x0070) {
                        uint32_t fbp = (uint32_t)(value & 0x1FF);
                        uint32_t fbw = (uint32_t)((value >> 9) & 0x3F);
                        uint32_t psm = (uint32_t)((value >> 15) & 0x1F);
                        printf("  DISPFB1 decoded: fbp=%u(base=0x%x) fbw=%u psm=%u\n",
                               fbp, fbp * 2048, fbw, psm);
                    }
                    if (off == 0x0080) {
                        uint32_t dx = (uint32_t)(value & 0xFFF);
                        uint32_t dy = (uint32_t)((value >> 12) & 0x7FF);
                        uint32_t magh = (uint32_t)((value >> 23) & 0xF);
                        uint32_t dw = (uint32_t)((value >> 32) & 0xFFF);
                        uint32_t dh = (uint32_t)((value >> 44) & 0x7FF);
                        printf("  DISPLAY1 decoded: dx=%u dy=%u magh=%u dw=%u dh=%u\n",
                               dx, dy, magh, dw, dh);
                    }
                }
            }
            *reg = value;
        }
        return;
    }

    const bool scratch = isScratchpad(address);
    uint32_t physAddr = translateAddress(address);

    if (scratch)
    {
        storeScalar<uint64_t>(m_scratchpad, physAddr, PS2_SCRATCHPAD_SIZE, value, "write64 scratchpad", address);
    }
    else if (uint8_t *p = vu1MemPtr(m_vu1Code, m_vu1Data, physAddr, 8))
    {
        std::memcpy(p, &value, 8);
    }
    else if (physAddr < PS2_RAM_SIZE)
    {
        storeScalar<uint64_t>(m_rdram, physAddr, PS2_RAM_SIZE, value, "write64 rdram", address);
    }
    else
    {
        write32(address, (uint32_t)value);
        write32(address + 4, (uint32_t)(value >> 32));
    }
}

void PS2Memory::write128(uint32_t address, __m128i value)
{
    if (address & 15)
    {
        throw std::runtime_error("Unaligned 128-bit write at address: 0x" + std::to_string(address));
    }

    const bool scratch = isScratchpad(address);
    uint32_t physAddr = translateAddress(address);

    if (scratch)
    {
        inRange(physAddr, sizeof(__m128i), PS2_SCRATCHPAD_SIZE, "write128 scratchpad", address);
        _mm_storeu_si128(reinterpret_cast<__m128i *>(&m_scratchpad[physAddr]), value);
    }
    else if (uint8_t *p = vu1MemPtr(m_vu1Code, m_vu1Data, physAddr, 16))
    {
        _mm_storeu_si128(reinterpret_cast<__m128i *>(p), value);
    }
    else if (physAddr < PS2_RAM_SIZE)
    {
        inRange(physAddr, sizeof(__m128i), PS2_RAM_SIZE, "write128 rdram", address);
        _mm_storeu_si128(reinterpret_cast<__m128i *>(&m_rdram[physAddr]), value);
    }
    else
    {
        uint64_t lo = _mm_extract_epi64(value, 0);
        uint64_t hi = _mm_extract_epi64(value, 1);
        write64(address, lo);
        write64(address + 8, hi);
    }
}

bool PS2Memory::writeIORegister(uint32_t address, uint32_t value)
{
    // D_STAT: writing 1 to bits 0-9 clears them, bits 16-25 toggles mask.
    // Must NOT overwrite the existing value; operate on it in place.
    if (address == 0x1000E010)
    {
        uint32_t stat = m_ioRegisters[0x1000E010];
        stat &= ~(value & 0x03FF);
        stat ^=  (value & 0x03FF0000);
        m_ioRegisters[0x1000E010] = stat;
        return true;
    }

    m_ioRegisters[address] = value;

    if (address >= 0x10008000 && address < 0x1000F000)
    {
        if ((address & 0xFF) == 0x00 && (value & 0x100))
        {
            const uint32_t channelBase = address & 0xFFFFFF00;
            const uint32_t madr = m_ioRegisters[channelBase + 0x10];
            const uint32_t qwc = m_ioRegisters[channelBase + 0x20];
            m_dmaStartCount.fetch_add(1, std::memory_order_relaxed);

            {
                const char* chName = (channelBase == 0x1000A000) ? "GIF" :
                                     (channelBase == 0x10009000) ? "VIF1" :
                                     (channelBase == 0x10008000) ? "VIF0" : "???";
                uint32_t tadr = m_ioRegisters[channelBase + 0x30];
                uint32_t mode = (value >> 2) & 0x3;
                static int _dmaLogCnt = 0;
                if (_dmaLogCnt++ < 40 || (_dmaLogCnt % 500) == 0)
                    printf("[DMA START #%d] ch=%s CHCR=0x%x MADR=0x%x QWC=0x%x TADR=0x%x mode=%u(%s)\n",
                           _dmaLogCnt, chName, value, madr, qwc, tadr, mode,
                           mode == 1 ? "chain" : mode == 0 ? "normal" : "?");
            }

            bool dmaProcessingOk = true;
            try {

            if ((channelBase == 0x1000A000 || channelBase == 0x10009000) && m_gsVRAM)
            {
                auto feedGIF = [&](uint32_t srcAddr, uint32_t qwCount)
                {
                    const uint64_t bytes64 = static_cast<uint64_t>(qwCount) * 16ull;
                    uint32_t bytes = (bytes64 > 0xFFFFFFFFull) ? 0xFFFFFFFFu : static_cast<uint32_t>(bytes64);
                    uint32_t src = 0;
                    try
                    {
                        src = translateAddress(srcAddr);
                    }
                    catch (const std::exception &)
                    {
                        return;
                    }
                    if (src >= PS2_RAM_SIZE)
                        return;
                    if (src + bytes > PS2_RAM_SIZE)
                        bytes = PS2_RAM_SIZE - src;
                    if (bytes == 0)
                        return;

                    m_gsEmu.processGIFPacket(m_rdram + src, bytes);
                    m_seenGifCopy = true;
                    m_gifCopyCount.fetch_add(1, std::memory_order_relaxed);
                };

                // VIF1 data contains VIF commands, not raw GIF data.
                // Parse VIF commands and only feed DIRECT/DIRECTHL payload to the GIF.
                // VIF1 local state persists across DMA tags within a single chain
                uint8_t vif1_cl = 1, vif1_wl = 1;
                static int _vif1DbgFrame = 0;
                ++_vif1DbgFrame;
                bool _vif1Log = (_vif1DbgFrame <= 30 || (_vif1DbgFrame % 300) < 3);
                int _vif1DirectCount = 0, _vif1UnpackCount = 0, _vif1MscalCount = 0;

                auto feedVIF1 = [&](uint32_t srcAddr, uint32_t qwCount)
                {
                    const uint32_t totalBytes = qwCount * 16;
                    uint32_t src = 0;
                    try { src = translateAddress(srcAddr); }
                    catch (...) { return; }
                    if (src >= PS2_RAM_SIZE)
                        return;
                    uint32_t avail = (src + totalBytes > PS2_RAM_SIZE)
                                     ? (PS2_RAM_SIZE - src) : totalBytes;
                    if (avail < 4)
                        return;

                    if (_vif1Log)
                        printf("[VIF1] feedVIF1 src=0x%x qwc=%u avail=%u\n", srcAddr, qwCount, avail);

                    const uint8_t *base = m_rdram + src;
                    uint32_t off = 0;
                    while (off + 4 <= avail)
                    {
                        uint32_t vifWord;
                        std::memcpy(&vifWord, base + off, 4);
                        uint8_t cmd = static_cast<uint8_t>((vifWord >> 24) & 0x7F);
                        uint16_t imm = static_cast<uint16_t>(vifWord & 0xFFFF);
                        uint8_t num = static_cast<uint8_t>((vifWord >> 16) & 0xFF);

                        if (cmd == 0x00) // NOP
                        {
                            off += 4;
                        }
                        else if (cmd == 0x01) // STCYCL
                        {
                            vif1_cl = static_cast<uint8_t>(imm & 0xFF);
                            vif1_wl = static_cast<uint8_t>((imm >> 8) & 0xFF);
                            if (vif1_cl == 0) vif1_cl = 1;
                            if (vif1_wl == 0) vif1_wl = 1;
                            off += 4;
                        }
                        else if (cmd == 0x02) // OFFSET
                        {
                            off += 4;
                        }
                        else if (cmd == 0x03) // BASE
                        {
                            off += 4;
                        }
                        else if (cmd == 0x04) // ITOP
                        {
                            m_vif1Itop = imm;
                            off += 4;
                        }
                        else if (cmd == 0x05) // STMOD
                        {
                            off += 4;
                        }
                        else if (cmd == 0x06) // MSKPATH3
                        {
                            off += 4;
                        }
                        else if (cmd == 0x07) // MARK
                        {
                            off += 4;
                        }
                        else if (cmd == 0x10) // FLUSHE
                        {
                            off += 4;
                        }
                        else if (cmd == 0x11) // FLUSH
                        {
                            off += 4;
                        }
                        else if (cmd == 0x13) // FLUSHA
                        {
                            off += 4;
                        }
                        else if (cmd == 0x14) // MSCAL
                        {
                            uint32_t startPC = static_cast<uint32_t>(imm) * 8u;
                            if (_vif1Log)
                                printf("[VIF1] MSCAL pc=0x%x itop=%u\n", startPC, m_vif1Itop);
                            m_vu1.execute(m_vu1Code, PS2_VU1_CODE_SIZE,
                                          m_vu1Data, PS2_VU1_DATA_SIZE,
                                          m_gsEmu, startPC, m_vif1Itop);
                            m_seenGifCopy = true;
                            ++_vif1MscalCount;
                            off += 4;
                        }
                        else if (cmd == 0x15) // MSCALF
                        {
                            uint32_t startPC = static_cast<uint32_t>(imm) * 8u;
                            if (_vif1Log)
                                printf("[VIF1] MSCALF pc=0x%x itop=%u\n", startPC, m_vif1Itop);
                            m_vu1.execute(m_vu1Code, PS2_VU1_CODE_SIZE,
                                          m_vu1Data, PS2_VU1_DATA_SIZE,
                                          m_gsEmu, startPC, m_vif1Itop);
                            m_seenGifCopy = true;
                            off += 4;
                        }
                        else if (cmd == 0x17) // MSCNT
                        {
                            if (_vif1Log)
                                printf("[VIF1] MSCNT itop=%u\n", m_vif1Itop);
                            m_vu1.resume(m_vu1Code, PS2_VU1_CODE_SIZE,
                                         m_vu1Data, PS2_VU1_DATA_SIZE,
                                         m_gsEmu, m_vif1Itop);
                            m_seenGifCopy = true;
                            off += 4;
                        }
                        else if (cmd == 0x20) // STMASK
                        {
                            off += 8;
                        }
                        else if (cmd == 0x30) // STROW
                        {
                            off += 20;
                        }
                        else if (cmd == 0x31) // STCOL
                        {
                            off += 20;
                        }
                        else if (cmd == 0x4A) // MPG — load VU1 microcode
                        {
                            uint32_t mpgBytes = static_cast<uint32_t>(num) * 8;
                            off += 4;
                            off = (off + 15) & ~15u;
                            uint32_t vuAddr = static_cast<uint32_t>(imm) * 8u;
                            if (off + mpgBytes <= avail && vuAddr + mpgBytes <= PS2_VU1_CODE_SIZE)
                            {
                                std::memcpy(m_vu1Code + vuAddr, base + off, mpgBytes);
                                if (_vif1Log)
                                    printf("[VIF1] MPG addr=0x%x bytes=%u\n", vuAddr, mpgBytes);
                            }
                            off += mpgBytes;
                            off = (off + 15) & ~15u;
                        }
                        else if (cmd == 0x50 || cmd == 0x51) // DIRECT / DIRECTHL
                        {
                            uint32_t gifQwc = imm;
                            uint32_t gifBytes = gifQwc * 16;
                            off += 4;
                            off = (off + 15) & ~15u;
                            if (off + gifBytes <= avail)
                            {
                                if (_vif1Log)
                                    printf("[VIF1] DIRECT%s qwc=%u bytes=%u off=%u avail=%u\n", cmd == 0x51 ? "HL" : "", gifQwc, gifBytes, off, avail);
                                m_gsEmu.processGIFPacket(base + off, gifBytes);
                                m_seenGifCopy = true;
                                m_gifCopyCount.fetch_add(1, std::memory_order_relaxed);
                                ++_vif1DirectCount;
                            }
                            else if (_vif1Log)
                            {
                                printf("[VIF1] DIRECT%s SKIP (overflow) qwc=%u gifBytes=%u off=%u avail=%u\n", cmd == 0x51 ? "HL" : "", gifQwc, gifBytes, off, avail);
                            }
                            off += gifBytes;
                        }
                        else if ((cmd & 0x60) == 0x60) // UNPACK variants
                        {
                            uint8_t vn = (cmd >> 2) & 0x3;  // 0=S,1=V2,2=V3,3=V4
                            uint8_t vl = cmd & 0x3;          // 0=32,1=16,2=8,3=5
                            if (_vif1Log)
                                printf("[VIF1] UNPACK V%d-%d num=%d addr=0x%x\n", vn+1, (int[]){32,16,8,5}[vl], num, (imm&0x3FF)*16);
                            ++_vif1UnpackCount;
                            bool usn = ((vifWord >> 14) & 1) != 0;
                            bool flg = ((vifWord >> 15) & 1) != 0;
                            (void)flg;
                            uint32_t vuAddr = (imm & 0x3FF) * 16u; // addr field in QW units

                            static const int componentBits[4] = {32, 16, 8, 5};
                            int bitsPerElement = componentBits[vl] * (vn + 1);
                            uint32_t dataBytes = (static_cast<uint32_t>(num) * bitsPerElement + 7) / 8;
                            off += 4;
                            uint32_t padded = (dataBytes + 3) & ~3u;

                            // Decode and write into VU1 data memory
                            const uint8_t *payload = base + off;
                            uint32_t payloadAvail = (off + padded <= avail) ? padded : 0;
                            uint32_t srcOff = 0;
                            uint32_t dstOff = vuAddr;
                            int components = vn + 1; // 1..4

                            for (int i = 0; i < num && srcOff < payloadAvail; ++i)
                            {
                                // With STCYCL, if WL > CL, we fill CL vectors then skip (WL-CL)
                                // For now handle the common CL==WL case (no fill/skip)
                                uint32_t vec[4] = {0, 0, 0, 0};
                                for (int c = 0; c < components && srcOff < payloadAvail; ++c)
                                {
                                    if (vl == 0) // 32-bit
                                    {
                                        if (srcOff + 4 <= payloadAvail)
                                        {
                                            std::memcpy(&vec[c], payload + srcOff, 4);
                                            srcOff += 4;
                                        }
                                    }
                                    else if (vl == 1) // 16-bit
                                    {
                                        if (srcOff + 2 <= payloadAvail)
                                        {
                                            uint16_t h;
                                            std::memcpy(&h, payload + srcOff, 2);
                                            srcOff += 2;
                                            if (usn)
                                                vec[c] = static_cast<uint32_t>(h);
                                            else
                                                vec[c] = static_cast<uint32_t>(static_cast<int32_t>(static_cast<int16_t>(h)));
                                        }
                                    }
                                    else if (vl == 2) // 8-bit
                                    {
                                        if (srcOff + 1 <= payloadAvail)
                                        {
                                            uint8_t b = payload[srcOff];
                                            srcOff += 1;
                                            if (usn)
                                                vec[c] = static_cast<uint32_t>(b);
                                            else
                                                vec[c] = static_cast<uint32_t>(static_cast<int32_t>(static_cast<int8_t>(b)));
                                        }
                                    }
                                    else // vl==3, V4-5 (rarely used)
                                    {
                                        srcOff += 2; // skip; not properly handled
                                    }
                                }
                                // For S (scalar) mode, replicate to all 4 components
                                if (vn == 0)
                                {
                                    vec[1] = vec[0];
                                    vec[2] = vec[0];
                                    vec[3] = vec[0];
                                }
                                // Write 128-bit vector to VU1 data memory
                                if (dstOff + 16 <= PS2_VU1_DATA_SIZE)
                                {
                                    std::memcpy(m_vu1Data + dstOff, vec, 16);
                                }
                                dstOff += 16;
                            }

                            off += padded;
                        }
                        else
                        {
                            if (_vif1Log)
                                printf("[VIF1] UNKNOWN cmd=0x%02x num=%d imm=0x%04x word=0x%08x\n", cmd, num, imm, vifWord);
                            off += 4;
                        }
                    }
                };

                auto feedData = [&](uint32_t srcAddr, uint32_t qwCount)
                {
                    if (channelBase == 0x1000A000) // GIF
                        feedGIF(srcAddr, qwCount);
                    else // VIF1
                        feedVIF1(srcAddr, qwCount);
                };

                if (qwc > 0)
                {
                    feedData(madr, qwc);
                    m_ioRegisters[channelBase + 0x10] = madr + qwc * 16;
                    m_ioRegisters[channelBase + 0x20] = 0;
                }
                else
                {
                    uint32_t tadr = m_ioRegisters[channelBase + 0x30];
                    constexpr int kMaxChainLinks = 4096;
                    int chainLinkCount = 0;
                    for (int link = 0; link < kMaxChainLinks; ++link)
                    {
                        uint32_t physTag = 0;
                        try { physTag = translateAddress(tadr); }
                        catch (...) { break; }
                        if (physTag + 16 > PS2_RAM_SIZE)
                            break;

                        const uint8_t *tp = m_rdram + physTag;
                        uint64_t tag = loadScalar<uint64_t>(tp, 0, 16, "dma chain tag", tadr);
                        uint16_t tagQwc = static_cast<uint16_t>(tag & 0xFFFF);
                        uint32_t id = static_cast<uint32_t>((tag >> 28) & 0x7);
                        uint32_t addr = static_cast<uint32_t>((tag >> 32) & 0x7FFFFFFF);
                        bool irq = ((tag >> 31) & 1) != 0;

                        if (_vif1Log && channelBase == 0x10009000) {
                            static const char *idNames[] = {"REFE","CNT","NEXT","REF","REFS","CALL","RET","END"};
                            printf("[VIF1_CHAIN #%d] link=%d tadr=0x%x id=%s(%d) qwc=%u addr=0x%x irq=%d tag=0x%016llx\n",
                                   _vif1DbgFrame, link, tadr, idNames[id < 8 ? id : 7], id, tagQwc, addr, irq, (unsigned long long)tag);
                        }
                        ++chainLinkCount;

                        uint32_t dataAddr = 0;
                        uint32_t nextTagAddr = 0;
                        bool endChain = false;

                        switch (id)
                        {
                        case 0: // REFE
                            dataAddr = addr;
                            nextTagAddr = tadr + 16;
                            endChain = true;
                            break;
                        case 1: // CNT
                            dataAddr = tadr + 16;
                            nextTagAddr = tadr + 16 + tagQwc * 16;
                            break;
                        case 2: // NEXT
                            dataAddr = tadr + 16;
                            nextTagAddr = addr;
                            break;
                        case 3: // REF
                        case 4: // REFS
                            dataAddr = addr;
                            nextTagAddr = tadr + 16;
                            break;
                        case 7: // END
                            dataAddr = tadr + 16;
                            endChain = true;
                            break;
                        default:
                            endChain = true;
                            break;
                        }

                        m_ioRegisters[channelBase + 0x10] = dataAddr;
                        m_ioRegisters[channelBase + 0x20] = 0;

                        if (tagQwc > 0)
                            feedData(dataAddr, tagQwc);

                        if (endChain || irq)
                            break;

                        tadr = nextTagAddr;
                    }
                    if (_vif1Log && channelBase == 0x10009000) {
                        printf("[VIF1_CHAIN #%d] DONE links=%d direct=%d unpack=%d mscal=%d\n",
                               _vif1DbgFrame, chainLinkCount, _vif1DirectCount, _vif1UnpackCount, _vif1MscalCount);
                    }
                }
            }

            } catch (const std::exception &ex) {
                static int _dmaExcCnt = 0;
                if (++_dmaExcCnt <= 30)
                    printf("[DMA EXCEPTION #%d] ch=0x%x: %s\n", _dmaExcCnt, channelBase, ex.what());
                dmaProcessingOk = false;
            } catch (...) {
                static int _dmaExcCnt2 = 0;
                if (++_dmaExcCnt2 <= 10)
                    printf("[DMA EXCEPTION(unknown) #%d] ch=0x%x\n", _dmaExcCnt2, channelBase);
                dmaProcessingOk = false;
            }

            // DMA completes instantly: clear STR and raise D_STAT flag
            m_ioRegisters[address] &= ~0x100;
            int chIdx = dmaChannelIndex(channelBase);
            if (chIdx >= 0)
            {
                m_ioRegisters[0x1000E010] |= (1u << chIdx);
                m_lastDmaCompleteChannel = chIdx;
                static int _dmaSetCnt = 0;
                if (++_dmaSetCnt <= 30 || (_dmaSetCnt % 500) == 0)
                    printf("[DMA COMPLETE #%d] ch=%d set m_lastDmaCompleteChannel ok=%d\n", _dmaSetCnt, chIdx, (int)dmaProcessingOk);
            }
        }

        return true;
    }

    if (address >= 0x10000000 && address < 0x10010000)
    {
        if (address >= 0x10003800 && address < 0x10003A00)
        {
            m_vifWriteCount.fetch_add(1, std::memory_order_relaxed);
        }
        if (address >= 0x10003C00 && address < 0x10003E00)
        {
            m_vifWriteCount.fetch_add(1, std::memory_order_relaxed);
        }
        if (address >= 0x10000200 && address < 0x10000300)
        {
            return true;
        }
        if (address >= 0x10000000 && address < 0x10000100)
        {
            return true;
        }
    }

    if (address >= 0x12000000 && address < 0x12001000)
    {
        m_gsWriteCount.fetch_add(1, std::memory_order_relaxed);
        return true;
    }

    return false;
}

uint32_t PS2Memory::readIORegister(uint32_t address)
{
    if (address >= 0x10000000 && address < 0x10010000)
    {
        if (address >= 0x10000000 && address < 0x10000100)
        {
            if ((address & 0xF) == 0x00)
            {
                return 0;
            }
        }

        if (address >= 0x10008000 && address < 0x1000F000)
        {
            if ((address & 0xFF) == 0x00)
            {
                uint32_t channelStatus = m_ioRegisters[address] & ~0x100;
                m_ioRegisters[address] = channelStatus;
                return channelStatus;
            }
        }

        if (address >= 0x10000200 && address < 0x10000300)
        {
            return 0;
        }
    }

    auto it = m_ioRegisters.find(address);
    if (it != m_ioRegisters.end())
    {
        return it->second;
    }

    return 0;
}

void PS2Memory::triggerVU1(uint32_t startPC)
{
    static bool _vu1Log = true;
    if (_vu1Log)
        printf("[VU1] CTC2 CMSAR1 trigger pc=0x%x itop=%u\n", startPC, m_vif1Itop);
    m_vu1.execute(m_vu1Code, PS2_VU1_CODE_SIZE,
                  m_vu1Data, PS2_VU1_DATA_SIZE,
                  m_gsEmu, startPC, m_vif1Itop);
    m_seenGifCopy = true;
}

void PS2Memory::registerCodeRegion(uint32_t start, uint32_t end)
{
    if (end <= start)
    {
        std::cerr << "Ignoring invalid code region: start=0x" << std::hex << start
                  << " end=0x" << end << std::dec << std::endl;
        return;
    }

    if ((end - start) > PS2_RAM_SIZE)
    {
        std::cerr << "Ignoring oversized code region: start=0x" << std::hex << start
                  << " end=0x" << end << std::dec << std::endl;
        return;
    }

    for (const auto &existing : m_codeRegions)
    {
        if (existing.start == start && existing.end == end)
        {
            return;
        }
    }

    CodeRegion region;
    region.start = start;
    region.end = end;

    size_t sizeInWords = (end - start + 3u) / 4u;
    region.modified.resize(sizeInWords, false);

    m_codeRegions.push_back(region);
    std::cout << "Registered code region: " << std::hex << start << " - " << end << std::dec << std::endl;
}

bool PS2Memory::isAddressInRegion(uint32_t address, const CodeRegion &region)
{
    return (address >= region.start && address < region.end);
}

void PS2Memory::markModified(uint32_t address, uint32_t size)
{
    if (size == 0)
    {
        return;
    }

    const uint64_t writeEnd = static_cast<uint64_t>(address) + static_cast<uint64_t>(size);
    for (auto &region : m_codeRegions)
    {
        const uint64_t regionStart = region.start;
        const uint64_t regionEnd = region.end;
        if (writeEnd <= regionStart || static_cast<uint64_t>(address) >= regionEnd)
        {
            continue;
        }

        uint32_t overlapStart = static_cast<uint32_t>(std::max<uint64_t>(address, regionStart));
        uint32_t overlapEnd = static_cast<uint32_t>(std::min<uint64_t>(writeEnd, regionEnd));

        for (uint32_t addr = overlapStart; addr < overlapEnd; addr += 4)
        {
            size_t bitIndex = (addr - region.start) / 4;
            if (bitIndex < region.modified.size())
            {
                region.modified[bitIndex] = true;
                std::cout << "Marked code at " << std::hex << addr << std::dec << " as modified" << std::endl;
            }
        }
    }
}

bool PS2Memory::isCodeModified(uint32_t address, uint32_t size)
{
    if (size == 0)
    {
        return false;
    }

    const uint64_t writeEnd = static_cast<uint64_t>(address) + static_cast<uint64_t>(size);
    for (const auto &region : m_codeRegions)
    {
        const uint64_t regionStart = region.start;
        const uint64_t regionEnd = region.end;
        if (writeEnd <= regionStart || static_cast<uint64_t>(address) >= regionEnd)
        {
            continue;
        }

        uint32_t overlapStart = static_cast<uint32_t>(std::max<uint64_t>(address, regionStart));
        uint32_t overlapEnd = static_cast<uint32_t>(std::min<uint64_t>(writeEnd, regionEnd));

        for (uint32_t addr = overlapStart; addr < overlapEnd; addr += 4)
        {
            size_t bitIndex = (addr - region.start) / 4;
            if (bitIndex < region.modified.size() && region.modified[bitIndex])
            {
                return true; // Found modified code
            }
        }
    }

    return false; // No modifications found
}

void PS2Memory::clearModifiedFlag(uint32_t address, uint32_t size)
{
    if (size == 0)
    {
        return;
    }

    const uint64_t writeEnd = static_cast<uint64_t>(address) + static_cast<uint64_t>(size);
    for (auto &region : m_codeRegions)
    {
        const uint64_t regionStart = region.start;
        const uint64_t regionEnd = region.end;
        if (writeEnd <= regionStart || static_cast<uint64_t>(address) >= regionEnd)
        {
            continue;
        }

        uint32_t overlapStart = static_cast<uint32_t>(std::max<uint64_t>(address, regionStart));
        uint32_t overlapEnd = static_cast<uint32_t>(std::min<uint64_t>(writeEnd, regionEnd));

        for (uint32_t addr = overlapStart; addr < overlapEnd; addr += 4)
        {
            size_t bitIndex = (addr - region.start) / 4;
            if (bitIndex < region.modified.size())
            {
                region.modified[bitIndex] = false;
            }
        }
    }
}

// ---------------------------------------------------------------------------
// loadTexToVRAM  --  clean C++ reimplementation of the core pbLoadTex logic.
//
// Follows the game's pointer chain to locate a texture entry in RDRAM, reads
// its parameters, and copies pixel data directly into GS VRAM, bypassing the
// recompiled MIPS DMA-queue machinery that is fragile under ctx->pc dispatch.
// ---------------------------------------------------------------------------

namespace
{
    inline uint32_t rdram32(const uint8_t *rdram, uint32_t addr)
    {
        uint32_t v;
        std::memcpy(&v, rdram + (addr & PS2_RAM_MASK), sizeof(v));
        return v;
    }
    inline uint16_t rdram16(const uint8_t *rdram, uint32_t addr)
    {
        uint16_t v;
        std::memcpy(&v, rdram + (addr & PS2_RAM_MASK), sizeof(v));
        return v;
    }
    inline uint8_t rdram8(const uint8_t *rdram, uint32_t addr)
    {
        return rdram[addr & PS2_RAM_MASK];
    }
    inline void wdram8(uint8_t *rdram, uint32_t addr, uint8_t v)
    {
        rdram[addr & PS2_RAM_MASK] = v;
    }

    inline uint32_t texBytesForPixels(uint8_t psm, uint32_t pixels)
    {
        switch (psm)
        {
        case 0:  // PSMCT32
        case 1:  // PSMCT24
        case 27: // PSMT8H
        case 36: // PSMT4HL
        case 44: // PSMT4HH
            return pixels * 4u;
        case 2:  // PSMCT16
        case 10: // PSMCT16S
            return pixels * 2u;
        case 19: // PSMT8
            return pixels;
        case 20: // PSMT4
            return (pixels + 1u) / 2u;
        default:
            return pixels * 4u;
        }
    }
} // anonymous namespace

int PS2Memory::loadTexToVRAM(uint8_t *rdram, uint32_t texId)
{
    if (!rdram || !m_gsVRAM)
        return 1;

    // ---- 1. Extract bank / texture index from the packed ID ----
    const uint32_t bankIdx = texId >> 16;
    const uint32_t texIdx  = texId & 0xFFFFu;

    // ---- 2. Follow MBRomTexPtr pointer chain ----
    const uint32_t base = rdram32(rdram, 0x36DEE0u);
    if (base == 0)
        return 1;

    const uint32_t banksArray = rdram32(rdram, base + 0x38u);
    if (banksArray == 0)
        return 1;

    const uint32_t bankPtr = rdram32(rdram, banksArray + bankIdx * 16u + 4u);
    if (bankPtr == 0)
        return 1;

    const uint32_t texArray = rdram32(rdram, bankPtr + 0x58u);
    if (texArray == 0)
        return 1;

    const uint32_t texEntryAddr = texArray + texIdx * 64u;

    // ---- 3. Check the loaded bitmap ----
    const uint32_t bitmapBase = rdram32(rdram, bankPtr + 0x78u);
    const uint32_t fmtShift   = rdram32(rdram, 0x3785E0u);

    if (bitmapBase != 0)
    {
        uint8_t bitmapByte = rdram8(rdram, bitmapBase + texIdx);
        uint8_t mask = static_cast<uint8_t>(1u << (fmtShift & 7u));
        if (bitmapByte & mask)
            return 1; // already loaded
    }

    // ---- 4. Read texture parameters from the 64-byte entry ----
    const uint32_t srcAddr = rdram32(rdram, texEntryAddr + 12u);
    const uint16_t texW    = rdram16(rdram, texEntryAddr + 22u);
    const uint16_t texH    = rdram16(rdram, texEntryAddr + 24u);
    const uint16_t cacheSz = rdram16(rdram, texEntryAddr + 26u);
    const uint32_t vramRaw = rdram32(rdram, texEntryAddr + 36u);
    const uint16_t psmRaw  = rdram16(rdram, texEntryAddr + 60u);
    const uint8_t  psm     = static_cast<uint8_t>(psmRaw & 0x3Fu);

    if (texW == 0 || texH == 0 || srcAddr == 0)
        return 1; // nothing to upload

    // ---- 5. Compute VRAM destination ----
    const uint32_t texVramOffset = (vramRaw >> 5) & 0x3FFFu;

    // Per-format cache base (game stores per-format allocation pointers here)
    const uint32_t fmtBase = rdram32(rdram, 0x378A98u + (fmtShift & 0xFu) * 4u);
    const uint32_t vramBlock = fmtBase + texVramOffset;

    // Each block is 256 bytes in PS2 GS addressing
    const uint32_t vramByteOff = vramBlock * 256u;

    // ---- 6. Copy pixel data row-by-row ----
    const uint32_t rowBytes = texBytesForPixels(psm, texW);
    if (rowBytes == 0)
        return 1;

    const uint32_t fbw    = std::max<uint32_t>(1u, (texW + 63u) / 64u);
    const uint32_t stride = texBytesForPixels(psm, fbw * 64u);
    if (stride == 0)
        return 1;

    const uint8_t *src = getMemPtr(rdram, srcAddr);
    if (!src)
        return 1;

    static int logCount = 0;
    if (logCount < 32)
    {
        ++logCount;
        std::cerr << "[loadTexToVRAM] id=0x" << std::hex << texId
                  << " bank=" << bankIdx << " idx=" << texIdx
                  << " src=0x" << srcAddr
                  << " " << std::dec << texW << "x" << texH
                  << " psm=" << (int)psm
                  << " vramOff=0x" << std::hex << vramByteOff
                  << " fmtBase=" << fmtBase << " texVramOff=" << texVramOffset
                  << std::dec << "\n";
    }

    for (uint32_t row = 0; row < texH; ++row)
    {
        uint32_t dstOff = vramByteOff + row * stride;
        uint32_t srcOff = row * rowBytes;

        if (dstOff >= PS2_GS_VRAM_SIZE)
            break;

        uint32_t copyBytes = rowBytes;
        if (dstOff + copyBytes > PS2_GS_VRAM_SIZE)
            copyBytes = static_cast<uint32_t>(PS2_GS_VRAM_SIZE - dstOff);

        std::memcpy(m_gsVRAM + dstOff, src + srcOff, copyBytes);
    }

    // ---- 7. Update global cache usage ----
    uint32_t curUsage = rdram32(rdram, 0x378A80u);
    curUsage += cacheSz;
    uint32_t tmp;
    std::memcpy(&tmp, &curUsage, sizeof(tmp));
    std::memcpy(rdram + (0x378A80u & PS2_RAM_MASK), &tmp, sizeof(tmp));

    // ---- 8. Mark texture as loaded in the bitmap ----
    if (bitmapBase != 0)
    {
        uint8_t bitmapByte = rdram8(rdram, bitmapBase + texIdx);
        bitmapByte |= static_cast<uint8_t>(1u << (fmtShift & 7u));
        wdram8(rdram, bitmapBase + texIdx, bitmapByte);
    }

    return 1;
}
