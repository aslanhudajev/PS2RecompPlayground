#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ItemLineCollide
// Address: 0x257730 - 0x2579ac
void ItemLineCollide_0x257730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x257730u;

label_257730:
    // 0x257730: 0x27bdff60
    ctx->pc = 0x257730u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
label_257734:
    // 0x257734: 0xffbf0070
    ctx->pc = 0x257734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_257738:
    // 0x257738: 0xffb50060
    ctx->pc = 0x257738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_25773c:
    // 0x25773c: 0xffb40050
    ctx->pc = 0x25773cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_257740:
    // 0x257740: 0xffb30040
    ctx->pc = 0x257740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_257744:
    // 0x257744: 0xffb20030
    ctx->pc = 0x257744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_257748:
    // 0x257748: 0xffb10020
    ctx->pc = 0x257748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_25774c:
    // 0x25774c: 0xffb00010
    ctx->pc = 0x25774cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_257750:
    // 0x257750: 0xe7b60090
    ctx->pc = 0x257750u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_257754:
    // 0x257754: 0xe7b50088
    ctx->pc = 0x257754u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_257758:
    // 0x257758: 0xe7b40080
    ctx->pc = 0x257758u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_25775c:
    // 0x25775c: 0x80902d
    ctx->pc = 0x25775cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_257760:
    // 0x257760: 0xa0a02d
    ctx->pc = 0x257760u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_257764:
    // 0x257764: 0x46006506
    ctx->pc = 0x257764u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_257768:
    // 0x257768: 0xe0a82d
    ctx->pc = 0x257768u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_25776c:
    // 0x25776c: 0x4480b000
    ctx->pc = 0x25776cu;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 0);
label_257770:
    // 0x257770: 0x10c0000d
label_257774:
    if (ctx->pc == 0x257774u) {
        ctx->pc = 0x257774u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x257778u;
        goto label_257778;
    }
    ctx->pc = 0x257770u;
    {
        const bool branch_taken_0x257770 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x257774u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x257770) {
            ctx->pc = 0x2577A8u;
            goto label_2577a8;
        }
    }
    ctx->pc = 0x257778u;
label_257778:
    // 0x257778: 0xc4cc0000
    ctx->pc = 0x257778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_25777c:
    // 0x25777c: 0xc6400000
    ctx->pc = 0x25777cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257780:
    // 0x257780: 0x46006301
    ctx->pc = 0x257780u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_257784:
    // 0x257784: 0xe7ac0000
    ctx->pc = 0x257784u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_257788:
    // 0x257788: 0xe7b60004
    ctx->pc = 0x257788u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_25778c:
    // 0x25778c: 0xc4cd0008
    ctx->pc = 0x25778cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_257790:
    // 0x257790: 0xc6400008
    ctx->pc = 0x257790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257794:
    // 0x257794: 0x46006b41
    ctx->pc = 0x257794u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
label_257798:
    // 0x257798: 0xc0b5c34
label_25779c:
    if (ctx->pc == 0x25779Cu) {
        ctx->pc = 0x25779Cu;
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->pc = 0x2577A0u;
        goto label_2577a0;
    }
    ctx->pc = 0x257798u;
    SET_GPR_U32(ctx, 31, 0x2577A0u);
    ctx->pc = 0x25779Cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2577A0u; }
    }
    if (ctx->pc != 0x2577A0u) { return; }
    ctx->pc = 0x2577A0u;
label_2577a0:
    // 0x2577a0: 0x10000004
label_2577a4:
    if (ctx->pc == 0x2577A4u) {
        ctx->pc = 0x2577A4u;
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x2577A8u;
        goto label_2577a8;
    }
    ctx->pc = 0x2577A0u;
    {
        const bool branch_taken_0x2577a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2577A4u;
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x2577a0) {
            ctx->pc = 0x2577B4u;
            goto label_2577b4;
        }
    }
    ctx->pc = 0x2577A8u;
label_2577a8:
    // 0x2577a8: 0x3c016258
    ctx->pc = 0x2577a8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)25176 << 16));
label_2577ac:
    // 0x2577ac: 0x3421d727
    ctx->pc = 0x2577acu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55079));
label_2577b0:
    // 0x2577b0: 0x4481a800
    ctx->pc = 0x2577b0u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
label_2577b4:
    // 0x2577b4: 0x3c020034
    ctx->pc = 0x2577b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2577b8:
    // 0x2577b8: 0x8c42cd98
    ctx->pc = 0x2577b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
label_2577bc:
    // 0x2577bc: 0x1840006e
label_2577c0:
    if (ctx->pc == 0x2577C0u) {
        ctx->pc = 0x2577C0u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2577C4u;
        goto label_2577c4;
    }
    ctx->pc = 0x2577BCu;
    {
        const bool branch_taken_0x2577bc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2577C0u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2577bc) {
            ctx->pc = 0x257978u;
            goto label_257978;
        }
    }
    ctx->pc = 0x2577C4u;
