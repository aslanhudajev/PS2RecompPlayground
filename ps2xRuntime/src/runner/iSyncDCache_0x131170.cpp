#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iSyncDCache
// Address: 0x131170 - 0x131184
void iSyncDCache_0x131170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x131170u;

    // 0x131170: 0x3c02ffff
    ctx->pc = 0x131170u;
    SET_GPR_S32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x131174: 0x3442ffc0
    ctx->pc = 0x131174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)65472);
    // 0x131178: 0xa22824
    ctx->pc = 0x131178u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x13117c: 0x804c412
    ctx->pc = 0x13117Cu;
    ctx->pc = 0x131180u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x131048u;
    _sceSDC_0x131048(rdram, ctx, runtime); return;
    ctx->pc = 0x131184u;
}
