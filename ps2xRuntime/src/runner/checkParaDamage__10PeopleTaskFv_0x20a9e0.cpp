#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: checkParaDamage__10PeopleTaskFv
// Address: 0x20a9e0 - 0x20ac4c
void checkParaDamage__10PeopleTaskFv_0x20a9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("checkParaDamage__10PeopleTaskFv");


    ctx->pc = 0x20a9e0u;

label_20a9e0:
    // 0x20a9e0: 0x27bdffb0
    ctx->pc = 0x20a9e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_20a9e4:
    // 0x20a9e4: 0x7fbf0040
    ctx->pc = 0x20a9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
label_20a9e8:
    // 0x20a9e8: 0x7fb30030
    ctx->pc = 0x20a9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_20a9ec:
    // 0x20a9ec: 0x7fb20020
    ctx->pc = 0x20a9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_20a9f0:
    // 0x20a9f0: 0x7fb10010
    ctx->pc = 0x20a9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_20a9f4:
    // 0x20a9f4: 0x7fb00000
    ctx->pc = 0x20a9f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_20a9f8:
    // 0x20a9f8: 0x8c831e6c
    ctx->pc = 0x20a9f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 7788)));
label_20a9fc:
    // 0x20a9fc: 0x8c65000c
    ctx->pc = 0x20a9fcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_20aa00:
    // 0x20aa00: 0x30a30008
    ctx->pc = 0x20aa00u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 8));
label_20aa04:
    // 0x20aa04: 0x10600039
label_20aa08:
    if (ctx->pc == 0x20AA08u) {
        ctx->pc = 0x20AA08u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        ctx->pc = 0x20AA0Cu;
        goto label_20aa0c;
    }
    ctx->pc = 0x20AA04u;
    {
        const bool branch_taken_0x20aa04 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x20AA08u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20aa04) {
            ctx->pc = 0x20AAECu;
            goto label_20aaec;
        }
    }
    ctx->pc = 0x20AA0Cu;
label_20aa0c:
    // 0x20aa0c: 0x30a30006
    ctx->pc = 0x20aa0cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 6));
label_20aa10:
    // 0x20aa10: 0x24020004
    ctx->pc = 0x20aa10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_20aa14:
    // 0x20aa14: 0x10620008
label_20aa18:
    if (ctx->pc == 0x20AA18u) {
        ctx->pc = 0x20AA18u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20AA1Cu;
        goto label_20aa1c;
    }
    ctx->pc = 0x20AA14u;
    {
        const bool branch_taken_0x20aa14 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x20AA18u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x20aa14) {
            ctx->pc = 0x20AA38u;
            goto label_20aa38;
        }
    }
    ctx->pc = 0x20AA1Cu;
label_20aa1c:
    // 0x20aa1c: 0x24020002
    ctx->pc = 0x20aa1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_20aa20:
    // 0x20aa20: 0x10620003
label_20aa24:
    if (ctx->pc == 0x20AA24u) {
        ctx->pc = 0x20AA24u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x20AA28u;
        goto label_20aa28;
    }
    ctx->pc = 0x20AA20u;
    {
        const bool branch_taken_0x20aa20 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x20AA24u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20aa20) {
            ctx->pc = 0x20AA30u;
            goto label_20aa30;
        }
    }
    ctx->pc = 0x20AA28u;
label_20aa28:
    // 0x20aa28: 0x10000005
label_20aa2c:
    if (ctx->pc == 0x20AA2Cu) {
        ctx->pc = 0x20AA30u;
        goto label_20aa30;
    }
    ctx->pc = 0x20AA28u;
    {
        const bool branch_taken_0x20aa28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20aa28) {
            ctx->pc = 0x20AA40u;
            goto label_20aa40;
        }
    }
    ctx->pc = 0x20AA30u;
label_20aa30:
    // 0x20aa30: 0x1000000b
label_20aa34:
    if (ctx->pc == 0x20AA34u) {
        ctx->pc = 0x20AA34u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x20AA38u;
        goto label_20aa38;
    }
    ctx->pc = 0x20AA30u;
    {
        const bool branch_taken_0x20aa30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20AA34u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20aa30) {
            ctx->pc = 0x20AA60u;
            goto label_20aa60;
        }
    }
    ctx->pc = 0x20AA38u;
label_20aa38:
    // 0x20aa38: 0x10000008
label_20aa3c:
    if (ctx->pc == 0x20AA3Cu) {
        ctx->pc = 0x20AA40u;
        goto label_20aa40;
    }
    ctx->pc = 0x20AA38u;
    {
        const bool branch_taken_0x20aa38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20aa38) {
            ctx->pc = 0x20AA5Cu;
            goto label_20aa5c;
        }
    }
    ctx->pc = 0x20AA40u;
label_20aa40:
    // 0x20aa40: 0xc069fb8
label_20aa44:
    if (ctx->pc == 0x20AA44u) {
        ctx->pc = 0x20AA48u;
        goto label_20aa48;
    }
    ctx->pc = 0x20AA40u;
    SET_GPR_U32(ctx, 31, 0x20AA48u);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AA48u; }
        else if (ctx->pc != 0x20AA48u) { ctx->pc = 0x20AA48u; }
    }
    if (ctx->pc != 0x20AA48u) { return; }
    ctx->pc = 0x20AA48u;
label_20aa48:
    // 0x20aa48: 0x4410004
label_20aa4c:
    if (ctx->pc == 0x20AA4Cu) {
        ctx->pc = 0x20AA4Cu;
        SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x20AA50u;
        goto label_20aa50;
    }
    ctx->pc = 0x20AA48u;
    {
        const bool branch_taken_0x20aa48 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x20AA4Cu;
        SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x20aa48) {
            ctx->pc = 0x20AA5Cu;
            goto label_20aa5c;
        }
    }
    ctx->pc = 0x20AA50u;
label_20aa50:
    // 0x20aa50: 0x12000002