label_2577c4:
    // 0x2577c4: 0x3c030034
    ctx->pc = 0x2577c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_2577c8:
    // 0x2577c8: 0x24020110
    ctx->pc = 0x2577c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 272));
label_2577cc:
    // 0x2577cc: 0x2221018
    ctx->pc = 0x2577ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2577d0:
    // 0x2577d0: 0x8c63cd94
    ctx->pc = 0x2577d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294954388)));
label_2577d4:
    // 0x2577d4: 0x438021
    ctx->pc = 0x2577d4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2577d8:
    // 0x2577d8: 0x860300d8
    ctx->pc = 0x2577d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 216)));
label_2577dc:
    // 0x2577dc: 0x2402ffff
    ctx->pc = 0x2577dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2577e0:
    // 0x2577e0: 0x50620060
label_2577e4:
    if (ctx->pc == 0x2577E4u) {
        ctx->pc = 0x2577E4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x2577E8u;
        goto label_2577e8;
    }
    ctx->pc = 0x2577E0u;
    {
        const bool branch_taken_0x2577e0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2577e0) {
            ctx->pc = 0x2577E4u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x257964u;
            goto label_257964;
        }
    }
    ctx->pc = 0x2577E8u;
label_2577e8:
    // 0x2577e8: 0x8e020000
    ctx->pc = 0x2577e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2577ec:
    // 0x2577ec: 0x8c430004
    ctx->pc = 0x2577ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2577f0:
    // 0x2577f0: 0x8c440000
    ctx->pc = 0x2577f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2577f4:
    // 0x2577f4: 0x24020002
    ctx->pc = 0x2577f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_2577f8:
    // 0x2577f8: 0x10820005
label_2577fc:
    if (ctx->pc == 0x2577FCu) {
        ctx->pc = 0x2577FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x257800u;
        goto label_257800;
    }
    ctx->pc = 0x2577F8u;
    {
        const bool branch_taken_0x2577f8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x2577FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x2577f8) {
            ctx->pc = 0x257810u;
            goto label_257810;
        }
    }
    ctx->pc = 0x257800u;
label_257800:
    // 0x257800: 0x1082000c
label_257804:
    if (ctx->pc == 0x257804u) {
        ctx->pc = 0x257804u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->pc = 0x257808u;
        goto label_257808;
    }
    ctx->pc = 0x257800u;
    {
        const bool branch_taken_0x257800 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x257804u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967256));
        if (branch_taken_0x257800) {
            ctx->pc = 0x257834u;
            goto label_257834;
        }
    }
    ctx->pc = 0x257808u;
label_257808:
    // 0x257808: 0x10000056
label_25780c:
    if (ctx->pc == 0x25780Cu) {
        ctx->pc = 0x25780Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x257810u;
        goto label_257810;
    }
    ctx->pc = 0x257808u;
    {
        const bool branch_taken_0x257808 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25780Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x257808) {
            ctx->pc = 0x257964u;
            goto label_257964;
        }
    }
    ctx->pc = 0x257810u;
label_257810:
    // 0x257810: 0x2402002b
    ctx->pc = 0x257810u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 43));
label_257814:
    // 0x257814: 0x54620053
label_257818:
    if (ctx->pc == 0x257818u) {
        ctx->pc = 0x257818u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x25781Cu;
        goto label_25781c;
    }
    ctx->pc = 0x257814u;
    {
        const bool branch_taken_0x257814 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x257814) {
            ctx->pc = 0x257818u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x257964u;
            goto label_257964;
        }
    }
    ctx->pc = 0x25781Cu;
label_25781c:
    // 0x25781c: 0x820300dc
    ctx->pc = 0x25781cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 220)));
label_257820:
    // 0x257820: 0x24020002
    ctx->pc = 0x257820u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_257824:
    // 0x257824: 0x5062004f
label_257828:
    if (ctx->pc == 0x257828u) {
        ctx->pc = 0x257828u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x25782Cu;
        goto label_25782c;
    }
    ctx->pc = 0x257824u;
    {
        const bool branch_taken_0x257824 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x257824) {
            ctx->pc = 0x257828u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x257964u;
            goto label_257964;
        }
    }
    ctx->pc = 0x25782Cu;
label_25782c:
    // 0x25782c: 0x10000011
label_257830:
    if (ctx->pc == 0x257830u) {
        ctx->pc = 0x257830u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x257834u;
        goto label_257834;
    }
    ctx->pc = 0x25782Cu;
    {
        const bool branch_taken_0x25782c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x257830u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x25782c) {
            ctx->pc = 0x257874u;
            goto label_257874;
        }
    }
    ctx->pc = 0x257834u;
