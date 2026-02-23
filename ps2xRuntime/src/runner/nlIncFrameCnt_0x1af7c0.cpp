#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlIncFrameCnt
// Address: 0x1af7c0 - 0x1af7d0
void nlIncFrameCnt_0x1af7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlIncFrameCnt");


    ctx->pc = 0x1af7c0u;

    // 0x1af7c0: 0x8f838a0c
    ctx->pc = 0x1af7c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937100)));
    // 0x1af7c4: 0x24630001
    ctx->pc = 0x1af7c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1af7c8: 0x3e00008
    ctx->pc = 0x1AF7C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF7CCu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937100), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF7D0u;
}
