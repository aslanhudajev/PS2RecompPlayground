#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#include <cstdio>

// Function: playmovie  (STUBBED -- no MPEG decoder available)
// Address: 0x118b60 - 0x118c14
// Stop audio so menu BGM doesn't overlap intro BGM when we skip the movie
void playmovie_0x118b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    std::fprintf(stderr, "[playmovie] STUB -- skipping movie playback (no MPEG decoder)\n");
    if (runtime)
        runtime->audioBackend().stopAll();
    SET_GPR_S32(ctx, 2, 0);
    ctx->pc = GPR_U32(ctx, 31);
}
