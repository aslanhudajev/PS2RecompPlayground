#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"
#include "ps2_syscalls.h"
#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Ghidra decomp: *(ctx+0x54)=param2, *(ctx+0x44)=param2
void sceHiGsCtxSetClearZ_0x1133c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    (void)runtime;
#ifdef _DEBUG
    PS_LOG_ENTRY("sceHiGsCtxSetClearZ_0x1133c8");
#endif
    uint32_t ctxAddr = GPR_U32(ctx, 4);
    uint32_t val = GPR_U32(ctx, 5);
    uint8_t* p = getMemPtr(rdram, ctxAddr);
    if (p) {
        *reinterpret_cast<uint32_t*>(p + 0x54) = val;
        *reinterpret_cast<uint32_t*>(p + 0x44) = val;
    }
    setReturnU32(ctx, 0u);
    ctx->pc = getRegU32(ctx, 31);
}
