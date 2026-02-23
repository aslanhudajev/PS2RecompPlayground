#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Ghidra decomp: sceGsSwapDBuff(param1, param2) calls sceGsPutDispEnv then sceGsPutDrawEnv
void sceGsSwapDBuff_0x153698(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    PS2_INIT_LOG_ENTRY("sceGsSwapDBuff");

    const uint32_t param1 = GPR_U32(ctx, 4);
    const uint32_t param2 = GPR_U32(ctx, 5);
    const uint32_t bufIdx = param2 & 1u;
    const uint32_t dispEnvAddr = param1 + (bufIdx * 0x28u);
    const uint32_t drawEnvAddr = param1 + (bufIdx ? 0x140u : 0x50u);

    SET_GPR_U32(ctx, 4, dispEnvAddr);
    ps2_stubs::sceGsPutDispEnv(rdram, ctx, runtime);

    SET_GPR_U32(ctx, 4, drawEnvAddr);
    ps2_stubs::sceGsPutDrawEnv(rdram, ctx, runtime);

    ctx->pc = getRegU32(ctx, 31);
}
