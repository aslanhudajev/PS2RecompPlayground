#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioDeathHurt
// Address: 0x25d260 - 0x25d2a8
void AudioDeathHurt_0x25d260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25d260u;

    // 0x25d260: 0x27bdffe0
    ctx->pc = 0x25d260u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25d264: 0xffbf0010
    ctx->pc = 0x25d264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25d268: 0xffb00000
    ctx->pc = 0x25d268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25d26c: 0x80802d
    ctx->pc = 0x25d26cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d270: 0xc08878c
    ctx->pc = 0x25D270u;
    SET_GPR_U32(ctx, 31, 0x25D278u);
    ctx->pc = 0x25D274u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 101));
    ctx->pc = 0x221E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSoundExists_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25D278u; }
    }
    if (ctx->pc != 0x25D278u) { return; }
    ctx->pc = 0x25D278u;
    // 0x25d278: 0x14400008
    ctx->pc = 0x25D278u;
    {
        const bool branch_taken_0x25d278 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25D27Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x25d278) {
            ctx->pc = 0x25D29Cu;
            goto label_25d29c;
        }
    }
    ctx->pc = 0x25D280u;
    // 0x25d280: 0x24040065
    ctx->pc = 0x25d280u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 101));
    // 0x25d284: 0x200282d
    ctx->pc = 0x25d284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d288: 0x2406007f
    ctx->pc = 0x25d288u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25d28c: 0x24070016
    ctx->pc = 0x25d28cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 22));
    // 0x25d290: 0xdfb00000
    ctx->pc = 0x25d290u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d294: 0x8088a26
    ctx->pc = 0x25D294u;
    ctx->pc = 0x25D298u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x25D29Cu;
label_25d29c:
    // 0x25d29c: 0xdfb00000
    ctx->pc = 0x25d29cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d2a0: 0x3e00008
    ctx->pc = 0x25D2A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D2A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25D29Cu: goto label_25d29c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25D2A8u;
}
