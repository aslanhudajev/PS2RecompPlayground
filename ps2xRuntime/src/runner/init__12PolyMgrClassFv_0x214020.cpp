#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init__12PolyMgrClassFv
// Address: 0x214020 - 0x214164
void init__12PolyMgrClassFv_0x214020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init__12PolyMgrClassFv");


    ctx->pc = 0x214020u;

    // 0x214020: 0x27bdfff0
    ctx->pc = 0x214020u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x214024: 0x7fbf0000
    ctx->pc = 0x214024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x214028: 0x3c010050
    ctx->pc = 0x214028u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x21402c: 0x8023fec3
    ctx->pc = 0x21402cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966979)));
    // 0x214030: 0x24020001
    ctx->pc = 0x214030u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x214034: 0x10620012
    ctx->pc = 0x214034u;
    {
        const bool branch_taken_0x214034 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x214034) {
            ctx->pc = 0x214080u;
            goto label_214080;
        }
    }
    ctx->pc = 0x21403Cu;
    // 0x21403c: 0x10600003
    ctx->pc = 0x21403Cu;
    {
        const bool branch_taken_0x21403c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x214040u;
        SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
        if (branch_taken_0x21403c) {
            ctx->pc = 0x21404Cu;
            goto label_21404c;
        }
    }
    ctx->pc = 0x214044u;
    // 0x214044: 0x1000000e
    ctx->pc = 0x214044u;
    {
        const bool branch_taken_0x214044 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x214044) {
            ctx->pc = 0x214080u;
            goto label_214080;
        }
    }
    ctx->pc = 0x21404Cu;
label_21404c:
    // 0x21404c: 0x8c26a3b8
    ctx->pc = 0x21404cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294943672)));
    // 0x214050: 0x3c020051
    ctx->pc = 0x214050u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x214054: 0x24443450
    ctx->pc = 0x214054u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13392));
    // 0x214058: 0xc081050
    ctx->pc = 0x214058u;
    SET_GPR_U32(ctx, 31, 0x214060u);
    ctx->pc = 0x21405Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 79));
    ctx->pc = 0x204140u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeBuf__11PalMgrClassFiPv_0x204140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214060u; }
        else if (ctx->pc != 0x214060u) { ctx->pc = 0x214060u; }
    }
    if (ctx->pc != 0x214060u) { return; }
    ctx->pc = 0x214060u;
    // 0x214060: 0x3c010029
    ctx->pc = 0x214060u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x214064: 0x8c26a2d8
    ctx->pc = 0x214064u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294943448)));
    // 0x214068: 0x3c020051
    ctx->pc = 0x214068u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x21406c: 0x24443450
    ctx->pc = 0x21406cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13392));
    // 0x214070: 0xc081050
    ctx->pc = 0x214070u;
    SET_GPR_U32(ctx, 31, 0x214078u);
    ctx->pc = 0x214074u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 51));
    ctx->pc = 0x204140u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeBuf__11PalMgrClassFiPv_0x204140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214078u; }
        else if (ctx->pc != 0x214078u) { ctx->pc = 0x214078u; }
    }
    if (ctx->pc != 0x214078u) { return; }
    ctx->pc = 0x214078u;
    // 0x214078: 0x1000000d
    ctx->pc = 0x214078u;
    {
        const bool branch_taken_0x214078 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x214078) {
            ctx->pc = 0x2140B0u;
            goto label_2140b0;
        }
    }
    ctx->pc = 0x214080u;