label_257834:
    // 0x257834: 0x2c62000e
    ctx->pc = 0x257834u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 14));
label_257838:
    // 0x257838: 0x1040000d
label_25783c:
    if (ctx->pc == 0x25783Cu) {
        ctx->pc = 0x25783Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x257840u;
        goto label_257840;
    }
    ctx->pc = 0x257838u;
    {
        const bool branch_taken_0x257838 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25783Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x257838) {
            ctx->pc = 0x257870u;
            goto label_257870;
        }
    }
    ctx->pc = 0x257840u;
label_257840:
    // 0x257840: 0x24428b60
    ctx->pc = 0x257840u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937440));
label_257844:
    // 0x257844: 0x31880
    ctx->pc = 0x257844u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_257848:
    // 0x257848: 0x621821
    ctx->pc = 0x257848u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25784c:
    // 0x25784c: 0x8c620000
    ctx->pc = 0x25784cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_257850:
    // 0x257850: 0x400008
label_257854:
    if (ctx->pc == 0x257854u) {
        ctx->pc = 0x257858u;
        goto label_257858;
    }
    ctx->pc = 0x257850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x257730u: goto label_257730;
            case 0x257734u: goto label_257734;
            case 0x257738u: goto label_257738;
            case 0x25773Cu: goto label_25773c;
            case 0x257740u: goto label_257740;
            case 0x257744u: goto label_257744;
            case 0x257748u: goto label_257748;
            case 0x25774Cu: goto label_25774c;
            case 0x257750u: goto label_257750;
            case 0x257754u: goto label_257754;
            case 0x257758u: goto label_257758;
            case 0x25775Cu: goto label_25775c;
            case 0x257760u: goto label_257760;
            case 0x257764u: goto label_257764;
            case 0x257768u: goto label_257768;
            case 0x25776Cu: goto label_25776c;
            case 0x257770u: goto label_257770;
            case 0x257774u: goto label_257774;
            case 0x257778u: goto label_257778;
            case 0x25777Cu: goto label_25777c;
            case 0x257780u: goto label_257780;
            case 0x257784u: goto label_257784;
            case 0x257788u: goto label_257788;
            case 0x25778Cu: goto label_25778c;
            case 0x257790u: goto label_257790;
            case 0x257794u: goto label_257794;
            case 0x257798u: goto label_257798;
            case 0x25779Cu: goto label_25779c;
            case 0x2577A0u: goto label_2577a0;
            case 0x2577A4u: goto label_2577a4;
            case 0x2577A8u: goto label_2577a8;
            case 0x2577ACu: goto label_2577ac;
            case 0x2577B0u: goto label_2577b0;
            case 0x2577B4u: goto label_2577b4;
            case 0x2577B8u: goto label_2577b8;
            case 0x2577BCu: goto label_2577bc;
            case 0x2577C0u: goto label_2577c0;
            case 0x2577C4u: goto label_2577c4;
            case 0x2577C8u: goto label_2577c8;
            case 0x2577CCu: goto label_2577cc;
            case 0x2577D0u: goto label_2577d0;
            case 0x2577D4u: goto label_2577d4;
            case 0x2577D8u: goto label_2577d8;
            case 0x2577DCu: goto label_2577dc;
            case 0x2577E0u: goto label_2577e0;
            case 0x2577E4u: goto label_2577e4;
            case 0x2577E8u: goto label_2577e8;
            case 0x2577ECu: goto label_2577ec;
            case 0x2577F0u: goto label_2577f0;
            case 0x2577F4u: goto label_2577f4;
            case 0x2577F8u: goto label_2577f8;
            case 0x2577FCu: goto label_2577fc;
            case 0x257800u: goto label_257800;
            case 0x257804u: goto label_257804;
            case 0x257808u: goto label_257808;
            case 0x25780Cu: goto label_25780c;
            case 0x257810u: goto label_257810;
            case 0x257814u: goto label_257814;
            case 0x257818u: goto label_257818;
            case 0x25781Cu: goto label_25781c;
            case 0x257820u: goto label_257820;
            case 0x257824u: goto label_257824;
            case 0x257828u: goto label_257828;
            case 0x25782Cu: goto label_25782c;
            case 0x257830u: goto label_257830;
            case 0x257834u: goto label_257834;
            case 0x257838u: goto label_257838;
            case 0x25783Cu: goto label_25783c;
            case 0x257840u: goto label_257840;
            case 0x257844u: goto label_257844;
            case 0x257848u: goto label_257848;
            case 0x25784Cu: goto label_25784c;
            case 0x257850u: goto label_257850;
            case 0x257854u: goto label_257854;
            case 0x257858u: goto label_257858;
            case 0x25785Cu: goto label_25785c;
            case 0x257860u: goto label_257860;
            case 0x257864u: goto label_257864;
            case 0x257868u: goto label_257868;
            case 0x25786Cu: goto label_25786c;
            case 0x257870u: goto label_257870;
            case 0x257874u: goto label_257874;
            case 0x257878u: goto label_257878;
            case 0x25787Cu: goto label_25787c;
            case 0x257880u: goto label_257880;
            case 0x257884u: goto label_257884;
            case 0x257888u: goto label_257888;
            case 0x25788Cu: goto label_25788c;
            case 0x257890u: goto label_257890;
            case 0x257894u: goto label_257894;
            case 0x257898u: goto label_257898;
            case 0x25789Cu: goto label_25789c;
            case 0x2578A0u: goto label_2578a0;
            case 0x2578A4u: goto label_2578a4;
            case 0x2578A8u: goto label_2578a8;
            case 0x2578ACu: goto label_2578ac;
            case 0x2578B0u: goto label_2578b0;
            case 0x2578B4u: goto label_2578b4;
            case 0x2578B8u: goto label_2578b8;
            case 0x2578BCu: goto label_2578bc;
            case 0x2578C0u: goto label_2578c0;
            case 0x2578C4u: goto label_2578c4;
            case 0x2578C8u: goto label_2578c8;
            case 0x2578CCu: goto label_2578cc;
            case 0x2578D0u: goto label_2578d0;
            case 0x2578D4u: goto label_2578d4;
            case 0x2578D8u: goto label_2578d8;
            case 0x2578DCu: goto label_2578dc;
            case 0x2578E0u: goto label_2578e0;
            case 0x2578E4u: goto label_2578e4;
            case 0x2578E8u: goto label_2578e8;
            case 0x2578ECu: goto label_2578ec;
            case 0x2578F0u: goto label_2578f0;
            case 0x2578F4u: goto label_2578f4;
            case 0x2578F8u: goto label_2578f8;
            case 0x2578FCu: goto label_2578fc;
            case 0x257900u: goto label_257900;
            case 0x257904u: goto label_257904;
            case 0x257908u: goto label_257908;
            case 0x25790Cu: goto label_25790c;
            case 0x257910u: goto label_257910;
            case 0x257914u: goto label_257914;
            case 0x257918u: goto label_257918;
            case 0x25791Cu: goto label_25791c;
            case 0x257920u: goto label_257920;
            case 0x257924u: goto label_257924;
            case 0x257928u: goto label_257928;
            case 0x25792Cu: goto label_25792c;
            case 0x257930u: goto label_257930;
            case 0x257934u: goto label_257934;
            case 0x257938u: goto label_257938;
            case 0x25793Cu: goto label_25793c;
            case 0x257940u: goto label_257940;
            case 0x257944u: goto label_257944;
            case 0x257948u: goto label_257948;
            case 0x25794Cu: goto label_25794c;
            case 0x257950u: goto label_257950;
            case 0x257954u: goto label_257954;
            case 0x257958u: goto label_257958;
            case 0x25795Cu: goto label_25795c;
            case 0x257960u: goto label_257960;
            case 0x257964u: goto label_257964;
            case 0x257968u: goto label_257968;
            case 0x25796Cu: goto label_25796c;
            case 0x257970u: goto label_257970;
            case 0x257974u: goto label_257974;
            case 0x257978u: goto label_257978;
            case 0x25797Cu: goto label_25797c;
            case 0x257980u: goto label_257980;
            case 0x257984u: goto label_257984;
            case 0x257988u: goto label_257988;
            case 0x25798Cu: goto label_25798c;
            case 0x257990u: goto label_257990;
            case 0x257994u: goto label_257994;
            case 0x257998u: goto label_257998;
            case 0x25799Cu: goto label_25799c;
            case 0x2579A0u: goto label_2579a0;
            case 0x2579A4u: goto label_2579a4;
            case 0x2579A8u: goto label_2579a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x257858u;
