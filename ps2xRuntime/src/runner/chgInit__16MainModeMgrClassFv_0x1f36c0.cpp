#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: chgInit__16MainModeMgrClassFv
// Address: 0x1f36c0 - 0x1f379c
void chgInit__16MainModeMgrClassFv_0x1f36c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("chgInit__16MainModeMgrClassFv");


    ctx->pc = 0x1f36c0u;

    // 0x1f36c0: 0x27bdffe0
    ctx->pc = 0x1f36c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f36c4: 0x7fbf0010
    ctx->pc = 0x1f36c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1f36c8: 0x7fb00000
    ctx->pc = 0x1f36c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f36cc: 0x24020001
    ctx->pc = 0x1f36ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f36d0: 0x3c010050
    ctx->pc = 0x1f36d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1f36d4: 0xac220b44
    ctx->pc = 0x1f36d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2884), GPR_U32(ctx, 2));
    // 0x1f36d8: 0x70808628
    ctx->pc = 0x1f36d8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1f36dc: 0x3c020051
    ctx->pc = 0x1f36dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1f36e0: 0xc0863a8
    ctx->pc = 0x1F36E0u;
    SET_GPR_U32(ctx, 31, 0x1F36E8u);
    ctx->pc = 0x1F36E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x218EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        flushCur__13EntryDatClassFv_0x218ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F36E8u; }
        else if (ctx->pc != 0x1F36E8u) { ctx->pc = 0x1F36E8u; }
    }
    if (ctx->pc != 0x1F36E8u) { return; }
    ctx->pc = 0x1F36E8u;
    // 0x1f36e8: 0x3c010050
    ctx->pc = 0x1f36e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1f36ec: 0xac200b44
    ctx->pc = 0x1f36ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2884), GPR_U32(ctx, 0));
    // 0x1f36f0: 0x8f858bcc
    ctx->pc = 0x1f36f0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x1f36f4: 0xc07cf30
    ctx->pc = 0x1F36F4u;
    SET_GPR_U32(ctx, 31, 0x1F36FCu);
    ctx->pc = 0x1F36F8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x1F3CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        OvlChangeMainModule__Fii_0x1f3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F36FCu; }
        else if (ctx->pc != 0x1F36FCu) { ctx->pc = 0x1F36FCu; }
    }
    if (ctx->pc != 0x1F36FCu) { return; }
    ctx->pc = 0x1F36FCu;
    // 0x1f36fc: 0x86020004
    ctx->pc = 0x1f36fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f3700: 0x10400020
    ctx->pc = 0x1F3700u;
    {
        const bool branch_taken_0x1f3700 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F3704u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x1f3700) {
            ctx->pc = 0x1F3784u;
            goto label_1f3784;
        }
    }
    ctx->pc = 0x1F3708u;
    // 0x1f3708: 0xc06aeb4
    ctx->pc = 0x1F3708u;
    SET_GPR_U32(ctx, 31, 0x1F3710u);
    ctx->pc = 0x1F370Cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1ABAD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetFontSize_0x1abad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3710u; }
        else if (ctx->pc != 0x1F3710u) { ctx->pc = 0x1F3710u; }
    }
    if (ctx->pc != 0x1F3710u) { return; }
    ctx->pc = 0x1F3710u;
    // 0x1f3710: 0x3c020051
    ctx->pc = 0x1f3710u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1f3714: 0xc086348
    ctx->pc = 0x1F3714u;
    SET_GPR_U32(ctx, 31, 0x1F371Cu);
    ctx->pc = 0x1F3718u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x218D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__13EntryDatClassFv_0x218d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F371Cu; }
        else if (ctx->pc != 0x1F371Cu) { ctx->pc = 0x1F371Cu; }
    }
    if (ctx->pc != 0x1F371Cu) { return; }
    ctx->pc = 0x1F371Cu;
    // 0x1f371c: 0x3c020050
    ctx->pc = 0x1f371cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1f3720: 0xc07a5c0
    ctx->pc = 0x1F3720u;
    SET_GPR_U32(ctx, 31, 0x1F3728u);
    ctx->pc = 0x1F3724u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 2880));
    ctx->pc = 0x1E9700u;
    {
        const uint32_t __entryPc = ctx->pc;
        waitIdleAll__12FileMgrClassFv_0x1e9700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3728u; }
        else if (ctx->pc != 0x1F3728u) { ctx->pc = 0x1F3728u; }
    }
    if (ctx->pc != 0x1F3728u) { return; }
    ctx->pc = 0x1F3728u;
    // 0x1f3728: 0x3c020051
    ctx->pc = 0x1f3728u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1f372c: 0xc085b90
    ctx->pc = 0x1F372Cu;
    SET_GPR_U32(ctx, 31, 0x1F3734u);
    ctx->pc = 0x1F3730u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13536));
    ctx->pc = 0x216E40u;
    {
        const uint32_t __entryPc = ctx->pc;
        destroyHandleAll__14SofdecMgrClassFv_0x216e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3734u; }
        else if (ctx->pc != 0x1F3734u) { ctx->pc = 0x1F3734u; }
    }
    if (ctx->pc != 0x1F3734u) { return; }
    ctx->pc = 0x1F3734u;
    // 0x1f3734: 0xc068684
    ctx->pc = 0x1F3734u;
    SET_GPR_U32(ctx, 31, 0x1F373Cu);
    ctx->pc = 0x1A1A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MallocInit_0x1a1a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F373Cu; }
        else if (ctx->pc != 0x1F373Cu) { ctx->pc = 0x1F373Cu; }
    }
    if (ctx->pc != 0x1F373Cu) { return; }
    ctx->pc = 0x1F373Cu;
    // 0x1f373c: 0x3c010050
    ctx->pc = 0x1f373cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1f3740: 0x8423e504
    ctx->pc = 0x1f3740u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x1f3744: 0x24020009
    ctx->pc = 0x1f3744u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1f3748: 0xa3808ba8
    ctx->pc = 0x1f3748u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937512), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f374c: 0x14620004
    ctx->pc = 0x1F374Cu;
    {
        const bool branch_taken_0x1f374c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1F3750u;
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937488), (uint8_t)GPR_U32(ctx, 0));
        if (branch_taken_0x1f374c) {
            ctx->pc = 0x1F3760u;
            goto label_1f3760;
        }
    }
    ctx->pc = 0x1F3754u;
    // 0x1f3754: 0x3c020050
    ctx->pc = 0x1f3754u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1f3758: 0xc28396c
    ctx->pc = 0x1F3758u;
    SET_GPR_U32(ctx, 31, 0x1F3760u);
    ctx->pc = 0x1F375Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 720));
    ctx->pc = 0xA0E5B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setStageNo__12DemoMgrClassFv_0xa0e5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3760u; }
        else if (ctx->pc != 0x1F3760u) { ctx->pc = 0x1F3760u; }
    }
    if (ctx->pc != 0x1F3760u) { return; }
    ctx->pc = 0x1F3760u;
