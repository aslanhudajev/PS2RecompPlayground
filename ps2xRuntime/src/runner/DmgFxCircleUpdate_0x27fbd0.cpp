#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DmgFxCircleUpdate
// Address: 0x27fbd0 - 0x27fbe0
void DmgFxCircleUpdate_0x27fbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27fbd0u;

    // 0x27fbd0: 0x46006346
    ctx->pc = 0x27fbd0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x27fbd4: 0x44807000
    ctx->pc = 0x27fbd4u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 0);
    // 0x27fbd8: 0x809fe8c
    ctx->pc = 0x27FBD8u;
    ctx->pc = 0x27FBDCu;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    ctx->pc = 0x27FA30u;
    DmgFxNodeUpdate_0x27fa30(rdram, ctx, runtime); return;
    ctx->pc = 0x27FBE0u;
}
