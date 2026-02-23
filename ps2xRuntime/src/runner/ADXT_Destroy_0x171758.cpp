#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_Destroy
// Address: 0x171758 - 0x171914
void ADXT_Destroy_0x171758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_Destroy");


    ctx->pc = 0x171758u;

label_171758:
    // 0x171758: 0x27bdff90
    ctx->pc = 0x171758u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
label_17175c:
    // 0x17175c: 0xffb10010
    ctx->pc = 0x17175cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_171760:
    // 0x171760: 0xffbf0060
    ctx->pc = 0x171760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_171764:
    // 0x171764: 0x80882d
    ctx->pc = 0x171764u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_171768:
    // 0x171768: 0xffb50050
    ctx->pc = 0x171768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_17176c:
    // 0x17176c: 0xffb40040
    ctx->pc = 0x17176cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_171770:
    // 0x171770: 0xffb30030
    ctx->pc = 0x171770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_171774:
    // 0x171774: 0xffb20020
    ctx->pc = 0x171774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_171778:
    // 0x171778: 0x1220005d
label_17177c:
    if (ctx->pc == 0x17177Cu) {
        ctx->pc = 0x17177Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x171780u;
        goto label_171780;
    }
    ctx->pc = 0x171778u;
    {
        const bool branch_taken_0x171778 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x17177Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x171778) {
            ctx->pc = 0x1718F0u;
            goto label_1718f0;
        }
    }
    ctx->pc = 0x171780u;
label_171780:
    // 0x171780: 0xc05caf8
label_171784:
    if (ctx->pc == 0x171784u) {
        ctx->pc = 0x171788u;
        goto label_171788;
    }
    ctx->pc = 0x171780u;
    SET_GPR_U32(ctx, 31, 0x171788u);
    ctx->pc = 0x172BE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_DetachAhx_0x172be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171788u; }
        else if (ctx->pc != 0x171788u) { ctx->pc = 0x171788u; }
    }
    if (ctx->pc != 0x171788u) { return; }
    ctx->pc = 0x171788u;
label_171788:
    // 0x171788: 0x82230000
    ctx->pc = 0x171788u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_17178c:
    // 0x17178c: 0x24020001
    ctx->pc = 0x17178cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_171790:
    // 0x171790: 0x54620004
label_171794:
    if (ctx->pc == 0x171794u) {
        ctx->pc = 0x171794u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x171798u;
        goto label_171798;
    }
    ctx->pc = 0x171790u;
    {
        const bool branch_taken_0x171790 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x171790) {
            ctx->pc = 0x171794u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->pc = 0x1717A4u;
            goto label_1717a4;
        }
    }
    ctx->pc = 0x171798u;
label_171798:
    // 0x171798: 0xc05c73a
label_17179c:
    if (ctx->pc == 0x17179Cu) {
        ctx->pc = 0x17179Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1717A0u;
        goto label_1717a0;
    }
    ctx->pc = 0x171798u;
    SET_GPR_U32(ctx, 31, 0x1717A0u);
    ctx->pc = 0x17179Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_Stop_0x171ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1717A0u; }
        else if (ctx->pc != 0x1717A0u) { ctx->pc = 0x1717A0u; }
    }
    if (ctx->pc != 0x1717A0u) { return; }
    ctx->pc = 0x1717A0u;
label_1717a0:
    // 0x1717a0: 0x8e24000c
    ctx->pc = 0x1717a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1717a4:
    // 0x1717a4: 0x50800004
label_1717a8:
    if (ctx->pc == 0x1717A8u) {
        ctx->pc = 0x1717A8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x1717ACu;
        goto label_1717ac;
    }
    ctx->pc = 0x1717A4u;
    {
        const bool branch_taken_0x1717a4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1717a4) {
            ctx->pc = 0x1717A8u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->pc = 0x1717B8u;
            goto label_1717b8;
        }
    }
    ctx->pc = 0x1717ACu;
label_1717ac:
    // 0x1717ac: 0xc05b67e
label_1717b0:
    if (ctx->pc == 0x1717B0u) {
        ctx->pc = 0x1717B4u;
        goto label_1717b4;
    }
    ctx->pc = 0x1717ACu;
    SET_GPR_U32(ctx, 31, 0x1717B4u);
    ctx->pc = 0x16D9F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXRNA_Destroy_0x16d9f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1717B4u; }
        else if (ctx->pc != 0x1717B4u) { ctx->pc = 0x1717B4u; }
    }
    if (ctx->pc != 0x1717B4u) { return; }
    ctx->pc = 0x1717B4u;
label_1717b4:
    // 0x1717b4: 0x8e240004
    ctx->pc = 0x1717b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1717b8:
    // 0x1717b8: 0x50800004
label_1717bc:
    if (ctx->pc == 0x1717BCu) {
        ctx->pc = 0x1717BCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x1717C0u;
        goto label_1717c0;
    }
    ctx->pc = 0x1717B8u;
    {
        const bool branch_taken_0x1717b8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1717b8) {
            ctx->pc = 0x1717BCu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->pc = 0x1717CCu;
            goto label_1717cc;
        }
    }
    ctx->pc = 0x1717C0u;
label_1717c0:
    // 0x1717c0: 0xc05b77e
label_1717c4:
    if (ctx->pc == 0x1717C4u) {
        ctx->pc = 0x1717C8u;
        goto label_1717c8;
    }
    ctx->pc = 0x1717C0u;
    SET_GPR_U32(ctx, 31, 0x1717C8u);
    ctx->pc = 0x16DDF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_Destroy_0x16ddf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1717C8u; }
        else if (ctx->pc != 0x1717C8u) { ctx->pc = 0x1717C8u; }
    }
    if (ctx->pc != 0x1717C8u) { return; }
    ctx->pc = 0x1717C8u;
