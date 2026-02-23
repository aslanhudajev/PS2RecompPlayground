#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyStartAfs
// Address: 0x18d688 - 0x18d82c
void mwPlyStartAfs_0x18d688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyStartAfs");


    ctx->pc = 0x18d688u;

label_18d688:
    // 0x18d688: 0x27bdff70
    ctx->pc = 0x18d688u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
label_18d68c:
    // 0x18d68c: 0xffb10020
    ctx->pc = 0x18d68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_18d690:
    // 0x18d690: 0x80882d
    ctx->pc = 0x18d690u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18d694:
    // 0x18d694: 0xffb60070
    ctx->pc = 0x18d694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_18d698:
    // 0x18d698: 0xffb50060
    ctx->pc = 0x18d698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_18d69c:
    // 0x18d69c: 0xc0b02d
    ctx->pc = 0x18d69cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18d6a0:
    // 0x18d6a0: 0xffb40050
    ctx->pc = 0x18d6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_18d6a4:
    // 0x18d6a4: 0xffb30040
    ctx->pc = 0x18d6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_18d6a8:
    // 0x18d6a8: 0xffb20030
    ctx->pc = 0x18d6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_18d6ac:
    // 0x18d6ac: 0xffb00010
    ctx->pc = 0x18d6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_18d6b0:
    // 0x18d6b0: 0xffbf0080
    ctx->pc = 0x18d6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_18d6b4:
    // 0x18d6b4: 0xc0633dc
label_18d6b8:
    if (ctx->pc == 0x18D6B8u) {
        ctx->pc = 0x18D6B8u;
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18D6BCu;
        goto label_18d6bc;
    }
    ctx->pc = 0x18D6B4u;
    SET_GPR_U32(ctx, 31, 0x18D6BCu);
    ctx->pc = 0x18D6B8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18CF70u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyGetInputSj_0x18cf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D6BCu; }
        else if (ctx->pc != 0x18D6BCu) { ctx->pc = 0x18D6BCu; }
    }
    if (ctx->pc != 0x18D6BCu) { return; }
    ctx->pc = 0x18D6BCu;
label_18d6bc:
    // 0x18d6bc: 0x8e230000
    ctx->pc = 0x18d6bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18d6c0:
    // 0x18d6c0: 0x40902d
    ctx->pc = 0x18d6c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d6c4:
    // 0x18d6c4: 0x220202d
    ctx->pc = 0x18d6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18d6c8:
    // 0x18d6c8: 0x8c62003c
    ctx->pc = 0x18d6c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_18d6cc:
    // 0x18d6cc: 0x40f809
