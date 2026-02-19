#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: set_advance
// Address: 0x281718 - 0x2818c4
void set_advance_0x281718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x281718u;

label_281718:
    // 0x281718: 0x27bdffd0
    ctx->pc = 0x281718u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_28171c:
    // 0x28171c: 0xffbf0020
    ctx->pc = 0x28171cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_281720:
    // 0x281720: 0xffb10010
    ctx->pc = 0x281720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_281724:
    // 0x281724: 0xffb00000
    ctx->pc = 0x281724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_281728:
    // 0x281728: 0x80882d
    ctx->pc = 0x281728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28172c:
    // 0x28172c: 0xc0a02c4
label_281730:
    if (ctx->pc == 0x281730u) {
        ctx->pc = 0x281730u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x281734u;
        goto label_281734;
    }
    ctx->pc = 0x28172Cu;
    SET_GPR_U32(ctx, 31, 0x281734u);
    ctx->pc = 0x281730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x280B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_int_0x280b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281734u; }
    }
    if (ctx->pc != 0x281734u) { return; }
    ctx->pc = 0x281734u;
label_281734:
    // 0x281734: 0x1200005f
label_281738:
    if (ctx->pc == 0x281738u) {
        ctx->pc = 0x281738u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x28173Cu;
        goto label_28173c;
    }
    ctx->pc = 0x281734u;
    {
        const bool branch_taken_0x281734 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x281738u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x281734) {
            ctx->pc = 0x2818B4u;
            goto label_2818b4;
        }
    }
    ctx->pc = 0x28173Cu;
label_28173c:
    // 0x28173c: 0x600005d
label_281740:
    if (ctx->pc == 0x281740u) {
        ctx->pc = 0x281740u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 1000));
        ctx->pc = 0x281744u;
        goto label_281744;
    }
    ctx->pc = 0x28173Cu;
    {
        const bool branch_taken_0x28173c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x281740u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 1000));
        if (branch_taken_0x28173c) {
            ctx->pc = 0x2818B4u;
            goto label_2818b4;
        }
    }
    ctx->pc = 0x281744u;
label_281744:
    // 0x281744: 0x1040005b
label_281748:
    if (ctx->pc == 0x281748u) {
        ctx->pc = 0x281748u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 998));
        ctx->pc = 0x28174Cu;
        goto label_28174c;
    }
    ctx->pc = 0x281744u;
    {
        const bool branch_taken_0x281744 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x281748u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 998));
        if (branch_taken_0x281744) {
            ctx->pc = 0x2818B4u;
            goto label_2818b4;
        }
    }
    ctx->pc = 0x28174Cu;
label_28174c:
    // 0x28174c: 0x5440005a
label_281750:
    if (ctx->pc == 0x281750u) {
        ctx->pc = 0x281750u;
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x281754u;
        goto label_281754;
    }
    ctx->pc = 0x28174Cu;
    {
        const bool branch_taken_0x28174c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x28174c) {
            ctx->pc = 0x281750u;
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->pc = 0x2818B8u;
            goto label_2818b8;
        }
    }
    ctx->pc = 0x281754u;
label_281754:
    // 0x281754: 0x8e230000
    ctx->pc = 0x281754u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_281758:
    // 0x281758: 0x2c620005
    ctx->pc = 0x281758u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 5));
label_28175c:
    // 0x28175c: 0x10400055
label_281760:
    if (ctx->pc == 0x281760u) {
        ctx->pc = 0x281760u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x281764u;
        goto label_281764;
    }
    ctx->pc = 0x28175Cu;
    {
        const bool branch_taken_0x28175c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x281760u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x28175c) {
            ctx->pc = 0x2818B4u;
            goto label_2818b4;
        }
    }
    ctx->pc = 0x281764u;
label_281764:
    // 0x281764: 0x2442bf90
    ctx->pc = 0x281764u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950800));
label_281768:
    // 0x281768: 0x31880
    ctx->pc = 0x281768u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_28176c:
    // 0x28176c: 0x621821
    ctx->pc = 0x28176cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_281770:
    // 0x281770: 0x8c620000
    ctx->pc = 0x281770u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_281774:
    // 0x281774: 0x400008
