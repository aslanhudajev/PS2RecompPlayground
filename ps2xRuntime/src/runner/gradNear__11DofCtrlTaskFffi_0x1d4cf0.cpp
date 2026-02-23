#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: gradNear__11DofCtrlTaskFffi
// Address: 0x1d4cf0 - 0x1d4d24
void gradNear__11DofCtrlTaskFffi_0x1d4cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("gradNear__11DofCtrlTaskFffi");


    ctx->pc = 0x1d4cf0u;

    // 0x1d4cf0: 0x44850000
    ctx->pc = 0x1d4cf0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 5);
    // 0x1d4cf4: 0xc4820008
    ctx->pc = 0x1d4cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d4cf8: 0x46800060
    ctx->pc = 0x1d4cf8u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x1d4cfc: 0x46026001
    ctx->pc = 0x1d4cfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x1d4d00: 0x46010003
    ctx->pc = 0x1d4d00u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1d4d04: 0xe4800020
    ctx->pc = 0x1d4d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1d4d08: 0xc480000c
    ctx->pc = 0x1d4d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4d0c: 0x46006801
    ctx->pc = 0x1d4d0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x1d4d10: 0x46010003
    ctx->pc = 0x1d4d10u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1d4d14: 0x0
    ctx->pc = 0x1d4d14u;
    // NOP
    // 0x1d4d18: 0xe4800024
    ctx->pc = 0x1d4d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1d4d1c: 0x3e00008
    ctx->pc = 0x1D4D1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4D20u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D4D24u;
}
