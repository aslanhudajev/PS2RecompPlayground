#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_enemy_collide
// Address: 0x2435e0 - 0x243a04
void do_enemy_collide_0x2435e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2435e0u;

    // 0x2435e0: 0x27bdff50
    ctx->pc = 0x2435e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2435e4: 0xffbf0080
    ctx->pc = 0x2435e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2435e8: 0xffb60070
    ctx->pc = 0x2435e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2435ec: 0xffb50060
    ctx->pc = 0x2435ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2435f0: 0xffb40050
    ctx->pc = 0x2435f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2435f4: 0xffb30040
    ctx->pc = 0x2435f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2435f8: 0xffb20030
    ctx->pc = 0x2435f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2435fc: 0xffb10020
    ctx->pc = 0x2435fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x243600: 0xffb00010
    ctx->pc = 0x243600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x243604: 0xe7b600a0
    ctx->pc = 0x243604u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x243608: 0xe7b50098
    ctx->pc = 0x243608u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x24360c: 0xe7b40090
    ctx->pc = 0x24360cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x243610: 0x80982d
    ctx->pc = 0x243610u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243614: 0x46006546
    ctx->pc = 0x243614u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x243618: 0x240303b0
    ctx->pc = 0x243618u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x24361c: 0x2631818
    ctx->pc = 0x24361cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x243620: 0x3c020033
    ctx->pc = 0x243620u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x243624: 0x2442dfd0
    ctx->pc = 0x243624u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x243628: 0x628021
    ctx->pc = 0x243628u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24362c: 0x3c020031
    ctx->pc = 0x24362cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x243630: 0xc441ffa8
    ctx->pc = 0x243630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243634: 0x3c01c180
    ctx->pc = 0x243634u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49536 << 16));
    // 0x243638: 0x44810000
    ctx->pc = 0x243638u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x24363c: 0x46000d82
    ctx->pc = 0x24363cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x243640: 0x26120224
    ctx->pc = 0x243640u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 548));
    // 0x243644: 0x86150324
    ctx->pc = 0x243644u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x243648: 0xb02d
    ctx->pc = 0x243648u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24364c: 0x40034800
    ctx->pc = 0x24364cu;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x243650: 0x3c02003a
    ctx->pc = 0x243650u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x243654: 0x8c4221d0
    ctx->pc = 0x243654u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x243658: 0xac430368
    ctx->pc = 0x243658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 872), GPR_U32(ctx, 3));
    // 0x24365c: 0x8e030000
    ctx->pc = 0x24365cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x243660: 0x2402001f
    ctx->pc = 0x243660u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
    // 0x243664: 0x50620005
    ctx->pc = 0x243664u;
    {
        const bool branch_taken_0x243664 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x243664) {
            ctx->pc = 0x243668u;
            WRITE16(ADD32(GPR_U32(ctx, 16), 530), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x24367Cu;
            goto label_24367c;
        }
    }
    ctx->pc = 0x24366Cu;
    // 0x24366c: 0x8e02036c
    ctx->pc = 0x24366cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x243670: 0x5c400003
    ctx->pc = 0x243670u;
    {
        const bool branch_taken_0x243670 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x243670) {
            ctx->pc = 0x243674u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 660)));
            ctx->pc = 0x243680u;
            goto label_243680;
        }
    }
    ctx->pc = 0x243678u;
    // 0x243678: 0xa6000212
    ctx->pc = 0x243678u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 530), (uint16_t)GPR_U32(ctx, 0));
label_24367c:
    // 0x24367c: 0x86020294
    ctx->pc = 0x24367cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 660)));
