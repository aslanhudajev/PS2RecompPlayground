#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @48@colliFunc__10PeopleTaskFv
// Address: 0x20db50 - 0x20db58
void _48_colliFunc__10PeopleTaskFv_0x20db50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_48_colliFunc__10PeopleTaskFv");


    ctx->pc = 0x20db50u;

    // 0x20db50: 0x8083390
    ctx->pc = 0x20DB50u;
    ctx->pc = 0x20DB54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967248));
    ctx->pc = 0x20CE40u;
    colliFunc__10PeopleTaskFv_0x20ce40(rdram, ctx, runtime); return;
    ctx->pc = 0x20DB58u;
}