label_1717c8:
    // 0x1717c8: 0x8e240008
    ctx->pc = 0x1717c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1717cc:
    // 0x1717cc: 0x10800003
label_1717d0:
    if (ctx->pc == 0x1717D0u) {
        ctx->pc = 0x1717D4u;
        goto label_1717d4;
    }
    ctx->pc = 0x1717CCu;
    {
        const bool branch_taken_0x1717cc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1717cc) {
            ctx->pc = 0x1717DCu;
            goto label_1717dc;
        }
    }
    ctx->pc = 0x1717D4u;
label_1717d4:
    // 0x1717d4: 0xc05c2ca
label_1717d8:
    if (ctx->pc == 0x1717D8u) {
        ctx->pc = 0x1717DCu;
        goto label_1717dc;
    }
    ctx->pc = 0x1717D4u;
    SET_GPR_U32(ctx, 31, 0x1717DCu);
    ctx->pc = 0x170B28u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Close_0x170b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1717DCu; }
        else if (ctx->pc != 0x1717DCu) { ctx->pc = 0x1717DCu; }
    }
    if (ctx->pc != 0x1717DCu) { return; }
    ctx->pc = 0x1717DCu;
label_1717dc:
    // 0x1717dc: 0xc05a4e4
label_1717e0:
    if (ctx->pc == 0x1717E0u) {
        ctx->pc = 0x1717E4u;
        goto label_1717e4;
    }
    ctx->pc = 0x1717DCu;
    SET_GPR_U32(ctx, 31, 0x1717E4u);
    ctx->pc = 0x169390u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Lock_0x169390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1717E4u; }
        else if (ctx->pc != 0x1717E4u) { ctx->pc = 0x1717E4u; }
    }
    if (ctx->pc != 0x1717E4u) { return; }
    ctx->pc = 0x1717E4u;
label_1717e4:
    // 0x1717e4: 0x8e240094
    ctx->pc = 0x1717e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_1717e8:
    // 0x1717e8: 0x50800004
label_1717ec:
    if (ctx->pc == 0x1717ECu) {
        ctx->pc = 0x1717ECu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->pc = 0x1717F0u;
        goto label_1717f0;
    }
    ctx->pc = 0x1717E8u;
    {
        const bool branch_taken_0x1717e8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1717e8) {
            ctx->pc = 0x1717ECu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->pc = 0x1717FCu;
            goto label_1717fc;
        }
    }
    ctx->pc = 0x1717F0u;
label_1717f0:
    // 0x1717f0: 0xc05e7dc
label_1717f4:
    if (ctx->pc == 0x1717F4u) {
        ctx->pc = 0x1717F8u;
        goto label_1717f8;
    }
    ctx->pc = 0x1717F0u;
    SET_GPR_U32(ctx, 31, 0x1717F8u);
    ctx->pc = 0x179F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_Destroy_0x179f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1717F8u; }
        else if (ctx->pc != 0x1717F8u) { ctx->pc = 0x1717F8u; }
    }
    if (ctx->pc != 0x1717F8u) { return; }
    ctx->pc = 0x1717F8u;
label_1717f8:
    // 0x1717f8: 0x8e240010
    ctx->pc = 0x1717f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1717fc:
    // 0x1717fc: 0x50800006
label_171800:
    if (ctx->pc == 0x171800u) {
        ctx->pc = 0x171800u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->pc = 0x171804u;
        goto label_171804;
    }
    ctx->pc = 0x1717FCu;
    {
        const bool branch_taken_0x1717fc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1717fc) {
            ctx->pc = 0x171800u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->pc = 0x171818u;
            goto label_171818;
        }
    }
    ctx->pc = 0x171804u;
label_171804:
    // 0x171804: 0x8c830000
    ctx->pc = 0x171804u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_171808:
    // 0x171808: 0x8c62000c
    ctx->pc = 0x171808u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_17180c:
    // 0x17180c: 0x40f809
