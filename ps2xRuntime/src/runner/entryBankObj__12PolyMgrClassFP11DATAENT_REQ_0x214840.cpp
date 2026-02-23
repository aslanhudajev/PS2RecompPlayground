#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryBankObj__12PolyMgrClassFP11DATAENT_REQ
// Address: 0x214840 - 0x21490c
void entryBankObj__12PolyMgrClassFP11DATAENT_REQ_0x214840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryBankObj__12PolyMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x214840u;

label_214840:
    // 0x214840: 0x27bdfff0
    ctx->pc = 0x214840u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_214844:
    // 0x214844: 0x7fbf0000
    ctx->pc = 0x214844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_214848:
    // 0x214848: 0xac850000
    ctx->pc = 0x214848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_21484c:
    // 0x21484c: 0x8c820000
    ctx->pc = 0x21484cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_214850:
    // 0x214850: 0x8c42000c
    ctx->pc = 0x214850u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_214854:
    // 0x214854: 0x2c410009
    ctx->pc = 0x214854u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 2), 9));
label_214858:
    // 0x214858: 0x10200007
label_21485c:
    if (ctx->pc == 0x21485Cu) {
        ctx->pc = 0x21485Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
        ctx->pc = 0x214860u;
        goto label_214860;
    }
    ctx->pc = 0x214858u;
    {
        const bool branch_taken_0x214858 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x21485Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
        if (branch_taken_0x214858) {
            ctx->pc = 0x214878u;
            goto label_214878;
        }
    }
    ctx->pc = 0x214860u;
label_214860:
    // 0x214860: 0x21080
    ctx->pc = 0x214860u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_214864:
    // 0x214864: 0x246306a0
    ctx->pc = 0x214864u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1696));
label_214868:
    // 0x214868: 0x431021
    ctx->pc = 0x214868u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_21486c:
    // 0x21486c: 0x8c420000
    ctx->pc = 0x21486cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_214870:
    // 0x214870: 0x400008
label_214874:
    if (ctx->pc == 0x214874u) {
        ctx->pc = 0x214878u;
        goto label_214878;
    }
    ctx->pc = 0x214870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214840u: goto label_214840;
            case 0x214844u: goto label_214844;
            case 0x214848u: goto label_214848;
            case 0x21484Cu: goto label_21484c;
            case 0x214850u: goto label_214850;
            case 0x214854u: goto label_214854;
            case 0x214858u: goto label_214858;
            case 0x21485Cu: goto label_21485c;
            case 0x214860u: goto label_214860;
            case 0x214864u: goto label_214864;
            case 0x214868u: goto label_214868;
            case 0x21486Cu: goto label_21486c;
            case 0x214870u: goto label_214870;
            case 0x214874u: goto label_214874;
            case 0x214878u: goto label_214878;
            case 0x21487Cu: goto label_21487c;
            case 0x214880u: goto label_214880;
            case 0x214884u: goto label_214884;
            case 0x214888u: goto label_214888;
            case 0x21488Cu: goto label_21488c;
            case 0x214890u: goto label_214890;
            case 0x214894u: goto label_214894;
            case 0x214898u: goto label_214898;
            case 0x21489Cu: goto label_21489c;
            case 0x2148A0u: goto label_2148a0;
            case 0x2148A4u: goto label_2148a4;
            case 0x2148A8u: goto label_2148a8;
            case 0x2148ACu: goto label_2148ac;
            case 0x2148B0u: goto label_2148b0;
            case 0x2148B4u: goto label_2148b4;
            case 0x2148B8u: goto label_2148b8;
            case 0x2148BCu: goto label_2148bc;
            case 0x2148C0u: goto label_2148c0;
            case 0x2148C4u: goto label_2148c4;
            case 0x2148C8u: goto label_2148c8;
            case 0x2148CCu: goto label_2148cc;
            case 0x2148D0u: goto label_2148d0;
            case 0x2148D4u: goto label_2148d4;
            case 0x2148D8u: goto label_2148d8;
            case 0x2148DCu: goto label_2148dc;
            case 0x2148E0u: goto label_2148e0;
            case 0x2148E4u: goto label_2148e4;
            case 0x2148E8u: goto label_2148e8;
            case 0x2148ECu: goto label_2148ec;
            case 0x2148F0u: goto label_2148f0;
            case 0x2148F4u: goto label_2148f4;
            case 0x2148F8u: goto label_2148f8;
            case 0x2148FCu: goto label_2148fc;
            case 0x214900u: goto label_214900;
            case 0x214904u: goto label_214904;
            case 0x214908u: goto label_214908;
            default: break;
        }
        return;
    }
    ctx->pc = 0x214878u;
