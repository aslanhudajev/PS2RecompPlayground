#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: getPosRect
// Address: 0x2cd510 - 0x2cd6e4
void getPosRect_0x2cd510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cd510u;

    // 0x2cd510: 0x27bdffb0
    ctx->pc = 0x2cd510u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cd514: 0xffbf0030
    ctx->pc = 0x2cd514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2cd518: 0xffb20020
    ctx->pc = 0x2cd518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2cd51c: 0xffb10010
    ctx->pc = 0x2cd51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2cd520: 0xffb00000
    ctx->pc = 0x2cd520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cd524: 0xe7b50048
    ctx->pc = 0x2cd524u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2cd528: 0xe7b40040
    ctx->pc = 0x2cd528u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2cd52c: 0x80902d
    ctx->pc = 0x2cd52cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd530: 0xa0802d
    ctx->pc = 0x2cd530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd534: 0xc0abc06
    ctx->pc = 0x2CD534u;
    SET_GPR_U32(ctx, 31, 0x2CD53Cu);
    ctx->pc = 0x2CD538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2AF018u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbRand_0x2af018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD53Cu; }
    }
    if (ctx->pc != 0x2CD53Cu) { return; }
    ctx->pc = 0x2CD53Cu;
    // 0x2cd53c: 0x30437fff
    ctx->pc = 0x2cd53cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 32767));
    // 0x2cd540: 0x4600005
    ctx->pc = 0x2CD540u;
    {
        const bool branch_taken_0x2cd540 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CD544u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2cd540) {
            ctx->pc = 0x2CD558u;
            goto label_2cd558;
        }
    }
    ctx->pc = 0x2CD548u;
    // 0x2cd548: 0x4483a800
    ctx->pc = 0x2cd548u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 3);
    // 0x2cd54c: 0x4680ad60
    ctx->pc = 0x2cd54cu;
    ctx->f[21] = FPU_CVT_S_W(*(int32_t*)&ctx->f[21]);
    // 0x2cd550: 0x10000006
    ctx->pc = 0x2CD550u;
    {
        const bool branch_taken_0x2cd550 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cd550) {
            ctx->pc = 0x2CD56Cu;
            goto label_2cd56c;
        }
    }
    ctx->pc = 0x2CD558u;
label_2cd558:
    // 0x2cd558: 0x31842
    ctx->pc = 0x2cd558u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2cd55c: 0x431025
    ctx->pc = 0x2cd55cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cd560: 0x4482a800
    ctx->pc = 0x2cd560u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 2);
    // 0x2cd564: 0x4680ad60
    ctx->pc = 0x2cd564u;
    ctx->f[21] = FPU_CVT_S_W(*(int32_t*)&ctx->f[21]);
    // 0x2cd568: 0x4615ad40
    ctx->pc = 0x2cd568u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_2cd56c:
    // 0x2cd56c: 0x3c013800
    ctx->pc = 0x2cd56cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)14336 << 16));
    // 0x2cd570: 0x34210100
    ctx->pc = 0x2cd570u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 256));
    // 0x2cd574: 0x44810000
    ctx->pc = 0x2cd574u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cd578: 0x4600ad42
    ctx->pc = 0x2cd578u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2cd57c: 0x3c013f00
    ctx->pc = 0x2cd57cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2cd580: 0x44810000
    ctx->pc = 0x2cd580u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cd584: 0x4600ad41
    ctx->pc = 0x2cd584u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x2cd588: 0xc6200000
    ctx->pc = 0x2cd588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd58c: 0xc0abc06
    ctx->pc = 0x2CD58Cu;
    SET_GPR_U32(ctx, 31, 0x2CD594u);
    ctx->pc = 0x2CD590u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    ctx->pc = 0x2AF018u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbRand_0x2af018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD594u; }
    }
    if (ctx->pc != 0x2CD594u) { return; }
    ctx->pc = 0x2CD594u;
    // 0x2cd594: 0x30437fff
    ctx->pc = 0x2cd594u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 32767));
    // 0x2cd598: 0x4600005
    ctx->pc = 0x2CD598u;
    {
        const bool branch_taken_0x2cd598 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CD59Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2cd598) {
            ctx->pc = 0x2CD5B0u;
            goto label_2cd5b0;
        }
    }
    ctx->pc = 0x2CD5A0u;
    // 0x2cd5a0: 0x4483a000
    ctx->pc = 0x2cd5a0u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 3);
    // 0x2cd5a4: 0x4680a520
    ctx->pc = 0x2cd5a4u;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[20]);
    // 0x2cd5a8: 0x10000006
    ctx->pc = 0x2CD5A8u;
    {
        const bool branch_taken_0x2cd5a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cd5a8) {
            ctx->pc = 0x2CD5C4u;
            goto label_2cd5c4;
        }
    }
    ctx->pc = 0x2CD5B0u;
