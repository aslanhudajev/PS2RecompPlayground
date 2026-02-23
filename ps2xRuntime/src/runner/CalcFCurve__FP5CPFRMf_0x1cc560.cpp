#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: CalcFCurve__FP5CPFRMf
// Address: 0x1cc560 - 0x1cc6dc
void CalcFCurve__FP5CPFRMf_0x1cc560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("CalcFCurve__FP5CPFRMf");


    ctx->pc = 0x1cc560u;

    // 0x1cc560: 0x94880000
    ctx->pc = 0x1cc560u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cc564: 0x5010003
    ctx->pc = 0x1CC564u;
    {
        const bool branch_taken_0x1cc564 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1CC568u;
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 8), 1));
        if (branch_taken_0x1cc564) {
            ctx->pc = 0x1CC574u;
            goto label_1cc574;
        }
    }
    ctx->pc = 0x1CC56Cu;
    // 0x1cc56c: 0x25020001
    ctx->pc = 0x1cc56cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 8), 1));
    // 0x1cc570: 0x22843
    ctx->pc = 0x1cc570u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 1));
label_1cc574:
    // 0x1cc574: 0x5010003
    ctx->pc = 0x1CC574u;
    {
        const bool branch_taken_0x1cc574 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x1CC578u;
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 8), 2));
        if (branch_taken_0x1cc574) {
            ctx->pc = 0x1CC584u;
            goto label_1cc584;
        }
    }
    ctx->pc = 0x1CC57Cu;
    // 0x1cc57c: 0x25020003
    ctx->pc = 0x1cc57cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 8), 3));
    // 0x1cc580: 0x23083
    ctx->pc = 0x1cc580u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_1cc584:
    // 0x1cc584: 0x94820002
    ctx->pc = 0x1cc584u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1cc588: 0x24870004
    ctx->pc = 0x1cc588u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 4), 4));
    // 0x1cc58c: 0x70001e28
    ctx->pc = 0x1cc58cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1cc590: 0x10000013
    ctx->pc = 0x1CC590u;
    {
        const bool branch_taken_0x1cc590 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CC594u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x1cc590) {
            ctx->pc = 0x1CC5E0u;
            goto label_1cc5e0;
        }
    }
    ctx->pc = 0x1CC598u;
label_1cc598:
    // 0x1cc598: 0xe21021
    ctx->pc = 0x1cc598u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1cc59c: 0xc4400000
    ctx->pc = 0x1cc59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc5a0: 0x460c0034
    ctx->pc = 0x1cc5a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cc5a4: 0x0
    ctx->pc = 0x1cc5a4u;
    // NOP
    // 0x1cc5a8: 0x45000004
    ctx->pc = 0x1CC5A8u;
    {
        const bool branch_taken_0x1cc5a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CC5ACu;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        if (branch_taken_0x1cc5a8) {
            ctx->pc = 0x1CC5BCu;
            goto label_1cc5bc;
        }
    }
    ctx->pc = 0x1CC5B0u;
    // 0x1cc5b0: 0x10000003
    ctx->pc = 0x1CC5B0u;
    {
        const bool branch_taken_0x1cc5b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CC5B4u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1cc5b0) {
            ctx->pc = 0x1CC5C0u;
            goto label_1cc5c0;
        }
    }
    ctx->pc = 0x1CC5B8u;
    // 0x1cc5b8: 0x61023
    ctx->pc = 0x1cc5b8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
label_1cc5bc:
    // 0x1cc5bc: 0x0
    ctx->pc = 0x1cc5bcu;
    // NOP
label_1cc5c0:
    // 0x1cc5c0: 0xa22821
    ctx->pc = 0x1cc5c0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1cc5c4: 0x4c10003
    ctx->pc = 0x1CC5C4u;
    {
        const bool branch_taken_0x1cc5c4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1CC5C8u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
        if (branch_taken_0x1cc5c4) {
            ctx->pc = 0x1CC5D4u;
            goto label_1cc5d4;
        }
    }
    ctx->pc = 0x1CC5CCu;
    // 0x1cc5cc: 0x24c20001
    ctx->pc = 0x1cc5ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1cc5d0: 0x21043
    ctx->pc = 0x1cc5d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1cc5d4:
    // 0x1cc5d4: 0x70403628
    ctx->pc = 0x1cc5d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cc5d8: 0x24630001
    ctx->pc = 0x1cc5d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cc5dc: 0x0
    ctx->pc = 0x1cc5dcu;
    // NOP
