#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoTransporter
// Address: 0x2467b0 - 0x2469e8
void DoTransporter_0x2467b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2467b0u;

    // 0x2467b0: 0x27bdff90
    ctx->pc = 0x2467b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2467b4: 0xffbf0050
    ctx->pc = 0x2467b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2467b8: 0xffb30040
    ctx->pc = 0x2467b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2467bc: 0xffb20030
    ctx->pc = 0x2467bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2467c0: 0xffb10020
    ctx->pc = 0x2467c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2467c4: 0xffb00010
    ctx->pc = 0x2467c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2467c8: 0xe7b40060
    ctx->pc = 0x2467c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2467cc: 0x80802d
    ctx->pc = 0x2467ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2467d0: 0xa0982d
    ctx->pc = 0x2467d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2467d4: 0xc0882d
    ctx->pc = 0x2467d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2467d8: 0x8e020918
    ctx->pc = 0x2467d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2328)));
    // 0x2467dc: 0x18400050
    ctx->pc = 0x2467DCu;
    {
        const bool branch_taken_0x2467dc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2467E0u;
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x2467dc) {
            ctx->pc = 0x246920u;
            goto label_246920;
        }
    }
    ctx->pc = 0x2467E4u;
    // 0x2467e4: 0x40902d
    ctx->pc = 0x2467e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2467e8: 0x3c020031
    ctx->pc = 0x2467e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2467ec: 0x8c42ffbc
    ctx->pc = 0x2467ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x2467f0: 0x21040
    ctx->pc = 0x2467f0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x2467f4: 0x2421023
    ctx->pc = 0x2467f4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2467f8: 0x4410002
    ctx->pc = 0x2467F8u;
    {
        const bool branch_taken_0x2467f8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2467FCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 2328), GPR_U32(ctx, 2));
        if (branch_taken_0x2467f8) {
            ctx->pc = 0x246804u;
            goto label_246804;
        }
    }
    ctx->pc = 0x246800u;
    // 0x246800: 0xae000918
    ctx->pc = 0x246800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2328), GPR_U32(ctx, 0));
label_246804:
    // 0x246804: 0x8e030918
    ctx->pc = 0x246804u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 2328)));
    // 0x246808: 0x2862001e
    ctx->pc = 0x246808u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 30));
    // 0x24680c: 0x14400010
    ctx->pc = 0x24680Cu;
    {
        const bool branch_taken_0x24680c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x246810u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 8));
        if (branch_taken_0x24680c) {
            ctx->pc = 0x246850u;
            goto label_246850;
        }
    }
    ctx->pc = 0x246814u;
    // 0x246814: 0x2462ffe2
    ctx->pc = 0x246814u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967266));
    // 0x246818: 0x22a00
    ctx->pc = 0x246818u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 2), 8));
    // 0x24681c: 0xa22823
    ctx->pc = 0x24681cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x246820: 0x2402001e
    ctx->pc = 0x246820u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
    // 0x246824: 0xa2001a
    ctx->pc = 0x246824u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x246828: 0x2812
    ctx->pc = 0x246828u;
    SET_GPR_U32(ctx, 5, ctx->lo);
    // 0x24682c: 0x50400001
    ctx->pc = 0x24682Cu;
    {
        const bool branch_taken_0x24682c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x24682c) {
            ctx->pc = 0x246830u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x246834u;
            goto label_246834;
        }
    }
    ctx->pc = 0x246834u;
label_246834:
    // 0x246834: 0x240200ff
    ctx->pc = 0x246834u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x246838: 0x8e040080
    ctx->pc = 0x246838u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x24683c: 0x452823
    ctx->pc = 0x24683cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x246840: 0xc0b40c0
    ctx->pc = 0x246840u;
    SET_GPR_U32(ctx, 31, 0x246848u);
    ctx->pc = 0x246844u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246848u; }
    }
    if (ctx->pc != 0x246848u) { return; }
    ctx->pc = 0x246848u;
    // 0x246848: 0x1000000b
    ctx->pc = 0x246848u;
    {
        const bool branch_taken_0x246848 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24684Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 30));
        if (branch_taken_0x246848) {
            ctx->pc = 0x246878u;
            goto label_246878;
        }
    }
    ctx->pc = 0x246850u;
