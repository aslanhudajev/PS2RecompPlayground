#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ExtractYPR
// Address: 0x2d6e78 - 0x2d7010
void ExtractYPR_0x2d6e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d6e78u;

    // 0x2d6e78: 0x27bdffb0
    ctx->pc = 0x2d6e78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d6e7c: 0xffbf0020
    ctx->pc = 0x2d6e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d6e80: 0xffb10010
    ctx->pc = 0x2d6e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d6e84: 0xffb00000
    ctx->pc = 0x2d6e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d6e88: 0xe7b60040
    ctx->pc = 0x2d6e88u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2d6e8c: 0xe7b50038
    ctx->pc = 0x2d6e8cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2d6e90: 0xe7b40030
    ctx->pc = 0x2d6e90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d6e94: 0x80802d
    ctx->pc = 0x2d6e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6e98: 0xc6000024
    ctx->pc = 0x2d6e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6e9c: 0x46000005
    ctx->pc = 0x2d6e9cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2d6ea0: 0x3c013f80
    ctx->pc = 0x2d6ea0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2d6ea4: 0x44810800
    ctx->pc = 0x2d6ea4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2d6ea8: 0x46000841
    ctx->pc = 0x2d6ea8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d6eac: 0x46000845
    ctx->pc = 0x2d6eacu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2d6eb0: 0x3c0138d1
    ctx->pc = 0x2d6eb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)14545 << 16));
    // 0x2d6eb4: 0x3421b717
    ctx->pc = 0x2d6eb4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 46871));
    // 0x2d6eb8: 0x44810000
    ctx->pc = 0x2d6eb8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2d6ebc: 0x46000834
    ctx->pc = 0x2d6ebcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d6ec0: 0x0
    ctx->pc = 0x2d6ec0u;
    // NOP
    // 0x2d6ec4: 0x45000014
    ctx->pc = 0x2D6EC4u;
    {
        const bool branch_taken_0x2d6ec4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D6EC8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d6ec4) {
            ctx->pc = 0x2D6F18u;
            goto label_2d6f18;
        }
    }
    ctx->pc = 0x2D6ECCu;
    // 0x2d6ecc: 0xc60c0008
    ctx->pc = 0x2d6eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d6ed0: 0x46006307
    ctx->pc = 0x2d6ed0u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x2d6ed4: 0xc0ba04a
    ctx->pc = 0x2D6ED4u;
    SET_GPR_U32(ctx, 31, 0x2D6EDCu);
    ctx->pc = 0x2D6ED8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6EDCu; }
    }
    if (ctx->pc != 0x2D6EDCu) { return; }
    ctx->pc = 0x2D6EDCu;
    // 0x2d6edc: 0x46000086
    ctx->pc = 0x2d6edcu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x2d6ee0: 0xc6010024
    ctx->pc = 0x2d6ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6ee4: 0x44800000
    ctx->pc = 0x2d6ee4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2d6ee8: 0x46010034
    ctx->pc = 0x2d6ee8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d6eec: 0x3c01bfc9
    ctx->pc = 0x2d6eecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49097 << 16));
    // 0x2d6ef0: 0x34210fdb
    ctx->pc = 0x2d6ef0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2d6ef4: 0x4481a800
    ctx->pc = 0x2d6ef4u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x2d6ef8: 0x45000004
    ctx->pc = 0x2D6EF8u;
    {
        const bool branch_taken_0x2d6ef8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d6ef8) {
            ctx->pc = 0x2D6F0Cu;
            goto label_2d6f0c;
        }
    }
    ctx->pc = 0x2D6F00u;
    // 0x2d6f00: 0x3c013fc9
    ctx->pc = 0x2d6f00u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x2d6f04: 0x34210fdb
    ctx->pc = 0x2d6f04u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2d6f08: 0x4481a800
    ctx->pc = 0x2d6f08u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
