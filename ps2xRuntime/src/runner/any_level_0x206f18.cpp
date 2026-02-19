#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: any_level
// Address: 0x206f18 - 0x206f58
void any_level_0x206f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x206f18u;

    // 0x206f18: 0x182d
    ctx->pc = 0x206f18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f1c: 0x3c02003c
    ctx->pc = 0x206f1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x206f20: 0x2445b2c0
    ctx->pc = 0x206f20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294947520));
    // 0x206f24: 0x31080
    ctx->pc = 0x206f24u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_206f28:
    // 0x206f28: 0x451021
    ctx->pc = 0x206f28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x206f2c: 0x8c420000
    ctx->pc = 0x206f2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206f30: 0x821024
    ctx->pc = 0x206f30u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x206f34: 0x10400003
    ctx->pc = 0x206F34u;
    {
        const bool branch_taken_0x206f34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x206F38u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x206f34) {
            ctx->pc = 0x206F44u;
            goto label_206f44;
        }
    }
    ctx->pc = 0x206F3Cu;
    // 0x206f3c: 0x3e00008
    ctx->pc = 0x206F3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206F40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206F28u: goto label_206f28;
            case 0x206F44u: goto label_206f44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x206F44u;
label_206f44:
    // 0x206f44: 0x28620008
    ctx->pc = 0x206f44u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 8));
    // 0x206f48: 0x1440fff7
    ctx->pc = 0x206F48u;
    {
        const bool branch_taken_0x206f48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x206F4Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x206f48) {
            ctx->pc = 0x206F28u;
            goto label_206f28;
        }
    }
    ctx->pc = 0x206F50u;
    // 0x206f50: 0x3e00008
    ctx->pc = 0x206F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206F54u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206F28u: goto label_206f28;
            case 0x206F44u: goto label_206f44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x206F58u;
}
