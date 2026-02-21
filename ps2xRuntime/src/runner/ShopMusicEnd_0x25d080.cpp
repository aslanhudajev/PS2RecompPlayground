#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ShopMusicEnd
// Address: 0x25d080 - 0x25d088
void ShopMusicEnd_0x25d080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25d080u;

    // 0x25d080: 0x8088744
    ctx->pc = 0x25D080u;
    ctx->pc = 0x25D084u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x221D10u;
    AudioPriKill_0x221d10(rdram, ctx, runtime); return;
    ctx->pc = 0x25D088u;
}