label_257858:
    // 0x257858: 0x860200e4
    ctx->pc = 0x257858u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 228)));
label_25785c:
    // 0x25785c: 0x58400041
label_257860:
    if (ctx->pc == 0x257860u) {
        ctx->pc = 0x257860u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x257864u;
        goto label_257864;
    }
    ctx->pc = 0x25785Cu;
    {
        const bool branch_taken_0x25785c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x25785c) {
            ctx->pc = 0x257860u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x257964u;
            goto label_257964;
        }
    }
    ctx->pc = 0x257864u;
label_257864:
    // 0x257864: 0x860200f2
    ctx->pc = 0x257864u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 242)));
label_257868:
    // 0x257868: 0x5840003e
label_25786c:
    if (ctx->pc == 0x25786Cu) {
        ctx->pc = 0x25786Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x257870u;
        goto label_257870;
    }
    ctx->pc = 0x257868u;
    {
        const bool branch_taken_0x257868 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x257868) {
            ctx->pc = 0x25786Cu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x257964u;
            goto label_257964;
        }
    }
    ctx->pc = 0x257870u;
label_257870:
    // 0x257870: 0x8e020000
    ctx->pc = 0x257870u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_257874:
    // 0x257874: 0x84430008
    ctx->pc = 0x257874u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_257878:
    // 0x257878: 0x24020004
    ctx->pc = 0x257878u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_25787c:
    // 0x25787c: 0x54620013