label_18d6d0:
    if (ctx->pc == 0x18D6D0u) {
        ctx->pc = 0x18D6D0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18D6D4u;
        goto label_18d6d4;
    }
    ctx->pc = 0x18D6CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18D6D4u);
        ctx->pc = 0x18D6D0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D688u: goto label_18d688;
            case 0x18D68Cu: goto label_18d68c;
            case 0x18D690u: goto label_18d690;
            case 0x18D694u: goto label_18d694;
            case 0x18D698u: goto label_18d698;
            case 0x18D69Cu: goto label_18d69c;
            case 0x18D6A0u: goto label_18d6a0;
            case 0x18D6A4u: goto label_18d6a4;
            case 0x18D6A8u: goto label_18d6a8;
            case 0x18D6ACu: goto label_18d6ac;
            case 0x18D6B0u: goto label_18d6b0;
            case 0x18D6B4u: goto label_18d6b4;
            case 0x18D6B8u: goto label_18d6b8;
            case 0x18D6BCu: goto label_18d6bc;
            case 0x18D6C0u: goto label_18d6c0;
            case 0x18D6C4u: goto label_18d6c4;
            case 0x18D6C8u: goto label_18d6c8;
            case 0x18D6CCu: goto label_18d6cc;
            case 0x18D6D0u: goto label_18d6d0;
            case 0x18D6D4u: goto label_18d6d4;
            case 0x18D6D8u: goto label_18d6d8;
            case 0x18D6DCu: goto label_18d6dc;
            case 0x18D6E0u: goto label_18d6e0;
            case 0x18D6E4u: goto label_18d6e4;
            case 0x18D6E8u: goto label_18d6e8;
            case 0x18D6ECu: goto label_18d6ec;
            case 0x18D6F0u: goto label_18d6f0;
            case 0x18D6F4u: goto label_18d6f4;
            case 0x18D6F8u: goto label_18d6f8;
            case 0x18D6FCu: goto label_18d6fc;
            case 0x18D700u: goto label_18d700;
            case 0x18D704u: goto label_18d704;
            case 0x18D708u: goto label_18d708;
            case 0x18D70Cu: goto label_18d70c;
            case 0x18D710u: goto label_18d710;
            case 0x18D714u: goto label_18d714;
            case 0x18D718u: goto label_18d718;
            case 0x18D71Cu: goto label_18d71c;
            case 0x18D720u: goto label_18d720;
            case 0x18D724u: goto label_18d724;
            case 0x18D728u: goto label_18d728;
            case 0x18D72Cu: goto label_18d72c;
            case 0x18D730u: goto label_18d730;
            case 0x18D734u: goto label_18d734;
            case 0x18D738u: goto label_18d738;
            case 0x18D73Cu: goto label_18d73c;
            case 0x18D740u: goto label_18d740;
            case 0x18D744u: goto label_18d744;
            case 0x18D748u: goto label_18d748;
            case 0x18D74Cu: goto label_18d74c;
            case 0x18D750u: goto label_18d750;
            case 0x18D754u: goto label_18d754;
            case 0x18D758u: goto label_18d758;
            case 0x18D75Cu: goto label_18d75c;
            case 0x18D760u: goto label_18d760;
            case 0x18D764u: goto label_18d764;
            case 0x18D768u: goto label_18d768;
            case 0x18D76Cu: goto label_18d76c;
            case 0x18D770u: goto label_18d770;
            case 0x18D774u: goto label_18d774;
            case 0x18D778u: goto label_18d778;
            case 0x18D77Cu: goto label_18d77c;
            case 0x18D780u: goto label_18d780;
            case 0x18D784u: goto label_18d784;
            case 0x18D788u: goto label_18d788;
            case 0x18D78Cu: goto label_18d78c;
            case 0x18D790u: goto label_18d790;
            case 0x18D794u: goto label_18d794;
            case 0x18D798u: goto label_18d798;
            case 0x18D79Cu: goto label_18d79c;
            case 0x18D7A0u: goto label_18d7a0;
            case 0x18D7A4u: goto label_18d7a4;
            case 0x18D7A8u: goto label_18d7a8;
            case 0x18D7ACu: goto label_18d7ac;
            case 0x18D7B0u: goto label_18d7b0;
            case 0x18D7B4u: goto label_18d7b4;
            case 0x18D7B8u: goto label_18d7b8;
            case 0x18D7BCu: goto label_18d7bc;
            case 0x18D7C0u: goto label_18d7c0;
            case 0x18D7C4u: goto label_18d7c4;
            case 0x18D7C8u: goto label_18d7c8;
            case 0x18D7CCu: goto label_18d7cc;
            case 0x18D7D0u: goto label_18d7d0;
            case 0x18D7D4u: goto label_18d7d4;
            case 0x18D7D8u: goto label_18d7d8;
            case 0x18D7DCu: goto label_18d7dc;
            case 0x18D7E0u: goto label_18d7e0;
            case 0x18D7E4u: goto label_18d7e4;
            case 0x18D7E8u: goto label_18d7e8;
            case 0x18D7ECu: goto label_18d7ec;
            case 0x18D7F0u: goto label_18d7f0;
            case 0x18D7F4u: goto label_18d7f4;
            case 0x18D7F8u: goto label_18d7f8;
            case 0x18D7FCu: goto label_18d7fc;
            case 0x18D800u: goto label_18d800;
            case 0x18D804u: goto label_18d804;
            case 0x18D808u: goto label_18d808;
            case 0x18D80Cu: goto label_18d80c;
            case 0x18D810u: goto label_18d810;
            case 0x18D814u: goto label_18d814;
            case 0x18D818u: goto label_18d818;
            case 0x18D81Cu: goto label_18d81c;
            case 0x18D820u: goto label_18d820;
            case 0x18D824u: goto label_18d824;
            case 0x18D828u: goto label_18d828;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18D6D4u; }
            if (ctx->pc != 0x18D6D4u) { return; }
        }
    }
    ctx->pc = 0x18D6D4u;