label_20aa54:
    if (ctx->pc == 0x20AA54u) {
        ctx->pc = 0x20AA58u;
        goto label_20aa58;
    }
    ctx->pc = 0x20AA50u;
    {
        const bool branch_taken_0x20aa50 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x20aa50) {
            ctx->pc = 0x20AA5Cu;
            goto label_20aa5c;
        }
    }
    ctx->pc = 0x20AA58u;
label_20aa58:
    // 0x20aa58: 0x2610fffe
    ctx->pc = 0x20aa58u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967294));
label_20aa5c:
    // 0x20aa5c: 0x72002628
    ctx->pc = 0x20aa5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_20aa60:
    // 0x20aa60: 0xc084d48
label_20aa64:
    if (ctx->pc == 0x20AA64u) {
        ctx->pc = 0x20AA68u;
        goto label_20aa68;
    }
    ctx->pc = 0x20AA60u;
    SET_GPR_U32(ctx, 31, 0x20AA68u);
    ctx->pc = 0x213520u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddPlayerHitNum__Fi_0x213520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AA68u; }
        else if (ctx->pc != 0x20AA68u) { ctx->pc = 0x20AA68u; }
    }
    if (ctx->pc != 0x20AA68u) { return; }
    ctx->pc = 0x20AA68u;
label_20aa68:
    // 0x20aa68: 0x8e63000c
    ctx->pc = 0x20aa68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_20aa6c:
    // 0x20aa6c: 0x30630100
    ctx->pc = 0x20aa6cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 256));
label_20aa70:
    // 0x20aa70: 0x10600007
label_20aa74:
    if (ctx->pc == 0x20AA74u) {
        ctx->pc = 0x20AA74u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        ctx->pc = 0x20AA78u;
        goto label_20aa78;
    }
    ctx->pc = 0x20AA70u;
    {
        const bool branch_taken_0x20aa70 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x20AA74u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20aa70) {
            ctx->pc = 0x20AA90u;
            goto label_20aa90;
        }
    }
    ctx->pc = 0x20AA78u;
label_20aa78:
    // 0x20aa78: 0x8e651e6c
    ctx->pc = 0x20aa78u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 7788)));
label_20aa7c:
    // 0x20aa7c: 0x2403fff1
    ctx->pc = 0x20aa7cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967281));
label_20aa80:
    // 0x20aa80: 0x8ca4000c
    ctx->pc = 0x20aa80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_20aa84:
    // 0x20aa84: 0x831824
    ctx->pc = 0x20aa84u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_20aa88:
    // 0x20aa88: 0x10000043
label_20aa8c:
    if (ctx->pc == 0x20AA8Cu) {
        ctx->pc = 0x20AA8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x20AA90u;
        goto label_20aa90;
    }
    ctx->pc = 0x20AA88u;
    {
        const bool branch_taken_0x20aa88 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20AA8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        if (branch_taken_0x20aa88) {
            ctx->pc = 0x20AB98u;
            goto label_20ab98;
        }
    }
    ctx->pc = 0x20AA90u;
label_20aa90:
    // 0x20aa90: 0x24050190
    ctx->pc = 0x20aa90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 400));
label_20aa94:
    // 0x20aa94: 0xc084d14
label_20aa98:
    if (ctx->pc == 0x20AA98u) {
        ctx->pc = 0x20AA98u;
        WRITE8(ADD32(GPR_U32(ctx, 19), 7683), (uint8_t)GPR_U32(ctx, 16));
        ctx->pc = 0x20AA9Cu;
        goto label_20aa9c;
    }
    ctx->pc = 0x20AA94u;
    SET_GPR_U32(ctx, 31, 0x20AA9Cu);
    ctx->pc = 0x20AA98u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 7683), (uint8_t)GPR_U32(ctx, 16));
    ctx->pc = 0x213450u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddPlayerScore__Fii_0x213450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AA9Cu; }
        else if (ctx->pc != 0x20AA9Cu) { ctx->pc = 0x20AA9Cu; }
    }
    if (ctx->pc != 0x20AA9Cu) { return; }
    ctx->pc = 0x20AA9Cu;
label_20aa9c:
    // 0x20aa9c: 0xc082d10
label_20aaa0:
    if (ctx->pc == 0x20AAA0u) {
        ctx->pc = 0x20AAA0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
        ctx->pc = 0x20AAA4u;
        goto label_20aaa4;
    }
    ctx->pc = 0x20AA9Cu;
    SET_GPR_U32(ctx, 31, 0x20AAA4u);
    ctx->pc = 0x20AAA0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20B440u;
    {
        const uint32_t __entryPc = ctx->pc;
        addRescuePeopleNum__10PeopleTaskFv_0x20b440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AAA4u; }
        else if (ctx->pc != 0x20AAA4u) { ctx->pc = 0x20AAA4u; }
    }
    if (ctx->pc != 0x20AAA4u) { return; }
    ctx->pc = 0x20AAA4u;
label_20aaa4:
    // 0x20aaa4: 0x8f848c48
    ctx->pc = 0x20aaa4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
label_20aaa8:
    // 0x20aaa8: 0x70002e28
    ctx->pc = 0x20aaa8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20aaac:
    // 0x20aaac: 0xc072658
label_20aab0:
    if (ctx->pc == 0x20AAB0u) {
        ctx->pc = 0x20AAB0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20AAB4u;
        goto label_20aab4;
    }
    ctx->pc = 0x20AAACu;
    SET_GPR_U32(ctx, 31, 0x20AAB4u);
    ctx->pc = 0x20AAB0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1C9960u;
    {
        const uint32_t __entryPc = ctx->pc;
        chgCafsIdx__10CameraTaskFii_0x1c9960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AAB4u; }
        else if (ctx->pc != 0x20AAB4u) { ctx->pc = 0x20AAB4u; }
    }
    if (ctx->pc != 0x20AAB4u) { return; }
    ctx->pc = 0x20AAB4u;
label_20aab4:
    // 0x20aab4: 0x8e631d74
    ctx->pc = 0x20aab4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 7540)));