label_257880:
    if (ctx->pc == 0x257880u) {
        ctx->pc = 0x257880u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x257884u;
        goto label_257884;
    }
    ctx->pc = 0x25787Cu;
    {
        const bool branch_taken_0x25787c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x25787c) {
            ctx->pc = 0x257880u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x2578CCu;
            goto label_2578cc;
        }
    }
    ctx->pc = 0x257884u;
label_257884:
    // 0x257884: 0x200202d
    ctx->pc = 0x257884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_257888:
    // 0x257888: 0x240282d
    ctx->pc = 0x257888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_25788c:
    // 0x25788c: 0x280302d
    ctx->pc = 0x25788cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_257890:
    // 0x257890: 0x4600a306
    ctx->pc = 0x257890u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_257894:
    // 0x257894: 0x382d
    ctx->pc = 0x257894u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_257898:
    // 0x257898: 0xc095d4e
label_25789c:
    if (ctx->pc == 0x25789Cu) {
        ctx->pc = 0x25789Cu;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2578A0u;
        goto label_2578a0;
    }
    ctx->pc = 0x257898u;
    SET_GPR_U32(ctx, 31, 0x2578A0u);
    ctx->pc = 0x25789Cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x257538u;
    {
        const uint32_t __entryPc = ctx->pc;
        ItemObjectCol_0x257538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2578A0u; }
    }
    if (ctx->pc != 0x2578A0u) { return; }
    ctx->pc = 0x2578A0u;
label_2578a0:
    // 0x2578a0: 0x46000064
    ctx->pc = 0x2578a0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
label_2578a4:
    // 0x2578a4: 0x44020800
    ctx->pc = 0x2578a4u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
label_2578a8:
    // 0x2578a8: 0x44820800
    ctx->pc = 0x2578a8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_2578ac:
    // 0x2578ac: 0x46800860
    ctx->pc = 0x2578acu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_2578b0:
    // 0x2578b0: 0x44800000
    ctx->pc = 0x2578b0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2578b4:
    // 0x2578b4: 0x46010036
    ctx->pc = 0x2578b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2578b8:
    // 0x2578b8: 0x0
    ctx->pc = 0x2578b8u;
    // NOP
label_2578bc:
    // 0x2578bc: 0x4500000d
label_2578c0:
    if (ctx->pc == 0x2578C0u) {
        ctx->pc = 0x2578C0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2578C4u;
        goto label_2578c4;
    }
    ctx->pc = 0x2578BCu;
    {
        const bool branch_taken_0x2578bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2578C0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2578bc) {
            ctx->pc = 0x2578F4u;
            goto label_2578f4;
        }
    }
    ctx->pc = 0x2578C4u;
label_2578c4:
    // 0x2578c4: 0x1000000b
label_2578c8:
    if (ctx->pc == 0x2578C8u) {
        ctx->pc = 0x2578C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2578CCu;
        goto label_2578cc;
    }
    ctx->pc = 0x2578C4u;
    {
        const bool branch_taken_0x2578c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2578C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2578c4) {
            ctx->pc = 0x2578F4u;
            goto label_2578f4;
        }
    }
    ctx->pc = 0x2578CCu;
label_2578cc:
    // 0x2578cc: 0xc44c000c
    ctx->pc = 0x2578ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2578d0:
    // 0x2578d0: 0xc44d0010
    ctx->pc = 0x2578d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2578d4:
    // 0x2578d4: 0x26040060
    ctx->pc = 0x2578d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 96));
label_2578d8:
    // 0x2578d8: 0x240282d
    ctx->pc = 0x2578d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2578dc:
    // 0x2578dc: 0x280302d
    ctx->pc = 0x2578dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2578e0:
    // 0x2578e0: 0x3a0382d
    ctx->pc = 0x2578e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2578e4:
    // 0x2578e4: 0x460ca300
    ctx->pc = 0x2578e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
label_2578e8:
    // 0x2578e8: 0x460da340
    ctx->pc = 0x2578e8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[20], ctx->f[13]);
label_2578ec:
    // 0x2578ec: 0xc0a4202
label_2578f0:
    if (ctx->pc == 0x2578F0u) {
        ctx->pc = 0x2578F0u;
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2578F4u;
        goto label_2578f4;
    }
    ctx->pc = 0x2578ECu;
    SET_GPR_U32(ctx, 31, 0x2578F4u);
    ctx->pc = 0x2578F0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x290808u;
    {
        const uint32_t __entryPc = ctx->pc;
        LineCylinderCollide_0x290808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2578F4u; }
    }
    if (ctx->pc != 0x2578F4u) { return; }
    ctx->pc = 0x2578F4u;
