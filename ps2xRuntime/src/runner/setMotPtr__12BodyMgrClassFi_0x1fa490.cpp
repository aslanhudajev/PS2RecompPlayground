#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setMotPtr__12BodyMgrClassFi
// Address: 0x1fa490 - 0x1fa9e4
void setMotPtr__12BodyMgrClassFi_0x1fa490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setMotPtr__12BodyMgrClassFi");


    ctx->pc = 0x1fa490u;

    // 0x1fa490: 0x27bdff30
    ctx->pc = 0x1fa490u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1fa494: 0x7fbf00a0
    ctx->pc = 0x1fa494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 31));
    // 0x1fa498: 0x7fbe0090
    ctx->pc = 0x1fa498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1fa49c: 0x7fb70080
    ctx->pc = 0x1fa49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1fa4a0: 0x7fb60070
    ctx->pc = 0x1fa4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x1fa4a4: 0x7fb50060
    ctx->pc = 0x1fa4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1fa4a8: 0x7fb40050
    ctx->pc = 0x1fa4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1fa4ac: 0x7fb30040
    ctx->pc = 0x1fa4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1fa4b0: 0x7fb20030
    ctx->pc = 0x1fa4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1fa4b4: 0x7fb10020
    ctx->pc = 0x1fa4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1fa4b8: 0x7fb00010
    ctx->pc = 0x1fa4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fa4bc: 0xe7b50004
    ctx->pc = 0x1fa4bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1fa4c0: 0xe7b40000
    ctx->pc = 0x1fa4c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1fa4c4: 0x70808e28
    ctx->pc = 0x1fa4c4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1fa4c8: 0x8c840004
    ctx->pc = 0x1fa4c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1fa4cc: 0x58080
    ctx->pc = 0x1fa4ccu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1fa4d0: 0x3c0101fb
    ctx->pc = 0x1fa4d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)507 << 16));
    // 0x1fa4d4: 0x70a09628
    ctx->pc = 0x1fa4d4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1fa4d8: 0x2041021
    ctx->pc = 0x1fa4d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1fa4dc: 0x8c460004
    ctx->pc = 0x1fa4dcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1fa4e0: 0xc4420014
    ctx->pc = 0x1fa4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fa4e4: 0x61040
    ctx->pc = 0x1fa4e4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 1));
    // 0x1fa4e8: 0x410821
    ctx->pc = 0x1fa4e8u;
    SET_GPR_U32(ctx, 1, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1fa4ec: 0x842273e4
    ctx->pc = 0x1fa4ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 29668)));
    // 0x1fa4f0: 0x44820000
    ctx->pc = 0x1fa4f0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1fa4f4: 0x0
    ctx->pc = 0x1fa4f4u;
    // NOP
    // 0x1fa4f8: 0x46800020
    ctx->pc = 0x1fa4f8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1fa4fc: 0x46001034
    ctx->pc = 0x1fa4fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fa500: 0x0
    ctx->pc = 0x1fa500u;
    // NOP
    // 0x1fa504: 0x45000002
    ctx->pc = 0x1FA504u;
    {
        const bool branch_taken_0x1fa504 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FA508u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1fa504) {
            ctx->pc = 0x1FA510u;
            goto label_1fa510;
        }
    }
    ctx->pc = 0x1FA50Cu;
    // 0x1fa50c: 0x70001e28
    ctx->pc = 0x1fa50cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1fa510:
    // 0x1fa510: 0x10600016
    ctx->pc = 0x1FA510u;
    {
        const bool branch_taken_0x1fa510 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FA514u;
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
        if (branch_taken_0x1fa510) {
            ctx->pc = 0x1FA56Cu;
            goto label_1fa56c;
        }
    }
    ctx->pc = 0x1FA518u;
    // 0x1fa518: 0x2143c
    ctx->pc = 0x1fa518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1fa51c: 0x2143f
    ctx->pc = 0x1fa51cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1fa520: 0x30420001
    ctx->pc = 0x1fa520u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x1fa524: 0x1040000a
    ctx->pc = 0x1FA524u;
    {
        const bool branch_taken_0x1fa524 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FA528u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        if (branch_taken_0x1fa524) {
            ctx->pc = 0x1FA550u;
            goto label_1fa550;
        }
    }
    ctx->pc = 0x1FA52Cu;
    // 0x1fa52c: 0x2041021
    ctx->pc = 0x1fa52cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1fa530: 0x8485002c
    ctx->pc = 0x1fa530u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1fa534: 0x8c420024
    ctx->pc = 0x1fa534u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1fa538: 0x27848d4c
    ctx->pc = 0x1fa538u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1fa53c: 0xc07f1d8
    ctx->pc = 0x1FA53Cu;
    SET_GPR_U32(ctx, 31, 0x1FA544u);
    ctx->pc = 0x1FA540u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x1FC760u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdr__11MotMgrClassFiii_0x1fc760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA544u; }
        else if (ctx->pc != 0x1FA544u) { ctx->pc = 0x1FA544u; }
    }
    if (ctx->pc != 0x1FA544u) { return; }
    ctx->pc = 0x1FA544u;
    // 0x1fa544: 0x2111821
    ctx->pc = 0x1fa544u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1fa548: 0x10000118
    ctx->pc = 0x1FA548u;
    {
        const bool branch_taken_0x1fa548 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FA54Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
        if (branch_taken_0x1fa548) {
            ctx->pc = 0x1FA9ACu;
            goto label_1fa9ac;
        }
    }
    ctx->pc = 0x1FA550u;
