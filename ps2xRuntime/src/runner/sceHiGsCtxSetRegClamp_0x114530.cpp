#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include <cstring>
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Ghidra: ctx+0xb0 RMW with 7 params, ctx+0xe4|=0x80
void sceHiGsCtxSetRegClamp_0x114530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    (void)runtime;
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsCtxSetRegClamp_0x114530");
#endif
    uint32_t ctxAddr = GPR_U32(ctx, 4);
    uint32_t p2 = GPR_U32(ctx, 5) & 3u, p3 = GPR_U32(ctx, 6) & 3u;
    uint32_t p4 = GPR_U32(ctx, 7) & 0x3ffu, p5 = GPR_U32(ctx, 8) & 0x3ffu;
    uint32_t p6 = GPR_U32(ctx, 9) & 0x3ffu, p7 = GPR_U32(ctx, 10) & 0x3ffu;

    uint8_t* p = getMemPtr(rdram, ctxAddr);
    if (p) {
        uint64_t vb0;
        std::memcpy(&vb0, p + 0xb0, 8);
        vb0 = (vb0 & 0xfffff00000000000ULL) | (p2 & 3) | (p3 << 2) | (p4 << 4) |
            (p5 << 14) | (p6 << 24) | (static_cast<uint64_t>(p7) << 34);
        std::memcpy(p + 0xb0, &vb0, 8);
        uint16_t e4;
        std::memcpy(&e4, p + 0xe4, 2);
        e4 |= 0x80u;
        std::memcpy(p + 0xe4, &e4, 2);
    }
    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}
