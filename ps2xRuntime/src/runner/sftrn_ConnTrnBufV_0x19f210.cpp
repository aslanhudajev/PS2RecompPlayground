#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sftrn_ConnTrnBufV
// Address: 0x19f210 - 0x19f21c
void sftrn_ConnTrnBufV_0x19f210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sftrn_ConnTrnBufV");


    ctx->pc = 0x19f210u;

    // 0x19f210: 0xc0382d
    ctx->pc = 0x19f210u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f214: 0x8067c90
    ctx->pc = 0x19F214u;
    ctx->pc = 0x19F218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19F240u;
    sftrn_ConnTrnBuf_0x19f240(rdram, ctx, runtime); return;
    ctx->pc = 0x19F21Cu;
}