label_2cd5b0:
    // 0x2cd5b0: 0x31842
    ctx->pc = 0x2cd5b0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2cd5b4: 0x431025
    ctx->pc = 0x2cd5b4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cd5b8: 0x4482a000
    ctx->pc = 0x2cd5b8u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 2);
    // 0x2cd5bc: 0x4680a520
    ctx->pc = 0x2cd5bcu;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[20]);
    // 0x2cd5c0: 0x4614a500
    ctx->pc = 0x2cd5c0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_2cd5c4:
    // 0x2cd5c4: 0x3c013800
    ctx->pc = 0x2cd5c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14336 << 16));
    // 0x2cd5c8: 0x34210100
    ctx->pc = 0x2cd5c8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 256));
    // 0x2cd5cc: 0x44810000
    ctx->pc = 0x2cd5ccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cd5d0: 0x4600a502
    ctx->pc = 0x2cd5d0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2cd5d4: 0x3c013f00
    ctx->pc = 0x2cd5d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2cd5d8: 0x44810000
    ctx->pc = 0x2cd5d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cd5dc: 0x4600a501
    ctx->pc = 0x2cd5dcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2cd5e0: 0xc6200004
    ctx->pc = 0x2cd5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd5e4: 0xc0abc06
    ctx->pc = 0x2CD5E4u;
    SET_GPR_U32(ctx, 31, 0x2CD5ECu);
    ctx->pc = 0x2CD5E8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->pc = 0x2AF018u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbRand_0x2af018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD5ECu; }
    }
    if (ctx->pc != 0x2CD5ECu) { return; }
    ctx->pc = 0x2CD5ECu;
    // 0x2cd5ec: 0x30437fff
    ctx->pc = 0x2cd5ecu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 32767));
    // 0x2cd5f0: 0x4600005
    ctx->pc = 0x2CD5F0u;
    {
        const bool branch_taken_0x2cd5f0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CD5F4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2cd5f0) {
            ctx->pc = 0x2CD608u;
            goto label_2cd608;
        }
    }
    ctx->pc = 0x2CD5F8u;
    // 0x2cd5f8: 0x44831000
    ctx->pc = 0x2cd5f8u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
    // 0x2cd5fc: 0x468010a0
    ctx->pc = 0x2cd5fcu;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x2cd600: 0x10000006
    ctx->pc = 0x2CD600u;
    {
        const bool branch_taken_0x2cd600 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cd600) {
            ctx->pc = 0x2CD61Cu;
            goto label_2cd61c;
        }
    }
    ctx->pc = 0x2CD608u;