label_281778:
    if (ctx->pc == 0x281778u) {
        ctx->pc = 0x28177Cu;
        goto label_28177c;
    }
    ctx->pc = 0x281774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x281718u: goto label_281718;
            case 0x28171Cu: goto label_28171c;
            case 0x281720u: goto label_281720;
            case 0x281724u: goto label_281724;
            case 0x281728u: goto label_281728;
            case 0x28172Cu: goto label_28172c;
            case 0x281730u: goto label_281730;
            case 0x281734u: goto label_281734;
            case 0x281738u: goto label_281738;
            case 0x28173Cu: goto label_28173c;
            case 0x281740u: goto label_281740;
            case 0x281744u: goto label_281744;
            case 0x281748u: goto label_281748;
            case 0x28174Cu: goto label_28174c;
            case 0x281750u: goto label_281750;
            case 0x281754u: goto label_281754;
            case 0x281758u: goto label_281758;
            case 0x28175Cu: goto label_28175c;
            case 0x281760u: goto label_281760;
            case 0x281764u: goto label_281764;
            case 0x281768u: goto label_281768;
            case 0x28176Cu: goto label_28176c;
            case 0x281770u: goto label_281770;
            case 0x281774u: goto label_281774;
            case 0x281778u: goto label_281778;
            case 0x28177Cu: goto label_28177c;
            case 0x281780u: goto label_281780;
            case 0x281784u: goto label_281784;
            case 0x281788u: goto label_281788;
            case 0x28178Cu: goto label_28178c;
            case 0x281790u: goto label_281790;
            case 0x281794u: goto label_281794;
            case 0x281798u: goto label_281798;
            case 0x28179Cu: goto label_28179c;
            case 0x2817A0u: goto label_2817a0;
            case 0x2817A4u: goto label_2817a4;
            case 0x2817A8u: goto label_2817a8;
            case 0x2817ACu: goto label_2817ac;
            case 0x2817B0u: goto label_2817b0;
            case 0x2817B4u: goto label_2817b4;
            case 0x2817B8u: goto label_2817b8;
            case 0x2817BCu: goto label_2817bc;
            case 0x2817C0u: goto label_2817c0;
            case 0x2817C4u: goto label_2817c4;
            case 0x2817C8u: goto label_2817c8;
            case 0x2817CCu: goto label_2817cc;
            case 0x2817D0u: goto label_2817d0;
            case 0x2817D4u: goto label_2817d4;
            case 0x2817D8u: goto label_2817d8;
            case 0x2817DCu: goto label_2817dc;
            case 0x2817E0u: goto label_2817e0;
            case 0x2817E4u: goto label_2817e4;
            case 0x2817E8u: goto label_2817e8;
            case 0x2817ECu: goto label_2817ec;
            case 0x2817F0u: goto label_2817f0;
            case 0x2817F4u: goto label_2817f4;
            case 0x2817F8u: goto label_2817f8;
            case 0x2817FCu: goto label_2817fc;
            case 0x281800u: goto label_281800;
            case 0x281804u: goto label_281804;
            case 0x281808u: goto label_281808;
            case 0x28180Cu: goto label_28180c;
            case 0x281810u: goto label_281810;
            case 0x281814u: goto label_281814;
            case 0x281818u: goto label_281818;
            case 0x28181Cu: goto label_28181c;
            case 0x281820u: goto label_281820;
            case 0x281824u: goto label_281824;
            case 0x281828u: goto label_281828;
            case 0x28182Cu: goto label_28182c;
            case 0x281830u: goto label_281830;
            case 0x281834u: goto label_281834;
            case 0x281838u: goto label_281838;
            case 0x28183Cu: goto label_28183c;
            case 0x281840u: goto label_281840;
            case 0x281844u: goto label_281844;
            case 0x281848u: goto label_281848;
            case 0x28184Cu: goto label_28184c;
            case 0x281850u: goto label_281850;
            case 0x281854u: goto label_281854;
            case 0x281858u: goto label_281858;
            case 0x28185Cu: goto label_28185c;
            case 0x281860u: goto label_281860;
            case 0x281864u: goto label_281864;
            case 0x281868u: goto label_281868;
            case 0x28186Cu: goto label_28186c;
            case 0x281870u: goto label_281870;
            case 0x281874u: goto label_281874;
            case 0x281878u: goto label_281878;
            case 0x28187Cu: goto label_28187c;
            case 0x281880u: goto label_281880;
            case 0x281884u: goto label_281884;
            case 0x281888u: goto label_281888;
            case 0x28188Cu: goto label_28188c;
            case 0x281890u: goto label_281890;
            case 0x281894u: goto label_281894;
            case 0x281898u: goto label_281898;
            case 0x28189Cu: goto label_28189c;
            case 0x2818A0u: goto label_2818a0;
            case 0x2818A4u: goto label_2818a4;
            case 0x2818A8u: goto label_2818a8;
            case 0x2818ACu: goto label_2818ac;
            case 0x2818B0u: goto label_2818b0;
            case 0x2818B4u: goto label_2818b4;
            case 0x2818B8u: goto label_2818b8;
            case 0x2818BCu: goto label_2818bc;
            case 0x2818C0u: goto label_2818c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28177Cu;
