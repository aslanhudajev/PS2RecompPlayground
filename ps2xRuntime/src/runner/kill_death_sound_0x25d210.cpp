#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: kill_death_sound
// Address: 0x25d210 - 0x25d218
void kill_death_sound_0x25d210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25d210u;

    // 0x25d210: 0x808870e
    ctx->pc = 0x25D210u;
    ctx->pc = 0x25D214u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 102));
    ctx->pc = 0x221C38u;
    AudioSoundKill_0x221c38(rdram, ctx, runtime); return;
    ctx->pc = 0x25D218u;
}
