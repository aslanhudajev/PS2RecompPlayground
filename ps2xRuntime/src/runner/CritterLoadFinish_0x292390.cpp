#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterLoadFinish
// Address: 0x292390 - 0x2924c0
void CritterLoadFinish_0x292390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x292390u;

    // 0x292390: 0x27bdffb0
    ctx->pc = 0x292390u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x292394: 0xffbf0040
    ctx->pc = 0x292394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x292398: 0xffb10030
    ctx->pc = 0x292398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x29239c: 0xffb00020
    ctx->pc = 0x29239cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2923a0: 0x80882d
    ctx->pc = 0x2923a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2923a4: 0x8e220138
    ctx->pc = 0x2923a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x2923a8: 0x14400041
    ctx->pc = 0x2923A8u;
    {
        const bool branch_taken_0x2923a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2923ACu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2923a8) {
            ctx->pc = 0x2924B0u;
            goto label_2924b0;
        }
    }
    ctx->pc = 0x2923B0u;
    // 0x2923b0: 0x8622011e
    ctx->pc = 0x2923b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 286)));
    // 0x2923b4: 0x4430015
    ctx->pc = 0x2923B4u;
    {
        const bool branch_taken_0x2923b4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2923b4) {
            ctx->pc = 0x2923B8u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 304)));
            ctx->pc = 0x29240Cu;
            goto label_29240c;
        }
    }
    ctx->pc = 0x2923BCu;
    // 0x2923bc: 0x8e260120
    ctx->pc = 0x2923bcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x2923c0: 0x3a0202d
    ctx->pc = 0x2923c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2923c4: 0x3c05003b
    ctx->pc = 0x2923c4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2923c8: 0x24a5e0d8
    ctx->pc = 0x2923c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294959320));
    // 0x2923cc: 0x24c60010
    ctx->pc = 0x2923ccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 16));
    // 0x2923d0: 0xc0b6252
    ctx->pc = 0x2923D0u;
    SET_GPR_U32(ctx, 31, 0x2923D8u);
    ctx->pc = 0x2923D4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2923D8u; }
    }
    if (ctx->pc != 0x2923D8u) { return; }
    ctx->pc = 0x2923D8u;
    // 0x2923d8: 0x8e220120
    ctx->pc = 0x2923d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x2923dc: 0x8c440028
    ctx->pc = 0x2923dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2923e0: 0x3a0282d
    ctx->pc = 0x2923e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2923e4: 0xc0847fc
    ctx->pc = 0x2923E4u;
    SET_GPR_U32(ctx, 31, 0x2923ECu);
    ctx->pc = 0x2923E8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2923ECu; }
    }
    if (ctx->pc != 0x2923ECu) { return; }
    ctx->pc = 0x2923ECu;
    // 0x2923ec: 0x14400014
    ctx->pc = 0x2923ECu;
    {
        const bool branch_taken_0x2923ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2923F0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 2));
        if (branch_taken_0x2923ec) {
            ctx->pc = 0x292440u;
            goto label_292440;
        }
    }
    ctx->pc = 0x2923F4u;
    // 0x2923f4: 0x3c04003b
    ctx->pc = 0x2923f4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2923f8: 0x2484e0e0
    ctx->pc = 0x2923f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959328));
    // 0x2923fc: 0xc0b492e
    ctx->pc = 0x2923FCu;
    SET_GPR_U32(ctx, 31, 0x292404u);
    ctx->pc = 0x292400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292404u; }
    }
    if (ctx->pc != 0x292404u) { return; }
    ctx->pc = 0x292404u;
    // 0x292404: 0x1000000f
    ctx->pc = 0x292404u;
    {
        const bool branch_taken_0x292404 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x292408u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 308)));
        if (branch_taken_0x292404) {
            ctx->pc = 0x292444u;
            goto label_292444;
        }
    }
    ctx->pc = 0x29240Cu;
label_29240c:
    // 0x29240c: 0x24030140
    ctx->pc = 0x29240cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 320));
    // 0x292410: 0x431018
    ctx->pc = 0x292410u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x292414: 0x8c830014
    ctx->pc = 0x292414u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x292418: 0x431021
    ctx->pc = 0x292418u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29241c: 0x8c430138
    ctx->pc = 0x29241cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x292420: 0xae230138
    ctx->pc = 0x292420u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 3));
    // 0x292424: 0x8c420138
    ctx->pc = 0x292424u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x292428: 0x54400006
    ctx->pc = 0x292428u;
    {
        const bool branch_taken_0x292428 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x292428) {
            ctx->pc = 0x29242Cu;
            SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 308)));
            ctx->pc = 0x292444u;
            goto label_292444;
        }
    }
    ctx->pc = 0x292430u;
    // 0x292430: 0x3c04003b
    ctx->pc = 0x292430u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x292434: 0x2484e100
    ctx->pc = 0x292434u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959360));
    // 0x292438: 0xc0b49a6
    ctx->pc = 0x292438u;
    SET_GPR_U32(ctx, 31, 0x292440u);
    ctx->pc = 0x29243Cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292440u; }
    }
    if (ctx->pc != 0x292440u) { return; }
    ctx->pc = 0x292440u;
