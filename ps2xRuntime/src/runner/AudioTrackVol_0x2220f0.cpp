#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioTrackVol
// Address: 0x2220f0 - 0x222118
void AudioTrackVol_0x2220f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2220f0u;

    // 0x2220f0: 0x27bdfff0
    ctx->pc = 0x2220f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2220f4: 0xffbf0000
    ctx->pc = 0x2220f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2220f8: 0x3c020032
    ctx->pc = 0x2220f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2220fc: 0x8c42fd64
    ctx->pc = 0x2220fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966628)));
    // 0x222100: 0xa22818
    ctx->pc = 0x222100u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x222104: 0xc088812
    ctx->pc = 0x222104u;
    SET_GPR_U32(ctx, 31, 0x22210Cu);
    ctx->pc = 0x222108u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 8));
    ctx->pc = 0x222048u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTrackVolSub_0x222048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22210Cu; }
    }
    if (ctx->pc != 0x22210Cu) { return; }
    ctx->pc = 0x22210Cu;
    // 0x22210c: 0xdfbf0000
    ctx->pc = 0x22210cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222110: 0x3e00008
    ctx->pc = 0x222110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222114u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x222118u;
}
