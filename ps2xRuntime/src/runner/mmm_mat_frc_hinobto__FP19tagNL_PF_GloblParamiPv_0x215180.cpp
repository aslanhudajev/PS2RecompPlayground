#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mmm_mat_frc_hinobto__FP19tagNL_PF_GloblParamiPv
// Address: 0x215180 - 0x21518c
void mmm_mat_frc_hinobto__FP19tagNL_PF_GloblParamiPv_0x215180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mmm_mat_frc_hinobto__FP19tagNL_PF_GloblParamiPv");


    ctx->pc = 0x215180u;

    // 0x215180: 0x8cc30000
    ctx->pc = 0x215180u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x215184: 0x3e00008
    ctx->pc = 0x215184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215188u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21518Cu;
}