label_214080:
    // 0x214080: 0x3c010029
    ctx->pc = 0x214080u;
    SET_GPR_U32(ctx, 1, ((uint32_t)41 << 16));
    // 0x214084: 0x8c26a3c0
    ctx->pc = 0x214084u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 4294943680)));
    // 0x214088: 0x3c020051
    ctx->pc = 0x214088u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x21408c: 0x24443450
    ctx->pc = 0x21408cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13392));
    // 0x214090: 0xc081050
    ctx->pc = 0x214090u;
    SET_GPR_U32(ctx, 31, 0x214098u);
    ctx->pc = 0x214094u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 79));
    ctx->pc = 0x204140u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeBuf__11PalMgrClassFiPv_0x204140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214098u; }
        else if (ctx->pc != 0x214098u) { ctx->pc = 0x214098u; }
    }
    if (ctx->pc != 0x214098u) { return; }
    ctx->pc = 0x214098u;
    // 0x214098: 0x3c020029
    ctx->pc = 0x214098u;
    SET_GPR_U32(ctx, 2, ((uint32_t)41 << 16));
    // 0x21409c: 0x24469d40
    ctx->pc = 0x21409cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294942016));
    // 0x2140a0: 0x3c020051
    ctx->pc = 0x2140a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x2140a4: 0x24443450
    ctx->pc = 0x2140a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13392));
    // 0x2140a8: 0xc081050
    ctx->pc = 0x2140A8u;
    SET_GPR_U32(ctx, 31, 0x2140B0u);
    ctx->pc = 0x2140ACu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 51));
    ctx->pc = 0x204140u;
    {
        const uint32_t __entryPc = ctx->pc;
        changeBuf__11PalMgrClassFiPv_0x204140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2140B0u; }
        else if (ctx->pc != 0x2140B0u) { ctx->pc = 0x2140B0u; }
    }
    if (ctx->pc != 0x2140B0u) { return; }
    ctx->pc = 0x2140B0u;
label_2140b0:
    // 0x2140b0: 0x3c020051
    ctx->pc = 0x2140b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x2140b4: 0x24443450
    ctx->pc = 0x2140b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13392));
    // 0x2140b8: 0xc081058
    ctx->pc = 0x2140B8u;
    SET_GPR_U32(ctx, 31, 0x2140C0u);
    ctx->pc = 0x2140BCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 79));
    ctx->pc = 0x204160u;
    {
        const uint32_t __entryPc = ctx->pc;
        reqTrans__11PalMgrClassFi_0x204160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2140C0u; }
        else if (ctx->pc != 0x2140C0u) { ctx->pc = 0x2140C0u; }
    }
    if (ctx->pc != 0x2140C0u) { return; }
    ctx->pc = 0x2140C0u;
    // 0x2140c0: 0x3c020051
    ctx->pc = 0x2140c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x2140c4: 0x24443450
    ctx->pc = 0x2140c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13392));
    // 0x2140c8: 0xc081058
    ctx->pc = 0x2140C8u;
    SET_GPR_U32(ctx, 31, 0x2140D0u);
    ctx->pc = 0x2140CCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 51));
    ctx->pc = 0x204160u;
    {
        const uint32_t __entryPc = ctx->pc;
        reqTrans__11PalMgrClassFi_0x204160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2140D0u; }
        else if (ctx->pc != 0x2140D0u) { ctx->pc = 0x2140D0u; }
    }
    if (ctx->pc != 0x2140D0u) { return; }
    ctx->pc = 0x2140D0u;
    // 0x2140d0: 0x3c020051
    ctx->pc = 0x2140d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x2140d4: 0xc081048
    ctx->pc = 0x2140D4u;
    SET_GPR_U32(ctx, 31, 0x2140DCu);
    ctx->pc = 0x2140D8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13392));
    ctx->pc = 0x204120u;
    {
        const uint32_t __entryPc = ctx->pc;
        transfer__11PalMgrClassFv_0x204120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2140DCu; }
        else if (ctx->pc != 0x2140DCu) { ctx->pc = 0x2140DCu; }
    }
    if (ctx->pc != 0x2140DCu) { return; }
    ctx->pc = 0x2140DCu;
    // 0x2140dc: 0xc0854a8
    ctx->pc = 0x2140DCu;
    SET_GPR_U32(ctx, 31, 0x2140E4u);
    ctx->pc = 0x2152A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitEntryObjLnk__Fv_0x2152a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2140E4u; }
        else if (ctx->pc != 0x2140E4u) { ctx->pc = 0x2140E4u; }
    }
    if (ctx->pc != 0x2140E4u) { return; }
    ctx->pc = 0x2140E4u;
    // 0x2140e4: 0x3c010050
    ctx->pc = 0x2140e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x2140e8: 0x8423e504
    ctx->pc = 0x2140e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x2140ec: 0x24020016
    ctx->pc = 0x2140ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 22));
    // 0x2140f0: 0x14620009
    ctx->pc = 0x2140F0u;
    {
        const bool branch_taken_0x2140f0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2140F4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x2140f0) {
            ctx->pc = 0x214118u;
            goto label_214118;
        }
    }
    ctx->pc = 0x2140F8u;
    // 0x2140f8: 0x3c020050
    ctx->pc = 0x2140f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x2140fc: 0x2444e540
    ctx->pc = 0x2140fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960448));
    // 0x214100: 0x3c020020
    ctx->pc = 0x214100u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32 << 16));
    // 0x214104: 0x3c05001e
    ctx->pc = 0x214104u;
    SET_GPR_U32(ctx, 5, ((uint32_t)30 << 16));
    // 0x214108: 0xc086994
    ctx->pc = 0x214108u;
    SET_GPR_U32(ctx, 31, 0x214110u);
    ctx->pc = 0x21410Cu;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 28416));
    ctx->pc = 0x21A650u;
    {
        const uint32_t __entryPc = ctx->pc;
        init2__11TexMgrClassFii_0x21a650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214110u; }
        else if (ctx->pc != 0x214110u) { ctx->pc = 0x214110u; }
    }
    if (ctx->pc != 0x214110u) { return; }
    ctx->pc = 0x214110u;
    // 0x214110: 0x10000006
    ctx->pc = 0x214110u;
    {
        const bool branch_taken_0x214110 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x214110) {
            ctx->pc = 0x21412Cu;
            goto label_21412c;
        }
    }
    ctx->pc = 0x214118u;
