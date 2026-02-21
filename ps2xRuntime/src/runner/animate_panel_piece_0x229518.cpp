#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: animate_panel_piece
// Address: 0x229518 - 0x2297c0
void animate_panel_piece_0x229518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x229518u;

    // 0x229518: 0x27bdffb0
    ctx->pc = 0x229518u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x22951c: 0xffbf0020
    ctx->pc = 0x22951cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x229520: 0xffb10010
    ctx->pc = 0x229520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x229524: 0xffb00000
    ctx->pc = 0x229524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x229528: 0xe7b60040
    ctx->pc = 0x229528u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x22952c: 0xe7b50038
    ctx->pc = 0x22952cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x229530: 0xe7b40030
    ctx->pc = 0x229530u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x229534: 0x80802d
    ctx->pc = 0x229534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229538: 0xa0882d
    ctx->pc = 0x229538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22953c: 0x12200098
    ctx->pc = 0x22953Cu;
    {
        const bool branch_taken_0x22953c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x229540u;
        ctx->f[22] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x22953c) {
            ctx->pc = 0x2297A0u;
            goto label_2297a0;
        }
    }
    ctx->pc = 0x229544u;
    // 0x229544: 0x24020001
    ctx->pc = 0x229544u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x229548: 0x50e20052
    ctx->pc = 0x229548u;
    {
        const bool branch_taken_0x229548 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 2));
        if (branch_taken_0x229548) {
            ctx->pc = 0x22954Cu;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x229694u;
            goto label_229694;
        }
    }
    ctx->pc = 0x229550u;
    // 0x229550: 0x10e00005
    ctx->pc = 0x229550u;
    {
        const bool branch_taken_0x229550 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x229554u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x229550) {
            ctx->pc = 0x229568u;
            goto label_229568;
        }
    }
    ctx->pc = 0x229558u;
    // 0x229558: 0x10e2005a
    ctx->pc = 0x229558u;
    {
        const bool branch_taken_0x229558 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 2));
        ctx->pc = 0x22955Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x229558) {
            ctx->pc = 0x2296C4u;
            goto label_2296c4;
        }
    }
    ctx->pc = 0x229560u;
    // 0x229560: 0x10000091
    ctx->pc = 0x229560u;
    {
        const bool branch_taken_0x229560 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x229564u;
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x229560) {
            ctx->pc = 0x2297A8u;
            goto label_2297a8;
        }
    }
    ctx->pc = 0x229568u;
label_229568:
    // 0x229568: 0x4616b542
    ctx->pc = 0x229568u;
    ctx->f[21] = FPU_MUL_S(ctx->f[22], ctx->f[22]);
    // 0x22956c: 0x4616a842
    ctx->pc = 0x22956cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
    // 0x229570: 0x8e040004
    ctx->pc = 0x229570u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x229574: 0x8e030008
    ctx->pc = 0x229574u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x229578: 0x831821
    ctx->pc = 0x229578u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x22957c: 0x3c014040
    ctx->pc = 0x22957cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x229580: 0x44816000
    ctx->pc = 0x229580u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x229584: 0x460c0842
    ctx->pc = 0x229584u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x229588: 0x3c014270
    ctx->pc = 0x229588u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17008 << 16));
    // 0x22958c: 0x44810000
    ctx->pc = 0x22958cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x229590: 0x46000842
    ctx->pc = 0x229590u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x229594: 0x46000824
    ctx->pc = 0x229594u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x229598: 0x44020000
    ctx->pc = 0x229598u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[0]);
    // 0x22959c: 0x621821
    ctx->pc = 0x22959cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2295a0: 0x2402003c
    ctx->pc = 0x2295a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x2295a4: 0x62001a
    ctx->pc = 0x2295a4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x2295a8: 0x2810
    ctx->pc = 0x2295a8u;
    SET_GPR_U32(ctx, 5, ctx->hi);
    // 0x2295ac: 0x50400001
    ctx->pc = 0x2295ACu;
    {
        const bool branch_taken_0x2295ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2295ac) {
            ctx->pc = 0x2295B0u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x2295B4u;
            goto label_2295b4;
        }
    }
    ctx->pc = 0x2295B4u;
