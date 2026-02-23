#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mmm_strip_frc_hinobto__FP19tagNL_PF_StripParamiPv
// Address: 0x215190 - 0x2151b4
void mmm_strip_frc_hinobto__FP19tagNL_PF_StripParamiPv_0x215190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mmm_strip_frc_hinobto__FP19tagNL_PF_StripParamiPv");


    ctx->pc = 0x215190u;

    // 0x215190: 0x3c03ffdf
    ctx->pc = 0x215190u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65503 << 16));
    // 0x215194: 0x3465ffff
    ctx->pc = 0x215194u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 65535));
    // 0x215198: 0x8c83000c
    ctx->pc = 0x215198u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21519c: 0x651824
    ctx->pc = 0x21519cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2151a0: 0xac83000c
    ctx->pc = 0x2151a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2151a4: 0x8c830010
    ctx->pc = 0x2151a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2151a8: 0x651824
    ctx->pc = 0x2151a8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2151ac: 0x3e00008
    ctx->pc = 0x2151ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2151B0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2151B4u;
}
