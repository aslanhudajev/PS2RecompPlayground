#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlPuts
// Address: 0x1abae0 - 0x1abbdc
void nlPuts_0x1abae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlPuts");


    ctx->pc = 0x1abae0u;

    // 0x1abae0: 0x27bdffb0
    ctx->pc = 0x1abae0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1abae4: 0x7fbf0040
    ctx->pc = 0x1abae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1abae8: 0x7fb30030
    ctx->pc = 0x1abae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1abaec: 0x7fb20020
    ctx->pc = 0x1abaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1abaf0: 0x7fb10010
    ctx->pc = 0x1abaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1abaf4: 0x7fb00000
    ctx->pc = 0x1abaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1abaf8: 0x8f828a90
    ctx->pc = 0x1abaf8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937232)));
    // 0x1abafc: 0x8f908a8c
    ctx->pc = 0x1abafcu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294937228)));
    // 0x1abb00: 0x8f918a88
    ctx->pc = 0x1abb00u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 28), 4294937224)));
    // 0x1abb04: 0x70809e28
    ctx->pc = 0x1abb04u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1abb08: 0xc06adb8
    ctx->pc = 0x1ABB08u;
    SET_GPR_U32(ctx, 31, 0x1ABB10u);
    ctx->pc = 0x1ABB0Cu;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x1AB6E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlCharacterPre_0x1ab6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABB10u; }
        else if (ctx->pc != 0x1ABB10u) { ctx->pc = 0x1ABB10u; }
    }
    if (ctx->pc != 0x1ABB10u) { return; }
    ctx->pc = 0x1ABB10u;
    // 0x1abb10: 0x10000026
    ctx->pc = 0x1ABB10u;
    {
        const bool branch_taken_0x1abb10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ABB14u;
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
        if (branch_taken_0x1abb10) {
            ctx->pc = 0x1ABBACu;
            goto label_1abbac;
        }
    }
    ctx->pc = 0x1ABB18u;
label_1abb18:
    // 0x1abb18: 0x31e3f
    ctx->pc = 0x1abb18u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1abb1c: 0x24020020
    ctx->pc = 0x1abb1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1abb20: 0x14620006
    ctx->pc = 0x1ABB20u;
    {
        const bool branch_taken_0x1abb20 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1ABB24u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x1abb20) {
            ctx->pc = 0x1ABB3Cu;
            goto label_1abb3c;
        }
    }
    ctx->pc = 0x1ABB28u;
    // 0x1abb28: 0x8f828a84
    ctx->pc = 0x1abb28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937220)));
    // 0x1abb2c: 0x26730001
    ctx->pc = 0x1abb2cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x1abb30: 0x1000001d
    ctx->pc = 0x1ABB30u;
    {
        const bool branch_taken_0x1abb30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ABB34u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        if (branch_taken_0x1abb30) {
            ctx->pc = 0x1ABBA8u;
            goto label_1abba8;
        }
    }
    ctx->pc = 0x1ABB38u;
    // 0x1abb38: 0x2402000a
    ctx->pc = 0x1abb38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
label_1abb3c:
    // 0x1abb3c: 0x1462000b
    ctx->pc = 0x1ABB3Cu;
    {
        const bool branch_taken_0x1abb3c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1ABB40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
        if (branch_taken_0x1abb3c) {
            ctx->pc = 0x1ABB6Cu;
            goto label_1abb6c;
        }
    }
    ctx->pc = 0x1ABB44u;
    // 0x1abb44: 0x12400004
    ctx->pc = 0x1ABB44u;
    {
        const bool branch_taken_0x1abb44 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ABB48u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294937200)));
        if (branch_taken_0x1abb44) {
            ctx->pc = 0x1ABB58u;
            goto label_1abb58;
        }
    }
    ctx->pc = 0x1ABB4Cu;
    // 0x1abb4c: 0x8f908a74
    ctx->pc = 0x1abb4cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294937204)));
    // 0x1abb50: 0x0
    ctx->pc = 0x1abb50u;
    // NOP
    // 0x1abb54: 0x0
    ctx->pc = 0x1abb54u;
    // NOP
label_1abb58:
    // 0x1abb58: 0x8f828a80
    ctx->pc = 0x1abb58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x1abb5c: 0x26730001
    ctx->pc = 0x1abb5cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x1abb60: 0x10000011
    ctx->pc = 0x1ABB60u;
    {
        const bool branch_taken_0x1abb60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ABB64u;
        SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        if (branch_taken_0x1abb60) {
            ctx->pc = 0x1ABBA8u;
            goto label_1abba8;
        }
    }
    ctx->pc = 0x1ABB68u;
    // 0x1abb68: 0x2402000d
    ctx->pc = 0x1abb68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