label_1f3760:
    // 0x1f3760: 0x3c020050
    ctx->pc = 0x1f3760u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1f3764: 0x2405ffff
    ctx->pc = 0x1f3764u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f3768: 0x24440b40
    ctx->pc = 0x1f3768u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 2880));
    // 0x1f376c: 0xc07a66c
    ctx->pc = 0x1F376Cu;
    SET_GPR_U32(ctx, 31, 0x1F3774u);
    ctx->pc = 0x1F3770u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E99B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        closeAll__12FileMgrClassFii_0x1e99b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3774u; }
        else if (ctx->pc != 0x1F3774u) { ctx->pc = 0x1F3774u; }
    }
    if (ctx->pc != 0x1F3774u) { return; }
    ctx->pc = 0x1F3774u;
    // 0x1f3774: 0xc085c80
    ctx->pc = 0x1F3774u;
    SET_GPR_U32(ctx, 31, 0x1F377Cu);
    ctx->pc = 0x1F3778u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937416));
    ctx->pc = 0x217200u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__11SprMgrClassFv_0x217200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F377Cu; }
        else if (ctx->pc != 0x1F377Cu) { ctx->pc = 0x1F377Cu; }
    }
    if (ctx->pc != 0x1F377Cu) { return; }
    ctx->pc = 0x1F377Cu;
    // 0x1f377c: 0xc085008
    ctx->pc = 0x1F377Cu;
    SET_GPR_U32(ctx, 31, 0x1F3784u);
    ctx->pc = 0x1F3780u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937676));
    ctx->pc = 0x214020u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__12PolyMgrClassFv_0x214020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3784u; }
        else if (ctx->pc != 0x1F3784u) { ctx->pc = 0x1F3784u; }
    }
    if (ctx->pc != 0x1F3784u) { return; }
    ctx->pc = 0x1F3784u;
label_1f3784:
    // 0x1f3784: 0xc0789f8
    ctx->pc = 0x1F3784u;
    SET_GPR_U32(ctx, 31, 0x1F378Cu);
    ctx->pc = 0x1E27E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PowerOnInitComm__Fv_0x1e27e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F378Cu; }
        else if (ctx->pc != 0x1F378Cu) { ctx->pc = 0x1F378Cu; }
    }
    if (ctx->pc != 0x1F378Cu) { return; }
    ctx->pc = 0x1F378Cu;
    // 0x1f378c: 0x7bbf0010
    ctx->pc = 0x1f378cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3790: 0x7bb00000
    ctx->pc = 0x1f3790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3794: 0x3e00008
    ctx->pc = 0x1F3794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3798u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3760u: goto label_1f3760;
            case 0x1F3784u: goto label_1f3784;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F379Cu;
}