label_2295b4:
    // 0x2295b4: 0xc42021
    ctx->pc = 0x2295b4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2295b8: 0x44841800
    ctx->pc = 0x2295b8u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 4);
    // 0x2295bc: 0x468018e0
    ctx->pc = 0x2295bcu;
    ctx->f[3] = FPU_CVT_S_W(*(int32_t*)&ctx->f[3]);
    // 0x2295c0: 0x3c020032
    ctx->pc = 0x2295c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2295c4: 0x244208c0
    ctx->pc = 0x2295c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2240));
    // 0x2295c8: 0x52880
    ctx->pc = 0x2295c8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x2295cc: 0xa21021
    ctx->pc = 0x2295ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2295d0: 0x3c030032
    ctx->pc = 0x2295d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x2295d4: 0xc4611044
    ctx->pc = 0x2295d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2295d8: 0x46800860
    ctx->pc = 0x2295d8u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2295dc: 0xc4400000
    ctx->pc = 0x2295dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2295e0: 0x46000802
    ctx->pc = 0x2295e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2295e4: 0x3c013f80
    ctx->pc = 0x2295e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2295e8: 0x4481a000
    ctx->pc = 0x2295e8u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x2295ec: 0x4616a101
    ctx->pc = 0x2295ecu;
    ctx->f[4] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
    // 0x2295f0: 0x46040002
    ctx->pc = 0x2295f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2295f4: 0x460018c0
    ctx->pc = 0x2295f4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2295f8: 0xc6020008
    ctx->pc = 0x2295f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2295fc: 0x468010a0
    ctx->pc = 0x2295fcu;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x229600: 0x3c020032
    ctx->pc = 0x229600u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x229604: 0x244209b0
    ctx->pc = 0x229604u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2480));
    // 0x229608: 0xa22821
    ctx->pc = 0x229608u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22960c: 0xc4a00000
    ctx->pc = 0x22960cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x229610: 0x46000842
    ctx->pc = 0x229610u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x229614: 0x46040842
    ctx->pc = 0x229614u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x229618: 0x46011080
    ctx->pc = 0x229618u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x22961c: 0x46001824
    ctx->pc = 0x22961cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[3]);
    // 0x229620: 0x44050000
    ctx->pc = 0x229620u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[0]);
    // 0x229624: 0x46001024
    ctx->pc = 0x229624u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[2]);
    // 0x229628: 0x44060000
    ctx->pc = 0x229628u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[0]);
    // 0x22962c: 0xc0b0df2
    ctx->pc = 0x22962Cu;
    SET_GPR_U32(ctx, 31, 0x229634u);
    ctx->pc = 0x229630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C37C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetPos_0x2c37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229634u; }
    }
    if (ctx->pc != 0x229634u) { return; }
    ctx->pc = 0x229634u;
    // 0x229634: 0xc602001c
    ctx->pc = 0x229634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x229638: 0x468010a0
    ctx->pc = 0x229638u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x22963c: 0x4615a501
    ctx->pc = 0x22963cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x229640: 0x46141002
    ctx->pc = 0x229640u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x229644: 0x46001080
    ctx->pc = 0x229644u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x229648: 0xc6000020
    ctx->pc = 0x229648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22964c: 0x46800020
    ctx->pc = 0x22964cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x229650: 0x46140042
    ctx->pc = 0x229650u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x229654: 0x46010000
    ctx->pc = 0x229654u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x229658: 0x46001064
    ctx->pc = 0x229658u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[2]);
    // 0x22965c: 0x44050800
    ctx->pc = 0x22965cu;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[1]);
    // 0x229660: 0x46000064
    ctx->pc = 0x229660u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x229664: 0x44060800
    ctx->pc = 0x229664u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[1]);
    // 0x229668: 0xc0b0cf6
    ctx->pc = 0x229668u;
    SET_GPR_U32(ctx, 31, 0x229670u);
    ctx->pc = 0x22966Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229670u; }
    }
    if (ctx->pc != 0x229670u) { return; }
    ctx->pc = 0x229670u;
    // 0x229670: 0x3c01437f
    ctx->pc = 0x229670u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17279 << 16));
    // 0x229674: 0x44810000
    ctx->pc = 0x229674u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x229678: 0x4600a502
    ctx->pc = 0x229678u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x22967c: 0x4600a024
    ctx->pc = 0x22967cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[20]);
    // 0x229680: 0x44050000
    ctx->pc = 0x229680u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[0]);
    // 0x229684: 0xc0b0f52
    ctx->pc = 0x229684u;
    SET_GPR_U32(ctx, 31, 0x22968Cu);
    ctx->pc = 0x229688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22968Cu; }
    }
    if (ctx->pc != 0x22968Cu) { return; }
    ctx->pc = 0x22968Cu;
    // 0x22968c: 0x10000045
    ctx->pc = 0x22968Cu;
    {
        const bool branch_taken_0x22968c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x229690u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x22968c) {
            ctx->pc = 0x2297A4u;
            goto label_2297a4;
        }
    }
    ctx->pc = 0x229694u;
