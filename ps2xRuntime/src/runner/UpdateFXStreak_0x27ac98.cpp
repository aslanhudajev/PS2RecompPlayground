#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: UpdateFXStreak
// Address: 0x27ac98 - 0x27af4c
void UpdateFXStreak_0x27ac98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27ac98u;

    // 0x27ac98: 0x27bdff40
    ctx->pc = 0x27ac98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x27ac9c: 0xffbf0090
    ctx->pc = 0x27ac9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x27aca0: 0xffb10080
    ctx->pc = 0x27aca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    // 0x27aca4: 0xffb00070
    ctx->pc = 0x27aca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x27aca8: 0xe7b600b0
    ctx->pc = 0x27aca8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x27acac: 0xe7b500a8
    ctx->pc = 0x27acacu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x27acb0: 0xe7b400a0
    ctx->pc = 0x27acb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x27acb4: 0x80802d
    ctx->pc = 0x27acb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27acb8: 0xc60100dc
    ctx->pc = 0x27acb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27acbc: 0x3c013f4c
    ctx->pc = 0x27acbcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16204 << 16));
    // 0x27acc0: 0x3421cccd
    ctx->pc = 0x27acc0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x27acc4: 0x44810000
    ctx->pc = 0x27acc4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27acc8: 0x46000d42
    ctx->pc = 0x27acc8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27accc: 0x3c013dcc
    ctx->pc = 0x27acccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x27acd0: 0x3421cccd
    ctx->pc = 0x27acd0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x27acd4: 0x44810000
    ctx->pc = 0x27acd4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27acd8: 0x46000d82
    ctx->pc = 0x27acd8u;
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27acdc: 0x3c013f00
    ctx->pc = 0x27acdcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x27ace0: 0x44810000
    ctx->pc = 0x27ace0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27ace4: 0x46000882
    ctx->pc = 0x27ace4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27ace8: 0x3c020031
    ctx->pc = 0x27ace8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x27acec: 0xc6000068
    ctx->pc = 0x27acecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27acf0: 0xc441ffb4
    ctx->pc = 0x27acf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27acf4: 0x46010001
    ctx->pc = 0x27acf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x27acf8: 0xc601006c
    ctx->pc = 0x27acf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27acfc: 0x46000d01
    ctx->pc = 0x27acfcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27ad00: 0x46141034
    ctx->pc = 0x27ad00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ad04: 0x0
    ctx->pc = 0x27ad04u;
    // NOP
    // 0x27ad08: 0x45000002
    ctx->pc = 0x27AD08u;
    {
        const bool branch_taken_0x27ad08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27AD0Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27ad08) {
            ctx->pc = 0x27AD14u;
            goto label_27ad14;
        }
    }
    ctx->pc = 0x27AD10u;
    // 0x27ad10: 0x46001506
    ctx->pc = 0x27ad10u;
    ctx->f[20] = FPU_MOV_S(ctx->f[2]);
