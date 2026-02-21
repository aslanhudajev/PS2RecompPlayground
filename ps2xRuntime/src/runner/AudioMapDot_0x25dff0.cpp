#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioMapDot
// Address: 0x25dff0 - 0x25e024
void AudioMapDot_0x25dff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25dff0u;

    // 0x25dff0: 0x3c030034
    ctx->pc = 0x25dff0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x25dff4: 0x2463d4a0
    ctx->pc = 0x25dff4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294956192));
    // 0x25dff8: 0x3c020034
    ctx->pc = 0x25dff8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25dffc: 0x8c42e7f0
    ctx->pc = 0x25dffcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x25e000: 0x21080
    ctx->pc = 0x25e000u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x25e004: 0x431021
    ctx->pc = 0x25e004u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25e008: 0x8c440000
    ctx->pc = 0x25e008u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25e00c: 0x4800003
    ctx->pc = 0x25E00Cu;
    {
        const bool branch_taken_0x25e00c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x25E010u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
        if (branch_taken_0x25e00c) {
            ctx->pc = 0x25E01Cu;
            goto label_25e01c;
        }
    }
    ctx->pc = 0x25E014u;
    // 0x25e014: 0x8088a94
    ctx->pc = 0x25E014u;
    ctx->pc = 0x25E018u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 30));
    ctx->pc = 0x222A50u;
    AudioFX_0x222a50(rdram, ctx, runtime); return;
    ctx->pc = 0x25E01Cu;
label_25e01c:
    // 0x25e01c: 0x3e00008
    ctx->pc = 0x25E01Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25E01Cu: goto label_25e01c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25E024u;
}