label_171810:
    if (ctx->pc == 0x171810u) {
        ctx->pc = 0x171814u;
        goto label_171814;
    }
    ctx->pc = 0x17180Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x171814u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171758u: goto label_171758;
            case 0x17175Cu: goto label_17175c;
            case 0x171760u: goto label_171760;
            case 0x171764u: goto label_171764;
            case 0x171768u: goto label_171768;
            case 0x17176Cu: goto label_17176c;
            case 0x171770u: goto label_171770;
            case 0x171774u: goto label_171774;
            case 0x171778u: goto label_171778;
            case 0x17177Cu: goto label_17177c;
            case 0x171780u: goto label_171780;
            case 0x171784u: goto label_171784;
            case 0x171788u: goto label_171788;
            case 0x17178Cu: goto label_17178c;
            case 0x171790u: goto label_171790;
            case 0x171794u: goto label_171794;
            case 0x171798u: goto label_171798;
            case 0x17179Cu: goto label_17179c;
            case 0x1717A0u: goto label_1717a0;
            case 0x1717A4u: goto label_1717a4;
            case 0x1717A8u: goto label_1717a8;
            case 0x1717ACu: goto label_1717ac;
            case 0x1717B0u: goto label_1717b0;
            case 0x1717B4u: goto label_1717b4;
            case 0x1717B8u: goto label_1717b8;
            case 0x1717BCu: goto label_1717bc;
            case 0x1717C0u: goto label_1717c0;
            case 0x1717C4u: goto label_1717c4;
            case 0x1717C8u: goto label_1717c8;
            case 0x1717CCu: goto label_1717cc;
            case 0x1717D0u: goto label_1717d0;
            case 0x1717D4u: goto label_1717d4;
            case 0x1717D8u: goto label_1717d8;
            case 0x1717DCu: goto label_1717dc;
            case 0x1717E0u: goto label_1717e0;
            case 0x1717E4u: goto label_1717e4;
            case 0x1717E8u: goto label_1717e8;
            case 0x1717ECu: goto label_1717ec;
            case 0x1717F0u: goto label_1717f0;
            case 0x1717F4u: goto label_1717f4;
            case 0x1717F8u: goto label_1717f8;
            case 0x1717FCu: goto label_1717fc;
            case 0x171800u: goto label_171800;
            case 0x171804u: goto label_171804;
            case 0x171808u: goto label_171808;
            case 0x17180Cu: goto label_17180c;
            case 0x171810u: goto label_171810;
            case 0x171814u: goto label_171814;
            case 0x171818u: goto label_171818;
            case 0x17181Cu: goto label_17181c;
            case 0x171820u: goto label_171820;
            case 0x171824u: goto label_171824;
            case 0x171828u: goto label_171828;
            case 0x17182Cu: goto label_17182c;
            case 0x171830u: goto label_171830;
            case 0x171834u: goto label_171834;
            case 0x171838u: goto label_171838;
            case 0x17183Cu: goto label_17183c;
            case 0x171840u: goto label_171840;
            case 0x171844u: goto label_171844;
            case 0x171848u: goto label_171848;
            case 0x17184Cu: goto label_17184c;
            case 0x171850u: goto label_171850;
            case 0x171854u: goto label_171854;
            case 0x171858u: goto label_171858;
            case 0x17185Cu: goto label_17185c;
            case 0x171860u: goto label_171860;
            case 0x171864u: goto label_171864;
            case 0x171868u: goto label_171868;
            case 0x17186Cu: goto label_17186c;
            case 0x171870u: goto label_171870;
            case 0x171874u: goto label_171874;
            case 0x171878u: goto label_171878;
            case 0x17187Cu: goto label_17187c;
            case 0x171880u: goto label_171880;
            case 0x171884u: goto label_171884;
            case 0x171888u: goto label_171888;
            case 0x17188Cu: goto label_17188c;
            case 0x171890u: goto label_171890;
            case 0x171894u: goto label_171894;
            case 0x171898u: goto label_171898;
            case 0x17189Cu: goto label_17189c;
            case 0x1718A0u: goto label_1718a0;
            case 0x1718A4u: goto label_1718a4;
            case 0x1718A8u: goto label_1718a8;
            case 0x1718ACu: goto label_1718ac;
            case 0x1718B0u: goto label_1718b0;
            case 0x1718B4u: goto label_1718b4;
            case 0x1718B8u: goto label_1718b8;
            case 0x1718BCu: goto label_1718bc;
            case 0x1718C0u: goto label_1718c0;
            case 0x1718C4u: goto label_1718c4;
            case 0x1718C8u: goto label_1718c8;
            case 0x1718CCu: goto label_1718cc;
            case 0x1718D0u: goto label_1718d0;
            case 0x1718D4u: goto label_1718d4;
            case 0x1718D8u: goto label_1718d8;
            case 0x1718DCu: goto label_1718dc;
            case 0x1718E0u: goto label_1718e0;
            case 0x1718E4u: goto label_1718e4;
            case 0x1718E8u: goto label_1718e8;
            case 0x1718ECu: goto label_1718ec;
            case 0x1718F0u: goto label_1718f0;
            case 0x1718F4u: goto label_1718f4;
            case 0x1718F8u: goto label_1718f8;
            case 0x1718FCu: goto label_1718fc;
            case 0x171900u: goto label_171900;
            case 0x171904u: goto label_171904;
            case 0x171908u: goto label_171908;
            case 0x17190Cu: goto label_17190c;
            case 0x171910u: goto label_171910;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x171814u; }
            if (ctx->pc != 0x171814u) { return; }
        }
    }
    ctx->pc = 0x171814u;
label_171814:
    // 0x171814: 0x82220003
    ctx->pc = 0x171814u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_171818:
    // 0x171818: 0x18400022
label_17181c:
    if (ctx->pc == 0x17181Cu) {
        ctx->pc = 0x17181Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171820u;
        goto label_171820;
    }
    ctx->pc = 0x171818u;
    {
        const bool branch_taken_0x171818 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17181Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x171818) {
            ctx->pc = 0x1718A4u;
            goto label_1718a4;
        }
    }
    ctx->pc = 0x171820u;
label_171820:
    // 0x171820: 0x26350018
    ctx->pc = 0x171820u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 17), 24));
label_171824:
    // 0x171824: 0x26340078
    ctx->pc = 0x171824u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 17), 120));
label_171828:
    // 0x171828: 0x26330080
    ctx->pc = 0x171828u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 17), 128));
label_17182c:
    // 0x17182c: 0x128080
    ctx->pc = 0x17182cu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 18), 2));
label_171830:
    // 0x171830: 0x2b01021
    ctx->pc = 0x171830u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_171834:
    // 0x171834: 0x8c440000
    ctx->pc = 0x171834u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_171838:
    // 0x171838: 0x10800006
label_17183c:
    if (ctx->pc == 0x17183Cu) {
        ctx->pc = 0x17183Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->pc = 0x171840u;
        goto label_171840;
    }
    ctx->pc = 0x171838u;
    {
        const bool branch_taken_0x171838 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x17183Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        if (branch_taken_0x171838) {
            ctx->pc = 0x171854u;
            goto label_171854;
        }
    }
    ctx->pc = 0x171840u;
label_171840:
    // 0x171840: 0x8c830000
    ctx->pc = 0x171840u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_171844:
    // 0x171844: 0x8c62000c
    ctx->pc = 0x171844u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_171848:
    // 0x171848: 0x40f809