label_243680:
    // 0x243680: 0x54400009
    ctx->pc = 0x243680u;
    {
        const bool branch_taken_0x243680 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x243680) {
            ctx->pc = 0x243684u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->pc = 0x2436A8u;
            goto label_2436a8;
        }
    }
    ctx->pc = 0x243688u;
    // 0x243688: 0x8e0202ac
    ctx->pc = 0x243688u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 684)));
    // 0x24368c: 0x50400006
    ctx->pc = 0x24368Cu;
    {
        const bool branch_taken_0x24368c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x24368c) {
            ctx->pc = 0x243690u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->pc = 0x2436A8u;
            goto label_2436a8;
        }
    }
    ctx->pc = 0x243694u;
    // 0x243694: 0x8c420010
    ctx->pc = 0x243694u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x243698: 0x30421000
    ctx->pc = 0x243698u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4096));
    // 0x24369c: 0x504000a5
    ctx->pc = 0x24369Cu;
    {
        const bool branch_taken_0x24369c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x24369c) {
            ctx->pc = 0x2436A0u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x243934u;
            goto label_243934;
        }
    }
    ctx->pc = 0x2436A4u;
    // 0x2436a4: 0xc614024c
    ctx->pc = 0x2436a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2436a8:
    // 0x2436a8: 0xc6000060
    ctx->pc = 0x2436a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2436ac: 0xe7a00000
    ctx->pc = 0x2436acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2436b0: 0xc6020064
    ctx->pc = 0x2436b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2436b4: 0xc6000068
    ctx->pc = 0x2436b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2436b8: 0xe7a00008
    ctx->pc = 0x2436b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2436bc: 0x3c014000
    ctx->pc = 0x2436bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x2436c0: 0x44810000
    ctx->pc = 0x2436c0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2436c4: 0xc6010230
    ctx->pc = 0x2436c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2436c8: 0x46010001
    ctx->pc = 0x2436c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2436cc: 0x46020000
    ctx->pc = 0x2436ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2436d0: 0xe7a00004
    ctx->pc = 0x2436d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2436d4: 0x86020294
    ctx->pc = 0x2436d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 660)));
    // 0x2436d8: 0x10400011
    ctx->pc = 0x2436D8u;
    {
        const bool branch_taken_0x2436d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2436DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29));
        if (branch_taken_0x2436d8) {
            ctx->pc = 0x243720u;
            goto label_243720;
        }
    }
    ctx->pc = 0x2436E0u;
    // 0x2436e0: 0x8e030000
    ctx->pc = 0x2436e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2436e4: 0x14620009
    ctx->pc = 0x2436E4u;
    {
        const bool branch_taken_0x2436e4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2436E8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2436e4) {
            ctx->pc = 0x24370Cu;
            goto label_24370c;
        }
    }
    ctx->pc = 0x2436ECu;
    // 0x2436ec: 0x3c013f00
    ctx->pc = 0x2436ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2436f0: 0x44816000
    ctx->pc = 0x2436f0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2436f4: 0x3a0282d
    ctx->pc = 0x2436f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2436f8: 0x240302d
    ctx->pc = 0x2436f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2436fc: 0xc090c1c
    ctx->pc = 0x2436FCu;
    SET_GPR_U32(ctx, 31, 0x243704u);
    ctx->pc = 0x243700u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->pc = 0x243070u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyCollideWalls_0x243070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243704u; }
    }
    if (ctx->pc != 0x243704u) { return; }
    ctx->pc = 0x243704u;
    // 0x243704: 0x10000006
    ctx->pc = 0x243704u;
    {
        const bool branch_taken_0x243704 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x243708u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x243704) {
            ctx->pc = 0x243720u;
            goto label_243720;
        }
    }
    ctx->pc = 0x24370Cu;
