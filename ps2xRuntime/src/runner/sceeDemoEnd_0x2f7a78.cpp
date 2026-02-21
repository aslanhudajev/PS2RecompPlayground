#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// sceeDemoEnd: PS2 SDK demo-timer check.
// Returns 0 = demo still running, non-zero = demo expired.
// We always return 0 so game_main keeps running.
void sceeDemoEnd_0x2f7a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    (void)rdram;
    (void)runtime;
    SET_GPR_U32(ctx, 2, 0u);
    ctx->pc = GPR_U32(ctx, 31);
}
