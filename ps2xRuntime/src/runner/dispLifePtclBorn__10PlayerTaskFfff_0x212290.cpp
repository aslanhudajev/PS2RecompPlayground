#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dispLifePtclBorn__10PlayerTaskFfff
// Address: 0x212290 - 0x212490
void dispLifePtclBorn__10PlayerTaskFfff_0x212290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dispLifePtclBorn__10PlayerTaskFfff");


    ctx->pc = 0x212290u;

    // 0x212290: 0x27bdffc0
    ctx->pc = 0x212290u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x212294: 0x7fbf0030
    ctx->pc = 0x212294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x212298: 0x7fb10020
    ctx->pc = 0x212298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x21229c: 0x7fb00010
    ctx->pc = 0x21229cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2122a0: 0xe7b60008
    ctx->pc = 0x2122a0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2122a4: 0xe7b50004
    ctx->pc = 0x2122a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2122a8: 0xe7b40000
    ctx->pc = 0x2122a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2122ac: 0x24901cc4
    ctx->pc = 0x2122acu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 4), 7364));
    // 0x2122b0: 0x249124c4
    ctx->pc = 0x2122b0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 4), 9412));
    // 0x2122b4: 0x3c020050
    ctx->pc = 0x2122b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x2122b8: 0x46006586
    ctx->pc = 0x2122b8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x2122bc: 0x46006d46
    ctx->pc = 0x2122bcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2122c0: 0x46007506
    ctx->pc = 0x2122c0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    // 0x2122c4: 0xc07ce18
    ctx->pc = 0x2122C4u;
    SET_GPR_U32(ctx, 31, 0x2122CCu);
    ctx->pc = 0x2122C8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2122CCu; }
        else if (ctx->pc != 0x2122CCu) { ctx->pc = 0x2122CCu; }
    }
    if (ctx->pc != 0x2122CCu) { return; }
    ctx->pc = 0x2122CCu;
    // 0x2122cc: 0x1c400068
    ctx->pc = 0x2122CCu;
    {
        const bool branch_taken_0x2122cc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2122D0u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x2122cc) {
            ctx->pc = 0x212470u;
            goto label_212470;
        }
    }
    ctx->pc = 0x2122D4u;
label_2122d4:
    // 0x2122d4: 0x8e030018
    ctx->pc = 0x2122d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2122d8: 0x54600061
    ctx->pc = 0x2122D8u;
    {
        const bool branch_taken_0x2122d8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2122d8) {
            ctx->pc = 0x2122DCu;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x212460u;
            goto label_212460;
        }
    }
    ctx->pc = 0x2122E0u;
    // 0x2122e0: 0xe6160000
    ctx->pc = 0x2122e0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2122e4: 0xc069fb8
    ctx->pc = 0x2122E4u;
    SET_GPR_U32(ctx, 31, 0x2122ECu);
    ctx->pc = 0x2122E8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2122ECu; }
        else if (ctx->pc != 0x2122ECu) { ctx->pc = 0x2122ECu; }
    }
    if (ctx->pc != 0x2122ECu) { return; }
    ctx->pc = 0x2122ECu;
    // 0x2122ec: 0x2403000a
    ctx->pc = 0x2122ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x2122f0: 0x43001a
    ctx->pc = 0x2122f0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2122f4: 0x0
    ctx->pc = 0x2122f4u;
    // NOP
    // 0x2122f8: 0x0
    ctx->pc = 0x2122f8u;
    // NOP
    // 0x2122fc: 0x1010
    ctx->pc = 0x2122fcu;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x212300: 0x28410005
    ctx->pc = 0x212300u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), 5));
    // 0x212304: 0x10200012
    ctx->pc = 0x212304u;
    {
        const bool branch_taken_0x212304 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x212304) {
            ctx->pc = 0x212350u;
            goto label_212350;
        }
    }
    ctx->pc = 0x21230Cu;
    // 0x21230c: 0xc069fb8
    ctx->pc = 0x21230Cu;
    SET_GPR_U32(ctx, 31, 0x212314u);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212314u; }
        else if (ctx->pc != 0x212314u) { ctx->pc = 0x212314u; }
    }
    if (ctx->pc != 0x212314u) { return; }
    ctx->pc = 0x212314u;
    // 0x212314: 0x24030005
    ctx->pc = 0x212314u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x212318: 0x43001a
    ctx->pc = 0x212318u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x21231c: 0xc6000000
    ctx->pc = 0x21231cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212320: 0x3c023951
    ctx->pc = 0x212320u;
    SET_GPR_U32(ctx, 2, ((uint32_t)14673 << 16));
    // 0x212324: 0x3442b717
    ctx->pc = 0x212324u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46871));
    // 0x212328: 0x44820800
    ctx->pc = 0x212328u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x21232c: 0x1010
    ctx->pc = 0x21232cu;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x212330: 0x2442fffe
    ctx->pc = 0x212330u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x212334: 0x44821000
    ctx->pc = 0x212334u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x212338: 0x0
    ctx->pc = 0x212338u;
    // NOP
    // 0x21233c: 0x468010a0
    ctx->pc = 0x21233cu;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x212340: 0x46020842
    ctx->pc = 0x212340u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x212344: 0x46010000
    ctx->pc = 0x212344u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x212348: 0x10000011
    ctx->pc = 0x212348u;
    {
        const bool branch_taken_0x212348 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21234Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        if (branch_taken_0x212348) {
            ctx->pc = 0x212390u;
            goto label_212390;
        }
    }
    ctx->pc = 0x212350u;
