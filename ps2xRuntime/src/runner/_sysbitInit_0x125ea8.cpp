#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sysbitInit
// Address: 0x125ea8 - 0x125edc
void _sysbitInit_0x125ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x125ea8u;

    // 0x125ea8: 0x80102d
    ctx->pc = 0x125ea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125eac: 0xa0402d
    ctx->pc = 0x125eacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125eb0: 0xc71821
    ctx->pc = 0x125eb0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x125eb4: 0xac48000c
    ctx->pc = 0x125eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
    // 0x125eb8: 0xac430024
    ctx->pc = 0x125eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x125ebc: 0xac470028
    ctx->pc = 0x125ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 7));
    // 0x125ec0: 0x282d
    ctx->pc = 0x125ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125ec4: 0xac480008
    ctx->pc = 0x125ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
    // 0x125ec8: 0xfc400000
    ctx->pc = 0x125ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x125ecc: 0xac400010
    ctx->pc = 0x125eccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x125ed0: 0xfc400018
    ctx->pc = 0x125ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 0));
    // 0x125ed4: 0x80497c0
    ctx->pc = 0x125ED4u;
    ctx->pc = 0x125ED8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 6));
    ctx->pc = 0x125F00u;
    _sysbitFlush_0x125f00(rdram, ctx, runtime); return;
    ctx->pc = 0x125EDCu;
}
