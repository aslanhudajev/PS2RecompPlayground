#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSFD_TermSupply
// Address: 0x18f638 - 0x18f640
void MWSFD_TermSupply_0x18f638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSFD_TermSupply");


    ctx->pc = 0x18f638u;

    // 0x18f638: 0x8066f6e
    ctx->pc = 0x18F638u;
    ctx->pc = 0x18F63Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    ctx->pc = 0x19BDB8u;
    SFD_TermSupply_0x19bdb8(rdram, ctx, runtime); return;
    ctx->pc = 0x18F640u;
}