label_1fa550:
    // 0x1fa550: 0x8485002c
    ctx->pc = 0x1fa550u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1fa554: 0x8c470024
    ctx->pc = 0x1fa554u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1fa558: 0xc07f1d8
    ctx->pc = 0x1FA558u;
    SET_GPR_U32(ctx, 31, 0x1FA560u);
    ctx->pc = 0x1FA55Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC760u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdr__11MotMgrClassFiii_0x1fc760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA560u; }
        else if (ctx->pc != 0x1FA560u) { ctx->pc = 0x1FA560u; }
    }
    if (ctx->pc != 0x1FA560u) { return; }
    ctx->pc = 0x1FA560u;
    // 0x1fa560: 0x2111821
    ctx->pc = 0x1fa560u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1fa564: 0x10000111
    ctx->pc = 0x1FA564u;
    {
        const bool branch_taken_0x1fa564 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FA568u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
        if (branch_taken_0x1fa564) {
            ctx->pc = 0x1FA9ACu;
            goto label_1fa9ac;
        }
    }
    ctx->pc = 0x1FA56Cu;
label_1fa56c:
    // 0x1fa56c: 0x2041021
    ctx->pc = 0x1fa56cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1fa570: 0x8c470024
    ctx->pc = 0x1fa570u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1fa574: 0x31c3f
    ctx->pc = 0x1fa574u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1fa578: 0x4610003
    ctx->pc = 0x1FA578u;
    {
        const bool branch_taken_0x1fa578 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1FA57Cu;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        if (branch_taken_0x1fa578) {
            ctx->pc = 0x1FA588u;
            goto label_1fa588;
        }
    }
    ctx->pc = 0x1FA580u;
    // 0x1fa580: 0x24620001
    ctx->pc = 0x1fa580u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fa584: 0x21043
    ctx->pc = 0x1fa584u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1fa588:
    // 0x1fa588: 0xe2082a
    ctx->pc = 0x1fa588u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 2)));
    // 0x1fa58c: 0x1020000a
    ctx->pc = 0x1FA58Cu;
    {
        const bool branch_taken_0x1fa58c = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FA590u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 1));
        if (branch_taken_0x1fa58c) {
            ctx->pc = 0x1FA5B8u;
            goto label_1fa5b8;
        }
    }
    ctx->pc = 0x1FA594u;
    // 0x1fa594: 0x3c024000
    ctx->pc = 0x1fa594u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x1fa598: 0x44820800
    ctx->pc = 0x1fa598u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1fa59c: 0x44870000
    ctx->pc = 0x1fa59cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 7);
    // 0x1fa5a0: 0x0
    ctx->pc = 0x1fa5a0u;
    // NOP
    // 0x1fa5a4: 0x46011043
    ctx->pc = 0x1fa5a4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x1fa5a8: 0x0
    ctx->pc = 0x1fa5a8u;
    // NOP
    // 0x1fa5ac: 0x46800020
    ctx->pc = 0x1fa5acu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1fa5b0: 0x10000005
    ctx->pc = 0x1FA5B0u;
    {
        const bool branch_taken_0x1fa5b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FA5B4u;
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x1fa5b0) {
            ctx->pc = 0x1FA5C8u;
            goto label_1fa5c8;
        }
    }
    ctx->pc = 0x1FA5B8u;