label_27ad14:
    // 0x27ad14: 0xc6000080
    ctx->pc = 0x27ad14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ad18: 0xe7a00030
    ctx->pc = 0x27ad18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x27ad1c: 0xc6000084
    ctx->pc = 0x27ad1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ad20: 0xe7a00034
    ctx->pc = 0x27ad20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x27ad24: 0xc6000088
    ctx->pc = 0x27ad24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ad28: 0xe7a00038
    ctx->pc = 0x27ad28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x27ad2c: 0xc0b58a4
    ctx->pc = 0x27AD2Cu;
    SET_GPR_U32(ctx, 31, 0x27AD34u);
    ctx->pc = 0x27AD30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AD34u; }
    }
    if (ctx->pc != 0x27AD34u) { return; }
    ctx->pc = 0x27AD34u;
    // 0x27ad34: 0x3c020034
    ctx->pc = 0x27ad34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27ad38: 0x2442eb60
    ctx->pc = 0x27ad38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x27ad3c: 0xc7a40034
    ctx->pc = 0x27ad3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27ad40: 0xc4430038
    ctx->pc = 0x27ad40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27ad44: 0x46032042
    ctx->pc = 0x27ad44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x27ad48: 0xc7a20038
    ctx->pc = 0x27ad48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27ad4c: 0xc4450034
    ctx->pc = 0x27ad4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27ad50: 0x46051002
    ctx->pc = 0x27ad50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x27ad54: 0x46000841
    ctx->pc = 0x27ad54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27ad58: 0xe7a10040
    ctx->pc = 0x27ad58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x27ad5c: 0xc4410030
    ctx->pc = 0x27ad5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ad60: 0x46011082
    ctx->pc = 0x27ad60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x27ad64: 0xc7a00030
    ctx->pc = 0x27ad64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ad68: 0x460300c2
    ctx->pc = 0x27ad68u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x27ad6c: 0x46031081
    ctx->pc = 0x27ad6cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x27ad70: 0xe7a20044
    ctx->pc = 0x27ad70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x27ad74: 0x46050002
    ctx->pc = 0x27ad74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x27ad78: 0x46012102
    ctx->pc = 0x27ad78u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x27ad7c: 0x46040001
    ctx->pc = 0x27ad7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x27ad80: 0xe7a00048
    ctx->pc = 0x27ad80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x27ad84: 0xc0b58a4
    ctx->pc = 0x27AD84u;
    SET_GPR_U32(ctx, 31, 0x27AD8Cu);
    ctx->pc = 0x27AD88u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AD8Cu; }
    }
    if (ctx->pc != 0x27AD8Cu) { return; }
    ctx->pc = 0x27AD8Cu;
    // 0x27ad8c: 0x46000046
    ctx->pc = 0x27ad8cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x27ad90: 0x44800000
    ctx->pc = 0x27ad90u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x27ad94: 0x46000834
    ctx->pc = 0x27ad94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ad98: 0x45000008
    ctx->pc = 0x27AD98u;
    {
        const bool branch_taken_0x27ad98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27ad98) {
            ctx->pc = 0x27ADBCu;
            goto label_27adbc;
        }
    }
    ctx->pc = 0x27ADA0u;
    // 0x27ada0: 0x3c01be80
    ctx->pc = 0x27ada0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48768 << 16));
    // 0x27ada4: 0x44810000
    ctx->pc = 0x27ada4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27ada8: 0x46010034
    ctx->pc = 0x27ada8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27adac: 0x0
    ctx->pc = 0x27adacu;
    // NOP
    // 0x27adb0: 0x4503000d
    ctx->pc = 0x27ADB0u;
    {
        const bool branch_taken_0x27adb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27adb0) {
            ctx->pc = 0x27ADB4u;
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x27ADE8u;
            goto label_27ade8;
        }
    }
    ctx->pc = 0x27ADB8u;
    // 0x27adb8: 0x44800000
    ctx->pc = 0x27adb8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_27adbc:
    // 0x27adbc: 0x46010036
    ctx->pc = 0x27adbcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27adc0: 0x0
    ctx->pc = 0x27adc0u;
    // NOP
    // 0x27adc4: 0x45000009
    ctx->pc = 0x27ADC4u;
    {
        const bool branch_taken_0x27adc4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27ADC8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        if (branch_taken_0x27adc4) {
            ctx->pc = 0x27ADECu;
            goto label_27adec;
        }
    }
    ctx->pc = 0x27ADCCu;
    // 0x27adcc: 0x3c013e80
    ctx->pc = 0x27adccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16000 << 16));
    // 0x27add0: 0x44810000
    ctx->pc = 0x27add0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27add4: 0x46000834
    ctx->pc = 0x27add4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27add8: 0x0
    ctx->pc = 0x27add8u;
    // NOP
    // 0x27addc: 0x45020004
    ctx->pc = 0x27ADDCu;
    {
        const bool branch_taken_0x27addc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27addc) {
            ctx->pc = 0x27ADE0u;
            ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
            ctx->pc = 0x27ADF0u;
            goto label_27adf0;
        }
    }
    ctx->pc = 0x27ADE4u;
    // 0x27ade4: 0x46000046
    ctx->pc = 0x27ade4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_27ade8:
    // 0x27ade8: 0xc7a40040
    ctx->pc = 0x27ade8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_27adec:
    // 0x27adec: 0x46040902
    ctx->pc = 0x27adecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_27adf0:
    // 0x27adf0: 0xe7a40040
    ctx->pc = 0x27adf0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x27adf4: 0xc7a50044
    ctx->pc = 0x27adf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27adf8: 0x46050942
    ctx->pc = 0x27adf8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x27adfc: 0xe7a50044
    ctx->pc = 0x27adfcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x27ae00: 0xc7a80048
    ctx->pc = 0x27ae00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x27ae04: 0x46080a02
    ctx->pc = 0x27ae04u;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x27ae08: 0xe7a80048
    ctx->pc = 0x27ae08u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x27ae0c: 0xc60200d8
    ctx->pc = 0x27ae0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27ae10: 0x3c013d08
    ctx->pc = 0x27ae10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15624 << 16));
    // 0x27ae14: 0x34218889
    ctx->pc = 0x27ae14u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 34953));
    // 0x27ae18: 0x44810000
    ctx->pc = 0x27ae18u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27ae1c: 0x46001082
    ctx->pc = 0x27ae1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x27ae20: 0xc6070080
    ctx->pc = 0x27ae20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x27ae24: 0x46071282
    ctx->pc = 0x27ae24u;
    ctx->f[10] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x27ae28: 0xc62c0000
    ctx->pc = 0x27ae28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27ae2c: 0x460c5280
    ctx->pc = 0x27ae2cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[12]);
    // 0x27ae30: 0xe7aa0050
    ctx->pc = 0x27ae30u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x27ae34: 0xc6060084
    ctx->pc = 0x27ae34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x27ae38: 0x46061242
    ctx->pc = 0x27ae38u;
    ctx->f[9] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x27ae3c: 0xc62b0004
    ctx->pc = 0x27ae3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x27ae40: 0x460b4a40
    ctx->pc = 0x27ae40u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[11]);
    // 0x27ae44: 0xe7a90054
    ctx->pc = 0x27ae44u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x27ae48: 0xc6010088
    ctx->pc = 0x27ae48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ae4c: 0x46011082
    ctx->pc = 0x27ae4cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x27ae50: 0xc6200008
    ctx->pc = 0x27ae50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ae54: 0x46001080
    ctx->pc = 0x27ae54u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x27ae58: 0xe7a20058
    ctx->pc = 0x27ae58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x27ae5c: 0x4600a0c7
    ctx->pc = 0x27ae5cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[20]);
    // 0x27ae60: 0x460719c2
    ctx->pc = 0x27ae60u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x27ae64: 0x460c39c0
    ctx->pc = 0x27ae64u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[12]);
    // 0x27ae68: 0xe7a70060
    ctx->pc = 0x27ae68u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x27ae6c: 0x46061982
    ctx->pc = 0x27ae6cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x27ae70: 0x460b3180
    ctx->pc = 0x27ae70u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[11]);
    // 0x27ae74: 0xe7a60064
    ctx->pc = 0x27ae74u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x27ae78: 0x460118c2
    ctx->pc = 0x27ae78u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x27ae7c: 0x460018c0
    ctx->pc = 0x27ae7cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x27ae80: 0xe7a30068
    ctx->pc = 0x27ae80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x27ae84: 0x4604b002
    ctx->pc = 0x27ae84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[4]);
    // 0x27ae88: 0x46070000
    ctx->pc = 0x27ae88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x27ae8c: 0xe7a00000
    ctx->pc = 0x27ae8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x27ae90: 0x4605b002
    ctx->pc = 0x27ae90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[5]);
    // 0x27ae94: 0x46060000
    ctx->pc = 0x27ae94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x27ae98: 0xe7a00004
    ctx->pc = 0x27ae98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x27ae9c: 0x4608b002
    ctx->pc = 0x27ae9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[8]);
    // 0x27aea0: 0x46030000
    ctx->pc = 0x27aea0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x27aea4: 0xe7a00008
    ctx->pc = 0x27aea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x27aea8: 0x4604a802
    ctx->pc = 0x27aea8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[4]);
    // 0x27aeac: 0x460a0000
    ctx->pc = 0x27aeacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x27aeb0: 0xe7a0000c
    ctx->pc = 0x27aeb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x27aeb4: 0x4605a802
    ctx->pc = 0x27aeb4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[5]);
    // 0x27aeb8: 0x46090000
    ctx->pc = 0x27aeb8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x27aebc: 0xe7a00010
    ctx->pc = 0x27aebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x27aec0: 0x4608a802
    ctx->pc = 0x27aec0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[8]);
    // 0x27aec4: 0x46020000
    ctx->pc = 0x27aec4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x27aec8: 0xe7a00014
    ctx->pc = 0x27aec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x27aecc: 0x4600a847
    ctx->pc = 0x27aeccu;
    ctx->f[1] = FPU_NEG_S(ctx->f[21]);
    // 0x27aed0: 0x46040802
    ctx->pc = 0x27aed0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x27aed4: 0x460a0000
    ctx->pc = 0x27aed4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x27aed8: 0xe7a00018
    ctx->pc = 0x27aed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x27aedc: 0x46050802
    ctx->pc = 0x27aedcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x27aee0: 0x46090000
    ctx->pc = 0x27aee0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x27aee4: 0xe7a0001c
    ctx->pc = 0x27aee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x27aee8: 0x46080842
    ctx->pc = 0x27aee8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x27aeec: 0x46020840
    ctx->pc = 0x27aeecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x27aef0: 0xe7a10020
    ctx->pc = 0x27aef0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27aef4: 0x4600b007
    ctx->pc = 0x27aef4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[22]);
    // 0x27aef8: 0x46040102
    ctx->pc = 0x27aef8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x27aefc: 0x46072100
    ctx->pc = 0x27aefcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x27af00: 0xe7a40024
    ctx->pc = 0x27af00u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x27af04: 0x46050142
    ctx->pc = 0x27af04u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x27af08: 0x46062940
    ctx->pc = 0x27af08u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x27af0c: 0xe7a50028
    ctx->pc = 0x27af0cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x27af10: 0x46080002
    ctx->pc = 0x27af10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x27af14: 0x46030000
    ctx->pc = 0x27af14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x27af18: 0xe7a0002c
    ctx->pc = 0x27af18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x27af1c: 0x8e0400d4
    ctx->pc = 0x27af1cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x27af20: 0x24050004
    ctx->pc = 0x27af20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x27af24: 0xc0b3bd8
    ctx->pc = 0x27AF24u;
    SET_GPR_U32(ctx, 31, 0x27AF2Cu);
    ctx->pc = 0x27AF28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CEF60u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPolyInstUpdateVerts_0x2cef60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AF2Cu; }
    }
    if (ctx->pc != 0x27AF2Cu) { return; }
    ctx->pc = 0x27AF2Cu;
    // 0x27af2c: 0xdfbf0090
    ctx->pc = 0x27af2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27af30: 0xdfb10080
    ctx->pc = 0x27af30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27af34: 0xdfb00070
    ctx->pc = 0x27af34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27af38: 0xc7b600b0
    ctx->pc = 0x27af38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27af3c: 0xc7b500a8
    ctx->pc = 0x27af3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27af40: 0xc7b400a0
    ctx->pc = 0x27af40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27af44: 0x3e00008
    ctx->pc = 0x27AF44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AF48u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27AD14u: goto label_27ad14;
            case 0x27ADBCu: goto label_27adbc;
            case 0x27ADE8u: goto label_27ade8;
            case 0x27ADECu: goto label_27adec;
            case 0x27ADF0u: goto label_27adf0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27AF4Cu;
}