label_20aab8:
    // 0x20aab8: 0x3c020051
    ctx->pc = 0x20aab8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_20aabc:
    // 0x20aabc: 0x244434f0
    ctx->pc = 0x20aabcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
label_20aac0:
    // 0x20aac0: 0x3c020002
    ctx->pc = 0x20aac0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
label_20aac4:
    // 0x20aac4: 0x3445002d
    ctx->pc = 0x20aac4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 45));
label_20aac8:
    // 0x20aac8: 0x70003e28
    ctx->pc = 0x20aac8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20aacc:
    // 0x20aacc: 0x34620011
    ctx->pc = 0x20aaccu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 17));
label_20aad0:
    // 0x20aad0: 0xae621d74
    ctx->pc = 0x20aad0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 7540), GPR_U32(ctx, 2));
label_20aad4:
    // 0x20aad4: 0x82620024
    ctx->pc = 0x20aad4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 36)));
label_20aad8:
    // 0x20aad8: 0x24080040
    ctx->pc = 0x20aad8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
label_20aadc:
    // 0x20aadc: 0xc086018
label_20aae0:
    if (ctx->pc == 0x20AAE0u) {
        ctx->pc = 0x20AAE0u;
        SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x20AAE4u;
        goto label_20aae4;
    }
    ctx->pc = 0x20AADCu;
    SET_GPR_U32(ctx, 31, 0x20AAE4u);
    ctx->pc = 0x20AAE0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 12));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AAE4u; }
        else if (ctx->pc != 0x20AAE4u) { ctx->pc = 0x20AAE4u; }
    }
    if (ctx->pc != 0x20AAE4u) { return; }
    ctx->pc = 0x20AAE4u;
label_20aae4:
    // 0x20aae4: 0x1000002d
label_20aae8:
    if (ctx->pc == 0x20AAE8u) {
        ctx->pc = 0x20AAE8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 7540)));
        ctx->pc = 0x20AAECu;
        goto label_20aaec;
    }
    ctx->pc = 0x20AAE4u;
    {
        const bool branch_taken_0x20aae4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20AAE8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 7540)));
        if (branch_taken_0x20aae4) {
            ctx->pc = 0x20AB9Cu;
            goto label_20ab9c;
        }
    }
    ctx->pc = 0x20AAECu;
label_20aaec:
    // 0x20aaec: 0x8e63000c
    ctx->pc = 0x20aaecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_20aaf0:
    // 0x20aaf0: 0x30630008
    ctx->pc = 0x20aaf0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 8));
label_20aaf4:
    // 0x20aaf4: 0x10600028
label_20aaf8:
    if (ctx->pc == 0x20AAF8u) {
        ctx->pc = 0x20AAFCu;
        goto label_20aafc;
    }
    ctx->pc = 0x20AAF4u;
    {
        const bool branch_taken_0x20aaf4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x20aaf4) {
            ctx->pc = 0x20AB98u;
            goto label_20ab98;
        }
    }
    ctx->pc = 0x20AAFCu;
label_20aafc:
    // 0x20aafc: 0xc253844
label_20ab00:
    if (ctx->pc == 0x20AB00u) {
        ctx->pc = 0x20AB04u;
        goto label_20ab04;
    }
    ctx->pc = 0x20AAFCu;
    SET_GPR_U32(ctx, 31, 0x20AB04u);
    ctx->pc = 0x94E110u;
    {
        const uint32_t __entryPc = ctx->pc;
        CheckHitParts__FP9EnemyTask_0x94e110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AB04u; }
        else if (ctx->pc != 0x20AB04u) { ctx->pc = 0x20AB04u; }
    }
    if (ctx->pc != 0x20AB04u) { return; }
    ctx->pc = 0x20AB04u;
label_20ab04:
    // 0x20ab04: 0x70008628
    ctx->pc = 0x20ab04u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20ab08:
    // 0x20ab08: 0x27918c30
    ctx->pc = 0x20ab08u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 28), 4294937648));
label_20ab0c:
    // 0x20ab0c: 0x8e320000
    ctx->pc = 0x20ab0cu;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20ab10:
    // 0x20ab10: 0x2403ffff
    ctx->pc = 0x20ab10u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_20ab14:
    // 0x20ab14: 0x5243001d
label_20ab18:
    if (ctx->pc == 0x20AB18u) {
        ctx->pc = 0x20AB18u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x20AB1Cu;
        goto label_20ab1c;
    }
    ctx->pc = 0x20AB14u;
    {
        const bool branch_taken_0x20ab14 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 3));
        if (branch_taken_0x20ab14) {
            ctx->pc = 0x20AB18u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x20AB8Cu;
            goto label_20ab8c;
        }
    }
    ctx->pc = 0x20AB1Cu;
label_20ab1c:
    // 0x20ab1c: 0x8e630000
    ctx->pc = 0x20ab1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_20ab20:
    // 0x20ab20: 0x721821
    ctx->pc = 0x20ab20u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_20ab24:
    // 0x20ab24: 0x80630070
    ctx->pc = 0x20ab24u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
label_20ab28:
    // 0x20ab28: 0x18600017
label_20ab2c:
    if (ctx->pc == 0x20AB2Cu) {
        ctx->pc = 0x20AB30u;
        goto label_20ab30;
    }
    ctx->pc = 0x20AB28u;
    {
        const bool branch_taken_0x20ab28 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x20ab28) {
            ctx->pc = 0x20AB88u;
            goto label_20ab88;
        }
    }
    ctx->pc = 0x20AB30u;
label_20ab30:
    // 0x20ab30: 0xa2631e01
    ctx->pc = 0x20ab30u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 7681), (uint8_t)GPR_U32(ctx, 3));
label_20ab34:
    // 0x20ab34: 0x8e62000c
    ctx->pc = 0x20ab34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_20ab38:
    // 0x20ab38: 0x30420100
    ctx->pc = 0x20ab38u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
label_20ab3c:
    // 0x20ab3c: 0x1440000f
