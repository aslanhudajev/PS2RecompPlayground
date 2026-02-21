#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayStreamComplete
// Address: 0x220fa0 - 0x220fd0
void PlayStreamComplete_0x220fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x220fa0u;

    // 0x220fa0: 0x27bdfff0
    ctx->pc = 0x220fa0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x220fa4: 0xffbf0000
    ctx->pc = 0x220fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x220fa8: 0x3c030032
    ctx->pc = 0x220fa8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x220fac: 0x8c62fd9c
    ctx->pc = 0x220facu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294966684)));
    // 0x220fb0: 0x24420001
    ctx->pc = 0x220fb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x220fb4: 0xac62fd9c
    ctx->pc = 0x220fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966684), GPR_U32(ctx, 2));
    // 0x220fb8: 0xc089066
    ctx->pc = 0x220FB8u;
    SET_GPR_U32(ctx, 31, 0x220FC0u);
    ctx->pc = 0x220FBCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x224198u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_stream_playing_0x224198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220FC0u; }
    }
    if (ctx->pc != 0x220FC0u) { return; }
    ctx->pc = 0x220FC0u;
    // 0x220fc0: 0x202d
    ctx->pc = 0x220fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220fc4: 0xdfbf0000
    ctx->pc = 0x220fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220fc8: 0x8089074
    ctx->pc = 0x220FC8u;
    ctx->pc = 0x220FCCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2241D0u;
    set_stream_looping_0x2241d0(rdram, ctx, runtime); return;
    ctx->pc = 0x220FD0u;
}