label_246850:
    // 0x246850: 0x432823
    ctx->pc = 0x246850u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x246854: 0x2402001d
    ctx->pc = 0x246854u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29));
    // 0x246858: 0xa2001a
    ctx->pc = 0x246858u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x24685c: 0x2812
    ctx->pc = 0x24685cu;
    SET_GPR_U32(ctx, 5, ctx->lo);
    // 0x246860: 0x50400001
    ctx->pc = 0x246860u;
    {
        const bool branch_taken_0x246860 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x246860) {
            ctx->pc = 0x246864u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x246868u;
            goto label_246868;
        }
    }
    ctx->pc = 0x246868u;
label_246868:
    // 0x246868: 0x8e040080
    ctx->pc = 0x246868u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x24686c: 0xc0b40c0
    ctx->pc = 0x24686Cu;
    SET_GPR_U32(ctx, 31, 0x246874u);
    ctx->pc = 0x246870u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246874u; }
    }
    if (ctx->pc != 0x246874u) { return; }
    ctx->pc = 0x246874u;
    // 0x246874: 0x2a42001e
    ctx->pc = 0x246874u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 30));
label_246878:
    // 0x246878: 0x14400053
    ctx->pc = 0x246878u;
    {
        const bool branch_taken_0x246878 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24687Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x246878) {
            ctx->pc = 0x2469C8u;
            goto label_2469c8;
        }
    }
    ctx->pc = 0x246880u;
    // 0x246880: 0x8e020918
    ctx->pc = 0x246880u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2328)));
    // 0x246884: 0x2842001e
    ctx->pc = 0x246884u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 30));
    // 0x246888: 0x10400049
    ctx->pc = 0x246888u;
    {
        const bool branch_taken_0x246888 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24688Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x246888) {
            ctx->pc = 0x2469B0u;
            goto label_2469b0;
        }
    }
    ctx->pc = 0x246890u;
    // 0x246890: 0xc600091c
    ctx->pc = 0x246890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246894: 0xe7a00000
    ctx->pc = 0x246894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x246898: 0xc6000920
    ctx->pc = 0x246898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24689c: 0xe7a00004
    ctx->pc = 0x24689cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2468a0: 0xc6000924
    ctx->pc = 0x2468a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2468a4: 0xe7a00008
    ctx->pc = 0x2468a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2468a8: 0x282d
    ctx->pc = 0x2468a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2468ac: 0x4600a306
    ctx->pc = 0x2468acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2468b0: 0x3c014080
    ctx->pc = 0x2468b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16512 << 16));
    // 0x2468b4: 0x44816800
    ctx->pc = 0x2468b4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x2468b8: 0x3c01c120
    ctx->pc = 0x2468b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49440 << 16));
    // 0x2468bc: 0x44817000
    ctx->pc = 0x2468bcu;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
    // 0x2468c0: 0x302d
    ctx->pc = 0x2468c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2468c4: 0xc087b24
    ctx->pc = 0x2468C4u;
    SET_GPR_U32(ctx, 31, 0x2468CCu);
    ctx->pc = 0x2468C8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x21EC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        FloorCollide_0x21ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2468CCu; }
    }
    if (ctx->pc != 0x2468CCu) { return; }
    ctx->pc = 0x2468CCu;
    // 0x2468cc: 0xc7a00000
    ctx->pc = 0x2468ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2468d0: 0xc6610000
    ctx->pc = 0x2468d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2468d4: 0x46010001
    ctx->pc = 0x2468d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2468d8: 0xe6200000
    ctx->pc = 0x2468d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2468dc: 0xc7a00008
    ctx->pc = 0x2468dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2468e0: 0xc6610008
    ctx->pc = 0x2468e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2468e4: 0x46010001
    ctx->pc = 0x2468e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2468e8: 0xe6200008
    ctx->pc = 0x2468e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2468ec: 0x3c020032
    ctx->pc = 0x2468ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2468f0: 0xc440fbe4
    ctx->pc = 0x2468f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2468f4: 0xc6010054
    ctx->pc = 0x2468f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2468f8: 0x46010001
    ctx->pc = 0x2468f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2468fc: 0xe6200004
    ctx->pc = 0x2468fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x246900: 0x24020001
    ctx->pc = 0x246900u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x246904: 0xae020914
    ctx->pc = 0x246904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2324), GPR_U32(ctx, 2));
    // 0x246908: 0x24040009
    ctx->pc = 0x246908u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 9));
    // 0x24690c: 0x8e050000
    ctx->pc = 0x24690cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x246910: 0xc0a3a1c
    ctx->pc = 0x246910u;
    SET_GPR_U32(ctx, 31, 0x246918u);
    ctx->pc = 0x246914u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 96));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246918u; }
    }
    if (ctx->pc != 0x246918u) { return; }
    ctx->pc = 0x246918u;
    // 0x246918: 0x1000002b
    ctx->pc = 0x246918u;
    {
        const bool branch_taken_0x246918 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24691Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x246918) {
            ctx->pc = 0x2469C8u;
            goto label_2469c8;
        }
    }
    ctx->pc = 0x246920u;
