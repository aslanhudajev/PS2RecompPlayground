#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DebugCamControlInputs
// Address: 0x2134e0 - 0x213a70
void DebugCamControlInputs_0x2134e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2134e0u;

    // 0x2134e0: 0x27bdffb0
    ctx->pc = 0x2134e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2134e4: 0xffbf0010
    ctx->pc = 0x2134e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2134e8: 0xffb00000
    ctx->pc = 0x2134e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2134ec: 0xe7b80040
    ctx->pc = 0x2134ecu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2134f0: 0xe7b70038
    ctx->pc = 0x2134f0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2134f4: 0xe7b60030
    ctx->pc = 0x2134f4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2134f8: 0xe7b50028
    ctx->pc = 0x2134f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2134fc: 0xe7b40020
    ctx->pc = 0x2134fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x213500: 0x3c020031
    ctx->pc = 0x213500u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x213504: 0xc441ffa8
    ctx->pc = 0x213504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213508: 0x3c013d08
    ctx->pc = 0x213508u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15624 << 16));
    // 0x21350c: 0x34216595
    ctx->pc = 0x21350cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 26005));
    // 0x213510: 0x44810000
    ctx->pc = 0x213510u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x213514: 0x46010034
    ctx->pc = 0x213514u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213518: 0x3c013d08
    ctx->pc = 0x213518u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15624 << 16));
    // 0x21351c: 0x34216595
    ctx->pc = 0x21351cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 26005));
    // 0x213520: 0x4481a000
    ctx->pc = 0x213520u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x213524: 0x45030001
    ctx->pc = 0x213524u;
    {
        const bool branch_taken_0x213524 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x213524) {
            ctx->pc = 0x213528u;
            ctx->f[20] = FPU_MOV_S(ctx->f[1]);
            ctx->pc = 0x21352Cu;
            goto label_21352c;
        }
    }
    ctx->pc = 0x21352Cu;