label_2cd608:
    // 0x2cd608: 0x31842
    ctx->pc = 0x2cd608u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2cd60c: 0x431025
    ctx->pc = 0x2cd60cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cd610: 0x44821000
    ctx->pc = 0x2cd610u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x2cd614: 0x468010a0
    ctx->pc = 0x2cd614u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x2cd618: 0x46021080
    ctx->pc = 0x2cd618u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2cd61c:
    // 0x2cd61c: 0x3c013800
    ctx->pc = 0x2cd61cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)14336 << 16));
    // 0x2cd620: 0x34210100
    ctx->pc = 0x2cd620u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 256));
    // 0x2cd624: 0x44810000
    ctx->pc = 0x2cd624u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cd628: 0x46001082
    ctx->pc = 0x2cd628u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2cd62c: 0x3c013f00
    ctx->pc = 0x2cd62cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2cd630: 0x44810000
    ctx->pc = 0x2cd630u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2cd634: 0x46001081
    ctx->pc = 0x2cd634u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2cd638: 0xc6200008
    ctx->pc = 0x2cd638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd63c: 0x46001082
    ctx->pc = 0x2cd63cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2cd640: 0xc6010000
    ctx->pc = 0x2cd640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd644: 0x4601a842
    ctx->pc = 0x2cd644u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2cd648: 0xc6000010
    ctx->pc = 0x2cd648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd64c: 0x4600a002
    ctx->pc = 0x2cd64cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2cd650: 0x46000840
    ctx->pc = 0x2cd650u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cd654: 0xc6000020
    ctx->pc = 0x2cd654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd658: 0x46001002
    ctx->pc = 0x2cd658u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2cd65c: 0x46000840
    ctx->pc = 0x2cd65cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cd660: 0xc6000030
    ctx->pc = 0x2cd660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd664: 0x46000840
    ctx->pc = 0x2cd664u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cd668: 0xe6410000
    ctx->pc = 0x2cd668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2cd66c: 0xc6010004
    ctx->pc = 0x2cd66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd670: 0x4601a842
    ctx->pc = 0x2cd670u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2cd674: 0xc6000014
    ctx->pc = 0x2cd674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd678: 0x4600a002
    ctx->pc = 0x2cd678u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2cd67c: 0x46000840
    ctx->pc = 0x2cd67cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cd680: 0xc6000024
    ctx->pc = 0x2cd680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd684: 0x46001002
    ctx->pc = 0x2cd684u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2cd688: 0x46000840
    ctx->pc = 0x2cd688u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cd68c: 0xc6000034
    ctx->pc = 0x2cd68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd690: 0x46000840
    ctx->pc = 0x2cd690u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cd694: 0xe6410004
    ctx->pc = 0x2cd694u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2cd698: 0xc6010008
    ctx->pc = 0x2cd698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd69c: 0x4601a842
    ctx->pc = 0x2cd69cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2cd6a0: 0xc6000018
    ctx->pc = 0x2cd6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd6a4: 0x4600a002
    ctx->pc = 0x2cd6a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2cd6a8: 0x46000840
    ctx->pc = 0x2cd6a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cd6ac: 0xc6000028
    ctx->pc = 0x2cd6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd6b0: 0x46001002
    ctx->pc = 0x2cd6b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2cd6b4: 0x46000840
    ctx->pc = 0x2cd6b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cd6b8: 0xc6000038
    ctx->pc = 0x2cd6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd6bc: 0x46000840
    ctx->pc = 0x2cd6bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cd6c0: 0xe6410008
    ctx->pc = 0x2cd6c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2cd6c4: 0xdfbf0030
    ctx->pc = 0x2cd6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cd6c8: 0xdfb20020
    ctx->pc = 0x2cd6c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cd6cc: 0xdfb10010
    ctx->pc = 0x2cd6ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd6d0: 0xdfb00000
    ctx->pc = 0x2cd6d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd6d4: 0xc7b50048
    ctx->pc = 0x2cd6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2cd6d8: 0xc7b40040
    ctx->pc = 0x2cd6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cd6dc: 0x3e00008
    ctx->pc = 0x2CD6DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD6E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CD558u: goto label_2cd558;
            case 0x2CD56Cu: goto label_2cd56c;
            case 0x2CD5B0u: goto label_2cd5b0;
            case 0x2CD5C4u: goto label_2cd5c4;
            case 0x2CD608u: goto label_2cd608;
            case 0x2CD61Cu: goto label_2cd61c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CD6E4u;
}
