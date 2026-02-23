#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sjx_sndcbf
// Address: 0x17d790 - 0x17d8a0
void sjx_sndcbf_0x17d790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sjx_sndcbf");


    ctx->pc = 0x17d790u;

label_17d790:
    // 0x17d790: 0x27bdff60
    ctx->pc = 0x17d790u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
label_17d794:
    // 0x17d794: 0xffb50060
    ctx->pc = 0x17d794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_17d798:
    // 0x17d798: 0xffb70080
    ctx->pc = 0x17d798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_17d79c:
    // 0x17d79c: 0xa0a82d
    ctx->pc = 0x17d79cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17d7a0:
    // 0x17d7a0: 0xffb60070
    ctx->pc = 0x17d7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_17d7a4:
    // 0x17d7a4: 0x24170001
    ctx->pc = 0x17d7a4u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1));
label_17d7a8:
    // 0x17d7a8: 0xffb40050
    ctx->pc = 0x17d7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_17d7ac:
    // 0x17d7ac: 0xffb20030
    ctx->pc = 0x17d7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_17d7b0:
    // 0x17d7b0: 0x26b40010
    ctx->pc = 0x17d7b0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 21), 16));
label_17d7b4:
    // 0x17d7b4: 0xffb10020
    ctx->pc = 0x17d7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_17d7b8:
    // 0x17d7b8: 0x902d
    ctx->pc = 0x17d7b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17d7bc:
    // 0x17d7bc: 0xffbf0090
    ctx->pc = 0x17d7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_17d7c0:
    // 0x17d7c0: 0xffb30040
    ctx->pc = 0x17d7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_17d7c4:
    // 0x17d7c4: 0xc05efbc
label_17d7c8:
    if (ctx->pc == 0x17D7C8u) {
        ctx->pc = 0x17D7C8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->pc = 0x17D7CCu;
        goto label_17d7cc;
    }
    ctx->pc = 0x17D7C4u;
    SET_GPR_U32(ctx, 31, 0x17D7CCu);
    ctx->pc = 0x17D7C8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->pc = 0x17BEF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJCRS_Lock_0x17bef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D7CCu; }
        else if (ctx->pc != 0x17D7CCu) { ctx->pc = 0x17D7CCu; }
    }
    if (ctx->pc != 0x17D7CCu) { return; }
    ctx->pc = 0x17D7CCu;
label_17d7cc:
    // 0x17d7cc: 0x3c020024
    ctx->pc = 0x17d7ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
label_17d7d0:
    // 0x17d7d0: 0x24510968
    ctx->pc = 0x17d7d0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 2408));
label_17d7d4:
    // 0x17d7d4: 0x26360140
    ctx->pc = 0x17d7d4u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 17), 320));
label_17d7d8:
    // 0x17d7d8: 0x82220000
    ctx->pc = 0x17d7d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_17d7dc:
    // 0x17d7dc: 0x0
    ctx->pc = 0x17d7dcu;
    // NOP
label_17d7e0:
    // 0x17d7e0: 0x5457001e
label_17d7e4:
    if (ctx->pc == 0x17D7E4u) {
        ctx->pc = 0x17D7E4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 20));
        ctx->pc = 0x17D7E8u;
        goto label_17d7e8;
    }
    ctx->pc = 0x17D7E0u;
    {
        const bool branch_taken_0x17d7e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 23));
        if (branch_taken_0x17d7e0) {
            ctx->pc = 0x17D7E4u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 20));
            ctx->pc = 0x17D85Cu;
            goto label_17d85c;
        }
    }
    ctx->pc = 0x17D7E8u;
label_17d7e8:
    // 0x17d7e8: 0x121100
    ctx->pc = 0x17d7e8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 4));
label_17d7ec:
    // 0x17d7ec: 0x24130080
    ctx->pc = 0x17d7ecu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 128));
label_17d7f0:
    // 0x17d7f0: 0x1000000d
label_17d7f4:
    if (ctx->pc == 0x17D7F4u) {
        ctx->pc = 0x17D7F4u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->pc = 0x17D7F8u;
        goto label_17d7f8;
    }
    ctx->pc = 0x17D7F0u;
    {
        const bool branch_taken_0x17d7f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17D7F4u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        if (branch_taken_0x17d7f0) {
            ctx->pc = 0x17D828u;
            goto label_17d828;
        }
    }
    ctx->pc = 0x17D7F8u;