label_214878:
    // 0x214878: 0xc08505c
label_21487c:
    if (ctx->pc == 0x21487Cu) {
        ctx->pc = 0x214880u;
        goto label_214880;
    }
    ctx->pc = 0x214878u;
    SET_GPR_U32(ctx, 31, 0x214880u);
    ctx->pc = 0x214170u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankObj_STAT_00__12PolyMgrClassFv_0x214170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214880u; }
        else if (ctx->pc != 0x214880u) { ctx->pc = 0x214880u; }
    }
    if (ctx->pc != 0x214880u) { return; }
    ctx->pc = 0x214880u;
label_214880:
    // 0x214880: 0x10000020
label_214884:
    if (ctx->pc == 0x214884u) {
        ctx->pc = 0x214884u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x214888u;
        goto label_214888;
    }
    ctx->pc = 0x214880u;
    {
        const bool branch_taken_0x214880 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x214884u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x214880) {
            ctx->pc = 0x214904u;
            goto label_214904;
        }
    }
    ctx->pc = 0x214888u;
label_214888:
    // 0x214888: 0xc0850a4
label_21488c:
    if (ctx->pc == 0x21488Cu) {
        ctx->pc = 0x214890u;
        goto label_214890;
    }
    ctx->pc = 0x214888u;
    SET_GPR_U32(ctx, 31, 0x214890u);
    ctx->pc = 0x214290u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankObj_STAT_005__12PolyMgrClassFv_0x214290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214890u; }
        else if (ctx->pc != 0x214890u) { ctx->pc = 0x214890u; }
    }
    if (ctx->pc != 0x214890u) { return; }
    ctx->pc = 0x214890u;
label_214890:
    // 0x214890: 0x1000001b
label_214894:
    if (ctx->pc == 0x214894u) {
        ctx->pc = 0x214898u;
        goto label_214898;
    }
    ctx->pc = 0x214890u;
    {
        const bool branch_taken_0x214890 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x214890) {
            ctx->pc = 0x214900u;
            goto label_214900;
        }
    }
    ctx->pc = 0x214898u;
label_214898:
    // 0x214898: 0xc0850b8
label_21489c:
    if (ctx->pc == 0x21489Cu) {
        ctx->pc = 0x2148A0u;
        goto label_2148a0;
    }
    ctx->pc = 0x214898u;
    SET_GPR_U32(ctx, 31, 0x2148A0u);
    ctx->pc = 0x2142E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankObj_STAT_01__12PolyMgrClassFv_0x2142e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2148A0u; }
        else if (ctx->pc != 0x2148A0u) { ctx->pc = 0x2148A0u; }
    }
    if (ctx->pc != 0x2148A0u) { return; }
    ctx->pc = 0x2148A0u;
label_2148a0:
    // 0x2148a0: 0x10000017
label_2148a4:
    if (ctx->pc == 0x2148A4u) {
        ctx->pc = 0x2148A8u;
        goto label_2148a8;
    }
    ctx->pc = 0x2148A0u;
    {
        const bool branch_taken_0x2148a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2148a0) {
            ctx->pc = 0x214900u;
            goto label_214900;
        }
    }
    ctx->pc = 0x2148A8u;
label_2148a8:
    // 0x2148a8: 0xc0850e8
label_2148ac:
    if (ctx->pc == 0x2148ACu) {
        ctx->pc = 0x2148B0u;
        goto label_2148b0;
    }
    ctx->pc = 0x2148A8u;
    SET_GPR_U32(ctx, 31, 0x2148B0u);
    ctx->pc = 0x2143A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankObj_STAT_015__12PolyMgrClassFv_0x2143a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2148B0u; }
        else if (ctx->pc != 0x2148B0u) { ctx->pc = 0x2148B0u; }
    }
    if (ctx->pc != 0x2148B0u) { return; }
    ctx->pc = 0x2148B0u;
