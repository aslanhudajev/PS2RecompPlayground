#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CmpDist
// Address: 0x2c7b58 - 0x2c7b94
void CmpDist_0x2c7b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c7b58u;

    // 0x2c7b58: 0xc4a00040
    ctx->pc = 0x2c7b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c7b5c: 0xc4810040
    ctx->pc = 0x2c7b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7b60: 0x46010041
    ctx->pc = 0x2c7b60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c7b64: 0x44800000
    ctx->pc = 0x2c7b64u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2c7b68: 0x46010034
    ctx->pc = 0x2c7b68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c7b6c: 0x0
    ctx->pc = 0x2c7b6cu;
    // NOP
    // 0x2c7b70: 0x45010006
    ctx->pc = 0x2C7B70u;
    {
        const bool branch_taken_0x2c7b70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C7B74u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2c7b70) {
            ctx->pc = 0x2C7B8Cu;
            goto label_2c7b8c;
        }
    }
    ctx->pc = 0x2C7B78u;
    // 0x2c7b78: 0x46000834
    ctx->pc = 0x2c7b78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c7b7c: 0x0
    ctx->pc = 0x2c7b7cu;
    // NOP
    // 0x2c7b80: 0x45000002
    ctx->pc = 0x2C7B80u;
    {
        const bool branch_taken_0x2c7b80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C7B84u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c7b80) {
            ctx->pc = 0x2C7B8Cu;
            goto label_2c7b8c;
        }
    }
    ctx->pc = 0x2C7B88u;
    // 0x2c7b88: 0x2402ffff
    ctx->pc = 0x2c7b88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c7b8c:
    // 0x2c7b8c: 0x3e00008
    ctx->pc = 0x2C7B8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C7B8Cu: goto label_2c7b8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C7B94u;
}
