#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: efuncVLen
// Address: 0x2b6f58 - 0x2b700c
void efuncVLen_0x2b6f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b6f58u;

    // 0x2b6f58: 0x27bdffe0
    ctx->pc = 0x2b6f58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b6f5c: 0xffbf0010
    ctx->pc = 0x2b6f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b6f60: 0xffb00000
    ctx->pc = 0x2b6f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b6f64: 0x8c860010
    ctx->pc = 0x2b6f64u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2b6f68: 0x8cc30000
    ctx->pc = 0x2b6f68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2b6f6c: 0x24020002
    ctx->pc = 0x2b6f6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b6f70: 0x10620004
    ctx->pc = 0x2B6F70u;
    {
        const bool branch_taken_0x2b6f70 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B6F74u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x2b6f70) {
            ctx->pc = 0x2B6F84u;
            goto label_2b6f84;
        }
    }
    ctx->pc = 0x2B6F78u;
    // 0x2b6f78: 0x24020020
    ctx->pc = 0x2b6f78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b6f7c: 0x1000001f
    ctx->pc = 0x2B6F7Cu;
    {
        const bool branch_taken_0x2b6f7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B6F80u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x2b6f7c) {
            ctx->pc = 0x2B6FFCu;
            goto label_2b6ffc;
        }
    }
    ctx->pc = 0x2B6F84u;
label_2b6f84:
    // 0x2b6f84: 0x44806000
    ctx->pc = 0x2b6f84u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x2b6f88: 0x8c820004
    ctx->pc = 0x2b6f88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b6f8c: 0x80440006
    ctx->pc = 0x2b6f8cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2b6f90: 0x2484ffd0
    ctx->pc = 0x2b6f90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x2b6f94: 0x2482ffff
    ctx->pc = 0x2b6f94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2b6f98: 0x2c420004
    ctx->pc = 0x2b6f98u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 4));
    // 0x2b6f9c: 0x24030003
    ctx->pc = 0x2b6f9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b6fa0: 0x62200a
    ctx->pc = 0x2b6fa0u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 3));
    // 0x2b6fa4: 0x1880000a
    ctx->pc = 0x2B6FA4u;
    {
        const bool branch_taken_0x2b6fa4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2B6FA8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b6fa4) {
            ctx->pc = 0x2B6FD0u;
            goto label_2b6fd0;
        }
    }
    ctx->pc = 0x2B6FACu;
    // 0x2b6fac: 0x24c30010
    ctx->pc = 0x2b6facu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 16));
label_2b6fb0:
    // 0x2b6fb0: 0x51080
    ctx->pc = 0x2b6fb0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x2b6fb4: 0x621021
    ctx->pc = 0x2b6fb4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b6fb8: 0xc4400000
    ctx->pc = 0x2b6fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6fbc: 0x46000002
    ctx->pc = 0x2b6fbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2b6fc0: 0x24a50001
    ctx->pc = 0x2b6fc0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2b6fc4: 0xa4102a
    ctx->pc = 0x2b6fc4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 4)));
    // 0x2b6fc8: 0x1440fff9
    ctx->pc = 0x2B6FC8u;
    {
        const bool branch_taken_0x2b6fc8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2B6FCCu;
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        if (branch_taken_0x2b6fc8) {
            ctx->pc = 0x2B6FB0u;
            goto label_2b6fb0;
        }
    }
    ctx->pc = 0x2B6FD0u;
label_2b6fd0:
    // 0x2b6fd0: 0x0
    ctx->pc = 0x2b6fd0u;
    // NOP
    // 0x2b6fd4: 0x0
    ctx->pc = 0x2b6fd4u;
    // NOP
    // 0x2b6fd8: 0x460c0004
    ctx->pc = 0x2b6fd8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x2b6fdc: 0x46000032
    ctx->pc = 0x2b6fdcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6fe0: 0x0
    ctx->pc = 0x2b6fe0u;
    // NOP
    // 0x2b6fe4: 0x45030004
    ctx->pc = 0x2B6FE4u;
    {
        const bool branch_taken_0x2b6fe4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6fe4) {
            ctx->pc = 0x2B6FE8u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x2B6FF8u;
            goto label_2b6ff8;
        }
    }
    ctx->pc = 0x2B6FECu;
    // 0x2b6fec: 0xc0ba284
    ctx->pc = 0x2B6FECu;
    SET_GPR_U32(ctx, 31, 0x2B6FF4u);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6FF4u; }
    }
    if (ctx->pc != 0x2B6FF4u) { return; }
    ctx->pc = 0x2B6FF4u;
    // 0x2b6ff4: 0xae000000
    ctx->pc = 0x2b6ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2b6ff8:
    // 0x2b6ff8: 0xe6000010
    ctx->pc = 0x2b6ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_2b6ffc:
    // 0x2b6ffc: 0xdfbf0010
    ctx->pc = 0x2b6ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7000: 0xdfb00000
    ctx->pc = 0x2b7000u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7004: 0x3e00008
    ctx->pc = 0x2B7004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7008u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B6F84u: goto label_2b6f84;
            case 0x2B6FB0u: goto label_2b6fb0;
            case 0x2B6FD0u: goto label_2b6fd0;
            case 0x2B6FF8u: goto label_2b6ff8;
            case 0x2B6FFCu: goto label_2b6ffc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B700Cu;
}
