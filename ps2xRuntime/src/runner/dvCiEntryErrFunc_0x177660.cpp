#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dvCiEntryErrFunc
// Address: 0x177660 - 0x177674
void dvCiEntryErrFunc_0x177660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dvCiEntryErrFunc");


    ctx->pc = 0x177660u;

    // 0x177660: 0x3c020024
    ctx->pc = 0x177660u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x177664: 0x3c030024
    ctx->pc = 0x177664u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x177668: 0xac449364
    ctx->pc = 0x177668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294939492), GPR_U32(ctx, 4));
    // 0x17766c: 0x3e00008
    ctx->pc = 0x17766Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177670u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294939496), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x177674u;
}
