#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSFD_GetPlyInf
// Address: 0x18f5b0 - 0x18f5b8
void MWSFD_GetPlyInf_0x18f5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSFD_GetPlyInf");


    ctx->pc = 0x18f5b0u;

    // 0x18f5b0: 0x80674fa
    ctx->pc = 0x18F5B0u;
    ctx->pc = 0x18F5B4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    ctx->pc = 0x19D3E8u;
    SFD_GetPlyInf_0x19d3e8(rdram, ctx, runtime); return;
    ctx->pc = 0x18F5B8u;
}
