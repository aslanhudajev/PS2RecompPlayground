#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SoundCallBackFunction
// Address: 0x10c018 - 0x10c028
void SoundCallBackFunction_0x10c018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10c018u;

    // 0x10c018: 0x8f828390
    ctx->pc = 0x10c018u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
    // 0x10c01c: 0x24420001
    ctx->pc = 0x10c01cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x10c020: 0x3e00008
    ctx->pc = 0x10C020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C024u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935440), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C028u;
}