label_20ab40:
    if (ctx->pc == 0x20AB40u) {
        ctx->pc = 0x20AB40u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        ctx->pc = 0x20AB44u;
        goto label_20ab44;
    }
    ctx->pc = 0x20AB3Cu;
    {
        const bool branch_taken_0x20ab3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20AB40u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20ab3c) {
            ctx->pc = 0x20AB7Cu;
            goto label_20ab7c;
        }
    }
    ctx->pc = 0x20AB44u;
label_20ab44:
    // 0x20ab44: 0x8e621d74
    ctx->pc = 0x20ab44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 7540)));
label_20ab48:
    // 0x20ab48: 0x30420002
    ctx->pc = 0x20ab48u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
label_20ab4c:
    // 0x20ab4c: 0x1440000a
label_20ab50:
    if (ctx->pc == 0x20AB50u) {
        ctx->pc = 0x20AB50u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        ctx->pc = 0x20AB54u;
        goto label_20ab54;
    }
    ctx->pc = 0x20AB4Cu;
    {
        const bool branch_taken_0x20ab4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20AB50u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20ab4c) {
            ctx->pc = 0x20AB78u;
            goto label_20ab78;
        }
    }
    ctx->pc = 0x20AB54u;
label_20ab54:
    // 0x20ab54: 0xc084d14
label_20ab58:
    if (ctx->pc == 0x20AB58u) {
        ctx->pc = 0x20AB58u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->pc = 0x20AB5Cu;
        goto label_20ab5c;
    }
    ctx->pc = 0x20AB54u;
    SET_GPR_U32(ctx, 31, 0x20AB5Cu);
    ctx->pc = 0x20AB58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967096));
    ctx->pc = 0x213450u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddPlayerScore__Fii_0x213450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AB5Cu; }
        else if (ctx->pc != 0x20AB5Cu) { ctx->pc = 0x20AB5Cu; }
    }
    if (ctx->pc != 0x20AB5Cu) { return; }
    ctx->pc = 0x20AB5Cu;
label_20ab5c:
    // 0x20ab5c: 0x8f848c48
    ctx->pc = 0x20ab5cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
label_20ab60:
    // 0x20ab60: 0x70002e28
    ctx->pc = 0x20ab60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20ab64:
    // 0x20ab64: 0xc072658
label_20ab68:
    if (ctx->pc == 0x20AB68u) {
        ctx->pc = 0x20AB68u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20AB6Cu;
        goto label_20ab6c;
    }
    ctx->pc = 0x20AB64u;
    SET_GPR_U32(ctx, 31, 0x20AB6Cu);
    ctx->pc = 0x20AB68u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1C9960u;
    {
        const uint32_t __entryPc = ctx->pc;
        chgCafsIdx__10CameraTaskFii_0x1c9960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AB6Cu; }
        else if (ctx->pc != 0x20AB6Cu) { ctx->pc = 0x20AB6Cu; }
    }
    if (ctx->pc != 0x20AB6Cu) { return; }
    ctx->pc = 0x20AB6Cu;
label_20ab6c:
    // 0x20ab6c: 0x8e621d74
    ctx->pc = 0x20ab6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 7540)));
label_20ab70:
    // 0x20ab70: 0x34420002
    ctx->pc = 0x20ab70u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 2));
label_20ab74:
    // 0x20ab74: 0xae621d74
    ctx->pc = 0x20ab74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 7540), GPR_U32(ctx, 2));
label_20ab78:
    // 0x20ab78: 0x72402628
    ctx->pc = 0x20ab78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_20ab7c:
    // 0x20ab7c: 0xc084d48
label_20ab80:
    if (ctx->pc == 0x20AB80u) {
        ctx->pc = 0x20AB84u;
        goto label_20ab84;
    }
    ctx->pc = 0x20AB7Cu;
    SET_GPR_U32(ctx, 31, 0x20AB84u);
    ctx->pc = 0x213520u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddPlayerHitNum__Fi_0x213520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AB84u; }
        else if (ctx->pc != 0x20AB84u) { ctx->pc = 0x20AB84u; }
    }
    if (ctx->pc != 0x20AB84u) { return; }
    ctx->pc = 0x20AB84u;
label_20ab84:
    // 0x20ab84: 0x0
    ctx->pc = 0x20ab84u;
    // NOP
label_20ab88:
    // 0x20ab88: 0x26100001
    ctx->pc = 0x20ab88u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_20ab8c:
    // 0x20ab8c: 0x2a030002
    ctx->pc = 0x20ab8cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 2));
label_20ab90:
    // 0x20ab90: 0x1460ffde
label_20ab94:
    if (ctx->pc == 0x20AB94u) {
        ctx->pc = 0x20AB94u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x20AB98u;
        goto label_20ab98;
    }
    ctx->pc = 0x20AB90u;
    {
        const bool branch_taken_0x20ab90 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x20AB94u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4));
        if (branch_taken_0x20ab90) {
            ctx->pc = 0x20AB0Cu;
            goto label_20ab0c;
        }
    }
    ctx->pc = 0x20AB98u;
label_20ab98:
    // 0x20ab98: 0x8e631d74
    ctx->pc = 0x20ab98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 7540)));
label_20ab9c:
    // 0x20ab9c: 0x30630002
    ctx->pc = 0x20ab9cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 2));
label_20aba0:
    // 0x20aba0: 0x10600023
label_20aba4:
    if (ctx->pc == 0x20ABA4u) {
        ctx->pc = 0x20ABA8u;
        goto label_20aba8;
    }
    ctx->pc = 0x20ABA0u;
    {
        const bool branch_taken_0x20aba0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x20aba0) {
            ctx->pc = 0x20AC30u;
            goto label_20ac30;
        }
    }
    ctx->pc = 0x20ABA8u;
label_20aba8:
    // 0x20aba8: 0x83838ba8
    ctx->pc = 0x20aba8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_20abac:
    // 0x20abac: 0x2c610007
    ctx->pc = 0x20abacu;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 7));
label_20abb0:
    // 0x20abb0: 0x10200016