label_18d6d4:
    // 0x18d6d4: 0xc063188
label_18d6d8:
    if (ctx->pc == 0x18D6D8u) {
        ctx->pc = 0x18D6DCu;
        goto label_18d6dc;
    }
    ctx->pc = 0x18D6D4u;
    SET_GPR_U32(ctx, 31, 0x18D6DCu);
    ctx->pc = 0x18C620u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyLock_0x18c620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D6DCu; }
        else if (ctx->pc != 0x18D6DCu) { ctx->pc = 0x18D6DCu; }
    }
    if (ctx->pc != 0x18D6DCu) { return; }
    ctx->pc = 0x18D6DCu;
label_18d6dc:
    // 0x18d6dc: 0x3c03002e
    ctx->pc = 0x18d6dcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)46 << 16));
label_18d6e0:
    // 0x18d6e0: 0x40982d
    ctx->pc = 0x18d6e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d6e4:
    // 0x18d6e4: 0x247442d0
    ctx->pc = 0x18d6e4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 3), 17104));
label_18d6e8:
    // 0x18d6e8: 0x37a90008
    ctx->pc = 0x18d6e8u;
    SET_GPR_U32(ctx, 9, OR32(GPR_U32(ctx, 29), 8));
label_18d6ec:
    // 0x18d6ec: 0x2a0202d
    ctx->pc = 0x18d6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_18d6f0:
    // 0x18d6f0: 0x2c0282d
    ctx->pc = 0x18d6f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_18d6f4:
    // 0x18d6f4: 0x280302d
    ctx->pc = 0x18d6f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18d6f8:
    // 0x18d6f8: 0x3a0382d
    ctx->pc = 0x18d6f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18d6fc:
    // 0x18d6fc: 0xc05b0a2
label_18d700:
    if (ctx->pc == 0x18D700u) {
        ctx->pc = 0x18D700u;
        SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 29), 4));
        ctx->pc = 0x18D704u;
        goto label_18d704;
    }
    ctx->pc = 0x18D6FCu;
    SET_GPR_U32(ctx, 31, 0x18D704u);
    ctx->pc = 0x18D700u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x16C288u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetFnameRangeEx_0x16c288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D704u; }
        else if (ctx->pc != 0x18D704u) { ctx->pc = 0x18D704u; }
    }
    if (ctx->pc != 0x18D704u) { return; }
    ctx->pc = 0x18D704u;
label_18d704:
    // 0x18d704: 0x40802d
    ctx->pc = 0x18d704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d708:
    // 0x18d708: 0xc063190
label_18d70c:
    if (ctx->pc == 0x18D70Cu) {
        ctx->pc = 0x18D70Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18D710u;
        goto label_18d710;
    }
    ctx->pc = 0x18D708u;
    SET_GPR_U32(ctx, 31, 0x18D710u);
    ctx->pc = 0x18D70Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18C640u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyUnlock_0x18c640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D710u; }
        else if (ctx->pc != 0x18D710u) { ctx->pc = 0x18D710u; }
    }
    if (ctx->pc != 0x18D710u) { return; }
    ctx->pc = 0x18D710u;
label_18d710:
    // 0x18d710: 0x1600003d
label_18d714:
    if (ctx->pc == 0x18D714u) {
        ctx->pc = 0x18D714u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x18D718u;
        goto label_18d718;
    }
    ctx->pc = 0x18D710u;
    {
        const bool branch_taken_0x18d710 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x18D714u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x18d710) {
            ctx->pc = 0x18D808u;
            goto label_18d808;
        }
    }
    ctx->pc = 0x18D718u;
label_18d718:
    // 0x18d718: 0xc063188
label_18d71c:
    if (ctx->pc == 0x18D71Cu) {
        ctx->pc = 0x18D720u;
        goto label_18d720;
    }
    ctx->pc = 0x18D718u;
    SET_GPR_U32(ctx, 31, 0x18D720u);
    ctx->pc = 0x18C620u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyLock_0x18c620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D720u; }
        else if (ctx->pc != 0x18D720u) { ctx->pc = 0x18D720u; }
    }
    if (ctx->pc != 0x18D720u) { return; }
    ctx->pc = 0x18D720u;
