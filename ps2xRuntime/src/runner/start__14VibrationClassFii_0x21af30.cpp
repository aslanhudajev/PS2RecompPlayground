#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: start__14VibrationClassFii
// Address: 0x21af30 - 0x21af48
void start__14VibrationClassFii_0x21af30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("start__14VibrationClassFii");


    ctx->pc = 0x21af30u;

    // 0x21af30: 0x70003e28
    ctx->pc = 0x21af30u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21af34: 0x24030001
    ctx->pc = 0x21af34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21af38: 0x65380b
    ctx->pc = 0x21af38u;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 3));
    // 0x21af3c: 0xac870000
    ctx->pc = 0x21af3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x21af40: 0x3e00008
    ctx->pc = 0x21AF40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21AF44u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21AF48u;
}
