#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBBlitSetY
// Address: 0x2c3718 - 0x2c3758
void MBBlitSetY_0x2c3718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c3718u;

    // 0x2c3718: 0x3c020036
    ctx->pc = 0x2c3718u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2c371c: 0x8c43dee0
    ctx->pc = 0x2c371cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2c3720: 0x8c820000
    ctx->pc = 0x2c3720u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c3724: 0x30420040
    ctx->pc = 0x2c3724u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
    // 0x2c3728: 0x50400003
    ctx->pc = 0x2C3728u;
    {
        const bool branch_taken_0x2c3728 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c3728) {
            ctx->pc = 0x2C372Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 64)));
            ctx->pc = 0x2C3738u;
            goto label_2c3738;
        }
    }
    ctx->pc = 0x2C3730u;
    // 0x2c3730: 0x10000007
    ctx->pc = 0x2C3730u;
    {
        const bool branch_taken_0x2c3730 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C3734u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x2c3730) {
            ctx->pc = 0x2C3750u;
            goto label_2c3750;
        }
    }
    ctx->pc = 0x2C3738u;
label_2c3738:
    // 0x2c3738: 0x44850000
    ctx->pc = 0x2c3738u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
    // 0x2c373c: 0x46800020
    ctx->pc = 0x2c373cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2c3740: 0xc4410004
    ctx->pc = 0x2c3740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c3744: 0x46010002
    ctx->pc = 0x2c3744u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c3748: 0x46000064
    ctx->pc = 0x2c3748u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2c374c: 0x44050800
    ctx->pc = 0x2c374cu;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[1]);
label_2c3750:
    // 0x2c3750: 0x3e00008
    ctx->pc = 0x2C3750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3754u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C3738u: goto label_2c3738;
            case 0x2C3750u: goto label_2c3750;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C3758u;
}