label_17184c:
    if (ctx->pc == 0x17184Cu) {
        ctx->pc = 0x171850u;
        goto label_171850;
    }
    ctx->pc = 0x171848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x171850u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171758u: goto label_171758;
            case 0x17175Cu: goto label_17175c;
            case 0x171760u: goto label_171760;
            case 0x171764u: goto label_171764;
            case 0x171768u: goto label_171768;
            case 0x17176Cu: goto label_17176c;
            case 0x171770u: goto label_171770;
            case 0x171774u: goto label_171774;
            case 0x171778u: goto label_171778;
            case 0x17177Cu: goto label_17177c;
            case 0x171780u: goto label_171780;
            case 0x171784u: goto label_171784;
            case 0x171788u: goto label_171788;
            case 0x17178Cu: goto label_17178c;
            case 0x171790u: goto label_171790;
            case 0x171794u: goto label_171794;
            case 0x171798u: goto label_171798;
            case 0x17179Cu: goto label_17179c;
            case 0x1717A0u: goto label_1717a0;
            case 0x1717A4u: goto label_1717a4;
            case 0x1717A8u: goto label_1717a8;
            case 0x1717ACu: goto label_1717ac;
            case 0x1717B0u: goto label_1717b0;
            case 0x1717B4u: goto label_1717b4;
            case 0x1717B8u: goto label_1717b8;
            case 0x1717BCu: goto label_1717bc;
            case 0x1717C0u: goto label_1717c0;
            case 0x1717C4u: goto label_1717c4;
            case 0x1717C8u: goto label_1717c8;
            case 0x1717CCu: goto label_1717cc;
            case 0x1717D0u: goto label_1717d0;
            case 0x1717D4u: goto label_1717d4;
            case 0x1717D8u: goto label_1717d8;
            case 0x1717DCu: goto label_1717dc;
            case 0x1717E0u: goto label_1717e0;
            case 0x1717E4u: goto label_1717e4;
            case 0x1717E8u: goto label_1717e8;
            case 0x1717ECu: goto label_1717ec;
            case 0x1717F0u: goto label_1717f0;
            case 0x1717F4u: goto label_1717f4;
            case 0x1717F8u: goto label_1717f8;
            case 0x1717FCu: goto label_1717fc;
            case 0x171800u: goto label_171800;
            case 0x171804u: goto label_171804;
            case 0x171808u: goto label_171808;
            case 0x17180Cu: goto label_17180c;
            case 0x171810u: goto label_171810;
            case 0x171814u: goto label_171814;
            case 0x171818u: goto label_171818;
            case 0x17181Cu: goto label_17181c;
            case 0x171820u: goto label_171820;
            case 0x171824u: goto label_171824;
            case 0x171828u: goto label_171828;
            case 0x17182Cu: goto label_17182c;
            case 0x171830u: goto label_171830;
            case 0x171834u: goto label_171834;
            case 0x171838u: goto label_171838;
            case 0x17183Cu: goto label_17183c;
            case 0x171840u: goto label_171840;
            case 0x171844u: goto label_171844;
            case 0x171848u: goto label_171848;
            case 0x17184Cu: goto label_17184c;
            case 0x171850u: goto label_171850;
            case 0x171854u: goto label_171854;
            case 0x171858u: goto label_171858;
            case 0x17185Cu: goto label_17185c;
            case 0x171860u: goto label_171860;
            case 0x171864u: goto label_171864;
            case 0x171868u: goto label_171868;
            case 0x17186Cu: goto label_17186c;
            case 0x171870u: goto label_171870;
            case 0x171874u: goto label_171874;
            case 0x171878u: goto label_171878;
            case 0x17187Cu: goto label_17187c;
            case 0x171880u: goto label_171880;
            case 0x171884u: goto label_171884;
            case 0x171888u: goto label_171888;
            case 0x17188Cu: goto label_17188c;
            case 0x171890u: goto label_171890;
            case 0x171894u: goto label_171894;
            case 0x171898u: goto label_171898;
            case 0x17189Cu: goto label_17189c;
            case 0x1718A0u: goto label_1718a0;
            case 0x1718A4u: goto label_1718a4;
            case 0x1718A8u: goto label_1718a8;
            case 0x1718ACu: goto label_1718ac;
            case 0x1718B0u: goto label_1718b0;
            case 0x1718B4u: goto label_1718b4;
            case 0x1718B8u: goto label_1718b8;
            case 0x1718BCu: goto label_1718bc;
            case 0x1718C0u: goto label_1718c0;
            case 0x1718C4u: goto label_1718c4;
            case 0x1718C8u: goto label_1718c8;
            case 0x1718CCu: goto label_1718cc;
            case 0x1718D0u: goto label_1718d0;
            case 0x1718D4u: goto label_1718d4;
            case 0x1718D8u: goto label_1718d8;
            case 0x1718DCu: goto label_1718dc;
            case 0x1718E0u: goto label_1718e0;
            case 0x1718E4u: goto label_1718e4;
            case 0x1718E8u: goto label_1718e8;
            case 0x1718ECu: goto label_1718ec;
            case 0x1718F0u: goto label_1718f0;
            case 0x1718F4u: goto label_1718f4;
            case 0x1718F8u: goto label_1718f8;
            case 0x1718FCu: goto label_1718fc;
            case 0x171900u: goto label_171900;
            case 0x171904u: goto label_171904;
            case 0x171908u: goto label_171908;
            case 0x17190Cu: goto label_17190c;
            case 0x171910u: goto label_171910;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x171850u; }
            if (ctx->pc != 0x171850u) { return; }
        }
    }
    ctx->pc = 0x171850u;
label_171850:
    // 0x171850: 0x2901021
    ctx->pc = 0x171850u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_171854:
    // 0x171854: 0x8c440000
    ctx->pc = 0x171854u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_171858:
    // 0x171858: 0x10800006
