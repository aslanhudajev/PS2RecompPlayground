#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwSfdStartFname
// Address: 0x18cb38 - 0x18cb44
void mwSfdStartFname_0x18cb38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwSfdStartFname");


    ctx->pc = 0x18cb38u;

    // 0x18cb38: 0x302d
    ctx->pc = 0x18cb38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cb3c: 0x80632d2
    ctx->pc = 0x18CB3Cu;
    ctx->pc = 0x18CB40u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x18CB48u;
    mwSfdStartFnameSub_0x18cb48(rdram, ctx, runtime); return;
    ctx->pc = 0x18CB44u;
}