label_20abb4:
    if (ctx->pc == 0x20ABB4u) {
        ctx->pc = 0x20ABB4u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->pc = 0x20ABB8u;
        goto label_20abb8;
    }
    ctx->pc = 0x20ABB0u;
    {
        const bool branch_taken_0x20abb0 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x20ABB4u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20abb0) {
            ctx->pc = 0x20AC0Cu;
            goto label_20ac0c;
        }
    }
    ctx->pc = 0x20ABB8u;
label_20abb8:
    // 0x20abb8: 0x3c04002c
    ctx->pc = 0x20abb8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_20abbc:
    // 0x20abbc: 0x31880
    ctx->pc = 0x20abbcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_20abc0:
    // 0x20abc0: 0x248404b0
    ctx->pc = 0x20abc0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1200));
label_20abc4:
    // 0x20abc4: 0x641821
    ctx->pc = 0x20abc4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20abc8:
    // 0x20abc8: 0x8c630000
    ctx->pc = 0x20abc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20abcc:
    // 0x20abcc: 0x600008
label_20abd0:
    if (ctx->pc == 0x20ABD0u) {
        ctx->pc = 0x20ABD4u;
        goto label_20abd4;
    }
    ctx->pc = 0x20ABCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20A9E0u: goto label_20a9e0;
            case 0x20A9E4u: goto label_20a9e4;
            case 0x20A9E8u: goto label_20a9e8;
            case 0x20A9ECu: goto label_20a9ec;
            case 0x20A9F0u: goto label_20a9f0;
            case 0x20A9F4u: goto label_20a9f4;
            case 0x20A9F8u: goto label_20a9f8;
            case 0x20A9FCu: goto label_20a9fc;
            case 0x20AA00u: goto label_20aa00;
            case 0x20AA04u: goto label_20aa04;
            case 0x20AA08u: goto label_20aa08;
            case 0x20AA0Cu: goto label_20aa0c;
            case 0x20AA10u: goto label_20aa10;
            case 0x20AA14u: goto label_20aa14;
            case 0x20AA18u: goto label_20aa18;
            case 0x20AA1Cu: goto label_20aa1c;
            case 0x20AA20u: goto label_20aa20;
            case 0x20AA24u: goto label_20aa24;
            case 0x20AA28u: goto label_20aa28;
            case 0x20AA2Cu: goto label_20aa2c;
            case 0x20AA30u: goto label_20aa30;
            case 0x20AA34u: goto label_20aa34;
            case 0x20AA38u: goto label_20aa38;
            case 0x20AA3Cu: goto label_20aa3c;
            case 0x20AA40u: goto label_20aa40;
            case 0x20AA44u: goto label_20aa44;
            case 0x20AA48u: goto label_20aa48;
            case 0x20AA4Cu: goto label_20aa4c;
            case 0x20AA50u: goto label_20aa50;
            case 0x20AA54u: goto label_20aa54;
            case 0x20AA58u: goto label_20aa58;
            case 0x20AA5Cu: goto label_20aa5c;
            case 0x20AA60u: goto label_20aa60;
            case 0x20AA64u: goto label_20aa64;
            case 0x20AA68u: goto label_20aa68;
            case 0x20AA6Cu: goto label_20aa6c;
            case 0x20AA70u: goto label_20aa70;
            case 0x20AA74u: goto label_20aa74;
            case 0x20AA78u: goto label_20aa78;
            case 0x20AA7Cu: goto label_20aa7c;
            case 0x20AA80u: goto label_20aa80;
            case 0x20AA84u: goto label_20aa84;
            case 0x20AA88u: goto label_20aa88;
            case 0x20AA8Cu: goto label_20aa8c;
            case 0x20AA90u: goto label_20aa90;
            case 0x20AA94u: goto label_20aa94;
            case 0x20AA98u: goto label_20aa98;
            case 0x20AA9Cu: goto label_20aa9c;
            case 0x20AAA0u: goto label_20aaa0;
            case 0x20AAA4u: goto label_20aaa4;
            case 0x20AAA8u: goto label_20aaa8;
            case 0x20AAACu: goto label_20aaac;
            case 0x20AAB0u: goto label_20aab0;
            case 0x20AAB4u: goto label_20aab4;
            case 0x20AAB8u: goto label_20aab8;
            case 0x20AABCu: goto label_20aabc;
            case 0x20AAC0u: goto label_20aac0;
            case 0x20AAC4u: goto label_20aac4;
            case 0x20AAC8u: goto label_20aac8;
            case 0x20AACCu: goto label_20aacc;
            case 0x20AAD0u: goto label_20aad0;
            case 0x20AAD4u: goto label_20aad4;
            case 0x20AAD8u: goto label_20aad8;
            case 0x20AADCu: goto label_20aadc;
            case 0x20AAE0u: goto label_20aae0;
            case 0x20AAE4u: goto label_20aae4;
            case 0x20AAE8u: goto label_20aae8;
            case 0x20AAECu: goto label_20aaec;
            case 0x20AAF0u: goto label_20aaf0;
            case 0x20AAF4u: goto label_20aaf4;
            case 0x20AAF8u: goto label_20aaf8;
            case 0x20AAFCu: goto label_20aafc;
            case 0x20AB00u: goto label_20ab00;
            case 0x20AB04u: goto label_20ab04;
            case 0x20AB08u: goto label_20ab08;
            case 0x20AB0Cu: goto label_20ab0c;
            case 0x20AB10u: goto label_20ab10;
            case 0x20AB14u: goto label_20ab14;
            case 0x20AB18u: goto label_20ab18;
            case 0x20AB1Cu: goto label_20ab1c;
            case 0x20AB20u: goto label_20ab20;
            case 0x20AB24u: goto label_20ab24;
            case 0x20AB28u: goto label_20ab28;
            case 0x20AB2Cu: goto label_20ab2c;
            case 0x20AB30u: goto label_20ab30;
            case 0x20AB34u: goto label_20ab34;
            case 0x20AB38u: goto label_20ab38;
            case 0x20AB3Cu: goto label_20ab3c;
            case 0x20AB40u: goto label_20ab40;
            case 0x20AB44u: goto label_20ab44;
            case 0x20AB48u: goto label_20ab48;
            case 0x20AB4Cu: goto label_20ab4c;
            case 0x20AB50u: goto label_20ab50;
            case 0x20AB54u: goto label_20ab54;
            case 0x20AB58u: goto label_20ab58;
            case 0x20AB5Cu: goto label_20ab5c;
            case 0x20AB60u: goto label_20ab60;
            case 0x20AB64u: goto label_20ab64;
            case 0x20AB68u: goto label_20ab68;
            case 0x20AB6Cu: goto label_20ab6c;
            case 0x20AB70u: goto label_20ab70;
            case 0x20AB74u: goto label_20ab74;
            case 0x20AB78u: goto label_20ab78;
            case 0x20AB7Cu: goto label_20ab7c;
            case 0x20AB80u: goto label_20ab80;
            case 0x20AB84u: goto label_20ab84;
            case 0x20AB88u: goto label_20ab88;
            case 0x20AB8Cu: goto label_20ab8c;
            case 0x20AB90u: goto label_20ab90;
            case 0x20AB94u: goto label_20ab94;
            case 0x20AB98u: goto label_20ab98;
            case 0x20AB9Cu: goto label_20ab9c;
            case 0x20ABA0u: goto label_20aba0;
            case 0x20ABA4u: goto label_20aba4;
            case 0x20ABA8u: goto label_20aba8;
            case 0x20ABACu: goto label_20abac;
            case 0x20ABB0u: goto label_20abb0;
            case 0x20ABB4u: goto label_20abb4;
            case 0x20ABB8u: goto label_20abb8;
            case 0x20ABBCu: goto label_20abbc;
            case 0x20ABC0u: goto label_20abc0;
            case 0x20ABC4u: goto label_20abc4;
            case 0x20ABC8u: goto label_20abc8;
            case 0x20ABCCu: goto label_20abcc;
            case 0x20ABD0u: goto label_20abd0;
            case 0x20ABD4u: goto label_20abd4;
            case 0x20ABD8u: goto label_20abd8;
            case 0x20ABDCu: goto label_20abdc;
            case 0x20ABE0u: goto label_20abe0;
            case 0x20ABE4u: goto label_20abe4;
            case 0x20ABE8u: goto label_20abe8;
            case 0x20ABECu: goto label_20abec;
            case 0x20ABF0u: goto label_20abf0;
            case 0x20ABF4u: goto label_20abf4;
            case 0x20ABF8u: goto label_20abf8;
            case 0x20ABFCu: goto label_20abfc;
            case 0x20AC00u: goto label_20ac00;
            case 0x20AC04u: goto label_20ac04;
            case 0x20AC08u: goto label_20ac08;
            case 0x20AC0Cu: goto label_20ac0c;
            case 0x20AC10u: goto label_20ac10;
            case 0x20AC14u: goto label_20ac14;
            case 0x20AC18u: goto label_20ac18;
            case 0x20AC1Cu: goto label_20ac1c;
            case 0x20AC20u: goto label_20ac20;
            case 0x20AC24u: goto label_20ac24;
            case 0x20AC28u: goto label_20ac28;
            case 0x20AC2Cu: goto label_20ac2c;
            case 0x20AC30u: goto label_20ac30;
            case 0x20AC34u: goto label_20ac34;
            case 0x20AC38u: goto label_20ac38;
            case 0x20AC3Cu: goto label_20ac3c;
            case 0x20AC40u: goto label_20ac40;
            case 0x20AC44u: goto label_20ac44;
            case 0x20AC48u: goto label_20ac48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20ABD4u;
