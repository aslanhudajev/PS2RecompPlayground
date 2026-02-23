#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlVblankInFunction
// Address: 0x1af7d0 - 0x1af7e0
void nlVblankInFunction_0x1af7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlVblankInFunction");


    ctx->pc = 0x1af7d0u;

    // 0x1af7d0: 0x8f838ae0
    ctx->pc = 0x1af7d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937312)));
    // 0x1af7d4: 0x24630001
    ctx->pc = 0x1af7d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1af7d8: 0x3e00008
    ctx->pc = 0x1AF7D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF7DCu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937312), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF7E0u;
}