label_21352c:
    // 0x21352c: 0x3c10003c
    ctx->pc = 0x21352cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x213530: 0x8e02cd30
    ctx->pc = 0x213530u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294954288)));
    // 0x213534: 0xc0b9dce
    ctx->pc = 0x213534u;
    SET_GPR_U32(ctx, 31, 0x21353Cu);
    ctx->pc = 0x213538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21353Cu; }
    }
    if (ctx->pc != 0x21353Cu) { return; }
    ctx->pc = 0x21353Cu;
    // 0x21353c: 0x460005c6
    ctx->pc = 0x21353cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x213540: 0x8e02cd30
    ctx->pc = 0x213540u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294954288)));
    // 0x213544: 0xc0b9e4a
    ctx->pc = 0x213544u;
    SET_GPR_U32(ctx, 31, 0x21354Cu);
    ctx->pc = 0x213548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21354Cu; }
    }
    if (ctx->pc != 0x21354Cu) { return; }
    ctx->pc = 0x21354Cu;
    // 0x21354c: 0x46000546
    ctx->pc = 0x21354cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x213550: 0x8e02cd30
    ctx->pc = 0x213550u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294954288)));
    // 0x213554: 0xc0b9dce
    ctx->pc = 0x213554u;
    SET_GPR_U32(ctx, 31, 0x21355Cu);
    ctx->pc = 0x213558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21355Cu; }
    }
    if (ctx->pc != 0x21355Cu) { return; }
    ctx->pc = 0x21355Cu;
    // 0x21355c: 0x46000606
    ctx->pc = 0x21355cu;
    ctx->f[24] = FPU_MOV_S(ctx->f[0]);
    // 0x213560: 0x8e02cd30
    ctx->pc = 0x213560u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294954288)));
    // 0x213564: 0xc0b9e4a
    ctx->pc = 0x213564u;
    SET_GPR_U32(ctx, 31, 0x21356Cu);
    ctx->pc = 0x213568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21356Cu; }
    }
    if (ctx->pc != 0x21356Cu) { return; }
    ctx->pc = 0x21356Cu;
    // 0x21356c: 0x3c020032
    ctx->pc = 0x21356cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x213570: 0x8c42f7d0
    ctx->pc = 0x213570u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965200)));
    // 0x213574: 0x10400135
    ctx->pc = 0x213574u;
    {
        const bool branch_taken_0x213574 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x213578u;
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x213574) {
            ctx->pc = 0x213A4Cu;
            goto label_213a4c;
        }
    }
    ctx->pc = 0x21357Cu;
    // 0x21357c: 0x3c020032
    ctx->pc = 0x21357cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x213580: 0x8c42f7d4
    ctx->pc = 0x213580u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965204)));
    // 0x213584: 0x3c030004
    ctx->pc = 0x213584u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4 << 16));
    // 0x213588: 0x431024
    ctx->pc = 0x213588u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21358c: 0x10400004
    ctx->pc = 0x21358Cu;
    {
        const bool branch_taken_0x21358c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x213590u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x21358c) {
            ctx->pc = 0x2135A0u;
            goto label_2135a0;
        }
    }
    ctx->pc = 0x213594u;
    // 0x213594: 0xc084ce4
    ctx->pc = 0x213594u;
    SET_GPR_U32(ctx, 31, 0x21359Cu);
    ctx->pc = 0x213598u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294954288)));
    ctx->pc = 0x213390u;
    {
        const uint32_t __entryPc = ctx->pc;
        CamReset_0x213390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21359Cu; }
    }
    if (ctx->pc != 0x21359Cu) { return; }
    ctx->pc = 0x21359Cu;
    // 0x21359c: 0x3c020032
    ctx->pc = 0x21359cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2135a0:
    // 0x2135a0: 0x3c030032
    ctx->pc = 0x2135a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x2135a4: 0x8c44f7d4
    ctx->pc = 0x2135a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294965204)));
    // 0x2135a8: 0x8c62f7d8
    ctx->pc = 0x2135a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294965208)));
    // 0x2135ac: 0x14820007
    ctx->pc = 0x2135ACu;
    {
        const bool branch_taken_0x2135ac = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x2135B0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2135ac) {
            ctx->pc = 0x2135CCu;
            goto label_2135cc;
        }
    }
    ctx->pc = 0x2135B4u;
    // 0x2135b4: 0xc440f7dc
    ctx->pc = 0x2135b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2135b8: 0x3c013d4c
    ctx->pc = 0x2135b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15692 << 16));
    // 0x2135bc: 0x3421cccd
    ctx->pc = 0x2135bcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x2135c0: 0x44810800
    ctx->pc = 0x2135c0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2135c4: 0x10000003
    ctx->pc = 0x2135C4u;
    {
        const bool branch_taken_0x2135c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2135C8u;
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x2135c4) {
            ctx->pc = 0x2135D4u;
            goto label_2135d4;
        }
    }
    ctx->pc = 0x2135CCu;
label_2135cc:
    // 0x2135cc: 0x3c013f00
    ctx->pc = 0x2135ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2135d0: 0x44810000
    ctx->pc = 0x2135d0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_2135d4:
    // 0x2135d4: 0xe440f7dc
    ctx->pc = 0x2135d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965212), bits); }
    // 0x2135d8: 0x3c020032
    ctx->pc = 0x2135d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2135dc: 0xc440f7dc
    ctx->pc = 0x2135dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2135e0: 0x3c030032
    ctx->pc = 0x2135e0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x2135e4: 0x3c020032
    ctx->pc = 0x2135e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2135e8: 0x8c42f7d4
    ctx->pc = 0x2135e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965204)));
    // 0x2135ec: 0xac62f7d8
    ctx->pc = 0x2135ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965208), GPR_U32(ctx, 2));
    // 0x2135f0: 0x3042000c
    ctx->pc = 0x2135f0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 12));
    // 0x2135f4: 0x1040000a
    ctx->pc = 0x2135F4u;
    {
        const bool branch_taken_0x2135f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2135F8u;
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x2135f4) {
            ctx->pc = 0x213620u;
            goto label_213620;
        }
    }
    ctx->pc = 0x2135FCu;
    // 0x2135fc: 0x3c02003c
    ctx->pc = 0x2135fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x213600: 0x8c42cd30
    ctx->pc = 0x213600u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954288)));
    // 0x213604: 0x3c013eb2
    ctx->pc = 0x213604u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16050 << 16));
    // 0x213608: 0x3421b8c3
    ctx->pc = 0x213608u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 47299));
    // 0x21360c: 0x44810000
    ctx->pc = 0x21360cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x213610: 0x4600a002
    ctx->pc = 0x213610u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x213614: 0xc44100ec
    ctx->pc = 0x213614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213618: 0x46010000
    ctx->pc = 0x213618u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21361c: 0xe44000ec
    ctx->pc = 0x21361cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 236), bits); }
