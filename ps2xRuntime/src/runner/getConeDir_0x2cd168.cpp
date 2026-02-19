#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: getConeDir
// Address: 0x2cd168 - 0x2cd308
void getConeDir_0x2cd168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cd168u;

    // 0x2cd168: 0x27bdff90
    ctx->pc = 0x2cd168u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2cd16c: 0xffbf0050
    ctx->pc = 0x2cd16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2cd170: 0xffb30040
    ctx->pc = 0x2cd170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2cd174: 0xffb20030
    ctx->pc = 0x2cd174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2cd178: 0xffb10020
    ctx->pc = 0x2cd178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2cd17c: 0xffb00010
    ctx->pc = 0x2cd17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2cd180: 0xe7b50068
    ctx->pc = 0x2cd180u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2cd184: 0xe7b40060
    ctx->pc = 0x2cd184u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2cd188: 0x80982d
    ctx->pc = 0x2cd188u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd18c: 0x46006506
    ctx->pc = 0x2cd18cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2cd190: 0xc0802d
    ctx->pc = 0x2cd190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd194: 0xe0882d
    ctx->pc = 0x2cd194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd198: 0xc0abc06
    ctx->pc = 0x2CD198u;
    SET_GPR_U32(ctx, 31, 0x2CD1A0u);
    ctx->pc = 0x2CD19Cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2AF018u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbRand_0x2af018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD1A0u; }
    }
    if (ctx->pc != 0x2CD1A0u) { return; }
    ctx->pc = 0x2CD1A0u;
    // 0x2cd1a0: 0x30437fff
    ctx->pc = 0x2cd1a0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 32767));
    // 0x2cd1a4: 0x4600005
    ctx->pc = 0x2CD1A4u;
    {
        const bool branch_taken_0x2cd1a4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CD1A8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2cd1a4) {
            ctx->pc = 0x2CD1BCu;
            goto label_2cd1bc;
        }
    }
    ctx->pc = 0x2CD1ACu;
    // 0x2cd1ac: 0x44830000
    ctx->pc = 0x2cd1acu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2cd1b0: 0x46800020
    ctx->pc = 0x2cd1b0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2cd1b4: 0x10000006
    ctx->pc = 0x2CD1B4u;
    {
        const bool branch_taken_0x2cd1b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cd1b4) {
            ctx->pc = 0x2CD1D0u;
            goto label_2cd1d0;
        }
    }
    ctx->pc = 0x2CD1BCu;
label_2cd1bc:
    // 0x2cd1bc: 0x31842
    ctx->pc = 0x2cd1bcu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2cd1c0: 0x431025
    ctx->pc = 0x2cd1c0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cd1c4: 0x44820000
    ctx->pc = 0x2cd1c4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2cd1c8: 0x46800020
    ctx->pc = 0x2cd1c8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2cd1cc: 0x46000000
    ctx->pc = 0x2cd1ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2cd1d0:
    // 0x2cd1d0: 0x3c013800
    ctx->pc = 0x2cd1d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14336 << 16));
    // 0x2cd1d4: 0x34210100
    ctx->pc = 0x2cd1d4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 256));
    // 0x2cd1d8: 0x44816000
    ctx->pc = 0x2cd1d8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2cd1dc: 0x460ca302
    ctx->pc = 0x2cd1dcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x2cd1e0: 0x3a0202d
    ctx->pc = 0x2cd1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd1e4: 0xc0b3238
    ctx->pc = 0x2CD1E4u;
    SET_GPR_U32(ctx, 31, 0x2CD1ECu);
    ctx->pc = 0x2CD1E8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->pc = 0x2CC8E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getSinCos_0x2cc8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD1ECu; }
    }
    if (ctx->pc != 0x2CD1ECu) { return; }
    ctx->pc = 0x2CD1ECu;
    // 0x2cd1ec: 0xc0abc06
    ctx->pc = 0x2CD1ECu;
    SET_GPR_U32(ctx, 31, 0x2CD1F4u);
    ctx->pc = 0x2CD1F0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x2AF018u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbRand_0x2af018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD1F4u; }
    }
    if (ctx->pc != 0x2CD1F4u) { return; }
    ctx->pc = 0x2CD1F4u;
    // 0x2cd1f4: 0x30437fff
    ctx->pc = 0x2cd1f4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 32767));
    // 0x2cd1f8: 0x4600005
    ctx->pc = 0x2CD1F8u;
    {
        const bool branch_taken_0x2cd1f8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2CD1FCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2cd1f8) {
            ctx->pc = 0x2CD210u;
            goto label_2cd210;
        }
    }
    ctx->pc = 0x2CD200u;
    // 0x2cd200: 0x44830000
    ctx->pc = 0x2cd200u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x2cd204: 0x46800020
    ctx->pc = 0x2cd204u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2cd208: 0x10000006
    ctx->pc = 0x2CD208u;
    {
        const bool branch_taken_0x2cd208 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cd208) {
            ctx->pc = 0x2CD224u;
            goto label_2cd224;
        }
    }
    ctx->pc = 0x2CD210u;