label_20abd4:
    // 0x20abd4: 0x3c030015
    ctx->pc = 0x20abd4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)21 << 16));
label_20abd8:
    // 0x20abd8: 0x1000000c
label_20abdc:
    if (ctx->pc == 0x20ABDCu) {
        ctx->pc = 0x20ABDCu;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 14));
        ctx->pc = 0x20ABE0u;
        goto label_20abe0;
    }
    ctx->pc = 0x20ABD8u;
    {
        const bool branch_taken_0x20abd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20ABDCu;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 14));
        if (branch_taken_0x20abd8) {
            ctx->pc = 0x20AC0Cu;
            goto label_20ac0c;
        }
    }
    ctx->pc = 0x20ABE0u;
label_20abe0:
    // 0x20abe0: 0x3c03000d
    ctx->pc = 0x20abe0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)13 << 16));
label_20abe4:
    // 0x20abe4: 0x10000009
label_20abe8:
    if (ctx->pc == 0x20ABE8u) {
        ctx->pc = 0x20ABE8u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 19));
        ctx->pc = 0x20ABECu;
        goto label_20abec;
    }
    ctx->pc = 0x20ABE4u;
    {
        const bool branch_taken_0x20abe4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20ABE8u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 19));
        if (branch_taken_0x20abe4) {
            ctx->pc = 0x20AC0Cu;
            goto label_20ac0c;
        }
    }
    ctx->pc = 0x20ABECu;
label_20abec:
    // 0x20abec: 0x3c030019
    ctx->pc = 0x20abecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)25 << 16));
label_20abf0:
    // 0x20abf0: 0x10000006
label_20abf4:
    if (ctx->pc == 0x20ABF4u) {
        ctx->pc = 0x20ABF4u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 12));
        ctx->pc = 0x20ABF8u;
        goto label_20abf8;
    }
    ctx->pc = 0x20ABF0u;
    {
        const bool branch_taken_0x20abf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20ABF4u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 12));
        if (branch_taken_0x20abf0) {
            ctx->pc = 0x20AC0Cu;
            goto label_20ac0c;
        }
    }
    ctx->pc = 0x20ABF8u;
label_20abf8:
    // 0x20abf8: 0x3c030011
    ctx->pc = 0x20abf8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)17 << 16));
label_20abfc:
    // 0x20abfc: 0x10000003
