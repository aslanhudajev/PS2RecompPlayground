#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBBlitSetX
// Address: 0x2c36d8 - 0x2c3718
void MBBlitSetX_0x2c36d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c36d8u;

    // 0x2c36d8: 0x3c020036
    ctx->pc = 0x2c36d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c36dc: 0x8c43dee0
    ctx->pc = 0x2c36dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2c36e0: 0x8c820000
    ctx->pc = 0x2c36e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c36e4: 0x30420040
    ctx->pc = 0x2c36e4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
    // 0x2c36e8: 0x50400003
    ctx->pc = 0x2C36E8u;
    {
        const bool branch_taken_0x2c36e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c36e8) {
            ctx->pc = 0x2C36ECu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 64)));
            ctx->pc = 0x2C36F8u;
            goto label_2c36f8;
        }
    }
    ctx->pc = 0x2C36F0u;
    // 0x2c36f0: 0x10000007
    ctx->pc = 0x2C36F0u;
    {
        const bool branch_taken_0x2c36f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C36F4u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x2c36f0) {
            ctx->pc = 0x2C3710u;
            goto label_2c3710;
        }
    }
    ctx->pc = 0x2C36F8u;
label_2c36f8:
    // 0x2c36f8: 0x44850000
    ctx->pc = 0x2c36f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
    // 0x2c36fc: 0x46800020
    ctx->pc = 0x2c36fcu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c3700: 0xc4410000
    ctx->pc = 0x2c3700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3704: 0x46010002
    ctx->pc = 0x2c3704u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c3708: 0x46000064
    ctx->pc = 0x2c3708u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c370c: 0x44050800
    ctx->pc = 0x2c370cu;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[1]);
label_2c3710:
    // 0x2c3710: 0x3e00008
    ctx->pc = 0x2C3710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3714u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C36F8u: goto label_2c36f8;
            case 0x2C3710u: goto label_2c3710;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C3718u;
}
