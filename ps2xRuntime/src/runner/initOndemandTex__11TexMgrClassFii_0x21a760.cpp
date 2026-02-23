#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: initOndemandTex__11TexMgrClassFii
// Address: 0x21a760 - 0x21a7d4
void initOndemandTex__11TexMgrClassFii_0x21a760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("initOndemandTex__11TexMgrClassFii");


    ctx->pc = 0x21a760u;

    // 0x21a760: 0x27bdffd0
    ctx->pc = 0x21a760u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21a764: 0x7fbf0020
    ctx->pc = 0x21a764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x21a768: 0x7fb10010
    ctx->pc = 0x21a768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21a76c: 0x7fb00000
    ctx->pc = 0x21a76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21a770: 0x70a08628
    ctx->pc = 0x21a770u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x21a774: 0xac9003ac
    ctx->pc = 0x21a774u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 940), GPR_U32(ctx, 16));
    // 0x21a778: 0xac8603b0
    ctx->pc = 0x21a778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 944), GPR_U32(ctx, 6));
    // 0x21a77c: 0x8c8503b4
    ctx->pc = 0x21a77cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 948)));
    // 0x21a780: 0x10a00003
    ctx->pc = 0x21A780u;
    {
        const bool branch_taken_0x21a780 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A784u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21a780) {
            ctx->pc = 0x21A790u;
            goto label_21a790;
        }
    }
    ctx->pc = 0x21A788u;
    // 0x21a788: 0xc0868f4
    ctx->pc = 0x21A788u;
    SET_GPR_U32(ctx, 31, 0x21A790u);
    ctx->pc = 0x21A3D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        free__14TexBufMgrClassFP10TexSurface_0x21a3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A790u; }
        else if (ctx->pc != 0x21A790u) { ctx->pc = 0x21A790u; }
    }
    if (ctx->pc != 0x21A790u) { return; }
    ctx->pc = 0x21A790u;
label_21a790:
    // 0x21a790: 0x72002e28
    ctx->pc = 0x21a790u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x21a794: 0x72202628
    ctx->pc = 0x21a794u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x21a798: 0xc086850
    ctx->pc = 0x21A798u;
    SET_GPR_U32(ctx, 31, 0x21A7A0u);
    ctx->pc = 0x21A79Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 256));
    ctx->pc = 0x21A140u;
    {
        const uint32_t __entryPc = ctx->pc;
        alloc__14TexBufMgrClassFii_0x21a140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21A7A0u; }
        else if (ctx->pc != 0x21A7A0u) { ctx->pc = 0x21A7A0u; }
    }
    if (ctx->pc != 0x21A7A0u) { return; }
    ctx->pc = 0x21A7A0u;
    // 0x21a7a0: 0x14400004
    ctx->pc = 0x21A7A0u;
    {
        const bool branch_taken_0x21a7a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21A7A4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 948), GPR_U32(ctx, 2));
        if (branch_taken_0x21a7a0) {
            ctx->pc = 0x21A7B4u;
            goto label_21a7b4;
        }
    }
    ctx->pc = 0x21A7A8u;
    // 0x21a7a8: 0xae2003ac
    ctx->pc = 0x21a7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 940), GPR_U32(ctx, 0));
    // 0x21a7ac: 0x10000004
    ctx->pc = 0x21A7ACu;
    {
        const bool branch_taken_0x21a7ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A7B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x21a7ac) {
            ctx->pc = 0x21A7C0u;
            goto label_21a7c0;
        }
    }
    ctx->pc = 0x21A7B4u;
label_21a7b4:
    // 0x21a7b4: 0x8e2203b4
    ctx->pc = 0x21a7b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 948)));
    // 0x21a7b8: 0x8c420008
    ctx->pc = 0x21a7b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x21a7bc: 0x0
    ctx->pc = 0x21a7bcu;
    // NOP
label_21a7c0:
    // 0x21a7c0: 0x7bbf0020
    ctx->pc = 0x21a7c0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21a7c4: 0x7bb10010
    ctx->pc = 0x21a7c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21a7c8: 0x7bb00000
    ctx->pc = 0x21a7c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21a7cc: 0x3e00008
    ctx->pc = 0x21A7CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A7D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21A790u: goto label_21a790;
            case 0x21A7B4u: goto label_21a7b4;
            case 0x21A7C0u: goto label_21a7c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21A7D4u;
}