label_20ac00:
    if (ctx->pc == 0x20AC00u) {
        ctx->pc = 0x20AC00u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 268));
        ctx->pc = 0x20AC04u;
        goto label_20ac04;
    }
    ctx->pc = 0x20ABFCu;
    {
        const bool branch_taken_0x20abfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20AC00u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 268));
        if (branch_taken_0x20abfc) {
            ctx->pc = 0x20AC0Cu;
            goto label_20ac0c;
        }
    }
    ctx->pc = 0x20AC04u;
label_20ac04:
    // 0x20ac04: 0x3c03000a
    ctx->pc = 0x20ac04u;
    SET_GPR_U32(ctx, 3, ((uint32_t)10 << 16));
label_20ac08:
    // 0x20ac08: 0x3465000e
    ctx->pc = 0x20ac08u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 3), 14));
label_20ac0c:
    // 0x20ac0c: 0x10a00008
label_20ac10:
    if (ctx->pc == 0x20AC10u) {
        ctx->pc = 0x20AC14u;
        goto label_20ac14;
    }
    ctx->pc = 0x20AC0Cu;
    {
        const bool branch_taken_0x20ac0c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x20ac0c) {
            ctx->pc = 0x20AC30u;
            goto label_20ac30;
        }
    }
    ctx->pc = 0x20AC14u;
label_20ac14:
    // 0x20ac14: 0x82630024
    ctx->pc = 0x20ac14u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 36)));
label_20ac18:
    // 0x20ac18: 0x3c020051
    ctx->pc = 0x20ac18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
label_20ac1c:
    // 0x20ac1c: 0x244434f0
    ctx->pc = 0x20ac1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
label_20ac20:
    // 0x20ac20: 0x70003e28
    ctx->pc = 0x20ac20u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_20ac24:
    // 0x20ac24: 0x24080040
    ctx->pc = 0x20ac24u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
label_20ac28:
    // 0x20ac28: 0xc086018
label_20ac2c:
    if (ctx->pc == 0x20AC2Cu) {
        ctx->pc = 0x20AC2Cu;
        SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 12));
        ctx->pc = 0x20AC30u;
        goto label_20ac30;
    }
    ctx->pc = 0x20AC28u;
    SET_GPR_U32(ctx, 31, 0x20AC30u);
    ctx->pc = 0x20AC2Cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 12));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AC30u; }
        else if (ctx->pc != 0x20AC30u) { ctx->pc = 0x20AC30u; }
    }
    if (ctx->pc != 0x20AC30u) { return; }
    ctx->pc = 0x20AC30u;
label_20ac30:
    // 0x20ac30: 0x7bbf0040
    ctx->pc = 0x20ac30u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20ac34:
    // 0x20ac34: 0x7bb30030
    ctx->pc = 0x20ac34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20ac38:
    // 0x20ac38: 0x7bb20020
    ctx->pc = 0x20ac38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20ac3c:
    // 0x20ac3c: 0x7bb10010
    ctx->pc = 0x20ac3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20ac40:
    // 0x20ac40: 0x7bb00000
    ctx->pc = 0x20ac40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20ac44:
    // 0x20ac44: 0x3e00008
