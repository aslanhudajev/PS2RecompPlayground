#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: EnemyCollidePlayer
// Address: 0x2427b0 - 0x242970
void EnemyCollidePlayer_0x2427b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2427b0u;

    // 0x2427b0: 0x27bdff40
    ctx->pc = 0x2427b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2427b4: 0xffbf0090
    ctx->pc = 0x2427b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2427b8: 0xffb60080
    ctx->pc = 0x2427b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2427bc: 0xffb50070
    ctx->pc = 0x2427bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x2427c0: 0xffb40060
    ctx->pc = 0x2427c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2427c4: 0xffb30050
    ctx->pc = 0x2427c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2427c8: 0xffb20040
    ctx->pc = 0x2427c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2427cc: 0xffb10030
    ctx->pc = 0x2427ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2427d0: 0xffb00020
    ctx->pc = 0x2427d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2427d4: 0xe7b600b0
    ctx->pc = 0x2427d4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2427d8: 0xe7b500a8
    ctx->pc = 0x2427d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2427dc: 0xe7b400a0
    ctx->pc = 0x2427dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2427e0: 0xc0a82d
    ctx->pc = 0x2427e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2427e4: 0xe0902d
    ctx->pc = 0x2427e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2427e8: 0x46006586
    ctx->pc = 0x2427e8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x2427ec: 0x46006d46
    ctx->pc = 0x2427ecu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2427f0: 0x3c0147c3
    ctx->pc = 0x2427f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18371 << 16));
    // 0x2427f4: 0x34215000
    ctx->pc = 0x2427f4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 20480));
    // 0x2427f8: 0x4481a000
    ctx->pc = 0x2427f8u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x2427fc: 0x2414ffff
    ctx->pc = 0x2427fcu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x242800: 0x240203b0
    ctx->pc = 0x242800u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 944));
    // 0x242804: 0x822018
    ctx->pc = 0x242804u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x242808: 0x3c020033
    ctx->pc = 0x242808u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x24280c: 0x2442dfd0
    ctx->pc = 0x24280cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x242810: 0x822021
    ctx->pc = 0x242810u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x242814: 0x40034800
    ctx->pc = 0x242814u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x242818: 0x3c02003a
    ctx->pc = 0x242818u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x24281c: 0x8c4221d0
    ctx->pc = 0x24281cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x242820: 0x10a00004
    ctx->pc = 0x242820u;
    {
        const bool branch_taken_0x242820 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x242824u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 888), GPR_U32(ctx, 3));
        if (branch_taken_0x242820) {
            ctx->pc = 0x242834u;
            goto label_242834;
        }
    }
    ctx->pc = 0x242828u;
    // 0x242828: 0x182d
    ctx->pc = 0x242828u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24282c: 0x10000008
    ctx->pc = 0x24282Cu;
    {
        const bool branch_taken_0x24282c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x242830u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x24282c) {
            ctx->pc = 0x242850u;
            goto label_242850;
        }
    }
    ctx->pc = 0x242834u;
label_242834:
    // 0x242834: 0x84820288
    ctx->pc = 0x242834u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 648)));
    // 0x242838: 0x4400040
    ctx->pc = 0x242838u;
    {
        const bool branch_taken_0x242838 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x24283Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x242838) {
            ctx->pc = 0x24293Cu;
            goto label_24293c;
        }
    }
    ctx->pc = 0x242840u;
    // 0x242840: 0xc08dcac
    ctx->pc = 0x242840u;
    SET_GPR_U32(ctx, 31, 0x242848u);
    ctx->pc = 0x2372B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_actual_closest_player_0x2372b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242848u; }
    }
    if (ctx->pc != 0x242848u) { return; }
    ctx->pc = 0x242848u;
    // 0x242848: 0x40982d
    ctx->pc = 0x242848u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24284c: 0x40182d
    ctx->pc = 0x24284cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_242850:
    // 0x242850: 0x60882d
    ctx->pc = 0x242850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242854: 0x24032b00
    ctx->pc = 0x242854u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x242858: 0x2231818
    ctx->pc = 0x242858u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x24285c: 0x3c020032
    ctx->pc = 0x24285cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x242860: 0x24421bc0
    ctx->pc = 0x242860u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x242864: 0x628021
    ctx->pc = 0x242864u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x242868: 0x271102a
    ctx->pc = 0x242868u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 17)));
    // 0x24286c: 0x14400027
    ctx->pc = 0x24286Cu;
    {
        const bool branch_taken_0x24286c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x242870u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x24286c) {
            ctx->pc = 0x24290Cu;
            goto label_24290c;
        }
    }
    ctx->pc = 0x242874u;
    // 0x242874: 0x0
    ctx->pc = 0x242874u;
    // NOP
