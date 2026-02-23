#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpvp_ConsumePsc
// Address: 0x19a788 - 0x19a79c
void sfmpvp_ConsumePsc_0x19a788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpvp_ConsumePsc");


    ctx->pc = 0x19a788u;

    // 0x19a788: 0x24843d10
    ctx->pc = 0x19a788u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 15632));
    // 0x19a78c: 0x8c82000c
    ctx->pc = 0x19a78cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x19a790: 0x2442ffff
    ctx->pc = 0x19a790u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19a794: 0x3e00008
    ctx->pc = 0x19A794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A798u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19A79Cu;
}
