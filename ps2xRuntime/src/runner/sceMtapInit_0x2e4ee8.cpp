#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// sceMtapInit (libmtap.c): stub; no IOP. Original binds RPCs then returns (version==3).
// We return true (1) so the game continues without exit(-1).
void sceMtapInit_0x2e4ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    (void)rdram;
    (void)runtime;
    SET_GPR_U32(ctx, 2, 1u);
    ctx->pc = GPR_U32(ctx, 31);
}
