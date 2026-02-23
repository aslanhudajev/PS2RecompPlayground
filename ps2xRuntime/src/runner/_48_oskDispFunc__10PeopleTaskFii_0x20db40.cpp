#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @48@oskDispFunc__10PeopleTaskFii
// Address: 0x20db40 - 0x20db48
void _48_oskDispFunc__10PeopleTaskFii_0x20db40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_48_oskDispFunc__10PeopleTaskFii");


    ctx->pc = 0x20db40u;

    // 0x20db40: 0x8083384
    ctx->pc = 0x20DB40u;
    ctx->pc = 0x20DB44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967248));
    ctx->pc = 0x20CE10u;
    oskDispFunc__10PeopleTaskFii_0x20ce10(rdram, ctx, runtime); return;
    ctx->pc = 0x20DB48u;
}