label_24370c:
    // 0x24370c: 0x3a0282d
    ctx->pc = 0x24370cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243710: 0x240302d
    ctx->pc = 0x243710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243714: 0xc090c1c
    ctx->pc = 0x243714u;
    SET_GPR_U32(ctx, 31, 0x24371Cu);
    ctx->pc = 0x243718u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x243070u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyCollideWalls_0x243070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24371Cu; }
    }
    if (ctx->pc != 0x24371Cu) { return; }
    ctx->pc = 0x24371Cu;
    // 0x24371c: 0x40b02d
    ctx->pc = 0x24371cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_243720:
    // 0x243720: 0x200202d
    ctx->pc = 0x243720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243724: 0x3a0282d
    ctx->pc = 0x243724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243728: 0x240302d
    ctx->pc = 0x243728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24372c: 0x4600a306
    ctx->pc = 0x24372cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x243730: 0x2c0382d
    ctx->pc = 0x243730u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243734: 0xc090c66
    ctx->pc = 0x243734u;
    SET_GPR_U32(ctx, 31, 0x24373Cu);
    ctx->pc = 0x243738u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x243198u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyCollideFloor_0x243198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24373Cu; }
    }
    if (ctx->pc != 0x24373Cu) { return; }
    ctx->pc = 0x24373Cu;
    // 0x24373c: 0x40882d
    ctx->pc = 0x24373cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243740: 0x52200011
    ctx->pc = 0x243740u;
    {
        const bool branch_taken_0x243740 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x243740) {
            ctx->pc = 0x243744u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 684)));
            ctx->pc = 0x243788u;
            goto label_243788;
        }
    }
    ctx->pc = 0x243748u;
    // 0x243748: 0xae1102ac
    ctx->pc = 0x243748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 17));
    // 0x24374c: 0xc6010250
    ctx->pc = 0x24374cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243750: 0x3c014000
    ctx->pc = 0x243750u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x243754: 0x44810000
    ctx->pc = 0x243754u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x243758: 0x46000836
    ctx->pc = 0x243758u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24375c: 0x4500002d
    ctx->pc = 0x24375Cu;
    {
        const bool branch_taken_0x24375c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24375c) {
            ctx->pc = 0x243814u;
            goto label_243814;
        }
    }
    ctx->pc = 0x243764u;
    // 0x243764: 0x8e220010
    ctx->pc = 0x243764u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x243768: 0x30420038
    ctx->pc = 0x243768u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 56));
    // 0x24376c: 0x10400029
    ctx->pc = 0x24376Cu;
    {
        const bool branch_taken_0x24376c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x24376c) {
            ctx->pc = 0x243814u;
            goto label_243814;
        }
    }
    ctx->pc = 0x243774u;
    // 0x243774: 0x44800000
    ctx->pc = 0x243774u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x243778: 0xe6400008
    ctx->pc = 0x243778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x24377c: 0xe6400000
    ctx->pc = 0x24377cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x243780: 0x10000024
    ctx->pc = 0x243780u;
    {
        const bool branch_taken_0x243780 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x243784u;
        SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x243780) {
            ctx->pc = 0x243814u;
            goto label_243814;
        }
    }
    ctx->pc = 0x243788u;
label_243788:
    // 0x243788: 0x10400005
    ctx->pc = 0x243788u;
    {
        const bool branch_taken_0x243788 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x243788) {
            ctx->pc = 0x2437A0u;
            goto label_2437a0;
        }
    }
    ctx->pc = 0x243790u;
    // 0x243790: 0x8c420010
    ctx->pc = 0x243790u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x243794: 0x30421000
    ctx->pc = 0x243794u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4096));
    // 0x243798: 0x1040001e
    ctx->pc = 0x243798u;
    {
        const bool branch_taken_0x243798 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x243798) {
            ctx->pc = 0x243814u;
            goto label_243814;
        }
    }
    ctx->pc = 0x2437A0u;
label_2437a0:
    // 0x2437a0: 0x44800000
    ctx->pc = 0x2437a0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2437a4: 0xe6400008
    ctx->pc = 0x2437a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2437a8: 0xe6400000
    ctx->pc = 0x2437a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2437ac: 0x3c013f00
    ctx->pc = 0x2437acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2437b0: 0x44816000
    ctx->pc = 0x2437b0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2437b4: 0xc60d0250
    ctx->pc = 0x2437b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2437b8: 0x46006807
    ctx->pc = 0x2437b8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[13]);
    // 0x2437bc: 0x3c0140a0
    ctx->pc = 0x2437bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x2437c0: 0x44817000
    ctx->pc = 0x2437c0u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
    // 0x2437c4: 0x3a0202d
    ctx->pc = 0x2437c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2437c8: 0x3c140033
    ctx->pc = 0x2437c8u;
    SET_GPR_U32(ctx, 20, ((uint32_t)51 << 16));
    // 0x2437cc: 0x26854700
    ctx->pc = 0x2437ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 20), 18176));
    // 0x2437d0: 0x460ca302
    ctx->pc = 0x2437d0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x2437d4: 0x460e0381
    ctx->pc = 0x2437d4u;
    ctx->f[14] = FPU_SUB_S(ctx->f[0], ctx->f[14]);
    // 0x2437d8: 0x302d
    ctx->pc = 0x2437d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2437dc: 0xc087b24
    ctx->pc = 0x2437DCu;
    SET_GPR_U32(ctx, 31, 0x2437E4u);
    ctx->pc = 0x2437E0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x21EC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        FloorCollide_0x21ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2437E4u; }
    }
    if (ctx->pc != 0x2437E4u) { return; }
    ctx->pc = 0x2437E4u;
    // 0x2437e4: 0x40882d
    ctx->pc = 0x2437e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2437e8: 0x1220001a
    ctx->pc = 0x2437E8u;
    {
        const bool branch_taken_0x2437e8 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2437ECu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 18176));
        if (branch_taken_0x2437e8) {
            ctx->pc = 0x243854u;
            goto label_243854;
        }
    }
    ctx->pc = 0x2437F0u;
    // 0x2437f0: 0xc4800034
    ctx->pc = 0x2437f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2437f4: 0xc6010230
    ctx->pc = 0x2437f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2437f8: 0x46010000
    ctx->pc = 0x2437f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2437fc: 0xe60002a8
    ctx->pc = 0x2437fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 680), bits); }
    // 0x243800: 0x8e0501f0
    ctx->pc = 0x243800u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 496)));
    // 0x243804: 0x10a00003
    ctx->pc = 0x243804u;
    {
        const bool branch_taken_0x243804 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x243804) {
            ctx->pc = 0x243814u;
            goto label_243814;
        }
    }
    ctx->pc = 0x24380Cu;
    // 0x24380c: 0xc0b549e
    ctx->pc = 0x24380Cu;
    SET_GPR_U32(ctx, 31, 0x243814u);
    ctx->pc = 0x2D5278u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat3_0x2d5278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243814u; }
    }
    if (ctx->pc != 0x243814u) { return; }
    ctx->pc = 0x243814u;
