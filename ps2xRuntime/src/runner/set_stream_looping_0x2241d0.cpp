#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: set_stream_looping
// Address: 0x2241d0 - 0x224208
void set_stream_looping_0x2241d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2241d0u;

    // 0x2241d0: 0x27bdffe0
    ctx->pc = 0x2241d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2241d4: 0xffbf0010
    ctx->pc = 0x2241d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2241d8: 0xffb00000
    ctx->pc = 0x2241d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2241dc: 0x80802d
    ctx->pc = 0x2241dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2241e0: 0xc0c14c6
    ctx->pc = 0x2241E0u;
    SET_GPR_U32(ctx, 31, 0x2241E8u);
    ctx->pc = 0x2241E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 31));
    ctx->pc = 0x305318u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifGetSreg_0x305318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2241E8u; }
    }
    if (ctx->pc != 0x2241E8u) { return; }
    ctx->pc = 0x2241E8u;
    // 0x2241e8: 0x30420001
    ctx->pc = 0x2241e8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2241ec: 0x34450002
    ctx->pc = 0x2241ecu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 2));
    // 0x2241f0: 0x2404001f
    ctx->pc = 0x2241f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 31));
    // 0x2241f4: 0x50280a
    ctx->pc = 0x2241f4u;
    if (GPR_U32(ctx, 16) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
    // 0x2241f8: 0xdfbf0010
    ctx->pc = 0x2241f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2241fc: 0xdfb00000
    ctx->pc = 0x2241fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224200: 0x80c14cc
    ctx->pc = 0x224200u;
    ctx->pc = 0x224204u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x305330u;
    sceSifSetSreg_0x305330(rdram, ctx, runtime); return;
    ctx->pc = 0x224208u;
}