label_17d7f8:
    // 0x17d7f8: 0x26520001
    ctx->pc = 0x17d7f8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_17d7fc:
    // 0x17d7fc: 0x8e220010
    ctx->pc = 0x17d7fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_17d800:
    // 0x17d800: 0xae020004
    ctx->pc = 0x17d800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_17d804:
    // 0x17d804: 0x9223000c
    ctx->pc = 0x17d804u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_17d808:
    // 0x17d808: 0xa2030001
    ctx->pc = 0x17d808u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_17d80c:
    // 0x17d80c: 0x6ba20007
    ctx->pc = 0x17d80cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
label_17d810:
    // 0x17d810: 0x6fa20000
    ctx->pc = 0x17d810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
label_17d814:
    // 0x17d814: 0xb202000f
    ctx->pc = 0x17d814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_17d818:
    // 0x17d818: 0xb6020008
    ctx->pc = 0x17d818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17d81c:
    // 0x17d81c: 0x96220002
    ctx->pc = 0x17d81cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_17d820:
    // 0x17d820: 0xa6020002
    ctx->pc = 0x17d820u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_17d824:
    // 0x17d824: 0x26100010
    ctx->pc = 0x17d824u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 16));
label_17d828:
    // 0x17d828: 0x1253000f
label_17d82c:
    if (ctx->pc == 0x17D82Cu) {
        ctx->pc = 0x17D82Cu;
        SET_GPR_U32(ctx, 6, ((uint32_t)32767 << 16));
        ctx->pc = 0x17D830u;
        goto label_17d830;
    }
    ctx->pc = 0x17D828u;
    {
        const bool branch_taken_0x17d828 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 19));
        ctx->pc = 0x17D82Cu;
        SET_GPR_U32(ctx, 6, ((uint32_t)32767 << 16));
        if (branch_taken_0x17d828) {
            ctx->pc = 0x17D868u;
            goto label_17d868;
        }
    }
    ctx->pc = 0x17D830u;
label_17d830:
    // 0x17d830: 0x8e240004
    ctx->pc = 0x17d830u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_17d834:
    // 0x17d834: 0x8e25000c
    ctx->pc = 0x17d834u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_17d838:
    // 0x17d838: 0x34c6ffff
    ctx->pc = 0x17d838u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 65535));
label_17d83c:
    // 0x17d83c: 0x8c830000
    ctx->pc = 0x17d83cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17d840:
    // 0x17d840: 0x8c620018
    ctx->pc = 0x17d840u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_17d844:
    // 0x17d844: 0x40f809
label_17d848:
    if (ctx->pc == 0x17D848u) {
        ctx->pc = 0x17D848u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17D84Cu;
        goto label_17d84c;
    }
    ctx->pc = 0x17D844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17D84Cu);
        ctx->pc = 0x17D848u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17D790u: goto label_17d790;
            case 0x17D794u: goto label_17d794;
            case 0x17D798u: goto label_17d798;
            case 0x17D79Cu: goto label_17d79c;
            case 0x17D7A0u: goto label_17d7a0;
            case 0x17D7A4u: goto label_17d7a4;
            case 0x17D7A8u: goto label_17d7a8;
            case 0x17D7ACu: goto label_17d7ac;
            case 0x17D7B0u: goto label_17d7b0;
            case 0x17D7B4u: goto label_17d7b4;
            case 0x17D7B8u: goto label_17d7b8;
            case 0x17D7BCu: goto label_17d7bc;
            case 0x17D7C0u: goto label_17d7c0;
            case 0x17D7C4u: goto label_17d7c4;
            case 0x17D7C8u: goto label_17d7c8;
            case 0x17D7CCu: goto label_17d7cc;
            case 0x17D7D0u: goto label_17d7d0;
            case 0x17D7D4u: goto label_17d7d4;
            case 0x17D7D8u: goto label_17d7d8;
            case 0x17D7DCu: goto label_17d7dc;
            case 0x17D7E0u: goto label_17d7e0;
            case 0x17D7E4u: goto label_17d7e4;
            case 0x17D7E8u: goto label_17d7e8;
            case 0x17D7ECu: goto label_17d7ec;
            case 0x17D7F0u: goto label_17d7f0;
            case 0x17D7F4u: goto label_17d7f4;
            case 0x17D7F8u: goto label_17d7f8;
            case 0x17D7FCu: goto label_17d7fc;
            case 0x17D800u: goto label_17d800;
            case 0x17D804u: goto label_17d804;
            case 0x17D808u: goto label_17d808;
            case 0x17D80Cu: goto label_17d80c;
            case 0x17D810u: goto label_17d810;
            case 0x17D814u: goto label_17d814;
            case 0x17D818u: goto label_17d818;
            case 0x17D81Cu: goto label_17d81c;
            case 0x17D820u: goto label_17d820;
            case 0x17D824u: goto label_17d824;
            case 0x17D828u: goto label_17d828;
            case 0x17D82Cu: goto label_17d82c;
            case 0x17D830u: goto label_17d830;
            case 0x17D834u: goto label_17d834;
            case 0x17D838u: goto label_17d838;
            case 0x17D83Cu: goto label_17d83c;
            case 0x17D840u: goto label_17d840;
            case 0x17D844u: goto label_17d844;
            case 0x17D848u: goto label_17d848;
            case 0x17D84Cu: goto label_17d84c;
            case 0x17D850u: goto label_17d850;
            case 0x17D854u: goto label_17d854;
            case 0x17D858u: goto label_17d858;
            case 0x17D85Cu: goto label_17d85c;
            case 0x17D860u: goto label_17d860;
            case 0x17D864u: goto label_17d864;
            case 0x17D868u: goto label_17d868;
            case 0x17D86Cu: goto label_17d86c;
            case 0x17D870u: goto label_17d870;
            case 0x17D874u: goto label_17d874;
            case 0x17D878u: goto label_17d878;
            case 0x17D87Cu: goto label_17d87c;
            case 0x17D880u: goto label_17d880;
            case 0x17D884u: goto label_17d884;
            case 0x17D888u: goto label_17d888;
            case 0x17D88Cu: goto label_17d88c;
            case 0x17D890u: goto label_17d890;
            case 0x17D894u: goto label_17d894;
            case 0x17D898u: goto label_17d898;
            case 0x17D89Cu: goto label_17d89c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17D84Cu; }
            if (ctx->pc != 0x17D84Cu) { return; }
        }
    }
    ctx->pc = 0x17D84Cu;