label_18d720:
    // 0x18d720: 0x8fa60004
    ctx->pc = 0x18d720u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_18d724:
    // 0x18d724: 0x40982d
    ctx->pc = 0x18d724u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d728:
    // 0x18d728: 0x8fa70008
    ctx->pc = 0x18d728u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_18d72c:
    // 0x18d72c: 0x280202d
    ctx->pc = 0x18d72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18d730:
    // 0x18d730: 0x8fa50000
    ctx->pc = 0x18d730u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18d734:
    // 0x18d734: 0xc063e7c
label_18d738:
    if (ctx->pc == 0x18D738u) {
        ctx->pc = 0x18D738u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18D73Cu;
        goto label_18d73c;
    }
    ctx->pc = 0x18D734u;
    SET_GPR_U32(ctx, 31, 0x18D73Cu);
    ctx->pc = 0x18D738u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18F9F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSTM_OpenFileRangeExRt_0x18f9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D73Cu; }
        else if (ctx->pc != 0x18D73Cu) { ctx->pc = 0x18D73Cu; }
    }
    if (ctx->pc != 0x18D73Cu) { return; }
    ctx->pc = 0x18D73Cu;
label_18d73c:
    // 0x18d73c: 0xae220034
    ctx->pc = 0x18d73cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
label_18d740:
    // 0x18d740: 0xc063190
label_18d744:
    if (ctx->pc == 0x18D744u) {
        ctx->pc = 0x18D744u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18D748u;
        goto label_18d748;
    }
    ctx->pc = 0x18D740u;
    SET_GPR_U32(ctx, 31, 0x18D748u);
    ctx->pc = 0x18D744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18C640u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyUnlock_0x18c640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D748u; }
        else if (ctx->pc != 0x18D748u) { ctx->pc = 0x18D748u; }
    }
    if (ctx->pc != 0x18D748u) { return; }
    ctx->pc = 0x18D748u;
label_18d748:
    // 0x18d748: 0x8e220034
    ctx->pc = 0x18d748u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_18d74c:
    // 0x18d74c: 0x14400007
label_18d750:
    if (ctx->pc == 0x18D750u) {
        ctx->pc = 0x18D750u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        ctx->pc = 0x18D754u;
        goto label_18d754;
    }
    ctx->pc = 0x18D74Cu;
    {
        const bool branch_taken_0x18d74c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18D750u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x18d74c) {
            ctx->pc = 0x18D76Cu;
            goto label_18d76c;
        }
    }
    ctx->pc = 0x18D754u;
label_18d754:
    // 0x18d754: 0x2a0282d
    ctx->pc = 0x18d754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_18d758:
    // 0x18d758: 0x2484ce70
    ctx->pc = 0x18d758u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954608));
label_18d75c:
    // 0x18d75c: 0xc063dda
label_18d760:
    if (ctx->pc == 0x18D760u) {
        ctx->pc = 0x18D760u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18D764u;
        goto label_18d764;
    }
    ctx->pc = 0x18D75Cu;
    SET_GPR_U32(ctx, 31, 0x18D764u);
    ctx->pc = 0x18D760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18F768u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_Error_0x18f768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D764u; }
        else if (ctx->pc != 0x18D764u) { ctx->pc = 0x18D764u; }
    }
    if (ctx->pc != 0x18D764u) { return; }
    ctx->pc = 0x18D764u;
label_18d764:
    // 0x18d764: 0x10000028
label_18d768:
    if (ctx->pc == 0x18D768u) {
        ctx->pc = 0x18D768u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x18D76Cu;
        goto label_18d76c;
    }
    ctx->pc = 0x18D764u;
    {
        const bool branch_taken_0x18d764 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18D768u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x18d764) {
            ctx->pc = 0x18D808u;
            goto label_18d808;
        }
    }
    ctx->pc = 0x18D76Cu;
label_18d76c:
    // 0x18d76c: 0xc063188
