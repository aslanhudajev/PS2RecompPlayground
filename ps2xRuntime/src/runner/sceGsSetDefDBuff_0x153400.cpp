#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"
#include <cstring>

static void setRegU32(R5900Context* ctx, int reg, uint32_t val)
{
    if (reg != 0 && reg <= 31)
        ctx->r[reg] = _mm_set_epi64x(0, static_cast<int64_t>(static_cast<int32_t>(val)));
}

static uint32_t readStackU32(uint8_t* rdram, R5900Context* ctx, uint32_t offset)
{
    uint32_t sp = getRegU32(ctx, 29);
    uint8_t* ptr = getMemPtr(rdram, sp + offset);
    if (!ptr)
        return 0;
    uint32_t v = 0;
    std::memcpy(&v, ptr, 4);
    return v;
}

static void writeStackU32(uint8_t* rdram, R5900Context* ctx, uint32_t offset, uint32_t val)
{
    uint32_t sp = getRegU32(ctx, 29);
    uint8_t* ptr = getMemPtr(rdram, sp + offset);
    if (ptr)
        std::memcpy(ptr, &val, 4);
}

void sceGsSetDefDBuff_0x153400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sceGsSetDefDBuff");

    uint32_t dbuff = getRegU32(ctx, 4);
    uint32_t psm = getRegU32(ctx, 5);
    int32_t w = static_cast<int32_t>(static_cast<int16_t>(getRegU32(ctx, 6) & 0xFFFF));
    int32_t h = static_cast<int32_t>(static_cast<int16_t>(getRegU32(ctx, 7) & 0xFFFF));
    uint32_t disp_w = readStackU32(rdram, ctx, 16);
    uint32_t disp_h = readStackU32(rdram, ctx, 20);
    int32_t interlace = static_cast<int16_t>(readStackU32(rdram, ctx, 24) & 0xFFFF);

    if (w <= 0)
        w = 640;
    if (h <= 0)
        h = 448;

    setRegU32(ctx, 4, dbuff);
    setRegU32(ctx, 5, psm);
    setRegU32(ctx, 6, static_cast<uint32_t>(w));
    setRegU32(ctx, 7, static_cast<uint32_t>(h));
    writeStackU32(rdram, ctx, 16, 0);
    writeStackU32(rdram, ctx, 20, 0);
    ps2_stubs::sceGsSetDefDispEnv(rdram, ctx, runtime);

    setRegU32(ctx, 4, dbuff + 0x28);
    ps2_stubs::sceGsSetDefDispEnv(rdram, ctx, runtime);

    setRegU32(ctx, 4, dbuff + 0x60);
    setRegU32(ctx, 5, psm);
    setRegU32(ctx, 6, static_cast<uint32_t>(w));
    setRegU32(ctx, 7, static_cast<uint32_t>(h));
    writeStackU32(rdram, ctx, 16, disp_w);
    writeStackU32(rdram, ctx, 20, disp_h);
    ps2_stubs::sceGsSetDefDrawEnv(rdram, ctx, runtime);

    setRegU32(ctx, 4, dbuff + 0x150);
    ps2_stubs::sceGsSetDefDrawEnv(rdram, ctx, runtime);

    if (interlace != 0)
    {
        int32_t clear_x = 0x800 - (w >> 1);
        int32_t clear_y = 0x800 - (h >> 1);
        setRegU32(ctx, 4, dbuff + 0xe0);
        setRegU32(ctx, 5, disp_w);
        setRegU32(ctx, 6, static_cast<uint32_t>(clear_x));
        setRegU32(ctx, 7, static_cast<uint32_t>(clear_y));
        writeStackU32(rdram, ctx, 16, static_cast<uint32_t>(w));
        writeStackU32(rdram, ctx, 20, static_cast<uint32_t>(h));
        writeStackU32(rdram, ctx, 24, 0);
        writeStackU32(rdram, ctx, 28, 0);
        ps2_stubs::sceGsSetDefClear(rdram, ctx, runtime);

        setRegU32(ctx, 4, dbuff + 0x1d0);
        ps2_stubs::sceGsSetDefClear(rdram, ctx, runtime);
    }

    uint8_t* base = getMemPtr(rdram, dbuff);
    if (base)
    {
        std::memset(base + 0x50, 0, 16);
        std::memset(base + 0x140, 0, 16);
        uint64_t* words50 = reinterpret_cast<uint64_t*>(base + 0x50);
        uint64_t* words140 = reinterpret_cast<uint64_t*>(base + 0x140);
        uint64_t tag = (interlace != 0) ? 0x100000000000800eULL : 0x1000000000008008ULL;
        words50[0] = (words50[0] & 0xFFFFFFFFFFF8000ULL) | tag;
        words50[1] = (words50[1] & 0xFFFFFFFFFFFFFFF0ULL) | 0xeULL;
        words140[0] = (words140[0] & 0xFFFFFFFFFFF8000ULL) | tag;
        words140[1] = (words140[1] & 0xFFFFFFFFFFFFFFF0ULL) | 0xeULL;
    }

    setRegU32(ctx, 4, psm);
    setRegU32(ctx, 6, static_cast<uint32_t>(w));
    setRegU32(ctx, 7, static_cast<uint32_t>(h));
    ps2_stubs::sceGszbufaddr(rdram, ctx, runtime);
    int32_t zbuf = static_cast<int32_t>(getRegU32(ctx, 2) & 0xFFFF);

    if (runtime && base)
    {
        uint8_t* scratch = runtime->memory().getScratchpad();
        if (scratch)
        {
            uint64_t gparam = 0;
            std::memcpy(&gparam, scratch + 0x100, 8);
            bool useZbuf = ((gparam & 0xFFFF0000FFFFULL) == 1ULL) || (static_cast<int16_t>(gparam & 0xFFFF) == 0);
            if (useZbuf)
            {
                uint64_t* draw0 = reinterpret_cast<uint64_t*>(base + 0x60);
                uint64_t* draw38 = reinterpret_cast<uint64_t*>(base + 0x38);
                int32_t zbufHalf = zbuf >> 1;
                draw0[0] = (draw0[0] & 0xFFFFFFFFFFFFFE00ULL) | (static_cast<uint64_t>(zbufHalf) & 0x1FFULL);
                draw38[0] = (draw38[0] & 0xFFFFFFFFFFFFFE00ULL) | (static_cast<uint64_t>(zbufHalf) & 0x1FFULL);
            }
        }
    }

    ctx->pc = getRegU32(ctx, 31);
}