label_243814:
    // 0x243814: 0x12200010
    ctx->pc = 0x243814u;
    {
        const bool branch_taken_0x243814 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x243818u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x243814) {
            ctx->pc = 0x243858u;
            goto label_243858;
        }
    }
    ctx->pc = 0x24381Cu;
    // 0x24381c: 0x8e250028
    ctx->pc = 0x24381cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x243820: 0x10a00009
    ctx->pc = 0x243820u;
    {
        const bool branch_taken_0x243820 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x243824u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x243820) {
            ctx->pc = 0x243848u;
            goto label_243848;
        }
    }
    ctx->pc = 0x243828u;
    // 0x243828: 0x8e220010
    ctx->pc = 0x243828u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x24382c: 0x30421000
    ctx->pc = 0x24382cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4096));
    // 0x243830: 0x10400005
    ctx->pc = 0x243830u;
    {
        const bool branch_taken_0x243830 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x243834u;
        SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
        if (branch_taken_0x243830) {
            ctx->pc = 0x243848u;
            goto label_243848;
        }
    }
    ctx->pc = 0x243838u;
    // 0x243838: 0xc0b3f94
    ctx->pc = 0x243838u;
    SET_GPR_U32(ctx, 31, 0x243840u);
    ctx->pc = 0x24383Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243840u; }
    }
    if (ctx->pc != 0x243840u) { return; }
    ctx->pc = 0x243840u;
    // 0x243840: 0x10000005
    ctx->pc = 0x243840u;
    {
        const bool branch_taken_0x243840 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x243844u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x243840) {
            ctx->pc = 0x243858u;
            goto label_243858;
        }
    }
    ctx->pc = 0x243848u;
label_243848:
    // 0x243848: 0x8e040070
    ctx->pc = 0x243848u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x24384c: 0xc0b3f94
    ctx->pc = 0x24384Cu;
    SET_GPR_U32(ctx, 31, 0x243854u);
    ctx->pc = 0x243850u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 17980)));
    ctx->pc = 0x2CFE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNodeSetParent_0x2cfe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243854u; }
    }
    if (ctx->pc != 0x243854u) { return; }
    ctx->pc = 0x243854u;
label_243854:
    // 0x243854: 0x102d
    ctx->pc = 0x243854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243858:
    // 0x243858: 0x56200001
    ctx->pc = 0x243858u;
    {
        const bool branch_taken_0x243858 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x243858) {
            ctx->pc = 0x24385Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->pc = 0x243860u;
            goto label_243860;
        }
    }
    ctx->pc = 0x243860u;
