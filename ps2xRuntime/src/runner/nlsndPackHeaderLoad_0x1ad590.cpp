#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlsndPackHeaderLoad
// Address: 0x1ad590 - 0x1ad618
void nlsndPackHeaderLoad_0x1ad590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlsndPackHeaderLoad");


    ctx->pc = 0x1ad590u;

    // 0x1ad590: 0x27bdffc0
    ctx->pc = 0x1ad590u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ad594: 0x7fbf0020
    ctx->pc = 0x1ad594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1ad598: 0x7fb10010
    ctx->pc = 0x1ad598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ad59c: 0x7fb00000
    ctx->pc = 0x1ad59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ad5a0: 0x70a08628
    ctx->pc = 0x1ad5a0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ad5a4: 0x24050001
    ctx->pc = 0x1ad5a4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad5a8: 0x12050010
    ctx->pc = 0x1AD5A8u;
    {
        const bool branch_taken_0x1ad5a8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 5));
        ctx->pc = 0x1AD5ACu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ad5a8) {
            ctx->pc = 0x1AD5ECu;
            goto label_1ad5ec;
        }
    }
    ctx->pc = 0x1AD5B0u;
    // 0x1ad5b0: 0x12000003
    ctx->pc = 0x1AD5B0u;
    {
        const bool branch_taken_0x1ad5b0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ad5b0) {
            ctx->pc = 0x1AD5C0u;
            goto label_1ad5c0;
        }
    }
    ctx->pc = 0x1AD5B8u;
    // 0x1ad5b8: 0x10000012
    ctx->pc = 0x1AD5B8u;
    {
        const bool branch_taken_0x1ad5b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AD5BCu;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ad5b8) {
            ctx->pc = 0x1AD604u;
            goto label_1ad604;
        }
    }
    ctx->pc = 0x1AD5C0u;
label_1ad5c0:
    // 0x1ad5c0: 0x8e220004
    ctx->pc = 0x1ad5c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ad5c4: 0x27a40030
    ctx->pc = 0x1ad5c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ad5c8: 0xafa20030
    ctx->pc = 0x1ad5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x1ad5cc: 0x8e220020
    ctx->pc = 0x1ad5ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1ad5d0: 0xafa20034
    ctx->pc = 0x1ad5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x1ad5d4: 0x8e220008
    ctx->pc = 0x1ad5d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ad5d8: 0xafa20038
    ctx->pc = 0x1ad5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x1ad5dc: 0xc055328
    ctx->pc = 0x1AD5DCu;
    SET_GPR_U32(ctx, 31, 0x1AD5E4u);
    ctx->pc = 0x1AD5E0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    ctx->pc = 0x154CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifSetDma_0x154ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD5E4u; }
        else if (ctx->pc != 0x1AD5E4u) { ctx->pc = 0x1AD5E4u; }
    }
    if (ctx->pc != 0x1AD5E4u) { return; }
    ctx->pc = 0x1AD5E4u;
    // 0x1ad5e4: 0xae220048
    ctx->pc = 0x1ad5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
    // 0x1ad5e8: 0x26100001
    ctx->pc = 0x1ad5e8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1ad5ec:
    // 0x1ad5ec: 0xc055320
    ctx->pc = 0x1AD5ECu;
    SET_GPR_U32(ctx, 31, 0x1AD5F4u);
    ctx->pc = 0x1AD5F0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 72)));
    ctx->pc = 0x154C80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifDmaStat_0x154c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD5F4u; }
        else if (ctx->pc != 0x1AD5F4u) { ctx->pc = 0x1AD5F4u; }
    }
    if (ctx->pc != 0x1AD5F4u) { return; }
    ctx->pc = 0x1AD5F4u;
    // 0x1ad5f4: 0x4410002
    ctx->pc = 0x1AD5F4u;
    {
        const bool branch_taken_0x1ad5f4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ad5f4) {
            ctx->pc = 0x1AD600u;
            goto label_1ad600;
        }
    }
    ctx->pc = 0x1AD5FCu;
    // 0x1ad5fc: 0x70008628
    ctx->pc = 0x1ad5fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1ad600:
    // 0x1ad600: 0x72001628
    ctx->pc = 0x1ad600u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1ad604:
    // 0x1ad604: 0x7bbf0020
    ctx->pc = 0x1ad604u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad608: 0x7bb10010
    ctx->pc = 0x1ad608u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad60c: 0x7bb00000
    ctx->pc = 0x1ad60cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad610: 0x3e00008
    ctx->pc = 0x1AD610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD614u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD5C0u: goto label_1ad5c0;
            case 0x1AD5ECu: goto label_1ad5ec;
            case 0x1AD600u: goto label_1ad600;
            case 0x1AD604u: goto label_1ad604;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AD618u;
}
