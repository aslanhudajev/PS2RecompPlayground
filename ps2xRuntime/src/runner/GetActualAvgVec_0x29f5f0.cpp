#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetActualAvgVec
// Address: 0x29f5f0 - 0x29fc98
void GetActualAvgVec_0x29f5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29f5f0u;

    // 0x29f5f0: 0x27bdff30
    ctx->pc = 0x29f5f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x29f5f4: 0xffbf0090
    ctx->pc = 0x29f5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x29f5f8: 0xffb50080
    ctx->pc = 0x29f5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x29f5fc: 0xffb40070
    ctx->pc = 0x29f5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x29f600: 0xffb30060
    ctx->pc = 0x29f600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x29f604: 0xffb20050
    ctx->pc = 0x29f604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x29f608: 0xffb10040
    ctx->pc = 0x29f608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x29f60c: 0xffb00030
    ctx->pc = 0x29f60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x29f610: 0xe7b800c0
    ctx->pc = 0x29f610u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x29f614: 0xe7b700b8
    ctx->pc = 0x29f614u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x29f618: 0xe7b600b0
    ctx->pc = 0x29f618u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x29f61c: 0xe7b500a8
    ctx->pc = 0x29f61cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x29f620: 0xe7b400a0
    ctx->pc = 0x29f620u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x29f624: 0x80a02d
    ctx->pc = 0x29f624u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f628: 0xa0802d
    ctx->pc = 0x29f628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f62c: 0xc0982d
    ctx->pc = 0x29f62cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f630: 0x902d
    ctx->pc = 0x29f630u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29f634: 0x4480c000
    ctx->pc = 0x29f634u;
    *(uint32_t*)&ctx->f[24] = GPR_U32(ctx, 0);
    // 0x29f638: 0x4600c506
    ctx->pc = 0x29f638u;
    ctx->f[20] = FPU_MOV_S(ctx->f[24]);
    // 0x29f63c: 0x4600c546
    ctx->pc = 0x29f63cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[24]);
    // 0x29f640: 0x2411ffff
    ctx->pc = 0x29f640u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29f644: 0x3c020032
    ctx->pc = 0x29f644u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x29f648: 0x24551bc0
    ctx->pc = 0x29f648u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x29f64c: 0x0
    ctx->pc = 0x29f64cu;
    // NOP
label_29f650:
    // 0x29f650: 0x621000f
    ctx->pc = 0x29F650u;
    {
        const bool branch_taken_0x29f650 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x29F654u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x29f650) {
            ctx->pc = 0x29F690u;
            goto label_29f690;
        }
    }
    ctx->pc = 0x29F658u;
    // 0x29f658: 0x12600053
    ctx->pc = 0x29F658u;
    {
        const bool branch_taken_0x29f658 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x29F65Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x29f658) {
            ctx->pc = 0x29F7A8u;
            goto label_29f7a8;
        }
    }
    ctx->pc = 0x29F660u;
    // 0x29f660: 0x8c42d930
    ctx->pc = 0x29f660u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957360)));
    // 0x29f664: 0xc6000000
    ctx->pc = 0x29f664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f668: 0xc4410050
    ctx->pc = 0x29f668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f66c: 0x46010001
    ctx->pc = 0x29f66cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29f670: 0xe7a00000
    ctx->pc = 0x29f670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29f674: 0xc6000004
    ctx->pc = 0x29f674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f678: 0xc4410054
    ctx->pc = 0x29f678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f67c: 0x46010001
    ctx->pc = 0x29f67cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29f680: 0xe7a00004
    ctx->pc = 0x29f680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29f684: 0xc6000008
    ctx->pc = 0x29f684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f688: 0x1000001e
    ctx->pc = 0x29F688u;
    {
        const bool branch_taken_0x29f688 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29F68Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x29f688) {
            ctx->pc = 0x29F704u;
            goto label_29f704;
        }
    }
    ctx->pc = 0x29F690u;
label_29f690:
    // 0x29f690: 0x2221818
    ctx->pc = 0x29f690u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x29f694: 0x752021
    ctx->pc = 0x29f694u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x29f698: 0x8c8300fc
    ctx->pc = 0x29f698u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x29f69c: 0x24020001
    ctx->pc = 0x29f69cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f6a0: 0x54620042
    ctx->pc = 0x29F6A0u;
    {
        const bool branch_taken_0x29f6a0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x29f6a0) {
            ctx->pc = 0x29F6A4u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x29F7ACu;
            goto label_29f7ac;
        }
    }
    ctx->pc = 0x29F6A8u;
    // 0x29f6a8: 0x9482093c
    ctx->pc = 0x29f6a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2364)));
    // 0x29f6ac: 0x30420020
    ctx->pc = 0x29f6acu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x29f6b0: 0x1040000b
    ctx->pc = 0x29F6B0u;
    {
        const bool branch_taken_0x29f6b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29F6B4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x29f6b0) {
            ctx->pc = 0x29F6E0u;
            goto label_29f6e0;
        }
    }
    ctx->pc = 0x29F6B8u;
    // 0x29f6b8: 0xc48100f0
    ctx->pc = 0x29f6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f6bc: 0x46010001
    ctx->pc = 0x29f6bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29f6c0: 0xe7a00000
    ctx->pc = 0x29f6c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29f6c4: 0xc6000004
    ctx->pc = 0x29f6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f6c8: 0xc48100f4
    ctx->pc = 0x29f6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f6cc: 0x46010001
    ctx->pc = 0x29f6ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29f6d0: 0xe7a00004
    ctx->pc = 0x29f6d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29f6d4: 0xc6000008
    ctx->pc = 0x29f6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f6d8: 0x1000000a
    ctx->pc = 0x29F6D8u;
    {
        const bool branch_taken_0x29f6d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29F6DCu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x29f6d8) {
            ctx->pc = 0x29F704u;
            goto label_29f704;
        }
    }
    ctx->pc = 0x29F6E0u;