label_17185c:
    if (ctx->pc == 0x17185Cu) {
        ctx->pc = 0x17185Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->pc = 0x171860u;
        goto label_171860;
    }
    ctx->pc = 0x171858u;
    {
        const bool branch_taken_0x171858 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x17185Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        if (branch_taken_0x171858) {
            ctx->pc = 0x171874u;
            goto label_171874;
        }
    }
    ctx->pc = 0x171860u;
label_171860:
    // 0x171860: 0x8c830000
    ctx->pc = 0x171860u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_171864:
    // 0x171864: 0x8c62000c
    ctx->pc = 0x171864u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_171868:
    // 0x171868: 0x40f809
label_17186c:
    if (ctx->pc == 0x17186Cu) {
        ctx->pc = 0x171870u;
        goto label_171870;
    }
    ctx->pc = 0x171868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x171870u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171758u: goto label_171758;
            case 0x17175Cu: goto label_17175c;
            case 0x171760u: goto label_171760;
            case 0x171764u: goto label_171764;
            case 0x171768u: goto label_171768;
            case 0x17176Cu: goto label_17176c;
            case 0x171770u: goto label_171770;
            case 0x171774u: goto label_171774;
            case 0x171778u: goto label_171778;
            case 0x17177Cu: goto label_17177c;
            case 0x171780u: goto label_171780;
            case 0x171784u: goto label_171784;
            case 0x171788u: goto label_171788;
            case 0x17178Cu: goto label_17178c;
            case 0x171790u: goto label_171790;
            case 0x171794u: goto label_171794;
            case 0x171798u: goto label_171798;
            case 0x17179Cu: goto label_17179c;
            case 0x1717A0u: goto label_1717a0;
            case 0x1717A4u: goto label_1717a4;
            case 0x1717A8u: goto label_1717a8;
            case 0x1717ACu: goto label_1717ac;
            case 0x1717B0u: goto label_1717b0;
            case 0x1717B4u: goto label_1717b4;
            case 0x1717B8u: goto label_1717b8;
            case 0x1717BCu: goto label_1717bc;
            case 0x1717C0u: goto label_1717c0;
            case 0x1717C4u: goto label_1717c4;
            case 0x1717C8u: goto label_1717c8;
            case 0x1717CCu: goto label_1717cc;
            case 0x1717D0u: goto label_1717d0;
            case 0x1717D4u: goto label_1717d4;
            case 0x1717D8u: goto label_1717d8;
            case 0x1717DCu: goto label_1717dc;
            case 0x1717E0u: goto label_1717e0;
            case 0x1717E4u: goto label_1717e4;
            case 0x1717E8u: goto label_1717e8;
            case 0x1717ECu: goto label_1717ec;
            case 0x1717F0u: goto label_1717f0;
            case 0x1717F4u: goto label_1717f4;
            case 0x1717F8u: goto label_1717f8;
            case 0x1717FCu: goto label_1717fc;
            case 0x171800u: goto label_171800;
            case 0x171804u: goto label_171804;
            case 0x171808u: goto label_171808;
            case 0x17180Cu: goto label_17180c;
            case 0x171810u: goto label_171810;
            case 0x171814u: goto label_171814;
            case 0x171818u: goto label_171818;
            case 0x17181Cu: goto label_17181c;
            case 0x171820u: goto label_171820;
            case 0x171824u: goto label_171824;
            case 0x171828u: goto label_171828;
            case 0x17182Cu: goto label_17182c;
            case 0x171830u: goto label_171830;
            case 0x171834u: goto label_171834;
            case 0x171838u: goto label_171838;
            case 0x17183Cu: goto label_17183c;
            case 0x171840u: goto label_171840;
            case 0x171844u: goto label_171844;
            case 0x171848u: goto label_171848;
            case 0x17184Cu: goto label_17184c;
            case 0x171850u: goto label_171850;
            case 0x171854u: goto label_171854;
            case 0x171858u: goto label_171858;
            case 0x17185Cu: goto label_17185c;
            case 0x171860u: goto label_171860;
            case 0x171864u: goto label_171864;
            case 0x171868u: goto label_171868;
            case 0x17186Cu: goto label_17186c;
            case 0x171870u: goto label_171870;
            case 0x171874u: goto label_171874;
            case 0x171878u: goto label_171878;
            case 0x17187Cu: goto label_17187c;
            case 0x171880u: goto label_171880;
            case 0x171884u: goto label_171884;
            case 0x171888u: goto label_171888;
            case 0x17188Cu: goto label_17188c;
            case 0x171890u: goto label_171890;
            case 0x171894u: goto label_171894;
            case 0x171898u: goto label_171898;
            case 0x17189Cu: goto label_17189c;
            case 0x1718A0u: goto label_1718a0;
            case 0x1718A4u: goto label_1718a4;
            case 0x1718A8u: goto label_1718a8;
            case 0x1718ACu: goto label_1718ac;
            case 0x1718B0u: goto label_1718b0;
            case 0x1718B4u: goto label_1718b4;
            case 0x1718B8u: goto label_1718b8;
            case 0x1718BCu: goto label_1718bc;
            case 0x1718C0u: goto label_1718c0;
            case 0x1718C4u: goto label_1718c4;
            case 0x1718C8u: goto label_1718c8;
            case 0x1718CCu: goto label_1718cc;
            case 0x1718D0u: goto label_1718d0;
            case 0x1718D4u: goto label_1718d4;
            case 0x1718D8u: goto label_1718d8;
            case 0x1718DCu: goto label_1718dc;
            case 0x1718E0u: goto label_1718e0;
            case 0x1718E4u: goto label_1718e4;
            case 0x1718E8u: goto label_1718e8;
            case 0x1718ECu: goto label_1718ec;
            case 0x1718F0u: goto label_1718f0;
            case 0x1718F4u: goto label_1718f4;
            case 0x1718F8u: goto label_1718f8;
            case 0x1718FCu: goto label_1718fc;
            case 0x171900u: goto label_171900;
            case 0x171904u: goto label_171904;
            case 0x171908u: goto label_171908;
            case 0x17190Cu: goto label_17190c;
            case 0x171910u: goto label_171910;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x171870u; }
            if (ctx->pc != 0x171870u) { return; }
        }
    }
    ctx->pc = 0x171870u;