label_213620:
    // 0x213620: 0x3c020032
    ctx->pc = 0x213620u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x213624: 0x8c42f7d4
    ctx->pc = 0x213624u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965204)));
    // 0x213628: 0x30420003
    ctx->pc = 0x213628u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 3));
    // 0x21362c: 0x10400009
    ctx->pc = 0x21362Cu;
    {
        const bool branch_taken_0x21362c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x213630u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21362c) {
            ctx->pc = 0x213654u;
            goto label_213654;
        }
    }
    ctx->pc = 0x213634u;
    // 0x213634: 0x8c42cd30
    ctx->pc = 0x213634u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954288)));
    // 0x213638: 0x3c013eb2
    ctx->pc = 0x213638u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16050 << 16));
    // 0x21363c: 0x3421b8c3
    ctx->pc = 0x21363cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 47299));
    // 0x213640: 0x44810800
    ctx->pc = 0x213640u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x213644: 0x4601a042
    ctx->pc = 0x213644u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x213648: 0xc44000ec
    ctx->pc = 0x213648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21364c: 0x46010001
    ctx->pc = 0x21364cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x213650: 0xe44000ec
    ctx->pc = 0x213650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 236), bits); }
label_213654:
    // 0x213654: 0x3c020032
    ctx->pc = 0x213654u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x213658: 0x8c42f7d4
    ctx->pc = 0x213658u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965204)));
    // 0x21365c: 0x304200c0
    ctx->pc = 0x21365cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 192));
    // 0x213660: 0x10400009
    ctx->pc = 0x213660u;
    {
        const bool branch_taken_0x213660 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x213664u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x213660) {
            ctx->pc = 0x213688u;
            goto label_213688;
        }
    }
    ctx->pc = 0x213668u;
    // 0x213668: 0x8c42cd30
    ctx->pc = 0x213668u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954288)));
    // 0x21366c: 0x3c013eb2
    ctx->pc = 0x21366cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16050 << 16));
    // 0x213670: 0x3421b8c3
    ctx->pc = 0x213670u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 47299));
    // 0x213674: 0x44810000
    ctx->pc = 0x213674u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x213678: 0x4600a002
    ctx->pc = 0x213678u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x21367c: 0xc4410104
    ctx->pc = 0x21367cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213680: 0x46010000
    ctx->pc = 0x213680u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x213684: 0xe4400104
    ctx->pc = 0x213684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
label_213688:
    // 0x213688: 0x3c020032
    ctx->pc = 0x213688u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21368c: 0x8c42f7d4
    ctx->pc = 0x21368cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965204)));
    // 0x213690: 0x30420030
    ctx->pc = 0x213690u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 48));
    // 0x213694: 0x10400009
    ctx->pc = 0x213694u;
    {
        const bool branch_taken_0x213694 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x213698u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x213694) {
            ctx->pc = 0x2136BCu;
            goto label_2136bc;
        }
    }
    ctx->pc = 0x21369Cu;
    // 0x21369c: 0x8c42cd30
    ctx->pc = 0x21369cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954288)));
    // 0x2136a0: 0x3c013eb2
    ctx->pc = 0x2136a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16050 << 16));
    // 0x2136a4: 0x3421b8c3
    ctx->pc = 0x2136a4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 47299));
    // 0x2136a8: 0x44810800
    ctx->pc = 0x2136a8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2136ac: 0x4601a042
    ctx->pc = 0x2136acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x2136b0: 0xc4400104
    ctx->pc = 0x2136b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2136b4: 0x46010001
    ctx->pc = 0x2136b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2136b8: 0xe4400104
    ctx->pc = 0x2136b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