label_1fa5b8:
    // 0x1fa5b8: 0x44820000
    ctx->pc = 0x1fa5b8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1fa5bc: 0x0
    ctx->pc = 0x1fa5bcu;
    // NOP
    // 0x1fa5c0: 0x46800020
    ctx->pc = 0x1fa5c0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1fa5c4: 0x46001501
    ctx->pc = 0x1fa5c4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1fa5c8:
    // 0x1fa5c8: 0x8485002c
    ctx->pc = 0x1fa5c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1fa5cc: 0x3c023f80
    ctx->pc = 0x1fa5ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1fa5d0: 0x44820000
    ctx->pc = 0x1fa5d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x1fa5d4: 0x0
    ctx->pc = 0x1fa5d4u;
    // NOP
    // 0x1fa5d8: 0x46140541
    ctx->pc = 0x1fa5d8u;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1fa5dc: 0xc07f1d8
    ctx->pc = 0x1FA5DCu;
    SET_GPR_U32(ctx, 31, 0x1FA5E4u);
    ctx->pc = 0x1FA5E0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    ctx->pc = 0x1FC760u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdr__11MotMgrClassFiii_0x1fc760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA5E4u; }
        else if (ctx->pc != 0x1FA5E4u) { ctx->pc = 0x1FA5E4u; }
    }
    if (ctx->pc != 0x1FA5E4u) { return; }
    ctx->pc = 0x1FA5E4u;
    // 0x1fa5e4: 0x70409e28
    ctx->pc = 0x1fa5e4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fa5e8: 0x8e220004
    ctx->pc = 0x1fa5e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1fa5ec: 0x27848d4c
    ctx->pc = 0x1fa5ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 28), 4294937932));
    // 0x1fa5f0: 0x8445002c
    ctx->pc = 0x1fa5f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1fa5f4: 0x2021821
    ctx->pc = 0x1fa5f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1fa5f8: 0x8c660004
    ctx->pc = 0x1fa5f8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1fa5fc: 0x8c620024
    ctx->pc = 0x1fa5fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1fa600: 0xc07f1d8
    ctx->pc = 0x1FA600u;
    SET_GPR_U32(ctx, 31, 0x1FA608u);
    ctx->pc = 0x1FA604u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x1FC760u;
    {
        const uint32_t __entryPc = ctx->pc;
        getMotAnmAdr__11MotMgrClassFiii_0x1fc760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA608u; }
        else if (ctx->pc != 0x1FA608u) { ctx->pc = 0x1FA608u; }
    }
    if (ctx->pc != 0x1FA608u) { return; }
    ctx->pc = 0x1FA608u;
    // 0x1fa608: 0xc6610000
    ctx->pc = 0x1fa608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fa60c: 0xc4400000
    ctx->pc = 0x1fa60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa610: 0x121840
    ctx->pc = 0x1fa610u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 1));
    // 0x1fa614: 0x721821
    ctx->pc = 0x1fa614u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1fa618: 0x31980
    ctx->pc = 0x1fa618u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 6));
    // 0x1fa61c: 0x721821
    ctx->pc = 0x1fa61cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1fa620: 0x4615081a
    ctx->pc = 0x1fa620u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x1fa624: 0x318c0
    ctx->pc = 0x1fa624u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1fa628: 0x4614001c
    ctx->pc = 0x1fa628u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x1fa62c: 0x71f021
    ctx->pc = 0x1fa62cu;
    SET_GPR_U32(ctx, 30, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1fa630: 0xe7c0006c
    ctx->pc = 0x1fa630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 108), bits); }
    // 0x1fa634: 0xc6610004
    ctx->pc = 0x1fa634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fa638: 0xc4400004
    ctx->pc = 0x1fa638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa63c: 0x7040a628
    ctx->pc = 0x1fa63cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1fa640: 0x4615081a
    ctx->pc = 0x1fa640u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x1fa644: 0x4614001c
    ctx->pc = 0x1fa644u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x1fa648: 0xe7c00070
    ctx->pc = 0x1fa648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 112), bits); }
    // 0x1fa64c: 0xc6610008
    ctx->pc = 0x1fa64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fa650: 0xc4400008
    ctx->pc = 0x1fa650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa654: 0x4615081a
    ctx->pc = 0x1fa654u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x1fa658: 0x4614001c
    ctx->pc = 0x1fa658u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[20]));
    // 0x1fa65c: 0xe7c00074
    ctx->pc = 0x1fa65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 116), bits); }
    // 0x1fa660: 0x4bede37d
    ctx->pc = 0x1fa660u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x1fa664: 0x4bedeb7d
    ctx->pc = 0x1fa664u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x1fa668: 0x4bedf37d
    ctx->pc = 0x1fa668u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x1fa66c: 0x4bedfb7d
    ctx->pc = 0x1fa66cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x1fa670: 0x70009628
    ctx->pc = 0x1fa670u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fa674: 0x3c0a821
    ctx->pc = 0x1fa674u;
    SET_GPR_U32(ctx, 21, ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 0)));
    // 0x1fa678: 0x27b600b8
    ctx->pc = 0x1fa678u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 29), 184));
    // 0x1fa67c: 0x100000ba
    ctx->pc = 0x1FA67Cu;
    {
        const bool branch_taken_0x1fa67c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FA680u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 29), 180));
        if (branch_taken_0x1fa67c) {
            ctx->pc = 0x1FA968u;
            goto label_1fa968;
        }
    }
    ctx->pc = 0x1FA684u;
