#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayStreamDone
// Address: 0x220fd0 - 0x220ff0
void PlayStreamDone_0x220fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x220fd0u;

    // 0x220fd0: 0x27bdfff0
    ctx->pc = 0x220fd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x220fd4: 0xffbf0000
    ctx->pc = 0x220fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x220fd8: 0xc089066
    ctx->pc = 0x220FD8u;
    SET_GPR_U32(ctx, 31, 0x220FE0u);
    ctx->pc = 0x220FDCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x224198u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_stream_playing_0x224198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220FE0u; }
    }
    if (ctx->pc != 0x220FE0u) { return; }
    ctx->pc = 0x220FE0u;
    // 0x220fe0: 0x24040001
    ctx->pc = 0x220fe0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x220fe4: 0xdfbf0000
    ctx->pc = 0x220fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220fe8: 0x8089074
    ctx->pc = 0x220FE8u;
    ctx->pc = 0x220FECu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2241D0u;
    set_stream_looping_0x2241d0(rdram, ctx, runtime); return;
    ctx->pc = 0x220FF0u;
}
