#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sftrn_ConnTrnBuf0
// Address: 0x19f200 - 0x19f20c
void sftrn_ConnTrnBuf0_0x19f200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sftrn_ConnTrnBuf0");


    ctx->pc = 0x19f200u;

    // 0x19f200: 0xc0382d
    ctx->pc = 0x19f200u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f204: 0x8067c90
    ctx->pc = 0x19F204u;
    ctx->pc = 0x19F208u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19F240u;
    sftrn_ConnTrnBuf_0x19f240(rdram, ctx, runtime); return;
    ctx->pc = 0x19F20Cu;
}