label_29f6e0:
    // 0x29f6e0: 0xc4810050
    ctx->pc = 0x29f6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f6e4: 0x46010001
    ctx->pc = 0x29f6e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29f6e8: 0xe7a00000
    ctx->pc = 0x29f6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29f6ec: 0xc6000004
    ctx->pc = 0x29f6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f6f0: 0xc4810054
    ctx->pc = 0x29f6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f6f4: 0x46010001
    ctx->pc = 0x29f6f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29f6f8: 0xe7a00004
    ctx->pc = 0x29f6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29f6fc: 0xc6000008
    ctx->pc = 0x29f6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f700: 0xc4810058
    ctx->pc = 0x29f700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_29f704:
    // 0x29f704: 0x46010001
    ctx->pc = 0x29f704u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x29f708: 0xe7a00008
    ctx->pc = 0x29f708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29f70c: 0xc0b58fc
    ctx->pc = 0x29F70Cu;
    SET_GPR_U32(ctx, 31, 0x29F714u);
    ctx->pc = 0x29F710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D63F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector2D_0x2d63f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F714u; }
    }
    if (ctx->pc != 0x29F714u) { return; }
    ctx->pc = 0x29F714u;
    // 0x29f714: 0x46000046
    ctx->pc = 0x29f714u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x29f718: 0x4601a034
    ctx->pc = 0x29f718u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f71c: 0x45000014
    ctx->pc = 0x29F71Cu;
    {
        const bool branch_taken_0x29f71c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f71c) {
            ctx->pc = 0x29F770u;
            goto label_29f770;
        }
    }
    ctx->pc = 0x29F724u;
    // 0x29f724: 0x44800000
    ctx->pc = 0x29f724u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x29f728: 0x46140034
    ctx->pc = 0x29f728u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f72c: 0x0
    ctx->pc = 0x29f72cu;
    // NOP
    // 0x29f730: 0x45000007
    ctx->pc = 0x29F730u;
    {
        const bool branch_taken_0x29f730 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29F734u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x29f730) {
            ctx->pc = 0x29F750u;
            goto label_29f750;
        }
    }
    ctx->pc = 0x29F738u;
    // 0x29f738: 0xe7a00020
    ctx->pc = 0x29f738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x29f73c: 0xc7a00014
    ctx->pc = 0x29f73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f740: 0xe7a00024
    ctx->pc = 0x29f740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x29f744: 0xc7a00018
    ctx->pc = 0x29f744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f748: 0xe7a00028
    ctx->pc = 0x29f748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x29f74c: 0x4600a546
    ctx->pc = 0x29f74cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
label_29f750:
    // 0x29f750: 0xc7a00000
    ctx->pc = 0x29f750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f754: 0xe7a00010
    ctx->pc = 0x29f754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x29f758: 0xc7a00004
    ctx->pc = 0x29f758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f75c: 0xe7a00014
    ctx->pc = 0x29f75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x29f760: 0xc7a00008
    ctx->pc = 0x29f760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f764: 0xe7a00018
    ctx->pc = 0x29f764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x29f768: 0x1000000b
    ctx->pc = 0x29F768u;
    {
        const bool branch_taken_0x29f768 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29F76Cu;
        ctx->f[20] = FPU_MOV_S(ctx->f[1]);
        if (branch_taken_0x29f768) {
            ctx->pc = 0x29F798u;
            goto label_29f798;
        }
    }
    ctx->pc = 0x29F770u;
label_29f770:
    // 0x29f770: 0x4601a834
    ctx->pc = 0x29f770u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f774: 0x0
    ctx->pc = 0x29f774u;
    // NOP
    // 0x29f778: 0x45000008
    ctx->pc = 0x29F778u;
    {
        const bool branch_taken_0x29f778 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29F77Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x29f778) {
            ctx->pc = 0x29F79Cu;
            goto label_29f79c;
        }
    }
    ctx->pc = 0x29F780u;
    // 0x29f780: 0xe7a00020
    ctx->pc = 0x29f780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x29f784: 0xc7a00004
    ctx->pc = 0x29f784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f788: 0xe7a00024
    ctx->pc = 0x29f788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x29f78c: 0xc7a00008
    ctx->pc = 0x29f78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f790: 0xe7a00028
    ctx->pc = 0x29f790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x29f794: 0x46000d46
    ctx->pc = 0x29f794u;
    ctx->f[21] = FPU_MOV_S(ctx->f[1]);
label_29f798:
    // 0x29f798: 0x26520001
    ctx->pc = 0x29f798u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_29f79c:
    // 0x29f79c: 0x3c013f80
    ctx->pc = 0x29f79cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x29f7a0: 0x44810000
    ctx->pc = 0x29f7a0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29f7a4: 0x4600c600
    ctx->pc = 0x29f7a4u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[0]);
label_29f7a8:
    // 0x29f7a8: 0x26310001
    ctx->pc = 0x29f7a8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_29f7ac:
    // 0x29f7ac: 0x2a220004
    ctx->pc = 0x29f7acu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 4));
    // 0x29f7b0: 0x1440ffa7
    ctx->pc = 0x29F7B0u;
    {
        const bool branch_taken_0x29f7b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x29f7b0) {
            ctx->pc = 0x29F650u;
            goto label_29f650;
        }
    }
    ctx->pc = 0x29F7B8u;
    // 0x29f7b8: 0x16400004
    ctx->pc = 0x29F7B8u;
    {
        const bool branch_taken_0x29f7b8 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x29F7BCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x29f7b8) {
            ctx->pc = 0x29F7CCu;
            goto label_29f7cc;
        }
    }
    ctx->pc = 0x29F7C0u;
    // 0x29f7c0: 0x4480c000
    ctx->pc = 0x29f7c0u;
    *(uint32_t*)&ctx->f[24] = GPR_U32(ctx, 0);
    // 0x29f7c4: 0x10000126
    ctx->pc = 0x29F7C4u;
    {
        const bool branch_taken_0x29f7c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29F7C8u;
        ctx->f[0] = FPU_MOV_S(ctx->f[24]);
        if (branch_taken_0x29f7c4) {
            ctx->pc = 0x29FC60u;
            goto label_29fc60;
        }
    }
    ctx->pc = 0x29F7CCu;
