#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: chkEntryStat__15OverlayMgrClassFi
// Address: 0x202190 - 0x20219c
void chkEntryStat__15OverlayMgrClassFi_0x202190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("chkEntryStat__15OverlayMgrClassFi");


    ctx->pc = 0x202190u;

    // 0x202190: 0x851021
    ctx->pc = 0x202190u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x202194: 0x3e00008
    ctx->pc = 0x202194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202198u;
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20219Cu;
}
