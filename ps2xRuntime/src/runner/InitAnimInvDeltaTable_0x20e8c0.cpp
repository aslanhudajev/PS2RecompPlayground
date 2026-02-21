#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitAnimInvDeltaTable
// Address: 0x20e8c0 - 0x20e914
void InitAnimInvDeltaTable_0x20e8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20e8c0u;

    // 0x20e8c0: 0x3c02003c
    ctx->pc = 0x20e8c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x20e8c4: 0xac40c5a0
    ctx->pc = 0x20e8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952352), GPR_U32(ctx, 0));
    // 0x20e8c8: 0x24030001
    ctx->pc = 0x20e8c8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e8cc: 0x2444c5a0
    ctx->pc = 0x20e8ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294952352));
    // 0x20e8d0: 0x3c013f80
    ctx->pc = 0x20e8d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x20e8d4: 0x44810800
    ctx->pc = 0x20e8d4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x20e8d8: 0x31080
    ctx->pc = 0x20e8d8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x20e8dc: 0x0
    ctx->pc = 0x20e8dcu;
    // NOP
label_20e8e0:
    // 0x20e8e0: 0x441021
    ctx->pc = 0x20e8e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20e8e4: 0x44830000
    ctx->pc = 0x20e8e4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x20e8e8: 0x46800020
    ctx->pc = 0x20e8e8u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x20e8ec: 0x0
    ctx->pc = 0x20e8ecu;
    // NOP
    // 0x20e8f0: 0x0
    ctx->pc = 0x20e8f0u;
    // NOP
    // 0x20e8f4: 0x46000803
    ctx->pc = 0x20e8f4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x20e8f8: 0xe4400000
    ctx->pc = 0x20e8f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x20e8fc: 0x24630001
    ctx->pc = 0x20e8fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x20e900: 0x2c620100
    ctx->pc = 0x20e900u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 256));
    // 0x20e904: 0x1440fff6
    ctx->pc = 0x20E904u;
    {
        const bool branch_taken_0x20e904 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20E908u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x20e904) {
            ctx->pc = 0x20E8E0u;
            goto label_20e8e0;
        }
    }
    ctx->pc = 0x20E90Cu;
    // 0x20e90c: 0x3e00008
    ctx->pc = 0x20E90Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20E8E0u: goto label_20e8e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20E914u;
}
