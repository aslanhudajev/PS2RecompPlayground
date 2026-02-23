#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPutSetNoTexPers
// Address: 0x1a97f0 - 0x1a9808
void nlObjPutSetNoTexPers_0x1a97f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPutSetNoTexPers");


    ctx->pc = 0x1a97f0u;

    // 0x1a97f0: 0x3c010030
    ctx->pc = 0x1a97f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a97f4: 0x8c233968
    ctx->pc = 0x1a97f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 1), 14696)));
    // 0x1a97f8: 0x34630002
    ctx->pc = 0x1a97f8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 2));
    // 0x1a97fc: 0x3c010030
    ctx->pc = 0x1a97fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a9800: 0x3e00008
    ctx->pc = 0x1A9800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9804u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 14696), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A9808u;
}
