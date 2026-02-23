#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: calcXYZ__7CFcurveFP11tagNLpoint3
// Address: 0x1e7320 - 0x1e7600
void calcXYZ__7CFcurveFP11tagNLpoint3_0x1e7320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("calcXYZ__7CFcurveFP11tagNLpoint3");


    ctx->pc = 0x1e7320u;

    // 0x1e7320: 0x27bdffd0
    ctx->pc = 0x1e7320u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e7324: 0x7fbf0020
    ctx->pc = 0x1e7324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1e7328: 0x7fb10010
    ctx->pc = 0x1e7328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e732c: 0x7fb00000
    ctx->pc = 0x1e732cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e7330: 0x70a08628
    ctx->pc = 0x1e7330u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e7334: 0x8c850000
    ctx->pc = 0x1e7334u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e7338: 0x10a00037
    ctx->pc = 0x1E7338u;
    {
        const bool branch_taken_0x1e7338 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E733Cu;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e7338) {
            ctx->pc = 0x1E7418u;
            goto label_1e7418;
        }
    }
    ctx->pc = 0x1E7340u;
    // 0x1e7340: 0x86260016
    ctx->pc = 0x1e7340u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x1e7344: 0x86240010
    ctx->pc = 0x1e7344u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1e7348: 0x24c30001
    ctx->pc = 0x1e7348u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e734c: 0x14640007
    ctx->pc = 0x1E734Cu;
    {
        const bool branch_taken_0x1e734c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x1E7350u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x1e734c) {
            ctx->pc = 0x1E736Cu;
            goto label_1e736c;
        }
    }
    ctx->pc = 0x1E7354u;
    // 0x1e7354: 0x641821
    ctx->pc = 0x1e7354u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e7358: 0x31880
    ctx->pc = 0x1e7358u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e735c: 0x651821
    ctx->pc = 0x1e735cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e7360: 0xc460fffc
    ctx->pc = 0x1e7360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7364: 0x1000002d
    ctx->pc = 0x1E7364u;
    {
        const bool branch_taken_0x1e7364 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E7368u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        if (branch_taken_0x1e7364) {
            ctx->pc = 0x1E741Cu;
            goto label_1e741c;
        }
    }
    ctx->pc = 0x1E736Cu;
label_1e736c:
    // 0x1e736c: 0x54c0000f
    ctx->pc = 0x1E736Cu;
    {
        const bool branch_taken_0x1e736c = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e736c) {
            ctx->pc = 0x1E7370u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
            ctx->pc = 0x1E73ACu;
            goto label_1e73ac;
        }
    }
    ctx->pc = 0x1E7374u;
    // 0x1e7374: 0x61880
    ctx->pc = 0x1e7374u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1e7378: 0x661821
    ctx->pc = 0x1e7378u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1e737c: 0x31880
    ctx->pc = 0x1e737cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e7380: 0xa31821
    ctx->pc = 0x1e7380u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1e7384: 0xc621000c
    ctx->pc = 0x1e7384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7388: 0xc4600000
    ctx->pc = 0x1e7388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e738c: 0x46000836
    ctx->pc = 0x1e738cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7390: 0x0
    ctx->pc = 0x1e7390u;
    // NOP
    // 0x1e7394: 0x45000004
    ctx->pc = 0x1E7394u;
    {
        const bool branch_taken_0x1e7394 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e7394) {
            ctx->pc = 0x1E73A8u;
            goto label_1e73a8;
        }
    }
    ctx->pc = 0x1E739Cu;
    // 0x1e739c: 0xc4a00010
    ctx->pc = 0x1e739cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e73a0: 0x1000001e
    ctx->pc = 0x1E73A0u;
    {
        const bool branch_taken_0x1e73a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E73A4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        if (branch_taken_0x1e73a0) {
            ctx->pc = 0x1E741Cu;
            goto label_1e741c;
        }
    }
    ctx->pc = 0x1E73A8u;
label_1e73a8:
    // 0x1e73a8: 0x61080
    ctx->pc = 0x1e73a8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
