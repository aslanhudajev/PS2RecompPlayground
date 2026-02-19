#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioWoodBarrel
// Address: 0x25fe70 - 0x25fea8
void AudioWoodBarrel_0x25fe70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25fe70u;

    // 0x25fe70: 0x80282d
    ctx->pc = 0x25fe70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fe74: 0x3c030034
    ctx->pc = 0x25fe74u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x25fe78: 0x2463dac0
    ctx->pc = 0x25fe78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294957760));
    // 0x25fe7c: 0x3c020034
    ctx->pc = 0x25fe7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25fe80: 0x8c42e7f0
    ctx->pc = 0x25fe80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x25fe84: 0x21080
    ctx->pc = 0x25fe84u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x25fe88: 0x431021
    ctx->pc = 0x25fe88u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25fe8c: 0x8c440000
    ctx->pc = 0x25fe8cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25fe90: 0x4800003
    ctx->pc = 0x25FE90u;
    {
        const bool branch_taken_0x25fe90 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x25FE94u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
        if (branch_taken_0x25fe90) {
            ctx->pc = 0x25FEA0u;
            goto label_25fea0;
        }
    }
    ctx->pc = 0x25FE98u;
    // 0x25fe98: 0x8088a62
    ctx->pc = 0x25FE98u;
    ctx->pc = 0x25FE9Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 85));
    ctx->pc = 0x222988u;
    AudioSFX3_0x222988(rdram, ctx, runtime); return;
    ctx->pc = 0x25FEA0u;
label_25fea0:
    // 0x25fea0: 0x3e00008
    ctx->pc = 0x25FEA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25FEA0u: goto label_25fea0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25FEA8u;
}