label_229694:
    // 0x229694: 0x220202d
    ctx->pc = 0x229694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229698: 0xc52821
    ctx->pc = 0x229698u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x22969c: 0x3c014040
    ctx->pc = 0x22969cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x2296a0: 0x44816000
    ctx->pc = 0x2296a0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x2296a4: 0xc0b0df2
    ctx->pc = 0x2296A4u;
    SET_GPR_U32(ctx, 31, 0x2296ACu);
    ctx->pc = 0x2296A8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x2C37C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetPos_0x2c37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2296ACu; }
    }
    if (ctx->pc != 0x2296ACu) { return; }
    ctx->pc = 0x2296ACu;
    // 0x2296ac: 0x220202d
    ctx->pc = 0x2296acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2296b0: 0x8e05001c
    ctx->pc = 0x2296b0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2296b4: 0xc0b0cf6
    ctx->pc = 0x2296B4u;
    SET_GPR_U32(ctx, 31, 0x2296BCu);
    ctx->pc = 0x2296B8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2296BCu; }
    }
    if (ctx->pc != 0x2296BCu) { return; }
    ctx->pc = 0x2296BCu;
    // 0x2296bc: 0x10000039
    ctx->pc = 0x2296BCu;
    {
        const bool branch_taken_0x2296bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2296C0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2296bc) {
            ctx->pc = 0x2297A4u;
            goto label_2297a4;
        }
    }
    ctx->pc = 0x2296C4u;