label_1fa684:
    // 0x1fa684: 0x8c640004
    ctx->pc = 0x1fa684u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1fa688: 0x240320f4
    ctx->pc = 0x1fa688u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8436));
    // 0x1fa68c: 0x10830005
    ctx->pc = 0x1FA68Cu;
    {
        const bool branch_taken_0x1fa68c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1FA690u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 270));
        if (branch_taken_0x1fa68c) {
            ctx->pc = 0x1FA6A4u;
            goto label_1fa6a4;
        }
    }
    ctx->pc = 0x1FA694u;
    // 0x1fa694: 0x10830003
    ctx->pc = 0x1FA694u;
    {
        const bool branch_taken_0x1fa694 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1fa694) {
            ctx->pc = 0x1FA6A4u;
            goto label_1fa6a4;
        }
    }
    ctx->pc = 0x1FA69Cu;
    // 0x1fa69c: 0x1000001e
    ctx->pc = 0x1FA69Cu;
    {
        const bool branch_taken_0x1fa69c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FA6A0u;
        SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
        if (branch_taken_0x1fa69c) {
            ctx->pc = 0x1FA718u;
            goto label_1fa718;
        }
    }
    ctx->pc = 0x1FA6A4u;
label_1fa6a4:
    // 0x1fa6a4: 0x8662000c
    ctx->pc = 0x1fa6a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1fa6a8: 0x72202628
    ctx->pc = 0x1fa6a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1fa6ac: 0x27a500b0
    ctx->pc = 0x1fa6acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 176));
    // 0x1fa6b0: 0x27a600c0
    ctx->pc = 0x1fa6b0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 192));
    // 0x1fa6b4: 0x4600a306
    ctx->pc = 0x1fa6b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1fa6b8: 0xafa200b0
    ctx->pc = 0x1fa6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1fa6bc: 0x8662000e
    ctx->pc = 0x1fa6bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x1fa6c0: 0xaee20000
    ctx->pc = 0x1fa6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x1fa6c4: 0x86620010
    ctx->pc = 0x1fa6c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1fa6c8: 0xaec20000
    ctx->pc = 0x1fa6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1fa6cc: 0x8682000c
    ctx->pc = 0x1fa6ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1fa6d0: 0xafa200c0
    ctx->pc = 0x1fa6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1fa6d4: 0x8682000e
    ctx->pc = 0x1fa6d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x1fa6d8: 0xafa200c4
    ctx->pc = 0x1fa6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x1fa6dc: 0x86820010
    ctx->pc = 0x1fa6dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1fa6e0: 0xc07ee9c
    ctx->pc = 0x1FA6E0u;
    SET_GPR_U32(ctx, 31, 0x1FA6E8u);
    ctx->pc = 0x1FA6E4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    ctx->pc = 0x1FBA70u;
    {
        const uint32_t __entryPc = ctx->pc;
        nearZYXrotYAxis__12BodyMgrClassFP4XYZAP4XYZAf_0x1fba70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA6E8u; }
        else if (ctx->pc != 0x1FA6E8u) { ctx->pc = 0x1FA6E8u; }
    }
    if (ctx->pc != 0x1FA6E8u) { return; }
    ctx->pc = 0x1FA6E8u;
    // 0x1fa6e8: 0x27a400b0
    ctx->pc = 0x1fa6e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 176));
    // 0x1fa6ec: 0x72e02e28
    ctx->pc = 0x1fa6ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x1fa6f0: 0xc0724f8
    ctx->pc = 0x1FA6F0u;
    SET_GPR_U32(ctx, 31, 0x1FA6F8u);
    ctx->pc = 0x1FA6F4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1C93E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetRotZYX__FPiPiPi_0x1c93e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA6F8u; }
        else if (ctx->pc != 0x1FA6F8u) { ctx->pc = 0x1FA6F8u; }
    }
    if (ctx->pc != 0x1FA6F8u) { return; }
    ctx->pc = 0x1FA6F8u;
    // 0x1fa6f8: 0x87a300b0
    ctx->pc = 0x1fa6f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa6fc: 0xa6a30078
    ctx->pc = 0x1fa6fcu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 120), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fa700: 0x86e30000
    ctx->pc = 0x1fa700u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1fa704: 0xa6a3007a
    ctx->pc = 0x1fa704u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 122), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fa708: 0x86c30000
    ctx->pc = 0x1fa708u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1fa70c: 0x10000092
    ctx->pc = 0x1FA70Cu;
    {
        const bool branch_taken_0x1fa70c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FA710u;
        WRITE16(ADD32(GPR_U32(ctx, 21), 124), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1fa70c) {
            ctx->pc = 0x1FA958u;
            goto label_1fa958;
        }
    }
    ctx->pc = 0x1FA714u;
    // 0x1fa714: 0x8667000c
    ctx->pc = 0x1fa714u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
