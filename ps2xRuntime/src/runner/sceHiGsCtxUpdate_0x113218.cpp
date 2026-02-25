#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_recompiled_functions.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

static constexpr uint32_t kCtxaddrTable = 0x0020fbb0u;
static const uint8_t kCtxaddrBytes[13] = {0x4C, 0x4E, 0x06, 0x14, 0x16, 0x34, 0x36, 0x08, 0x47, 0x42, 0x18, 0x40, 0x4A};

// Ghidra decomp: iterates e4 bitmask, copies rects from ctx+0x78 to ctx+0x74 array, updates ctx+0x70
// Uses ctxaddr table for GS register indices. Calls sceHiGsCtxSetHalfOffset when ec!=0.
void sceHiGsCtxUpdate_0x113218(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsCtxUpdate_0x113218");
#endif
    uint32_t ctxAddr = getRegU32(ctx, 4);
    uint8_t* p = getMemPtr(rdram, ctxAddr);
    if (!p) {
        setReturnS32(ctx, -1);
        ctx->pc = getRegU32(ctx, 31);
        return;
    }

    p[0xef] = 0xff;
    p[0xee] = 0xff;

    uint16_t e4;
    std::memcpy(&e4, p + 0xe4, 2);
    uint32_t rectBase;
    std::memcpy(&rectBase, p + 0x74, 4);

    uint32_t u8 = 0;
    for (uint32_t u9 = 0; u9 < 13u; u9++) {
        if ((static_cast<int32_t>(e4) >> (u9 & 0x1Fu) & 1) != 0) {
            uint8_t* dest = getMemPtr(rdram, rectBase + u8 * 16);
            uint64_t rectVal;
            std::memcpy(&rectVal, p + 0x78 + u8 * 8, 8);
            if (dest) {
                std::memcpy(dest, &rectVal, 8);
                uint8_t c = kCtxaddrBytes[u9];
                if (p[0xe7] != 0)
                    c++;
                dest[8] = c;
                uint64_t val8 = static_cast<uint64_t>(dest[8]) & 0xFFu;
                std::memcpy(dest + 8, &val8, 8);

                if (c == 0x4C) {
                    p[0xee] = static_cast<uint8_t>(u8);
                    uint16_t e0e8;
                    uint8_t e8 = p[0xe8];
                    std::memcpy(&e0e8, p + 0xe0 + e8 * 2, 2);
                    rectVal = (rectVal & 0xFFFFFFFFFFFFFE00ULL) | (e0e8 & 0x1ffu);
                    std::memcpy(dest, &rectVal, 8);
                } else if (c == 0x18) {
                    p[0xef] = static_cast<uint8_t>(u8);
                }
                u8++;
            }
        }
    }

    uint32_t ptr70Val;
    std::memcpy(&ptr70Val, p + 0x70, 4);
    uint8_t* ptr70Deref = getMemPtr(rdram, ptr70Val);
    if (ptr70Deref) {
        uint64_t val;
        std::memcpy(&val, ptr70Deref, 8);
        val = (val & 0xFFFFFFFFFFFF8000ULL) | (u8 & 0x7FFFu);
        std::memcpy(ptr70Deref, &val, 8);
    }

    if (p[0xec] != 0) {
        if (runtime->hasFunction(0x112830u)) {
            R5900Context tmp = *ctx;
            SET_GPR_U32(&tmp, 4, ctxAddr);
            SET_GPR_U32(&tmp, 5, static_cast<uint32_t>(static_cast<uint8_t>(p[0xe9])));
            tmp.pc = 0x112830u;
            auto fn = runtime->lookupFunction(0x112830u);
            fn(rdram, &tmp, runtime);
        }
    }

    if (p[0xe6] != 0) {
        uint64_t u6 = (p[0xe7] != 0) ? 0x48ULL : 0x47ULL;
        uint64_t u2 = (p[0xe7] != 0) ? 0x48ULL : 0x47ULL;
        std::memcpy(p + 0x60, p + 0xb8, 8);
        uint64_t v20;
        std::memcpy(&v20, p + 0x20, 8);
        v20 = (v20 & 0xFFFFFFFFFFFFFDFFULL) | ((static_cast<uint64_t>(p[0xe7]) & 1u) << 9);
        std::memcpy(p + 0x20, &v20, 8);
        std::memcpy(p + 0x18, &u2, 8);
        std::memcpy(p + 0x68, &u6, 8);
    }

    setReturnS32(ctx, 0);
    ctx->pc = getRegU32(ctx, 31);
}