label_2578f4:
    // 0x2578f4: 0x10400016
label_2578f8:
    if (ctx->pc == 0x2578F8u) {
        ctx->pc = 0x2578FCu;
        goto label_2578fc;
    }
    ctx->pc = 0x2578F4u;
    {
        const bool branch_taken_0x2578f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2578f4) {
            ctx->pc = 0x257950u;
            goto label_257950;
        }
    }
    ctx->pc = 0x2578FCu;
label_2578fc:
    // 0x2578fc: 0xc60c0060
    ctx->pc = 0x2578fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_257900:
    // 0x257900: 0xc6400000
    ctx->pc = 0x257900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257904:
    // 0x257904: 0x46006301
    ctx->pc = 0x257904u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_257908:
    // 0x257908: 0xe7ac0000
    ctx->pc = 0x257908u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_25790c:
    // 0x25790c: 0xafa00004
    ctx->pc = 0x25790cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_257910:
    // 0x257910: 0xc60d0068
    ctx->pc = 0x257910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_257914:
    // 0x257914: 0xc6400008
    ctx->pc = 0x257914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_257918:
    // 0x257918: 0x46006b41
    ctx->pc = 0x257918u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
label_25791c:
    // 0x25791c: 0xc0b5c34
label_257920:
    if (ctx->pc == 0x257920u) {
        ctx->pc = 0x257920u;
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->pc = 0x257924u;
        goto label_257924;
    }
    ctx->pc = 0x25791Cu;
    SET_GPR_U32(ctx, 31, 0x257924u);
    ctx->pc = 0x257920u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257924u; }
    }
    if (ctx->pc != 0x257924u) { return; }
    ctx->pc = 0x257924u;
label_257924:
    // 0x257924: 0x6600005
label_257928:
    if (ctx->pc == 0x257928u) {
        ctx->pc = 0x25792Cu;
        goto label_25792c;
    }
    ctx->pc = 0x257924u;
    {
        const bool branch_taken_0x257924 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x257924) {
            ctx->pc = 0x25793Cu;
            goto label_25793c;
        }
    }
    ctx->pc = 0x25792Cu;
label_25792c:
    // 0x25792c: 0x4600b036
    ctx->pc = 0x25792cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257930:
    // 0x257930: 0x0
    ctx->pc = 0x257930u;
    // NOP
label_257934:
    // 0x257934: 0x4503000b
label_257938:
    if (ctx->pc == 0x257938u) {
        ctx->pc = 0x257938u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x25793Cu;
        goto label_25793c;
    }
    ctx->pc = 0x257934u;
    {
        const bool branch_taken_0x257934 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257934) {
            ctx->pc = 0x257938u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x257964u;
            goto label_257964;
        }
    }
    ctx->pc = 0x25793Cu;
label_25793c:
    // 0x25793c: 0x4600a834
    ctx->pc = 0x25793cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_257940:
    // 0x257940: 0x0
    ctx->pc = 0x257940u;
    // NOP
label_257944:
    // 0x257944: 0x45030007
label_257948:
    if (ctx->pc == 0x257948u) {
        ctx->pc = 0x257948u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x25794Cu;
        goto label_25794c;
    }
    ctx->pc = 0x257944u;
    {
        const bool branch_taken_0x257944 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x257944) {
            ctx->pc = 0x257948u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x257964u;
            goto label_257964;
        }
    }
    ctx->pc = 0x25794Cu;
label_25794c:
    // 0x25794c: 0x220982d
    ctx->pc = 0x25794cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_257950:
    // 0x257950: 0x6620004
label_257954:
    if (ctx->pc == 0x257954u) {
        ctx->pc = 0x257954u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x257958u;
        goto label_257958;
    }
    ctx->pc = 0x257950u;
    {
        const bool branch_taken_0x257950 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x257950) {
            ctx->pc = 0x257954u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x257964u;
            goto label_257964;
        }
    }
    ctx->pc = 0x257958u;
label_257958:
    // 0x257958: 0x16a00008
label_25795c:
    if (ctx->pc == 0x25795Cu) {
        ctx->pc = 0x25795Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x257960u;
        goto label_257960;
    }
    ctx->pc = 0x257958u;
    {
        const bool branch_taken_0x257958 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        ctx->pc = 0x25795Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x257958) {
            ctx->pc = 0x25797Cu;
            goto label_25797c;
        }
    }
    ctx->pc = 0x257960u;
label_257960:
    // 0x257960: 0x26310001
    ctx->pc = 0x257960u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_257964:
    // 0x257964: 0x3c020034
    ctx->pc = 0x257964u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_257968:
    // 0x257968: 0x8c42cd98
    ctx->pc = 0x257968u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
