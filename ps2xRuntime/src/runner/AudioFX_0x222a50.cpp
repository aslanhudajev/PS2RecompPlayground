#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioFX
// Address: 0x222a50 - 0x222a88
void AudioFX_0x222a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x222a50u;

    // 0x222a50: 0x27bdfff0
    ctx->pc = 0x222a50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x222a54: 0xffbf0000
    ctx->pc = 0x222a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x222a58: 0x80102d
    ctx->pc = 0x222a58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222a5c: 0xa0182d
    ctx->pc = 0x222a5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222a60: 0xc0482d
    ctx->pc = 0x222a60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222a64: 0x2404ffff
    ctx->pc = 0x222a64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x222a68: 0x40282d
    ctx->pc = 0x222a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222a6c: 0x60302d
    ctx->pc = 0x222a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222a70: 0x382d
    ctx->pc = 0x222a70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222a74: 0xc088958
    ctx->pc = 0x222A74u;
    SET_GPR_U32(ctx, 31, 0x222A7Cu);
    ctx->pc = 0x222A78u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 127));
    ctx->pc = 0x222560u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTrack4_0x222560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222A7Cu; }
    }
    if (ctx->pc != 0x222A7Cu) { return; }
    ctx->pc = 0x222A7Cu;
    // 0x222a7c: 0xdfbf0000
    ctx->pc = 0x222a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222a80: 0x3e00008
    ctx->pc = 0x222A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222A84u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x222A88u;
}