label_29f7cc:
    // 0x29f7cc: 0x1642001d
    ctx->pc = 0x29F7CCu;
    {
        const bool branch_taken_0x29f7cc = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x29F7D0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x29f7cc) {
            ctx->pc = 0x29F844u;
            goto label_29f844;
        }
    }
    ctx->pc = 0x29F7D4u;
    // 0x29f7d4: 0xc0ba04a
    ctx->pc = 0x29F7D4u;
    SET_GPR_U32(ctx, 31, 0x29F7DCu);
    ctx->pc = 0x29F7D8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F7DCu; }
    }
    if (ctx->pc != 0x29F7DCu) { return; }
    ctx->pc = 0x29F7DCu;
    // 0x29f7dc: 0x3c020031
    ctx->pc = 0x29f7dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x29f7e0: 0xdc420e28
    ctx->pc = 0x29f7e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x29f7e4: 0x30420001
    ctx->pc = 0x29f7e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x29f7e8: 0x2103c
    ctx->pc = 0x29f7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29f7ec: 0x2103f
    ctx->pc = 0x29f7ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x29f7f0: 0x10400111
    ctx->pc = 0x29F7F0u;
    {
        const bool branch_taken_0x29f7f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29F7F4u;
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x29f7f0) {
            ctx->pc = 0x29FC38u;
            goto label_29fc38;
        }
    }
    ctx->pc = 0x29F7F8u;
    // 0x29f7f8: 0x3c014334
    ctx->pc = 0x29f7f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17204 << 16));
    // 0x29f7fc: 0x44816000
    ctx->pc = 0x29f7fcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x29f800: 0x460cb302
    ctx->pc = 0x29f800u;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[12]);
    // 0x29f804: 0x3c013ea2
    ctx->pc = 0x29f804u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16034 << 16));
    // 0x29f808: 0x3421f983
    ctx->pc = 0x29f808u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 63875));
    // 0x29f80c: 0x44810000
    ctx->pc = 0x29f80cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29f810: 0x3c0400ff
    ctx->pc = 0x29f810u;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x29f814: 0x3484ff00
    ctx->pc = 0x29f814u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65280));
    // 0x29f818: 0x24050001
    ctx->pc = 0x29f818u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f81c: 0x24060022
    ctx->pc = 0x29f81cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 34));
    // 0x29f820: 0x3c07003b
    ctx->pc = 0x29f820u;
    SET_GPR_U32(ctx, 7, ((uint32_t)59 << 16));
    // 0x29f824: 0x24e7e4c8
    ctx->pc = 0x29f824u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294960328));
    // 0x29f828: 0x46006302
    ctx->pc = 0x29f828u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x29f82c: 0xc7ad0010
    ctx->pc = 0x29f82cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29f830: 0xc7ae0014
    ctx->pc = 0x29f830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x29f834: 0xc0b4822
    ctx->pc = 0x29F834u;
    SET_GPR_U32(ctx, 31, 0x29F83Cu);
    ctx->pc = 0x29F838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->pc = 0x2D2088u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintfc_0x2d2088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F83Cu; }
    }
    if (ctx->pc != 0x29F83Cu) { return; }
    ctx->pc = 0x29F83Cu;
    // 0x29f83c: 0x100000fe
    ctx->pc = 0x29F83Cu;
    {
        const bool branch_taken_0x29f83c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x29f83c) {
            ctx->pc = 0x29FC38u;
            goto label_29fc38;
        }
    }
    ctx->pc = 0x29F844u;
label_29f844:
    // 0x29f844: 0xc0ba04a
    ctx->pc = 0x29F844u;
    SET_GPR_U32(ctx, 31, 0x29F84Cu);
    ctx->pc = 0x29F848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F84Cu; }
    }
    if (ctx->pc != 0x29F84Cu) { return; }
    ctx->pc = 0x29F84Cu;
    // 0x29f84c: 0x46000546
    ctx->pc = 0x29f84cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x29f850: 0xc7ac0020
    ctx->pc = 0x29f850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29f854: 0xc0ba04a
    ctx->pc = 0x29F854u;
    SET_GPR_U32(ctx, 31, 0x29F85Cu);
    ctx->pc = 0x29F858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F85Cu; }
    }
    if (ctx->pc != 0x29F85Cu) { return; }
    ctx->pc = 0x29F85Cu;
    // 0x29f85c: 0x460005c6
    ctx->pc = 0x29f85cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
    // 0x29f860: 0x4617ad80
    ctx->pc = 0x29f860u;
    ctx->f[22] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
    // 0x29f864: 0x3c013f00
    ctx->pc = 0x29f864u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x29f868: 0x44810000
    ctx->pc = 0x29f868u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29f86c: 0x4600b582
    ctx->pc = 0x29f86cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x29f870: 0x3c014049
    ctx->pc = 0x29f870u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x29f874: 0x34210fdb
    ctx->pc = 0x29f874u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29f878: 0x44810000
    ctx->pc = 0x29f878u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29f87c: 0x46160034
    ctx->pc = 0x29f87cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f880: 0x45000006
    ctx->pc = 0x29F880u;
    {
        const bool branch_taken_0x29f880 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f880) {
            ctx->pc = 0x29F89Cu;
            goto label_29f89c;
        }
    }
    ctx->pc = 0x29F888u;
    // 0x29f888: 0x3c0140c9
    ctx->pc = 0x29f888u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x29f88c: 0x34210fdb
    ctx->pc = 0x29f88cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29f890: 0x44810000
    ctx->pc = 0x29f890u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29f894: 0x1000000c
    ctx->pc = 0x29F894u;
    {
        const bool branch_taken_0x29f894 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29F898u;
        ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
        if (branch_taken_0x29f894) {
            ctx->pc = 0x29F8C8u;
            goto label_29f8c8;
        }
    }
    ctx->pc = 0x29F89Cu;