label_25796c:
    // 0x25796c: 0x222102a
    ctx->pc = 0x25796cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
label_257970:
    // 0x257970: 0x1440ff95
label_257974:
    if (ctx->pc == 0x257974u) {
        ctx->pc = 0x257974u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        ctx->pc = 0x257978u;
        goto label_257978;
    }
    ctx->pc = 0x257970u;
    {
        const bool branch_taken_0x257970 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x257974u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x257970) {
            ctx->pc = 0x2577C8u;
            goto label_2577c8;
        }
    }
    ctx->pc = 0x257978u;
label_257978:
    // 0x257978: 0x260102d
    ctx->pc = 0x257978u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25797c:
    // 0x25797c: 0xdfbf0070
    ctx->pc = 0x25797cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_257980:
    // 0x257980: 0xdfb50060
    ctx->pc = 0x257980u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_257984:
    // 0x257984: 0xdfb40050
    ctx->pc = 0x257984u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_257988:
    // 0x257988: 0xdfb30040
    ctx->pc = 0x257988u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_25798c:
    // 0x25798c: 0xdfb20030
    ctx->pc = 0x25798cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_257990:
    // 0x257990: 0xdfb10020
    ctx->pc = 0x257990u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_257994:
    // 0x257994: 0xdfb00010
    ctx->pc = 0x257994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_257998:
    // 0x257998: 0xc7b60090
    ctx->pc = 0x257998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_25799c:
    // 0x25799c: 0xc7b50088
    ctx->pc = 0x25799cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2579a0:
    // 0x2579a0: 0xc7b40080
    ctx->pc = 0x2579a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2579a4:
    // 0x2579a4: 0x3e00008