label_1cc5e0:
    // 0x1cc5e0: 0x64102a
    ctx->pc = 0x1cc5e0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x1cc5e4: 0x1440ffec
    ctx->pc = 0x1CC5E4u;
    {
        const bool branch_taken_0x1cc5e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1CC5E8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x1cc5e4) {
            ctx->pc = 0x1CC598u;
            goto label_1cc598;
        }
    }
    ctx->pc = 0x1CC5ECu;
    // 0x1cc5ec: 0x51100
    ctx->pc = 0x1cc5ecu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
    // 0x1cc5f0: 0xe21821
    ctx->pc = 0x1cc5f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1cc5f4: 0xc4600000
    ctx->pc = 0x1cc5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc5f8: 0x460c0034
    ctx->pc = 0x1cc5f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cc5fc: 0x0
    ctx->pc = 0x1cc5fcu;
    // NOP
    // 0x1cc600: 0x4500000a
    ctx->pc = 0x1CC600u;
    {
        const bool branch_taken_0x1cc600 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CC604u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x1cc600) {
            ctx->pc = 0x1CC62Cu;
            goto label_1cc62c;
        }
    }
    ctx->pc = 0x1CC608u;
    // 0x1cc608: 0x2502ffff
    ctx->pc = 0x1cc608u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1cc60c: 0xa2082a
    ctx->pc = 0x1cc60cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x1cc610: 0x10200003
    ctx->pc = 0x1CC610u;
    {
        const bool branch_taken_0x1cc610 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x1cc610) {
            ctx->pc = 0x1CC620u;
            goto label_1cc620;
        }
    }
    ctx->pc = 0x1CC618u;
    // 0x1cc618: 0x10000003
    ctx->pc = 0x1CC618u;
    {
        const bool branch_taken_0x1cc618 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CC61Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x1cc618) {
            ctx->pc = 0x1CC628u;
            goto label_1cc628;
        }
    }
    ctx->pc = 0x1CC620u;
label_1cc620:
    // 0x1cc620: 0x1000002c
    ctx->pc = 0x1CC620u;
    {
        const bool branch_taken_0x1cc620 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CC624u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x1cc620) {
            ctx->pc = 0x1CC6D4u;
            goto label_1cc6d4;
        }
    }
    ctx->pc = 0x1CC628u;
label_1cc628:
    // 0x1cc628: 0x51100
    ctx->pc = 0x1cc628u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 4));