label_29f89c:
    // 0x29f89c: 0x3c01c049
    ctx->pc = 0x29f89cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x29f8a0: 0x34210fdb
    ctx->pc = 0x29f8a0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29f8a4: 0x44810000
    ctx->pc = 0x29f8a4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29f8a8: 0x4600b036
    ctx->pc = 0x29f8a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f8ac: 0x0
    ctx->pc = 0x29f8acu;
    // NOP
    // 0x29f8b0: 0x45020005
    ctx->pc = 0x29F8B0u;
    {
        const bool branch_taken_0x29f8b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f8b0) {
            ctx->pc = 0x29F8B4u;
            ctx->f[0] = FPU_MOV_S(ctx->f[22]);
            ctx->pc = 0x29F8C8u;
            goto label_29f8c8;
        }
    }
    ctx->pc = 0x29F8B8u;
    // 0x29f8b8: 0x3c0140c9
    ctx->pc = 0x29f8b8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x29f8bc: 0x34210fdb
    ctx->pc = 0x29f8bcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29f8c0: 0x44810000
    ctx->pc = 0x29f8c0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29f8c4: 0x4600b000
    ctx->pc = 0x29f8c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_29f8c8:
    // 0x29f8c8: 0x46000586
    ctx->pc = 0x29f8c8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x29f8cc: 0x4615b041
    ctx->pc = 0x29f8ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
    // 0x29f8d0: 0x3c014049
    ctx->pc = 0x29f8d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x29f8d4: 0x34210fdb
    ctx->pc = 0x29f8d4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29f8d8: 0x44810000
    ctx->pc = 0x29f8d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29f8dc: 0x46010034
    ctx->pc = 0x29f8dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f8e0: 0x45000006
    ctx->pc = 0x29F8E0u;
    {
        const bool branch_taken_0x29f8e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f8e0) {
            ctx->pc = 0x29F8FCu;
            goto label_29f8fc;
        }
    }
    ctx->pc = 0x29F8E8u;
    // 0x29f8e8: 0x3c0140c9
    ctx->pc = 0x29f8e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x29f8ec: 0x34210fdb
    ctx->pc = 0x29f8ecu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29f8f0: 0x44810000
    ctx->pc = 0x29f8f0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29f8f4: 0x1000000c
    ctx->pc = 0x29F8F4u;
    {
        const bool branch_taken_0x29f8f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29F8F8u;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x29f8f4) {
            ctx->pc = 0x29F928u;
            goto label_29f928;
        }
    }
    ctx->pc = 0x29F8FCu;
label_29f8fc:
    // 0x29f8fc: 0x3c01c049
    ctx->pc = 0x29f8fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x29f900: 0x34210fdb
    ctx->pc = 0x29f900u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29f904: 0x44810000
    ctx->pc = 0x29f904u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29f908: 0x46000836
    ctx->pc = 0x29f908u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f90c: 0x0
    ctx->pc = 0x29f90cu;
    // NOP
    // 0x29f910: 0x4502000f
    ctx->pc = 0x29F910u;
    {
        const bool branch_taken_0x29f910 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f910) {
            ctx->pc = 0x29F914u;
            ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
            ctx->pc = 0x29F950u;
            goto label_29f950;
        }
    }
    ctx->pc = 0x29F918u;
    // 0x29f918: 0x3c0140c9
    ctx->pc = 0x29f918u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x29f91c: 0x34210fdb
    ctx->pc = 0x29f91cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29f920: 0x44810000
    ctx->pc = 0x29f920u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29f924: 0x46000800
    ctx->pc = 0x29f924u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_29f928:
    // 0x29f928: 0x46000005
    ctx->pc = 0x29f928u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x29f92c: 0x3c013fc9
    ctx->pc = 0x29f92cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x29f930: 0x34210fdb
    ctx->pc = 0x29f930u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29f934: 0x44810800
    ctx->pc = 0x29f934u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x29f938: 0x46000834
    ctx->pc = 0x29f938u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f93c: 0x0
    ctx->pc = 0x29f93cu;
    // NOP
    // 0x29f940: 0x4501000b
    ctx->pc = 0x29F940u;
    {
        const bool branch_taken_0x29f940 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29F944u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x29f940) {
            ctx->pc = 0x29F970u;
            goto label_29f970;
        }
    }
    ctx->pc = 0x29F948u;
    // 0x29f948: 0x10000024
    ctx->pc = 0x29F948u;
    {
        const bool branch_taken_0x29f948 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29F94Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x29f948) {
            ctx->pc = 0x29F9DCu;
            goto label_29f9dc;
        }
    }
    ctx->pc = 0x29F950u;
label_29f950:
    // 0x29f950: 0x46000005
    ctx->pc = 0x29f950u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x29f954: 0x3c013fc9
    ctx->pc = 0x29f954u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x29f958: 0x34210fdb
    ctx->pc = 0x29f958u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29f95c: 0x44810800
    ctx->pc = 0x29f95cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x29f960: 0x46000834
    ctx->pc = 0x29f960u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f964: 0x0
    ctx->pc = 0x29f964u;
    // NOP
    // 0x29f968: 0x4500001b
    ctx->pc = 0x29F968u;
    {
        const bool branch_taken_0x29f968 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29F96Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x29f968) {
            ctx->pc = 0x29F9D8u;
            goto label_29f9d8;
        }
    }
    ctx->pc = 0x29F970u;
