#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbSetVirtualScreenSize
// Address: 0x2a9058 - 0x2a9080
void pbSetVirtualScreenSize_0x2a9058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a9058u;

    // 0x2a9058: 0x3c020036
    ctx->pc = 0x2a9058u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a905c: 0x8c43dee0
    ctx->pc = 0x2a905cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a9060: 0x8c620010
    ctx->pc = 0x2a9060u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a9064: 0x46006024
    ctx->pc = 0x2a9064u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[12]);
    // 0x2a9068: 0xe4400028
    ctx->pc = 0x2a9068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x2a906c: 0x8c620010
    ctx->pc = 0x2a906cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a9070: 0x46006824
    ctx->pc = 0x2a9070u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[13]);
    // 0x2a9074: 0xe440002c
    ctx->pc = 0x2a9074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x2a9078: 0x3e00008
    ctx->pc = 0x2A9078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A9080u;
}