label_243860:
    // 0x243860: 0xae0202b0
    ctx->pc = 0x243860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 688), GPR_U32(ctx, 2));
    // 0x243864: 0xc64c0000
    ctx->pc = 0x243864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x243868: 0xc0b5c34
    ctx->pc = 0x243868u;
    SET_GPR_U32(ctx, 31, 0x243870u);
    ctx->pc = 0x24386Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243870u; }
    }
    if (ctx->pc != 0x243870u) { return; }
    ctx->pc = 0x243870u;
    // 0x243870: 0x3c013c23
    ctx->pc = 0x243870u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
    // 0x243874: 0x3421d70a
    ctx->pc = 0x243874u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x243878: 0x44810800
    ctx->pc = 0x243878u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x24387c: 0x46010034
    ctx->pc = 0x24387cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243880: 0x0
    ctx->pc = 0x243880u;
    // NOP
    // 0x243884: 0x4502002b
    ctx->pc = 0x243884u;
    {
        const bool branch_taken_0x243884 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243884) {
            ctx->pc = 0x243888u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x243934u;
            goto label_243934;
        }
    }
    ctx->pc = 0x24388Cu;
    // 0x24388c: 0x16a00005
    ctx->pc = 0x24388Cu;
    {
        const bool branch_taken_0x24388c = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        ctx->pc = 0x243890u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x24388c) {
            ctx->pc = 0x2438A4u;
            goto label_2438a4;
        }
    }
    ctx->pc = 0x243894u;
    // 0x243894: 0xc09092c
    ctx->pc = 0x243894u;
    SET_GPR_U32(ctx, 31, 0x24389Cu);
    ctx->pc = 0x243898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2424B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        blocked00_0x2424b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24389Cu; }
    }
    if (ctx->pc != 0x24389Cu) { return; }
    ctx->pc = 0x24389Cu;
    // 0x24389c: 0x10000023
    ctx->pc = 0x24389Cu;
    {
        const bool branch_taken_0x24389c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2438A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x24389c) {
            ctx->pc = 0x24392Cu;
            goto label_24392c;
        }
    }
    ctx->pc = 0x2438A4u;
label_2438a4:
    // 0x2438a4: 0x16a20007
    ctx->pc = 0x2438A4u;
    {
        const bool branch_taken_0x2438a4 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 2));
        ctx->pc = 0x2438A8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x2438a4) {
            ctx->pc = 0x2438C4u;
            goto label_2438c4;
        }
    }
    ctx->pc = 0x2438ACu;
    // 0x2438ac: 0x260202d
    ctx->pc = 0x2438acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2438b0: 0x2405000a
    ctx->pc = 0x2438b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    // 0x2438b4: 0xc090466
    ctx->pc = 0x2438B4u;
    SET_GPR_U32(ctx, 31, 0x2438BCu);
    ctx->pc = 0x2438B8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 60));
    ctx->pc = 0x241198u;
    {
        const uint32_t __entryPc = ctx->pc;
        blocked07_0x241198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2438BCu; }
    }
    if (ctx->pc != 0x2438BCu) { return; }
    ctx->pc = 0x2438BCu;
    // 0x2438bc: 0x1000001b
    ctx->pc = 0x2438BCu;
    {
        const bool branch_taken_0x2438bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2438C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2438bc) {
            ctx->pc = 0x24392Cu;
            goto label_24392c;
        }
    }
    ctx->pc = 0x2438C4u;
label_2438c4:
    // 0x2438c4: 0x16a20007
    ctx->pc = 0x2438C4u;
    {
        const bool branch_taken_0x2438c4 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 2));
        ctx->pc = 0x2438C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x2438c4) {
            ctx->pc = 0x2438E4u;
            goto label_2438e4;
        }
    }
    ctx->pc = 0x2438CCu;
    // 0x2438cc: 0x260202d
    ctx->pc = 0x2438ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2438d0: 0x24050005
    ctx->pc = 0x2438d0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x2438d4: 0xc090350
    ctx->pc = 0x2438D4u;
    SET_GPR_U32(ctx, 31, 0x2438DCu);
    ctx->pc = 0x2438D8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 60));
    ctx->pc = 0x240D40u;
    {
        const uint32_t __entryPc = ctx->pc;
        blocked08_0x240d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2438DCu; }
    }
    if (ctx->pc != 0x2438DCu) { return; }
    ctx->pc = 0x2438DCu;
    // 0x2438dc: 0x10000013
    ctx->pc = 0x2438DCu;
    {
        const bool branch_taken_0x2438dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2438E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2438dc) {
            ctx->pc = 0x24392Cu;
            goto label_24392c;
        }
    }
    ctx->pc = 0x2438E4u;