label_1abb6c:
    // 0x1abb6c: 0x14620009
    ctx->pc = 0x1ABB6Cu;
    {
        const bool branch_taken_0x1abb6c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1ABB70u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1abb6c) {
            ctx->pc = 0x1ABB94u;
            goto label_1abb94;
        }
    }
    ctx->pc = 0x1ABB74u;
    // 0x1abb74: 0x12400004
    ctx->pc = 0x1ABB74u;
    {
        const bool branch_taken_0x1abb74 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ABB78u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294937200)));
        if (branch_taken_0x1abb74) {
            ctx->pc = 0x1ABB88u;
            goto label_1abb88;
        }
    }
    ctx->pc = 0x1ABB7Cu;
    // 0x1abb7c: 0x8f908a74
    ctx->pc = 0x1abb7cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294937204)));
    // 0x1abb80: 0x0
    ctx->pc = 0x1abb80u;
    // NOP
    // 0x1abb84: 0x0
    ctx->pc = 0x1abb84u;
    // NOP
label_1abb88:
    // 0x1abb88: 0x10000007
    ctx->pc = 0x1ABB88u;
    {
        const bool branch_taken_0x1abb88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ABB8Cu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x1abb88) {
            ctx->pc = 0x1ABBA8u;
            goto label_1abba8;
        }
    }
    ctx->pc = 0x1ABB90u;
    // 0x1abb90: 0x72002628
    ctx->pc = 0x1abb90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1abb94:
    // 0x1abb94: 0xc06ae2c
    ctx->pc = 0x1ABB94u;
    SET_GPR_U32(ctx, 31, 0x1ABB9Cu);
    ctx->pc = 0x1ABB98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AB8B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlCharacter_0x1ab8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABB9Cu; }
        else if (ctx->pc != 0x1ABB9Cu) { ctx->pc = 0x1ABB9Cu; }
    }
    if (ctx->pc != 0x1ABB9Cu) { return; }
    ctx->pc = 0x1ABB9Cu;
    // 0x1abb9c: 0x8f828a84
    ctx->pc = 0x1abb9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937220)));
    // 0x1abba0: 0x26730001
    ctx->pc = 0x1abba0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x1abba4: 0x2028021
    ctx->pc = 0x1abba4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1abba8:
    // 0x1abba8: 0x82660000
    ctx->pc = 0x1abba8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_1abbac:
    // 0x1abbac: 0x14c0ffda
    ctx->pc = 0x1ABBACu;
    {
        const bool branch_taken_0x1abbac = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x1ABBB0u;
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
        if (branch_taken_0x1abbac) {
            ctx->pc = 0x1ABB18u;
            goto label_1abb18;
        }
    }
    ctx->pc = 0x1ABBB4u;
    // 0x1abbb4: 0xaf908a8c
    ctx->pc = 0x1abbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937228), GPR_U32(ctx, 16));
    // 0x1abbb8: 0xc06ae0c
    ctx->pc = 0x1ABBB8u;
    SET_GPR_U32(ctx, 31, 0x1ABBC0u);
    ctx->pc = 0x1ABBBCu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937224), GPR_U32(ctx, 17));
    ctx->pc = 0x1AB830u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlCharacterPost_0x1ab830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABBC0u; }
        else if (ctx->pc != 0x1ABBC0u) { ctx->pc = 0x1ABBC0u; }
    }
    if (ctx->pc != 0x1ABBC0u) { return; }
    ctx->pc = 0x1ABBC0u;
    // 0x1abbc0: 0x7bbf0040
    ctx->pc = 0x1abbc0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1abbc4: 0x7bb30030
    ctx->pc = 0x1abbc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1abbc8: 0x7bb20020
    ctx->pc = 0x1abbc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1abbcc: 0x7bb10010
    ctx->pc = 0x1abbccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abbd0: 0x7bb00000
    ctx->pc = 0x1abbd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abbd4: 0x3e00008
    ctx->pc = 0x1ABBD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABBD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ABB18u: goto label_1abb18;
            case 0x1ABB3Cu: goto label_1abb3c;
            case 0x1ABB58u: goto label_1abb58;
            case 0x1ABB6Cu: goto label_1abb6c;
            case 0x1ABB88u: goto label_1abb88;
            case 0x1ABB94u: goto label_1abb94;
            case 0x1ABBA8u: goto label_1abba8;
            case 0x1ABBACu: goto label_1abbac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ABBDCu;
}
