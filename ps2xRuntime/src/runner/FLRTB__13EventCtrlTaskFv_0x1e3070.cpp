#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: FLRTB__13EventCtrlTaskFv
// Address: 0x1e3070 - 0x1e3090
void FLRTB__13EventCtrlTaskFv_0x1e3070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("FLRTB__13EventCtrlTaskFv");


    ctx->pc = 0x1e3070u;

    // 0x1e3070: 0x8c83000c
    ctx->pc = 0x1e3070u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3074: 0x8c630004
    ctx->pc = 0x1e3074u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e3078: 0xc4600000
    ctx->pc = 0x1e3078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e307c: 0xe7808bd8
    ctx->pc = 0x1e307cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294937560), bits); }
    // 0x1e3080: 0x8c83000c
    ctx->pc = 0x1e3080u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3084: 0x24630008
    ctx->pc = 0x1e3084u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e3088: 0x3e00008
    ctx->pc = 0x1E3088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E308Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3090u;
}