label_2d6f0c:
    // 0x2d6f0c: 0x4480b000
    ctx->pc = 0x2d6f0cu;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 0);
    // 0x2d6f10: 0x10000035
    ctx->pc = 0x2D6F10u;
    {
        const bool branch_taken_0x2d6f10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D6F14u;
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        if (branch_taken_0x2d6f10) {
            ctx->pc = 0x2D6FE8u;
            goto label_2d6fe8;
        }
    }
    ctx->pc = 0x2D6F18u;
label_2d6f18:
    // 0x2d6f18: 0xc60c0004
    ctx->pc = 0x2d6f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d6f1c: 0x46006307
    ctx->pc = 0x2d6f1cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x2d6f20: 0xc0ba04a
    ctx->pc = 0x2D6F20u;
    SET_GPR_U32(ctx, 31, 0x2D6F28u);
    ctx->pc = 0x2D6F24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6F28u; }
    }
    if (ctx->pc != 0x2D6F28u) { return; }
    ctx->pc = 0x2D6F28u;
    // 0x2d6f28: 0x46000586
    ctx->pc = 0x2d6f28u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x2d6f2c: 0xc0b9dce
    ctx->pc = 0x2D6F2Cu;
    SET_GPR_U32(ctx, 31, 0x2D6F34u);
    ctx->pc = 0x2D6F30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6F34u; }
    }
    if (ctx->pc != 0x2D6F34u) { return; }
    ctx->pc = 0x2D6F34u;
    // 0x2d6f34: 0x44800800
    ctx->pc = 0x2d6f34u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x2d6f38: 0x46010032
    ctx->pc = 0x2d6f38u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d6f3c: 0x0
    ctx->pc = 0x2d6f3cu;
    // NOP
    // 0x2d6f40: 0x45020017
    ctx->pc = 0x2D6F40u;
    {
        const bool branch_taken_0x2d6f40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d6f40) {
            ctx->pc = 0x2D6F44u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->pc = 0x2D6FA0u;
            goto label_2d6fa0;
        }
    }
    ctx->pc = 0x2D6F48u;
    // 0x2d6f48: 0x46160834
    ctx->pc = 0x2d6f48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d6f4c: 0x0
    ctx->pc = 0x2d6f4cu;
    // NOP
    // 0x2d6f50: 0x45000009
    ctx->pc = 0x2D6F50u;
    {
        const bool branch_taken_0x2d6f50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D6F54u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x2d6f50) {
            ctx->pc = 0x2D6F78u;
            goto label_2d6f78;
        }
    }
    ctx->pc = 0x2D6F58u;
    // 0x2d6f58: 0xc60d0004
    ctx->pc = 0x2d6f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2d6f5c: 0xc0ba04a
    ctx->pc = 0x2D6F5Cu;
    SET_GPR_U32(ctx, 31, 0x2D6F64u);
    ctx->pc = 0x2D6F60u;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6F64u; }
    }
    if (ctx->pc != 0x2D6F64u) { return; }
    ctx->pc = 0x2D6F64u;
    // 0x2d6f64: 0x46000546
    ctx->pc = 0x2d6f64u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2d6f68: 0xc60d0010
    ctx->pc = 0x2d6f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2d6f6c: 0xc60c0018
    ctx->pc = 0x2d6f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d6f70: 0x10000007
    ctx->pc = 0x2D6F70u;
    {
        const bool branch_taken_0x2d6f70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D6F74u;
        ctx->f[13] = FPU_NEG_S(ctx->f[13]);
        if (branch_taken_0x2d6f70) {
            ctx->pc = 0x2D6F90u;
            goto label_2d6f90;
        }
    }
    ctx->pc = 0x2D6F78u;
