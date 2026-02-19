#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioStopAll
// Address: 0x25c430 - 0x25c454
void AudioStopAll_0x25c430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25c430u;

    // 0x25c430: 0x27bdfff0
    ctx->pc = 0x25c430u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25c434: 0xffbf0000
    ctx->pc = 0x25c434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25c438: 0xc088ac4
    ctx->pc = 0x25C438u;
    SET_GPR_U32(ctx, 31, 0x25C440u);
    ctx->pc = 0x222B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        audio_stop_all_0x222b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25C440u; }
    }
    if (ctx->pc != 0x25C440u) { return; }
    ctx->pc = 0x25C440u;
    // 0x25c440: 0x3c020034
    ctx->pc = 0x25c440u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25c444: 0xac40d328
    ctx->pc = 0x25c444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955816), GPR_U32(ctx, 0));
    // 0x25c448: 0xdfbf0000
    ctx->pc = 0x25c448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c44c: 0x3e00008
    ctx->pc = 0x25C44Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C450u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25C454u;
}