label_214118:
    // 0x214118: 0x2444e540
    ctx->pc = 0x214118u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960448));
    // 0x21411c: 0x3c020020
    ctx->pc = 0x21411cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)32 << 16));
    // 0x214120: 0x3c05001e
    ctx->pc = 0x214120u;
    SET_GPR_U32(ctx, 5, ((uint32_t)30 << 16));
    // 0x214124: 0xc086994
    ctx->pc = 0x214124u;
    SET_GPR_U32(ctx, 31, 0x21412Cu);
    ctx->pc = 0x214128u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 2), 28416));
    ctx->pc = 0x21A650u;
    {
        const uint32_t __entryPc = ctx->pc;
        init2__11TexMgrClassFii_0x21a650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21412Cu; }
        else if (ctx->pc != 0x21412Cu) { ctx->pc = 0x21412Cu; }
    }
    if (ctx->pc != 0x21412Cu) { return; }
    ctx->pc = 0x21412Cu;
label_21412c:
    // 0x21412c: 0x3c010051
    ctx->pc = 0x21412cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)81 << 16));
    // 0x214130: 0x8c26345c
    ctx->pc = 0x214130u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 13404)));
    // 0x214134: 0x3c020050
    ctx->pc = 0x214134u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x214138: 0x2444e540
    ctx->pc = 0x214138u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960448));
    // 0x21413c: 0xc0869d8
    ctx->pc = 0x21413Cu;
    SET_GPR_U32(ctx, 31, 0x214144u);
    ctx->pc = 0x214140u;
    SET_GPR_U32(ctx, 5, ((uint32_t)4 << 16));
    ctx->pc = 0x21A760u;
    {
        const uint32_t __entryPc = ctx->pc;
        initOndemandTex__11TexMgrClassFii_0x21a760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214144u; }
        else if (ctx->pc != 0x214144u) { ctx->pc = 0x214144u; }
    }
    if (ctx->pc != 0x214144u) { return; }
    ctx->pc = 0x214144u;
    // 0x214144: 0x44806000
    ctx->pc = 0x214144u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x214148: 0xc06a60c
    ctx->pc = 0x214148u;
    SET_GPR_U32(ctx, 31, 0x214150u);
    ctx->pc = 0x21414Cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1A9830u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetEnvMapOffset_0x1a9830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214150u; }
        else if (ctx->pc != 0x214150u) { ctx->pc = 0x214150u; }
    }
    if (ctx->pc != 0x214150u) { return; }
    ctx->pc = 0x214150u;
    // 0x214150: 0xc084ff8
    ctx->pc = 0x214150u;
    SET_GPR_U32(ctx, 31, 0x214158u);
    ctx->pc = 0x213FE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LinkCOMMONPol__Fv_0x213fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214158u; }
        else if (ctx->pc != 0x214158u) { ctx->pc = 0x214158u; }
    }
    if (ctx->pc != 0x214158u) { return; }
    ctx->pc = 0x214158u;
    // 0x214158: 0x7bbf0000
    ctx->pc = 0x214158u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21415c: 0x3e00008
    ctx->pc = 0x21415Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214160u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21404Cu: goto label_21404c;
            case 0x214080u: goto label_214080;
            case 0x2140B0u: goto label_2140b0;
            case 0x214118u: goto label_214118;
            case 0x21412Cu: goto label_21412c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x214164u;
}