label_1fa718:
    // 0x1fa718: 0x8684000c
    ctx->pc = 0x1fa718u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x1fa71c: 0x8668000e
    ctx->pc = 0x1fa71cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x1fa720: 0x8685000e
    ctx->pc = 0x1fa720u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x1fa724: 0x86690010
    ctx->pc = 0x1fa724u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1fa728: 0x86860010
    ctx->pc = 0x1fa728u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1fa72c: 0xe41823
    ctx->pc = 0x1fa72cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1fa730: 0x3543c
    ctx->pc = 0x1fa730u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1fa734: 0x1051823
    ctx->pc = 0x1fa734u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1fa738: 0x35c3c
    ctx->pc = 0x1fa738u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1fa73c: 0x1261823
    ctx->pc = 0x1fa73cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x1fa740: 0x31c3c
    ctx->pc = 0x1fa740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1fa744: 0xb5c3f
    ctx->pc = 0x1fa744u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x1fa748: 0xa543f
    ctx->pc = 0x1fa748u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x1fa74c: 0x5610002
    ctx->pc = 0x1FA74Cu;
    {
        const bool branch_taken_0x1fa74c = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x1FA750u;
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
        if (branch_taken_0x1fa74c) {
            ctx->pc = 0x1FA758u;
            goto label_1fa758;
        }
    }
    ctx->pc = 0x1FA754u;
    // 0x1fa754: 0xb5823
    ctx->pc = 0x1fa754u;
    SET_GPR_U32(ctx, 11, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 11)));
label_1fa758:
    // 0x1fa758: 0xa543c
    ctx->pc = 0x1fa758u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 16));
    // 0x1fa75c: 0xa543f
    ctx->pc = 0x1fa75cu;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x1fa760: 0x5410002
    ctx->pc = 0x1FA760u;
    {
        const bool branch_taken_0x1fa760 = (GPR_S32(ctx, 10) >= 0);
        if (branch_taken_0x1fa760) {
            ctx->pc = 0x1FA76Cu;
            goto label_1fa76c;
        }
    }
    ctx->pc = 0x1FA768u;
    // 0x1fa768: 0xa5023
    ctx->pc = 0x1fa768u;
    SET_GPR_U32(ctx, 10, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
label_1fa76c:
    // 0x1fa76c: 0x3643c
    ctx->pc = 0x1fa76cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1fa770: 0xc643f
    ctx->pc = 0x1fa770u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 16));
    // 0x1fa774: 0x5810002
    ctx->pc = 0x1FA774u;
    {
        const bool branch_taken_0x1fa774 = (GPR_S32(ctx, 12) >= 0);
        if (branch_taken_0x1fa774) {
            ctx->pc = 0x1FA780u;
            goto label_1fa780;
        }
    }
    ctx->pc = 0x1FA77Cu;
    // 0x1fa77c: 0xc6023
    ctx->pc = 0x1fa77cu;
    SET_GPR_U32(ctx, 12, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 12)));
label_1fa780:
    // 0x1fa780: 0x24c67fff
    ctx->pc = 0x1fa780u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 32767));
    // 0x1fa784: 0x14b1821
    ctx->pc = 0x1fa784u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x1fa788: 0x24c60001
    ctx->pc = 0x1fa788u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fa78c: 0x6543c
    ctx->pc = 0x1fa78cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1fa790: 0xa543f
    ctx->pc = 0x1fa790u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
    // 0x1fa794: 0x12a3023
    ctx->pc = 0x1fa794u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1fa798: 0x64c3c
    ctx->pc = 0x1fa798u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1fa79c: 0x340b8000
    ctx->pc = 0x1fa79cu;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 0), 32768));
    // 0x1fa7a0: 0x1653023
    ctx->pc = 0x1fa7a0u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x1fa7a4: 0x6343c
    ctx->pc = 0x1fa7a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1fa7a8: 0x8b2821
    ctx->pc = 0x1fa7a8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x1fa7ac: 0x6343f
    ctx->pc = 0x1fa7acu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1fa7b0: 0x52c3c
    ctx->pc = 0x1fa7b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1fa7b4: 0x1064023
    ctx->pc = 0x1fa7b4u;
    SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1fa7b8: 0x85c3c
    ctx->pc = 0x1fa7b8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) << (32 + 16));
    // 0x1fa7bc: 0x52c3f
    ctx->pc = 0x1fa7bcu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x1fa7c0: 0xe54023
    ctx->pc = 0x1fa7c0u;
    SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1fa7c4: 0x8443c
    ctx->pc = 0x1fa7c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x1fa7c8: 0xb5c3f
    ctx->pc = 0x1fa7c8u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
    // 0x1fa7cc: 0x1831821
    ctx->pc = 0x1fa7ccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x1fa7d0: 0x94c3f
    ctx->pc = 0x1fa7d0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x1fa7d4: 0x5610002
    ctx->pc = 0x1FA7D4u;
    {
        const bool branch_taken_0x1fa7d4 = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x1FA7D8u;
        SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
        if (branch_taken_0x1fa7d4) {
            ctx->pc = 0x1FA7E0u;
            goto label_1fa7e0;
        }
    }
    ctx->pc = 0x1FA7DCu;
    // 0x1fa7dc: 0xb5823
    ctx->pc = 0x1fa7dcu;
    SET_GPR_U32(ctx, 11, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 11)));