label_28177c:
    // 0x28177c: 0x3c030032
    ctx->pc = 0x28177cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_281780:
    // 0x281780: 0x24020002
    ctx->pc = 0x281780u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_281784:
    // 0x281784: 0xac6207bc
    ctx->pc = 0x281784u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1980), GPR_U32(ctx, 2));
label_281788:
    // 0x281788: 0x3c030032
    ctx->pc = 0x281788u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_28178c:
    // 0x28178c: 0x24020001
    ctx->pc = 0x28178cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_281790:
    // 0x281790: 0xac6207d0
    ctx->pc = 0x281790u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2000), GPR_U32(ctx, 2));
label_281794:
    // 0x281794: 0x282d
    ctx->pc = 0x281794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281798:
    // 0x281798: 0x3c020032
    ctx->pc = 0x281798u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_28179c:
    // 0x28179c: 0x24461bc0
    ctx->pc = 0x28179cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 7104));
label_2817a0:
    // 0x2817a0: 0x3c020032
    ctx->pc = 0x2817a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2817a4:
    // 0x2817a4: 0x24490830
    ctx->pc = 0x2817a4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 2096));
label_2817a8:
    // 0x2817a8: 0x2408000c
    ctx->pc = 0x2817a8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 12));
label_2817ac:
    // 0x2817ac: 0x3c020032
    ctx->pc = 0x2817acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2817b0:
    // 0x2817b0: 0x24470834
    ctx->pc = 0x2817b0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 2100));
label_2817b4:
    // 0x2817b4: 0x3c020032
    ctx->pc = 0x2817b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2817b8:
    // 0x2817b8: 0x24440838
    ctx->pc = 0x2817b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 2104));
label_2817bc:
    // 0x2817bc: 0x0
    ctx->pc = 0x2817bcu;
    // NOP
label_2817c0:
    // 0x2817c0: 0x8cc200fc
    ctx->pc = 0x2817c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 252)));
label_2817c4:
    // 0x2817c4: 0x1040000a
label_2817c8:
    if (ctx->pc == 0x2817C8u) {
        ctx->pc = 0x2817C8u;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        ctx->pc = 0x2817CCu;
        goto label_2817cc;
    }
    ctx->pc = 0x2817C4u;
    {
        const bool branch_taken_0x2817c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2817C8u;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x2817c4) {
            ctx->pc = 0x2817F0u;
            goto label_2817f0;
        }
    }
    ctx->pc = 0x2817CCu;
label_2817cc:
    // 0x2817cc: 0x491821
    ctx->pc = 0x2817ccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_2817d0:
    // 0x2817d0: 0xc4c00050
    ctx->pc = 0x2817d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2817d4:
    // 0x2817d4: 0xe4600000
    ctx->pc = 0x2817d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2817d8:
    // 0x2817d8: 0x471821
    ctx->pc = 0x2817d8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_2817dc:
    // 0x2817dc: 0xc4c00054
    ctx->pc = 0x2817dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2817e0:
    // 0x2817e0: 0xe4600000
    ctx->pc = 0x2817e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2817e4:
    // 0x2817e4: 0x441021
    ctx->pc = 0x2817e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2817e8:
    // 0x2817e8: 0xc4c00058
    ctx->pc = 0x2817e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2817ec:
    // 0x2817ec: 0xe4400000
    ctx->pc = 0x2817ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2817f0:
    // 0x2817f0: 0x24a50001
    ctx->pc = 0x2817f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_2817f4:
    // 0x2817f4: 0x28a20004
    ctx->pc = 0x2817f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
label_2817f8:
    // 0x2817f8: 0x1440fff1
label_2817fc:
    if (ctx->pc == 0x2817FCu) {
        ctx->pc = 0x2817FCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 11008));
        ctx->pc = 0x281800u;
        goto label_281800;
    }
    ctx->pc = 0x2817F8u;
    {
        const bool branch_taken_0x2817f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2817FCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 11008));
        if (branch_taken_0x2817f8) {
            ctx->pc = 0x2817C0u;
            goto label_2817c0;
        }
    }
    ctx->pc = 0x281800u;
