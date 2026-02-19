#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _sysbitInit
// Address: 0x2f4588 - 0x2f45bc
void _sysbitInit_0x2f4588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f4588u;

    // 0x2f4588: 0x80102d
    ctx->pc = 0x2f4588u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f458c: 0xa0402d
    ctx->pc = 0x2f458cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4590: 0xc71821
    ctx->pc = 0x2f4590u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2f4594: 0xac48000c
    ctx->pc = 0x2f4594u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
    // 0x2f4598: 0xac430024
    ctx->pc = 0x2f4598u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x2f459c: 0xac470028
    ctx->pc = 0x2f459cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 7));
    // 0x2f45a0: 0x282d
    ctx->pc = 0x2f45a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f45a4: 0xac480008
    ctx->pc = 0x2f45a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
    // 0x2f45a8: 0xfc400000
    ctx->pc = 0x2f45a8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x2f45ac: 0xac400010
    ctx->pc = 0x2f45acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x2f45b0: 0xfc400018
    ctx->pc = 0x2f45b0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 0));
    // 0x2f45b4: 0x80bd178
    ctx->pc = 0x2F45B4u;
    ctx->pc = 0x2F45B8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 6));
    ctx->pc = 0x2F45E0u;
    _sysbitFlush_0x2f45e0(rdram, ctx, runtime); return;
    ctx->pc = 0x2F45BCu;
}
