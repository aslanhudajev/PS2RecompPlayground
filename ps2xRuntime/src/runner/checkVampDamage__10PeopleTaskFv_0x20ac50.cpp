#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: checkVampDamage__10PeopleTaskFv
// Address: 0x20ac50 - 0x20ad44
void checkVampDamage__10PeopleTaskFv_0x20ac50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("checkVampDamage__10PeopleTaskFv");


    ctx->pc = 0x20ac50u;

    // 0x20ac50: 0x27bdffb0
    ctx->pc = 0x20ac50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20ac54: 0x7fbf0040
    ctx->pc = 0x20ac54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x20ac58: 0x7fb30030
    ctx->pc = 0x20ac58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20ac5c: 0x7fb20020
    ctx->pc = 0x20ac5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20ac60: 0x7fb10010
    ctx->pc = 0x20ac60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20ac64: 0x7fb00000
    ctx->pc = 0x20ac64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20ac68: 0x8c83000c
    ctx->pc = 0x20ac68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x20ac6c: 0x30630008
    ctx->pc = 0x20ac6cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 8));
    // 0x20ac70: 0x1060002d
    ctx->pc = 0x20AC70u;
    {
        const bool branch_taken_0x20ac70 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x20AC74u;
        SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20ac70) {
            ctx->pc = 0x20AD28u;
            goto label_20ad28;
        }
    }
    ctx->pc = 0x20AC78u;
    // 0x20ac78: 0xc253844
    ctx->pc = 0x20AC78u;
    SET_GPR_U32(ctx, 31, 0x20AC80u);
    ctx->pc = 0x94E110u;
    {
        const uint32_t __entryPc = ctx->pc;
        CheckHitParts__FP9EnemyTask_0x94e110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AC80u; }
        else if (ctx->pc != 0x20AC80u) { ctx->pc = 0x20AC80u; }
    }
    if (ctx->pc != 0x20AC80u) { return; }
    ctx->pc = 0x20AC80u;
    // 0x20ac80: 0x70008628
    ctx->pc = 0x20ac80u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20ac84: 0x27928c30
    ctx->pc = 0x20ac84u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 28), 4294937648));