label_2296c4:
    // 0x2296c4: 0x8e030004
    ctx->pc = 0x2296c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2296c8: 0x2462ffc0
    ctx->pc = 0x2296c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967232));
    // 0x2296cc: 0x44820000
    ctx->pc = 0x2296ccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2296d0: 0x46800020
    ctx->pc = 0x2296d0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2296d4: 0x8e030008
    ctx->pc = 0x2296d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2296d8: 0x2462ff4c
    ctx->pc = 0x2296d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967116));
    // 0x2296dc: 0x44822000
    ctx->pc = 0x2296dcu;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 2);
    // 0x2296e0: 0x46802120
    ctx->pc = 0x2296e0u;
    ctx->f[4] = FPU_CVT_S_W(*(int32_t*)&ctx->f[4]);
    // 0x2296e4: 0x8e020004
    ctx->pc = 0x2296e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2296e8: 0xc21021
    ctx->pc = 0x2296e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2296ec: 0x44821000
    ctx->pc = 0x2296ecu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x2296f0: 0x468010a0
    ctx->pc = 0x2296f0u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x2296f4: 0x46160002
    ctx->pc = 0x2296f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x2296f8: 0x3c014120
    ctx->pc = 0x2296f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x2296fc: 0x44811800
    ctx->pc = 0x2296fcu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x229700: 0x46030002
    ctx->pc = 0x229700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x229704: 0x46001080
    ctx->pc = 0x229704u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x229708: 0xc6010008
    ctx->pc = 0x229708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22970c: 0x46800860
    ctx->pc = 0x22970cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x229710: 0x46162002
    ctx->pc = 0x229710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[22]);
    // 0x229714: 0x46030002
    ctx->pc = 0x229714u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x229718: 0x46000840
    ctx->pc = 0x229718u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22971c: 0x46001024
    ctx->pc = 0x22971cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[2]);
    // 0x229720: 0x44050000
    ctx->pc = 0x229720u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[0]);
    // 0x229724: 0x46000824
    ctx->pc = 0x229724u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x229728: 0x44060000
    ctx->pc = 0x229728u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[0]);
    // 0x22972c: 0x3c014040
    ctx->pc = 0x22972cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x229730: 0x44816000
    ctx->pc = 0x229730u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x229734: 0xc0b0df2
    ctx->pc = 0x229734u;
    SET_GPR_U32(ctx, 31, 0x22973Cu);
    ctx->pc = 0x229738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C37C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetPos_0x2c37c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22973Cu; }
    }
    if (ctx->pc != 0x22973Cu) { return; }
    ctx->pc = 0x22973Cu;
    // 0x22973c: 0xc602001c
    ctx->pc = 0x22973cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x229740: 0x468010a0
    ctx->pc = 0x229740u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x229744: 0x46161002
    ctx->pc = 0x229744u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x229748: 0x3c0140a0
    ctx->pc = 0x229748u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x22974c: 0x44811800
    ctx->pc = 0x22974cu;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x229750: 0x46030002
    ctx->pc = 0x229750u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x229754: 0x46001080
    ctx->pc = 0x229754u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x229758: 0xc6010020
    ctx->pc = 0x229758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22975c: 0x46800860
    ctx->pc = 0x22975cu;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x229760: 0x46160802
    ctx->pc = 0x229760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x229764: 0x46030002
    ctx->pc = 0x229764u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x229768: 0x46000840
    ctx->pc = 0x229768u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x22976c: 0x46001024
    ctx->pc = 0x22976cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[2]);
    // 0x229770: 0x44050000
    ctx->pc = 0x229770u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[0]);
    // 0x229774: 0x46000824
    ctx->pc = 0x229774u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x229778: 0x44060000
    ctx->pc = 0x229778u;
    SET_GPR_U32(ctx, 6, *(uint32_t*)&ctx->f[0]);
    // 0x22977c: 0xc0b0cf6
    ctx->pc = 0x22977Cu;
    SET_GPR_U32(ctx, 31, 0x229784u);
    ctx->pc = 0x229780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229784u; }
    }
    if (ctx->pc != 0x229784u) { return; }
    ctx->pc = 0x229784u;
    // 0x229784: 0x3c01437f
    ctx->pc = 0x229784u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17279 << 16));
    // 0x229788: 0x44810000
    ctx->pc = 0x229788u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x22978c: 0x4600b002
    ctx->pc = 0x22978cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x229790: 0x46000064
    ctx->pc = 0x229790u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x229794: 0x44050800
    ctx->pc = 0x229794u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[1]);
    // 0x229798: 0xc0b0f52
    ctx->pc = 0x229798u;
    SET_GPR_U32(ctx, 31, 0x2297A0u);
    ctx->pc = 0x22979Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetAlpha_0x2c3d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2297A0u; }
    }
    if (ctx->pc != 0x2297A0u) { return; }
    ctx->pc = 0x2297A0u;
label_2297a0:
    // 0x2297a0: 0xdfbf0020
    ctx->pc = 0x2297a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2297a4:
    // 0x2297a4: 0xdfb10010
    ctx->pc = 0x2297a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2297a8:
    // 0x2297a8: 0xdfb00000
    ctx->pc = 0x2297a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2297ac: 0xc7b60040
    ctx->pc = 0x2297acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2297b0: 0xc7b50038
    ctx->pc = 0x2297b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2297b4: 0xc7b40030
    ctx->pc = 0x2297b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2297b8: 0x3e00008
    ctx->pc = 0x2297B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2297BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x229568u: goto label_229568;
            case 0x2295B4u: goto label_2295b4;
            case 0x229694u: goto label_229694;
            case 0x2296C4u: goto label_2296c4;
            case 0x2297A0u: goto label_2297a0;
            case 0x2297A4u: goto label_2297a4;
            case 0x2297A8u: goto label_2297a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2297C0u;
}
