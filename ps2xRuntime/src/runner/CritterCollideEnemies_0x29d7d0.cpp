#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterCollideEnemies
// Address: 0x29d7d0 - 0x29da8c
void CritterCollideEnemies_0x29d7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29d7d0u;

    // 0x29d7d0: 0x27bdff20
    ctx->pc = 0x29d7d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x29d7d4: 0xffbf00b0
    ctx->pc = 0x29d7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x29d7d8: 0xffb500a0
    ctx->pc = 0x29d7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x29d7dc: 0xffb40090
    ctx->pc = 0x29d7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x29d7e0: 0xffb30080
    ctx->pc = 0x29d7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x29d7e4: 0xffb20070
    ctx->pc = 0x29d7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x29d7e8: 0xffb10060
    ctx->pc = 0x29d7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x29d7ec: 0xffb00050
    ctx->pc = 0x29d7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x29d7f0: 0xe7b600d0
    ctx->pc = 0x29d7f0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x29d7f4: 0xe7b500c8
    ctx->pc = 0x29d7f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x29d7f8: 0xe7b400c0
    ctx->pc = 0x29d7f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x29d7fc: 0x80882d
    ctx->pc = 0x29d7fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d800: 0xa0902d
    ctx->pc = 0x29d800u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d804: 0x2414ffff
    ctx->pc = 0x29d804u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29d808: 0x4480a800
    ctx->pc = 0x29d808u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 0);
    // 0x29d80c: 0x26330060
    ctx->pc = 0x29d80cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 17), 96));
    // 0x29d810: 0x8e220004
    ctx->pc = 0x29d810u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29d814: 0xc454007c
    ctx->pc = 0x29d814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29d818: 0xc4560078
    ctx->pc = 0x29d818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29d81c: 0xc6200060
    ctx->pc = 0x29d81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d820: 0xc6410000
    ctx->pc = 0x29d820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d824: 0x46010000
    ctx->pc = 0x29d824u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29d828: 0xe7a00030
    ctx->pc = 0x29d828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x29d82c: 0xc6600004
    ctx->pc = 0x29d82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d830: 0xc6410004
    ctx->pc = 0x29d830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d834: 0x46010000
    ctx->pc = 0x29d834u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29d838: 0xe7a00034
    ctx->pc = 0x29d838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x29d83c: 0xc6600008
    ctx->pc = 0x29d83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d840: 0xc6410008
    ctx->pc = 0x29d840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d844: 0x46010000
    ctx->pc = 0x29d844u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29d848: 0xe7a00038
    ctx->pc = 0x29d848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x29d84c: 0x27a40030
    ctx->pc = 0x29d84cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x29d850: 0xc0a00b0
    ctx->pc = 0x29D850u;
    SET_GPR_U32(ctx, 31, 0x29D858u);
    ctx->pc = 0x29D854u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2802C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartEnemyGrid_0x2802c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D858u; }
    }
    if (ctx->pc != 0x29D858u) { return; }
    ctx->pc = 0x29D858u;
    // 0x29d858: 0x3c020033
    ctx->pc = 0x29d858u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x29d85c: 0x10000057
    ctx->pc = 0x29D85Cu;
    {
        const bool branch_taken_0x29d85c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29D860u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294959056));
        if (branch_taken_0x29d85c) {
            ctx->pc = 0x29D9BCu;
            goto label_29d9bc;
        }
    }
    ctx->pc = 0x29D864u;
    // 0x29d864: 0x0
    ctx->pc = 0x29d864u;
    // NOP
label_29d868:
    // 0x29d868: 0x2021818
    ctx->pc = 0x29d868u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29d86c: 0x753021
    ctx->pc = 0x29d86cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x29d870: 0x8cc300c8
    ctx->pc = 0x29d870u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 200)));
    // 0x29d874: 0x24020001
    ctx->pc = 0x29d874u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x29d878: 0x10620008
    ctx->pc = 0x29D878u;
    {
        const bool branch_taken_0x29d878 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x29D87Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x29d878) {
            ctx->pc = 0x29D89Cu;
            goto label_29d89c;
        }
    }
    ctx->pc = 0x29D880u;
    // 0x29d880: 0x10620006
    ctx->pc = 0x29D880u;
    {
        const bool branch_taken_0x29d880 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x29D884u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x29d880) {
            ctx->pc = 0x29D89Cu;
            goto label_29d89c;
        }
    }
    ctx->pc = 0x29D888u;
    // 0x29d888: 0x1462004c
    ctx->pc = 0x29D888u;
    {
        const bool branch_taken_0x29d888 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x29D88Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x29d888) {
            ctx->pc = 0x29D9BCu;
            goto label_29d9bc;
        }
    }
    ctx->pc = 0x29D890u;
    // 0x29d890: 0x8c4207f8
    ctx->pc = 0x29d890u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2040)));
    // 0x29d894: 0x10400049
    ctx->pc = 0x29D894u;
    {
        const bool branch_taken_0x29d894 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x29d894) {
            ctx->pc = 0x29D9BCu;
            goto label_29d9bc;
        }
    }
    ctx->pc = 0x29D89Cu;
