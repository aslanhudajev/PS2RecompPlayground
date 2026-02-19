#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: KillItemSound
// Address: 0x25d4e0 - 0x25d4e8
void KillItemSound_0x25d4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25d4e0u;

    // 0x25d4e0: 0x80886ae
    ctx->pc = 0x25D4E0u;
    ctx->pc = 0x221AB8u;
    AudioTrackKill_0x221ab8(rdram, ctx, runtime); return;
    ctx->pc = 0x25D4E8u;
}