label_18d770:
    if (ctx->pc == 0x18D770u) {
        ctx->pc = 0x18D770u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x18D774u;
        goto label_18d774;
    }
    ctx->pc = 0x18D76Cu;
    SET_GPR_U32(ctx, 31, 0x18D774u);
    ctx->pc = 0x18D770u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 17), 80)));
    ctx->pc = 0x18C620u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyLock_0x18c620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D774u; }
        else if (ctx->pc != 0x18D774u) { ctx->pc = 0x18D774u; }
    }
    if (ctx->pc != 0x18D774u) { return; }
    ctx->pc = 0x18D774u;
label_18d774:
    // 0x18d774: 0x2403ffff
    ctx->pc = 0x18d774u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_18d778:
    // 0x18d778: 0x260507ff
    ctx->pc = 0x18d778u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 2047));
label_18d77c:
    // 0x18d77c: 0x70182a
    ctx->pc = 0x18d77cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 16)));
label_18d780:
    // 0x18d780: 0x8e240034
    ctx->pc = 0x18d780u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_18d784:
    // 0x18d784: 0x203280b
    ctx->pc = 0x18d784u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 16));
label_18d788:
    // 0x18d788: 0x40982d
    ctx->pc = 0x18d788u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18d78c:
    // 0x18d78c: 0x592c3
    ctx->pc = 0x18d78cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 5), 11));
label_18d790:
    // 0x18d790: 0xc063e20
label_18d794:
    if (ctx->pc == 0x18D794u) {
        ctx->pc = 0x18D794u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18D798u;
        goto label_18d798;
    }
    ctx->pc = 0x18D790u;
    SET_GPR_U32(ctx, 31, 0x18D798u);
    ctx->pc = 0x18D794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18F880u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSTM_SetRdSct_0x18f880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D798u; }
        else if (ctx->pc != 0x18D798u) { ctx->pc = 0x18D798u; }
    }
    if (ctx->pc != 0x18D798u) { return; }
    ctx->pc = 0x18D798u;
label_18d798:
    // 0x18d798: 0x50400007
label_18d79c:
    if (ctx->pc == 0x18D79Cu) {
        ctx->pc = 0x18D79Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->pc = 0x18D7A0u;
        goto label_18d7a0;
    }
    ctx->pc = 0x18D798u;
    {
        const bool branch_taken_0x18d798 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x18d798) {
            ctx->pc = 0x18D79Cu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->pc = 0x18D7B8u;
            goto label_18d7b8;
        }
    }
    ctx->pc = 0x18D7A0u;
label_18d7a0:
    // 0x18d7a0: 0xc0633b4
label_18d7a4:
    if (ctx->pc == 0x18D7A4u) {
        ctx->pc = 0x18D7A4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->pc = 0x18D7A8u;
        goto label_18d7a8;
    }
    ctx->pc = 0x18D7A0u;
    SET_GPR_U32(ctx, 31, 0x18D7A8u);
    ctx->pc = 0x18D7A4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967292));
    ctx->pc = 0x18CED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwSfdSetErrCode_0x18ced0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D7A8u; }
        else if (ctx->pc != 0x18D7A8u) { ctx->pc = 0x18D7A8u; }
    }
    if (ctx->pc != 0x18D7A8u) { return; }
    ctx->pc = 0x18D7A8u;
label_18d7a8:
    // 0x18d7a8: 0x3c04002c
    ctx->pc = 0x18d7a8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_18d7ac:
    // 0x18d7ac: 0xc063dda
label_18d7b0:
    if (ctx->pc == 0x18D7B0u) {
        ctx->pc = 0x18D7B0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954664));
        ctx->pc = 0x18D7B4u;
        goto label_18d7b4;
    }
    ctx->pc = 0x18D7ACu;
    SET_GPR_U32(ctx, 31, 0x18D7B4u);
    ctx->pc = 0x18D7B0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954664));
    ctx->pc = 0x18F768u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_Error_0x18f768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D7B4u; }
        else if (ctx->pc != 0x18D7B4u) { ctx->pc = 0x18D7B4u; }
    }
    if (ctx->pc != 0x18D7B4u) { return; }
    ctx->pc = 0x18D7B4u;
