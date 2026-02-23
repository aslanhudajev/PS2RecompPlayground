#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sftrn_BuildUsr
// Address: 0x19f1f0 - 0x19f1fc
void sftrn_BuildUsr_0x19f1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sftrn_BuildUsr");


    ctx->pc = 0x19f1f0u;

    // 0x19f1f0: 0x24050007
    ctx->pc = 0x19f1f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    // 0x19f1f4: 0x8067c9c
    ctx->pc = 0x19F1F4u;
    ctx->pc = 0x19F1F8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x19F270u;
    sftrn_ConnBufTrn_0x19f270(rdram, ctx, runtime); return;
    ctx->pc = 0x19F1FCu;
}
