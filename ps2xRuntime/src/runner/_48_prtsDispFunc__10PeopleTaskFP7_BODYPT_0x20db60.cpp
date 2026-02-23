#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @48@prtsDispFunc__10PeopleTaskFP7_BODYPT
// Address: 0x20db60 - 0x20db68
void _48_prtsDispFunc__10PeopleTaskFP7_BODYPT_0x20db60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_48_prtsDispFunc__10PeopleTaskFP7_BODYPT");


    ctx->pc = 0x20db60u;

    // 0x20db60: 0x80831f0
    ctx->pc = 0x20DB60u;
    ctx->pc = 0x20DB64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967248));
    ctx->pc = 0x20C7C0u;
    prtsDispFunc__10PeopleTaskFP7_BODYPT_0x20c7c0(rdram, ctx, runtime); return;
    ctx->pc = 0x20DB68u;
}
