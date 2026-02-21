#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ExtractPYR
// Address: 0x2d6cd0 - 0x2d6e74
void ExtractPYR_0x2d6cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d6cd0u;

    // 0x2d6cd0: 0x27bdffb0
    ctx->pc = 0x2d6cd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d6cd4: 0xffbf0020
    ctx->pc = 0x2d6cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d6cd8: 0xffb10010
    ctx->pc = 0x2d6cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d6cdc: 0xffb00000
    ctx->pc = 0x2d6cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d6ce0: 0xe7b60040
    ctx->pc = 0x2d6ce0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2d6ce4: 0xe7b50038
    ctx->pc = 0x2d6ce4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2d6ce8: 0xe7b40030
    ctx->pc = 0x2d6ce8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d6cec: 0x80802d
    ctx->pc = 0x2d6cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6cf0: 0xc6000008
    ctx->pc = 0x2d6cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6cf4: 0x46000005
    ctx->pc = 0x2d6cf4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2d6cf8: 0x3c013f80
    ctx->pc = 0x2d6cf8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2d6cfc: 0x44810800
    ctx->pc = 0x2d6cfcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2d6d00: 0x46000841
    ctx->pc = 0x2d6d00u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d6d04: 0x46000845
    ctx->pc = 0x2d6d04u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2d6d08: 0x3c0138d1
    ctx->pc = 0x2d6d08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14545 << 16));
    // 0x2d6d0c: 0x3421b717
    ctx->pc = 0x2d6d0cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 46871));
    // 0x2d6d10: 0x44810000
    ctx->pc = 0x2d6d10u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d6d14: 0x46000834
    ctx->pc = 0x2d6d14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d6d18: 0x0
    ctx->pc = 0x2d6d18u;
    // NOP
    // 0x2d6d1c: 0x45000013
    ctx->pc = 0x2D6D1Cu;
    {
        const bool branch_taken_0x2d6d1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D6D20u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d6d1c) {
            ctx->pc = 0x2D6D6Cu;
            goto label_2d6d6c;
        }
    }
    ctx->pc = 0x2D6D24u;
    // 0x2d6d24: 0xc60c0024
    ctx->pc = 0x2d6d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d6d28: 0xc0ba04a
    ctx->pc = 0x2D6D28u;
    SET_GPR_U32(ctx, 31, 0x2D6D30u);
    ctx->pc = 0x2D6D2Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6D30u; }
    }
    if (ctx->pc != 0x2D6D30u) { return; }
    ctx->pc = 0x2D6D30u;
    // 0x2d6d30: 0x46000586
    ctx->pc = 0x2d6d30u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x2d6d34: 0xc6010008
    ctx->pc = 0x2d6d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6d38: 0x44800000
    ctx->pc = 0x2d6d38u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2d6d3c: 0x46010034
    ctx->pc = 0x2d6d3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d6d40: 0x3c013fc9
    ctx->pc = 0x2d6d40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x2d6d44: 0x34210fdb
    ctx->pc = 0x2d6d44u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2d6d48: 0x4481a800
    ctx->pc = 0x2d6d48u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x2d6d4c: 0x4500003f
    ctx->pc = 0x2D6D4Cu;
    {
        const bool branch_taken_0x2d6d4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D6D50u;
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        if (branch_taken_0x2d6d4c) {
            ctx->pc = 0x2D6E4Cu;
            goto label_2d6e4c;
        }
    }
    ctx->pc = 0x2D6D54u;
    // 0x2d6d54: 0x3c01bfc9
    ctx->pc = 0x2d6d54u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49097 << 16));
    // 0x2d6d58: 0x34210fdb
    ctx->pc = 0x2d6d58u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2d6d5c: 0x4481a800
    ctx->pc = 0x2d6d5cu;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x2d6d60: 0x44800000
    ctx->pc = 0x2d6d60u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2d6d64: 0x1000003a
    ctx->pc = 0x2D6D64u;
    {
        const bool branch_taken_0x2d6d64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D6D68u;
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        if (branch_taken_0x2d6d64) {
            ctx->pc = 0x2D6E50u;
            goto label_2d6e50;
        }
    }
    ctx->pc = 0x2D6D6Cu;
