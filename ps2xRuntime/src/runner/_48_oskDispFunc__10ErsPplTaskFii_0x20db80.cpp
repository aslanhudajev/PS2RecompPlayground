#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: @48@oskDispFunc__10ErsPplTaskFii
// Address: 0x20db80 - 0x20db88
void _48_oskDispFunc__10ErsPplTaskFii_0x20db80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_48_oskDispFunc__10ErsPplTaskFii");


    ctx->pc = 0x20db80u;

    // 0x20db80: 0x80835f0
    ctx->pc = 0x20DB80u;
    ctx->pc = 0x20DB84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967248));
    ctx->pc = 0x20D7C0u;
    oskDispFunc__10ErsPplTaskFii_0x20d7c0(rdram, ctx, runtime); return;
    ctx->pc = 0x20DB88u;
}