label_2136bc:
    // 0x2136bc: 0x3c020032
    ctx->pc = 0x2136bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2136c0: 0x8c42f7d4
    ctx->pc = 0x2136c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965204)));
    // 0x2136c4: 0x3c030400
    ctx->pc = 0x2136c4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1024 << 16));
    // 0x2136c8: 0x431024
    ctx->pc = 0x2136c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2136cc: 0x1040000e
    ctx->pc = 0x2136CCu;
    {
        const bool branch_taken_0x2136cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2136D0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2136cc) {
            ctx->pc = 0x213708u;
            goto label_213708;
        }
    }
    ctx->pc = 0x2136D4u;
    // 0x2136d4: 0x8c42cd30
    ctx->pc = 0x2136d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954288)));
    // 0x2136d8: 0x3c014120
    ctx->pc = 0x2136d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x2136dc: 0x44810800
    ctx->pc = 0x2136dcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2136e0: 0x4601b882
    ctx->pc = 0x2136e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[23], ctx->f[1]);
    // 0x2136e4: 0x46141082
    ctx->pc = 0x2136e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2136e8: 0xc44000a4
    ctx->pc = 0x2136e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2136ec: 0x46020001
    ctx->pc = 0x2136ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2136f0: 0xe44000a4
    ctx->pc = 0x2136f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2136f4: 0x4601a842
    ctx->pc = 0x2136f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x2136f8: 0x46140842
    ctx->pc = 0x2136f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2136fc: 0xc44000ac
    ctx->pc = 0x2136fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213700: 0x46000840
    ctx->pc = 0x213700u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x213704: 0xe44100ac
    ctx->pc = 0x213704u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
label_213708:
    // 0x213708: 0x3c020032
    ctx->pc = 0x213708u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21370c: 0x8c42f7d4
    ctx->pc = 0x21370cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965204)));
    // 0x213710: 0x3c030100
    ctx->pc = 0x213710u;
    SET_GPR_U32(ctx, 3, ((uint32_t)256 << 16));
    // 0x213714: 0x431024
    ctx->pc = 0x213714u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x213718: 0x1040000e
    ctx->pc = 0x213718u;
    {
        const bool branch_taken_0x213718 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21371Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x213718) {
            ctx->pc = 0x213754u;
            goto label_213754;
        }
    }
    ctx->pc = 0x213720u;
    // 0x213720: 0x8c42cd30
    ctx->pc = 0x213720u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954288)));
    // 0x213724: 0x3c014120
    ctx->pc = 0x213724u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x213728: 0x44811000
    ctx->pc = 0x213728u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x21372c: 0x4602b802
    ctx->pc = 0x21372cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[2]);
    // 0x213730: 0x46140002
    ctx->pc = 0x213730u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x213734: 0xc44100a4
    ctx->pc = 0x213734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213738: 0x46010000
    ctx->pc = 0x213738u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21373c: 0xe44000a4
    ctx->pc = 0x21373cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x213740: 0x4602a882
    ctx->pc = 0x213740u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x213744: 0x46141082
    ctx->pc = 0x213744u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x213748: 0xc44000ac
    ctx->pc = 0x213748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21374c: 0x46020001
    ctx->pc = 0x21374cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x213750: 0xe44000ac
    ctx->pc = 0x213750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
label_213754:
    // 0x213754: 0x3c020032
    ctx->pc = 0x213754u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x213758: 0x8c42f7d4
    ctx->pc = 0x213758u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965204)));
    // 0x21375c: 0x3c030800
    ctx->pc = 0x21375cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)2048 << 16));
    // 0x213760: 0x431024
    ctx->pc = 0x213760u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x213764: 0x10400013
    ctx->pc = 0x213764u;
    {
        const bool branch_taken_0x213764 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x213768u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x213764) {
            ctx->pc = 0x2137B4u;
            goto label_2137b4;
        }
    }
    ctx->pc = 0x21376Cu;
    // 0x21376c: 0x8c42cd30
    ctx->pc = 0x21376cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954288)));
    // 0x213770: 0x3c014120
    ctx->pc = 0x213770u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x213774: 0x44810800
    ctx->pc = 0x213774u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x213778: 0x4601a802
    ctx->pc = 0x213778u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x21377c: 0x46140002
    ctx->pc = 0x21377cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x213780: 0xc44200a4
    ctx->pc = 0x213780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x213784: 0x46020000
    ctx->pc = 0x213784u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x213788: 0xe44000a4
    ctx->pc = 0x213788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x21378c: 0x4601b002
    ctx->pc = 0x21378cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    // 0x213790: 0x46140002
    ctx->pc = 0x213790u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x213794: 0xc44200a8
    ctx->pc = 0x213794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x213798: 0x46020000
    ctx->pc = 0x213798u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x21379c: 0xe44000a8
    ctx->pc = 0x21379cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2137a0: 0x4601b842
    ctx->pc = 0x2137a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[1]);
    // 0x2137a4: 0x46140842
    ctx->pc = 0x2137a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2137a8: 0xc44000ac
    ctx->pc = 0x2137a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2137ac: 0x46000840
    ctx->pc = 0x2137acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2137b0: 0xe44100ac
    ctx->pc = 0x2137b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
