#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @48@colliFunc__10ErsPplTaskFv
// Address: 0x20db90 - 0x20db98
void _48_colliFunc__10ErsPplTaskFv_0x20db90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_48_colliFunc__10ErsPplTaskFv");


    ctx->pc = 0x20db90u;

    // 0x20db90: 0x8083610
    ctx->pc = 0x20DB90u;
    ctx->pc = 0x20DB94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967248));
    ctx->pc = 0x20D840u;
    colliFunc__10ErsPplTaskFv_0x20d840(rdram, ctx, runtime); return;
    ctx->pc = 0x20DB98u;
}
