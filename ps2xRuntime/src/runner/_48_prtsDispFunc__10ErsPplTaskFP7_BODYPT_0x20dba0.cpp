#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @48@prtsDispFunc__10ErsPplTaskFP7_BODYPT
// Address: 0x20dba0 - 0x20dba8
void _48_prtsDispFunc__10ErsPplTaskFP7_BODYPT_0x20dba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_48_prtsDispFunc__10ErsPplTaskFP7_BODYPT");


    ctx->pc = 0x20dba0u;

    // 0x20dba0: 0x80835c4
    ctx->pc = 0x20DBA0u;
    ctx->pc = 0x20DBA4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967248));
    ctx->pc = 0x20D710u;
    prtsDispFunc__10ErsPplTaskFP7_BODYPT_0x20d710(rdram, ctx, runtime); return;
    ctx->pc = 0x20DBA8u;
}
