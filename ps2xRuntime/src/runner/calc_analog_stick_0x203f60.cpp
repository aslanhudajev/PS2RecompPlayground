#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: calc_analog_stick
// Address: 0x203f60 - 0x204040
void calc_analog_stick_0x203f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x203f60u;

    // 0x203f60: 0x27bdffc0
    ctx->pc = 0x203f60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x203f64: 0xffbf0020
    ctx->pc = 0x203f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x203f68: 0xffb10010
    ctx->pc = 0x203f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x203f6c: 0xffb00000
    ctx->pc = 0x203f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x203f70: 0xe7b50038
    ctx->pc = 0x203f70u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x203f74: 0xe7b40030
    ctx->pc = 0x203f74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x203f78: 0x100802d
    ctx->pc = 0x203f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x203f7c: 0xc7102a
    ctx->pc = 0x203f7cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 7)));
    // 0x203f80: 0x14400006
    ctx->pc = 0x203F80u;
    {
        const bool branch_taken_0x203f80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x203F84u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x203f80) {
            ctx->pc = 0x203F9Cu;
            goto label_203f9c;
        }
    }
    ctx->pc = 0x203F88u;
    // 0x203f88: 0x61023
    ctx->pc = 0x203f88u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x203f8c: 0x4482a000
    ctx->pc = 0x203f8cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 2);
    // 0x203f90: 0x4680a520
    ctx->pc = 0x203f90u;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[20]);
    // 0x203f94: 0x10000004
    ctx->pc = 0x203F94u;
    {
        const bool branch_taken_0x203f94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x203F98u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 4)));
        if (branch_taken_0x203f94) {
            ctx->pc = 0x203FA8u;
            goto label_203fa8;
        }
    }
    ctx->pc = 0x203F9Cu;
label_203f9c:
    // 0x203f9c: 0x4487a000
    ctx->pc = 0x203f9cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 7);
    // 0x203fa0: 0x4680a520
    ctx->pc = 0x203fa0u;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[20]);
    // 0x203fa4: 0xa4102a
    ctx->pc = 0x203fa4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 4)));
label_203fa8:
    // 0x203fa8: 0x14400005
    ctx->pc = 0x203FA8u;
    {
        const bool branch_taken_0x203fa8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x203FACu;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
        if (branch_taken_0x203fa8) {
            ctx->pc = 0x203FC0u;
            goto label_203fc0;
        }
    }
    ctx->pc = 0x203FB0u;
    // 0x203fb0: 0x4482a800
    ctx->pc = 0x203fb0u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 2);
    // 0x203fb4: 0x4680ad60
    ctx->pc = 0x203fb4u;
    ctx->f[21] = FPU_CVT_S_W(*(int32_t*)&ctx->f[21]);
    // 0x203fb8: 0x10000003
    ctx->pc = 0x203FB8u;
    {
        const bool branch_taken_0x203fb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x203fb8) {
            ctx->pc = 0x203FC8u;
            goto label_203fc8;
        }
    }
    ctx->pc = 0x203FC0u;
label_203fc0:
    // 0x203fc0: 0x4484a800
    ctx->pc = 0x203fc0u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 4);
    // 0x203fc4: 0x4680ad60
    ctx->pc = 0x203fc4u;
    ctx->f[21] = FPU_CVT_S_W(*(int32_t*)&ctx->f[21]);
label_203fc8:
    // 0x203fc8: 0x3c013b80
    ctx->pc = 0x203fc8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15232 << 16));
    // 0x203fcc: 0x34218081
    ctx->pc = 0x203fccu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 32897));
    // 0x203fd0: 0x44810000
    ctx->pc = 0x203fd0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x203fd4: 0x4600a502
    ctx->pc = 0x203fd4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x203fd8: 0x4600ad42
    ctx->pc = 0x203fd8u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x203fdc: 0x4600ab06
    ctx->pc = 0x203fdcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x203fe0: 0xc0ba04a
    ctx->pc = 0x203FE0u;
    SET_GPR_U32(ctx, 31, 0x203FE8u);
    ctx->pc = 0x203FE4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203FE8u; }
    }
    if (ctx->pc != 0x203FE8u) { return; }
    ctx->pc = 0x203FE8u;
    // 0x203fe8: 0xe6000000
    ctx->pc = 0x203fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x203fec: 0x4614a002
    ctx->pc = 0x203fecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x203ff0: 0x4615a842
    ctx->pc = 0x203ff0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x203ff4: 0x46010000
    ctx->pc = 0x203ff4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x203ff8: 0x0
    ctx->pc = 0x203ff8u;
    // NOP
    // 0x203ffc: 0x0
    ctx->pc = 0x203ffcu;
    // NOP
    // 0x204000: 0x46000004
    ctx->pc = 0x204000u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x204004: 0x46000032
    ctx->pc = 0x204004u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x204008: 0x0
    ctx->pc = 0x204008u;
    // NOP
    // 0x20400c: 0x45030005
    ctx->pc = 0x20400Cu;
    {
        const bool branch_taken_0x20400c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20400c) {
            ctx->pc = 0x204010u;
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
            ctx->pc = 0x204024u;
            goto label_204024;
        }
    }
    ctx->pc = 0x204014u;
    // 0x204014: 0x4614a302
    ctx->pc = 0x204014u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x204018: 0xc0ba284
    ctx->pc = 0x204018u;
    SET_GPR_U32(ctx, 31, 0x204020u);
    ctx->pc = 0x20401Cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204020u; }
    }
    if (ctx->pc != 0x204020u) { return; }
    ctx->pc = 0x204020u;
    // 0x204020: 0xe6200000
    ctx->pc = 0x204020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_204024:
    // 0x204024: 0xdfbf0020
    ctx->pc = 0x204024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x204028: 0xdfb10010
    ctx->pc = 0x204028u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20402c: 0xdfb00000
    ctx->pc = 0x20402cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204030: 0xc7b50038
    ctx->pc = 0x204030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x204034: 0xc7b40030
    ctx->pc = 0x204034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x204038: 0x3e00008
    ctx->pc = 0x204038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20403Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203F9Cu: goto label_203f9c;
            case 0x203FA8u: goto label_203fa8;
            case 0x203FC0u: goto label_203fc0;
            case 0x203FC8u: goto label_203fc8;
            case 0x204024u: goto label_204024;
            default: break;
        }
        return;
    }
    ctx->pc = 0x204040u;
}
