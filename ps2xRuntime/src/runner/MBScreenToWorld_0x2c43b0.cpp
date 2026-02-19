#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBScreenToWorld
// Address: 0x2c43b0 - 0x2c4514
void MBScreenToWorld_0x2c43b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c43b0u;

    // 0x2c43b0: 0x27bdffb0
    ctx->pc = 0x2c43b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c43b4: 0xffbf0040
    ctx->pc = 0x2c43b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c43b8: 0xffb20030
    ctx->pc = 0x2c43b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2c43bc: 0xffb10020
    ctx->pc = 0x2c43bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2c43c0: 0xffb00010
    ctx->pc = 0x2c43c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2c43c4: 0x80902d
    ctx->pc = 0x2c43c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c43c8: 0x3c020036
    ctx->pc = 0x2c43c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c43cc: 0x8c50dee0
    ctx->pc = 0x2c43ccu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2c43d0: 0x8e020004
    ctx->pc = 0x2c43d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c43d4: 0x90420003
    ctx->pc = 0x2c43d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x2c43d8: 0x14400005
    ctx->pc = 0x2C43D8u;
    {
        const bool branch_taken_0x2c43d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C43DCu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c43d8) {
            ctx->pc = 0x2C43F0u;
            goto label_2c43f0;
        }
    }
    ctx->pc = 0x2C43E0u;
    // 0x2c43e0: 0x8e020010
    ctx->pc = 0x2c43e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2c43e4: 0x8c420040
    ctx->pc = 0x2c43e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2c43e8: 0x50400004
    ctx->pc = 0x2C43E8u;
    {
        const bool branch_taken_0x2c43e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c43e8) {
            ctx->pc = 0x2C43ECu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x2C43FCu;
            goto label_2c43fc;
        }
    }
    ctx->pc = 0x2C43F0u;
