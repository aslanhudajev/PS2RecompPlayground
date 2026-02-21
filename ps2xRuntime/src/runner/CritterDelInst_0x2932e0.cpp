#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterDelInst
// Address: 0x2932e0 - 0x2933f8
void CritterDelInst_0x2932e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2932e0u;

label_2932e0:
    // 0x2932e0: 0x27bdffe0
    ctx->pc = 0x2932e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2932e4: 0xffbf0010
    ctx->pc = 0x2932e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2932e8: 0xffb00000
    ctx->pc = 0x2932e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2932ec: 0x80802d
    ctx->pc = 0x2932ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2932f0: 0x8e020004
    ctx->pc = 0x2932f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2932f4: 0x8c420120
    ctx->pc = 0x2932f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x2932f8: 0x84430020
    ctx->pc = 0x2932f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2932fc: 0x24020004
    ctx->pc = 0x2932fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x293300: 0x54620009
    ctx->pc = 0x293300u;
    {
        const bool branch_taken_0x293300 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x293300) {
            ctx->pc = 0x293304u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2912)));
            ctx->pc = 0x293328u;
            goto label_293328;
        }
    }
    ctx->pc = 0x293308u;
    // 0x293308: 0xc09a3ae
    ctx->pc = 0x293308u;
    SET_GPR_U32(ctx, 31, 0x293310u);
    ctx->pc = 0x29330Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x268EB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        del_target_0x268eb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293310u; }
    }
    if (ctx->pc != 0x293310u) { return; }
    ctx->pc = 0x293310u;
    // 0x293310: 0x8e020b64
    ctx->pc = 0x293310u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2916)));
    // 0x293314: 0x54400004
    ctx->pc = 0x293314u;
    {
        const bool branch_taken_0x293314 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x293314) {
            ctx->pc = 0x293318u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2912)));
            ctx->pc = 0x293328u;
            goto label_293328;
        }
    }
    ctx->pc = 0x29331Cu;
    // 0x29331c: 0xc0a77c2
    ctx->pc = 0x29331Cu;
    SET_GPR_U32(ctx, 31, 0x293324u);
    ctx->pc = 0x29DF08u;
    {
        const uint32_t __entryPc = ctx->pc;
        BossDeath_0x29df08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293324u; }
    }
    if (ctx->pc != 0x293324u) { return; }
    ctx->pc = 0x293324u;
    // 0x293324: 0x8e040b60
    ctx->pc = 0x293324u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2912)));
label_293328:
    // 0x293328: 0x50800005
    ctx->pc = 0x293328u;
    {
        const bool branch_taken_0x293328 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x293328) {
            ctx->pc = 0x29332Cu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 224)));
            ctx->pc = 0x293340u;
            goto label_293340;
        }
    }
    ctx->pc = 0x293330u;
    // 0x293330: 0xc0a4cb8
    ctx->pc = 0x293330u;
    SET_GPR_U32(ctx, 31, 0x293338u);
    ctx->pc = 0x2932E0u;
    goto label_2932e0;
    ctx->pc = 0x293338u;
label_293338:
    // 0x293338: 0xae000b60
    ctx->pc = 0x293338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2912), GPR_U32(ctx, 0));
    // 0x29333c: 0x8e0400e0
    ctx->pc = 0x29333cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_293340:
    // 0x293340: 0x50800004
    ctx->pc = 0x293340u;
    {
        const bool branch_taken_0x293340 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x293340) {
            ctx->pc = 0x293344u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 208)));
            ctx->pc = 0x293354u;
            goto label_293354;
        }
    }
    ctx->pc = 0x293348u;
    // 0x293348: 0xc0b3f1a
    ctx->pc = 0x293348u;
    SET_GPR_U32(ctx, 31, 0x293350u);
    ctx->pc = 0x29334Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293350u; }
    }
    if (ctx->pc != 0x293350u) { return; }
    ctx->pc = 0x293350u;
    // 0x293350: 0x8e0400d0
    ctx->pc = 0x293350u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_293354:
    // 0x293354: 0x50800004
    ctx->pc = 0x293354u;
    {
        const bool branch_taken_0x293354 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x293354) {
            ctx->pc = 0x293358u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 204)));
            ctx->pc = 0x293368u;
            goto label_293368;
        }
    }
    ctx->pc = 0x29335Cu;
    // 0x29335c: 0xc0b3f1a
    ctx->pc = 0x29335Cu;
    SET_GPR_U32(ctx, 31, 0x293364u);
    ctx->pc = 0x293360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293364u; }
    }
    if (ctx->pc != 0x293364u) { return; }
    ctx->pc = 0x293364u;
    // 0x293364: 0x8e0400cc
    ctx->pc = 0x293364u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 204)));