label_212350:
    // 0x212350: 0xc069fb8
    ctx->pc = 0x212350u;
    SET_GPR_U32(ctx, 31, 0x212358u);
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212358u; }
        else if (ctx->pc != 0x212358u) { ctx->pc = 0x212358u; }
    }
    if (ctx->pc != 0x212358u) { return; }
    ctx->pc = 0x212358u;
    // 0x212358: 0x24030005
    ctx->pc = 0x212358u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x21235c: 0x43001a
    ctx->pc = 0x21235cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x212360: 0xc6000004
    ctx->pc = 0x212360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212364: 0x3c023951
    ctx->pc = 0x212364u;
    SET_GPR_U32(ctx, 2, ((uint32_t)14673 << 16));
    // 0x212368: 0x3442b717
    ctx->pc = 0x212368u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 46871));
    // 0x21236c: 0x44820800
    ctx->pc = 0x21236cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x212370: 0x1010
    ctx->pc = 0x212370u;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x212374: 0x2442fffe
    ctx->pc = 0x212374u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x212378: 0x44821000
    ctx->pc = 0x212378u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x21237c: 0x0
    ctx->pc = 0x21237cu;
    // NOP
    // 0x212380: 0x468010a0
    ctx->pc = 0x212380u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x212384: 0x46020842
    ctx->pc = 0x212384u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x212388: 0x46010000
    ctx->pc = 0x212388u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21238c: 0xe6000004
    ctx->pc = 0x21238cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_212390:
    // 0x212390: 0xe6140008
    ctx->pc = 0x212390u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x212394: 0xc6200018
    ctx->pc = 0x212394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x212398: 0xc069fb8
    ctx->pc = 0x212398u;
    SET_GPR_U32(ctx, 31, 0x2123A0u);
    ctx->pc = 0x21239Cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2123A0u; }
        else if (ctx->pc != 0x2123A0u) { ctx->pc = 0x2123A0u; }
    }
    if (ctx->pc != 0x2123A0u) { return; }
    ctx->pc = 0x2123A0u;
    // 0x2123a0: 0x24030003
    ctx->pc = 0x2123a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2123a4: 0x43001a
    ctx->pc = 0x2123a4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2123a8: 0x0
    ctx->pc = 0x2123a8u;
    // NOP
    // 0x2123ac: 0x0
    ctx->pc = 0x2123acu;
    // NOP
    // 0x2123b0: 0x1810
    ctx->pc = 0x2123b0u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x2123b4: 0x3c023727
    ctx->pc = 0x2123b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)14119 << 16));
    // 0x2123b8: 0x3442c5ac
    ctx->pc = 0x2123b8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 50604));
    // 0x2123bc: 0x24630002
    ctx->pc = 0x2123bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x2123c0: 0x31823
    ctx->pc = 0x2123c0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2123c4: 0x44830800
    ctx->pc = 0x2123c4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x2123c8: 0x44820000
    ctx->pc = 0x2123c8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2123cc: 0x0
    ctx->pc = 0x2123ccu;
    // NOP
    // 0x2123d0: 0x46800860
    ctx->pc = 0x2123d0u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2123d4: 0x24020001
    ctx->pc = 0x2123d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2123d8: 0x46010002
    ctx->pc = 0x2123d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2123dc: 0xe6000010
    ctx->pc = 0x2123dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2123e0: 0xae000014
    ctx->pc = 0x2123e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2123e4: 0xae020018
    ctx->pc = 0x2123e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2123e8: 0xae00001c
    ctx->pc = 0x2123e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2123ec: 0xae000020
    ctx->pc = 0x2123ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2123f0: 0xc069fb8
    ctx->pc = 0x2123F0u;
    SET_GPR_U32(ctx, 31, 0x2123F8u);
    ctx->pc = 0x2123F4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2123F8u; }
        else if (ctx->pc != 0x2123F8u) { ctx->pc = 0x2123F8u; }
    }
    if (ctx->pc != 0x2123F8u) { return; }
    ctx->pc = 0x2123F8u;
    // 0x2123f8: 0x30420fff
    ctx->pc = 0x2123f8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4095));
    // 0x2123fc: 0xc069fb8
    ctx->pc = 0x2123FCu;
    SET_GPR_U32(ctx, 31, 0x212404u);
    ctx->pc = 0x212400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212404u; }
        else if (ctx->pc != 0x212404u) { ctx->pc = 0x212404u; }
    }
    if (ctx->pc != 0x212404u) { return; }
    ctx->pc = 0x212404u;
    // 0x212404: 0x30420fff
    ctx->pc = 0x212404u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4095));
    // 0x212408: 0xae020034
    ctx->pc = 0x212408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x21240c: 0x3c023aad
    ctx->pc = 0x21240cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)15021 << 16));
    // 0x212410: 0x344203da
    ctx->pc = 0x212410u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 986));
    // 0x212414: 0xc069fb8
    ctx->pc = 0x212414u;
    SET_GPR_U32(ctx, 31, 0x21241Cu);
    ctx->pc = 0x212418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    ctx->pc = 0x1A7EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlRand_0x1a7ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21241Cu; }
        else if (ctx->pc != 0x21241Cu) { ctx->pc = 0x21241Cu; }
    }
    if (ctx->pc != 0x21241Cu) { return; }
    ctx->pc = 0x21241Cu;
    // 0x21241c: 0x4410004
    ctx->pc = 0x21241Cu;
    {
        const bool branch_taken_0x21241c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x212420u;
        SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 3));
        if (branch_taken_0x21241c) {
            ctx->pc = 0x212430u;
            goto label_212430;
        }
    }
    ctx->pc = 0x212424u;
    // 0x212424: 0x50600003
    ctx->pc = 0x212424u;
    {
        const bool branch_taken_0x212424 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x212424) {
            ctx->pc = 0x212428u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x212434u;
            goto label_212434;
        }
    }
    ctx->pc = 0x21242Cu;
    // 0x21242c: 0x2463fffc
    ctx->pc = 0x21242cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967292));