label_29f970:
    // 0x29f970: 0x3c014049
    ctx->pc = 0x29f970u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x29f974: 0x34210fdb
    ctx->pc = 0x29f974u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29f978: 0x44810000
    ctx->pc = 0x29f978u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29f97c: 0x4600b040
    ctx->pc = 0x29f97cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x29f980: 0x46010034
    ctx->pc = 0x29f980u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f984: 0x0
    ctx->pc = 0x29f984u;
    // NOP
    // 0x29f988: 0x45020006
    ctx->pc = 0x29F988u;
    {
        const bool branch_taken_0x29f988 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f988) {
            ctx->pc = 0x29F98Cu;
            ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
            ctx->pc = 0x29F9A4u;
            goto label_29f9a4;
        }
    }
    ctx->pc = 0x29F990u;
    // 0x29f990: 0x3c0140c9
    ctx->pc = 0x29f990u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x29f994: 0x34210fdb
    ctx->pc = 0x29f994u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29f998: 0x44810000
    ctx->pc = 0x29f998u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29f99c: 0x1000000c
    ctx->pc = 0x29F99Cu;
    {
        const bool branch_taken_0x29f99c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29F9A0u;
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x29f99c) {
            ctx->pc = 0x29F9D0u;
            goto label_29f9d0;
        }
    }
    ctx->pc = 0x29F9A4u;
label_29f9a4:
    // 0x29f9a4: 0x3c01c049
    ctx->pc = 0x29f9a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x29f9a8: 0x34210fdb
    ctx->pc = 0x29f9a8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29f9ac: 0x44810000
    ctx->pc = 0x29f9acu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29f9b0: 0x46006036
    ctx->pc = 0x29f9b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f9b4: 0x0
    ctx->pc = 0x29f9b4u;
    // NOP
    // 0x29f9b8: 0x45000006
    ctx->pc = 0x29F9B8u;
    {
        const bool branch_taken_0x29f9b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29F9BCu;
        ctx->f[22] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x29f9b8) {
            ctx->pc = 0x29F9D4u;
            goto label_29f9d4;
        }
    }
    ctx->pc = 0x29F9C0u;
    // 0x29f9c0: 0x3c0140c9
    ctx->pc = 0x29f9c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x29f9c4: 0x34210fdb
    ctx->pc = 0x29f9c4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29f9c8: 0x44810000
    ctx->pc = 0x29f9c8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29f9cc: 0x46006300
    ctx->pc = 0x29f9ccu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_29f9d0:
    // 0x29f9d0: 0x46006586
    ctx->pc = 0x29f9d0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_29f9d4:
    // 0x29f9d4: 0x3c020036
    ctx->pc = 0x29f9d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_29f9d8:
    // 0x29f9d8: 0xc440db60
    ctx->pc = 0x29f9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29f9dc:
    // 0x29f9dc: 0x3c014049
    ctx->pc = 0x29f9dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x29f9e0: 0x34210fdb
    ctx->pc = 0x29f9e0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29f9e4: 0x44810800
    ctx->pc = 0x29f9e4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x29f9e8: 0x460100c2
    ctx->pc = 0x29f9e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29f9ec: 0x3c013bb6
    ctx->pc = 0x29f9ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15286 << 16));
    // 0x29f9f0: 0x34210b61
    ctx->pc = 0x29f9f0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 2913));
    // 0x29f9f4: 0x44810000
    ctx->pc = 0x29f9f4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29f9f8: 0x4617a881
    ctx->pc = 0x29f9f8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[21], ctx->f[23]);
    // 0x29f9fc: 0x46020834
    ctx->pc = 0x29f9fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29fa00: 0x0
    ctx->pc = 0x29fa00u;
    // NOP
    // 0x29fa04: 0x45000006
    ctx->pc = 0x29FA04u;
    {
        const bool branch_taken_0x29fa04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29FA08u;
        ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        if (branch_taken_0x29fa04) {
            ctx->pc = 0x29FA20u;
            goto label_29fa20;
        }
    }
    ctx->pc = 0x29FA0Cu;
    // 0x29fa0c: 0x3c0140c9
    ctx->pc = 0x29fa0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x29fa10: 0x34210fdb
    ctx->pc = 0x29fa10u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29fa14: 0x44810000
    ctx->pc = 0x29fa14u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29fa18: 0x1000000d
    ctx->pc = 0x29FA18u;
    {
        const bool branch_taken_0x29fa18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29FA1Cu;
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x29fa18) {
            ctx->pc = 0x29FA50u;
            goto label_29fa50;
        }
    }
    ctx->pc = 0x29FA20u;
label_29fa20:
    // 0x29fa20: 0x4617a841
    ctx->pc = 0x29fa20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[23]);
    // 0x29fa24: 0x3c01c049
    ctx->pc = 0x29fa24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x29fa28: 0x34210fdb
    ctx->pc = 0x29fa28u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29fa2c: 0x44810000
    ctx->pc = 0x29fa2cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29fa30: 0x46000836
    ctx->pc = 0x29fa30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29fa34: 0x0
    ctx->pc = 0x29fa34u;
    // NOP
    // 0x29fa38: 0x4502000c
    ctx->pc = 0x29FA38u;
    {
        const bool branch_taken_0x29fa38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29fa38) {
            ctx->pc = 0x29FA3Cu;
            ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[23]);
            ctx->pc = 0x29FA6Cu;
            goto label_29fa6c;
        }
    }
    ctx->pc = 0x29FA40u;
    // 0x29fa40: 0x3c0140c9
    ctx->pc = 0x29fa40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x29fa44: 0x34210fdb
    ctx->pc = 0x29fa44u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29fa48: 0x44810000
    ctx->pc = 0x29fa48u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29fa4c: 0x46000800
    ctx->pc = 0x29fa4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_29fa50:
    // 0x29fa50: 0x46000005
    ctx->pc = 0x29fa50u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x29fa54: 0x46001834
    ctx->pc = 0x29fa54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29fa58: 0x0
    ctx->pc = 0x29fa58u;
    // NOP
    // 0x29fa5c: 0x45010008
    ctx->pc = 0x29FA5Cu;
    {
        const bool branch_taken_0x29fa5c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29FA60u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x29fa5c) {
            ctx->pc = 0x29FA80u;
            goto label_29fa80;
        }
    }
    ctx->pc = 0x29FA64u;
    // 0x29fa64: 0x10000052
    ctx->pc = 0x29FA64u;
    {
        const bool branch_taken_0x29fa64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29FA68u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x29fa64) {
            ctx->pc = 0x29FBB0u;
            goto label_29fbb0;
        }
    }
    ctx->pc = 0x29FA6Cu;