label_1fa7e0:
    // 0x1fa7e0: 0x8443c
    ctx->pc = 0x1fa7e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x1fa7e4: 0x8443f
    ctx->pc = 0x1fa7e4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 16));
    // 0x1fa7e8: 0x5010002
    ctx->pc = 0x1FA7E8u;
    {
        const bool branch_taken_0x1fa7e8 = (GPR_S32(ctx, 8) >= 0);
        if (branch_taken_0x1fa7e8) {
            ctx->pc = 0x1FA7F4u;
            goto label_1fa7f4;
        }
    }
    ctx->pc = 0x1FA7F0u;
    // 0x1fa7f0: 0x84023
    ctx->pc = 0x1fa7f0u;
    SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
label_1fa7f4:
    // 0x1fa7f4: 0x94c3c
    ctx->pc = 0x1fa7f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 16));
    // 0x1fa7f8: 0x94c3f
    ctx->pc = 0x1fa7f8u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x1fa7fc: 0x5210002
    ctx->pc = 0x1FA7FCu;
    {
        const bool branch_taken_0x1fa7fc = (GPR_S32(ctx, 9) >= 0);
        if (branch_taken_0x1fa7fc) {
            ctx->pc = 0x1FA808u;
            goto label_1fa808;
        }
    }
    ctx->pc = 0x1FA804u;
    // 0x1fa804: 0x94823
    ctx->pc = 0x1fa804u;
    SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