label_246920:
    // 0x246920: 0xc096d98
    ctx->pc = 0x246920u;
    SET_GPR_U32(ctx, 31, 0x246928u);
    ctx->pc = 0x246924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25B660u;
    {
        const uint32_t __entryPc = ctx->pc;
        player_collis_trans_0x25b660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246928u; }
    }
    if (ctx->pc != 0x246928u) { return; }
    ctx->pc = 0x246928u;
    // 0x246928: 0x40182d
    ctx->pc = 0x246928u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24692c: 0x10600022
    ctx->pc = 0x24692Cu;
    {
        const bool branch_taken_0x24692c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x246930u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2324)));
        if (branch_taken_0x24692c) {
            ctx->pc = 0x2469B8u;
            goto label_2469b8;
        }
    }
    ctx->pc = 0x246934u;
    // 0x246934: 0x1c400024
    ctx->pc = 0x246934u;
    {
        const bool branch_taken_0x246934 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x246938u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x246934) {
            ctx->pc = 0x2469C8u;
            goto label_2469c8;
        }
    }
    ctx->pc = 0x24693Cu;
    // 0x24693c: 0xc4620040
    ctx->pc = 0x24693cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x246940: 0xe7a20000
    ctx->pc = 0x246940u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x246944: 0xc4610044
    ctx->pc = 0x246944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246948: 0xe7a10004
    ctx->pc = 0x246948u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24694c: 0xc4600048
    ctx->pc = 0x24694cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246950: 0xe7a00008
    ctx->pc = 0x246950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x246954: 0xe602091c
    ctx->pc = 0x246954u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2332), bits); }
    // 0x246958: 0xe6010920
    ctx->pc = 0x246958u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2336), bits); }
    // 0x24695c: 0xe6000924
    ctx->pc = 0x24695cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2340), bits); }
    // 0x246960: 0x3a0202d
    ctx->pc = 0x246960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246964: 0xc0b4396
    ctx->pc = 0x246964u;
    SET_GPR_U32(ctx, 31, 0x24696Cu);
    ctx->pc = 0x246968u;
    ctx->f[12] = FPU_NEG_S(ctx->f[20]);
    ctx->pc = 0x2D0E58u;
    {
        const uint32_t __entryPc = ctx->pc;
        PointVisible_0x2d0e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24696Cu; }
    }
    if (ctx->pc != 0x24696Cu) { return; }
    ctx->pc = 0x24696Cu;
    // 0x24696c: 0x10400015
    ctx->pc = 0x24696Cu;
    {
        const bool branch_taken_0x24696c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x246970u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24696c) {
            ctx->pc = 0x2469C4u;
            goto label_2469c4;
        }
    }
    ctx->pc = 0x246974u;
    // 0x246974: 0x282d
    ctx->pc = 0x246974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246978: 0x4600a306
    ctx->pc = 0x246978u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x24697c: 0x3c014080
    ctx->pc = 0x24697cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16512 << 16));
    // 0x246980: 0x44816800
    ctx->pc = 0x246980u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x246984: 0x3c01c120
    ctx->pc = 0x246984u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49440 << 16));
    // 0x246988: 0x44817000
    ctx->pc = 0x246988u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
    // 0x24698c: 0x302d
    ctx->pc = 0x24698cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246990: 0xc087b24
    ctx->pc = 0x246990u;
    SET_GPR_U32(ctx, 31, 0x246998u);
    ctx->pc = 0x246994u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x21EC90u;
    {
        const uint32_t __entryPc = ctx->pc;
        FloorCollide_0x21ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246998u; }
    }
    if (ctx->pc != 0x246998u) { return; }
    ctx->pc = 0x246998u;
    // 0x246998: 0x5040000b
    ctx->pc = 0x246998u;
    {
        const bool branch_taken_0x246998 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x246998) {
            ctx->pc = 0x24699Cu;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x2469C8u;
            goto label_2469c8;
        }
    }
    ctx->pc = 0x2469A0u;
    // 0x2469a0: 0xc0983da
    ctx->pc = 0x2469A0u;
    SET_GPR_U32(ctx, 31, 0x2469A8u);
    ctx->pc = 0x2469A4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x260F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTransport_0x260f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2469A8u; }
    }
    if (ctx->pc != 0x2469A8u) { return; }
    ctx->pc = 0x2469A8u;
    // 0x2469a8: 0x2402003c
    ctx->pc = 0x2469a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x2469ac: 0xae020918
    ctx->pc = 0x2469acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2328), GPR_U32(ctx, 2));