label_1e73ac:
    // 0x1e73ac: 0x461021
    ctx->pc = 0x1e73acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1e73b0: 0x21080
    ctx->pc = 0x1e73b0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e73b4: 0x451021
    ctx->pc = 0x1e73b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1e73b8: 0xc4410000
    ctx->pc = 0x1e73b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e73bc: 0xc4440014
    ctx->pc = 0x1e73bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e73c0: 0xc4430004
    ctx->pc = 0x1e73c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e73c4: 0xc4400018
    ctx->pc = 0x1e73c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e73c8: 0xc622000c
    ctx->pc = 0x1e73c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e73cc: 0x72202628
    ctx->pc = 0x1e73ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e73d0: 0x46000864
    ctx->pc = 0x1e73d0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1e73d4: 0x44020800
    ctx->pc = 0x1e73d4u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x1e73d8: 0x46002124
    ctx->pc = 0x1e73d8u;
    *(int32_t*)&ctx->f[4] = FPU_CVT_W_S(ctx->f[4]);
    // 0x1e73dc: 0x46800860
    ctx->pc = 0x1e73dcu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1e73e0: 0x44032000
    ctx->pc = 0x1e73e0u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[4]);
    // 0x1e73e4: 0x46011081
    ctx->pc = 0x1e73e4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1e73e8: 0x621023
    ctx->pc = 0x1e73e8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e73ec: 0x44820800
    ctx->pc = 0x1e73ecu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1e73f0: 0x0
    ctx->pc = 0x1e73f0u;
    // NOP
    // 0x1e73f4: 0x46030001
    ctx->pc = 0x1e73f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1e73f8: 0x46800860
    ctx->pc = 0x1e73f8u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1e73fc: 0x46011043
    ctx->pc = 0x1e73fcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x1e7400: 0x0
    ctx->pc = 0x1e7400u;
    // NOP
    // 0x1e7404: 0x46010002
    ctx->pc = 0x1e7404u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e7408: 0xc079d80
    ctx->pc = 0x1E7408u;
    SET_GPR_U32(ctx, 31, 0x1E7410u);
    ctx->pc = 0x1E740Cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    ctx->pc = 0x1E7600u;
    {
        const uint32_t __entryPc = ctx->pc;
        calc__7CFcurveFP8_KEYDATAif_0x1e7600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E7410u; }
        else if (ctx->pc != 0x1E7410u) { ctx->pc = 0x1E7410u; }
    }
    if (ctx->pc != 0x1E7410u) { return; }
    ctx->pc = 0x1E7410u;
    // 0x1e7410: 0x10000002
    ctx->pc = 0x1E7410u;
    {
        const bool branch_taken_0x1e7410 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E7414u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        if (branch_taken_0x1e7410) {
            ctx->pc = 0x1E741Cu;
            goto label_1e741c;
        }
    }
    ctx->pc = 0x1E7418u;
label_1e7418:
    // 0x1e7418: 0xae000000
    ctx->pc = 0x1e7418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1e741c:
    // 0x1e741c: 0x8e250004
    ctx->pc = 0x1e741cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e7420: 0x10a00037
    ctx->pc = 0x1E7420u;
    {
        const bool branch_taken_0x1e7420 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7420) {
            ctx->pc = 0x1E7500u;
            goto label_1e7500;
        }
    }
    ctx->pc = 0x1E7428u;
    // 0x1e7428: 0x86260018
    ctx->pc = 0x1e7428u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1e742c: 0x86240012
    ctx->pc = 0x1e742cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x1e7430: 0x24c30001
    ctx->pc = 0x1e7430u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e7434: 0x14640007
    ctx->pc = 0x1E7434u;
    {
        const bool branch_taken_0x1e7434 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x1E7438u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x1e7434) {
            ctx->pc = 0x1E7454u;
            goto label_1e7454;
        }
    }
    ctx->pc = 0x1E743Cu;
    // 0x1e743c: 0x641821
    ctx->pc = 0x1e743cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e7440: 0x31880
    ctx->pc = 0x1e7440u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e7444: 0x651821
    ctx->pc = 0x1e7444u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e7448: 0xc460fffc
    ctx->pc = 0x1e7448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e744c: 0x1000002d
    ctx->pc = 0x1E744Cu;
    {
        const bool branch_taken_0x1e744c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E7450u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        if (branch_taken_0x1e744c) {
            ctx->pc = 0x1E7504u;
            goto label_1e7504;
        }
    }
    ctx->pc = 0x1E7454u;
