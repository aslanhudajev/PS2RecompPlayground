#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioTrackMusicVol
// Address: 0x222118 - 0x222140
void AudioTrackMusicVol_0x222118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x222118u;

    // 0x222118: 0x27bdfff0
    ctx->pc = 0x222118u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22211c: 0xffbf0000
    ctx->pc = 0x22211cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x222120: 0x3c020032
    ctx->pc = 0x222120u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x222124: 0x8c42fd68
    ctx->pc = 0x222124u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966632)));
    // 0x222128: 0xa22818
    ctx->pc = 0x222128u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22212c: 0xc088812
    ctx->pc = 0x22212Cu;
    SET_GPR_U32(ctx, 31, 0x222134u);
    ctx->pc = 0x222130u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 8));
    ctx->pc = 0x222048u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTrackVolSub_0x222048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222134u; }
    }
    if (ctx->pc != 0x222134u) { return; }
    ctx->pc = 0x222134u;
    // 0x222134: 0xdfbf0000
    ctx->pc = 0x222134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222138: 0x3e00008
    ctx->pc = 0x222138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22213Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x222140u;
}
