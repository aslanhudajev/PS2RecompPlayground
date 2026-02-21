#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// sceMtapGetConnection (libmtap.c): stub; no IOP RPC. sif_buffer = a0, result = 1, return 1.
void sceMtapGetConnection_0x2e5248(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
    (void)runtime;
    uint32_t param_1 = GPR_U32(ctx, 4);
    WRITE32(0x3E0780u, param_1);
    WRITE32(0x3E0784u, 1u);
    SET_GPR_U32(ctx, 2, 1u);
    ctx->pc = GPR_U32(ctx, 31);
}