label_2d6d6c:
    // 0x2d6d6c: 0xc60c0018
    ctx->pc = 0x2d6d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d6d70: 0x46006307
    ctx->pc = 0x2d6d70u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x2d6d74: 0xc0ba04a
    ctx->pc = 0x2D6D74u;
    SET_GPR_U32(ctx, 31, 0x2D6D7Cu);
    ctx->pc = 0x2D6D78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6D7Cu; }
    }
    if (ctx->pc != 0x2D6D7Cu) { return; }
    ctx->pc = 0x2D6D7Cu;
    // 0x2d6d7c: 0x46000586
    ctx->pc = 0x2d6d7cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x2d6d80: 0xc0b9dce
    ctx->pc = 0x2D6D80u;
    SET_GPR_U32(ctx, 31, 0x2D6D88u);
    ctx->pc = 0x2D6D84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6D88u; }
    }
    if (ctx->pc != 0x2D6D88u) { return; }
    ctx->pc = 0x2D6D88u;
    // 0x2d6d88: 0x44800800
    ctx->pc = 0x2d6d88u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x2d6d8c: 0x46010032
    ctx->pc = 0x2d6d8cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d6d90: 0x0
    ctx->pc = 0x2d6d90u;
    // NOP
    // 0x2d6d94: 0x4502001a
    ctx->pc = 0x2D6D94u;
    {
        const bool branch_taken_0x2d6d94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d6d94) {
            ctx->pc = 0x2D6D98u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->pc = 0x2D6E00u;
            goto label_2d6e00;
        }
    }
    ctx->pc = 0x2D6D9Cu;
    // 0x2d6d9c: 0x46160834
    ctx->pc = 0x2d6d9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d6da0: 0x0
    ctx->pc = 0x2d6da0u;
    // NOP
    // 0x2d6da4: 0x4500000d
    ctx->pc = 0x2D6DA4u;
    {
        const bool branch_taken_0x2d6da4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D6DA8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x2d6da4) {
            ctx->pc = 0x2D6DDCu;
            goto label_2d6ddc;
        }
    }
    ctx->pc = 0x2D6DACu;
    // 0x2d6dac: 0xc60d0018
    ctx->pc = 0x2d6dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2d6db0: 0x46006307
    ctx->pc = 0x2d6db0u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x2d6db4: 0xc0ba04a
    ctx->pc = 0x2D6DB4u;
    SET_GPR_U32(ctx, 31, 0x2D6DBCu);
    ctx->pc = 0x2D6DB8u;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6DBCu; }
    }
    if (ctx->pc != 0x2D6DBCu) { return; }
    ctx->pc = 0x2D6DBCu;
    // 0x2d6dbc: 0x46000546
    ctx->pc = 0x2d6dbcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2d6dc0: 0xc60c0020
    ctx->pc = 0x2d6dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d6dc4: 0xc60d0024
    ctx->pc = 0x2d6dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2d6dc8: 0x46006307
    ctx->pc = 0x2d6dc8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x2d6dcc: 0xc0ba04a
    ctx->pc = 0x2D6DCCu;
    SET_GPR_U32(ctx, 31, 0x2D6DD4u);
    ctx->pc = 0x2D6DD0u;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6DD4u; }
    }
    if (ctx->pc != 0x2D6DD4u) { return; }
    ctx->pc = 0x2D6DD4u;
    // 0x2d6dd4: 0x1000001d
    ctx->pc = 0x2D6DD4u;
    {
        const bool branch_taken_0x2d6dd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D6DD8u;
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        if (branch_taken_0x2d6dd4) {
            ctx->pc = 0x2D6E4Cu;
            goto label_2d6e4c;
        }
    }
    ctx->pc = 0x2D6DDCu;