label_17d84c:
    // 0x17d84c: 0x8fa30004
    ctx->pc = 0x17d84cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_17d850:
    // 0x17d850: 0x5460ffe9
label_17d854:
    if (ctx->pc == 0x17D854u) {
        ctx->pc = 0x17D854u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x17D858u;
        goto label_17d858;
    }
    ctx->pc = 0x17D850u;
    {
        const bool branch_taken_0x17d850 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x17d850) {
            ctx->pc = 0x17D854u;
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->pc = 0x17D7F8u;
            goto label_17d7f8;
        }
    }
    ctx->pc = 0x17D858u;
label_17d858:
    // 0x17d858: 0x26310014
    ctx->pc = 0x17d858u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 20));
label_17d85c:
    // 0x17d85c: 0x236102a
    ctx->pc = 0x17d85cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 22)));
label_17d860:
    // 0x17d860: 0x5440ffdf
label_17d864:
    if (ctx->pc == 0x17D864u) {
        ctx->pc = 0x17D864u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x17D868u;
        goto label_17d868;
    }
    ctx->pc = 0x17D860u;
    {
        const bool branch_taken_0x17d860 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17d860) {
            ctx->pc = 0x17D864u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x17D7E0u;
            goto label_17d7e0;
        }
    }
    ctx->pc = 0x17D868u;
label_17d868:
    // 0x17d868: 0xc05efc2
label_17d86c:
    if (ctx->pc == 0x17D86Cu) {
        ctx->pc = 0x17D870u;
        goto label_17d870;
    }
    ctx->pc = 0x17D868u;
    SET_GPR_U32(ctx, 31, 0x17D870u);
    ctx->pc = 0x17BF08u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJCRS_Unlock_0x17bf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D870u; }
        else if (ctx->pc != 0x17D870u) { ctx->pc = 0x17D870u; }
    }
    if (ctx->pc != 0x17D870u) { return; }
    ctx->pc = 0x17D870u;
label_17d870:
    // 0x17d870: 0xaeb20000
    ctx->pc = 0x17d870u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 18));
