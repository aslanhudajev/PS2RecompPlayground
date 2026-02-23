#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mmm_strip_ovlap_tex__FP19tagNL_PF_StripParamiPv
// Address: 0x2157f0 - 0x215810
void mmm_strip_ovlap_tex__FP19tagNL_PF_StripParamiPv_0x2157f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mmm_strip_ovlap_tex__FP19tagNL_PF_StripParamiPv");


    ctx->pc = 0x2157f0u;

    // 0x2157f0: 0x8c83000c
    ctx->pc = 0x2157f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2157f4: 0x3c050008
    ctx->pc = 0x2157f4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)8 << 16));
    // 0x2157f8: 0x651825
    ctx->pc = 0x2157f8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2157fc: 0xac83000c
    ctx->pc = 0x2157fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x215800: 0x8c830010
    ctx->pc = 0x215800u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x215804: 0x651825
    ctx->pc = 0x215804u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x215808: 0x3e00008
    ctx->pc = 0x215808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21580Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x215810u;
}
