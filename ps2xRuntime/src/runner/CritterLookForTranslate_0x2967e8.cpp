#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterLookForTranslate
// Address: 0x2967e8 - 0x296998
void CritterLookForTranslate_0x2967e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2967e8u;

    // 0x2967e8: 0x27bdff60
    ctx->pc = 0x2967e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2967ec: 0xffbf0080
    ctx->pc = 0x2967ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2967f0: 0xffb70070
    ctx->pc = 0x2967f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2967f4: 0xffb60060
    ctx->pc = 0x2967f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2967f8: 0xffb50050
    ctx->pc = 0x2967f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2967fc: 0xffb40040
    ctx->pc = 0x2967fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x296800: 0xffb30030
    ctx->pc = 0x296800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x296804: 0xffb20020
    ctx->pc = 0x296804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x296808: 0xffb10010
    ctx->pc = 0x296808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29680c: 0xffb00000
    ctx->pc = 0x29680cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296810: 0xe7b50098
    ctx->pc = 0x296810u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x296814: 0xe7b40090
    ctx->pc = 0x296814u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x296818: 0x80802d
    ctx->pc = 0x296818u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29681c: 0x8e020004
    ctx->pc = 0x29681cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x296820: 0x84520110
    ctx->pc = 0x296820u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x296824: 0x8c540124
    ctx->pc = 0x296824u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 2), 292)));
    // 0x296828: 0x3c016258
    ctx->pc = 0x296828u;
    SET_GPR_U32(ctx, 1, ((uint32_t)25176 << 16));
    // 0x29682c: 0x3421d727
    ctx->pc = 0x29682cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55079));
    // 0x296830: 0x4481a800
    ctx->pc = 0x296830u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x296834: 0x8c42005c
    ctx->pc = 0x296834u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x296838: 0x3c030001
    ctx->pc = 0x296838u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x29683c: 0x431024
    ctx->pc = 0x29683cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x296840: 0x10400048
    ctx->pc = 0x296840u;
    {
        const bool branch_taken_0x296840 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x296844u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x296840) {
            ctx->pc = 0x296964u;
            goto label_296964;
        }
    }
    ctx->pc = 0x296848u;
    // 0x296848: 0xc0a6e08
    ctx->pc = 0x296848u;
    SET_GPR_U32(ctx, 31, 0x296850u);
    ctx->pc = 0x29684Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 576));
    ctx->pc = 0x29B820u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterMoveTargetPos_0x29b820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296850u; }
    }
    if (ctx->pc != 0x296850u) { return; }
    ctx->pc = 0x296850u;
    // 0x296850: 0x10400045
    ctx->pc = 0x296850u;
    {
        const bool branch_taken_0x296850 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x296854u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x296850) {
            ctx->pc = 0x296968u;
            goto label_296968;
        }
    }
    ctx->pc = 0x296858u;
    // 0x296858: 0x1a400040
    ctx->pc = 0x296858u;
    {
        const bool branch_taken_0x296858 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x29685Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x296858) {
            ctx->pc = 0x29695Cu;
            goto label_29695c;
        }
    }
    ctx->pc = 0x296860u;
    // 0x296860: 0x24170090
    ctx->pc = 0x296860u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 144));
    // 0x296864: 0x24160038
    ctx->pc = 0x296864u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 56));
    // 0x296868: 0x4480a000
    ctx->pc = 0x296868u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x29686c: 0x3c150031
    ctx->pc = 0x29686cu;
    SET_GPR_U32(ctx, 21, ((uint32_t)49 << 16));
    // 0x296870: 0x2371018
    ctx->pc = 0x296870u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x296874: 0x0
    ctx->pc = 0x296874u;
    // NOP
