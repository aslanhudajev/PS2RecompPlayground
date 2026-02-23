#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PS2RNA_GetTime
// Address: 0x17b9b8 - 0x17b9c8
void PS2RNA_GetTime_0x17b9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PS2RNA_GetTime");


    ctx->pc = 0x17b9b8u;

    // 0x17b9b8: 0xaca00000
    ctx->pc = 0x17b9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x17b9bc: 0x3402bb80
    ctx->pc = 0x17b9bcu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 48000));
    // 0x17b9c0: 0x3e00008
    ctx->pc = 0x17B9C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B9C4u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17B9C8u;
}