label_171870:
    // 0x171870: 0x2701021
    ctx->pc = 0x171870u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_171874:
    // 0x171874: 0x8c440000
    ctx->pc = 0x171874u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_171878:
    // 0x171878: 0x50800006
label_17187c:
    if (ctx->pc == 0x17187Cu) {
        ctx->pc = 0x17187Cu;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->pc = 0x171880u;
        goto label_171880;
    }
    ctx->pc = 0x171878u;
    {
        const bool branch_taken_0x171878 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x171878) {
            ctx->pc = 0x17187Cu;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->pc = 0x171894u;
            goto label_171894;
        }
    }
    ctx->pc = 0x171880u;
label_171880:
    // 0x171880: 0x8c830000
    ctx->pc = 0x171880u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_171884:
    // 0x171884: 0x8c62000c
    ctx->pc = 0x171884u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_171888:
    // 0x171888: 0x40f809
label_17188c:
    if (ctx->pc == 0x17188Cu) {
        ctx->pc = 0x171890u;
        goto label_171890;
    }
    ctx->pc = 0x171888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x171890u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171758u: goto label_171758;
            case 0x17175Cu: goto label_17175c;
            case 0x171760u: goto label_171760;
            case 0x171764u: goto label_171764;
            case 0x171768u: goto label_171768;
            case 0x17176Cu: goto label_17176c;
            case 0x171770u: goto label_171770;
            case 0x171774u: goto label_171774;
            case 0x171778u: goto label_171778;
            case 0x17177Cu: goto label_17177c;
            case 0x171780u: goto label_171780;
            case 0x171784u: goto label_171784;
            case 0x171788u: goto label_171788;
            case 0x17178Cu: goto label_17178c;
            case 0x171790u: goto label_171790;
            case 0x171794u: goto label_171794;
            case 0x171798u: goto label_171798;
            case 0x17179Cu: goto label_17179c;
            case 0x1717A0u: goto label_1717a0;
            case 0x1717A4u: goto label_1717a4;
            case 0x1717A8u: goto label_1717a8;
            case 0x1717ACu: goto label_1717ac;
            case 0x1717B0u: goto label_1717b0;
            case 0x1717B4u: goto label_1717b4;
            case 0x1717B8u: goto label_1717b8;
            case 0x1717BCu: goto label_1717bc;
            case 0x1717C0u: goto label_1717c0;
            case 0x1717C4u: goto label_1717c4;
            case 0x1717C8u: goto label_1717c8;
            case 0x1717CCu: goto label_1717cc;
            case 0x1717D0u: goto label_1717d0;
            case 0x1717D4u: goto label_1717d4;
            case 0x1717D8u: goto label_1717d8;
            case 0x1717DCu: goto label_1717dc;
            case 0x1717E0u: goto label_1717e0;
            case 0x1717E4u: goto label_1717e4;
            case 0x1717E8u: goto label_1717e8;
            case 0x1717ECu: goto label_1717ec;
            case 0x1717F0u: goto label_1717f0;
            case 0x1717F4u: goto label_1717f4;
            case 0x1717F8u: goto label_1717f8;
            case 0x1717FCu: goto label_1717fc;
            case 0x171800u: goto label_171800;
            case 0x171804u: goto label_171804;
            case 0x171808u: goto label_171808;
            case 0x17180Cu: goto label_17180c;
            case 0x171810u: goto label_171810;
            case 0x171814u: goto label_171814;
            case 0x171818u: goto label_171818;
            case 0x17181Cu: goto label_17181c;
            case 0x171820u: goto label_171820;
            case 0x171824u: goto label_171824;
            case 0x171828u: goto label_171828;
            case 0x17182Cu: goto label_17182c;
            case 0x171830u: goto label_171830;
            case 0x171834u: goto label_171834;
            case 0x171838u: goto label_171838;
            case 0x17183Cu: goto label_17183c;
            case 0x171840u: goto label_171840;
            case 0x171844u: goto label_171844;
            case 0x171848u: goto label_171848;
            case 0x17184Cu: goto label_17184c;
            case 0x171850u: goto label_171850;
            case 0x171854u: goto label_171854;
            case 0x171858u: goto label_171858;
            case 0x17185Cu: goto label_17185c;
            case 0x171860u: goto label_171860;
            case 0x171864u: goto label_171864;
            case 0x171868u: goto label_171868;
            case 0x17186Cu: goto label_17186c;
            case 0x171870u: goto label_171870;
            case 0x171874u: goto label_171874;
            case 0x171878u: goto label_171878;
            case 0x17187Cu: goto label_17187c;
            case 0x171880u: goto label_171880;
            case 0x171884u: goto label_171884;
            case 0x171888u: goto label_171888;
            case 0x17188Cu: goto label_17188c;
            case 0x171890u: goto label_171890;
            case 0x171894u: goto label_171894;
            case 0x171898u: goto label_171898;
            case 0x17189Cu: goto label_17189c;
            case 0x1718A0u: goto label_1718a0;
            case 0x1718A4u: goto label_1718a4;
            case 0x1718A8u: goto label_1718a8;
            case 0x1718ACu: goto label_1718ac;
            case 0x1718B0u: goto label_1718b0;
            case 0x1718B4u: goto label_1718b4;
            case 0x1718B8u: goto label_1718b8;
            case 0x1718BCu: goto label_1718bc;
            case 0x1718C0u: goto label_1718c0;
            case 0x1718C4u: goto label_1718c4;
            case 0x1718C8u: goto label_1718c8;
            case 0x1718CCu: goto label_1718cc;
            case 0x1718D0u: goto label_1718d0;
            case 0x1718D4u: goto label_1718d4;
            case 0x1718D8u: goto label_1718d8;
            case 0x1718DCu: goto label_1718dc;
            case 0x1718E0u: goto label_1718e0;
            case 0x1718E4u: goto label_1718e4;
            case 0x1718E8u: goto label_1718e8;
            case 0x1718ECu: goto label_1718ec;
            case 0x1718F0u: goto label_1718f0;
            case 0x1718F4u: goto label_1718f4;
            case 0x1718F8u: goto label_1718f8;
            case 0x1718FCu: goto label_1718fc;
            case 0x171900u: goto label_171900;
            case 0x171904u: goto label_171904;
            case 0x171908u: goto label_171908;
            case 0x17190Cu: goto label_17190c;
            case 0x171910u: goto label_171910;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x171890u; }
            if (ctx->pc != 0x171890u) { return; }
        }
    }
    ctx->pc = 0x171890u;