label_17d874:
    // 0x17d874: 0xdfbf0090
    ctx->pc = 0x17d874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_17d878:
    // 0x17d878: 0xdfb70080
    ctx->pc = 0x17d878u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_17d87c:
    // 0x17d87c: 0xdfb60070
    ctx->pc = 0x17d87cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_17d880:
    // 0x17d880: 0xdfb50060
    ctx->pc = 0x17d880u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_17d884:
    // 0x17d884: 0xdfb40050
    ctx->pc = 0x17d884u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_17d888:
    // 0x17d888: 0xdfb30040
    ctx->pc = 0x17d888u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_17d88c:
    // 0x17d88c: 0xdfb20030
    ctx->pc = 0x17d88cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17d890:
    // 0x17d890: 0xdfb10020
    ctx->pc = 0x17d890u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17d894:
    // 0x17d894: 0xdfb00010
    ctx->pc = 0x17d894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17d898:
    // 0x17d898: 0x3e00008
label_17d89c:
    if (ctx->pc == 0x17D89Cu) {
        ctx->pc = 0x17D89Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x17D8A0u;
        goto label_fallthrough_0x17d898;
    }
    ctx->pc = 0x17D898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D89Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17D790u: goto label_17d790;
            case 0x17D794u: goto label_17d794;
            case 0x17D798u: goto label_17d798;
            case 0x17D79Cu: goto label_17d79c;
            case 0x17D7A0u: goto label_17d7a0;
            case 0x17D7A4u: goto label_17d7a4;
            case 0x17D7A8u: goto label_17d7a8;
            case 0x17D7ACu: goto label_17d7ac;
            case 0x17D7B0u: goto label_17d7b0;
            case 0x17D7B4u: goto label_17d7b4;
            case 0x17D7B8u: goto label_17d7b8;
            case 0x17D7BCu: goto label_17d7bc;
            case 0x17D7C0u: goto label_17d7c0;
            case 0x17D7C4u: goto label_17d7c4;
            case 0x17D7C8u: goto label_17d7c8;
            case 0x17D7CCu: goto label_17d7cc;
            case 0x17D7D0u: goto label_17d7d0;
            case 0x17D7D4u: goto label_17d7d4;
            case 0x17D7D8u: goto label_17d7d8;
            case 0x17D7DCu: goto label_17d7dc;
            case 0x17D7E0u: goto label_17d7e0;
            case 0x17D7E4u: goto label_17d7e4;
            case 0x17D7E8u: goto label_17d7e8;
            case 0x17D7ECu: goto label_17d7ec;
            case 0x17D7F0u: goto label_17d7f0;
            case 0x17D7F4u: goto label_17d7f4;
            case 0x17D7F8u: goto label_17d7f8;
            case 0x17D7FCu: goto label_17d7fc;
            case 0x17D800u: goto label_17d800;
            case 0x17D804u: goto label_17d804;
            case 0x17D808u: goto label_17d808;
            case 0x17D80Cu: goto label_17d80c;
            case 0x17D810u: goto label_17d810;
            case 0x17D814u: goto label_17d814;
            case 0x17D818u: goto label_17d818;
            case 0x17D81Cu: goto label_17d81c;
            case 0x17D820u: goto label_17d820;
            case 0x17D824u: goto label_17d824;
            case 0x17D828u: goto label_17d828;
            case 0x17D82Cu: goto label_17d82c;
            case 0x17D830u: goto label_17d830;
            case 0x17D834u: goto label_17d834;
            case 0x17D838u: goto label_17d838;
            case 0x17D83Cu: goto label_17d83c;
            case 0x17D840u: goto label_17d840;
            case 0x17D844u: goto label_17d844;
            case 0x17D848u: goto label_17d848;
            case 0x17D84Cu: goto label_17d84c;
            case 0x17D850u: goto label_17d850;
            case 0x17D854u: goto label_17d854;
            case 0x17D858u: goto label_17d858;
            case 0x17D85Cu: goto label_17d85c;
            case 0x17D860u: goto label_17d860;
            case 0x17D864u: goto label_17d864;
            case 0x17D868u: goto label_17d868;
            case 0x17D86Cu: goto label_17d86c;
            case 0x17D870u: goto label_17d870;
            case 0x17D874u: goto label_17d874;
            case 0x17D878u: goto label_17d878;
            case 0x17D87Cu: goto label_17d87c;
            case 0x17D880u: goto label_17d880;
            case 0x17D884u: goto label_17d884;
            case 0x17D888u: goto label_17d888;
            case 0x17D88Cu: goto label_17d88c;
            case 0x17D890u: goto label_17d890;
            case 0x17D894u: goto label_17d894;
            case 0x17D898u: goto label_17d898;
            case 0x17D89Cu: goto label_17d89c;
            default: break;
        }
        return;
    }
label_fallthrough_0x17d898:
    ctx->pc = 0x17D8A0u;
}
