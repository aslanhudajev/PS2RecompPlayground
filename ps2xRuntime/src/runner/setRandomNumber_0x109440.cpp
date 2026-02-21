#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setRandomNumber
// Address: 0x109440 - 0x10958c
void setRandomNumber_0x109440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x109440u;

    // 0x109440: 0x27bdffe0
    ctx->pc = 0x109440u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x109444: 0xaf808124
    ctx->pc = 0x109444u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934820), GPR_U32(ctx, 0));
    // 0x109448: 0xe7b50018
    ctx->pc = 0x109448u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x10944c: 0xe7b40010
    ctx->pc = 0x10944cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x109450: 0xffbf0000
    ctx->pc = 0x109450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x109454: 0xaf808120
    ctx->pc = 0x109454u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934816), GPR_U32(ctx, 0));
    // 0x109458: 0xaf80811c
    ctx->pc = 0x109458u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934812), GPR_U32(ctx, 0));
    // 0x10945c: 0xaf808118
    ctx->pc = 0x10945cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934808), GPR_U32(ctx, 0));
    // 0x109460: 0x3c014080
    ctx->pc = 0x109460u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16512 << 16));
    // 0x109464: 0x4481a800
    ctx->pc = 0x109464u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x109468: 0x3c013000
    ctx->pc = 0x109468u;
    SET_GPR_U32(ctx, 1, ((uint32_t)12288 << 16));
    // 0x10946c: 0x4481a000
    ctx->pc = 0x10946cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_109470:
    // 0x109470: 0xc04acfc
    ctx->pc = 0x109470u;
    SET_GPR_U32(ctx, 31, 0x109478u);
    ctx->pc = 0x12B3F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        rand_0x12b3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109478u; }
    }
    if (ctx->pc != 0x109478u) { return; }
    ctx->pc = 0x109478u;
    // 0x109478: 0x44820000
    ctx->pc = 0x109478u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x10947c: 0x46800020
    ctx->pc = 0x10947cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x109480: 0x46150002
    ctx->pc = 0x109480u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x109484: 0x46140002
    ctx->pc = 0x109484u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x109488: 0x46000064
    ctx->pc = 0x109488u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x10948c: 0x44020800
    ctx->pc = 0x10948cu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x109490: 0x24450001
    ctx->pc = 0x109490u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 1));
    // 0x109494: 0xaf858118
    ctx->pc = 0x109494u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934808), GPR_U32(ctx, 5));
label_109498:
    // 0x109498: 0xc04acfc
    ctx->pc = 0x109498u;
    SET_GPR_U32(ctx, 31, 0x1094A0u);
    ctx->pc = 0x12B3F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        rand_0x12b3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1094A0u; }
    }
    if (ctx->pc != 0x1094A0u) { return; }
    ctx->pc = 0x1094A0u;
    // 0x1094a0: 0x44820000
    ctx->pc = 0x1094a0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1094a4: 0x46800020
    ctx->pc = 0x1094a4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1094a8: 0x46150002
    ctx->pc = 0x1094a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1094ac: 0x46140002
    ctx->pc = 0x1094acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1094b0: 0x46000064
    ctx->pc = 0x1094b0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1094b4: 0x44020800
    ctx->pc = 0x1094b4u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x1094b8: 0x24420001
    ctx->pc = 0x1094b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1094bc: 0xaf82811c
    ctx->pc = 0x1094bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934812), GPR_U32(ctx, 2));
label_1094c0:
    // 0x1094c0: 0xc04acfc
    ctx->pc = 0x1094C0u;
    SET_GPR_U32(ctx, 31, 0x1094C8u);
    ctx->pc = 0x12B3F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        rand_0x12b3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1094C8u; }
    }
    if (ctx->pc != 0x1094C8u) { return; }
    ctx->pc = 0x1094C8u;
    // 0x1094c8: 0x44820000
    ctx->pc = 0x1094c8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1094cc: 0x46800020
    ctx->pc = 0x1094ccu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1094d0: 0x46150002
    ctx->pc = 0x1094d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1094d4: 0x46140002
    ctx->pc = 0x1094d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1094d8: 0x46000064
    ctx->pc = 0x1094d8u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1094dc: 0x44020800
    ctx->pc = 0x1094dcu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x1094e0: 0x24420001
    ctx->pc = 0x1094e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1094e4: 0xaf828120
    ctx->pc = 0x1094e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934816), GPR_U32(ctx, 2));