label_1fa808:
    // 0x1fa808: 0x10b4021
    ctx->pc = 0x1fa808u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x1fa80c: 0x1284021
    ctx->pc = 0x1fa80cu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x1fa810: 0x103082a
    ctx->pc = 0x1fa810u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 8), GPR_S32(ctx, 3)));
    // 0x1fa814: 0x1420002b
    ctx->pc = 0x1FA814u;
    {
        const bool branch_taken_0x1fa814 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FA818u;
        SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        if (branch_taken_0x1fa814) {
            ctx->pc = 0x1FA8C4u;
            goto label_1fa8c4;
        }
    }
    ctx->pc = 0x1FA81Cu;
    // 0x1fa81c: 0x871823
    ctx->pc = 0x1fa81cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1fa820: 0x31c3c
    ctx->pc = 0x1fa820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1fa824: 0x31c3f
    ctx->pc = 0x1fa824u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1fa828: 0x44830000
    ctx->pc = 0x1fa828u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1fa82c: 0x0
    ctx->pc = 0x1fa82cu;
    // NOP
    // 0x1fa830: 0x46800020
    ctx->pc = 0x1fa830u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1fa834: 0x46140002
    ctx->pc = 0x1fa834u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1fa838: 0x46000024
    ctx->pc = 0x1fa838u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1fa83c: 0x44030000
    ctx->pc = 0x1fa83cu;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
    // 0x1fa840: 0x0
    ctx->pc = 0x1fa840u;
    // NOP
    // 0x1fa844: 0xe31821
    ctx->pc = 0x1fa844u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1fa848: 0xa6a30078
    ctx->pc = 0x1fa848u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 120), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fa84c: 0x8683000e
    ctx->pc = 0x1fa84cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x1fa850: 0x8664000e
    ctx->pc = 0x1fa850u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x1fa854: 0x641823
    ctx->pc = 0x1fa854u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fa858: 0x31c3c
    ctx->pc = 0x1fa858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1fa85c: 0x31c3f
    ctx->pc = 0x1fa85cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1fa860: 0x44830000
    ctx->pc = 0x1fa860u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1fa864: 0x0
    ctx->pc = 0x1fa864u;
    // NOP
    // 0x1fa868: 0x46800020
    ctx->pc = 0x1fa868u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1fa86c: 0x46140002
    ctx->pc = 0x1fa86cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1fa870: 0x46000024
    ctx->pc = 0x1fa870u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1fa874: 0x44030000
    ctx->pc = 0x1fa874u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
    // 0x1fa878: 0x0
    ctx->pc = 0x1fa878u;
    // NOP
    // 0x1fa87c: 0x831821
    ctx->pc = 0x1fa87cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fa880: 0xa6a3007a
    ctx->pc = 0x1fa880u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 122), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fa884: 0x86830010
    ctx->pc = 0x1fa884u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1fa888: 0x86640010
    ctx->pc = 0x1fa888u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1fa88c: 0x641823
    ctx->pc = 0x1fa88cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fa890: 0x31c3c
    ctx->pc = 0x1fa890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1fa894: 0x31c3f
    ctx->pc = 0x1fa894u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1fa898: 0x44830000
    ctx->pc = 0x1fa898u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1fa89c: 0x0
    ctx->pc = 0x1fa89cu;
    // NOP
    // 0x1fa8a0: 0x46800020
    ctx->pc = 0x1fa8a0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1fa8a4: 0x46140002
    ctx->pc = 0x1fa8a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1fa8a8: 0x46000024
    ctx->pc = 0x1fa8a8u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1fa8ac: 0x44030000
    ctx->pc = 0x1fa8acu;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
    // 0x1fa8b0: 0x0
    ctx->pc = 0x1fa8b0u;
    // NOP
    // 0x1fa8b4: 0x831821
    ctx->pc = 0x1fa8b4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fa8b8: 0x10000027
    ctx->pc = 0x1FA8B8u;
    {
        const bool branch_taken_0x1fa8b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1FA8BCu;
        WRITE16(ADD32(GPR_U32(ctx, 21), 124), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x1fa8b8) {
            ctx->pc = 0x1FA958u;
            goto label_1fa958;
        }
    }
    ctx->pc = 0x1FA8C0u;
    // 0x1fa8c0: 0xa71823
    ctx->pc = 0x1fa8c0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1fa8c4:
    // 0x1fa8c4: 0x31c3c
    ctx->pc = 0x1fa8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1fa8c8: 0x31c3f
    ctx->pc = 0x1fa8c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1fa8cc: 0x44830000
    ctx->pc = 0x1fa8ccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1fa8d0: 0x0
    ctx->pc = 0x1fa8d0u;
    // NOP
    // 0x1fa8d4: 0x46800020
    ctx->pc = 0x1fa8d4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1fa8d8: 0x46140002
    ctx->pc = 0x1fa8d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1fa8dc: 0x46000024
    ctx->pc = 0x1fa8dcu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1fa8e0: 0x44030000
    ctx->pc = 0x1fa8e0u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
    // 0x1fa8e4: 0x0
    ctx->pc = 0x1fa8e4u;
    // NOP
    // 0x1fa8e8: 0xe31821
    ctx->pc = 0x1fa8e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1fa8ec: 0xa6a30078
    ctx->pc = 0x1fa8ecu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 120), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fa8f0: 0x8664000e
    ctx->pc = 0x1fa8f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x1fa8f4: 0xc41823
    ctx->pc = 0x1fa8f4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1fa8f8: 0x31c3c
    ctx->pc = 0x1fa8f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1fa8fc: 0x31c3f
    ctx->pc = 0x1fa8fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1fa900: 0x44830000
    ctx->pc = 0x1fa900u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1fa904: 0x0
    ctx->pc = 0x1fa904u;
    // NOP
    // 0x1fa908: 0x46800020
    ctx->pc = 0x1fa908u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1fa90c: 0x46140002
    ctx->pc = 0x1fa90cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1fa910: 0x46000024
    ctx->pc = 0x1fa910u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1fa914: 0x44030000
    ctx->pc = 0x1fa914u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
    // 0x1fa918: 0x0
    ctx->pc = 0x1fa918u;
    // NOP
    // 0x1fa91c: 0x831821
    ctx->pc = 0x1fa91cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fa920: 0xa6a3007a
    ctx->pc = 0x1fa920u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 122), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fa924: 0x86640010
    ctx->pc = 0x1fa924u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1fa928: 0x1441823
    ctx->pc = 0x1fa928u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1fa92c: 0x31c3c
    ctx->pc = 0x1fa92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1fa930: 0x31c3f
    ctx->pc = 0x1fa930u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1fa934: 0x44830000
    ctx->pc = 0x1fa934u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x1fa938: 0x0
    ctx->pc = 0x1fa938u;
    // NOP
    // 0x1fa93c: 0x46800020
    ctx->pc = 0x1fa93cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1fa940: 0x46140002
    ctx->pc = 0x1fa940u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1fa944: 0x46000024
    ctx->pc = 0x1fa944u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1fa948: 0x44030000
    ctx->pc = 0x1fa948u;
    SET_GPR_U32(ctx, 3, *(uint32_t*)&ctx->f[0]);
    // 0x1fa94c: 0x0
    ctx->pc = 0x1fa94cu;
    // NOP
    // 0x1fa950: 0x831821
    ctx->pc = 0x1fa950u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fa954: 0xa6a3007c
    ctx->pc = 0x1fa954u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 124), (uint16_t)GPR_U32(ctx, 3));
