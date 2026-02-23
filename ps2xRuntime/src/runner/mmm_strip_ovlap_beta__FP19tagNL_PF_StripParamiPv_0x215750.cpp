#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mmm_strip_ovlap_beta__FP19tagNL_PF_StripParamiPv
// Address: 0x215750 - 0x215774
void mmm_strip_ovlap_beta__FP19tagNL_PF_StripParamiPv_0x215750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mmm_strip_ovlap_beta__FP19tagNL_PF_StripParamiPv");


    ctx->pc = 0x215750u;

    // 0x215750: 0x3c03fff7
    ctx->pc = 0x215750u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65527 << 16));
    // 0x215754: 0x3465ffff
    ctx->pc = 0x215754u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 65535));
    // 0x215758: 0x8c83000c
    ctx->pc = 0x215758u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21575c: 0x651824
    ctx->pc = 0x21575cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x215760: 0xac83000c
    ctx->pc = 0x215760u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x215764: 0x8c830010
    ctx->pc = 0x215764u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x215768: 0x651824
    ctx->pc = 0x215768u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21576c: 0x3e00008
    ctx->pc = 0x21576Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215770u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x215774u;
}