label_2137b4:
    // 0x2137b4: 0x3c020032
    ctx->pc = 0x2137b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2137b8: 0x8c42f7d4
    ctx->pc = 0x2137b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965204)));
    // 0x2137bc: 0x3c030200
    ctx->pc = 0x2137bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)512 << 16));
    // 0x2137c0: 0x431024
    ctx->pc = 0x2137c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2137c4: 0x10400013
    ctx->pc = 0x2137C4u;
    {
        const bool branch_taken_0x2137c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2137C8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2137c4) {
            ctx->pc = 0x213814u;
            goto label_213814;
        }
    }
    ctx->pc = 0x2137CCu;
    // 0x2137cc: 0x8c42cd30
    ctx->pc = 0x2137ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954288)));
    // 0x2137d0: 0x3c014120
    ctx->pc = 0x2137d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x2137d4: 0x44811000
    ctx->pc = 0x2137d4u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x2137d8: 0x4602a842
    ctx->pc = 0x2137d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x2137dc: 0x46140842
    ctx->pc = 0x2137dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2137e0: 0xc44000a4
    ctx->pc = 0x2137e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2137e4: 0x46010001
    ctx->pc = 0x2137e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2137e8: 0xe44000a4
    ctx->pc = 0x2137e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2137ec: 0x4602b042
    ctx->pc = 0x2137ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
    // 0x2137f0: 0x46140842
    ctx->pc = 0x2137f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2137f4: 0xc44000a8
    ctx->pc = 0x2137f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2137f8: 0x46010001
    ctx->pc = 0x2137f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2137fc: 0xe44000a8
    ctx->pc = 0x2137fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x213800: 0x4602b882
    ctx->pc = 0x213800u;
    ctx->f[2] = FPU_MUL_S(ctx->f[23], ctx->f[2]);
    // 0x213804: 0x46141082
    ctx->pc = 0x213804u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x213808: 0xc44000ac
    ctx->pc = 0x213808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21380c: 0x46020001
    ctx->pc = 0x21380cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x213810: 0xe44000ac
    ctx->pc = 0x213810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
label_213814:
    // 0x213814: 0x3c020032
    ctx->pc = 0x213814u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x213818: 0x8c42f7d4
    ctx->pc = 0x213818u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965204)));
    // 0x21381c: 0x3c030040
    ctx->pc = 0x21381cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)64 << 16));
    // 0x213820: 0x431024
    ctx->pc = 0x213820u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x213824: 0x10400015
    ctx->pc = 0x213824u;
    {
        const bool branch_taken_0x213824 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x213828u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x213824) {
            ctx->pc = 0x21387Cu;
            goto label_21387c;
        }
    }
    ctx->pc = 0x21382Cu;
    // 0x21382c: 0x8c42cd30
    ctx->pc = 0x21382cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954288)));
    // 0x213830: 0x3c014120
    ctx->pc = 0x213830u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x213834: 0x44811000
    ctx->pc = 0x213834u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x213838: 0x4602a842
    ctx->pc = 0x213838u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x21383c: 0x46160842
    ctx->pc = 0x21383cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x213840: 0x46140842
    ctx->pc = 0x213840u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x213844: 0xc44000a4
    ctx->pc = 0x213844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213848: 0x46010001
    ctx->pc = 0x213848u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21384c: 0xe44000a4
    ctx->pc = 0x21384cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x213850: 0x4602c002
    ctx->pc = 0x213850u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[2]);
    // 0x213854: 0x46140002
    ctx->pc = 0x213854u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x213858: 0xc44100a8
    ctx->pc = 0x213858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21385c: 0x46010000
    ctx->pc = 0x21385cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x213860: 0xe44000a8
    ctx->pc = 0x213860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x213864: 0x4602b882
    ctx->pc = 0x213864u;
    ctx->f[2] = FPU_MUL_S(ctx->f[23], ctx->f[2]);
    // 0x213868: 0x46161082
    ctx->pc = 0x213868u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x21386c: 0x46141082
    ctx->pc = 0x21386cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x213870: 0xc44000ac
    ctx->pc = 0x213870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213874: 0x46020001
    ctx->pc = 0x213874u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x213878: 0xe44000ac
    ctx->pc = 0x213878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
