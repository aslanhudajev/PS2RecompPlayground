#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AtreeKillPsys
// Address: 0x2124f8 - 0x212500
void AtreeKillPsys_0x2124f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2124f8u;

    // 0x2124f8: 0x8084922
    ctx->pc = 0x2124F8u;
    ctx->pc = 0x2124FCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->pc = 0x212488u;
    AtreeRemovePsysSub_0x212488(rdram, ctx, runtime); return;
    ctx->pc = 0x212500u;
}
