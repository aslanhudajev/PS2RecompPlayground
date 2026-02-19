#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioPoisonBarrel
// Address: 0x25fea8 - 0x25fee0
void AudioPoisonBarrel_0x25fea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25fea8u;

    // 0x25fea8: 0x80282d
    ctx->pc = 0x25fea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25feac: 0x3c030034
    ctx->pc = 0x25feacu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x25feb0: 0x2463daf8
    ctx->pc = 0x25feb0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294957816));
    // 0x25feb4: 0x3c020034
    ctx->pc = 0x25feb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25feb8: 0x8c42e7f0
    ctx->pc = 0x25feb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x25febc: 0x21080
    ctx->pc = 0x25febcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x25fec0: 0x431021
    ctx->pc = 0x25fec0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25fec4: 0x8c440000
    ctx->pc = 0x25fec4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25fec8: 0x4800003
    ctx->pc = 0x25FEC8u;
    {
        const bool branch_taken_0x25fec8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x25FECCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
        if (branch_taken_0x25fec8) {
            ctx->pc = 0x25FED8u;
            goto label_25fed8;
        }
    }
    ctx->pc = 0x25FED0u;
    // 0x25fed0: 0x8088a62
    ctx->pc = 0x25FED0u;
    ctx->pc = 0x25FED4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 85));
    ctx->pc = 0x222988u;
    AudioSFX3_0x222988(rdram, ctx, runtime); return;
    ctx->pc = 0x25FED8u;
label_25fed8:
    // 0x25fed8: 0x3e00008
    ctx->pc = 0x25FED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25FED8u: goto label_25fed8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25FEE0u;
}