label_21387c:
    // 0x21387c: 0x3c020032
    ctx->pc = 0x21387cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x213880: 0x8c42f7d4
    ctx->pc = 0x213880u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965204)));
    // 0x213884: 0x3c030080
    ctx->pc = 0x213884u;
    SET_GPR_U32(ctx, 3, ((uint32_t)128 << 16));
    // 0x213888: 0x431024
    ctx->pc = 0x213888u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21388c: 0x10400015
    ctx->pc = 0x21388Cu;
    {
        const bool branch_taken_0x21388c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x213890u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21388c) {
            ctx->pc = 0x2138E4u;
            goto label_2138e4;
        }
    }
    ctx->pc = 0x213894u;
    // 0x213894: 0x8c42cd30
    ctx->pc = 0x213894u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954288)));
    // 0x213898: 0x3c014120
    ctx->pc = 0x213898u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x21389c: 0x44811000
    ctx->pc = 0x21389cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x2138a0: 0x4602a802
    ctx->pc = 0x2138a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x2138a4: 0x46160002
    ctx->pc = 0x2138a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x2138a8: 0x46140002
    ctx->pc = 0x2138a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2138ac: 0xc44100a4
    ctx->pc = 0x2138acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2138b0: 0x46010000
    ctx->pc = 0x2138b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2138b4: 0xe44000a4
    ctx->pc = 0x2138b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2138b8: 0x4602c042
    ctx->pc = 0x2138b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[24], ctx->f[2]);
    // 0x2138bc: 0x46140842
    ctx->pc = 0x2138bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x2138c0: 0xc44000a8
    ctx->pc = 0x2138c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2138c4: 0x46010001
    ctx->pc = 0x2138c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2138c8: 0xe44000a8
    ctx->pc = 0x2138c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2138cc: 0x4602b882
    ctx->pc = 0x2138ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[23], ctx->f[2]);
    // 0x2138d0: 0x46161082
    ctx->pc = 0x2138d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x2138d4: 0x46141082
    ctx->pc = 0x2138d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2138d8: 0xc44000ac
    ctx->pc = 0x2138d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2138dc: 0x46001080
    ctx->pc = 0x2138dcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2138e0: 0xe44200ac
    ctx->pc = 0x2138e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
label_2138e4:
    // 0x2138e4: 0x3c020032
    ctx->pc = 0x2138e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2138e8: 0x8c42f7d4
    ctx->pc = 0x2138e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965204)));
    // 0x2138ec: 0x3c030010
    ctx->pc = 0x2138ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)16 << 16));
    // 0x2138f0: 0x431024
    ctx->pc = 0x2138f0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2138f4: 0x10400005
    ctx->pc = 0x2138F4u;
    {
        const bool branch_taken_0x2138f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2138F8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2138f4) {
            ctx->pc = 0x21390Cu;
            goto label_21390c;
        }
    }
    ctx->pc = 0x2138FCu;
    // 0x2138fc: 0x8c42cd30
    ctx->pc = 0x2138fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954288)));
    // 0x213900: 0xc440010c
    ctx->pc = 0x213900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213904: 0x4600a000
    ctx->pc = 0x213904u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x213908: 0xe440010c
    ctx->pc = 0x213908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 268), bits); }
label_21390c:
    // 0x21390c: 0x3c020032
    ctx->pc = 0x21390cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x213910: 0x8c42f7d4
    ctx->pc = 0x213910u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965204)));
    // 0x213914: 0x3c030020
    ctx->pc = 0x213914u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32 << 16));
    // 0x213918: 0x431024
    ctx->pc = 0x213918u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21391c: 0x10400005
    ctx->pc = 0x21391Cu;
    {
        const bool branch_taken_0x21391c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x213920u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x21391c) {
            ctx->pc = 0x213934u;
            goto label_213934;
        }
    }
    ctx->pc = 0x213924u;
    // 0x213924: 0x8c42cd30
    ctx->pc = 0x213924u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954288)));
    // 0x213928: 0xc440010c
    ctx->pc = 0x213928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21392c: 0x46140001
    ctx->pc = 0x21392cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x213930: 0xe440010c
    ctx->pc = 0x213930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 268), bits); }