label_29d89c:
    // 0x29d89c: 0x8cc30000
    ctx->pc = 0x29d89cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x29d8a0: 0x2402001f
    ctx->pc = 0x29d8a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
    // 0x29d8a4: 0x10620045
    ctx->pc = 0x29D8A4u;
    {
        const bool branch_taken_0x29d8a4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x29d8a4) {
            ctx->pc = 0x29D9BCu;
            goto label_29d9bc;
        }
    }
    ctx->pc = 0x29D8ACu;
    // 0x29d8ac: 0xc4c0024c
    ctx->pc = 0x29d8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d8b0: 0x4600a300
    ctx->pc = 0x29d8b0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x29d8b4: 0xc4c00250
    ctx->pc = 0x29d8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d8b8: 0x8e220004
    ctx->pc = 0x29d8b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29d8bc: 0x8c42005c
    ctx->pc = 0x29d8bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x29d8c0: 0x30420100
    ctx->pc = 0x29d8c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x29d8c4: 0x10400009
    ctx->pc = 0x29D8C4u;
    {
        const bool branch_taken_0x29d8c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29D8C8u;
        ctx->f[13] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        if (branch_taken_0x29d8c4) {
            ctx->pc = 0x29D8ECu;
            goto label_29d8ec;
        }
    }
    ctx->pc = 0x29D8CCu;
    // 0x29d8cc: 0x220202d
    ctx->pc = 0x29d8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d8d0: 0x240282d
    ctx->pc = 0x29d8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d8d4: 0x24c60060
    ctx->pc = 0x29d8d4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 96));
    // 0x29d8d8: 0x27a70020
    ctx->pc = 0x29d8d8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 32));
    // 0x29d8dc: 0xc0a69dc
    ctx->pc = 0x29D8DCu;
    SET_GPR_U32(ctx, 31, 0x29D8E4u);
    ctx->pc = 0x29D8E0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x29A770u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterMoveNodeCol_0x29a770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D8E4u; }
    }
    if (ctx->pc != 0x29D8E4u) { return; }
    ctx->pc = 0x29D8E4u;
    // 0x29d8e4: 0x1000001a
    ctx->pc = 0x29D8E4u;
    {
        const bool branch_taken_0x29d8e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x29d8e4) {
            ctx->pc = 0x29D950u;
            goto label_29d950;
        }
    }
    ctx->pc = 0x29D8ECu;
label_29d8ec:
    // 0x29d8ec: 0xc4c20060
    ctx->pc = 0x29d8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29d8f0: 0xc7a00030
    ctx->pc = 0x29d8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d8f4: 0x46001081
    ctx->pc = 0x29d8f4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x29d8f8: 0xe7a20020
    ctx->pc = 0x29d8f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x29d8fc: 0xc4c00064
    ctx->pc = 0x29d8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d900: 0xc7a10034
    ctx->pc = 0x29d900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d904: 0x46010001
    ctx->pc = 0x29d904u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29d908: 0xe7a00024
    ctx->pc = 0x29d908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x29d90c: 0xc4c00068
    ctx->pc = 0x29d90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d910: 0xc7a10038
    ctx->pc = 0x29d910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d914: 0x46010001
    ctx->pc = 0x29d914u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29d918: 0xe7a00028
    ctx->pc = 0x29d918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x29d91c: 0x46021082
    ctx->pc = 0x29d91cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x29d920: 0x46000002
    ctx->pc = 0x29d920u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x29d924: 0x46001080
    ctx->pc = 0x29d924u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x29d928: 0x460c6002
    ctx->pc = 0x29d928u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x29d92c: 0x46020034
    ctx->pc = 0x29d92cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d930: 0x0
    ctx->pc = 0x29d930u;
    // NOP
    // 0x29d934: 0x45010021
    ctx->pc = 0x29D934u;
    {
        const bool branch_taken_0x29d934 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29D938u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 96));
        if (branch_taken_0x29d934) {
            ctx->pc = 0x29D9BCu;
            goto label_29d9bc;
        }
    }
    ctx->pc = 0x29D93Cu;
    // 0x29d93c: 0x260282d
    ctx->pc = 0x29d93cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d940: 0x27a60030
    ctx->pc = 0x29d940u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 48));
    // 0x29d944: 0x27a70020
    ctx->pc = 0x29d944u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 32));
    // 0x29d948: 0xc0a4202
    ctx->pc = 0x29D948u;
    SET_GPR_U32(ctx, 31, 0x29D950u);
    ctx->pc = 0x29D94Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x290808u;
    {
        const uint32_t __entryPc = ctx->pc;
        LineCylinderCollide_0x290808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D950u; }
    }
    if (ctx->pc != 0x29D950u) { return; }
    ctx->pc = 0x29D950u;
