#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: set_stream_playing
// Address: 0x224198 - 0x2241d0
void set_stream_playing_0x224198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x224198u;

    // 0x224198: 0x27bdffe0
    ctx->pc = 0x224198u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22419c: 0xffbf0010
    ctx->pc = 0x22419cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2241a0: 0xffb00000
    ctx->pc = 0x2241a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2241a4: 0x80802d
    ctx->pc = 0x2241a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2241a8: 0xc0c14c6
    ctx->pc = 0x2241A8u;
    SET_GPR_U32(ctx, 31, 0x2241B0u);
    ctx->pc = 0x2241ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 31));
    ctx->pc = 0x305318u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifGetSreg_0x305318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2241B0u; }
    }
    if (ctx->pc != 0x2241B0u) { return; }
    ctx->pc = 0x2241B0u;
    // 0x2241b0: 0x30420002
    ctx->pc = 0x2241b0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x2241b4: 0x10802b
    ctx->pc = 0x2241b4u;
    SET_GPR_U32(ctx, 16, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x2241b8: 0x2404001f
    ctx->pc = 0x2241b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 31));
    // 0x2241bc: 0x2022825
    ctx->pc = 0x2241bcu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2241c0: 0xdfbf0010
    ctx->pc = 0x2241c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2241c4: 0xdfb00000
    ctx->pc = 0x2241c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2241c8: 0x80c14cc
    ctx->pc = 0x2241C8u;
    ctx->pc = 0x2241CCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x305330u;
    sceSifSetSreg_0x305330(rdram, ctx, runtime); return;
    ctx->pc = 0x2241D0u;
}