label_1094e8:
    // 0x1094e8: 0xc04acfc
    ctx->pc = 0x1094E8u;
    SET_GPR_U32(ctx, 31, 0x1094F0u);
    ctx->pc = 0x12B3F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        rand_0x12b3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1094F0u; }
    }
    if (ctx->pc != 0x1094F0u) { return; }
    ctx->pc = 0x1094F0u;
    // 0x1094f0: 0x44820000
    ctx->pc = 0x1094f0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1094f4: 0x46800020
    ctx->pc = 0x1094f4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1094f8: 0x46150002
    ctx->pc = 0x1094f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1094fc: 0x46140002
    ctx->pc = 0x1094fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x109500: 0x46000064
    ctx->pc = 0x109500u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x109504: 0x44020800
    ctx->pc = 0x109504u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x109508: 0x24480001
    ctx->pc = 0x109508u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 1));
    // 0x10950c: 0x1100fff6
    ctx->pc = 0x10950Cu;
    {
        const bool branch_taken_0x10950c = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        ctx->pc = 0x109510u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934820), GPR_U32(ctx, 8));
        if (branch_taken_0x10950c) {
            ctx->pc = 0x1094E8u;
            goto label_1094e8;
        }
    }
    ctx->pc = 0x109514u;
    // 0x109514: 0x8f878120
    ctx->pc = 0x109514u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 28), 4294934816)));
    // 0x109518: 0x1107fff3
    ctx->pc = 0x109518u;
    {
        const bool branch_taken_0x109518 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 7));
        ctx->pc = 0x10951Cu;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294934812)));
        if (branch_taken_0x109518) {
            ctx->pc = 0x1094E8u;
            goto label_1094e8;
        }
    }
    ctx->pc = 0x109520u;
    // 0x109520: 0x1106fff1
    ctx->pc = 0x109520u;
    {
        const bool branch_taken_0x109520 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 6));
        ctx->pc = 0x109524u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294934808)));
        if (branch_taken_0x109520) {
            ctx->pc = 0x1094E8u;
            goto label_1094e8;
        }
    }
    ctx->pc = 0x109528u;
    // 0x109528: 0x1105ffef
    ctx->pc = 0x109528u;
    {
        const bool branch_taken_0x109528 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 5));
        if (branch_taken_0x109528) {
            ctx->pc = 0x1094E8u;
            goto label_1094e8;
        }
    }
    ctx->pc = 0x109530u;
    // 0x109530: 0x10e0ffe3
    ctx->pc = 0x109530u;
    {
        const bool branch_taken_0x109530 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x109530) {
            ctx->pc = 0x1094C0u;
            goto label_1094c0;
        }
    }
    ctx->pc = 0x109538u;
    // 0x109538: 0x10e6ffe1
    ctx->pc = 0x109538u;
    {
        const bool branch_taken_0x109538 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 6));
        if (branch_taken_0x109538) {
            ctx->pc = 0x1094C0u;
            goto label_1094c0;
        }
    }
    ctx->pc = 0x109540u;
    // 0x109540: 0x10e5ffdf
    ctx->pc = 0x109540u;
    {
        const bool branch_taken_0x109540 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 5));
        if (branch_taken_0x109540) {
            ctx->pc = 0x1094C0u;
            goto label_1094c0;
        }
    }
    ctx->pc = 0x109548u;
    // 0x109548: 0x10c0ffd3
    ctx->pc = 0x109548u;
    {
        const bool branch_taken_0x109548 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x109548) {
            ctx->pc = 0x109498u;
            goto label_109498;
        }
    }
    ctx->pc = 0x109550u;
    // 0x109550: 0x10c5ffd1
    ctx->pc = 0x109550u;
    {
        const bool branch_taken_0x109550 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 5));
        if (branch_taken_0x109550) {
            ctx->pc = 0x109498u;
            goto label_109498;
        }
    }
    ctx->pc = 0x109558u;
    // 0x109558: 0x10a0ffc5
    ctx->pc = 0x109558u;
    {
        const bool branch_taken_0x109558 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x10955Cu;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        if (branch_taken_0x109558) {
            ctx->pc = 0x109470u;
            goto label_109470;
        }
    }
    ctx->pc = 0x109560u;
    // 0x109560: 0x2c420001
    ctx->pc = 0x109560u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x109564: 0x471026
    ctx->pc = 0x109564u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x109568: 0x2c420001
    ctx->pc = 0x109568u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x10956c: 0x1048ffc0
    ctx->pc = 0x10956Cu;
    {
        const bool branch_taken_0x10956c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 8));
        ctx->pc = 0x109570u;
        SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
        if (branch_taken_0x10956c) {
            ctx->pc = 0x109470u;
            goto label_109470;
        }
    }
    ctx->pc = 0x109574u;
    // 0x109574: 0xdfbf0000
    ctx->pc = 0x109574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109578: 0xc7b50018
    ctx->pc = 0x109578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x10957c: 0x24843438
    ctx->pc = 0x10957cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13368));
    // 0x109580: 0xc7b40010
    ctx->pc = 0x109580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x109584: 0x8043ef8
    ctx->pc = 0x109584u;
    ctx->pc = 0x109588u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x10FBE0u;
    scePrintf_0x10fbe0(rdram, ctx, runtime); return;
    ctx->pc = 0x10958Cu;
}