label_18d7b4:
    // 0x18d7b4: 0x8e240034
    ctx->pc = 0x18d7b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_18d7b8:
    // 0x18d7b8: 0xc063e28
label_18d7bc:
    if (ctx->pc == 0x18D7BCu) {
        ctx->pc = 0x18D7BCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18D7C0u;
        goto label_18d7c0;
    }
    ctx->pc = 0x18D7B8u;
    SET_GPR_U32(ctx, 31, 0x18D7C0u);
    ctx->pc = 0x18D7BCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18F8A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSTM_SetTrSct_0x18f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D7C0u; }
        else if (ctx->pc != 0x18D7C0u) { ctx->pc = 0x18D7C0u; }
    }
    if (ctx->pc != 0x18D7C0u) { return; }
    ctx->pc = 0x18D7C0u;
label_18d7c0:
    // 0x18d7c0: 0x50400007
label_18d7c4:
    if (ctx->pc == 0x18D7C4u) {
        ctx->pc = 0x18D7C4u;
        SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 16), 31));
        ctx->pc = 0x18D7C8u;
        goto label_18d7c8;
    }
    ctx->pc = 0x18D7C0u;
    {
        const bool branch_taken_0x18d7c0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x18d7c0) {
            ctx->pc = 0x18D7C4u;
            SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 16), 31));
            ctx->pc = 0x18D7E0u;
            goto label_18d7e0;
        }
    }
    ctx->pc = 0x18D7C8u;
label_18d7c8:
    // 0x18d7c8: 0xc0633b4
label_18d7cc:
    if (ctx->pc == 0x18D7CCu) {
        ctx->pc = 0x18D7CCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->pc = 0x18D7D0u;
        goto label_18d7d0;
    }
    ctx->pc = 0x18D7C8u;
    SET_GPR_U32(ctx, 31, 0x18D7D0u);
    ctx->pc = 0x18D7CCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967292));
    ctx->pc = 0x18CED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwSfdSetErrCode_0x18ced0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D7D0u; }
        else if (ctx->pc != 0x18D7D0u) { ctx->pc = 0x18D7D0u; }
    }
    if (ctx->pc != 0x18D7D0u) { return; }
    ctx->pc = 0x18D7D0u;
label_18d7d0:
    // 0x18d7d0: 0x3c04002c
    ctx->pc = 0x18d7d0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
label_18d7d4:
    // 0x18d7d4: 0xc063dda
label_18d7d8:
    if (ctx->pc == 0x18D7D8u) {
        ctx->pc = 0x18D7D8u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954704));
        ctx->pc = 0x18D7DCu;
        goto label_18d7dc;
    }
    ctx->pc = 0x18D7D4u;
    SET_GPR_U32(ctx, 31, 0x18D7DCu);
    ctx->pc = 0x18D7D8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294954704));
    ctx->pc = 0x18F768u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_Error_0x18f768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D7DCu; }
        else if (ctx->pc != 0x18D7DCu) { ctx->pc = 0x18D7DCu; }
    }
    if (ctx->pc != 0x18D7DCu) { return; }
    ctx->pc = 0x18D7DCu;
label_18d7dc:
    // 0x18d7dc: 0x102fc2
    ctx->pc = 0x18d7dcu;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 16), 31));
label_18d7e0:
    // 0x18d7e0: 0x8e240034
    ctx->pc = 0x18d7e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_18d7e4:
    // 0x18d7e4: 0x2052821
    ctx->pc = 0x18d7e4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_18d7e8:
    // 0x18d7e8: 0x200302d
    ctx->pc = 0x18d7e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18d7ec:
    // 0x18d7ec: 0xc063e7a
label_18d7f0:
    if (ctx->pc == 0x18D7F0u) {
        ctx->pc = 0x18D7F0u;
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
        ctx->pc = 0x18D7F4u;
        goto label_18d7f4;
    }
    ctx->pc = 0x18D7ECu;
    SET_GPR_U32(ctx, 31, 0x18D7F4u);
    ctx->pc = 0x18D7F0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    ctx->pc = 0x18F9E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSTM_SetFlowLimit_0x18f9e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D7F4u; }
        else if (ctx->pc != 0x18D7F4u) { ctx->pc = 0x18D7F4u; }
    }
    if (ctx->pc != 0x18D7F4u) { return; }
    ctx->pc = 0x18D7F4u;