label_2148b0:
    // 0x2148b0: 0x10000013
label_2148b4:
    if (ctx->pc == 0x2148B4u) {
        ctx->pc = 0x2148B8u;
        goto label_2148b8;
    }
    ctx->pc = 0x2148B0u;
    {
        const bool branch_taken_0x2148b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2148b0) {
            ctx->pc = 0x214900u;
            goto label_214900;
        }
    }
    ctx->pc = 0x2148B8u;
label_2148b8:
    // 0x2148b8: 0xc085118
label_2148bc:
    if (ctx->pc == 0x2148BCu) {
        ctx->pc = 0x2148C0u;
        goto label_2148c0;
    }
    ctx->pc = 0x2148B8u;
    SET_GPR_U32(ctx, 31, 0x2148C0u);
    ctx->pc = 0x214460u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankObj_STAT_017__12PolyMgrClassFv_0x214460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2148C0u; }
        else if (ctx->pc != 0x2148C0u) { ctx->pc = 0x2148C0u; }
    }
    if (ctx->pc != 0x2148C0u) { return; }
    ctx->pc = 0x2148C0u;
label_2148c0:
    // 0x2148c0: 0x1000000f
label_2148c4:
    if (ctx->pc == 0x2148C4u) {
        ctx->pc = 0x2148C8u;
        goto label_2148c8;
    }
    ctx->pc = 0x2148C0u;
    {
        const bool branch_taken_0x2148c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2148c0) {
            ctx->pc = 0x214900u;
            goto label_214900;
        }
    }
    ctx->pc = 0x2148C8u;
label_2148c8:
    // 0x2148c8: 0xc085134
label_2148cc:
    if (ctx->pc == 0x2148CCu) {
        ctx->pc = 0x2148D0u;
        goto label_2148d0;
    }
    ctx->pc = 0x2148C8u;
    SET_GPR_U32(ctx, 31, 0x2148D0u);
    ctx->pc = 0x2144D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankObj_STAT_02__12PolyMgrClassFv_0x2144d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2148D0u; }
        else if (ctx->pc != 0x2148D0u) { ctx->pc = 0x2148D0u; }
    }
    if (ctx->pc != 0x2148D0u) { return; }
    ctx->pc = 0x2148D0u;
label_2148d0:
    // 0x2148d0: 0x1000000b
label_2148d4:
    if (ctx->pc == 0x2148D4u) {
        ctx->pc = 0x2148D8u;
        goto label_2148d8;
    }
    ctx->pc = 0x2148D0u;
    {
        const bool branch_taken_0x2148d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2148d0) {
            ctx->pc = 0x214900u;
            goto label_214900;
        }
    }
    ctx->pc = 0x2148D8u;
label_2148d8:
    // 0x2148d8: 0xc085180
label_2148dc:
    if (ctx->pc == 0x2148DCu) {
        ctx->pc = 0x2148E0u;
        goto label_2148e0;
    }
    ctx->pc = 0x2148D8u;
    SET_GPR_U32(ctx, 31, 0x2148E0u);
    ctx->pc = 0x214600u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankObj_STAT_03__12PolyMgrClassFv_0x214600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2148E0u; }
        else if (ctx->pc != 0x2148E0u) { ctx->pc = 0x2148E0u; }
    }
    if (ctx->pc != 0x2148E0u) { return; }
    ctx->pc = 0x2148E0u;
label_2148e0:
    // 0x2148e0: 0x10000007
label_2148e4:
    if (ctx->pc == 0x2148E4u) {
        ctx->pc = 0x2148E8u;
        goto label_2148e8;
    }
    ctx->pc = 0x2148E0u;
    {
        const bool branch_taken_0x2148e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2148e0) {
            ctx->pc = 0x214900u;
            goto label_214900;
        }
    }
    ctx->pc = 0x2148E8u;
label_2148e8:
    // 0x2148e8: 0xc0851a0
label_2148ec:
    if (ctx->pc == 0x2148ECu) {
        ctx->pc = 0x2148F0u;
        goto label_2148f0;
    }
    ctx->pc = 0x2148E8u;
    SET_GPR_U32(ctx, 31, 0x2148F0u);
    ctx->pc = 0x214680u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankObj_STAT_04__12PolyMgrClassFv_0x214680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2148F0u; }
        else if (ctx->pc != 0x2148F0u) { ctx->pc = 0x2148F0u; }
    }
    if (ctx->pc != 0x2148F0u) { return; }
    ctx->pc = 0x2148F0u;
