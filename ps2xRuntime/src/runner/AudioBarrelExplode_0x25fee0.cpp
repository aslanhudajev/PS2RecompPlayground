#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioBarrelExplode
// Address: 0x25fee0 - 0x25ff18
void AudioBarrelExplode_0x25fee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25fee0u;

    // 0x25fee0: 0x80282d
    ctx->pc = 0x25fee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fee4: 0x3c030034
    ctx->pc = 0x25fee4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x25fee8: 0x2463db30
    ctx->pc = 0x25fee8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294957872));
    // 0x25feec: 0x3c020034
    ctx->pc = 0x25feecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25fef0: 0x8c42e7f0
    ctx->pc = 0x25fef0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x25fef4: 0x21080
    ctx->pc = 0x25fef4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x25fef8: 0x431021
    ctx->pc = 0x25fef8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25fefc: 0x8c440000
    ctx->pc = 0x25fefcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25ff00: 0x4800003
    ctx->pc = 0x25FF00u;
    {
        const bool branch_taken_0x25ff00 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x25FF04u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
        if (branch_taken_0x25ff00) {
            ctx->pc = 0x25FF10u;
            goto label_25ff10;
        }
    }
    ctx->pc = 0x25FF08u;
    // 0x25ff08: 0x8088a62
    ctx->pc = 0x25FF08u;
    ctx->pc = 0x25FF0Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 85));
    ctx->pc = 0x222988u;
    AudioSFX3_0x222988(rdram, ctx, runtime); return;
    ctx->pc = 0x25FF10u;
label_25ff10:
    // 0x25ff10: 0x3e00008
    ctx->pc = 0x25FF10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25FF10u: goto label_25ff10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25FF18u;
}