label_18d7f4:
    // 0x18d7f4: 0xc063e52
label_18d7f8:
    if (ctx->pc == 0x18D7F8u) {
        ctx->pc = 0x18D7F8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->pc = 0x18D7FCu;
        goto label_18d7fc;
    }
    ctx->pc = 0x18D7F4u;
    SET_GPR_U32(ctx, 31, 0x18D7FCu);
    ctx->pc = 0x18D7F8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 52)));
    ctx->pc = 0x18F948u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSTM_Start_0x18f948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D7FCu; }
        else if (ctx->pc != 0x18D7FCu) { ctx->pc = 0x18D7FCu; }
    }
    if (ctx->pc != 0x18D7FCu) { return; }
    ctx->pc = 0x18D7FCu;
label_18d7fc:
    // 0x18d7fc: 0xc063190
label_18d800:
    if (ctx->pc == 0x18D800u) {
        ctx->pc = 0x18D800u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18D804u;
        goto label_18d804;
    }
    ctx->pc = 0x18D7FCu;
    SET_GPR_U32(ctx, 31, 0x18D804u);
    ctx->pc = 0x18D800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18C640u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyUnlock_0x18c640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D804u; }
        else if (ctx->pc != 0x18D804u) { ctx->pc = 0x18D804u; }
    }
    if (ctx->pc != 0x18D804u) { return; }
    ctx->pc = 0x18D804u;
label_18d804:
    // 0x18d804: 0xdfbf0080
    ctx->pc = 0x18d804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_18d808:
    // 0x18d808: 0xdfb60070
    ctx->pc = 0x18d808u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_18d80c:
    // 0x18d80c: 0xdfb50060
    ctx->pc = 0x18d80cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_18d810:
    // 0x18d810: 0xdfb40050
    ctx->pc = 0x18d810u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_18d814:
    // 0x18d814: 0xdfb30040
    ctx->pc = 0x18d814u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_18d818:
    // 0x18d818: 0xdfb20030
    ctx->pc = 0x18d818u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18d81c:
    // 0x18d81c: 0xdfb10020
    ctx->pc = 0x18d81cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18d820:
    // 0x18d820: 0xdfb00010
    ctx->pc = 0x18d820u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18d824:
    // 0x18d824: 0x3e00008