label_2579a8:
    if (ctx->pc == 0x2579A8u) {
        ctx->pc = 0x2579A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x2579ACu;
        goto label_fallthrough_0x2579a4;
    }
    ctx->pc = 0x2579A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2579A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x257730u: goto label_257730;
            case 0x257734u: goto label_257734;
            case 0x257738u: goto label_257738;
            case 0x25773Cu: goto label_25773c;
            case 0x257740u: goto label_257740;
            case 0x257744u: goto label_257744;
            case 0x257748u: goto label_257748;
            case 0x25774Cu: goto label_25774c;
            case 0x257750u: goto label_257750;
            case 0x257754u: goto label_257754;
            case 0x257758u: goto label_257758;
            case 0x25775Cu: goto label_25775c;
            case 0x257760u: goto label_257760;
            case 0x257764u: goto label_257764;
            case 0x257768u: goto label_257768;
            case 0x25776Cu: goto label_25776c;
            case 0x257770u: goto label_257770;
            case 0x257774u: goto label_257774;
            case 0x257778u: goto label_257778;
            case 0x25777Cu: goto label_25777c;
            case 0x257780u: goto label_257780;
            case 0x257784u: goto label_257784;
            case 0x257788u: goto label_257788;
            case 0x25778Cu: goto label_25778c;
            case 0x257790u: goto label_257790;
            case 0x257794u: goto label_257794;
            case 0x257798u: goto label_257798;
            case 0x25779Cu: goto label_25779c;
            case 0x2577A0u: goto label_2577a0;
            case 0x2577A4u: goto label_2577a4;
            case 0x2577A8u: goto label_2577a8;
            case 0x2577ACu: goto label_2577ac;
            case 0x2577B0u: goto label_2577b0;
            case 0x2577B4u: goto label_2577b4;
            case 0x2577B8u: goto label_2577b8;
            case 0x2577BCu: goto label_2577bc;
            case 0x2577C0u: goto label_2577c0;
            case 0x2577C4u: goto label_2577c4;
            case 0x2577C8u: goto label_2577c8;
            case 0x2577CCu: goto label_2577cc;
            case 0x2577D0u: goto label_2577d0;
            case 0x2577D4u: goto label_2577d4;
            case 0x2577D8u: goto label_2577d8;
            case 0x2577DCu: goto label_2577dc;
            case 0x2577E0u: goto label_2577e0;
            case 0x2577E4u: goto label_2577e4;
            case 0x2577E8u: goto label_2577e8;
            case 0x2577ECu: goto label_2577ec;
            case 0x2577F0u: goto label_2577f0;
            case 0x2577F4u: goto label_2577f4;
            case 0x2577F8u: goto label_2577f8;
            case 0x2577FCu: goto label_2577fc;
            case 0x257800u: goto label_257800;
            case 0x257804u: goto label_257804;
            case 0x257808u: goto label_257808;
            case 0x25780Cu: goto label_25780c;
            case 0x257810u: goto label_257810;
            case 0x257814u: goto label_257814;
            case 0x257818u: goto label_257818;
            case 0x25781Cu: goto label_25781c;
            case 0x257820u: goto label_257820;
            case 0x257824u: goto label_257824;
            case 0x257828u: goto label_257828;
            case 0x25782Cu: goto label_25782c;
            case 0x257830u: goto label_257830;
            case 0x257834u: goto label_257834;
            case 0x257838u: goto label_257838;
            case 0x25783Cu: goto label_25783c;
            case 0x257840u: goto label_257840;
            case 0x257844u: goto label_257844;
            case 0x257848u: goto label_257848;
            case 0x25784Cu: goto label_25784c;
            case 0x257850u: goto label_257850;
            case 0x257854u: goto label_257854;
            case 0x257858u: goto label_257858;
            case 0x25785Cu: goto label_25785c;
            case 0x257860u: goto label_257860;
            case 0x257864u: goto label_257864;
            case 0x257868u: goto label_257868;
            case 0x25786Cu: goto label_25786c;
            case 0x257870u: goto label_257870;
            case 0x257874u: goto label_257874;
            case 0x257878u: goto label_257878;
            case 0x25787Cu: goto label_25787c;
            case 0x257880u: goto label_257880;
            case 0x257884u: goto label_257884;
            case 0x257888u: goto label_257888;
            case 0x25788Cu: goto label_25788c;
            case 0x257890u: goto label_257890;
            case 0x257894u: goto label_257894;
            case 0x257898u: goto label_257898;
            case 0x25789Cu: goto label_25789c;
            case 0x2578A0u: goto label_2578a0;
            case 0x2578A4u: goto label_2578a4;
            case 0x2578A8u: goto label_2578a8;
            case 0x2578ACu: goto label_2578ac;
            case 0x2578B0u: goto label_2578b0;
            case 0x2578B4u: goto label_2578b4;
            case 0x2578B8u: goto label_2578b8;
            case 0x2578BCu: goto label_2578bc;
            case 0x2578C0u: goto label_2578c0;
            case 0x2578C4u: goto label_2578c4;
            case 0x2578C8u: goto label_2578c8;
            case 0x2578CCu: goto label_2578cc;
            case 0x2578D0u: goto label_2578d0;
            case 0x2578D4u: goto label_2578d4;
            case 0x2578D8u: goto label_2578d8;
            case 0x2578DCu: goto label_2578dc;
            case 0x2578E0u: goto label_2578e0;
            case 0x2578E4u: goto label_2578e4;
            case 0x2578E8u: goto label_2578e8;
            case 0x2578ECu: goto label_2578ec;
            case 0x2578F0u: goto label_2578f0;
            case 0x2578F4u: goto label_2578f4;
            case 0x2578F8u: goto label_2578f8;
            case 0x2578FCu: goto label_2578fc;
            case 0x257900u: goto label_257900;
            case 0x257904u: goto label_257904;
            case 0x257908u: goto label_257908;
            case 0x25790Cu: goto label_25790c;
            case 0x257910u: goto label_257910;
            case 0x257914u: goto label_257914;
            case 0x257918u: goto label_257918;
            case 0x25791Cu: goto label_25791c;
            case 0x257920u: goto label_257920;
            case 0x257924u: goto label_257924;
            case 0x257928u: goto label_257928;
            case 0x25792Cu: goto label_25792c;
            case 0x257930u: goto label_257930;
            case 0x257934u: goto label_257934;
            case 0x257938u: goto label_257938;
            case 0x25793Cu: goto label_25793c;
            case 0x257940u: goto label_257940;
            case 0x257944u: goto label_257944;
            case 0x257948u: goto label_257948;
            case 0x25794Cu: goto label_25794c;
            case 0x257950u: goto label_257950;
            case 0x257954u: goto label_257954;
            case 0x257958u: goto label_257958;
            case 0x25795Cu: goto label_25795c;
            case 0x257960u: goto label_257960;
            case 0x257964u: goto label_257964;
            case 0x257968u: goto label_257968;
            case 0x25796Cu: goto label_25796c;
            case 0x257970u: goto label_257970;
            case 0x257974u: goto label_257974;
            case 0x257978u: goto label_257978;
            case 0x25797Cu: goto label_25797c;
            case 0x257980u: goto label_257980;
            case 0x257984u: goto label_257984;
            case 0x257988u: goto label_257988;
            case 0x25798Cu: goto label_25798c;
            case 0x257990u: goto label_257990;
            case 0x257994u: goto label_257994;
            case 0x257998u: goto label_257998;
            case 0x25799Cu: goto label_25799c;
            case 0x2579A0u: goto label_2579a0;
            case 0x2579A4u: goto label_2579a4;
            case 0x2579A8u: goto label_2579a8;
            default: break;
        }
        return;
    }
label_fallthrough_0x2579a4:
    ctx->pc = 0x2579ACu;
}
