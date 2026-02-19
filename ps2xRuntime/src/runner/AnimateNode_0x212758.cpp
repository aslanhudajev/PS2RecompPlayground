#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AnimateNode
// Address: 0x212758 - 0x212940
void AnimateNode_0x212758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x212758u;

label_212758:
    // 0x212758: 0x27bdffb0
    ctx->pc = 0x212758u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x21275c: 0xffbf0040
    ctx->pc = 0x21275cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x212760: 0xffb30030
    ctx->pc = 0x212760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x212764: 0xffb20020
    ctx->pc = 0x212764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x212768: 0xffb10010
    ctx->pc = 0x212768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21276c: 0xffb00000
    ctx->pc = 0x21276cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212770: 0x80802d
    ctx->pc = 0x212770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212774: 0xa0882d
    ctx->pc = 0x212774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212778: 0x8622000e
    ctx->pc = 0x212778u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x21277c: 0x24030030
    ctx->pc = 0x21277cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
    // 0x212780: 0x431018
    ctx->pc = 0x212780u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x212784: 0x8e230000
    ctx->pc = 0x212784u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x212788: 0x431021
    ctx->pc = 0x212788u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21278c: 0x9442002a
    ctx->pc = 0x21278cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x212790: 0x30420001
    ctx->pc = 0x212790u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x212794: 0x1040000b
    ctx->pc = 0x212794u;
    {
        const bool branch_taken_0x212794 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x212798u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x212794) {
            ctx->pc = 0x2127C4u;
            goto label_2127c4;
        }
    }
    ctx->pc = 0x21279Cu;
    // 0x21279c: 0x86320010
    ctx->pc = 0x21279cu;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2127a0: 0xc6200018
    ctx->pc = 0x2127a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2127a4: 0x3c013f00
    ctx->pc = 0x2127a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2127a8: 0x44810800
    ctx->pc = 0x2127a8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2127ac: 0x46010000
    ctx->pc = 0x2127acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2127b0: 0x46000064
    ctx->pc = 0x2127b0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2127b4: 0x44020800
    ctx->pc = 0x2127b4u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x2127b8: 0x2429023
    ctx->pc = 0x2127b8u;
    SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2127bc: 0x10000007
    ctx->pc = 0x2127BCu;
    {
        const bool branch_taken_0x2127bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2127C0u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
        if (branch_taken_0x2127bc) {
            ctx->pc = 0x2127DCu;
            goto label_2127dc;
        }
    }
    ctx->pc = 0x2127C4u;
label_2127c4:
    // 0x2127c4: 0xc6200018
    ctx->pc = 0x2127c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2127c8: 0x3c013f00
    ctx->pc = 0x2127c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2127cc: 0x44810800
    ctx->pc = 0x2127ccu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2127d0: 0x46010000
    ctx->pc = 0x2127d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2127d4: 0x46000064
    ctx->pc = 0x2127d4u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2127d8: 0x44120800
    ctx->pc = 0x2127d8u;
    SET_GPR_U32(ctx, 18, *(uint32_t*)&ctx->f[1]);
label_2127dc:
    // 0x2127dc: 0x12000052
    ctx->pc = 0x2127DCu;
    {
        const bool branch_taken_0x2127dc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2127E0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2127dc) {
            ctx->pc = 0x212928u;
            goto label_212928;
        }
    }
    ctx->pc = 0x2127E4u;
    // 0x2127e4: 0x8e030020
    ctx->pc = 0x2127e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2127e8:
    // 0x2127e8: 0x24020002
    ctx->pc = 0x2127e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2127ec: 0x1062002a
    ctx->pc = 0x2127ECu;
    {
        const bool branch_taken_0x2127ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2127F0u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
        if (branch_taken_0x2127ec) {
            ctx->pc = 0x212898u;
            goto label_212898;
        }
    }
    ctx->pc = 0x2127F4u;
    // 0x2127f4: 0x10400005
    ctx->pc = 0x2127F4u;
    {
        const bool branch_taken_0x2127f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2127F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2127f4) {
            ctx->pc = 0x21280Cu;
            goto label_21280c;
        }
    }
    ctx->pc = 0x2127FCu;
    // 0x2127fc: 0x1062000a
    ctx->pc = 0x2127FCu;
    {
        const bool branch_taken_0x2127fc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2127fc) {
            ctx->pc = 0x212828u;
            goto label_212828;
        }
    }
    ctx->pc = 0x212804u;
    // 0x212804: 0x10000040
    ctx->pc = 0x212804u;
    {
        const bool branch_taken_0x212804 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x212808u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        if (branch_taken_0x212804) {
            ctx->pc = 0x212908u;
            goto label_212908;
        }
    }
    ctx->pc = 0x21280Cu;