label_212430:
    // 0x212430: 0x24630001
    ctx->pc = 0x212430u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_212434:
    // 0x212434: 0x31823
    ctx->pc = 0x212434u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x212438: 0x44830000
    ctx->pc = 0x212438u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x21243c: 0x0
    ctx->pc = 0x21243cu;
    // NOP
    // 0x212440: 0x46800060
    ctx->pc = 0x212440u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x212444: 0x3c0337a7
    ctx->pc = 0x212444u;
    SET_GPR_U32(ctx, 3, ((uint32_t)14247 << 16));
    // 0x212448: 0x3463c5ac
    ctx->pc = 0x212448u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 50604));
    // 0x21244c: 0x44830000
    ctx->pc = 0x21244cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x212450: 0x0
    ctx->pc = 0x212450u;
    // NOP
    // 0x212454: 0x46010002
    ctx->pc = 0x212454u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x212458: 0x10000005
    ctx->pc = 0x212458u;
    {
        const bool branch_taken_0x212458 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21245Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        if (branch_taken_0x212458) {
            ctx->pc = 0x212470u;
            goto label_212470;
        }
    }
    ctx->pc = 0x212460u;
label_212460:
    // 0x212460: 0x28830020
    ctx->pc = 0x212460u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 32));
    // 0x212464: 0x1460ff9b
    ctx->pc = 0x212464u;
    {
        const bool branch_taken_0x212464 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x212468u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 64));
        if (branch_taken_0x212464) {
            ctx->pc = 0x2122D4u;
            goto label_2122d4;
        }
    }
    ctx->pc = 0x21246Cu;
    // 0x21246c: 0x0
    ctx->pc = 0x21246cu;
    // NOP
label_212470:
    // 0x212470: 0x7bbf0030
    ctx->pc = 0x212470u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x212474: 0x7bb10020
    ctx->pc = 0x212474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212478: 0x7bb00010
    ctx->pc = 0x212478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21247c: 0xc7b60008
    ctx->pc = 0x21247cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x212480: 0xc7b50004
    ctx->pc = 0x212480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x212484: 0xc7b40000
    ctx->pc = 0x212484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x212488: 0x3e00008
    ctx->pc = 0x212488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21248Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2122D4u: goto label_2122d4;
            case 0x212350u: goto label_212350;
            case 0x212390u: goto label_212390;
            case 0x212430u: goto label_212430;
            case 0x212434u: goto label_212434;
            case 0x212460u: goto label_212460;
            case 0x212470u: goto label_212470;
            default: break;
        }
        return;
    }
    ctx->pc = 0x212490u;
}