label_213934:
    // 0x213934: 0x3c02003c
    ctx->pc = 0x213934u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x213938: 0x8c42cd30
    ctx->pc = 0x213938u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954288)));
    // 0x21393c: 0xc44000a4
    ctx->pc = 0x21393cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213940: 0xe44000b0
    ctx->pc = 0x213940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x213944: 0xc44000a8
    ctx->pc = 0x213944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213948: 0xe44000b4
    ctx->pc = 0x213948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x21394c: 0xc44000ac
    ctx->pc = 0x21394cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x213950: 0xe44000b8
    ctx->pc = 0x213950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
    // 0x213954: 0x40182d
    ctx->pc = 0x213954u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213958: 0xc46100ec
    ctx->pc = 0x213958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21395c: 0x3c014049
    ctx->pc = 0x21395cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x213960: 0x34210fdb
    ctx->pc = 0x213960u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x213964: 0x44810000
    ctx->pc = 0x213964u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x213968: 0x46010034
    ctx->pc = 0x213968u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21396c: 0x0
    ctx->pc = 0x21396cu;
    // NOP
    // 0x213970: 0x45000006
    ctx->pc = 0x213970u;
    {
        const bool branch_taken_0x213970 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x213974u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x213970) {
            ctx->pc = 0x21398Cu;
            goto label_21398c;
        }
    }
    ctx->pc = 0x213978u;
    // 0x213978: 0x3c0140c9
    ctx->pc = 0x213978u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x21397c: 0x34210fdb
    ctx->pc = 0x21397cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x213980: 0x44810000
    ctx->pc = 0x213980u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x213984: 0x10000011
    ctx->pc = 0x213984u;
    {
        const bool branch_taken_0x213984 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x213988u;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x213984) {
            ctx->pc = 0x2139CCu;
            goto label_2139cc;
        }
    }
    ctx->pc = 0x21398Cu;
label_21398c:
    // 0x21398c: 0x8c42cd30
    ctx->pc = 0x21398cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954288)));
    // 0x213990: 0xc44100ec
    ctx->pc = 0x213990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213994: 0x3c01c049
    ctx->pc = 0x213994u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x213998: 0x34210fdb
    ctx->pc = 0x213998u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x21399c: 0x44810000
    ctx->pc = 0x21399cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2139a0: 0x46000836
    ctx->pc = 0x2139a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2139a4: 0x0
    ctx->pc = 0x2139a4u;
    // NOP
    // 0x2139a8: 0x45000006
    ctx->pc = 0x2139A8u;
    {
        const bool branch_taken_0x2139a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2139ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2139a8) {
            ctx->pc = 0x2139C4u;
            goto label_2139c4;
        }
    }
    ctx->pc = 0x2139B0u;
    // 0x2139b0: 0x3c0140c9
    ctx->pc = 0x2139b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2139b4: 0x34210fdb
    ctx->pc = 0x2139b4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2139b8: 0x44810000
    ctx->pc = 0x2139b8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2139bc: 0x10000003
    ctx->pc = 0x2139BCu;
    {
        const bool branch_taken_0x2139bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2139C0u;
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x2139bc) {
            ctx->pc = 0x2139CCu;
            goto label_2139cc;
        }
    }
    ctx->pc = 0x2139C4u;
