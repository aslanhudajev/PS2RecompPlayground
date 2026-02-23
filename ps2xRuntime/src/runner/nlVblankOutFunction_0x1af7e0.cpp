#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlVblankOutFunction
// Address: 0x1af7e0 - 0x1af7f0
void nlVblankOutFunction_0x1af7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlVblankOutFunction");


    ctx->pc = 0x1af7e0u;

    // 0x1af7e0: 0x8f838ad8
    ctx->pc = 0x1af7e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937304)));
    // 0x1af7e4: 0x24630001
    ctx->pc = 0x1af7e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1af7e8: 0x3e00008
    ctx->pc = 0x1AF7E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF7ECu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937304), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF7F0u;
}