label_281800:
    // 0x281800: 0x1000002c
label_281804:
    if (ctx->pc == 0x281804u) {
        ctx->pc = 0x281804u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x281808u;
        goto label_281808;
    }
    ctx->pc = 0x281800u;
    {
        const bool branch_taken_0x281800 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x281804u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x281800) {
            ctx->pc = 0x2818B4u;
            goto label_2818b4;
        }
    }
    ctx->pc = 0x281808u;
label_281808:
    // 0x281808: 0x3c020032
    ctx->pc = 0x281808u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_28180c:
    // 0x28180c: 0x24030001
    ctx->pc = 0x28180cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_281810:
    // 0x281810: 0xac4307bc
    ctx->pc = 0x281810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1980), GPR_U32(ctx, 3));
label_281814:
    // 0x281814: 0x3c020032
    ctx->pc = 0x281814u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_281818:
    // 0x281818: 0x10000025
label_28181c:
    if (ctx->pc == 0x28181Cu) {
        ctx->pc = 0x28181Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 2000), GPR_U32(ctx, 3));
        ctx->pc = 0x281820u;
        goto label_281820;
    }
    ctx->pc = 0x281818u;
    {
        const bool branch_taken_0x281818 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28181Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 2000), GPR_U32(ctx, 3));
        if (branch_taken_0x281818) {
            ctx->pc = 0x2818B0u;
            goto label_2818b0;
        }
    }
    ctx->pc = 0x281820u;
label_281820:
    // 0x281820: 0x3c030032
    ctx->pc = 0x281820u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_281824:
    // 0x281824: 0x1000001e
label_281828:
    if (ctx->pc == 0x281828u) {
        ctx->pc = 0x281828u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x28182Cu;
        goto label_28182c;
    }
    ctx->pc = 0x281824u;
    {
        const bool branch_taken_0x281824 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x281828u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x281824) {
            ctx->pc = 0x2818A0u;
            goto label_2818a0;
        }
    }
    ctx->pc = 0x28182Cu;
label_28182c:
    // 0x28182c: 0x3c020035
    ctx->pc = 0x28182cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_281830:
    // 0x281830: 0x8c42f834
    ctx->pc = 0x281830u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965300)));
label_281834:
    // 0x281834: 0x4410016
label_281838:
    if (ctx->pc == 0x281838u) {
        ctx->pc = 0x281838u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        ctx->pc = 0x28183Cu;
        goto label_28183c;
    }
    ctx->pc = 0x281834u;
    {
        const bool branch_taken_0x281834 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x281838u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x281834) {
            ctx->pc = 0x281890u;
            goto label_281890;
        }
    }
    ctx->pc = 0x28183Cu;
label_28183c:
    // 0x28183c: 0x3c020032
    ctx->pc = 0x28183cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_281840:
    // 0x281840: 0x24461bc0
    ctx->pc = 0x281840u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 7104));
label_281844:
    // 0x281844: 0x8cc200fc
    ctx->pc = 0x281844u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 252)));
label_281848:
    // 0x281848: 0x1440000a
label_28184c:
    if (ctx->pc == 0x28184Cu) {
        ctx->pc = 0x28184Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x281850u;
        goto label_281850;
    }
    ctx->pc = 0x281848u;
    {
        const bool branch_taken_0x281848 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x28184Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x281848) {
            ctx->pc = 0x281874u;
            goto label_281874;
        }
    }
    ctx->pc = 0x281850u;
label_281850:
    // 0x281850: 0x24a50001
    ctx->pc = 0x281850u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_281854:
    // 0x281854: 0x0
    ctx->pc = 0x281854u;
    // NOP
label_281858:
    // 0x281858: 0x28a20004
    ctx->pc = 0x281858u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
label_28185c:
    // 0x28185c: 0x10400004
label_281860:
    if (ctx->pc == 0x281860u) {
        ctx->pc = 0x281860u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 11008));
        ctx->pc = 0x281864u;
        goto label_281864;
    }
    ctx->pc = 0x28185Cu;
    {
        const bool branch_taken_0x28185c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x281860u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 11008));
        if (branch_taken_0x28185c) {
            ctx->pc = 0x281870u;
            goto label_281870;
        }
    }
    ctx->pc = 0x281864u;
label_281864:
    // 0x281864: 0x8cc200fc
    ctx->pc = 0x281864u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 252)));