label_1e7454:
    // 0x1e7454: 0x54c0000f
    ctx->pc = 0x1E7454u;
    {
        const bool branch_taken_0x1e7454 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e7454) {
            ctx->pc = 0x1E7458u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
            ctx->pc = 0x1E7494u;
            goto label_1e7494;
        }
    }
    ctx->pc = 0x1E745Cu;
    // 0x1e745c: 0x61880
    ctx->pc = 0x1e745cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1e7460: 0x661821
    ctx->pc = 0x1e7460u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1e7464: 0x31880
    ctx->pc = 0x1e7464u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e7468: 0xa31821
    ctx->pc = 0x1e7468u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1e746c: 0xc621000c
    ctx->pc = 0x1e746cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7470: 0xc4600000
    ctx->pc = 0x1e7470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7474: 0x46000836
    ctx->pc = 0x1e7474u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7478: 0x0
    ctx->pc = 0x1e7478u;
    // NOP
    // 0x1e747c: 0x45000004
    ctx->pc = 0x1E747Cu;
    {
        const bool branch_taken_0x1e747c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e747c) {
            ctx->pc = 0x1E7490u;
            goto label_1e7490;
        }
    }
    ctx->pc = 0x1E7484u;
    // 0x1e7484: 0xc4a00010
    ctx->pc = 0x1e7484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7488: 0x1000001e
    ctx->pc = 0x1E7488u;
    {
        const bool branch_taken_0x1e7488 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E748Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        if (branch_taken_0x1e7488) {
            ctx->pc = 0x1E7504u;
            goto label_1e7504;
        }
    }
    ctx->pc = 0x1E7490u;
label_1e7490:
    // 0x1e7490: 0x61080
    ctx->pc = 0x1e7490u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
label_1e7494:
    // 0x1e7494: 0x461021
    ctx->pc = 0x1e7494u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1e7498: 0x21080
    ctx->pc = 0x1e7498u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e749c: 0x451021
    ctx->pc = 0x1e749cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1e74a0: 0xc4410000
    ctx->pc = 0x1e74a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e74a4: 0xc4430014
    ctx->pc = 0x1e74a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e74a8: 0xc4440004
    ctx->pc = 0x1e74a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e74ac: 0xc4400018
    ctx->pc = 0x1e74acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e74b0: 0xc622000c
    ctx->pc = 0x1e74b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e74b4: 0x72202628
    ctx->pc = 0x1e74b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e74b8: 0x46000864
    ctx->pc = 0x1e74b8u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1e74bc: 0x44020800
    ctx->pc = 0x1e74bcu;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x1e74c0: 0x460018e4
    ctx->pc = 0x1e74c0u;
    *(int32_t*)&ctx->f[3] = FPU_CVT_W_S(ctx->f[3]);
    // 0x1e74c4: 0x46800860
    ctx->pc = 0x1e74c4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1e74c8: 0x44031800
    ctx->pc = 0x1e74c8u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[3]);
    // 0x1e74cc: 0x46011081
    ctx->pc = 0x1e74ccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1e74d0: 0x621023
    ctx->pc = 0x1e74d0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e74d4: 0x44820800
    ctx->pc = 0x1e74d4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1e74d8: 0x0
    ctx->pc = 0x1e74d8u;
    // NOP
    // 0x1e74dc: 0x46040001
    ctx->pc = 0x1e74dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x1e74e0: 0x46800860
    ctx->pc = 0x1e74e0u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1e74e4: 0x46011043
    ctx->pc = 0x1e74e4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x1e74e8: 0x0
    ctx->pc = 0x1e74e8u;
    // NOP
    // 0x1e74ec: 0x46010002
    ctx->pc = 0x1e74ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e74f0: 0xc079d80
    ctx->pc = 0x1E74F0u;
    SET_GPR_U32(ctx, 31, 0x1E74F8u);
    ctx->pc = 0x1E74F4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    ctx->pc = 0x1E7600u;
    {
        const uint32_t __entryPc = ctx->pc;
        calc__7CFcurveFP8_KEYDATAif_0x1e7600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E74F8u; }
        else if (ctx->pc != 0x1E74F8u) { ctx->pc = 0x1E74F8u; }
    }
    if (ctx->pc != 0x1E74F8u) { return; }
    ctx->pc = 0x1E74F8u;
    // 0x1e74f8: 0x10000002
    ctx->pc = 0x1E74F8u;
    {
        const bool branch_taken_0x1e74f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E74FCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        if (branch_taken_0x1e74f8) {
            ctx->pc = 0x1E7504u;
            goto label_1e7504;
        }
    }
    ctx->pc = 0x1E7500u;