label_2139c4:
    // 0x2139c4: 0x8c42cd30
    ctx->pc = 0x2139c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954288)));
    // 0x2139c8: 0xc44000ec
    ctx->pc = 0x2139c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2139cc:
    // 0x2139cc: 0xe46000ec
    ctx->pc = 0x2139ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 236), bits); }
    // 0x2139d0: 0x3c02003c
    ctx->pc = 0x2139d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2139d4: 0x8c43cd30
    ctx->pc = 0x2139d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294954288)));
    // 0x2139d8: 0xc4610104
    ctx->pc = 0x2139d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2139dc: 0x3c014049
    ctx->pc = 0x2139dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x2139e0: 0x34210fdb
    ctx->pc = 0x2139e0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2139e4: 0x44810000
    ctx->pc = 0x2139e4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2139e8: 0x46010034
    ctx->pc = 0x2139e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2139ec: 0x0
    ctx->pc = 0x2139ecu;
    // NOP
    // 0x2139f0: 0x45000006
    ctx->pc = 0x2139F0u;
    {
        const bool branch_taken_0x2139f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2139F4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954288)));
        if (branch_taken_0x2139f0) {
            ctx->pc = 0x213A0Cu;
            goto label_213a0c;
        }
    }
    ctx->pc = 0x2139F8u;
    // 0x2139f8: 0x3c0140c9
    ctx->pc = 0x2139f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2139fc: 0x34210fdb
    ctx->pc = 0x2139fcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x213a00: 0x44810000
    ctx->pc = 0x213a00u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x213a04: 0x10000010
    ctx->pc = 0x213A04u;
    {
        const bool branch_taken_0x213a04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x213A08u;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x213a04) {
            ctx->pc = 0x213A48u;
            goto label_213a48;
        }
    }
    ctx->pc = 0x213A0Cu;
label_213a0c:
    // 0x213a0c: 0xc4410104
    ctx->pc = 0x213a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x213a10: 0x3c01c049
    ctx->pc = 0x213a10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x213a14: 0x34210fdb
    ctx->pc = 0x213a14u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x213a18: 0x44810000
    ctx->pc = 0x213a18u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x213a1c: 0x46000836
    ctx->pc = 0x213a1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x213a20: 0x0
    ctx->pc = 0x213a20u;
    // NOP
    // 0x213a24: 0x45000006
    ctx->pc = 0x213A24u;
    {
        const bool branch_taken_0x213a24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x213A28u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x213a24) {
            ctx->pc = 0x213A40u;
            goto label_213a40;
        }
    }
    ctx->pc = 0x213A2Cu;
    // 0x213a2c: 0x3c0140c9
    ctx->pc = 0x213a2cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x213a30: 0x34210fdb
    ctx->pc = 0x213a30u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x213a34: 0x44810000
    ctx->pc = 0x213a34u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x213a38: 0x10000003
    ctx->pc = 0x213A38u;
    {
        const bool branch_taken_0x213a38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x213A3Cu;
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x213a38) {
            ctx->pc = 0x213A48u;
            goto label_213a48;
        }
    }
    ctx->pc = 0x213A40u;
label_213a40:
    // 0x213a40: 0x8c42cd30
    ctx->pc = 0x213a40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294954288)));
    // 0x213a44: 0xc4400104
    ctx->pc = 0x213a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_213a48:
    // 0x213a48: 0xe4600104
    ctx->pc = 0x213a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
label_213a4c:
    // 0x213a4c: 0xdfbf0010
    ctx->pc = 0x213a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x213a50: 0xdfb00000
    ctx->pc = 0x213a50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213a54: 0xc7b80040
    ctx->pc = 0x213a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x213a58: 0xc7b70038
    ctx->pc = 0x213a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x213a5c: 0xc7b60030
    ctx->pc = 0x213a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x213a60: 0xc7b50028
    ctx->pc = 0x213a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x213a64: 0xc7b40020
    ctx->pc = 0x213a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x213a68: 0x3e00008
    ctx->pc = 0x213A68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213A6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21352Cu: goto label_21352c;
            case 0x2135A0u: goto label_2135a0;
            case 0x2135CCu: goto label_2135cc;
            case 0x2135D4u: goto label_2135d4;
            case 0x213620u: goto label_213620;
            case 0x213654u: goto label_213654;
            case 0x213688u: goto label_213688;
            case 0x2136BCu: goto label_2136bc;
            case 0x213708u: goto label_213708;
            case 0x213754u: goto label_213754;
            case 0x2137B4u: goto label_2137b4;
            case 0x213814u: goto label_213814;
            case 0x21387Cu: goto label_21387c;
            case 0x2138E4u: goto label_2138e4;
            case 0x21390Cu: goto label_21390c;
            case 0x213934u: goto label_213934;
            case 0x21398Cu: goto label_21398c;
            case 0x2139C4u: goto label_2139c4;
            case 0x2139CCu: goto label_2139cc;
            case 0x213A0Cu: goto label_213a0c;
            case 0x213A40u: goto label_213a40;
            case 0x213A48u: goto label_213a48;
            case 0x213A4Cu: goto label_213a4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x213A70u;
}
