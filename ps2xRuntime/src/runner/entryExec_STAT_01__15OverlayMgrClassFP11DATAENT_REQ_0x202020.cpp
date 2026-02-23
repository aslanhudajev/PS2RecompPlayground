#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryExec_STAT_01__15OverlayMgrClassFP11DATAENT_REQ
// Address: 0x202020 - 0x2020d0
void entryExec_STAT_01__15OverlayMgrClassFP11DATAENT_REQ_0x202020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryExec_STAT_01__15OverlayMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x202020u;

    // 0x202020: 0x27bdffc0
    ctx->pc = 0x202020u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x202024: 0x7fbf0030
    ctx->pc = 0x202024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x202028: 0x7fb20020
    ctx->pc = 0x202028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20202c: 0x7fb10010
    ctx->pc = 0x20202cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x202030: 0x7fb00000
    ctx->pc = 0x202030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x202034: 0x70809628
    ctx->pc = 0x202034u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x202038: 0x8ca20008
    ctx->pc = 0x202038u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x20203c: 0x8c840018
    ctx->pc = 0x20203cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x202040: 0x70a08e28
    ctx->pc = 0x202040u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x202044: 0xc05b018
    ctx->pc = 0x202044u;
    SET_GPR_U32(ctx, 31, 0x20204Cu);
    ctx->pc = 0x202048u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 11));
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20204Cu; }
        else if (ctx->pc != 0x20204Cu) { ctx->pc = 0x20204Cu; }
    }
    if (ctx->pc != 0x20204Cu) { return; }
    ctx->pc = 0x20204Cu;
    // 0x20204c: 0x24030004
    ctx->pc = 0x20204cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x202050: 0x1443000b
    ctx->pc = 0x202050u;
    {
        const bool branch_taken_0x202050 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x202054u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x202050) {
            ctx->pc = 0x202080u;
            goto label_202080;
        }
    }
    ctx->pc = 0x202058u;
    // 0x202058: 0x8f828d10
    ctx->pc = 0x202058u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x20205c: 0x24420001
    ctx->pc = 0x20205cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x202060: 0xaf828d10
    ctx->pc = 0x202060u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937872), GPR_U32(ctx, 2));
    // 0x202064: 0x8e450010
    ctx->pc = 0x202064u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x202068: 0x8e460014
    ctx->pc = 0x202068u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x20206c: 0xc05aeba
    ctx->pc = 0x20206Cu;
    SET_GPR_U32(ctx, 31, 0x202074u);
    ctx->pc = 0x202070u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 24)));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202074u; }
        else if (ctx->pc != 0x202074u) { ctx->pc = 0x202074u; }
    }
    if (ctx->pc != 0x202074u) { return; }
    ctx->pc = 0x202074u;
    // 0x202074: 0xc05b018
    ctx->pc = 0x202074u;
    SET_GPR_U32(ctx, 31, 0x20207Cu);
    ctx->pc = 0x202078u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 24)));
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20207Cu; }
        else if (ctx->pc != 0x20207Cu) { ctx->pc = 0x20207Cu; }
    }
    if (ctx->pc != 0x20207Cu) { return; }
    ctx->pc = 0x20207Cu;
    // 0x20207c: 0x24030001
    ctx->pc = 0x20207cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_202080:
    // 0x202080: 0x10430003
    ctx->pc = 0x202080u;
    {
        const bool branch_taken_0x202080 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x202084u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x202080) {
            ctx->pc = 0x202090u;
            goto label_202090;
        }
    }
    ctx->pc = 0x202088u;
    // 0x202088: 0x1443000a
    ctx->pc = 0x202088u;
    {
        const bool branch_taken_0x202088 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x202088) {
            ctx->pc = 0x2020B4u;
            goto label_2020b4;
        }
    }
    ctx->pc = 0x202090u;
label_202090:
    // 0x202090: 0xc05ae0c
    ctx->pc = 0x202090u;
    SET_GPR_U32(ctx, 31, 0x202098u);
    ctx->pc = 0x202094u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 24)));
    ctx->pc = 0x16B830u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Close_0x16b830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202098u; }
        else if (ctx->pc != 0x202098u) { ctx->pc = 0x202098u; }
    }
    if (ctx->pc != 0x202098u) { return; }
    ctx->pc = 0x202098u;
    // 0x202098: 0x3c020050
    ctx->pc = 0x202098u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20209c: 0x101880
    ctx->pc = 0x20209cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x2020a0: 0x24420c60
    ctx->pc = 0x2020a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3168));
    // 0x2020a4: 0x431021
    ctx->pc = 0x2020a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2020a8: 0xac400000
    ctx->pc = 0x2020a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2020ac: 0x24020002
    ctx->pc = 0x2020acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2020b0: 0xae22000c
    ctx->pc = 0x2020b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_2020b4:
    // 0x2020b4: 0x7bbf0030
    ctx->pc = 0x2020b4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2020b8: 0x7bb20020
    ctx->pc = 0x2020b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2020bc: 0x7bb10010
    ctx->pc = 0x2020bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2020c0: 0x7bb00000
    ctx->pc = 0x2020c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2020c4: 0x24020001
    ctx->pc = 0x2020c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2020c8: 0x3e00008
    ctx->pc = 0x2020C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2020CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202080u: goto label_202080;
            case 0x202090u: goto label_202090;
            case 0x2020B4u: goto label_2020b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2020D0u;
}
