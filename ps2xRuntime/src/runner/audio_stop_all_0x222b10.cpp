#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: audio_stop_all
// Address: 0x222b10 - 0x222b58
void audio_stop_all_0x222b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x222b10u;

    // 0x222b10: 0x27bdffe0
    ctx->pc = 0x222b10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x222b14: 0xffbf0010
    ctx->pc = 0x222b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x222b18: 0xffb00000
    ctx->pc = 0x222b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x222b1c: 0x3c100032
    ctx->pc = 0x222b1cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x222b20: 0x24020001
    ctx->pc = 0x222b20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x222b24: 0xc088f86
    ctx->pc = 0x222B24u;
    SET_GPR_U32(ctx, 31, 0x222B2Cu);
    ctx->pc = 0x222B28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294966832), GPR_U32(ctx, 2));
    ctx->pc = 0x223E18u;
    {
        const uint32_t __entryPc = ctx->pc;
        aud_stop_all_sounds_0x223e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222B2Cu; }
    }
    if (ctx->pc != 0x222B2Cu) { return; }
    ctx->pc = 0x222B2Cu;
    // 0x222b2c: 0xc088bc0
    ctx->pc = 0x222B2Cu;
    SET_GPR_U32(ctx, 31, 0x222B34u);
    ctx->pc = 0x222F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioQueEmpty_0x222f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222B34u; }
    }
    if (ctx->pc != 0x222B34u) { return; }
    ctx->pc = 0x222B34u;
    // 0x222b34: 0xc0886ae
    ctx->pc = 0x222B34u;
    SET_GPR_U32(ctx, 31, 0x222B3Cu);
    ctx->pc = 0x222B38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8191));
    ctx->pc = 0x221AB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTrackKill_0x221ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222B3Cu; }
    }
    if (ctx->pc != 0x222B3Cu) { return; }
    ctx->pc = 0x222B3Cu;
    // 0x222b3c: 0xc0889f2
    ctx->pc = 0x222B3Cu;
    SET_GPR_U32(ctx, 31, 0x222B44u);
    ctx->pc = 0x2227C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioTrackInit_0x2227c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x222B44u; }
    }
    if (ctx->pc != 0x222B44u) { return; }
    ctx->pc = 0x222B44u;
    // 0x222b44: 0xae00fe30
    ctx->pc = 0x222b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294966832), GPR_U32(ctx, 0));
    // 0x222b48: 0xdfbf0010
    ctx->pc = 0x222b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222b4c: 0xdfb00000
    ctx->pc = 0x222b4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x222b50: 0x3e00008
    ctx->pc = 0x222B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222B54u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x222B58u;
}