label_2469b0:
    // 0x2469b0: 0x10000005
    ctx->pc = 0x2469B0u;
    {
        const bool branch_taken_0x2469b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2469B4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2469b0) {
            ctx->pc = 0x2469C8u;
            goto label_2469c8;
        }
    }
    ctx->pc = 0x2469B8u;
label_2469b8:
    // 0x2469b8: 0x18400002
    ctx->pc = 0x2469B8u;
    {
        const bool branch_taken_0x2469b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2469BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x2469b8) {
            ctx->pc = 0x2469C4u;
            goto label_2469c4;
        }
    }
    ctx->pc = 0x2469C0u;
    // 0x2469c0: 0xae020914
    ctx->pc = 0x2469c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2324), GPR_U32(ctx, 2));
label_2469c4:
    // 0x2469c4: 0x102d
    ctx->pc = 0x2469c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2469c8:
    // 0x2469c8: 0xdfbf0050
    ctx->pc = 0x2469c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2469cc: 0xdfb30040
    ctx->pc = 0x2469ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2469d0: 0xdfb20030
    ctx->pc = 0x2469d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2469d4: 0xdfb10020
    ctx->pc = 0x2469d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2469d8: 0xdfb00010
    ctx->pc = 0x2469d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2469dc: 0xc7b40060
    ctx->pc = 0x2469dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2469e0: 0x3e00008
    ctx->pc = 0x2469E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2469E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x246804u: goto label_246804;
            case 0x246834u: goto label_246834;
            case 0x246850u: goto label_246850;
            case 0x246868u: goto label_246868;
            case 0x246878u: goto label_246878;
            case 0x246920u: goto label_246920;
            case 0x2469B0u: goto label_2469b0;
            case 0x2469B8u: goto label_2469b8;
            case 0x2469C4u: goto label_2469c4;
            case 0x2469C8u: goto label_2469c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2469E8u;
}