label_171890:
    // 0x171890: 0x82220003
    ctx->pc = 0x171890u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_171894:
    // 0x171894: 0x26520001
    ctx->pc = 0x171894u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_171898:
    // 0x171898: 0x242102a
    ctx->pc = 0x171898u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
label_17189c:
    // 0x17189c: 0x1440ffe4
label_1718a0:
    if (ctx->pc == 0x1718A0u) {
        ctx->pc = 0x1718A0u;
        SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 18), 2));
        ctx->pc = 0x1718A4u;
        goto label_1718a4;
    }
    ctx->pc = 0x17189Cu;
    {
        const bool branch_taken_0x17189c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1718A0u;
        SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 18), 2));
        if (branch_taken_0x17189c) {
            ctx->pc = 0x171830u;
            goto label_171830;
        }
    }
    ctx->pc = 0x1718A4u;
label_1718a4:
    // 0x1718a4: 0x8e240074
    ctx->pc = 0x1718a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_1718a8:
    // 0x1718a8: 0x50800004
label_1718ac:
    if (ctx->pc == 0x1718ACu) {
        ctx->pc = 0x1718ACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1718B0u;
        goto label_1718b0;
    }
    ctx->pc = 0x1718A8u;
    {
        const bool branch_taken_0x1718a8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1718a8) {
            ctx->pc = 0x1718ACu;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x1718BCu;
            goto label_1718bc;
        }
    }
    ctx->pc = 0x1718B0u;
label_1718b0:
    // 0x1718b0: 0xc0598e0
label_1718b4:
    if (ctx->pc == 0x1718B4u) {
        ctx->pc = 0x1718B8u;
        goto label_1718b8;
    }
    ctx->pc = 0x1718B0u;
    SET_GPR_U32(ctx, 31, 0x1718B8u);
    ctx->pc = 0x166380u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXAMP_Destroy_0x166380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1718B8u; }
        else if (ctx->pc != 0x1718B8u) { ctx->pc = 0x1718B8u; }
    }
    if (ctx->pc != 0x1718B8u) { return; }
    ctx->pc = 0x1718B8u;
label_1718b8:
    // 0x1718b8: 0x220202d
    ctx->pc = 0x1718b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1718bc:
    // 0x1718bc: 0x282d
    ctx->pc = 0x1718bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1718c0:
    // 0x1718c0: 0xc050cfe
label_1718c4:
    if (ctx->pc == 0x1718C4u) {
        ctx->pc = 0x1718C4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 164));
        ctx->pc = 0x1718C8u;
        goto label_1718c8;
    }
    ctx->pc = 0x1718C0u;
    SET_GPR_U32(ctx, 31, 0x1718C8u);
    ctx->pc = 0x1718C4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 164));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1718C8u; }
        else if (ctx->pc != 0x1718C8u) { ctx->pc = 0x1718C8u; }
    }
    if (ctx->pc != 0x1718C8u) { return; }
    ctx->pc = 0x1718C8u;
label_1718c8:
    // 0x1718c8: 0xa2200000
    ctx->pc = 0x1718c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_1718cc:
    // 0x1718cc: 0xdfbf0060
    ctx->pc = 0x1718ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1718d0:
    // 0x1718d0: 0xdfb50050
    ctx->pc = 0x1718d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1718d4:
    // 0x1718d4: 0xdfb40040
    ctx->pc = 0x1718d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1718d8:
    // 0x1718d8: 0xdfb30030
    ctx->pc = 0x1718d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1718dc:
    // 0x1718dc: 0xdfb20020
    ctx->pc = 0x1718dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1718e0:
    // 0x1718e0: 0xdfb10010
    ctx->pc = 0x1718e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1718e4:
    // 0x1718e4: 0xdfb00000
    ctx->pc = 0x1718e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1718e8:
    // 0x1718e8: 0x805a4f0
label_1718ec:
    if (ctx->pc == 0x1718ECu) {
        ctx->pc = 0x1718ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1718F0u;
        goto label_1718f0;
    }
    ctx->pc = 0x1718E8u;
    ctx->pc = 0x1718ECu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x1693C0u;
    ADXCRS_Unlock_0x1693c0(rdram, ctx, runtime); return;
    ctx->pc = 0x1718F0u;
label_1718f0:
    // 0x1718f0: 0xdfbf0060
    ctx->pc = 0x1718f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1718f4:
    // 0x1718f4: 0xdfb50050
    ctx->pc = 0x1718f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1718f8:
    // 0x1718f8: 0xdfb40040
    ctx->pc = 0x1718f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1718fc:
    // 0x1718fc: 0xdfb30030
    ctx->pc = 0x1718fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_171900:
    // 0x171900: 0xdfb20020
    ctx->pc = 0x171900u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_171904:
    // 0x171904: 0xdfb10010
    ctx->pc = 0x171904u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_171908:
    // 0x171908: 0xdfb00000
    ctx->pc = 0x171908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17190c:
    // 0x17190c: 0x3e00008