label_20ac48:
    if (ctx->pc == 0x20AC48u) {
        ctx->pc = 0x20AC48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x20AC4Cu;
        goto label_fallthrough_0x20ac44;
    }
    ctx->pc = 0x20AC44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AC48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20A9E0u: goto label_20a9e0;
            case 0x20A9E4u: goto label_20a9e4;
            case 0x20A9E8u: goto label_20a9e8;
            case 0x20A9ECu: goto label_20a9ec;
            case 0x20A9F0u: goto label_20a9f0;
            case 0x20A9F4u: goto label_20a9f4;
            case 0x20A9F8u: goto label_20a9f8;
            case 0x20A9FCu: goto label_20a9fc;
            case 0x20AA00u: goto label_20aa00;
            case 0x20AA04u: goto label_20aa04;
            case 0x20AA08u: goto label_20aa08;
            case 0x20AA0Cu: goto label_20aa0c;
            case 0x20AA10u: goto label_20aa10;
            case 0x20AA14u: goto label_20aa14;
            case 0x20AA18u: goto label_20aa18;
            case 0x20AA1Cu: goto label_20aa1c;
            case 0x20AA20u: goto label_20aa20;
            case 0x20AA24u: goto label_20aa24;
            case 0x20AA28u: goto label_20aa28;
            case 0x20AA2Cu: goto label_20aa2c;
            case 0x20AA30u: goto label_20aa30;
            case 0x20AA34u: goto label_20aa34;
            case 0x20AA38u: goto label_20aa38;
            case 0x20AA3Cu: goto label_20aa3c;
            case 0x20AA40u: goto label_20aa40;
            case 0x20AA44u: goto label_20aa44;
            case 0x20AA48u: goto label_20aa48;
            case 0x20AA4Cu: goto label_20aa4c;
            case 0x20AA50u: goto label_20aa50;
            case 0x20AA54u: goto label_20aa54;
            case 0x20AA58u: goto label_20aa58;
            case 0x20AA5Cu: goto label_20aa5c;
            case 0x20AA60u: goto label_20aa60;
            case 0x20AA64u: goto label_20aa64;
            case 0x20AA68u: goto label_20aa68;
            case 0x20AA6Cu: goto label_20aa6c;
            case 0x20AA70u: goto label_20aa70;
            case 0x20AA74u: goto label_20aa74;
            case 0x20AA78u: goto label_20aa78;
            case 0x20AA7Cu: goto label_20aa7c;
            case 0x20AA80u: goto label_20aa80;
            case 0x20AA84u: goto label_20aa84;
            case 0x20AA88u: goto label_20aa88;
            case 0x20AA8Cu: goto label_20aa8c;
            case 0x20AA90u: goto label_20aa90;
            case 0x20AA94u: goto label_20aa94;
            case 0x20AA98u: goto label_20aa98;
            case 0x20AA9Cu: goto label_20aa9c;
            case 0x20AAA0u: goto label_20aaa0;
            case 0x20AAA4u: goto label_20aaa4;
            case 0x20AAA8u: goto label_20aaa8;
            case 0x20AAACu: goto label_20aaac;
            case 0x20AAB0u: goto label_20aab0;
            case 0x20AAB4u: goto label_20aab4;
            case 0x20AAB8u: goto label_20aab8;
            case 0x20AABCu: goto label_20aabc;
            case 0x20AAC0u: goto label_20aac0;
            case 0x20AAC4u: goto label_20aac4;
            case 0x20AAC8u: goto label_20aac8;
            case 0x20AACCu: goto label_20aacc;
            case 0x20AAD0u: goto label_20aad0;
            case 0x20AAD4u: goto label_20aad4;
            case 0x20AAD8u: goto label_20aad8;
            case 0x20AADCu: goto label_20aadc;
            case 0x20AAE0u: goto label_20aae0;
            case 0x20AAE4u: goto label_20aae4;
            case 0x20AAE8u: goto label_20aae8;
            case 0x20AAECu: goto label_20aaec;
            case 0x20AAF0u: goto label_20aaf0;
            case 0x20AAF4u: goto label_20aaf4;
            case 0x20AAF8u: goto label_20aaf8;
            case 0x20AAFCu: goto label_20aafc;
            case 0x20AB00u: goto label_20ab00;
            case 0x20AB04u: goto label_20ab04;
            case 0x20AB08u: goto label_20ab08;
            case 0x20AB0Cu: goto label_20ab0c;
            case 0x20AB10u: goto label_20ab10;
            case 0x20AB14u: goto label_20ab14;
            case 0x20AB18u: goto label_20ab18;
            case 0x20AB1Cu: goto label_20ab1c;
            case 0x20AB20u: goto label_20ab20;
            case 0x20AB24u: goto label_20ab24;
            case 0x20AB28u: goto label_20ab28;
            case 0x20AB2Cu: goto label_20ab2c;
            case 0x20AB30u: goto label_20ab30;
            case 0x20AB34u: goto label_20ab34;
            case 0x20AB38u: goto label_20ab38;
            case 0x20AB3Cu: goto label_20ab3c;
            case 0x20AB40u: goto label_20ab40;
            case 0x20AB44u: goto label_20ab44;
            case 0x20AB48u: goto label_20ab48;
            case 0x20AB4Cu: goto label_20ab4c;
            case 0x20AB50u: goto label_20ab50;
            case 0x20AB54u: goto label_20ab54;
            case 0x20AB58u: goto label_20ab58;
            case 0x20AB5Cu: goto label_20ab5c;
            case 0x20AB60u: goto label_20ab60;
            case 0x20AB64u: goto label_20ab64;
            case 0x20AB68u: goto label_20ab68;
            case 0x20AB6Cu: goto label_20ab6c;
            case 0x20AB70u: goto label_20ab70;
            case 0x20AB74u: goto label_20ab74;
            case 0x20AB78u: goto label_20ab78;
            case 0x20AB7Cu: goto label_20ab7c;
            case 0x20AB80u: goto label_20ab80;
            case 0x20AB84u: goto label_20ab84;
            case 0x20AB88u: goto label_20ab88;
            case 0x20AB8Cu: goto label_20ab8c;
            case 0x20AB90u: goto label_20ab90;
            case 0x20AB94u: goto label_20ab94;
            case 0x20AB98u: goto label_20ab98;
            case 0x20AB9Cu: goto label_20ab9c;
            case 0x20ABA0u: goto label_20aba0;
            case 0x20ABA4u: goto label_20aba4;
            case 0x20ABA8u: goto label_20aba8;
            case 0x20ABACu: goto label_20abac;
            case 0x20ABB0u: goto label_20abb0;
            case 0x20ABB4u: goto label_20abb4;
            case 0x20ABB8u: goto label_20abb8;
            case 0x20ABBCu: goto label_20abbc;
            case 0x20ABC0u: goto label_20abc0;
            case 0x20ABC4u: goto label_20abc4;
            case 0x20ABC8u: goto label_20abc8;
            case 0x20ABCCu: goto label_20abcc;
            case 0x20ABD0u: goto label_20abd0;
            case 0x20ABD4u: goto label_20abd4;
            case 0x20ABD8u: goto label_20abd8;
            case 0x20ABDCu: goto label_20abdc;
            case 0x20ABE0u: goto label_20abe0;
            case 0x20ABE4u: goto label_20abe4;
            case 0x20ABE8u: goto label_20abe8;
            case 0x20ABECu: goto label_20abec;
            case 0x20ABF0u: goto label_20abf0;
            case 0x20ABF4u: goto label_20abf4;
            case 0x20ABF8u: goto label_20abf8;
            case 0x20ABFCu: goto label_20abfc;
            case 0x20AC00u: goto label_20ac00;
            case 0x20AC04u: goto label_20ac04;
            case 0x20AC08u: goto label_20ac08;
            case 0x20AC0Cu: goto label_20ac0c;
            case 0x20AC10u: goto label_20ac10;
            case 0x20AC14u: goto label_20ac14;
            case 0x20AC18u: goto label_20ac18;
            case 0x20AC1Cu: goto label_20ac1c;
            case 0x20AC20u: goto label_20ac20;
            case 0x20AC24u: goto label_20ac24;
            case 0x20AC28u: goto label_20ac28;
            case 0x20AC2Cu: goto label_20ac2c;
            case 0x20AC30u: goto label_20ac30;
            case 0x20AC34u: goto label_20ac34;
            case 0x20AC38u: goto label_20ac38;
            case 0x20AC3Cu: goto label_20ac3c;
            case 0x20AC40u: goto label_20ac40;
            case 0x20AC44u: goto label_20ac44;
            case 0x20AC48u: goto label_20ac48;
            default: break;
        }
        return;
    }
label_fallthrough_0x20ac44:
    ctx->pc = 0x20AC4Cu;
}