label_21280c:
    // 0x21280c: 0x24020003
    ctx->pc = 0x21280cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x212810: 0x10620028
    ctx->pc = 0x212810u;
    {
        const bool branch_taken_0x212810 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x212814u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x212810) {
            ctx->pc = 0x2128B4u;
            goto label_2128b4;
        }
    }
    ctx->pc = 0x212818u;
    // 0x212818: 0x5062002c
    ctx->pc = 0x212818u;
    {
        const bool branch_taken_0x212818 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x212818) {
            ctx->pc = 0x21281Cu;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 19)));
            ctx->pc = 0x2128CCu;
            goto label_2128cc;
        }
    }
    ctx->pc = 0x212820u;
    // 0x212820: 0x10000039
    ctx->pc = 0x212820u;
    {
        const bool branch_taken_0x212820 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x212824u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        if (branch_taken_0x212820) {
            ctx->pc = 0x212908u;
            goto label_212908;
        }
    }
    ctx->pc = 0x212828u;
label_212828:
    // 0x212828: 0x12600009
    ctx->pc = 0x212828u;
    {
        const bool branch_taken_0x212828 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x21282Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x212828) {
            ctx->pc = 0x212850u;
            goto label_212850;
        }
    }
    ctx->pc = 0x212830u;
    // 0x212830: 0x8e070000
    ctx->pc = 0x212830u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x212834: 0x8e04001c
    ctx->pc = 0x212834u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x212838: 0xe0302d
    ctx->pc = 0x212838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21283c: 0x24e70040
    ctx->pc = 0x21283cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 64));
    // 0x212840: 0xc083f3a
    ctx->pc = 0x212840u;
    SET_GPR_U32(ctx, 31, 0x212848u);
    ctx->pc = 0x212844u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x20FCE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoAnimation_0x20fce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212848u; }
    }
    if (ctx->pc != 0x212848u) { return; }
    ctx->pc = 0x212848u;
    // 0x212848: 0x10000007
    ctx->pc = 0x212848u;
    {
        const bool branch_taken_0x212848 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21284Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1792));
        if (branch_taken_0x212848) {
            ctx->pc = 0x212868u;
            goto label_212868;
        }
    }
    ctx->pc = 0x212850u;
label_212850:
    // 0x212850: 0x8e04001c
    ctx->pc = 0x212850u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x212854: 0x302d
    ctx->pc = 0x212854u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212858: 0x382d
    ctx->pc = 0x212858u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21285c: 0xc083f3a
    ctx->pc = 0x21285Cu;
    SET_GPR_U32(ctx, 31, 0x212864u);
    ctx->pc = 0x212860u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20FCE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoAnimation_0x20fce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212864u; }
    }
    if (ctx->pc != 0x212864u) { return; }
    ctx->pc = 0x212864u;
    // 0x212864: 0x30420700
    ctx->pc = 0x212864u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1792));
label_212868:
    // 0x212868: 0x10400006
    ctx->pc = 0x212868u;
    {
        const bool branch_taken_0x212868 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21286Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x212868) {
            ctx->pc = 0x212884u;
            goto label_212884;
        }
    }
    ctx->pc = 0x212870u;
    // 0x212870: 0x8e040000
    ctx->pc = 0x212870u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x212874: 0xc0b41b8
    ctx->pc = 0x212874u;
    SET_GPR_U32(ctx, 31, 0x21287Cu);
    ctx->pc = 0x212878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21287Cu; }
    }
    if (ctx->pc != 0x21287Cu) { return; }
    ctx->pc = 0x21287Cu;
    // 0x21287c: 0x10000022
    ctx->pc = 0x21287Cu;
    {
        const bool branch_taken_0x21287c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x212880u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        if (branch_taken_0x21287c) {
            ctx->pc = 0x212908u;
            goto label_212908;
        }
    }
    ctx->pc = 0x212884u;
label_212884:
    // 0x212884: 0x8e040000
    ctx->pc = 0x212884u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x212888: 0xc0b41e4
    ctx->pc = 0x212888u;
    SET_GPR_U32(ctx, 31, 0x212890u);
    ctx->pc = 0x21288Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212890u; }
    }
    if (ctx->pc != 0x212890u) { return; }
    ctx->pc = 0x212890u;
    // 0x212890: 0x1000001d
    ctx->pc = 0x212890u;
    {
        const bool branch_taken_0x212890 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x212894u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        if (branch_taken_0x212890) {
            ctx->pc = 0x212908u;
            goto label_212908;
        }
    }
    ctx->pc = 0x212898u;
label_212898:
    // 0x212898: 0x8e04001c
    ctx->pc = 0x212898u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x21289c: 0x8e050000
    ctx->pc = 0x21289cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2128a0: 0x8626000e
    ctx->pc = 0x2128a0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x2128a4: 0xc08423a
    ctx->pc = 0x2128A4u;
    SET_GPR_U32(ctx, 31, 0x2128ACu);
    ctx->pc = 0x2128A8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2108E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoObjAnimation_0x2108e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2128ACu; }
    }
    if (ctx->pc != 0x2128ACu) { return; }
    ctx->pc = 0x2128ACu;
    // 0x2128ac: 0x10000016
    ctx->pc = 0x2128ACu;
    {
        const bool branch_taken_0x2128ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2128B0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        if (branch_taken_0x2128ac) {
            ctx->pc = 0x212908u;
            goto label_212908;
        }
    }
    ctx->pc = 0x2128B4u;
