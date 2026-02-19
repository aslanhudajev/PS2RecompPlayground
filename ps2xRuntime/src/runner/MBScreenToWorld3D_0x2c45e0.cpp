#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBScreenToWorld3D
// Address: 0x2c45e0 - 0x2c4708
void MBScreenToWorld3D_0x2c45e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c45e0u;

    // 0x2c45e0: 0x27bdffb0
    ctx->pc = 0x2c45e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c45e4: 0xffbf0040
    ctx->pc = 0x2c45e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c45e8: 0xffb20030
    ctx->pc = 0x2c45e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2c45ec: 0xffb10020
    ctx->pc = 0x2c45ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2c45f0: 0xffb00010
    ctx->pc = 0x2c45f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2c45f4: 0x80902d
    ctx->pc = 0x2c45f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c45f8: 0x3c020036
    ctx->pc = 0x2c45f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c45fc: 0x8c50dee0
    ctx->pc = 0x2c45fcu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2c4600: 0x8e020004
    ctx->pc = 0x2c4600u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c4604: 0x90420003
    ctx->pc = 0x2c4604u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x2c4608: 0x14400005
    ctx->pc = 0x2C4608u;
    {
        const bool branch_taken_0x2c4608 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C460Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c4608) {
            ctx->pc = 0x2C4620u;
            goto label_2c4620;
        }
    }
    ctx->pc = 0x2C4610u;
    // 0x2c4610: 0x8e020010
    ctx->pc = 0x2c4610u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2c4614: 0x8c420040
    ctx->pc = 0x2c4614u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2c4618: 0x50400004
    ctx->pc = 0x2C4618u;
    {
        const bool branch_taken_0x2c4618 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c4618) {
            ctx->pc = 0x2C461Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x2C462Cu;
            goto label_2c462c;
        }
    }
    ctx->pc = 0x2C4620u;
label_2c4620:
    // 0x2c4620: 0xc0ab0b4
    ctx->pc = 0x2C4620u;
    SET_GPR_U32(ctx, 31, 0x2C4628u);
    ctx->pc = 0x2AC2D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbProjCalc_0x2ac2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4628u; }
    }
    if (ctx->pc != 0x2C4628u) { return; }
    ctx->pc = 0x2C4628u;
    // 0x2c4628: 0x8e020004
    ctx->pc = 0x2c4628u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2c462c:
    // 0x2c462c: 0x90420002
    ctx->pc = 0x2c462cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2c4630: 0x50400004
    ctx->pc = 0x2C4630u;
    {
        const bool branch_taken_0x2c4630 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c4630) {
            ctx->pc = 0x2C4634u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x2C4644u;
            goto label_2c4644;
        }
    }
    ctx->pc = 0x2C4638u;
    // 0x2c4638: 0xc0aae72
    ctx->pc = 0x2C4638u;
    SET_GPR_U32(ctx, 31, 0x2C4640u);
    ctx->pc = 0x2AB9C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCameraCalc_0x2ab9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4640u; }
    }
    if (ctx->pc != 0x2C4640u) { return; }
    ctx->pc = 0x2C4640u;
    // 0x2c4640: 0x8e020004
    ctx->pc = 0x2c4640u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2c4644:
    // 0x2c4644: 0xc44100f8
    ctx->pc = 0x2c4644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4648: 0xc4420108
    ctx->pc = 0x2c4648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c464c: 0xc44400c8
    ctx->pc = 0x2c464cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c4650: 0xc44000b8
    ctx->pc = 0x2c4650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4654: 0x46040902
    ctx->pc = 0x2c4654u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2c4658: 0x46000842
    ctx->pc = 0x2c4658u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c465c: 0x46020840
    ctx->pc = 0x2c465cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2c4660: 0xc6200008
    ctx->pc = 0x2c4660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4664: 0x46010001
    ctx->pc = 0x2c4664u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c4668: 0x0
    ctx->pc = 0x2c4668u;
    // NOP
    // 0x2c466c: 0x0
    ctx->pc = 0x2c466cu;
    // NOP
    // 0x2c4670: 0x46002103
    ctx->pc = 0x2c4670u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[4] = ctx->f[4] / ctx->f[0];
    // 0x2c4674: 0xe7a40008
    ctx->pc = 0x2c4674u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c4678: 0xc6200000
    ctx->pc = 0x2c4678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c467c: 0x46040002
    ctx->pc = 0x2c467cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2c4680: 0xc6220004
    ctx->pc = 0x2c4680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c4684: 0x46041082
    ctx->pc = 0x2c4684u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2c4688: 0x8e020004
    ctx->pc = 0x2c4688u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c468c: 0xc44700d0
    ctx->pc = 0x2c468cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c4690: 0xc4430100
    ctx->pc = 0x2c4690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c4694: 0xc44800e4
    ctx->pc = 0x2c4694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2c4698: 0xc4450104
    ctx->pc = 0x2c4698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c469c: 0xc4410090
    ctx->pc = 0x2c469cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c46a0: 0xc44600a4
    ctx->pc = 0x2c46a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c46a4: 0x460418c2
    ctx->pc = 0x2c46a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2c46a8: 0x46030001
    ctx->pc = 0x2c46a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2c46ac: 0x46070842
    ctx->pc = 0x2c46acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x2c46b0: 0x0
    ctx->pc = 0x2c46b0u;
    // NOP
    // 0x2c46b4: 0x0
    ctx->pc = 0x2c46b4u;
    // NOP
    // 0x2c46b8: 0x46010003
    ctx->pc = 0x2c46b8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x2c46bc: 0xe7a00000
    ctx->pc = 0x2c46bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c46c0: 0x46042942
    ctx->pc = 0x2c46c0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2c46c4: 0x46051081
    ctx->pc = 0x2c46c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2c46c8: 0x46083182
    ctx->pc = 0x2c46c8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x2c46cc: 0x0
    ctx->pc = 0x2c46ccu;
    // NOP
    // 0x2c46d0: 0x0
    ctx->pc = 0x2c46d0u;
    // NOP
    // 0x2c46d4: 0x46061083
    ctx->pc = 0x2c46d4u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[6];
    // 0x2c46d8: 0xe7a20004
    ctx->pc = 0x2c46d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c46dc: 0x8e060004
    ctx->pc = 0x2c46dcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c46e0: 0x240202d
    ctx->pc = 0x2c46e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c46e4: 0x3a0282d
    ctx->pc = 0x2c46e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c46e8: 0xc0b626d
    ctx->pc = 0x2C46E8u;
    SET_GPR_U32(ctx, 31, 0x2C46F0u);
    ctx->pc = 0x2C46ECu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 592));
    ctx->pc = 0x2D89B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_002D89B4_0x2d89b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C46F0u; }
    }
    if (ctx->pc != 0x2C46F0u) { return; }
    ctx->pc = 0x2C46F0u;
    // 0x2c46f0: 0xdfbf0040
    ctx->pc = 0x2c46f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c46f4: 0xdfb20030
    ctx->pc = 0x2c46f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c46f8: 0xdfb10020
    ctx->pc = 0x2c46f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c46fc: 0xdfb00010
    ctx->pc = 0x2c46fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4700: 0x3e00008
    ctx->pc = 0x2C4700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4704u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C4620u: goto label_2c4620;
            case 0x2C462Cu: goto label_2c462c;
            case 0x2C4644u: goto label_2c4644;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C4708u;
}