label_281868:
    // 0x281868: 0x5040fffb
label_28186c:
    if (ctx->pc == 0x28186Cu) {
        ctx->pc = 0x28186Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x281870u;
        goto label_281870;
    }
    ctx->pc = 0x281868u;
    {
        const bool branch_taken_0x281868 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x281868) {
            ctx->pc = 0x28186Cu;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x281858u;
            goto label_281858;
        }
    }
    ctx->pc = 0x281870u;
label_281870:
    // 0x281870: 0x3c030032
    ctx->pc = 0x281870u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_281874:
    // 0x281874: 0x24020003
    ctx->pc = 0x281874u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_281878:
    // 0x281878: 0xac6207bc
    ctx->pc = 0x281878u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1980), GPR_U32(ctx, 2));
label_28187c:
    // 0x28187c: 0x2404ffff
    ctx->pc = 0x28187cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_281880:
    // 0x281880: 0xc0a4586
label_281884:
    if (ctx->pc == 0x281884u) {
        ctx->pc = 0x281884u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 80));
        ctx->pc = 0x281888u;
        goto label_281888;
    }
    ctx->pc = 0x281880u;
    SET_GPR_U32(ctx, 31, 0x281888u);
    ctx->pc = 0x281884u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 80));
    ctx->pc = 0x291618u;
    {
        const uint32_t __entryPc = ctx->pc;
        SaveStage_0x291618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281888u; }
    }
    if (ctx->pc != 0x281888u) { return; }
    ctx->pc = 0x281888u;
label_281888:
    // 0x281888: 0x10000007
label_28188c:
    if (ctx->pc == 0x28188Cu) {
        ctx->pc = 0x28188Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        ctx->pc = 0x281890u;
        goto label_281890;
    }
    ctx->pc = 0x281888u;
    {
        const bool branch_taken_0x281888 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x28188Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x281888) {
            ctx->pc = 0x2818A8u;
            goto label_2818a8;
        }
    }
    ctx->pc = 0x281890u;
label_281890:
    // 0x281890: 0x10000003
label_281894:
    if (ctx->pc == 0x281894u) {
        ctx->pc = 0x281894u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x281898u;
        goto label_281898;
    }
    ctx->pc = 0x281890u;
    {
        const bool branch_taken_0x281890 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x281894u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
        if (branch_taken_0x281890) {
            ctx->pc = 0x2818A0u;
            goto label_2818a0;
        }
    }
    ctx->pc = 0x281898u;
label_281898:
    // 0x281898: 0x3c030032
    ctx->pc = 0x281898u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_28189c:
    // 0x28189c: 0x2402000c
    ctx->pc = 0x28189cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
label_2818a0:
    // 0x2818a0: 0xac6207bc
    ctx->pc = 0x2818a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1980), GPR_U32(ctx, 2));
label_2818a4:
    // 0x2818a4: 0x3c030032
    ctx->pc = 0x2818a4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_2818a8:
    // 0x2818a8: 0x24020001
    ctx->pc = 0x2818a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2818ac:
    // 0x2818ac: 0xac6207d0
    ctx->pc = 0x2818acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2000), GPR_U32(ctx, 2));
label_2818b0:
    // 0x2818b0: 0xdfbf0020
    ctx->pc = 0x2818b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2818b4:
    // 0x2818b4: 0xdfb10010
    ctx->pc = 0x2818b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2818b8:
    // 0x2818b8: 0xdfb00000
    ctx->pc = 0x2818b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2818bc:
    // 0x2818bc: 0x3e00008