label_2128b4:
    // 0x2128b4: 0x8e040000
    ctx->pc = 0x2128b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2128b8: 0x8e05001c
    ctx->pc = 0x2128b8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2128bc: 0xc084cc2
    ctx->pc = 0x2128BCu;
    SET_GPR_U32(ctx, 31, 0x2128C4u);
    ctx->pc = 0x2128C0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x213308u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoTexModNode_0x213308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2128C4u; }
    }
    if (ctx->pc != 0x2128C4u) { return; }
    ctx->pc = 0x2128C4u;
    // 0x2128c4: 0x10000010
    ctx->pc = 0x2128C4u;
    {
        const bool branch_taken_0x2128c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2128C8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        if (branch_taken_0x2128c4) {
            ctx->pc = 0x212908u;
            goto label_212908;
        }
    }
    ctx->pc = 0x2128CCu;
label_2128cc:
    // 0x2128cc: 0x30420004
    ctx->pc = 0x2128ccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x2128d0: 0x5040000d
    ctx->pc = 0x2128D0u;
    {
        const bool branch_taken_0x2128d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2128d0) {
            ctx->pc = 0x2128D4u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x212908u;
            goto label_212908;
        }
    }
    ctx->pc = 0x2128D8u;
    // 0x2128d8: 0x8622000e
    ctx->pc = 0x2128d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x2128dc: 0x14400006
    ctx->pc = 0x2128DCu;
    {
        const bool branch_taken_0x2128dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2128E0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x2128dc) {
            ctx->pc = 0x2128F8u;
            goto label_2128f8;
        }
    }
    ctx->pc = 0x2128E4u;
    // 0x2128e4: 0x3c050020
    ctx->pc = 0x2128e4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32 << 16));
    // 0x2128e8: 0xc0b41b8
    ctx->pc = 0x2128E8u;
    SET_GPR_U32(ctx, 31, 0x2128F0u);
    ctx->pc = 0x2128ECu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2128F0u; }
    }
    if (ctx->pc != 0x2128F0u) { return; }
    ctx->pc = 0x2128F0u;
    // 0x2128f0: 0x10000005
    ctx->pc = 0x2128F0u;
    {
        const bool branch_taken_0x2128f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2128F4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
        if (branch_taken_0x2128f0) {
            ctx->pc = 0x212908u;
            goto label_212908;
        }
    }
    ctx->pc = 0x2128F8u;
label_2128f8:
    // 0x2128f8: 0x3c050020
    ctx->pc = 0x2128f8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)32 << 16));
    // 0x2128fc: 0xc0b41e4
    ctx->pc = 0x2128FCu;
    SET_GPR_U32(ctx, 31, 0x212904u);
    ctx->pc = 0x212900u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212904u; }
    }
    if (ctx->pc != 0x212904u) { return; }
    ctx->pc = 0x212904u;
    // 0x212904: 0x8e040008
    ctx->pc = 0x212904u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_212908:
    // 0x212908: 0x10800003
    ctx->pc = 0x212908u;
    {
        const bool branch_taken_0x212908 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x21290Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x212908) {
            ctx->pc = 0x212918u;
            goto label_212918;
        }
    }
    ctx->pc = 0x212910u;
    // 0x212910: 0xc0849d6
    ctx->pc = 0x212910u;
    SET_GPR_U32(ctx, 31, 0x212918u);
    ctx->pc = 0x212914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x212758u;
    goto label_212758;
    ctx->pc = 0x212918u;
label_212918:
    // 0x212918: 0x8e10000c
    ctx->pc = 0x212918u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x21291c: 0x5600ffb2
    ctx->pc = 0x21291Cu;
    {
        const bool branch_taken_0x21291c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x21291c) {
            ctx->pc = 0x212920u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->pc = 0x2127E8u;
            goto label_2127e8;
        }
    }
    ctx->pc = 0x212924u;
    // 0x212924: 0xdfbf0040
    ctx->pc = 0x212924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_212928:
    // 0x212928: 0xdfb30030
    ctx->pc = 0x212928u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21292c: 0xdfb20020
    ctx->pc = 0x21292cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212930: 0xdfb10010
    ctx->pc = 0x212930u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212934: 0xdfb00000
    ctx->pc = 0x212934u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212938: 0x3e00008
    ctx->pc = 0x212938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21293Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x212758u: goto label_212758;
            case 0x2127C4u: goto label_2127c4;
            case 0x2127DCu: goto label_2127dc;
            case 0x2127E8u: goto label_2127e8;
            case 0x21280Cu: goto label_21280c;
            case 0x212828u: goto label_212828;
            case 0x212850u: goto label_212850;
            case 0x212868u: goto label_212868;
            case 0x212884u: goto label_212884;
            case 0x212898u: goto label_212898;
            case 0x2128B4u: goto label_2128b4;
            case 0x2128CCu: goto label_2128cc;
            case 0x2128F8u: goto label_2128f8;
            case 0x212908u: goto label_212908;
            case 0x212918u: goto label_212918;
            case 0x212928u: goto label_212928;
            default: break;
        }
        return;
    }
    ctx->pc = 0x212940u;
}
