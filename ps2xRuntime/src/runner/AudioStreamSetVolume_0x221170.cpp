#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioStreamSetVolume
// Address: 0x221170 - 0x22119c
void AudioStreamSetVolume_0x221170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x221170u;

    // 0x221170: 0x3c020032
    ctx->pc = 0x221170u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x221174: 0x8c42fd58
    ctx->pc = 0x221174u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966616)));
    // 0x221178: 0x14400006
    ctx->pc = 0x221178u;
    {
        const bool branch_taken_0x221178 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x22117Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x221178) {
            ctx->pc = 0x221194u;
            goto label_221194;
        }
    }
    ctx->pc = 0x221180u;
    // 0x221180: 0x8c42fd5c
    ctx->pc = 0x221180u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966620)));
    // 0x221184: 0x14400003
    ctx->pc = 0x221184u;
    {
        const bool branch_taken_0x221184 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x221184) {
            ctx->pc = 0x221194u;
            goto label_221194;
        }
    }
    ctx->pc = 0x22118Cu;
    // 0x22118c: 0x8089016
    ctx->pc = 0x22118Cu;
    ctx->pc = 0x224058u;
    aud_stream_volume_0x224058(rdram, ctx, runtime); return;
    ctx->pc = 0x221194u;
label_221194:
    // 0x221194: 0x3e00008
    ctx->pc = 0x221194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x221194u: goto label_221194;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22119Cu;
}
