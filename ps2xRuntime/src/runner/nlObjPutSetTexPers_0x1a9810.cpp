#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlObjPutSetTexPers
// Address: 0x1a9810 - 0x1a982c
void nlObjPutSetTexPers_0x1a9810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlObjPutSetTexPers");


    ctx->pc = 0x1a9810u;

    // 0x1a9810: 0x3c010030
    ctx->pc = 0x1a9810u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a9814: 0x8c243968
    ctx->pc = 0x1a9814u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 14696)));
    // 0x1a9818: 0x2403fffd
    ctx->pc = 0x1a9818u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1a981c: 0x831824
    ctx->pc = 0x1a981cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a9820: 0x3c010030
    ctx->pc = 0x1a9820u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a9824: 0x3e00008
    ctx->pc = 0x1A9824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9828u;
        WRITE32(ADD32(GPR_U32(ctx, 1), 14696), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A982Cu;
}