label_29d950:
    // 0x29d950: 0x1040001a
    ctx->pc = 0x29D950u;
    {
        const bool branch_taken_0x29d950 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29D954u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x29d950) {
            ctx->pc = 0x29D9BCu;
            goto label_29d9bc;
        }
    }
    ctx->pc = 0x29D958u;
    // 0x29d958: 0xc7a00030
    ctx->pc = 0x29d958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d95c: 0x46006301
    ctx->pc = 0x29d95cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x29d960: 0xe7ac0000
    ctx->pc = 0x29d960u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29d964: 0xc7a00024
    ctx->pc = 0x29d964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d968: 0xc7a10034
    ctx->pc = 0x29d968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29d96c: 0x46010001
    ctx->pc = 0x29d96cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29d970: 0xe7a00004
    ctx->pc = 0x29d970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29d974: 0xc7ad0028
    ctx->pc = 0x29d974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29d978: 0xc7a00038
    ctx->pc = 0x29d978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d97c: 0x46006b41
    ctx->pc = 0x29d97cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x29d980: 0xc0b5c34
    ctx->pc = 0x29D980u;
    SET_GPR_U32(ctx, 31, 0x29D988u);
    ctx->pc = 0x29D984u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D988u; }
    }
    if (ctx->pc != 0x29D988u) { return; }
    ctx->pc = 0x29D988u;
    // 0x29d988: 0x6820005
    ctx->pc = 0x29D988u;
    {
        const bool branch_taken_0x29d988 = (GPR_S32(ctx, 20) < 0);
        if (branch_taken_0x29d988) {
            ctx->pc = 0x29D98Cu;
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x29D9A0u;
            goto label_29d9a0;
        }
    }
    ctx->pc = 0x29D990u;
    // 0x29d990: 0x46150034
    ctx->pc = 0x29d990u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d994: 0x45000009
    ctx->pc = 0x29D994u;
    {
        const bool branch_taken_0x29d994 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d994) {
            ctx->pc = 0x29D9BCu;
            goto label_29d9bc;
        }
    }
    ctx->pc = 0x29D99Cu;
    // 0x29d99c: 0x200a02d
    ctx->pc = 0x29d99cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29d9a0:
    // 0x29d9a0: 0x46000546
    ctx->pc = 0x29d9a0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x29d9a4: 0xc7a00020
    ctx->pc = 0x29d9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d9a8: 0xe7a00040
    ctx->pc = 0x29d9a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x29d9ac: 0xc7a00024
    ctx->pc = 0x29d9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d9b0: 0xe7a00044
    ctx->pc = 0x29d9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x29d9b4: 0xc7a00028
    ctx->pc = 0x29d9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29d9b8: 0xe7a00048
    ctx->pc = 0x29d9b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_29d9bc:
    // 0x29d9bc: 0xc0a00ea
    ctx->pc = 0x29D9BCu;
    SET_GPR_U32(ctx, 31, 0x29D9C4u);
    ctx->pc = 0x2803A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        NextGridEnemy_0x2803a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D9C4u; }
    }
    if (ctx->pc != 0x29D9C4u) { return; }
    ctx->pc = 0x29D9C4u;
    // 0x29d9c4: 0x40802d
    ctx->pc = 0x29d9c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d9c8: 0x601ffa7
    ctx->pc = 0x29D9C8u;
    {
        const bool branch_taken_0x29d9c8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x29D9CCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 944));
        if (branch_taken_0x29d9c8) {
            ctx->pc = 0x29D868u;
            goto label_29d868;
        }
    }
    ctx->pc = 0x29D9D0u;
    // 0x29d9d0: 0x6800022
    ctx->pc = 0x29D9D0u;
    {
        const bool branch_taken_0x29d9d0 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x29D9D4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29d9d0) {
            ctx->pc = 0x29DA5Cu;
            goto label_29da5c;
        }
    }
    ctx->pc = 0x29D9D8u;
    // 0x29d9d8: 0x8e250004
    ctx->pc = 0x29d9d8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29d9dc: 0x8ca20120
    ctx->pc = 0x29d9dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 288)));
    // 0x29d9e0: 0x84430020
    ctx->pc = 0x29d9e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x29d9e4: 0x24020003
    ctx->pc = 0x29d9e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x29d9e8: 0x14620018
    ctx->pc = 0x29D9E8u;
    {
        const bool branch_taken_0x29d9e8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x29D9ECu;
        SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
        if (branch_taken_0x29d9e8) {
            ctx->pc = 0x29DA4Cu;
            goto label_29da4c;
        }
    }
    ctx->pc = 0x29D9F0u;
    // 0x29d9f0: 0x2463dfd0
    ctx->pc = 0x29d9f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294959056));
    // 0x29d9f4: 0x240203b0
    ctx->pc = 0x29d9f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 944));
    // 0x29d9f8: 0x2821018
    ctx->pc = 0x29d9f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29d9fc: 0x432021
    ctx->pc = 0x29d9fcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29da00: 0xc4810250
    ctx->pc = 0x29da00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29da04: 0x3c014000
    ctx->pc = 0x29da04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x29da08: 0x44810000
    ctx->pc = 0x29da08u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29da0c: 0x46000836
    ctx->pc = 0x29da0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29da10: 0x0
    ctx->pc = 0x29da10u;
    // NOP
    // 0x29da14: 0x4500000d
    ctx->pc = 0x29DA14u;
    {
        const bool branch_taken_0x29da14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29DA18u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x29da14) {
            ctx->pc = 0x29DA4Cu;
            goto label_29da4c;
        }
    }
    ctx->pc = 0x29DA1Cu;
    // 0x29da1c: 0x8c42e7c8
    ctx->pc = 0x29da1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x29da20: 0xc4a000b8
    ctx->pc = 0x29da20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29da24: 0xc44c00bc
    ctx->pc = 0x29da24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29da28: 0x460c0302
    ctx->pc = 0x29da28u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x29da2c: 0x2405ffff
    ctx->pc = 0x29da2cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29da30: 0x302d
    ctx->pc = 0x29da30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29da34: 0x27a70040
    ctx->pc = 0x29da34u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 64));
    // 0x29da38: 0x402d
    ctx->pc = 0x29da38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29da3c: 0xc08e7bc
    ctx->pc = 0x29DA3Cu;
    SET_GPR_U32(ctx, 31, 0x29DA44u);
    ctx->pc = 0x29DA40u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x239EF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        damage_enemy_0x239ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DA44u; }
    }
    if (ctx->pc != 0x29DA44u) { return; }
    ctx->pc = 0x29DA44u;
    // 0x29da44: 0x10000005
    ctx->pc = 0x29DA44u;
    {
        const bool branch_taken_0x29da44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29DA48u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29da44) {
            ctx->pc = 0x29DA5Cu;
            goto label_29da5c;
        }
    }
    ctx->pc = 0x29DA4Cu;