label_2438e4:
    // 0x2438e4: 0x16a20007
    ctx->pc = 0x2438E4u;
    {
        const bool branch_taken_0x2438e4 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 2));
        ctx->pc = 0x2438E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
        if (branch_taken_0x2438e4) {
            ctx->pc = 0x243904u;
            goto label_243904;
        }
    }
    ctx->pc = 0x2438ECu;
    // 0x2438ec: 0x260202d
    ctx->pc = 0x2438ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2438f0: 0x2405000a
    ctx->pc = 0x2438f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    // 0x2438f4: 0xc090230
    ctx->pc = 0x2438F4u;
    SET_GPR_U32(ctx, 31, 0x2438FCu);
    ctx->pc = 0x2438F8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 60));
    ctx->pc = 0x2408C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        blocked10_0x2408c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2438FCu; }
    }
    if (ctx->pc != 0x2438FCu) { return; }
    ctx->pc = 0x2438FCu;
    // 0x2438fc: 0x1000000b
    ctx->pc = 0x2438FCu;
    {
        const bool branch_taken_0x2438fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x243900u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2438fc) {
            ctx->pc = 0x24392Cu;
            goto label_24392c;
        }
    }
    ctx->pc = 0x243904u;
label_243904:
    // 0x243904: 0x16a20006
    ctx->pc = 0x243904u;
    {
        const bool branch_taken_0x243904 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 2));
        ctx->pc = 0x243908u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x243904) {
            ctx->pc = 0x243920u;
            goto label_243920;
        }
    }
    ctx->pc = 0x24390Cu;
    // 0x24390c: 0x24050003
    ctx->pc = 0x24390cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x243910: 0xc08f914
    ctx->pc = 0x243910u;
    SET_GPR_U32(ctx, 31, 0x243918u);
    ctx->pc = 0x243914u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 30));
    ctx->pc = 0x23E450u;
    {
        const uint32_t __entryPc = ctx->pc;
        blocked20_0x23e450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243918u; }
    }
    if (ctx->pc != 0x243918u) { return; }
    ctx->pc = 0x243918u;
    // 0x243918: 0x10000004
    ctx->pc = 0x243918u;
    {
        const bool branch_taken_0x243918 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24391Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x243918) {
            ctx->pc = 0x24392Cu;
            goto label_24392c;
        }
    }
    ctx->pc = 0x243920u;
label_243920:
    // 0x243920: 0xc08efc2
    ctx->pc = 0x243920u;
    SET_GPR_U32(ctx, 31, 0x243928u);
    ctx->pc = 0x243924u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x23BF08u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeadEnd_0x23bf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243928u; }
    }
    if (ctx->pc != 0x243928u) { return; }
    ctx->pc = 0x243928u;
    // 0x243928: 0x24020001
    ctx->pc = 0x243928u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_24392c:
    // 0x24392c: 0xa6020212
    ctx->pc = 0x24392cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 530), (uint16_t)GPR_U32(ctx, 2));
    // 0x243930: 0xc60002a8
    ctx->pc = 0x243930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243934:
    // 0x243934: 0xc6010044
    ctx->pc = 0x243934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243938: 0x46010501
    ctx->pc = 0x243938u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24393c: 0x3c01c0a0
    ctx->pc = 0x24393cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49312 << 16));
    // 0x243940: 0x44810000
    ctx->pc = 0x243940u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x243944: 0x4600a034
    ctx->pc = 0x243944u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243948: 0x0
    ctx->pc = 0x243948u;
    // NOP
    // 0x24394c: 0x4500000a
    ctx->pc = 0x24394Cu;
    {
        const bool branch_taken_0x24394c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x243950u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24394c) {
            ctx->pc = 0x243978u;
            goto label_243978;
        }
    }
    ctx->pc = 0x243954u;
    // 0x243954: 0x3c0147c3
    ctx->pc = 0x243954u;
    SET_GPR_U32(ctx, 1, ((uint32_t)18371 << 16));
    // 0x243958: 0x34214f80
    ctx->pc = 0x243958u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 20352));
    // 0x24395c: 0x44816000
    ctx->pc = 0x24395cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x243960: 0x2405ffff
    ctx->pc = 0x243960u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x243964: 0x302d
    ctx->pc = 0x243964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243968: 0x382d
    ctx->pc = 0x243968u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24396c: 0x402d
    ctx->pc = 0x24396cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243970: 0xc08e7bc
    ctx->pc = 0x243970u;
    SET_GPR_U32(ctx, 31, 0x243978u);
    ctx->pc = 0x243974u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x239EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        damage_enemy_0x239ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243978u; }
    }
    if (ctx->pc != 0x243978u) { return; }
    ctx->pc = 0x243978u;
