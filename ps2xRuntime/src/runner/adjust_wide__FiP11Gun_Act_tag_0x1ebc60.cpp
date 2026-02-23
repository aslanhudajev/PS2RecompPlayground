#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adjust_wide__FiP11Gun_Act_tag
// Address: 0x1ebc60 - 0x1ebd7c
void adjust_wide__FiP11Gun_Act_tag_0x1ebc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adjust_wide__FiP11Gun_Act_tag");


    ctx->pc = 0x1ebc60u;

    // 0x1ebc60: 0x27bdffd0
    ctx->pc = 0x1ebc60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ebc64: 0x7fbf0020
    ctx->pc = 0x1ebc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1ebc68: 0x7fb10010
    ctx->pc = 0x1ebc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ebc6c: 0x7fb00000
    ctx->pc = 0x1ebc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ebc70: 0x8ca2000c
    ctx->pc = 0x1ebc70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1ebc74: 0x70a08e28
    ctx->pc = 0x1ebc74u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ebc78: 0x10400009
    ctx->pc = 0x1EBC78u;
    {
        const bool branch_taken_0x1ebc78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EBC7Cu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ebc78) {
            ctx->pc = 0x1EBCA0u;
            goto label_1ebca0;
        }
    }
    ctx->pc = 0x1EBC80u;
    // 0x1ebc80: 0x3c020051
    ctx->pc = 0x1ebc80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1ebc84: 0x244434f0
    ctx->pc = 0x1ebc84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x1ebc88: 0x3c020002
    ctx->pc = 0x1ebc88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x1ebc8c: 0x3445000c
    ctx->pc = 0x1ebc8cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 12));
    // 0x1ebc90: 0x70003628
    ctx->pc = 0x1ebc90u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ebc94: 0x70003e28
    ctx->pc = 0x1ebc94u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ebc98: 0xc086018
    ctx->pc = 0x1EBC98u;
    SET_GPR_U32(ctx, 31, 0x1EBCA0u);
    ctx->pc = 0x1EBC9Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBCA0u; }
        else if (ctx->pc != 0x1EBCA0u) { ctx->pc = 0x1EBCA0u; }
    }
    if (ctx->pc != 0x1EBCA0u) { return; }
    ctx->pc = 0x1EBCA0u;