label_2c43f0:
    // 0x2c43f0: 0xc0ab0b4
    ctx->pc = 0x2C43F0u;
    SET_GPR_U32(ctx, 31, 0x2C43F8u);
    ctx->pc = 0x2AC2D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbProjCalc_0x2ac2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C43F8u; }
    }
    if (ctx->pc != 0x2C43F8u) { return; }
    ctx->pc = 0x2C43F8u;
    // 0x2c43f8: 0x8e020004
    ctx->pc = 0x2c43f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2c43fc:
    // 0x2c43fc: 0x90420002
    ctx->pc = 0x2c43fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2c4400: 0x50400004
    ctx->pc = 0x2C4400u;
    {
        const bool branch_taken_0x2c4400 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c4400) {
            ctx->pc = 0x2C4404u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
            ctx->pc = 0x2C4414u;
            goto label_2c4414;
        }
    }
    ctx->pc = 0x2C4408u;
    // 0x2c4408: 0xc0aae72
    ctx->pc = 0x2C4408u;
    SET_GPR_U32(ctx, 31, 0x2C4410u);
    ctx->pc = 0x2AB9C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCameraCalc_0x2ab9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C4410u; }
    }
    if (ctx->pc != 0x2C4410u) { return; }
    ctx->pc = 0x2C4410u;
    // 0x2c4410: 0xc6260008
    ctx->pc = 0x2c4410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2c4414:
    // 0x2c4414: 0xe7a60008
    ctx->pc = 0x2c4414u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c4418: 0x8e020010
    ctx->pc = 0x2c4418u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2c441c: 0xc4420020
    ctx->pc = 0x2c441cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c4420: 0x468010a0
    ctx->pc = 0x2c4420u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x2c4424: 0xc4410028
    ctx->pc = 0x2c4424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c4428: 0x46800860
    ctx->pc = 0x2c4428u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2c442c: 0x0
    ctx->pc = 0x2c442cu;
    // NOP
    // 0x2c4430: 0x0
    ctx->pc = 0x2c4430u;
    // NOP
    // 0x2c4434: 0x46011043
    ctx->pc = 0x2c4434u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x2c4438: 0xc6200000
    ctx->pc = 0x2c4438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c443c: 0x46000842
    ctx->pc = 0x2c443cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c4440: 0x3c013f00
    ctx->pc = 0x2c4440u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2c4444: 0x44812000
    ctx->pc = 0x2c4444u;
    *(uint32_t*)&ctx->f[4] = GPR_U32(ctx, 1);
    // 0x2c4448: 0x46041082
    ctx->pc = 0x2c4448u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2c444c: 0x46020841
    ctx->pc = 0x2c444cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2c4450: 0xc4400038
    ctx->pc = 0x2c4450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4454: 0x46000840
    ctx->pc = 0x2c4454u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c4458: 0xc4430024
    ctx->pc = 0x2c4458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c445c: 0x468018e0
    ctx->pc = 0x2c445cu;
    ctx->f[3] = FPU_CVT_S_W(*(int32_t*)&ctx->f[3]);
    // 0x2c4460: 0xc440002c
    ctx->pc = 0x2c4460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4464: 0x46800020
    ctx->pc = 0x2c4464u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c4468: 0x0
    ctx->pc = 0x2c4468u;
    // NOP
    // 0x2c446c: 0x0
    ctx->pc = 0x2c446cu;
    // NOP
    // 0x2c4470: 0x46001803
    ctx->pc = 0x2c4470u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[0] = ctx->f[3] / ctx->f[0];
    // 0x2c4474: 0xc6220004
    ctx->pc = 0x2c4474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c4478: 0x46020002
    ctx->pc = 0x2c4478u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2c447c: 0x460418c2
    ctx->pc = 0x2c447cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2c4480: 0x46030001
    ctx->pc = 0x2c4480u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2c4484: 0xc442003c
    ctx->pc = 0x2c4484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c4488: 0x46020000
    ctx->pc = 0x2c4488u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c448c: 0x46060842
    ctx->pc = 0x2c448cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2c4490: 0x46060002
    ctx->pc = 0x2c4490u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2c4494: 0x8e020004
    ctx->pc = 0x2c4494u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c4498: 0xc44700d0
    ctx->pc = 0x2c4498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c449c: 0xc4430100
    ctx->pc = 0x2c449cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c44a0: 0xc44800e4
    ctx->pc = 0x2c44a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2c44a4: 0xc4440104
    ctx->pc = 0x2c44a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c44a8: 0xc4420090
    ctx->pc = 0x2c44a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c44ac: 0xc44500a4
    ctx->pc = 0x2c44acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c44b0: 0x460618c2
    ctx->pc = 0x2c44b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x2c44b4: 0x46030841
    ctx->pc = 0x2c44b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x2c44b8: 0x46071082
    ctx->pc = 0x2c44b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x2c44bc: 0x0
    ctx->pc = 0x2c44bcu;
    // NOP
    // 0x2c44c0: 0x0
    ctx->pc = 0x2c44c0u;
    // NOP
    // 0x2c44c4: 0x46020843
    ctx->pc = 0x2c44c4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x2c44c8: 0xe7a10000
    ctx->pc = 0x2c44c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c44cc: 0x46062102
    ctx->pc = 0x2c44ccu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2c44d0: 0x46040001
    ctx->pc = 0x2c44d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2c44d4: 0x46082942
    ctx->pc = 0x2c44d4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x2c44d8: 0x0
    ctx->pc = 0x2c44d8u;
    // NOP
    // 0x2c44dc: 0x0
    ctx->pc = 0x2c44dcu;
    // NOP
    // 0x2c44e0: 0x46050003
    ctx->pc = 0x2c44e0u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
    // 0x2c44e4: 0xe7a00004
    ctx->pc = 0x2c44e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c44e8: 0x8e060004
    ctx->pc = 0x2c44e8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c44ec: 0x240202d
    ctx->pc = 0x2c44ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c44f0: 0x3a0282d
    ctx->pc = 0x2c44f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c44f4: 0xc0b626d
    ctx->pc = 0x2C44F4u;
    SET_GPR_U32(ctx, 31, 0x2C44FCu);
    ctx->pc = 0x2C44F8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 592));
    ctx->pc = 0x2D89B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_002D89B4_0x2d89b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C44FCu; }
    }
    if (ctx->pc != 0x2C44FCu) { return; }
    ctx->pc = 0x2C44FCu;
    // 0x2c44fc: 0xdfbf0040
    ctx->pc = 0x2c44fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c4500: 0xdfb20030
    ctx->pc = 0x2c4500u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c4504: 0xdfb10020
    ctx->pc = 0x2c4504u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c4508: 0xdfb00010
    ctx->pc = 0x2c4508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c450c: 0x3e00008
    ctx->pc = 0x2C450Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4510u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C43F0u: goto label_2c43f0;
            case 0x2C43FCu: goto label_2c43fc;
            case 0x2C4414u: goto label_2c4414;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C4514u;
}