label_29da4c:
    // 0x29da4c: 0x44800000
    ctx->pc = 0x29da4cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x29da50: 0xe6400008
    ctx->pc = 0x29da50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x29da54: 0xe6400000
    ctx->pc = 0x29da54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x29da58: 0x24020001
    ctx->pc = 0x29da58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_29da5c:
    // 0x29da5c: 0xdfbf00b0
    ctx->pc = 0x29da5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29da60: 0xdfb500a0
    ctx->pc = 0x29da60u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29da64: 0xdfb40090
    ctx->pc = 0x29da64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29da68: 0xdfb30080
    ctx->pc = 0x29da68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29da6c: 0xdfb20070
    ctx->pc = 0x29da6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29da70: 0xdfb10060
    ctx->pc = 0x29da70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29da74: 0xdfb00050
    ctx->pc = 0x29da74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29da78: 0xc7b600d0
    ctx->pc = 0x29da78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29da7c: 0xc7b500c8
    ctx->pc = 0x29da7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29da80: 0xc7b400c0
    ctx->pc = 0x29da80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29da84: 0x3e00008
    ctx->pc = 0x29DA84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DA88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29D868u: goto label_29d868;
            case 0x29D89Cu: goto label_29d89c;
            case 0x29D8ECu: goto label_29d8ec;
            case 0x29D950u: goto label_29d950;
            case 0x29D9A0u: goto label_29d9a0;
            case 0x29D9BCu: goto label_29d9bc;
            case 0x29DA4Cu: goto label_29da4c;
            case 0x29DA5Cu: goto label_29da5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29DA8Cu;
}