label_2cd210:
    // 0x2cd210: 0x31842
    ctx->pc = 0x2cd210u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 3), 1));
    // 0x2cd214: 0x431025
    ctx->pc = 0x2cd214u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cd218: 0x44820000
    ctx->pc = 0x2cd218u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2cd21c: 0x46800020
    ctx->pc = 0x2cd21cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2cd220: 0x46000000
    ctx->pc = 0x2cd220u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2cd224:
    // 0x2cd224: 0x3c0138c9
    ctx->pc = 0x2cd224u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14537 << 16));
    // 0x2cd228: 0x3421116d
    ctx->pc = 0x2cd228u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4461));
    // 0x2cd22c: 0x44816000
    ctx->pc = 0x2cd22cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2cd230: 0x27a40004
    ctx->pc = 0x2cd230u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 4));
    // 0x2cd234: 0xc0b3238
    ctx->pc = 0x2CD234u;
    SET_GPR_U32(ctx, 31, 0x2CD23Cu);
    ctx->pc = 0x2CD238u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->pc = 0x2CC8E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getSinCos_0x2cc8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD23Cu; }
    }
    if (ctx->pc != 0x2CD23Cu) { return; }
    ctx->pc = 0x2CD23Cu;
    // 0x2cd23c: 0xc0abc06
    ctx->pc = 0x2CD23Cu;
    SET_GPR_U32(ctx, 31, 0x2CD244u);
    ctx->pc = 0x2CD240u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x2AF018u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbRand_0x2af018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CD244u; }
    }
    if (ctx->pc != 0x2CD244u) { return; }
    ctx->pc = 0x2CD244u;
    // 0x2cd244: 0x30420004
    ctx->pc = 0x2cd244u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x2cd248: 0x54400001
    ctx->pc = 0x2CD248u;
    {
        const bool branch_taken_0x2cd248 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2cd248) {
            ctx->pc = 0x2CD24Cu;
            ctx->f[20] = FPU_NEG_S(ctx->f[20]);
            ctx->pc = 0x2CD250u;
            goto label_2cd250;
        }
    }
    ctx->pc = 0x2CD250u;
label_2cd250:
    // 0x2cd250: 0x4615a502
    ctx->pc = 0x2cd250u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x2cd254: 0xc7a00004
    ctx->pc = 0x2cd254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd258: 0x4600a802
    ctx->pc = 0x2cd258u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x2cd25c: 0xe7a00004
    ctx->pc = 0x2cd25cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2cd260: 0xc7a10000
    ctx->pc = 0x2cd260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd264: 0xc6000000
    ctx->pc = 0x2cd264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd268: 0x46000842
    ctx->pc = 0x2cd268u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cd26c: 0xc7a00004
    ctx->pc = 0x2cd26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd270: 0xc6220000
    ctx->pc = 0x2cd270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cd274: 0x46020002
    ctx->pc = 0x2cd274u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2cd278: 0x46000840
    ctx->pc = 0x2cd278u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cd27c: 0xc6400000
    ctx->pc = 0x2cd27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd280: 0x4600a002
    ctx->pc = 0x2cd280u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2cd284: 0x46000840
    ctx->pc = 0x2cd284u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cd288: 0xe6610000
    ctx->pc = 0x2cd288u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x2cd28c: 0xc7a10000
    ctx->pc = 0x2cd28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd290: 0xc6000004
    ctx->pc = 0x2cd290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd294: 0x46000842
    ctx->pc = 0x2cd294u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cd298: 0xc7a00004
    ctx->pc = 0x2cd298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd29c: 0xc6220004
    ctx->pc = 0x2cd29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cd2a0: 0x46020002
    ctx->pc = 0x2cd2a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2cd2a4: 0x46000840
    ctx->pc = 0x2cd2a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cd2a8: 0xc6400004
    ctx->pc = 0x2cd2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd2ac: 0x4600a002
    ctx->pc = 0x2cd2acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2cd2b0: 0x46000840
    ctx->pc = 0x2cd2b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cd2b4: 0xe6610004
    ctx->pc = 0x2cd2b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x2cd2b8: 0xc7a10000
    ctx->pc = 0x2cd2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cd2bc: 0xc6000008
    ctx->pc = 0x2cd2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd2c0: 0x46000842
    ctx->pc = 0x2cd2c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cd2c4: 0xc7a00004
    ctx->pc = 0x2cd2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd2c8: 0xc6220008
    ctx->pc = 0x2cd2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cd2cc: 0x46020002
    ctx->pc = 0x2cd2ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2cd2d0: 0x46000840
    ctx->pc = 0x2cd2d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cd2d4: 0xc6400008
    ctx->pc = 0x2cd2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd2d8: 0x4600a002
    ctx->pc = 0x2cd2d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2cd2dc: 0x46000840
    ctx->pc = 0x2cd2dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cd2e0: 0xe6610008
    ctx->pc = 0x2cd2e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x2cd2e4: 0xdfbf0050
    ctx->pc = 0x2cd2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cd2e8: 0xdfb30040
    ctx->pc = 0x2cd2e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cd2ec: 0xdfb20030
    ctx->pc = 0x2cd2ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cd2f0: 0xdfb10020
    ctx->pc = 0x2cd2f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cd2f4: 0xdfb00010
    ctx->pc = 0x2cd2f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd2f8: 0xc7b50068
    ctx->pc = 0x2cd2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2cd2fc: 0xc7b40060
    ctx->pc = 0x2cd2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cd300: 0x3e00008
    ctx->pc = 0x2CD300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD304u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CD1BCu: goto label_2cd1bc;
            case 0x2CD1D0u: goto label_2cd1d0;
            case 0x2CD210u: goto label_2cd210;
            case 0x2CD224u: goto label_2cd224;
            case 0x2CD250u: goto label_2cd250;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CD308u;
}