label_29fa6c:
    // 0x29fa6c: 0x46000005
    ctx->pc = 0x29fa6cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x29fa70: 0x46001834
    ctx->pc = 0x29fa70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29fa74: 0x0
    ctx->pc = 0x29fa74u;
    // NOP
    // 0x29fa78: 0x4500004c
    ctx->pc = 0x29FA78u;
    {
        const bool branch_taken_0x29fa78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29FA7Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x29fa78) {
            ctx->pc = 0x29FBACu;
            goto label_29fbac;
        }
    }
    ctx->pc = 0x29FA80u;
label_29fa80:
    // 0x29fa80: 0x8c42dbc0
    ctx->pc = 0x29fa80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x29fa84: 0xc44000ec
    ctx->pc = 0x29fa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29fa88: 0x46160041
    ctx->pc = 0x29fa88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x29fa8c: 0x3c014049
    ctx->pc = 0x29fa8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x29fa90: 0x34210fdb
    ctx->pc = 0x29fa90u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29fa94: 0x44810000
    ctx->pc = 0x29fa94u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29fa98: 0x46010034
    ctx->pc = 0x29fa98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29fa9c: 0x0
    ctx->pc = 0x29fa9cu;
    // NOP
    // 0x29faa0: 0x45000006
    ctx->pc = 0x29FAA0u;
    {
        const bool branch_taken_0x29faa0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29FAA4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x29faa0) {
            ctx->pc = 0x29FABCu;
            goto label_29fabc;
        }
    }
    ctx->pc = 0x29FAA8u;
    // 0x29faa8: 0x3c0140c9
    ctx->pc = 0x29faa8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x29faac: 0x34210fdb
    ctx->pc = 0x29faacu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29fab0: 0x44810000
    ctx->pc = 0x29fab0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29fab4: 0x1000000f
    ctx->pc = 0x29FAB4u;
    {
        const bool branch_taken_0x29fab4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29FAB8u;
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x29fab4) {
            ctx->pc = 0x29FAF4u;
            goto label_29faf4;
        }
    }
    ctx->pc = 0x29FABCu;
label_29fabc:
    // 0x29fabc: 0x8c42dbc0
    ctx->pc = 0x29fabcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x29fac0: 0xc44000ec
    ctx->pc = 0x29fac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29fac4: 0x46160041
    ctx->pc = 0x29fac4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x29fac8: 0x3c01c049
    ctx->pc = 0x29fac8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x29facc: 0x34210fdb
    ctx->pc = 0x29faccu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29fad0: 0x44810000
    ctx->pc = 0x29fad0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29fad4: 0x46000836
    ctx->pc = 0x29fad4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29fad8: 0x0
    ctx->pc = 0x29fad8u;
    // NOP
    // 0x29fadc: 0x4500000f
    ctx->pc = 0x29FADCu;
    {
        const bool branch_taken_0x29fadc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29FAE0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x29fadc) {
            ctx->pc = 0x29FB1Cu;
            goto label_29fb1c;
        }
    }
    ctx->pc = 0x29FAE4u;
    // 0x29fae4: 0x3c0140c9
    ctx->pc = 0x29fae4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x29fae8: 0x34210fdb
    ctx->pc = 0x29fae8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29faec: 0x44810000
    ctx->pc = 0x29faecu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29faf0: 0x46000800
    ctx->pc = 0x29faf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_29faf4:
    // 0x29faf4: 0x46000005
    ctx->pc = 0x29faf4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x29faf8: 0x3c013fc9
    ctx->pc = 0x29faf8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x29fafc: 0x34210fdb
    ctx->pc = 0x29fafcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29fb00: 0x44810800
    ctx->pc = 0x29fb00u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x29fb04: 0x46000834
    ctx->pc = 0x29fb04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29fb08: 0x0
    ctx->pc = 0x29fb08u;
    // NOP
    // 0x29fb0c: 0x4501000e
    ctx->pc = 0x29FB0Cu;
    {
        const bool branch_taken_0x29fb0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29FB10u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x29fb0c) {
            ctx->pc = 0x29FB48u;
            goto label_29fb48;
        }
    }
    ctx->pc = 0x29FB14u;
    // 0x29fb14: 0x10000027
    ctx->pc = 0x29FB14u;
    {
        const bool branch_taken_0x29fb14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29FB18u;
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
        if (branch_taken_0x29fb14) {
            ctx->pc = 0x29FBB4u;
            goto label_29fbb4;
        }
    }
    ctx->pc = 0x29FB1Cu;