label_292440:
    // 0x292440: 0x8e300134
    ctx->pc = 0x292440u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 308)));
label_292444:
    // 0x292444: 0x1200000b
    ctx->pc = 0x292444u;
    {
        const bool branch_taken_0x292444 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x292448u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x292444) {
            ctx->pc = 0x292474u;
            goto label_292474;
        }
    }
    ctx->pc = 0x29244Cu;
    // 0x29244c: 0x8e220120
    ctx->pc = 0x29244cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 288)));
label_292450:
    // 0x292450: 0x8c440028
    ctx->pc = 0x292450u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x292454: 0x26050010
    ctx->pc = 0x292454u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 16));
    // 0x292458: 0xc0847fc
    ctx->pc = 0x292458u;
    SET_GPR_U32(ctx, 31, 0x292460u);
    ctx->pc = 0x29245Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x211FF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeMatch_0x211ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292460u; }
    }
    if (ctx->pc != 0x292460u) { return; }
    ctx->pc = 0x292460u;
    // 0x292460: 0xae020004
    ctx->pc = 0x292460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x292464: 0x8e100008
    ctx->pc = 0x292464u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x292468: 0x5600fff9
    ctx->pc = 0x292468u;
    {
        const bool branch_taken_0x292468 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x292468) {
            ctx->pc = 0x29246Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 288)));
            ctx->pc = 0x292450u;
            goto label_292450;
        }
    }
    ctx->pc = 0x292470u;
    // 0x292470: 0x220202d
    ctx->pc = 0x292470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_292474:
    // 0x292474: 0x26250020
    ctx->pc = 0x292474u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 32));
    // 0x292478: 0xc0a47c8
    ctx->pc = 0x292478u;
    SET_GPR_U32(ctx, 31, 0x292480u);
    ctx->pc = 0x29247Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x291F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterGetNodeIdx_0x291f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292480u; }
    }
    if (ctx->pc != 0x292480u) { return; }
    ctx->pc = 0x292480u;
    // 0x292480: 0xa6220056
    ctx->pc = 0x292480u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 86), (uint16_t)GPR_U32(ctx, 2));
    // 0x292484: 0x220202d
    ctx->pc = 0x292484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292488: 0x26250030
    ctx->pc = 0x292488u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 48));
    // 0x29248c: 0xc0a47c8
    ctx->pc = 0x29248Cu;
    SET_GPR_U32(ctx, 31, 0x292494u);
    ctx->pc = 0x292490u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x291F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterGetNodeIdx_0x291f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292494u; }
    }
    if (ctx->pc != 0x292494u) { return; }
    ctx->pc = 0x292494u;
    // 0x292494: 0xa6220058
    ctx->pc = 0x292494u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 88), (uint16_t)GPR_U32(ctx, 2));
    // 0x292498: 0x220202d
    ctx->pc = 0x292498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29249c: 0x26250040
    ctx->pc = 0x29249cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 64));
    // 0x2924a0: 0xc0a47c8
    ctx->pc = 0x2924A0u;
    SET_GPR_U32(ctx, 31, 0x2924A8u);
    ctx->pc = 0x2924A4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x291F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterGetNodeIdx_0x291f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2924A8u; }
    }
    if (ctx->pc != 0x2924A8u) { return; }
    ctx->pc = 0x2924A8u;
    // 0x2924a8: 0xa622005a
    ctx->pc = 0x2924a8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 90), (uint16_t)GPR_U32(ctx, 2));
    // 0x2924ac: 0xdfbf0040
    ctx->pc = 0x2924acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2924b0:
    // 0x2924b0: 0xdfb10030
    ctx->pc = 0x2924b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2924b4: 0xdfb00020
    ctx->pc = 0x2924b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2924b8: 0x3e00008
    ctx->pc = 0x2924B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2924BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29240Cu: goto label_29240c;
            case 0x292440u: goto label_292440;
            case 0x292444u: goto label_292444;
            case 0x292450u: goto label_292450;
            case 0x292474u: goto label_292474;
            case 0x2924B0u: goto label_2924b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2924C0u;
}