label_296878:
    // 0x296878: 0x542821
    ctx->pc = 0x296878u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x29687c: 0x8ca30000
    ctx->pc = 0x29687cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x296880: 0x2c620030
    ctx->pc = 0x296880u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 48));
    // 0x296884: 0x54400032
    ctx->pc = 0x296884u;
    {
        const bool branch_taken_0x296884 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x296884) {
            ctx->pc = 0x296888u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x296950u;
            goto label_296950;
        }
    }
    ctx->pc = 0x29688Cu;
    // 0x29688c: 0x2c62003a
    ctx->pc = 0x29688cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 58));
    // 0x296890: 0x5040002f
    ctx->pc = 0x296890u;
    {
        const bool branch_taken_0x296890 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x296890) {
            ctx->pc = 0x296894u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x296950u;
            goto label_296950;
        }
    }
    ctx->pc = 0x296898u;
    // 0x296898: 0x54760005
    ctx->pc = 0x296898u;
    {
        const bool branch_taken_0x296898 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 22));
        if (branch_taken_0x296898) {
            ctx->pc = 0x29689Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->pc = 0x2968B0u;
            goto label_2968b0;
        }
    }
    ctx->pc = 0x2968A0u;
    // 0x2968a0: 0x86020130
    ctx->pc = 0x2968a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x2968a4: 0x442002a
    ctx->pc = 0x2968A4u;
    {
        const bool branch_taken_0x2968a4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2968a4) {
            ctx->pc = 0x2968A8u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x296950u;
            goto label_296950;
        }
    }
    ctx->pc = 0x2968ACu;
    // 0x2968ac: 0x8ca20004
    ctx->pc = 0x2968acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2968b0:
    // 0x2968b0: 0x30420004
    ctx->pc = 0x2968b0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x2968b4: 0x54400026
    ctx->pc = 0x2968B4u;
    {
        const bool branch_taken_0x2968b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2968b4) {
            ctx->pc = 0x2968B8u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x296950u;
            goto label_296950;
        }
    }
    ctx->pc = 0x2968BCu;
    // 0x2968bc: 0x86020136
    ctx->pc = 0x2968bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 310)));
    // 0x2968c0: 0x5440000b
    ctx->pc = 0x2968C0u;
    {
        const bool branch_taken_0x2968c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2968c0) {
            ctx->pc = 0x2968C4u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x2968F0u;
            goto label_2968f0;
        }
    }
    ctx->pc = 0x2968C8u;
    // 0x2968c8: 0x8e020b5c
    ctx->pc = 0x2968c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2908)));
    // 0x2968cc: 0x50400008
    ctx->pc = 0x2968CCu;
    {
        const bool branch_taken_0x2968cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2968cc) {
            ctx->pc = 0x2968D0u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x2968F0u;
            goto label_2968f0;
        }
    }
    ctx->pc = 0x2968D4u;
    // 0x2968d4: 0xc4a00084
    ctx->pc = 0x2968d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2968d8: 0x4600a034
    ctx->pc = 0x2968d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2968dc: 0x0
    ctx->pc = 0x2968dcu;
    // NOP
    // 0x2968e0: 0x45020003
    ctx->pc = 0x2968E0u;
    {
        const bool branch_taken_0x2968e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2968e0) {
            ctx->pc = 0x2968E4u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->pc = 0x2968F0u;
            goto label_2968f0;
        }
    }
    ctx->pc = 0x2968E8u;
    // 0x2968e8: 0x1000001c
    ctx->pc = 0x2968E8u;
    {
        const bool branch_taken_0x2968e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2968ECu;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2968e8) {
            ctx->pc = 0x29695Cu;
            goto label_29695c;
        }
    }
    ctx->pc = 0x2968F0u;
label_2968f0:
    // 0x2968f0: 0x4601a034
    ctx->pc = 0x2968f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2968f4: 0x0
    ctx->pc = 0x2968f4u;
    // NOP
    // 0x2968f8: 0x45000009
    ctx->pc = 0x2968F8u;
    {
        const bool branch_taken_0x2968f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2968FCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x2968f8) {
            ctx->pc = 0x296920u;
            goto label_296920;
        }
    }
    ctx->pc = 0x296900u;
    // 0x296900: 0x2021021
    ctx->pc = 0x296900u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x296904: 0xc440025c
    ctx->pc = 0x296904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296908: 0x46010000
    ctx->pc = 0x296908u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29690c: 0xc6a1ffa4
    ctx->pc = 0x29690cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296910: 0x46000834
    ctx->pc = 0x296910u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x296914: 0x0
    ctx->pc = 0x296914u;
    // NOP
    // 0x296918: 0x4503000d
    ctx->pc = 0x296918u;
    {
        const bool branch_taken_0x296918 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x296918) {
            ctx->pc = 0x29691Cu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x296950u;
            goto label_296950;
        }
    }
    ctx->pc = 0x296920u;