label_1ebca0:
    // 0x1ebca0: 0x24040055
    ctx->pc = 0x1ebca0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 85));
    // 0x1ebca4: 0xc07b2c8
    ctx->pc = 0x1EBCA4u;
    SET_GPR_U32(ctx, 31, 0x1EBCACu);
    ctx->pc = 0x1EBCA8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 105));
    ctx->pc = 0x1ECB20u;
    {
        const uint32_t __entryPc = ctx->pc;
        draw_adjust_line__Fii_0x1ecb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBCACu; }
        else if (ctx->pc != 0x1EBCACu) { ctx->pc = 0x1EBCACu; }
    }
    if (ctx->pc != 0x1EBCACu) { return; }
    ctx->pc = 0x1EBCACu;
    // 0x1ebcac: 0x8e22000c
    ctx->pc = 0x1ebcacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ebcb0: 0x10400024
    ctx->pc = 0x1EBCB0u;
    {
        const bool branch_taken_0x1ebcb0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ebcb0) {
            ctx->pc = 0x1EBD44u;
            goto label_1ebd44;
        }
    }
    ctx->pc = 0x1EBCB8u;
    // 0x1ebcb8: 0x8e23001c
    ctx->pc = 0x1ebcb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1ebcbc: 0x2402ffff
    ctx->pc = 0x1ebcbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ebcc0: 0x10620020
    ctx->pc = 0x1EBCC0u;
    {
        const bool branch_taken_0x1ebcc0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1ebcc0) {
            ctx->pc = 0x1EBD44u;
            goto label_1ebd44;
        }
    }
    ctx->pc = 0x1EBCC8u;
    // 0x1ebcc8: 0xc07b510
    ctx->pc = 0x1EBCC8u;
    SET_GPR_U32(ctx, 31, 0x1EBCD0u);
    ctx->pc = 0x1EBCCCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 52)));
    ctx->pc = 0x1ED440u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetUsbGunBuffer__Fi_0x1ed440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBCD0u; }
        else if (ctx->pc != 0x1EBCD0u) { ctx->pc = 0x1EBCD0u; }
    }
    if (ctx->pc != 0x1EBCD0u) { return; }
    ctx->pc = 0x1EBCD0u;
    // 0x1ebcd0: 0x94450006
    ctx->pc = 0x1ebcd0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1ebcd4: 0x240401a6
    ctx->pc = 0x1ebcd4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 422));
    // 0x1ebcd8: 0x8f838de8
    ctx->pc = 0x1ebcd8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294938088)));
    // 0x1ebcdc: 0x852023
    ctx->pc = 0x1ebcdcu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ebce0: 0xaf848df0
    ctx->pc = 0x1ebce0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938096), GPR_U32(ctx, 4));
    // 0x1ebce4: 0x94420008
    ctx->pc = 0x1ebce4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ebce8: 0x8f858df0
    ctx->pc = 0x1ebce8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294938096)));
    // 0x1ebcec: 0x621023
    ctx->pc = 0x1ebcecu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ebcf0: 0xaf828df4
    ctx->pc = 0x1ebcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938100), GPR_U32(ctx, 2));
    // 0x1ebcf4: 0x28a20040
    ctx->pc = 0x1ebcf4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 64));
    // 0x1ebcf8: 0x14400012
    ctx->pc = 0x1EBCF8u;
    {
        const bool branch_taken_0x1ebcf8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ebcf8) {
            ctx->pc = 0x1EBD44u;
            goto label_1ebd44;
        }
    }
    ctx->pc = 0x1EBD00u;
    // 0x1ebd00: 0x8f868df4
    ctx->pc = 0x1ebd00u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294938100)));
    // 0x1ebd04: 0x28c20020
    ctx->pc = 0x1ebd04u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 32));
    // 0x1ebd08: 0x1440000e
    ctx->pc = 0x1EBD08u;
    {
        const bool branch_taken_0x1ebd08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ebd08) {
            ctx->pc = 0x1EBD44u;
            goto label_1ebd44;
        }
    }
    ctx->pc = 0x1EBD10u;
    // 0x1ebd10: 0x8e240000
    ctx->pc = 0x1ebd10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ebd14: 0x3c020050
    ctx->pc = 0x1ebd14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1ebd18: 0x24430db8
    ctx->pc = 0x1ebd18u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 3512));
    // 0x1ebd1c: 0x3c020050
    ctx->pc = 0x1ebd1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1ebd20: 0x24420dbc
    ctx->pc = 0x1ebd20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3516));
    // 0x1ebd24: 0x24100001
    ctx->pc = 0x1ebd24u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ebd28: 0x42140
    ctx->pc = 0x1ebd28u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 5));
    // 0x1ebd2c: 0x641821
    ctx->pc = 0x1ebd2cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ebd30: 0xac650000
    ctx->pc = 0x1ebd30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1ebd34: 0x8e230000
    ctx->pc = 0x1ebd34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ebd38: 0x31940
    ctx->pc = 0x1ebd38u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 5));
    // 0x1ebd3c: 0x431021
    ctx->pc = 0x1ebd3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ebd40: 0xac460000
    ctx->pc = 0x1ebd40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_1ebd44:
    // 0x1ebd44: 0x16000008
    ctx->pc = 0x1EBD44u;
    {
        const bool branch_taken_0x1ebd44 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EBD48u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ebd44) {
            ctx->pc = 0x1EBD68u;
            goto label_1ebd68;
        }
    }
    ctx->pc = 0x1EBD4Cu;
    // 0x1ebd4c: 0x8e22000c
    ctx->pc = 0x1ebd4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1ebd50: 0x10400004
    ctx->pc = 0x1EBD50u;
    {
        const bool branch_taken_0x1ebd50 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1ebd50) {
            ctx->pc = 0x1EBD64u;
            goto label_1ebd64;
        }
    }
    ctx->pc = 0x1EBD58u;
    // 0x1ebd58: 0x8f828df8
    ctx->pc = 0x1ebd58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294938104)));
    // 0x1ebd5c: 0x24420001
    ctx->pc = 0x1ebd5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ebd60: 0xaf828df8
    ctx->pc = 0x1ebd60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938104), GPR_U32(ctx, 2));
label_1ebd64:
    // 0x1ebd64: 0x72001628
    ctx->pc = 0x1ebd64u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1ebd68:
    // 0x1ebd68: 0x7bbf0020
    ctx->pc = 0x1ebd68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ebd6c: 0x7bb10010
    ctx->pc = 0x1ebd6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ebd70: 0x7bb00000
    ctx->pc = 0x1ebd70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ebd74: 0x3e00008
    ctx->pc = 0x1EBD74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBD78u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EBCA0u: goto label_1ebca0;
            case 0x1EBD44u: goto label_1ebd44;
            case 0x1EBD64u: goto label_1ebd64;
            case 0x1EBD68u: goto label_1ebd68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EBD7Cu;
}