label_1cc62c:
    // 0x1cc62c: 0x472021
    ctx->pc = 0x1cc62cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1cc630: 0xc481fff0
    ctx->pc = 0x1cc630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cc634: 0xc4800000
    ctx->pc = 0x1cc634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc638: 0x3c024000
    ctx->pc = 0x1cc638u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
    // 0x1cc63c: 0x44827000
    ctx->pc = 0x1cc63cu;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x1cc640: 0x3c033f80
    ctx->pc = 0x1cc640u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16256 << 16));
    // 0x1cc644: 0x3c024040
    ctx->pc = 0x1cc644u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16448 << 16));
    // 0x1cc648: 0x460161c1
    ctx->pc = 0x1cc648u;
    ctx->f[7] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x1cc64c: 0xc484fff4
    ctx->pc = 0x1cc64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1cc650: 0xc482fff8
    ctx->pc = 0x1cc650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cc654: 0x46073a02
    ctx->pc = 0x1cc654u;
    ctx->f[8] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
    // 0x1cc658: 0x46010281
    ctx->pc = 0x1cc658u;
    ctx->f[10] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1cc65c: 0x44823000
    ctx->pc = 0x1cc65cu;
    *(uint32_t*)&ctx->f[6] = GPR_U32(ctx, 2);
    // 0x1cc660: 0x460a52c2
    ctx->pc = 0x1cc660u;
    ctx->f[11] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x1cc664: 0x3c02c000
    ctx->pc = 0x1cc664u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49152 << 16));
    // 0x1cc668: 0xc4810004
    ctx->pc = 0x1cc668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cc66c: 0xc480000c
    ctx->pc = 0x1cc66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cc670: 0x46083182
    ctx->pc = 0x1cc670u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x1cc674: 0x460b3343
    ctx->pc = 0x1cc674u;
    if (ctx->f[11] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[13] = ctx->f[6] / ctx->f[11];
    // 0x1cc678: 0x46074242
    ctx->pc = 0x1cc678u;
    ctx->f[9] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x1cc67c: 0x460a5b02
    ctx->pc = 0x1cc67cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[11], ctx->f[10]);
    // 0x1cc680: 0x46097182
    ctx->pc = 0x1cc680u;
    ctx->f[6] = FPU_MUL_S(ctx->f[14], ctx->f[9]);
    // 0x1cc684: 0x44821800
    ctx->pc = 0x1cc684u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 2);
    // 0x1cc688: 0x460c3183
    ctx->pc = 0x1cc688u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[6] = ctx->f[6] / ctx->f[12];
    // 0x1cc68c: 0x460918c2
    ctx->pc = 0x1cc68cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x1cc690: 0x460c18c3
    ctx->pc = 0x1cc690u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[12];
    // 0x1cc694: 0x460d3181
    ctx->pc = 0x1cc694u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[13]);
    // 0x1cc698: 0x44832800
    ctx->pc = 0x1cc698u;
    *(uint32_t*)&ctx->f[5] = GPR_U32(ctx, 3);
    // 0x1cc69c: 0x460d18c0
    ctx->pc = 0x1cc69cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[13]);
    // 0x1cc6a0: 0x46062940
    ctx->pc = 0x1cc6a0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x1cc6a4: 0x4604281a
    ctx->pc = 0x1cc6a4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x1cc6a8: 0x4601191c
    ctx->pc = 0x1cc6a8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x1cc6ac: 0x46087042
    ctx->pc = 0x1cc6acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[14], ctx->f[8]);
    // 0x1cc6b0: 0x460a08c3
    ctx->pc = 0x1cc6b0u;
    if (ctx->f[10] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[3] = ctx->f[1] / ctx->f[10];
    // 0x1cc6b4: 0x460b4ac3
    ctx->pc = 0x1cc6b4u;
    if (ctx->f[11] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[11] = copysignf(INFINITY, ctx->f[9] * 0.0f); } else ctx->f[11] = ctx->f[9] / ctx->f[11];
    // 0x1cc6b8: 0x460a4043
    ctx->pc = 0x1cc6b8u;
    if (ctx->f[10] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[8] * 0.0f); } else ctx->f[1] = ctx->f[8] / ctx->f[10];
    // 0x1cc6bc: 0x460358c1
    ctx->pc = 0x1cc6bcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[11], ctx->f[3]);
    // 0x1cc6c0: 0x460338c0
    ctx->pc = 0x1cc6c0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x1cc6c4: 0x46021882
    ctx->pc = 0x1cc6c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1cc6c8: 0x46015841
    ctx->pc = 0x1cc6c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[11], ctx->f[1]);
    // 0x1cc6cc: 0x46041018
    ctx->pc = 0x1cc6ccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x1cc6d0: 0x4600081c
    ctx->pc = 0x1cc6d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
label_1cc6d4:
    // 0x1cc6d4: 0x3e00008
    ctx->pc = 0x1CC6D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CC574u: goto label_1cc574;
            case 0x1CC584u: goto label_1cc584;
            case 0x1CC598u: goto label_1cc598;
            case 0x1CC5BCu: goto label_1cc5bc;
            case 0x1CC5C0u: goto label_1cc5c0;
            case 0x1CC5D4u: goto label_1cc5d4;
            case 0x1CC5E0u: goto label_1cc5e0;
            case 0x1CC620u: goto label_1cc620;
            case 0x1CC628u: goto label_1cc628;
            case 0x1CC62Cu: goto label_1cc62c;
            case 0x1CC6D4u: goto label_1cc6d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CC6DCu;
}
