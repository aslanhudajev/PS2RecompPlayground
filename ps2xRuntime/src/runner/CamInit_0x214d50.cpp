#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CamInit
// Address: 0x214d50 - 0x214f0c
void CamInit_0x214d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x214d50u;

    // 0x214d50: 0x27bdff90
    ctx->pc = 0x214d50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x214d54: 0xffbf0060
    ctx->pc = 0x214d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x214d58: 0xffb10050
    ctx->pc = 0x214d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x214d5c: 0xffb00040
    ctx->pc = 0x214d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x214d60: 0x80802d
    ctx->pc = 0x214d60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d64: 0xa0882d
    ctx->pc = 0x214d64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d68: 0x220202d
    ctx->pc = 0x214d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214d6c: 0x27a50030
    ctx->pc = 0x214d6cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 48));
    // 0x214d70: 0xc0858a8
    ctx->pc = 0x214D70u;
    SET_GPR_U32(ctx, 31, 0x214D78u);
    ctx->pc = 0x214D74u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 52));
    ctx->pc = 0x2162A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        TransGetYawPitch_0x2162a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214D78u; }
    }
    if (ctx->pc != 0x214D78u) { return; }
    ctx->pc = 0x214D78u;
    // 0x214d78: 0x260400e0
    ctx->pc = 0x214d78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 224));
    // 0x214d7c: 0xc7ac0030
    ctx->pc = 0x214d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x214d80: 0xc084f14
    ctx->pc = 0x214D80u;
    SET_GPR_U32(ctx, 31, 0x214D88u);
    ctx->pc = 0x214D84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x213C50u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcLookdir_0x213c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214D88u; }
    }
    if (ctx->pc != 0x214D88u) { return; }
    ctx->pc = 0x214D88u;
    // 0x214d88: 0xc7a00030
    ctx->pc = 0x214d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214d8c: 0xe60000ec
    ctx->pc = 0x214d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
    // 0x214d90: 0xc7a00034
    ctx->pc = 0x214d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214d94: 0x12200007
    ctx->pc = 0x214D94u;
    {
        const bool branch_taken_0x214d94 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x214D98u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
        if (branch_taken_0x214d94) {
            ctx->pc = 0x214DB4u;
            goto label_214db4;
        }
    }
    ctx->pc = 0x214D9Cu;
    // 0x214d9c: 0xc6200010
    ctx->pc = 0x214d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214da0: 0xe6000030
    ctx->pc = 0x214da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x214da4: 0xc6200014
    ctx->pc = 0x214da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214da8: 0xe6000034
    ctx->pc = 0x214da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x214dac: 0xc6200018
    ctx->pc = 0x214dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214db0: 0xe6000038
    ctx->pc = 0x214db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_214db4:
    // 0x214db4: 0x3c020034
    ctx->pc = 0x214db4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x214db8: 0x8c42e7c8
    ctx->pc = 0x214db8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x214dbc: 0x8c420060
    ctx->pc = 0x214dbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x214dc0: 0xc4400030
    ctx->pc = 0x214dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214dc4: 0xe60000dc
    ctx->pc = 0x214dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
    // 0x214dc8: 0x260400e0
    ctx->pc = 0x214dc8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 224));
    // 0x214dcc: 0xc084e9c
    ctx->pc = 0x214DCCu;
    SET_GPR_U32(ctx, 31, 0x214DD4u);
    ctx->pc = 0x214DD0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x213A70u;
    {
        const uint32_t __entryPc = ctx->pc;
        CamLookInDir_0x213a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214DD4u; }
    }
    if (ctx->pc != 0x214DD4u) { return; }
    ctx->pc = 0x214DD4u;
    // 0x214dd4: 0x26040030
    ctx->pc = 0x214dd4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 48));
    // 0x214dd8: 0xc0b0f84
    ctx->pc = 0x214DD8u;
    SET_GPR_U32(ctx, 31, 0x214DE0u);
    ctx->pc = 0x214DDCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C3E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBCameraUpdate_0x2c3e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214DE0u; }
    }
    if (ctx->pc != 0x214DE0u) { return; }
    ctx->pc = 0x214DE0u;
    // 0x214de0: 0xc0b4502
    ctx->pc = 0x214DE0u;
    SET_GPR_U32(ctx, 31, 0x214DE8u);
    ctx->pc = 0x214DE4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D1408u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWindowSetHang_0x2d1408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214DE8u; }
    }
    if (ctx->pc != 0x214DE8u) { return; }
    ctx->pc = 0x214DE8u;
    // 0x214de8: 0xc6010110
    ctx->pc = 0x214de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214dec: 0x44800000
    ctx->pc = 0x214decu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x214df0: 0x46010034
    ctx->pc = 0x214df0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214df4: 0x0
    ctx->pc = 0x214df4u;
    // NOP
    // 0x214df8: 0x45000010
    ctx->pc = 0x214DF8u;
    {
        const bool branch_taken_0x214df8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x214DFCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
        if (branch_taken_0x214df8) {
            ctx->pc = 0x214E3Cu;
            goto label_214e3c;
        }
    }
    ctx->pc = 0x214E00u;
    // 0x214e00: 0xc60c010c
    ctx->pc = 0x214e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x214e04: 0x3c014334
    ctx->pc = 0x214e04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17204 << 16));
    // 0x214e08: 0x44810000
    ctx->pc = 0x214e08u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x214e0c: 0x46006302
    ctx->pc = 0x214e0cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x214e10: 0x3c013ea2
    ctx->pc = 0x214e10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16034 << 16));
    // 0x214e14: 0x3421f983
    ctx->pc = 0x214e14u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 63875));
    // 0x214e18: 0x44810000
    ctx->pc = 0x214e18u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x214e1c: 0x3c013f80
    ctx->pc = 0x214e1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x214e20: 0x44816800
    ctx->pc = 0x214e20u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x214e24: 0x0
    ctx->pc = 0x214e24u;
    // NOP
    // 0x214e28: 0x0
    ctx->pc = 0x214e28u;
    // NOP
    // 0x214e2c: 0x46016b43
    ctx->pc = 0x214e2cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[1];
    // 0x214e30: 0xc0aae0e
    ctx->pc = 0x214E30u;
    SET_GPR_U32(ctx, 31, 0x214E38u);
    ctx->pc = 0x214E34u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->pc = 0x2AB838u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWindowProjection_0x2ab838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214E38u; }
    }
    if (ctx->pc != 0x214E38u) { return; }
    ctx->pc = 0x214E38u;
    // 0x214e38: 0x27a40010
    ctx->pc = 0x214e38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 16));