label_2818c0:
    if (ctx->pc == 0x2818C0u) {
        ctx->pc = 0x2818C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2818C4u;
        goto label_fallthrough_0x2818bc;
    }
    ctx->pc = 0x2818BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2818C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x281718u: goto label_281718;
            case 0x28171Cu: goto label_28171c;
            case 0x281720u: goto label_281720;
            case 0x281724u: goto label_281724;
            case 0x281728u: goto label_281728;
            case 0x28172Cu: goto label_28172c;
            case 0x281730u: goto label_281730;
            case 0x281734u: goto label_281734;
            case 0x281738u: goto label_281738;
            case 0x28173Cu: goto label_28173c;
            case 0x281740u: goto label_281740;
            case 0x281744u: goto label_281744;
            case 0x281748u: goto label_281748;
            case 0x28174Cu: goto label_28174c;
            case 0x281750u: goto label_281750;
            case 0x281754u: goto label_281754;
            case 0x281758u: goto label_281758;
            case 0x28175Cu: goto label_28175c;
            case 0x281760u: goto label_281760;
            case 0x281764u: goto label_281764;
            case 0x281768u: goto label_281768;
            case 0x28176Cu: goto label_28176c;
            case 0x281770u: goto label_281770;
            case 0x281774u: goto label_281774;
            case 0x281778u: goto label_281778;
            case 0x28177Cu: goto label_28177c;
            case 0x281780u: goto label_281780;
            case 0x281784u: goto label_281784;
            case 0x281788u: goto label_281788;
            case 0x28178Cu: goto label_28178c;
            case 0x281790u: goto label_281790;
            case 0x281794u: goto label_281794;
            case 0x281798u: goto label_281798;
            case 0x28179Cu: goto label_28179c;
            case 0x2817A0u: goto label_2817a0;
            case 0x2817A4u: goto label_2817a4;
            case 0x2817A8u: goto label_2817a8;
            case 0x2817ACu: goto label_2817ac;
            case 0x2817B0u: goto label_2817b0;
            case 0x2817B4u: goto label_2817b4;
            case 0x2817B8u: goto label_2817b8;
            case 0x2817BCu: goto label_2817bc;
            case 0x2817C0u: goto label_2817c0;
            case 0x2817C4u: goto label_2817c4;
            case 0x2817C8u: goto label_2817c8;
            case 0x2817CCu: goto label_2817cc;
            case 0x2817D0u: goto label_2817d0;
            case 0x2817D4u: goto label_2817d4;
            case 0x2817D8u: goto label_2817d8;
            case 0x2817DCu: goto label_2817dc;
            case 0x2817E0u: goto label_2817e0;
            case 0x2817E4u: goto label_2817e4;
            case 0x2817E8u: goto label_2817e8;
            case 0x2817ECu: goto label_2817ec;
            case 0x2817F0u: goto label_2817f0;
            case 0x2817F4u: goto label_2817f4;
            case 0x2817F8u: goto label_2817f8;
            case 0x2817FCu: goto label_2817fc;
            case 0x281800u: goto label_281800;
            case 0x281804u: goto label_281804;
            case 0x281808u: goto label_281808;
            case 0x28180Cu: goto label_28180c;
            case 0x281810u: goto label_281810;
            case 0x281814u: goto label_281814;
            case 0x281818u: goto label_281818;
            case 0x28181Cu: goto label_28181c;
            case 0x281820u: goto label_281820;
            case 0x281824u: goto label_281824;
            case 0x281828u: goto label_281828;
            case 0x28182Cu: goto label_28182c;
            case 0x281830u: goto label_281830;
            case 0x281834u: goto label_281834;
            case 0x281838u: goto label_281838;
            case 0x28183Cu: goto label_28183c;
            case 0x281840u: goto label_281840;
            case 0x281844u: goto label_281844;
            case 0x281848u: goto label_281848;
            case 0x28184Cu: goto label_28184c;
            case 0x281850u: goto label_281850;
            case 0x281854u: goto label_281854;
            case 0x281858u: goto label_281858;
            case 0x28185Cu: goto label_28185c;
            case 0x281860u: goto label_281860;
            case 0x281864u: goto label_281864;
            case 0x281868u: goto label_281868;
            case 0x28186Cu: goto label_28186c;
            case 0x281870u: goto label_281870;
            case 0x281874u: goto label_281874;
            case 0x281878u: goto label_281878;
            case 0x28187Cu: goto label_28187c;
            case 0x281880u: goto label_281880;
            case 0x281884u: goto label_281884;
            case 0x281888u: goto label_281888;
            case 0x28188Cu: goto label_28188c;
            case 0x281890u: goto label_281890;
            case 0x281894u: goto label_281894;
            case 0x281898u: goto label_281898;
            case 0x28189Cu: goto label_28189c;
            case 0x2818A0u: goto label_2818a0;
            case 0x2818A4u: goto label_2818a4;
            case 0x2818A8u: goto label_2818a8;
            case 0x2818ACu: goto label_2818ac;
            case 0x2818B0u: goto label_2818b0;
            case 0x2818B4u: goto label_2818b4;
            case 0x2818B8u: goto label_2818b8;
            case 0x2818BCu: goto label_2818bc;
            case 0x2818C0u: goto label_2818c0;
            default: break;
        }
        return;
    }
label_fallthrough_0x2818bc:
    ctx->pc = 0x2818C4u;
}