label_2148f0:
    // 0x2148f0: 0x10000003
label_2148f4:
    if (ctx->pc == 0x2148F4u) {
        ctx->pc = 0x2148F8u;
        goto label_2148f8;
    }
    ctx->pc = 0x2148F0u;
    {
        const bool branch_taken_0x2148f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2148f0) {
            ctx->pc = 0x214900u;
            goto label_214900;
        }
    }
    ctx->pc = 0x2148F8u;
label_2148f8:
    // 0x2148f8: 0xc0851ac
label_2148fc:
    if (ctx->pc == 0x2148FCu) {
        ctx->pc = 0x214900u;
        goto label_214900;
    }
    ctx->pc = 0x2148F8u;
    SET_GPR_U32(ctx, 31, 0x214900u);
    ctx->pc = 0x2146B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankObj_STAT_05__12PolyMgrClassFv_0x2146b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214900u; }
        else if (ctx->pc != 0x214900u) { ctx->pc = 0x214900u; }
    }
    if (ctx->pc != 0x214900u) { return; }
    ctx->pc = 0x214900u;
label_214900:
    // 0x214900: 0x7bbf0000
    ctx->pc = 0x214900u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_214904:
    // 0x214904: 0x3e00008
label_214908:
    if (ctx->pc == 0x214908u) {
        ctx->pc = 0x214908u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x21490Cu;
        goto label_fallthrough_0x214904;
    }
    ctx->pc = 0x214904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214908u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214840u: goto label_214840;
            case 0x214844u: goto label_214844;
            case 0x214848u: goto label_214848;
            case 0x21484Cu: goto label_21484c;
            case 0x214850u: goto label_214850;
            case 0x214854u: goto label_214854;
            case 0x214858u: goto label_214858;
            case 0x21485Cu: goto label_21485c;
            case 0x214860u: goto label_214860;
            case 0x214864u: goto label_214864;
            case 0x214868u: goto label_214868;
            case 0x21486Cu: goto label_21486c;
            case 0x214870u: goto label_214870;
            case 0x214874u: goto label_214874;
            case 0x214878u: goto label_214878;
            case 0x21487Cu: goto label_21487c;
            case 0x214880u: goto label_214880;
            case 0x214884u: goto label_214884;
            case 0x214888u: goto label_214888;
            case 0x21488Cu: goto label_21488c;
            case 0x214890u: goto label_214890;
            case 0x214894u: goto label_214894;
            case 0x214898u: goto label_214898;
            case 0x21489Cu: goto label_21489c;
            case 0x2148A0u: goto label_2148a0;
            case 0x2148A4u: goto label_2148a4;
            case 0x2148A8u: goto label_2148a8;
            case 0x2148ACu: goto label_2148ac;
            case 0x2148B0u: goto label_2148b0;
            case 0x2148B4u: goto label_2148b4;
            case 0x2148B8u: goto label_2148b8;
            case 0x2148BCu: goto label_2148bc;
            case 0x2148C0u: goto label_2148c0;
            case 0x2148C4u: goto label_2148c4;
            case 0x2148C8u: goto label_2148c8;
            case 0x2148CCu: goto label_2148cc;
            case 0x2148D0u: goto label_2148d0;
            case 0x2148D4u: goto label_2148d4;
            case 0x2148D8u: goto label_2148d8;
            case 0x2148DCu: goto label_2148dc;
            case 0x2148E0u: goto label_2148e0;
            case 0x2148E4u: goto label_2148e4;
            case 0x2148E8u: goto label_2148e8;
            case 0x2148ECu: goto label_2148ec;
            case 0x2148F0u: goto label_2148f0;
            case 0x2148F4u: goto label_2148f4;
            case 0x2148F8u: goto label_2148f8;
            case 0x2148FCu: goto label_2148fc;
            case 0x214900u: goto label_214900;
            case 0x214904u: goto label_214904;
            case 0x214908u: goto label_214908;
            default: break;
        }
        return;
    }
label_fallthrough_0x214904:
    ctx->pc = 0x21490Cu;
}