label_242878:
    // 0x242878: 0x8e0200fc
    ctx->pc = 0x242878u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x24287c: 0x54560020
    ctx->pc = 0x24287Cu;
    {
        const bool branch_taken_0x24287c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 22));
        if (branch_taken_0x24287c) {
            ctx->pc = 0x242880u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x242900u;
            goto label_242900;
        }
    }
    ctx->pc = 0x242884u;
    // 0x242884: 0xc60c0828
    ctx->pc = 0x242884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x242888: 0xc60d082c
    ctx->pc = 0x242888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x24288c: 0x26040070
    ctx->pc = 0x24288cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 112));
    // 0x242890: 0x2a0282d
    ctx->pc = 0x242890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242894: 0x240302d
    ctx->pc = 0x242894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242898: 0x3a0382d
    ctx->pc = 0x242898u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24289c: 0x460cb300
    ctx->pc = 0x24289cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[12]);
    // 0x2428a0: 0x460dab40
    ctx->pc = 0x2428a0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[21], ctx->f[13]);
    // 0x2428a4: 0xc0a4202
    ctx->pc = 0x2428A4u;
    SET_GPR_U32(ctx, 31, 0x2428ACu);
    ctx->pc = 0x2428A8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x290808u;
    {
        const uint32_t __entryPc = ctx->pc;
        LineCylinderCollide_0x290808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2428ACu; }
    }
    if (ctx->pc != 0x2428ACu) { return; }
    ctx->pc = 0x2428ACu;
    // 0x2428ac: 0x10400013
    ctx->pc = 0x2428ACu;
    {
        const bool branch_taken_0x2428ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2428B0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x2428ac) {
            ctx->pc = 0x2428FCu;
            goto label_2428fc;
        }
    }
    ctx->pc = 0x2428B4u;
    // 0x2428b4: 0xc6400000
    ctx->pc = 0x2428b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2428b8: 0x46006301
    ctx->pc = 0x2428b8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2428bc: 0xe7ac0010
    ctx->pc = 0x2428bcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2428c0: 0xc7a00004
    ctx->pc = 0x2428c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2428c4: 0xc6410004
    ctx->pc = 0x2428c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2428c8: 0x46010001
    ctx->pc = 0x2428c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2428cc: 0xe7a00014
    ctx->pc = 0x2428ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2428d0: 0xc7ad0008
    ctx->pc = 0x2428d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2428d4: 0xc6400008
    ctx->pc = 0x2428d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2428d8: 0x46006b41
    ctx->pc = 0x2428d8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x2428dc: 0xc0b5c34
    ctx->pc = 0x2428DCu;
    SET_GPR_U32(ctx, 31, 0x2428E4u);
    ctx->pc = 0x2428E0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2428E4u; }
    }
    if (ctx->pc != 0x2428E4u) { return; }
    ctx->pc = 0x2428E4u;
    // 0x2428e4: 0x46140034
    ctx->pc = 0x2428e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2428e8: 0x0
    ctx->pc = 0x2428e8u;
    // NOP
    // 0x2428ec: 0x45020004
    ctx->pc = 0x2428ECu;
    {
        const bool branch_taken_0x2428ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2428ec) {
            ctx->pc = 0x2428F0u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x242900u;
            goto label_242900;
        }
    }
    ctx->pc = 0x2428F4u;
    // 0x2428f4: 0x220a02d
    ctx->pc = 0x2428f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2428f8: 0x46000506
    ctx->pc = 0x2428f8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2428fc:
    // 0x2428fc: 0x26310001
    ctx->pc = 0x2428fcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_242900:
    // 0x242900: 0x271102a
    ctx->pc = 0x242900u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), GPR_S32(ctx, 17)));
    // 0x242904: 0x1040ffdc
    ctx->pc = 0x242904u;
    {
        const bool branch_taken_0x242904 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x242908u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 11008));
        if (branch_taken_0x242904) {
            ctx->pc = 0x242878u;
            goto label_242878;
        }
    }
    ctx->pc = 0x24290Cu;
label_24290c:
    // 0x24290c: 0x40034800
    ctx->pc = 0x24290cu;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x242910: 0x3c02003a
    ctx->pc = 0x242910u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x242914: 0x8c4421d0
    ctx->pc = 0x242914u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x242918: 0x8c820378
    ctx->pc = 0x242918u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 888)));
    // 0x24291c: 0x621823
    ctx->pc = 0x24291cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x242920: 0x8c820370
    ctx->pc = 0x242920u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 880)));
    // 0x242924: 0x621821
    ctx->pc = 0x242924u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x242928: 0xac830370
    ctx->pc = 0x242928u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 3));
    // 0x24292c: 0x8c820374
    ctx->pc = 0x24292cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 884)));
    // 0x242930: 0x24420001
    ctx->pc = 0x242930u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x242934: 0xac820374
    ctx->pc = 0x242934u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 884), GPR_U32(ctx, 2));
    // 0x242938: 0x280102d
    ctx->pc = 0x242938u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24293c:
    // 0x24293c: 0xdfbf0090
    ctx->pc = 0x24293cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x242940: 0xdfb60080
    ctx->pc = 0x242940u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x242944: 0xdfb50070
    ctx->pc = 0x242944u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x242948: 0xdfb40060
    ctx->pc = 0x242948u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24294c: 0xdfb30050
    ctx->pc = 0x24294cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x242950: 0xdfb20040
    ctx->pc = 0x242950u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x242954: 0xdfb10030
    ctx->pc = 0x242954u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x242958: 0xdfb00020
    ctx->pc = 0x242958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24295c: 0xc7b600b0
    ctx->pc = 0x24295cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x242960: 0xc7b500a8
    ctx->pc = 0x242960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x242964: 0xc7b400a0
    ctx->pc = 0x242964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x242968: 0x3e00008
    ctx->pc = 0x242968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24296Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242834u: goto label_242834;
            case 0x242850u: goto label_242850;
            case 0x242878u: goto label_242878;
            case 0x2428FCu: goto label_2428fc;
            case 0x242900u: goto label_242900;
            case 0x24290Cu: goto label_24290c;
            case 0x24293Cu: goto label_24293c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242970u;
}