label_18d828:
    if (ctx->pc == 0x18D828u) {
        ctx->pc = 0x18D828u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x18D82Cu;
        goto label_fallthrough_0x18d824;
    }
    ctx->pc = 0x18D824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D828u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D688u: goto label_18d688;
            case 0x18D68Cu: goto label_18d68c;
            case 0x18D690u: goto label_18d690;
            case 0x18D694u: goto label_18d694;
            case 0x18D698u: goto label_18d698;
            case 0x18D69Cu: goto label_18d69c;
            case 0x18D6A0u: goto label_18d6a0;
            case 0x18D6A4u: goto label_18d6a4;
            case 0x18D6A8u: goto label_18d6a8;
            case 0x18D6ACu: goto label_18d6ac;
            case 0x18D6B0u: goto label_18d6b0;
            case 0x18D6B4u: goto label_18d6b4;
            case 0x18D6B8u: goto label_18d6b8;
            case 0x18D6BCu: goto label_18d6bc;
            case 0x18D6C0u: goto label_18d6c0;
            case 0x18D6C4u: goto label_18d6c4;
            case 0x18D6C8u: goto label_18d6c8;
            case 0x18D6CCu: goto label_18d6cc;
            case 0x18D6D0u: goto label_18d6d0;
            case 0x18D6D4u: goto label_18d6d4;
            case 0x18D6D8u: goto label_18d6d8;
            case 0x18D6DCu: goto label_18d6dc;
            case 0x18D6E0u: goto label_18d6e0;
            case 0x18D6E4u: goto label_18d6e4;
            case 0x18D6E8u: goto label_18d6e8;
            case 0x18D6ECu: goto label_18d6ec;
            case 0x18D6F0u: goto label_18d6f0;
            case 0x18D6F4u: goto label_18d6f4;
            case 0x18D6F8u: goto label_18d6f8;
            case 0x18D6FCu: goto label_18d6fc;
            case 0x18D700u: goto label_18d700;
            case 0x18D704u: goto label_18d704;
            case 0x18D708u: goto label_18d708;
            case 0x18D70Cu: goto label_18d70c;
            case 0x18D710u: goto label_18d710;
            case 0x18D714u: goto label_18d714;
            case 0x18D718u: goto label_18d718;
            case 0x18D71Cu: goto label_18d71c;
            case 0x18D720u: goto label_18d720;
            case 0x18D724u: goto label_18d724;
            case 0x18D728u: goto label_18d728;
            case 0x18D72Cu: goto label_18d72c;
            case 0x18D730u: goto label_18d730;
            case 0x18D734u: goto label_18d734;
            case 0x18D738u: goto label_18d738;
            case 0x18D73Cu: goto label_18d73c;
            case 0x18D740u: goto label_18d740;
            case 0x18D744u: goto label_18d744;
            case 0x18D748u: goto label_18d748;
            case 0x18D74Cu: goto label_18d74c;
            case 0x18D750u: goto label_18d750;
            case 0x18D754u: goto label_18d754;
            case 0x18D758u: goto label_18d758;
            case 0x18D75Cu: goto label_18d75c;
            case 0x18D760u: goto label_18d760;
            case 0x18D764u: goto label_18d764;
            case 0x18D768u: goto label_18d768;
            case 0x18D76Cu: goto label_18d76c;
            case 0x18D770u: goto label_18d770;
            case 0x18D774u: goto label_18d774;
            case 0x18D778u: goto label_18d778;
            case 0x18D77Cu: goto label_18d77c;
            case 0x18D780u: goto label_18d780;
            case 0x18D784u: goto label_18d784;
            case 0x18D788u: goto label_18d788;
            case 0x18D78Cu: goto label_18d78c;
            case 0x18D790u: goto label_18d790;
            case 0x18D794u: goto label_18d794;
            case 0x18D798u: goto label_18d798;
            case 0x18D79Cu: goto label_18d79c;
            case 0x18D7A0u: goto label_18d7a0;
            case 0x18D7A4u: goto label_18d7a4;
            case 0x18D7A8u: goto label_18d7a8;
            case 0x18D7ACu: goto label_18d7ac;
            case 0x18D7B0u: goto label_18d7b0;
            case 0x18D7B4u: goto label_18d7b4;
            case 0x18D7B8u: goto label_18d7b8;
            case 0x18D7BCu: goto label_18d7bc;
            case 0x18D7C0u: goto label_18d7c0;
            case 0x18D7C4u: goto label_18d7c4;
            case 0x18D7C8u: goto label_18d7c8;
            case 0x18D7CCu: goto label_18d7cc;
            case 0x18D7D0u: goto label_18d7d0;
            case 0x18D7D4u: goto label_18d7d4;
            case 0x18D7D8u: goto label_18d7d8;
            case 0x18D7DCu: goto label_18d7dc;
            case 0x18D7E0u: goto label_18d7e0;
            case 0x18D7E4u: goto label_18d7e4;
            case 0x18D7E8u: goto label_18d7e8;
            case 0x18D7ECu: goto label_18d7ec;
            case 0x18D7F0u: goto label_18d7f0;
            case 0x18D7F4u: goto label_18d7f4;
            case 0x18D7F8u: goto label_18d7f8;
            case 0x18D7FCu: goto label_18d7fc;
            case 0x18D800u: goto label_18d800;
            case 0x18D804u: goto label_18d804;
            case 0x18D808u: goto label_18d808;
            case 0x18D80Cu: goto label_18d80c;
            case 0x18D810u: goto label_18d810;
            case 0x18D814u: goto label_18d814;
            case 0x18D818u: goto label_18d818;
            case 0x18D81Cu: goto label_18d81c;
            case 0x18D820u: goto label_18d820;
            case 0x18D824u: goto label_18d824;
            case 0x18D828u: goto label_18d828;
            default: break;
        }
        return;
    }
label_fallthrough_0x18d824:
    ctx->pc = 0x18D82Cu;
}