label_296920:
    // 0x296920: 0x200202d
    ctx->pc = 0x296920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296924: 0x24a50060
    ctx->pc = 0x296924u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 96));
    // 0x296928: 0x26060240
    ctx->pc = 0x296928u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 576));
    // 0x29692c: 0xc0a6b02
    ctx->pc = 0x29692Cu;
    SET_GPR_U32(ctx, 31, 0x296934u);
    ctx->pc = 0x296930u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29AC08u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterCalcTarget_0x29ac08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296934u; }
    }
    if (ctx->pc != 0x296934u) { return; }
    ctx->pc = 0x296934u;
    // 0x296934: 0x46150034
    ctx->pc = 0x296934u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x296938: 0x0
    ctx->pc = 0x296938u;
    // NOP
    // 0x29693c: 0x45020004
    ctx->pc = 0x29693Cu;
    {
        const bool branch_taken_0x29693c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29693c) {
            ctx->pc = 0x296940u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x296950u;
            goto label_296950;
        }
    }
    ctx->pc = 0x296944u;
    // 0x296944: 0x220982d
    ctx->pc = 0x296944u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296948: 0x46000546
    ctx->pc = 0x296948u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x29694c: 0x26310001
    ctx->pc = 0x29694cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_296950:
    // 0x296950: 0x232102a
    ctx->pc = 0x296950u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
    // 0x296954: 0x1440ffc8
    ctx->pc = 0x296954u;
    {
        const bool branch_taken_0x296954 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x296958u;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x296954) {
            ctx->pc = 0x296878u;
            goto label_296878;
        }
    }
    ctx->pc = 0x29695Cu;
label_29695c:
    // 0x29695c: 0x6630001
    ctx->pc = 0x29695Cu;
    {
        const bool branch_taken_0x29695c = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x29695c) {
            ctx->pc = 0x296960u;
            WRITE16(ADD32(GPR_U32(ctx, 16), 294), (uint16_t)GPR_U32(ctx, 19));
            ctx->pc = 0x296964u;
            goto label_296964;
        }
    }
    ctx->pc = 0x296964u;
label_296964:
    // 0x296964: 0xdfbf0080
    ctx->pc = 0x296964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_296968:
    // 0x296968: 0xdfb70070
    ctx->pc = 0x296968u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29696c: 0xdfb60060
    ctx->pc = 0x29696cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x296970: 0xdfb50050
    ctx->pc = 0x296970u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x296974: 0xdfb40040
    ctx->pc = 0x296974u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x296978: 0xdfb30030
    ctx->pc = 0x296978u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29697c: 0xdfb20020
    ctx->pc = 0x29697cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296980: 0xdfb10010
    ctx->pc = 0x296980u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296984: 0xdfb00000
    ctx->pc = 0x296984u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296988: 0xc7b50098
    ctx->pc = 0x296988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29698c: 0xc7b40090
    ctx->pc = 0x29698cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x296990: 0x3e00008
    ctx->pc = 0x296990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296994u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x296878u: goto label_296878;
            case 0x2968B0u: goto label_2968b0;
            case 0x2968F0u: goto label_2968f0;
            case 0x296920u: goto label_296920;
            case 0x296950u: goto label_296950;
            case 0x29695Cu: goto label_29695c;
            case 0x296964u: goto label_296964;
            case 0x296968u: goto label_296968;
            default: break;
        }
        return;
    }
    ctx->pc = 0x296998u;
}