label_29fb1c:
    // 0x29fb1c: 0x8c42dbc0
    ctx->pc = 0x29fb1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958016)));
    // 0x29fb20: 0xc44000ec
    ctx->pc = 0x29fb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29fb24: 0x46160001
    ctx->pc = 0x29fb24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x29fb28: 0x46000005
    ctx->pc = 0x29fb28u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x29fb2c: 0x3c013fc9
    ctx->pc = 0x29fb2cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x29fb30: 0x34210fdb
    ctx->pc = 0x29fb30u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29fb34: 0x44810800
    ctx->pc = 0x29fb34u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x29fb38: 0x46000834
    ctx->pc = 0x29fb38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29fb3c: 0x0
    ctx->pc = 0x29fb3cu;
    // NOP
    // 0x29fb40: 0x4500001b
    ctx->pc = 0x29FB40u;
    {
        const bool branch_taken_0x29fb40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29FB44u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x29fb40) {
            ctx->pc = 0x29FBB0u;
            goto label_29fbb0;
        }
    }
    ctx->pc = 0x29FB48u;
label_29fb48:
    // 0x29fb48: 0x3c014049
    ctx->pc = 0x29fb48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x29fb4c: 0x34210fdb
    ctx->pc = 0x29fb4cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29fb50: 0x44810000
    ctx->pc = 0x29fb50u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29fb54: 0x4600b040
    ctx->pc = 0x29fb54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x29fb58: 0x46010034
    ctx->pc = 0x29fb58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29fb5c: 0x0
    ctx->pc = 0x29fb5cu;
    // NOP
    // 0x29fb60: 0x45020006
    ctx->pc = 0x29FB60u;
    {
        const bool branch_taken_0x29fb60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29fb60) {
            ctx->pc = 0x29FB64u;
            ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
            ctx->pc = 0x29FB7Cu;
            goto label_29fb7c;
        }
    }
    ctx->pc = 0x29FB68u;
    // 0x29fb68: 0x3c0140c9
    ctx->pc = 0x29fb68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x29fb6c: 0x34210fdb
    ctx->pc = 0x29fb6cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29fb70: 0x44810000
    ctx->pc = 0x29fb70u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29fb74: 0x1000000c
    ctx->pc = 0x29FB74u;
    {
        const bool branch_taken_0x29fb74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x29FB78u;
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x29fb74) {
            ctx->pc = 0x29FBA8u;
            goto label_29fba8;
        }
    }
    ctx->pc = 0x29FB7Cu;
label_29fb7c:
    // 0x29fb7c: 0x3c01c049
    ctx->pc = 0x29fb7cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x29fb80: 0x34210fdb
    ctx->pc = 0x29fb80u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29fb84: 0x44810000
    ctx->pc = 0x29fb84u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29fb88: 0x46006036
    ctx->pc = 0x29fb88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29fb8c: 0x0
    ctx->pc = 0x29fb8cu;
    // NOP
    // 0x29fb90: 0x45000006
    ctx->pc = 0x29FB90u;
    {
        const bool branch_taken_0x29fb90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29FB94u;
        ctx->f[22] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x29fb90) {
            ctx->pc = 0x29FBACu;
            goto label_29fbac;
        }
    }
    ctx->pc = 0x29FB98u;
    // 0x29fb98: 0x3c0140c9
    ctx->pc = 0x29fb98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x29fb9c: 0x34210fdb
    ctx->pc = 0x29fb9cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x29fba0: 0x44810000
    ctx->pc = 0x29fba0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29fba4: 0x46006300
    ctx->pc = 0x29fba4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_29fba8:
    // 0x29fba8: 0x46006586
    ctx->pc = 0x29fba8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_29fbac:
    // 0x29fbac: 0x3c020031
    ctx->pc = 0x29fbacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_29fbb0:
    // 0x29fbb0: 0xdc420e28
    ctx->pc = 0x29fbb0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
label_29fbb4:
    // 0x29fbb4: 0x30420001
    ctx->pc = 0x29fbb4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x29fbb8: 0x2103c
    ctx->pc = 0x29fbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29fbbc: 0x2103f
    ctx->pc = 0x29fbbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x29fbc0: 0x1040001d
    ctx->pc = 0x29FBC0u;
    {
        const bool branch_taken_0x29fbc0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29FBC4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
        if (branch_taken_0x29fbc0) {
            ctx->pc = 0x29FC38u;
            goto label_29fc38;
        }
    }
    ctx->pc = 0x29FBC8u;
    // 0x29fbc8: 0x3c014334
    ctx->pc = 0x29fbc8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17204 << 16));
    // 0x29fbcc: 0x4481a000
    ctx->pc = 0x29fbccu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x29fbd0: 0x4614ab02
    ctx->pc = 0x29fbd0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x29fbd4: 0x3c013ea2
    ctx->pc = 0x29fbd4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16034 << 16));
    // 0x29fbd8: 0x3421f983
    ctx->pc = 0x29fbd8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 63875));
    // 0x29fbdc: 0x4481a800
    ctx->pc = 0x29fbdcu;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x29fbe0: 0x3484ff00
    ctx->pc = 0x29fbe0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65280));
    // 0x29fbe4: 0x24050001
    ctx->pc = 0x29fbe4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fbe8: 0x24060022
    ctx->pc = 0x29fbe8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 34));
    // 0x29fbec: 0x3c07003b
    ctx->pc = 0x29fbecu;
    SET_GPR_U32(ctx, 7, ((uint32_t)59 << 16));
    // 0x29fbf0: 0x24e7e4c8
    ctx->pc = 0x29fbf0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294960328));
    // 0x29fbf4: 0x46156302
    ctx->pc = 0x29fbf4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x29fbf8: 0xc7ad0010
    ctx->pc = 0x29fbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29fbfc: 0xc7ae0014
    ctx->pc = 0x29fbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x29fc00: 0xc0b4822
    ctx->pc = 0x29FC00u;
    SET_GPR_U32(ctx, 31, 0x29FC08u);
    ctx->pc = 0x29FC04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->pc = 0x2D2088u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintfc_0x2d2088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FC08u; }
    }
    if (ctx->pc != 0x29FC08u) { return; }
    ctx->pc = 0x29FC08u;
    // 0x29fc08: 0x4614bd02
    ctx->pc = 0x29fc08u;
    ctx->f[20] = FPU_MUL_S(ctx->f[23], ctx->f[20]);
    // 0x29fc0c: 0x3c0400ff
    ctx->pc = 0x29fc0cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x29fc10: 0x3484ff00
    ctx->pc = 0x29fc10u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65280));
    // 0x29fc14: 0x24050001
    ctx->pc = 0x29fc14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fc18: 0x24060023
    ctx->pc = 0x29fc18u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 35));
    // 0x29fc1c: 0x3c07003b
    ctx->pc = 0x29fc1cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)59 << 16));
    // 0x29fc20: 0x24e7e4f0
    ctx->pc = 0x29fc20u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294960368));
    // 0x29fc24: 0x4615a302
    ctx->pc = 0x29fc24u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x29fc28: 0xc7ad0020
    ctx->pc = 0x29fc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29fc2c: 0xc7ae0024
    ctx->pc = 0x29fc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x29fc30: 0xc0b4822
    ctx->pc = 0x29FC30u;
    SET_GPR_U32(ctx, 31, 0x29FC38u);
    ctx->pc = 0x29FC34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->pc = 0x2D2088u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintfc_0x2d2088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FC38u; }
    }
    if (ctx->pc != 0x29FC38u) { return; }
    ctx->pc = 0x29FC38u;