label_2d6f78:
    // 0x2d6f78: 0xc0ba04a
    ctx->pc = 0x2D6F78u;
    SET_GPR_U32(ctx, 31, 0x2D6F80u);
    ctx->pc = 0x2D6F7Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6F80u; }
    }
    if (ctx->pc != 0x2D6F80u) { return; }
    ctx->pc = 0x2D6F80u;
    // 0x2d6f80: 0x46000546
    ctx->pc = 0x2d6f80u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2d6f84: 0xc60c0018
    ctx->pc = 0x2d6f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d6f88: 0x46006307
    ctx->pc = 0x2d6f88u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x2d6f8c: 0xc60d0010
    ctx->pc = 0x2d6f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2d6f90:
    // 0x2d6f90: 0xc0ba04a
    ctx->pc = 0x2D6F90u;
    SET_GPR_U32(ctx, 31, 0x2D6F98u);
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6F98u; }
    }
    if (ctx->pc != 0x2D6F98u) { return; }
    ctx->pc = 0x2D6F98u;
    // 0x2d6f98: 0x10000012
    ctx->pc = 0x2D6F98u;
    {
        const bool branch_taken_0x2d6f98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2D6F9Cu;
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x2d6f98) {
            ctx->pc = 0x2D6FE4u;
            goto label_2d6fe4;
        }
    }
    ctx->pc = 0x2D6FA0u;
label_2d6fa0:
    // 0x2d6fa0: 0x0
    ctx->pc = 0x2d6fa0u;
    // NOP
    // 0x2d6fa4: 0x0
    ctx->pc = 0x2d6fa4u;
    // NOP
    // 0x2d6fa8: 0x4600a503
    ctx->pc = 0x2d6fa8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
    // 0x2d6fac: 0xc60c0024
    ctx->pc = 0x2d6facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d6fb0: 0xc0ba04a
    ctx->pc = 0x2D6FB0u;
    SET_GPR_U32(ctx, 31, 0x2D6FB8u);
    ctx->pc = 0x2D6FB4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6FB8u; }
    }
    if (ctx->pc != 0x2D6FB8u) { return; }
    ctx->pc = 0x2D6FB8u;
    // 0x2d6fb8: 0xc60c0020
    ctx->pc = 0x2d6fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d6fbc: 0xc60d0028
    ctx->pc = 0x2d6fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2d6fc0: 0x0
    ctx->pc = 0x2d6fc0u;
    // NOP
    // 0x2d6fc4: 0x0
    ctx->pc = 0x2d6fc4u;
    // NOP
    // 0x2d6fc8: 0x46146303
    ctx->pc = 0x2d6fc8u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[20];
    // 0x2d6fcc: 0x0
    ctx->pc = 0x2d6fccu;
    // NOP
    // 0x2d6fd0: 0x0
    ctx->pc = 0x2d6fd0u;
    // NOP
    // 0x2d6fd4: 0x46146b43
    ctx->pc = 0x2d6fd4u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[20];
    // 0x2d6fd8: 0xc0ba04a
    ctx->pc = 0x2D6FD8u;
    SET_GPR_U32(ctx, 31, 0x2D6FE0u);
    ctx->pc = 0x2D6FDCu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6FE0u; }
    }
    if (ctx->pc != 0x2D6FE0u) { return; }
    ctx->pc = 0x2D6FE0u;
    // 0x2d6fe0: 0x46000086
    ctx->pc = 0x2d6fe0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_2d6fe4:
    // 0x2d6fe4: 0xe6350000
    ctx->pc = 0x2d6fe4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2d6fe8:
    // 0x2d6fe8: 0xe6220004
    ctx->pc = 0x2d6fe8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2d6fec: 0xe6360008
    ctx->pc = 0x2d6fecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2d6ff0: 0xdfbf0020
    ctx->pc = 0x2d6ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6ff4: 0xdfb10010
    ctx->pc = 0x2d6ff4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6ff8: 0xdfb00000
    ctx->pc = 0x2d6ff8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6ffc: 0xc7b60040
    ctx->pc = 0x2d6ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2d7000: 0xc7b50038
    ctx->pc = 0x2d7000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d7004: 0xc7b40030
    ctx->pc = 0x2d7004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d7008: 0x3e00008
    ctx->pc = 0x2D7008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D700Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D6F0Cu: goto label_2d6f0c;
            case 0x2D6F18u: goto label_2d6f18;
            case 0x2D6F78u: goto label_2d6f78;
            case 0x2D6F90u: goto label_2d6f90;
            case 0x2D6FA0u: goto label_2d6fa0;
            case 0x2D6FE4u: goto label_2d6fe4;
            case 0x2D6FE8u: goto label_2d6fe8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D7010u;
}