label_2d6ddc:
    // 0x2d6ddc: 0x46006307
    ctx->pc = 0x2d6ddcu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x2d6de0: 0xc0ba04a
    ctx->pc = 0x2D6DE0u;
    SET_GPR_U32(ctx, 31, 0x2D6DE8u);
    ctx->pc = 0x2D6DE4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6DE8u; }
    }
    if (ctx->pc != 0x2D6DE8u) { return; }
    ctx->pc = 0x2D6DE8u;
    // 0x2d6de8: 0x46000546
    ctx->pc = 0x2d6de8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2d6dec: 0xc60c0020
    ctx->pc = 0x2d6decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d6df0: 0xc0ba04a
    ctx->pc = 0x2D6DF0u;
    SET_GPR_U32(ctx, 31, 0x2D6DF8u);
    ctx->pc = 0x2D6DF4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6DF8u; }
    }
    if (ctx->pc != 0x2D6DF8u) { return; }
    ctx->pc = 0x2D6DF8u;
    // 0x2d6df8: 0x10000014
    ctx->pc = 0x2D6DF8u;
    {
        const bool branch_taken_0x2d6df8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D6DFCu;
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        if (branch_taken_0x2d6df8) {
            ctx->pc = 0x2D6E4Cu;
            goto label_2d6e4c;
        }
    }
    ctx->pc = 0x2D6E00u;
label_2d6e00:
    // 0x2d6e00: 0x0
    ctx->pc = 0x2d6e00u;
    // NOP
    // 0x2d6e04: 0x0
    ctx->pc = 0x2d6e04u;
    // NOP
    // 0x2d6e08: 0x4600a503
    ctx->pc = 0x2d6e08u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
    // 0x2d6e0c: 0xc60c0008
    ctx->pc = 0x2d6e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d6e10: 0x46006307
    ctx->pc = 0x2d6e10u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x2d6e14: 0xc0ba04a
    ctx->pc = 0x2D6E14u;
    SET_GPR_U32(ctx, 31, 0x2D6E1Cu);
    ctx->pc = 0x2D6E18u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6E1Cu; }
    }
    if (ctx->pc != 0x2D6E1Cu) { return; }
    ctx->pc = 0x2D6E1Cu;
    // 0x2d6e1c: 0xc60c0004
    ctx->pc = 0x2d6e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d6e20: 0x46006307
    ctx->pc = 0x2d6e20u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x2d6e24: 0xc60d0000
    ctx->pc = 0x2d6e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2d6e28: 0x0
    ctx->pc = 0x2d6e28u;
    // NOP
    // 0x2d6e2c: 0x0
    ctx->pc = 0x2d6e2cu;
    // NOP
    // 0x2d6e30: 0x46146303
    ctx->pc = 0x2d6e30u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[20];
    // 0x2d6e34: 0x0
    ctx->pc = 0x2d6e34u;
    // NOP
    // 0x2d6e38: 0x0
    ctx->pc = 0x2d6e38u;
    // NOP
    // 0x2d6e3c: 0x46146b43
    ctx->pc = 0x2d6e3cu;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[20];
    // 0x2d6e40: 0xc0ba04a
    ctx->pc = 0x2D6E40u;
    SET_GPR_U32(ctx, 31, 0x2D6E48u);
    ctx->pc = 0x2D6E44u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6E48u; }
    }
    if (ctx->pc != 0x2D6E48u) { return; }
    ctx->pc = 0x2D6E48u;
    // 0x2d6e48: 0xe6360000
    ctx->pc = 0x2d6e48u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2d6e4c:
    // 0x2d6e4c: 0xe6350004
    ctx->pc = 0x2d6e4cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2d6e50:
    // 0x2d6e50: 0xe6200008
    ctx->pc = 0x2d6e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2d6e54: 0xdfbf0020
    ctx->pc = 0x2d6e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6e58: 0xdfb10010
    ctx->pc = 0x2d6e58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6e5c: 0xdfb00000
    ctx->pc = 0x2d6e5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6e60: 0xc7b60040
    ctx->pc = 0x2d6e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2d6e64: 0xc7b50038
    ctx->pc = 0x2d6e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d6e68: 0xc7b40030
    ctx->pc = 0x2d6e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d6e6c: 0x3e00008
    ctx->pc = 0x2D6E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6E70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D6D6Cu: goto label_2d6d6c;
            case 0x2D6DDCu: goto label_2d6ddc;
            case 0x2D6E00u: goto label_2d6e00;
            case 0x2D6E4Cu: goto label_2d6e4c;
            case 0x2D6E50u: goto label_2d6e50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D6E74u;
}
