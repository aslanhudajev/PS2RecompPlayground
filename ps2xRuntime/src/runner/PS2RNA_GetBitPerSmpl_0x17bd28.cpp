#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PS2RNA_GetBitPerSmpl
// Address: 0x17bd28 - 0x17bd30
void PS2RNA_GetBitPerSmpl_0x17bd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PS2RNA_GetBitPerSmpl");


    ctx->pc = 0x17bd28u;

    // 0x17bd28: 0x3e00008
    ctx->pc = 0x17BD28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BD2Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17BD30u;
}