label_293368:
    // 0x293368: 0x24050001
    ctx->pc = 0x293368u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x29336c: 0xc09ea22
    ctx->pc = 0x29336Cu;
    SET_GPR_U32(ctx, 31, 0x293374u);
    ctx->pc = 0x293370u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x27A888u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxDeleteParented_0x27a888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293374u; }
    }
    if (ctx->pc != 0x293374u) { return; }
    ctx->pc = 0x293374u;
    // 0x293374: 0x8e0200e4
    ctx->pc = 0x293374u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x293378: 0x50400005
    ctx->pc = 0x293378u;
    {
        const bool branch_taken_0x293378 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x293378) {
            ctx->pc = 0x29337Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 128)));
            ctx->pc = 0x293390u;
            goto label_293390;
        }
    }
    ctx->pc = 0x293380u;
    // 0x293380: 0x8e0400e0
    ctx->pc = 0x293380u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x293384: 0xc0b3f1a
    ctx->pc = 0x293384u;
    SET_GPR_U32(ctx, 31, 0x29338Cu);
    ctx->pc = 0x293388u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29338Cu; }
    }
    if (ctx->pc != 0x29338Cu) { return; }
    ctx->pc = 0x29338Cu;
    // 0x29338c: 0x8e020080
    ctx->pc = 0x29338cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_293390:
    // 0x293390: 0x50400004
    ctx->pc = 0x293390u;
    {
        const bool branch_taken_0x293390 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x293390) {
            ctx->pc = 0x293394u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 112)));
            ctx->pc = 0x2933A4u;
            goto label_2933a4;
        }
    }
    ctx->pc = 0x293398u;
    // 0x293398: 0xc08496c
    ctx->pc = 0x293398u;
    SET_GPR_U32(ctx, 31, 0x2933A0u);
    ctx->pc = 0x29339Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 128));
    ctx->pc = 0x2125B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeDelete_0x2125b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2933A0u; }
    }
    if (ctx->pc != 0x2933A0u) { return; }
    ctx->pc = 0x2933A0u;
    // 0x2933a0: 0x8e040070
    ctx->pc = 0x2933a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_2933a4:
    // 0x2933a4: 0x50800004
    ctx->pc = 0x2933A4u;
    {
        const bool branch_taken_0x2933a4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2933a4) {
            ctx->pc = 0x2933A8u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
            ctx->pc = 0x2933B8u;
            goto label_2933b8;
        }
    }
    ctx->pc = 0x2933ACu;
    // 0x2933ac: 0xc0b3f1a
    ctx->pc = 0x2933ACu;
    SET_GPR_U32(ctx, 31, 0x2933B4u);
    ctx->pc = 0x2933B0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2933B4u; }
    }
    if (ctx->pc != 0x2933B4u) { return; }
    ctx->pc = 0x2933B4u;
    // 0x2933b4: 0xae0000cc
    ctx->pc = 0x2933b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
label_2933b8:
    // 0x2933b8: 0x8e0200c8
    ctx->pc = 0x2933b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x2933bc: 0x50400009
    ctx->pc = 0x2933BCu;
    {
        const bool branch_taken_0x2933bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2933bc) {
            ctx->pc = 0x2933C0u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->pc = 0x2933E4u;
            goto label_2933e4;
        }
    }
    ctx->pc = 0x2933C4u;
    // 0x2933c4: 0x0
    ctx->pc = 0x2933c4u;
    // NOP
label_2933c8:
    // 0x2933c8: 0xc0a4a96
    ctx->pc = 0x2933C8u;
    SET_GPR_U32(ctx, 31, 0x2933D0u);
    ctx->pc = 0x2933CCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 200)));
    ctx->pc = 0x292A58u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterDelAnimInst_0x292a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2933D0u; }
    }
    if (ctx->pc != 0x2933D0u) { return; }
    ctx->pc = 0x2933D0u;
    // 0x2933d0: 0x8e0200c8
    ctx->pc = 0x2933d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x2933d4: 0x8c420050
    ctx->pc = 0x2933d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2933d8: 0x1440fffb
    ctx->pc = 0x2933D8u;
    {
        const bool branch_taken_0x2933d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2933DCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
        if (branch_taken_0x2933d8) {
            ctx->pc = 0x2933C8u;
            goto label_2933c8;
        }
    }
    ctx->pc = 0x2933E0u;
    // 0x2933e0: 0xae000004
    ctx->pc = 0x2933e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2933e4:
    // 0x2933e4: 0xae000008
    ctx->pc = 0x2933e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2933e8: 0xdfbf0010
    ctx->pc = 0x2933e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2933ec: 0xdfb00000
    ctx->pc = 0x2933ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2933f0: 0x3e00008
    ctx->pc = 0x2933F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2933F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2932E0u: goto label_2932e0;
            case 0x293328u: goto label_293328;
            case 0x293338u: goto label_293338;
            case 0x293340u: goto label_293340;
            case 0x293354u: goto label_293354;
            case 0x293368u: goto label_293368;
            case 0x293390u: goto label_293390;
            case 0x2933A4u: goto label_2933a4;
            case 0x2933B8u: goto label_2933b8;
            case 0x2933C8u: goto label_2933c8;
            case 0x2933E4u: goto label_2933e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2933F8u;
}
