#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: gradFar__11DofCtrlTaskFffi
// Address: 0x1d4d30 - 0x1d4d64
void gradFar__11DofCtrlTaskFffi_0x1d4d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("gradFar__11DofCtrlTaskFffi");


    ctx->pc = 0x1d4d30u;

    // 0x1d4d30: 0x44850000
    ctx->pc = 0x1d4d30u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
    // 0x1d4d34: 0xc4820010
    ctx->pc = 0x1d4d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d4d38: 0x46800060
    ctx->pc = 0x1d4d38u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1d4d3c: 0x46026001
    ctx->pc = 0x1d4d3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x1d4d40: 0x46010003
    ctx->pc = 0x1d4d40u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1d4d44: 0xe4800028
    ctx->pc = 0x1d4d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1d4d48: 0xc4800014
    ctx->pc = 0x1d4d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4d4c: 0x46006801
    ctx->pc = 0x1d4d4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x1d4d50: 0x46010003
    ctx->pc = 0x1d4d50u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1d4d54: 0x0
    ctx->pc = 0x1d4d54u;
    // NOP
    // 0x1d4d58: 0xe480002c
    ctx->pc = 0x1d4d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x1d4d5c: 0x3e00008
    ctx->pc = 0x1D4D5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4D60u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D4D64u;
}