label_243978:
    // 0x243978: 0x4616a034
    ctx->pc = 0x243978u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24397c: 0x0
    ctx->pc = 0x24397cu;
    // NOP
    // 0x243980: 0x45030001
    ctx->pc = 0x243980u;
    {
        const bool branch_taken_0x243980 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x243980) {
            ctx->pc = 0x243984u;
            ctx->f[20] = FPU_MOV_S(ctx->f[22]);
            ctx->pc = 0x243988u;
            goto label_243988;
        }
    }
    ctx->pc = 0x243988u;
label_243988:
    // 0x243988: 0xc6400004
    ctx->pc = 0x243988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24398c: 0x4600a000
    ctx->pc = 0x24398cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x243990: 0xe6400004
    ctx->pc = 0x243990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x243994: 0xc6000044
    ctx->pc = 0x243994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243998: 0x4600a000
    ctx->pc = 0x243998u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x24399c: 0xe60002a8
    ctx->pc = 0x24399cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 680), bits); }
    // 0x2439a0: 0x40034800
    ctx->pc = 0x2439a0u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
    // 0x2439a4: 0x3c02003a
    ctx->pc = 0x2439a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2439a8: 0x8c4421d0
    ctx->pc = 0x2439a8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8656)));
    // 0x2439ac: 0x8c820368
    ctx->pc = 0x2439acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 872)));
    // 0x2439b0: 0x621823
    ctx->pc = 0x2439b0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2439b4: 0x8c820360
    ctx->pc = 0x2439b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 864)));
    // 0x2439b8: 0x621821
    ctx->pc = 0x2439b8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2439bc: 0xac830360
    ctx->pc = 0x2439bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 864), GPR_U32(ctx, 3));
    // 0x2439c0: 0x8c820364
    ctx->pc = 0x2439c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 868)));
    // 0x2439c4: 0x24420001
    ctx->pc = 0x2439c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2439c8: 0xac820364
    ctx->pc = 0x2439c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 868), GPR_U32(ctx, 2));
    // 0x2439cc: 0x2c0102d
    ctx->pc = 0x2439ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2439d0: 0xdfbf0080
    ctx->pc = 0x2439d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2439d4: 0xdfb60070
    ctx->pc = 0x2439d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2439d8: 0xdfb50060
    ctx->pc = 0x2439d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2439dc: 0xdfb40050
    ctx->pc = 0x2439dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2439e0: 0xdfb30040
    ctx->pc = 0x2439e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2439e4: 0xdfb20030
    ctx->pc = 0x2439e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2439e8: 0xdfb10020
    ctx->pc = 0x2439e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2439ec: 0xdfb00010
    ctx->pc = 0x2439ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2439f0: 0xc7b600a0
    ctx->pc = 0x2439f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2439f4: 0xc7b50098
    ctx->pc = 0x2439f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2439f8: 0xc7b40090
    ctx->pc = 0x2439f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2439fc: 0x3e00008
    ctx->pc = 0x2439FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243A00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24367Cu: goto label_24367c;
            case 0x243680u: goto label_243680;
            case 0x2436A8u: goto label_2436a8;
            case 0x24370Cu: goto label_24370c;
            case 0x243720u: goto label_243720;
            case 0x243788u: goto label_243788;
            case 0x2437A0u: goto label_2437a0;
            case 0x243814u: goto label_243814;
            case 0x243848u: goto label_243848;
            case 0x243854u: goto label_243854;
            case 0x243858u: goto label_243858;
            case 0x243860u: goto label_243860;
            case 0x2438A4u: goto label_2438a4;
            case 0x2438C4u: goto label_2438c4;
            case 0x2438E4u: goto label_2438e4;
            case 0x243904u: goto label_243904;
            case 0x243920u: goto label_243920;
            case 0x24392Cu: goto label_24392c;
            case 0x243934u: goto label_243934;
            case 0x243978u: goto label_243978;
            case 0x243988u: goto label_243988;
            default: break;
        }
        return;
    }
    ctx->pc = 0x243A04u;
}
