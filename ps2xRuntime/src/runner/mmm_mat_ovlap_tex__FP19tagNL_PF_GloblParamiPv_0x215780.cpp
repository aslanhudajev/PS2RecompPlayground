#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mmm_mat_ovlap_tex__FP19tagNL_PF_GloblParamiPv
// Address: 0x215780 - 0x2157e8
void mmm_mat_ovlap_tex__FP19tagNL_PF_GloblParamiPv_0x215780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mmm_mat_ovlap_tex__FP19tagNL_PF_GloblParamiPv");


    ctx->pc = 0x215780u;

    // 0x215780: 0x8c870004
    ctx->pc = 0x215780u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x215784: 0x8cc80000
    ctx->pc = 0x215784u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x215788: 0x3c030008
    ctx->pc = 0x215788u;
    SET_GPR_U32(ctx, 3, ((uint32_t)8 << 16));
    // 0x21578c: 0x34e70001
    ctx->pc = 0x21578cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 1));
    // 0x215790: 0xac870004
    ctx->pc = 0x215790u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x215794: 0x8c870034
    ctx->pc = 0x215794u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x215798: 0x2406fff0
    ctx->pc = 0x215798u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x21579c: 0x82a03
    ctx->pc = 0x21579cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 8), 8));
    // 0x2157a0: 0xe63024
    ctx->pc = 0x2157a0u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2157a4: 0xac860034
    ctx->pc = 0x2157a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 6));
    // 0x2157a8: 0x8c860034
    ctx->pc = 0x2157a8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2157ac: 0x34c60009
    ctx->pc = 0x2157acu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 9));
    // 0x2157b0: 0xac860034
    ctx->pc = 0x2157b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 6));
    // 0x2157b4: 0x8c860038
    ctx->pc = 0x2157b4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x2157b8: 0xc31825
    ctx->pc = 0x2157b8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2157bc: 0x5010003
    ctx->pc = 0x2157BCu;
    {
        const bool branch_taken_0x2157bc = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x2157C0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
        if (branch_taken_0x2157bc) {
            ctx->pc = 0x2157CCu;
            goto label_2157cc;
        }
    }
    ctx->pc = 0x2157C4u;
    // 0x2157c4: 0x250300ff
    ctx->pc = 0x2157c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 8), 255));
    // 0x2157c8: 0x32a03
    ctx->pc = 0x2157c8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 8));
label_2157cc:
    // 0x2157cc: 0x3c0328a2
    ctx->pc = 0x2157ccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)10402 << 16));
    // 0x2157d0: 0x34638000
    ctx->pc = 0x2157d0u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 32768));
    // 0x2157d4: 0xa31825
    ctx->pc = 0x2157d4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2157d8: 0xac830060
    ctx->pc = 0x2157d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 3));
    // 0x2157dc: 0x24030002
    ctx->pc = 0x2157dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2157e0: 0x3e00008
    ctx->pc = 0x2157E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2157E4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2157CCu: goto label_2157cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2157E8u;
}
