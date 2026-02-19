#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBWorldToScreen
// Address: 0x2c4268 - 0x2c43ac
void MBWorldToScreen_0x2c4268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c4268u;

    // 0x2c4268: 0x27bdffc0
    ctx->pc = 0x2c4268u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c426c: 0xffbf0030
    ctx->pc = 0x2c426cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c4270: 0xffb20020
    ctx->pc = 0x2c4270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c4274: 0xffb10010
    ctx->pc = 0x2c4274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c4278: 0xffb00000
    ctx->pc = 0x2c4278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c427c: 0x80802d
    ctx->pc = 0x2c427cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4280: 0x3c020036
    ctx->pc = 0x2c4280u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c4284: 0x8c51dee0
    ctx->pc = 0x2c4284u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2c4288: 0x8e220004
    ctx->pc = 0x2c4288u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c428c: 0x90420003
    ctx->pc = 0x2c428cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x2c4290: 0x14400005
    ctx->pc = 0x2C4290u;
    {
        const bool branch_taken_0x2c4290 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C4294u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c4290) {
            ctx->pc = 0x2C42A8u;
            goto label_2c42a8;
        }
    }
    ctx->pc = 0x2C4298u;
    // 0x2c4298: 0x8e220010
    ctx->pc = 0x2c4298u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2c429c: 0x8c420040
    ctx->pc = 0x2c429cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2c42a0: 0x50400004
    ctx->pc = 0x2C42A0u;
    {
        const bool branch_taken_0x2c42a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c42a0) {
            ctx->pc = 0x2C42A4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->pc = 0x2C42B4u;
            goto label_2c42b4;
        }
    }
    ctx->pc = 0x2C42A8u;