label_29fc38:
    // 0x29fc38: 0xc0b9e4a
    ctx->pc = 0x29FC38u;
    SET_GPR_U32(ctx, 31, 0x29FC40u);
    ctx->pc = 0x29FC3Cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FC40u; }
    }
    if (ctx->pc != 0x29FC40u) { return; }
    ctx->pc = 0x29FC40u;
    // 0x29fc40: 0x46000007
    ctx->pc = 0x29fc40u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x29fc44: 0xe6800000
    ctx->pc = 0x29fc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x29fc48: 0xae800004
    ctx->pc = 0x29fc48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x29fc4c: 0xc0b9dce
    ctx->pc = 0x29FC4Cu;
    SET_GPR_U32(ctx, 31, 0x29FC54u);
    ctx->pc = 0x29FC50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FC54u; }
    }
    if (ctx->pc != 0x29FC54u) { return; }
    ctx->pc = 0x29FC54u;
    // 0x29fc54: 0x46000007
    ctx->pc = 0x29fc54u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x29fc58: 0xe6800008
    ctx->pc = 0x29fc58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x29fc5c: 0x4600c006
    ctx->pc = 0x29fc5cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[24]);
label_29fc60:
    // 0x29fc60: 0xdfbf0090
    ctx->pc = 0x29fc60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29fc64: 0xdfb50080
    ctx->pc = 0x29fc64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29fc68: 0xdfb40070
    ctx->pc = 0x29fc68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29fc6c: 0xdfb30060
    ctx->pc = 0x29fc6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29fc70: 0xdfb20050
    ctx->pc = 0x29fc70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29fc74: 0xdfb10040
    ctx->pc = 0x29fc74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29fc78: 0xdfb00030
    ctx->pc = 0x29fc78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29fc7c: 0xc7b800c0
    ctx->pc = 0x29fc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x29fc80: 0xc7b700b8
    ctx->pc = 0x29fc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x29fc84: 0xc7b600b0
    ctx->pc = 0x29fc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29fc88: 0xc7b500a8
    ctx->pc = 0x29fc88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29fc8c: 0xc7b400a0
    ctx->pc = 0x29fc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29fc90: 0x3e00008
    ctx->pc = 0x29FC90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FC94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29F650u: goto label_29f650;
            case 0x29F690u: goto label_29f690;
            case 0x29F6E0u: goto label_29f6e0;
            case 0x29F704u: goto label_29f704;
            case 0x29F750u: goto label_29f750;
            case 0x29F770u: goto label_29f770;
            case 0x29F798u: goto label_29f798;
            case 0x29F79Cu: goto label_29f79c;
            case 0x29F7A8u: goto label_29f7a8;
            case 0x29F7ACu: goto label_29f7ac;
            case 0x29F7CCu: goto label_29f7cc;
            case 0x29F844u: goto label_29f844;
            case 0x29F89Cu: goto label_29f89c;
            case 0x29F8C8u: goto label_29f8c8;
            case 0x29F8FCu: goto label_29f8fc;
            case 0x29F928u: goto label_29f928;
            case 0x29F950u: goto label_29f950;
            case 0x29F970u: goto label_29f970;
            case 0x29F9A4u: goto label_29f9a4;
            case 0x29F9D0u: goto label_29f9d0;
            case 0x29F9D4u: goto label_29f9d4;
            case 0x29F9D8u: goto label_29f9d8;
            case 0x29F9DCu: goto label_29f9dc;
            case 0x29FA20u: goto label_29fa20;
            case 0x29FA50u: goto label_29fa50;
            case 0x29FA6Cu: goto label_29fa6c;
            case 0x29FA80u: goto label_29fa80;
            case 0x29FABCu: goto label_29fabc;
            case 0x29FAF4u: goto label_29faf4;
            case 0x29FB1Cu: goto label_29fb1c;
            case 0x29FB48u: goto label_29fb48;
            case 0x29FB7Cu: goto label_29fb7c;
            case 0x29FBA8u: goto label_29fba8;
            case 0x29FBACu: goto label_29fbac;
            case 0x29FBB0u: goto label_29fbb0;
            case 0x29FBB4u: goto label_29fbb4;
            case 0x29FC38u: goto label_29fc38;
            case 0x29FC60u: goto label_29fc60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29FC98u;
}