label_1e7500:
    // 0x1e7500: 0xae000004
    ctx->pc = 0x1e7500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1e7504:
    // 0x1e7504: 0x8e250008
    ctx->pc = 0x1e7504u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e7508: 0x10a00037
    ctx->pc = 0x1E7508u;
    {
        const bool branch_taken_0x1e7508 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e7508) {
            ctx->pc = 0x1E75E8u;
            goto label_1e75e8;
        }
    }
    ctx->pc = 0x1E7510u;
    // 0x1e7510: 0x8626001a
    ctx->pc = 0x1e7510u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x1e7514: 0x86240014
    ctx->pc = 0x1e7514u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1e7518: 0x24c30001
    ctx->pc = 0x1e7518u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e751c: 0x14640007
    ctx->pc = 0x1E751Cu;
    {
        const bool branch_taken_0x1e751c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x1E7520u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x1e751c) {
            ctx->pc = 0x1E753Cu;
            goto label_1e753c;
        }
    }
    ctx->pc = 0x1E7524u;
    // 0x1e7524: 0x641821
    ctx->pc = 0x1e7524u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e7528: 0x31880
    ctx->pc = 0x1e7528u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e752c: 0x651821
    ctx->pc = 0x1e752cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e7530: 0xc460fffc
    ctx->pc = 0x1e7530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7534: 0x1000002d
    ctx->pc = 0x1E7534u;
    {
        const bool branch_taken_0x1e7534 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E7538u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        if (branch_taken_0x1e7534) {
            ctx->pc = 0x1E75ECu;
            goto label_1e75ec;
        }
    }
    ctx->pc = 0x1E753Cu;
label_1e753c:
    // 0x1e753c: 0x54c0000f
    ctx->pc = 0x1E753Cu;
    {
        const bool branch_taken_0x1e753c = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e753c) {
            ctx->pc = 0x1E7540u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
            ctx->pc = 0x1E757Cu;
            goto label_1e757c;
        }
    }
    ctx->pc = 0x1E7544u;
    // 0x1e7544: 0x61880
    ctx->pc = 0x1e7544u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1e7548: 0x661821
    ctx->pc = 0x1e7548u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1e754c: 0x31880
    ctx->pc = 0x1e754cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e7550: 0xa31821
    ctx->pc = 0x1e7550u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1e7554: 0xc621000c
    ctx->pc = 0x1e7554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e7558: 0xc4600000
    ctx->pc = 0x1e7558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e755c: 0x46000836
    ctx->pc = 0x1e755cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e7560: 0x0
    ctx->pc = 0x1e7560u;
    // NOP
    // 0x1e7564: 0x45000004
    ctx->pc = 0x1E7564u;
    {
        const bool branch_taken_0x1e7564 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e7564) {
            ctx->pc = 0x1E7578u;
            goto label_1e7578;
        }
    }
    ctx->pc = 0x1E756Cu;
    // 0x1e756c: 0xc4a00010
    ctx->pc = 0x1e756cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7570: 0x1000001e
    ctx->pc = 0x1E7570u;
    {
        const bool branch_taken_0x1e7570 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E7574u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        if (branch_taken_0x1e7570) {
            ctx->pc = 0x1E75ECu;
            goto label_1e75ec;
        }
    }
    ctx->pc = 0x1E7578u;
label_1e7578:
    // 0x1e7578: 0x61080
    ctx->pc = 0x1e7578u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
