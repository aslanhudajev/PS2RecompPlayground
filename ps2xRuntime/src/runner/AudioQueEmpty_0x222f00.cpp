#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioQueEmpty
// Address: 0x222f00 - 0x222f48
void AudioQueEmpty_0x222f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x222f00u;

    // 0x222f00: 0x3c050032
    ctx->pc = 0x222f00u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x222f04: 0x8ca4fe30
    ctx->pc = 0x222f04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4294966832)));
    // 0x222f08: 0x24020001
    ctx->pc = 0x222f08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x222f0c: 0xaca2fe30
    ctx->pc = 0x222f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294966832), GPR_U32(ctx, 2));
    // 0x222f10: 0x3c02003c
    ctx->pc = 0x222f10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x222f14: 0x244307b8
    ctx->pc = 0x222f14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1976));
    // 0x222f18: 0xac4007b8
    ctx->pc = 0x222f18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1976), GPR_U32(ctx, 0));
    // 0x222f1c: 0xac600004
    ctx->pc = 0x222f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x222f20: 0x3c02003c
    ctx->pc = 0x222f20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x222f24: 0x244307b0
    ctx->pc = 0x222f24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 1968));
    // 0x222f28: 0xac4007b0
    ctx->pc = 0x222f28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1968), GPR_U32(ctx, 0));
    // 0x222f2c: 0xac600004
    ctx->pc = 0x222f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x222f30: 0x3c02003c
    ctx->pc = 0x222f30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x222f34: 0x14800002
    ctx->pc = 0x222F34u;
    {
        const bool branch_taken_0x222f34 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x222F38u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 1984), GPR_U32(ctx, 0));
        if (branch_taken_0x222f34) {
            ctx->pc = 0x222F40u;
            goto label_222f40;
        }
    }
    ctx->pc = 0x222F3Cu;
    // 0x222f3c: 0xaca0fe30
    ctx->pc = 0x222f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294966832), GPR_U32(ctx, 0));
label_222f40:
    // 0x222f40: 0x3e00008
    ctx->pc = 0x222F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x222F40u: goto label_222f40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x222F48u;
}
