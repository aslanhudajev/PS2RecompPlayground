#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#include <cstring>
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Ghidra: ctx+0xc0 RMW with params, ctx+0xc4=param6, ctx+0xe4|=0x200
void sceHiGsCtxSetRegAlpha_0x1146b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    (void)runtime;
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsCtxSetRegAlpha_0x1146b0");
#endif
    uint32_t ctxAddr = GPR_U32(ctx, 4);
    uint32_t p2 = GPR_U32(ctx, 5) & 3u, p3 = GPR_U32(ctx, 6) & 3u;
    uint32_t p4 = GPR_U32(ctx, 7) & 3u, p5 = GPR_U32(ctx, 8) & 3u;
    uint8_t p6 = static_cast<uint8_t>(READ32(ADD32(GPR_U32(ctx, 29), 16u)));

    uint8_t* p = getMemPtr(rdram, ctxAddr);
    if (p) {
        uint64_t v;
        std::memcpy(&v, p + 0xc0, 8);
        v = (v & 0xffffffffffffff00ULL) | (p2 & 3u) | (p3 << 2) | (p4 << 4) | (p5 << 6);
        std::memcpy(p + 0xc0, &v, 8);
        p[0xc4] = p6;
        uint16_t e4;
        std::memcpy(&e4, p + 0xe4, 2);
        e4 |= 0x200u;
        std::memcpy(p + 0xe4, &e4, 2);
    }
    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}
