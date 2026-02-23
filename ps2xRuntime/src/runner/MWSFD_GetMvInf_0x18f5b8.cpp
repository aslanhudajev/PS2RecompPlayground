#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSFD_GetMvInf
// Address: 0x18f5b8 - 0x18f5c0
void MWSFD_GetMvInf_0x18f5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSFD_GetMvInf");


    ctx->pc = 0x18f5b8u;

    // 0x18f5b8: 0x80674c6
    ctx->pc = 0x18F5B8u;
    ctx->pc = 0x18F5BCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    ctx->pc = 0x19D318u;
    SFD_GetMvInf_0x19d318(rdram, ctx, runtime); return;
    ctx->pc = 0x18F5C0u;
}
