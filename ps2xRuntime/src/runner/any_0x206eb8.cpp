#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: any
// Address: 0x206eb8 - 0x206f14
void any_0x206eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x206eb8u;

    // 0x206eb8: 0x282d
    ctx->pc = 0x206eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206ebc: 0x3c02003c
    ctx->pc = 0x206ebcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x206ec0: 0x2447b2c0
    ctx->pc = 0x206ec0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294947520));
    // 0x206ec4: 0x3c02003c
    ctx->pc = 0x206ec4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x206ec8: 0x2446b2e0
    ctx->pc = 0x206ec8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294947552));
    // 0x206ecc: 0x51880
    ctx->pc = 0x206eccu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
label_206ed0:
    // 0x206ed0: 0x671021
    ctx->pc = 0x206ed0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x206ed4: 0x8c420000
    ctx->pc = 0x206ed4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206ed8: 0x821024
    ctx->pc = 0x206ed8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x206edc: 0x10400007
    ctx->pc = 0x206EDCu;
    {
        const bool branch_taken_0x206edc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x206EE0u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        if (branch_taken_0x206edc) {
            ctx->pc = 0x206EFCu;
            goto label_206efc;
        }
    }
    ctx->pc = 0x206EE4u;
    // 0x206ee4: 0x8c420000
    ctx->pc = 0x206ee4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206ee8: 0x821024
    ctx->pc = 0x206ee8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x206eec: 0x14400004
    ctx->pc = 0x206EECu;
    {
        const bool branch_taken_0x206eec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x206EF0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x206eec) {
            ctx->pc = 0x206F00u;
            goto label_206f00;
        }
    }
    ctx->pc = 0x206EF4u;
    // 0x206ef4: 0x3e00008
    ctx->pc = 0x206EF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206EF8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206ED0u: goto label_206ed0;
            case 0x206EFCu: goto label_206efc;
            case 0x206F00u: goto label_206f00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x206EFCu;
label_206efc:
    // 0x206efc: 0x24a50001
    ctx->pc = 0x206efcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_206f00:
    // 0x206f00: 0x28a20008
    ctx->pc = 0x206f00u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 8));
    // 0x206f04: 0x1440fff2
    ctx->pc = 0x206F04u;
    {
        const bool branch_taken_0x206f04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x206F08u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
        if (branch_taken_0x206f04) {
            ctx->pc = 0x206ED0u;
            goto label_206ed0;
        }
    }
    ctx->pc = 0x206F0Cu;
    // 0x206f0c: 0x3e00008
    ctx->pc = 0x206F0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206F10u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206ED0u: goto label_206ed0;
            case 0x206EFCu: goto label_206efc;
            case 0x206F00u: goto label_206f00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x206F14u;
}