label_2c42a8:
    // 0x2c42a8: 0xc0ab0b4
    ctx->pc = 0x2C42A8u;
    SET_GPR_U32(ctx, 31, 0x2C42B0u);
    ctx->pc = 0x2AC2D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbProjCalc_0x2ac2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C42B0u; }
    }
    if (ctx->pc != 0x2C42B0u) { return; }
    ctx->pc = 0x2C42B0u;
    // 0x2c42b0: 0x8e220004
    ctx->pc = 0x2c42b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2c42b4:
    // 0x2c42b4: 0x90420002
    ctx->pc = 0x2c42b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2c42b8: 0x50400004
    ctx->pc = 0x2C42B8u;
    {
        const bool branch_taken_0x2c42b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c42b8) {
            ctx->pc = 0x2C42BCu;
            SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->pc = 0x2C42CCu;
            goto label_2c42cc;
        }
    }
    ctx->pc = 0x2C42C0u;
    // 0x2c42c0: 0xc0aae72
    ctx->pc = 0x2C42C0u;
    SET_GPR_U32(ctx, 31, 0x2C42C8u);
    ctx->pc = 0x2AB9C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbCameraCalc_0x2ab9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C42C8u; }
    }
    if (ctx->pc != 0x2C42C8u) { return; }
    ctx->pc = 0x2C42C8u;
    // 0x2c42c8: 0x8e260004
    ctx->pc = 0x2c42c8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2c42cc:
    // 0x2c42cc: 0x200202d
    ctx->pc = 0x2c42ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c42d0: 0x240282d
    ctx->pc = 0x2c42d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c42d4: 0xc0b626d
    ctx->pc = 0x2C42D4u;
    SET_GPR_U32(ctx, 31, 0x2C42DCu);
    ctx->pc = 0x2C42D8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 720));
    ctx->pc = 0x2D89B4u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_002D89B4_0x2d89b4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C42DCu; }
    }
    if (ctx->pc != 0x2C42DCu) { return; }
    ctx->pc = 0x2C42DCu;
    // 0x2c42dc: 0x3c013f80
    ctx->pc = 0x2c42dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2c42e0: 0x44813800
    ctx->pc = 0x2c42e0u;
    *(uint32_t*)&ctx->f[7] = GPR_U32(ctx, 1);
    // 0x2c42e4: 0xc606000c
    ctx->pc = 0x2c42e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c42e8: 0x0
    ctx->pc = 0x2c42e8u;
    // NOP
    // 0x2c42ec: 0x0
    ctx->pc = 0x2c42ecu;
    // NOP
    // 0x2c42f0: 0x460638c3
    ctx->pc = 0x2c42f0u;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[7] * 0.0f); } else ctx->f[3] = ctx->f[7] / ctx->f[6];
    // 0x2c42f4: 0x8e220010
    ctx->pc = 0x2c42f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2c42f8: 0xc4440020
    ctx->pc = 0x2c42f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c42fc: 0x46802120
    ctx->pc = 0x2c42fcu;
    ctx->f[4] = FPU_CVT_S_W(*(int32_t*)&ctx->f[4]);
    // 0x2c4300: 0xc4450024
    ctx->pc = 0x2c4300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c4304: 0x46802960
    ctx->pc = 0x2c4304u;
    ctx->f[5] = FPU_CVT_S_W(*(int32_t*)&ctx->f[5]);
    // 0x2c4308: 0xc6010000
    ctx->pc = 0x2c4308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c430c: 0x46011842
    ctx->pc = 0x2c430cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2c4310: 0x3c013f00
    ctx->pc = 0x2c4310u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2c4314: 0x44811000
    ctx->pc = 0x2c4314u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x2c4318: 0x46022002
    ctx->pc = 0x2c4318u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2c431c: 0x46000840
    ctx->pc = 0x2c431cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c4320: 0xc4400038
    ctx->pc = 0x2c4320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4324: 0x46000841
    ctx->pc = 0x2c4324u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c4328: 0xe6010000
    ctx->pc = 0x2c4328u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2c432c: 0xc6000004
    ctx->pc = 0x2c432cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4330: 0x460018c2
    ctx->pc = 0x2c4330u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2c4334: 0x46022882
    ctx->pc = 0x2c4334u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2c4338: 0x460218c0
    ctx->pc = 0x2c4338u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x2c433c: 0x8e220010
    ctx->pc = 0x2c433cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2c4340: 0xc440003c
    ctx->pc = 0x2c4340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4344: 0x460018c1
    ctx->pc = 0x2c4344u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2c4348: 0xe6030004
    ctx->pc = 0x2c4348u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2c434c: 0x8e220010
    ctx->pc = 0x2c434cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2c4350: 0xc4400028
    ctx->pc = 0x2c4350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4354: 0x46800020
    ctx->pc = 0x2c4354u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c4358: 0x0
    ctx->pc = 0x2c4358u;
    // NOP
    // 0x2c435c: 0x0
    ctx->pc = 0x2c435cu;
    // NOP
    // 0x2c4360: 0x46040003
    ctx->pc = 0x2c4360u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x2c4364: 0x46010002
    ctx->pc = 0x2c4364u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c4368: 0xe6000000
    ctx->pc = 0x2c4368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2c436c: 0x8e220010
    ctx->pc = 0x2c436cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2c4370: 0xc440002c
    ctx->pc = 0x2c4370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4374: 0x46800020
    ctx->pc = 0x2c4374u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c4378: 0x0
    ctx->pc = 0x2c4378u;
    // NOP
    // 0x2c437c: 0x0
    ctx->pc = 0x2c437cu;
    // NOP
    // 0x2c4380: 0x46050003
    ctx->pc = 0x2c4380u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
    // 0x2c4384: 0x46030002
    ctx->pc = 0x2c4384u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2c4388: 0xe6000004
    ctx->pc = 0x2c4388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2c438c: 0xe6060008
    ctx->pc = 0x2c438cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2c4390: 0xe607000c
    ctx->pc = 0x2c4390u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2c4394: 0xdfbf0030
    ctx->pc = 0x2c4394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c4398: 0xdfb20020
    ctx->pc = 0x2c4398u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c439c: 0xdfb10010
    ctx->pc = 0x2c439cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c43a0: 0xdfb00000
    ctx->pc = 0x2c43a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c43a4: 0x3e00008
    ctx->pc = 0x2C43A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C43A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C42A8u: goto label_2c42a8;
            case 0x2C42B4u: goto label_2c42b4;
            case 0x2C42CCu: goto label_2c42cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C43ACu;
}