label_20ac88:
    // 0x20ac88: 0x8e510000
    ctx->pc = 0x20ac88u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20ac8c: 0x2403ffff
    ctx->pc = 0x20ac8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20ac90: 0x52230022
    ctx->pc = 0x20AC90u;
    {
        const bool branch_taken_0x20ac90 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 3));
        if (branch_taken_0x20ac90) {
            ctx->pc = 0x20AC94u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x20AD1Cu;
            goto label_20ad1c;
        }
    }
    ctx->pc = 0x20AC98u;
    // 0x20ac98: 0x8e630000
    ctx->pc = 0x20ac98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x20ac9c: 0x711821
    ctx->pc = 0x20ac9cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x20aca0: 0x80650070
    ctx->pc = 0x20aca0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x20aca4: 0x18a0001c
    ctx->pc = 0x20ACA4u;
    {
        const bool branch_taken_0x20aca4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x20ACA8u;
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294938200), (uint8_t)GPR_U32(ctx, 17));
        if (branch_taken_0x20aca4) {
            ctx->pc = 0x20AD18u;
            goto label_20ad18;
        }
    }
    ctx->pc = 0x20ACACu;
    // 0x20acac: 0x8e64000c
    ctx->pc = 0x20acacu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x20acb0: 0x3c030400
    ctx->pc = 0x20acb0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1024 << 16));
    // 0x20acb4: 0x831824
    ctx->pc = 0x20acb4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20acb8: 0x14600017
    ctx->pc = 0x20ACB8u;
    {
        const bool branch_taken_0x20acb8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x20acb8) {
            ctx->pc = 0x20AD18u;
            goto label_20ad18;
        }
    }
    ctx->pc = 0x20ACC0u;
    // 0x20acc0: 0x30820100
    ctx->pc = 0x20acc0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 256));
    // 0x20acc4: 0x14400011
    ctx->pc = 0x20ACC4u;
    {
        const bool branch_taken_0x20acc4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20ACC8u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20acc4) {
            ctx->pc = 0x20AD0Cu;
            goto label_20ad0c;
        }
    }
    ctx->pc = 0x20ACCCu;
    // 0x20accc: 0xc082b54
    ctx->pc = 0x20ACCCu;
    SET_GPR_U32(ctx, 31, 0x20ACD4u);
    ctx->pc = 0x20ACD0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20AD50u;
    {
        const uint32_t __entryPc = ctx->pc;
        sufferVampDamage__10PeopleTaskFi_0x20ad50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ACD4u; }
        else if (ctx->pc != 0x20ACD4u) { ctx->pc = 0x20ACD4u; }
    }
    if (ctx->pc != 0x20ACD4u) { return; }
    ctx->pc = 0x20ACD4u;
    // 0x20acd4: 0x8e63000c
    ctx->pc = 0x20acd4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x20acd8: 0x3c020400
    ctx->pc = 0x20acd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1024 << 16));
    // 0x20acdc: 0x621024
    ctx->pc = 0x20acdcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20ace0: 0x10400006
    ctx->pc = 0x20ACE0u;
    {
        const bool branch_taken_0x20ace0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x20ACE4u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20ace0) {
            ctx->pc = 0x20ACFCu;
            goto label_20acfc;
        }
    }
    ctx->pc = 0x20ACE8u;
    // 0x20ace8: 0x72202628
    ctx->pc = 0x20ace8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x20acec: 0xc084d14
    ctx->pc = 0x20ACECu;
    SET_GPR_U32(ctx, 31, 0x20ACF4u);
    ctx->pc = 0x20ACF0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 100));
    ctx->pc = 0x213450u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddPlayerScore__Fii_0x213450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20ACF4u; }
        else if (ctx->pc != 0x20ACF4u) { ctx->pc = 0x20ACF4u; }
    }
    if (ctx->pc != 0x20ACF4u) { return; }
    ctx->pc = 0x20ACF4u;
    // 0x20acf4: 0x0
    ctx->pc = 0x20acf4u;
    // NOP
    // 0x20acf8: 0x72202628
    ctx->pc = 0x20acf8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_20acfc:
    // 0x20acfc: 0xc084d14
    ctx->pc = 0x20ACFCu;
    SET_GPR_U32(ctx, 31, 0x20AD04u);
    ctx->pc = 0x20AD00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x213450u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddPlayerScore__Fii_0x213450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AD04u; }
        else if (ctx->pc != 0x20AD04u) { ctx->pc = 0x20AD04u; }
    }
    if (ctx->pc != 0x20AD04u) { return; }
    ctx->pc = 0x20AD04u;
    // 0x20ad04: 0x0
    ctx->pc = 0x20ad04u;
    // NOP
    // 0x20ad08: 0x72202628
    ctx->pc = 0x20ad08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_20ad0c:
    // 0x20ad0c: 0xc084d48
    ctx->pc = 0x20AD0Cu;
    SET_GPR_U32(ctx, 31, 0x20AD14u);
    ctx->pc = 0x213520u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddPlayerHitNum__Fi_0x213520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20AD14u; }
        else if (ctx->pc != 0x20AD14u) { ctx->pc = 0x20AD14u; }
    }
    if (ctx->pc != 0x20AD14u) { return; }
    ctx->pc = 0x20AD14u;
    // 0x20ad14: 0x0
    ctx->pc = 0x20ad14u;
    // NOP
label_20ad18:
    // 0x20ad18: 0x26100001
    ctx->pc = 0x20ad18u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_20ad1c:
    // 0x20ad1c: 0x2a030002
    ctx->pc = 0x20ad1cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 2));
    // 0x20ad20: 0x1460ffd9
    ctx->pc = 0x20AD20u;
    {
        const bool branch_taken_0x20ad20 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x20AD24u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
        if (branch_taken_0x20ad20) {
            ctx->pc = 0x20AC88u;
            goto label_20ac88;
        }
    }
    ctx->pc = 0x20AD28u;
label_20ad28:
    // 0x20ad28: 0x7bbf0040
    ctx->pc = 0x20ad28u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20ad2c: 0x7bb30030
    ctx->pc = 0x20ad2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20ad30: 0x7bb20020
    ctx->pc = 0x20ad30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ad34: 0x7bb10010
    ctx->pc = 0x20ad34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20ad38: 0x7bb00000
    ctx->pc = 0x20ad38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ad3c: 0x3e00008
    ctx->pc = 0x20AD3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AD40u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20AC88u: goto label_20ac88;
            case 0x20ACFCu: goto label_20acfc;
            case 0x20AD0Cu: goto label_20ad0c;
            case 0x20AD18u: goto label_20ad18;
            case 0x20AD1Cu: goto label_20ad1c;
            case 0x20AD28u: goto label_20ad28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20AD44u;
}