label_171910:
    if (ctx->pc == 0x171910u) {
        ctx->pc = 0x171910u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x171914u;
        goto label_fallthrough_0x17190c;
    }
    ctx->pc = 0x17190Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171910u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171758u: goto label_171758;
            case 0x17175Cu: goto label_17175c;
            case 0x171760u: goto label_171760;
            case 0x171764u: goto label_171764;
            case 0x171768u: goto label_171768;
            case 0x17176Cu: goto label_17176c;
            case 0x171770u: goto label_171770;
            case 0x171774u: goto label_171774;
            case 0x171778u: goto label_171778;
            case 0x17177Cu: goto label_17177c;
            case 0x171780u: goto label_171780;
            case 0x171784u: goto label_171784;
            case 0x171788u: goto label_171788;
            case 0x17178Cu: goto label_17178c;
            case 0x171790u: goto label_171790;
            case 0x171794u: goto label_171794;
            case 0x171798u: goto label_171798;
            case 0x17179Cu: goto label_17179c;
            case 0x1717A0u: goto label_1717a0;
            case 0x1717A4u: goto label_1717a4;
            case 0x1717A8u: goto label_1717a8;
            case 0x1717ACu: goto label_1717ac;
            case 0x1717B0u: goto label_1717b0;
            case 0x1717B4u: goto label_1717b4;
            case 0x1717B8u: goto label_1717b8;
            case 0x1717BCu: goto label_1717bc;
            case 0x1717C0u: goto label_1717c0;
            case 0x1717C4u: goto label_1717c4;
            case 0x1717C8u: goto label_1717c8;
            case 0x1717CCu: goto label_1717cc;
            case 0x1717D0u: goto label_1717d0;
            case 0x1717D4u: goto label_1717d4;
            case 0x1717D8u: goto label_1717d8;
            case 0x1717DCu: goto label_1717dc;
            case 0x1717E0u: goto label_1717e0;
            case 0x1717E4u: goto label_1717e4;
            case 0x1717E8u: goto label_1717e8;
            case 0x1717ECu: goto label_1717ec;
            case 0x1717F0u: goto label_1717f0;
            case 0x1717F4u: goto label_1717f4;
            case 0x1717F8u: goto label_1717f8;
            case 0x1717FCu: goto label_1717fc;
            case 0x171800u: goto label_171800;
            case 0x171804u: goto label_171804;
            case 0x171808u: goto label_171808;
            case 0x17180Cu: goto label_17180c;
            case 0x171810u: goto label_171810;
            case 0x171814u: goto label_171814;
            case 0x171818u: goto label_171818;
            case 0x17181Cu: goto label_17181c;
            case 0x171820u: goto label_171820;
            case 0x171824u: goto label_171824;
            case 0x171828u: goto label_171828;
            case 0x17182Cu: goto label_17182c;
            case 0x171830u: goto label_171830;
            case 0x171834u: goto label_171834;
            case 0x171838u: goto label_171838;
            case 0x17183Cu: goto label_17183c;
            case 0x171840u: goto label_171840;
            case 0x171844u: goto label_171844;
            case 0x171848u: goto label_171848;
            case 0x17184Cu: goto label_17184c;
            case 0x171850u: goto label_171850;
            case 0x171854u: goto label_171854;
            case 0x171858u: goto label_171858;
            case 0x17185Cu: goto label_17185c;
            case 0x171860u: goto label_171860;
            case 0x171864u: goto label_171864;
            case 0x171868u: goto label_171868;
            case 0x17186Cu: goto label_17186c;
            case 0x171870u: goto label_171870;
            case 0x171874u: goto label_171874;
            case 0x171878u: goto label_171878;
            case 0x17187Cu: goto label_17187c;
            case 0x171880u: goto label_171880;
            case 0x171884u: goto label_171884;
            case 0x171888u: goto label_171888;
            case 0x17188Cu: goto label_17188c;
            case 0x171890u: goto label_171890;
            case 0x171894u: goto label_171894;
            case 0x171898u: goto label_171898;
            case 0x17189Cu: goto label_17189c;
            case 0x1718A0u: goto label_1718a0;
            case 0x1718A4u: goto label_1718a4;
            case 0x1718A8u: goto label_1718a8;
            case 0x1718ACu: goto label_1718ac;
            case 0x1718B0u: goto label_1718b0;
            case 0x1718B4u: goto label_1718b4;
            case 0x1718B8u: goto label_1718b8;
            case 0x1718BCu: goto label_1718bc;
            case 0x1718C0u: goto label_1718c0;
            case 0x1718C4u: goto label_1718c4;
            case 0x1718C8u: goto label_1718c8;
            case 0x1718CCu: goto label_1718cc;
            case 0x1718D0u: goto label_1718d0;
            case 0x1718D4u: goto label_1718d4;
            case 0x1718D8u: goto label_1718d8;
            case 0x1718DCu: goto label_1718dc;
            case 0x1718E0u: goto label_1718e0;
            case 0x1718E4u: goto label_1718e4;
            case 0x1718E8u: goto label_1718e8;
            case 0x1718ECu: goto label_1718ec;
            case 0x1718F0u: goto label_1718f0;
            case 0x1718F4u: goto label_1718f4;
            case 0x1718F8u: goto label_1718f8;
            case 0x1718FCu: goto label_1718fc;
            case 0x171900u: goto label_171900;
            case 0x171904u: goto label_171904;
            case 0x171908u: goto label_171908;
            case 0x17190Cu: goto label_17190c;
            case 0x171910u: goto label_171910;
            default: break;
        }
        return;
    }
label_fallthrough_0x17190c:
    ctx->pc = 0x171914u;
}