label_1fa958:
    // 0x1fa958: 0x26730006
    ctx->pc = 0x1fa958u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 6));
    // 0x1fa95c: 0x26940006
    ctx->pc = 0x1fa95cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 6));
    // 0x1fa960: 0x26b50006
    ctx->pc = 0x1fa960u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 6));
    // 0x1fa964: 0x26520001
    ctx->pc = 0x1fa964u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_1fa968:
    // 0x1fa968: 0x8e250004
    ctx->pc = 0x1fa968u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1fa96c: 0x3c0301f2
    ctx->pc = 0x1fa96cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)498 << 16));
    // 0x1fa970: 0x34639860
    ctx->pc = 0x1fa970u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 39008));
    // 0x1fa974: 0x84a4002c
    ctx->pc = 0x1fa974u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1fa978: 0x42040
    ctx->pc = 0x1fa978u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1fa97c: 0x831821
    ctx->pc = 0x1fa97cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1fa980: 0x84630000
    ctx->pc = 0x1fa980u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fa984: 0x243182a
    ctx->pc = 0x1fa984u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 3)));
    // 0x1fa988: 0x1460ff3e
    ctx->pc = 0x1FA988u;
    {
        const bool branch_taken_0x1fa988 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1FA98Cu;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        if (branch_taken_0x1fa988) {
            ctx->pc = 0x1FA684u;
            goto label_1fa684;
        }
    }
    ctx->pc = 0x1FA990u;
    // 0x1fa990: 0x4bff6b7e
    ctx->pc = 0x1fa990u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x1fa994: 0x4bfe6b7e
    ctx->pc = 0x1fa994u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x1fa998: 0x4bfd6b7e
    ctx->pc = 0x1fa998u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x1fa99c: 0x4bfc6b7e
    ctx->pc = 0x1fa99cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x1fa9a0: 0x2111821
    ctx->pc = 0x1fa9a0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1fa9a4: 0x27c4006c
    ctx->pc = 0x1fa9a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 30), 108));
    // 0x1fa9a8: 0xac640064
    ctx->pc = 0x1fa9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 4));
label_1fa9ac:
    // 0x1fa9ac: 0x7bbf00a0
    ctx->pc = 0x1fa9acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1fa9b0: 0x7bbe0090
    ctx->pc = 0x1fa9b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fa9b4: 0x7bb70080
    ctx->pc = 0x1fa9b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fa9b8: 0x7bb60070
    ctx->pc = 0x1fa9b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fa9bc: 0x7bb50060
    ctx->pc = 0x1fa9bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fa9c0: 0x7bb40050
    ctx->pc = 0x1fa9c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fa9c4: 0x7bb30040
    ctx->pc = 0x1fa9c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fa9c8: 0x7bb20030
    ctx->pc = 0x1fa9c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa9cc: 0x7bb10020
    ctx->pc = 0x1fa9ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa9d0: 0x7bb00010
    ctx->pc = 0x1fa9d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa9d4: 0xc7b50004
    ctx->pc = 0x1fa9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1fa9d8: 0xc7b40000
    ctx->pc = 0x1fa9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1fa9dc: 0x3e00008
    ctx->pc = 0x1FA9DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA9E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FA510u: goto label_1fa510;
            case 0x1FA550u: goto label_1fa550;
            case 0x1FA56Cu: goto label_1fa56c;
            case 0x1FA588u: goto label_1fa588;
            case 0x1FA5B8u: goto label_1fa5b8;
            case 0x1FA5C8u: goto label_1fa5c8;
            case 0x1FA684u: goto label_1fa684;
            case 0x1FA6A4u: goto label_1fa6a4;
            case 0x1FA718u: goto label_1fa718;
            case 0x1FA758u: goto label_1fa758;
            case 0x1FA76Cu: goto label_1fa76c;
            case 0x1FA780u: goto label_1fa780;
            case 0x1FA7E0u: goto label_1fa7e0;
            case 0x1FA7F4u: goto label_1fa7f4;
            case 0x1FA808u: goto label_1fa808;
            case 0x1FA8C4u: goto label_1fa8c4;
            case 0x1FA958u: goto label_1fa958;
            case 0x1FA968u: goto label_1fa968;
            case 0x1FA9ACu: goto label_1fa9ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FA9E4u;
}
