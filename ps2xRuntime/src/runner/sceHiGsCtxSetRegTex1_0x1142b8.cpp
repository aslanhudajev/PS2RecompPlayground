#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include <cstring>
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Ghidra: ctx+0xe4|=8, ctx+0x90 RMW with 8 params
void sceHiGsCtxSetRegTex1_0x1142b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    (void)runtime;
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsCtxSetRegTex1_0x1142b8");
#endif
    uint32_t ctxAddr = GPR_U32(ctx, 4);
    uint32_t p2 = GPR_U32(ctx, 5) & 1u, p3 = GPR_U32(ctx, 6) & 7u;
    uint32_t p4 = GPR_U32(ctx, 7) & 1u, p5 = GPR_U32(ctx, 8) & 7u;
    uint32_t p6 = GPR_U32(ctx, 9) & 1u, p7 = GPR_U32(ctx, 10) & 3u;
    uint32_t sp = GPR_U32(ctx, 29);
    uint32_t p8 = READ32(ADD32(sp, 16u)) & 0xfffu;

    uint8_t* p = getMemPtr(rdram, ctxAddr);
    if (p) {
        uint16_t e4;
        std::memcpy(&e4, p + 0xe4, 2);
        e4 |= 8u;
        std::memcpy(p + 0xe4, &e4, 2);
        uint64_t v90;
        std::memcpy(&v90, p + 0x90, 8);
        v90 = (v90 & 0xfffff000ffe7fc02ULL) | (p2 & 1) | (p3 << 2) | (p4 << 5) |
            (p5 << 6) | (p6 << 9) | (static_cast<uint64_t>(p7) << 19) | (static_cast<uint64_t>(p8) << 32);
        std::memcpy(p + 0x90, &v90, 8);
    }
    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}