label_214e3c:
    // 0x214e3c: 0xc085216
    ctx->pc = 0x214E3Cu;
    SET_GPR_U32(ctx, 31, 0x214E44u);
    ctx->pc = 0x214E40u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x214858u;
    {
        const uint32_t __entryPc = ctx->pc;
        CamGetPlayerAvgPos_0x214858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214E44u; }
    }
    if (ctx->pc != 0x214E44u) { return; }
    ctx->pc = 0x214E44u;
    // 0x214e44: 0xc6010030
    ctx->pc = 0x214e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214e48: 0xc7a00010
    ctx->pc = 0x214e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214e4c: 0x46000b01
    ctx->pc = 0x214e4cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x214e50: 0xe7ac0020
    ctx->pc = 0x214e50u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x214e54: 0xc6020034
    ctx->pc = 0x214e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214e58: 0xc7a00014
    ctx->pc = 0x214e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214e5c: 0x46001081
    ctx->pc = 0x214e5cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x214e60: 0xe7a20024
    ctx->pc = 0x214e60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x214e64: 0xc6010038
    ctx->pc = 0x214e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214e68: 0xc7a00018
    ctx->pc = 0x214e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214e6c: 0x46000841
    ctx->pc = 0x214e6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x214e70: 0xe7a10028
    ctx->pc = 0x214e70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x214e74: 0x460c6002
    ctx->pc = 0x214e74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x214e78: 0x46021082
    ctx->pc = 0x214e78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x214e7c: 0x46020000
    ctx->pc = 0x214e7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x214e80: 0x46010842
    ctx->pc = 0x214e80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x214e84: 0x46010000
    ctx->pc = 0x214e84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x214e88: 0x0
    ctx->pc = 0x214e88u;
    // NOP
    // 0x214e8c: 0x0
    ctx->pc = 0x214e8cu;
    // NOP
    // 0x214e90: 0x460000c4
    ctx->pc = 0x214e90u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x214e94: 0x46031832
    ctx->pc = 0x214e94u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214e98: 0x0
    ctx->pc = 0x214e98u;
    // NOP
    // 0x214e9c: 0x45030007
    ctx->pc = 0x214E9Cu;
    {
        const bool branch_taken_0x214e9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x214e9c) {
            ctx->pc = 0x214EA0u;
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
            ctx->pc = 0x214EBCu;
            goto label_214ebc;
        }
    }
    ctx->pc = 0x214EA4u;
    // 0x214ea4: 0x460c6302
    ctx->pc = 0x214ea4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x214ea8: 0x46026300
    ctx->pc = 0x214ea8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x214eac: 0xc0ba284
    ctx->pc = 0x214EACu;
    SET_GPR_U32(ctx, 31, 0x214EB4u);
    ctx->pc = 0x214EB0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214EB4u; }
    }
    if (ctx->pc != 0x214EB4u) { return; }
    ctx->pc = 0x214EB4u;
    // 0x214eb4: 0x460000c6
    ctx->pc = 0x214eb4u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x214eb8: 0xe60300f4
    ctx->pc = 0x214eb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
label_214ebc:
    // 0x214ebc: 0xc60000e0
    ctx->pc = 0x214ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214ec0: 0x46030002
    ctx->pc = 0x214ec0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x214ec4: 0xc6010030
    ctx->pc = 0x214ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214ec8: 0x46010000
    ctx->pc = 0x214ec8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x214ecc: 0xe60000a4
    ctx->pc = 0x214eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x214ed0: 0xc60000e4
    ctx->pc = 0x214ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214ed4: 0x46030002
    ctx->pc = 0x214ed4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x214ed8: 0xc6010034
    ctx->pc = 0x214ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214edc: 0x46010000
    ctx->pc = 0x214edcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x214ee0: 0xe60000a8
    ctx->pc = 0x214ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x214ee4: 0xc60000e8
    ctx->pc = 0x214ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214ee8: 0x46030002
    ctx->pc = 0x214ee8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x214eec: 0xc6010038
    ctx->pc = 0x214eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214ef0: 0x46010000
    ctx->pc = 0x214ef0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x214ef4: 0xe60000ac
    ctx->pc = 0x214ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x214ef8: 0xdfbf0060
    ctx->pc = 0x214ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x214efc: 0xdfb10050
    ctx->pc = 0x214efcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x214f00: 0xdfb00040
    ctx->pc = 0x214f00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x214f04: 0x3e00008
    ctx->pc = 0x214F04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214F08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214DB4u: goto label_214db4;
            case 0x214E3Cu: goto label_214e3c;
            case 0x214EBCu: goto label_214ebc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x214F0Cu;
}
