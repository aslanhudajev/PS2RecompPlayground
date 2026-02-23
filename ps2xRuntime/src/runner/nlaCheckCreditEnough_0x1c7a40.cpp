#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlaCheckCreditEnough
// Address: 0x1c7a40 - 0x1c7b0c
void nlaCheckCreditEnough_0x1c7a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlaCheckCreditEnough");


    ctx->pc = 0x1c7a40u;

    // 0x1c7a40: 0x27bdffd0
    ctx->pc = 0x1c7a40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c7a44: 0x7fbf0020
    ctx->pc = 0x1c7a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1c7a48: 0x7fb10010
    ctx->pc = 0x1c7a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c7a4c: 0x7fb00000
    ctx->pc = 0x1c7a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c7a50: 0x3c020030
    ctx->pc = 0x1c7a50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1c7a54: 0x48080
    ctx->pc = 0x1c7a54u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c7a58: 0x24425bc0
    ctx->pc = 0x1c7a58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23488));
    // 0x1c7a5c: 0x70a08e28
    ctx->pc = 0x1c7a5cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1c7a60: 0x501021
    ctx->pc = 0x1c7a60u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c7a64: 0xac510000
    ctx->pc = 0x1c7a64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1c7a68: 0x3c020030
    ctx->pc = 0x1c7a68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1c7a6c: 0x24455bc0
    ctx->pc = 0x1c7a6cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 23488));
    // 0x1c7a70: 0x3c020030
    ctx->pc = 0x1c7a70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1c7a74: 0x70002628
    ctx->pc = 0x1c7a74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c7a78: 0xc071ec4
    ctx->pc = 0x1C7A78u;
    SET_GPR_U32(ctx, 31, 0x1C7A80u);
    ctx->pc = 0x1C7A7Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 23576));
    ctx->pc = 0x1C7B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MakeCreditData__FPiP14tagCREDIT_DATAPA4_Uc_0x1c7b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7A80u; }
        else if (ctx->pc != 0x1C7A80u) { ctx->pc = 0x1C7A80u; }
    }
    if (ctx->pc != 0x1C7A80u) { return; }
    ctx->pc = 0x1C7A80u;
    // 0x1c7a80: 0x3c020030
    ctx->pc = 0x1c7a80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1c7a84: 0x24425c1b
    ctx->pc = 0x1c7a84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23579));
    // 0x1c7a88: 0x501021
    ctx->pc = 0x1c7a88u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1c7a8c: 0x90430000
    ctx->pc = 0x1c7a8cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c7a90: 0x24020002
    ctx->pc = 0x1c7a90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c7a94: 0x10620003
    ctx->pc = 0x1C7A94u;
    {
        const bool branch_taken_0x1c7a94 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1C7A98u;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x1c7a94) {
            ctx->pc = 0x1C7AA4u;
            goto label_1c7aa4;
        }
    }
    ctx->pc = 0x1C7A9Cu;
    // 0x1c7a9c: 0x10000016
    ctx->pc = 0x1C7A9Cu;
    {
        const bool branch_taken_0x1c7a9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1C7AA0u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1c7a9c) {
            ctx->pc = 0x1C7AF8u;
            goto label_1c7af8;
        }
    }
    ctx->pc = 0x1C7AA4u;
label_1c7aa4:
    // 0x1c7aa4: 0xc0750bc
    ctx->pc = 0x1C7AA4u;
    SET_GPR_U32(ctx, 31, 0x1C7AACu);
    ctx->pc = 0x1C7AA8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294957760));
    ctx->pc = 0x1D42F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        IsFreePlay__11CreditClassFv_0x1d42f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7AACu; }
        else if (ctx->pc != 0x1C7AACu) { ctx->pc = 0x1C7AACu; }
    }
    if (ctx->pc != 0x1C7AACu) { return; }
    ctx->pc = 0x1C7AACu;
    // 0x1c7aac: 0x14400012
    ctx->pc = 0x1C7AACu;
    {
        const bool branch_taken_0x1c7aac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1C7AB0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1c7aac) {
            ctx->pc = 0x1C7AF8u;
            goto label_1c7af8;
        }
    }
    ctx->pc = 0x1C7AB4u;
    // 0x1c7ab4: 0x3c02002d
    ctx->pc = 0x1c7ab4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
    // 0x1c7ab8: 0x111880
    ctx->pc = 0x1c7ab8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c7abc: 0x244259c8
    ctx->pc = 0x1c7abcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 22984));
    // 0x1c7ac0: 0x431021
    ctx->pc = 0x1c7ac0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c7ac4: 0x8c470000
    ctx->pc = 0x1c7ac4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c7ac8: 0x3c010030
    ctx->pc = 0x1c7ac8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1c7acc: 0x8c235bc8
    ctx->pc = 0x1c7accu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 23496)));
    // 0x1c7ad0: 0x70002628
    ctx->pc = 0x1c7ad0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c7ad4: 0x3c020030
    ctx->pc = 0x1c7ad4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1c7ad8: 0x24455bc0
    ctx->pc = 0x1c7ad8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 23488));
    // 0x1c7adc: 0x3c020030
    ctx->pc = 0x1c7adcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1c7ae0: 0x24465c18
    ctx->pc = 0x1c7ae0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 23576));
    // 0x1c7ae4: 0x671023
    ctx->pc = 0x1c7ae4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1c7ae8: 0x3c010030
    ctx->pc = 0x1c7ae8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1c7aec: 0xc071ec4
    ctx->pc = 0x1C7AECu;
    SET_GPR_U32(ctx, 31, 0x1C7AF4u);
    ctx->pc = 0x1C7AF0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 23496), GPR_U32(ctx, 2));
    ctx->pc = 0x1C7B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MakeCreditData__FPiP14tagCREDIT_DATAPA4_Uc_0x1c7b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7AF4u; }
        else if (ctx->pc != 0x1C7AF4u) { ctx->pc = 0x1C7AF4u; }
    }
    if (ctx->pc != 0x1C7AF4u) { return; }
    ctx->pc = 0x1C7AF4u;
    // 0x1c7af4: 0x24020001
    ctx->pc = 0x1c7af4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1c7af8:
    // 0x1c7af8: 0x7bbf0020
    ctx->pc = 0x1c7af8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7afc: 0x7bb10010
    ctx->pc = 0x1c7afcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7b00: 0x7bb00000
    ctx->pc = 0x1c7b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7b04: 0x3e00008
    ctx->pc = 0x1C7B04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7B08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C7AA4u: goto label_1c7aa4;
            case 0x1C7AF8u: goto label_1c7af8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C7B0Cu;
}
