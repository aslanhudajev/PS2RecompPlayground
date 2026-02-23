#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @7920@64@__dt__10PeopleTaskFv
// Address: 0x20db70 - 0x20db80
void _7920_64___dt__10PeopleTaskFv_0x20db70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_7920_64___dt__10PeopleTaskFv");


    ctx->pc = 0x20db70u;

    // 0x20db70: 0x8c990040
    ctx->pc = 0x20db70u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x20db74: 0x2484e110
    ctx->pc = 0x20db74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959376));
    // 0x20db78: 0x8083684
    ctx->pc = 0x20DB78u;
    ctx->pc = 0x20DB7Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    ctx->pc = 0x20DA10u;
    ps2___dt__10PeopleTaskFv_0x20da10(rdram, ctx, runtime); return;
    ctx->pc = 0x20DB80u;
}
