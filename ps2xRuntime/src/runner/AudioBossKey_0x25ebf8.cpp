#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioBossKey
// Address: 0x25ebf8 - 0x25ec30
void AudioBossKey_0x25ebf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25ebf8u;

    // 0x25ebf8: 0x80282d
    ctx->pc = 0x25ebf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ebfc: 0x3c030034
    ctx->pc = 0x25ebfcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x25ec00: 0x2463d810
    ctx->pc = 0x25ec00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294957072));
    // 0x25ec04: 0x3c020034
    ctx->pc = 0x25ec04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25ec08: 0x8c42e7f0
    ctx->pc = 0x25ec08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x25ec0c: 0x21080
    ctx->pc = 0x25ec0cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x25ec10: 0x431021
    ctx->pc = 0x25ec10u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25ec14: 0x8c440000
    ctx->pc = 0x25ec14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25ec18: 0x4800003
    ctx->pc = 0x25EC18u;
    {
        const bool branch_taken_0x25ec18 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x25EC1Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
        if (branch_taken_0x25ec18) {
            ctx->pc = 0x25EC28u;
            goto label_25ec28;
        }
    }
    ctx->pc = 0x25EC20u;
    // 0x25ec20: 0x8088a26
    ctx->pc = 0x25EC20u;
    ctx->pc = 0x25EC24u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x25EC28u;
label_25ec28:
    // 0x25ec28: 0x3e00008
    ctx->pc = 0x25EC28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25EC28u: goto label_25ec28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25EC30u;
}
