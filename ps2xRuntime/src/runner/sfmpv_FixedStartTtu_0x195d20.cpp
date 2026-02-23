#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_FixedStartTtu
// Address: 0x195d20 - 0x195d40
void sfmpv_FixedStartTtu_0x195d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_FixedStartTtu");


    ctx->pc = 0x195d20u;

    // 0x195d20: 0x3c027fff
    ctx->pc = 0x195d20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x195d24: 0x8c830b94
    ctx->pc = 0x195d24u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 2964)));
    // 0x195d28: 0x3442ffff
    ctx->pc = 0x195d28u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x195d2c: 0x10620002
    ctx->pc = 0x195D2Cu;
    {
        const bool branch_taken_0x195d2c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x195D30u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x195d2c) {
            ctx->pc = 0x195D38u;
            goto label_195d38;
        }
    }
    ctx->pc = 0x195D34u;
    // 0x195d34: 0xac820b74
    ctx->pc = 0x195d34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2932), GPR_U32(ctx, 2));
label_195d38:
    // 0x195d38: 0x3e00008
    ctx->pc = 0x195D38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195D38u: goto label_195d38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x195D40u;
}