label_1e757c:
    // 0x1e757c: 0x461021
    ctx->pc = 0x1e757cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1e7580: 0x21080
    ctx->pc = 0x1e7580u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e7584: 0x451021
    ctx->pc = 0x1e7584u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1e7588: 0xc4410000
    ctx->pc = 0x1e7588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e758c: 0xc4430014
    ctx->pc = 0x1e758cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1e7590: 0xc4440004
    ctx->pc = 0x1e7590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1e7594: 0xc4400018
    ctx->pc = 0x1e7594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e7598: 0xc622000c
    ctx->pc = 0x1e7598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e759c: 0x72202628
    ctx->pc = 0x1e759cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e75a0: 0x46000864
    ctx->pc = 0x1e75a0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1e75a4: 0x44020800
    ctx->pc = 0x1e75a4u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x1e75a8: 0x460018e4
    ctx->pc = 0x1e75a8u;
    *(int32_t*)&ctx->f[3] = FPU_CVT_W_S(ctx->f[3]);
    // 0x1e75ac: 0x46800860
    ctx->pc = 0x1e75acu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1e75b0: 0x44031800
    ctx->pc = 0x1e75b0u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[3]);
    // 0x1e75b4: 0x46011081
    ctx->pc = 0x1e75b4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1e75b8: 0x621023
    ctx->pc = 0x1e75b8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e75bc: 0x44820800
    ctx->pc = 0x1e75bcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1e75c0: 0x0
    ctx->pc = 0x1e75c0u;
    // NOP
    // 0x1e75c4: 0x46040001
    ctx->pc = 0x1e75c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x1e75c8: 0x46800860
    ctx->pc = 0x1e75c8u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x1e75cc: 0x46011043
    ctx->pc = 0x1e75ccu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x1e75d0: 0x0
    ctx->pc = 0x1e75d0u;
    // NOP
    // 0x1e75d4: 0x46010002
    ctx->pc = 0x1e75d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e75d8: 0xc079d80
    ctx->pc = 0x1E75D8u;
    SET_GPR_U32(ctx, 31, 0x1E75E0u);
    ctx->pc = 0x1E75DCu;
    ctx->f[12] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    ctx->pc = 0x1E7600u;
    {
        const uint32_t __entryPc = ctx->pc;
        calc__7CFcurveFP8_KEYDATAif_0x1e7600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E75E0u; }
        else if (ctx->pc != 0x1E75E0u) { ctx->pc = 0x1E75E0u; }
    }
    if (ctx->pc != 0x1E75E0u) { return; }
    ctx->pc = 0x1E75E0u;
    // 0x1e75e0: 0x10000002
    ctx->pc = 0x1E75E0u;
    {
        const bool branch_taken_0x1e75e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E75E4u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        if (branch_taken_0x1e75e0) {
            ctx->pc = 0x1E75ECu;
            goto label_1e75ec;
        }
    }
    ctx->pc = 0x1E75E8u;
label_1e75e8:
    // 0x1e75e8: 0xae000008
    ctx->pc = 0x1e75e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1e75ec:
    // 0x1e75ec: 0x7bbf0020
    ctx->pc = 0x1e75ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e75f0: 0x7bb10010
    ctx->pc = 0x1e75f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e75f4: 0x7bb00000
    ctx->pc = 0x1e75f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e75f8: 0x3e00008
    ctx->pc = 0x1E75F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E75FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E736Cu: goto label_1e736c;
            case 0x1E73A8u: goto label_1e73a8;
            case 0x1E73ACu: goto label_1e73ac;
            case 0x1E7418u: goto label_1e7418;
            case 0x1E741Cu: goto label_1e741c;
            case 0x1E7454u: goto label_1e7454;
            case 0x1E7490u: goto label_1e7490;
            case 0x1E7494u: goto label_1e7494;
            case 0x1E7500u: goto label_1e7500;
            case 0x1E7504u: goto label_1e7504;
            case 0x1E753Cu: goto label_1e753c;
            case 0x1E7578u: goto label_1e7578;
            case 0x1E757Cu: goto label_1e757c;
            case 0x1E75E8u: goto label_1e75e8;
            case 0x1E75ECu: goto label_1e75ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E7600u;
}
