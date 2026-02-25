#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Ghidra decomp: set clear color bytes at ctx+0x30..0x34
void sceHiGsCtxSetClearColor_0x1133a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    (void)runtime;
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsCtxSetClearColor_0x1133a0");
#endif
    uint32_t ctxAddr = GPR_U32(ctx, 4);
    uint8_t p2 = static_cast<uint8_t>(GPR_U32(ctx, 5));
    uint8_t p3 = static_cast<uint8_t>(GPR_U32(ctx, 6));
    uint8_t p4 = static_cast<uint8_t>(GPR_U32(ctx, 7));
    uint8_t p5 = 0u;
    const uint32_t sp = GPR_U32(ctx, 29);
    p5 = static_cast<uint8_t>(READ32(sp + 16));

    uint8_t* p = getMemPtr(rdram, ctxAddr);
    if (p) {
        p[0x30] = p2;
        *reinterpret_cast<uint32_t*>(p + 0x34) = 0x3f800000u;
        p[0x31] = p3;
        p[0x32] = p4;
        p[0x33] = p5;
    }
    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}
