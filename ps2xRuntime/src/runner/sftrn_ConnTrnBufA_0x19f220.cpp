#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sftrn_ConnTrnBufA
// Address: 0x19f220 - 0x19f22c
void sftrn_ConnTrnBufA_0x19f220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sftrn_ConnTrnBufA");


    ctx->pc = 0x19f220u;

    // 0x19f220: 0xc0382d
    ctx->pc = 0x19f220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f224: 0x8067c90
    ctx->pc = 0x19F224u;
    ctx->pc = 0x19F228u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19F240u;
    sftrn_ConnTrnBuf_0x19f240(rdram, ctx, runtime); return;
    ctx->pc = 0x19F22Cu;
}
