#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfply_TrExecServer
// Address: 0x19ae10 - 0x19ae18
void sfply_TrExecServer_0x19ae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfply_TrExecServer");


    ctx->pc = 0x19ae10u;

    // 0x19ae10: 0x8067ca6
    ctx->pc = 0x19AE10u;
    ctx->pc = 0x19AE14u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x19F298u;
    SFTRN_CallTrSetup_0x19f298(rdram, ctx, runtime); return;
    ctx->pc = 0x19AE18u;
}
