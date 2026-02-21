#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: listFindHandle
// Address: 0x2c9018 - 0x2c9050
void listFindHandle_0x2c9018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c9018u;

    // 0x2c9018: 0x8ca20004
    ctx->pc = 0x2c9018u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2c901c: 0x1040000a
    ctx->pc = 0x2C901Cu;
    {
        const bool branch_taken_0x2c901c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C9020u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 4));
        if (branch_taken_0x2c901c) {
            ctx->pc = 0x2C9048u;
            goto label_2c9048;
        }
    }
    ctx->pc = 0x2C9024u;
    // 0x2c9024: 0x10440008
    ctx->pc = 0x2C9024u;
    {
        const bool branch_taken_0x2c9024 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        if (branch_taken_0x2c9024) {
            ctx->pc = 0x2C9048u;
            goto label_2c9048;
        }
    }
    ctx->pc = 0x2C902Cu;
    // 0x2c902c: 0x8c620000
    ctx->pc = 0x2c902cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c9030:
    // 0x2c9030: 0x24430024
    ctx->pc = 0x2c9030u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 36));
    // 0x2c9034: 0x8c420024
    ctx->pc = 0x2c9034u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2c9038: 0x10400003
    ctx->pc = 0x2C9038u;
    {
        const bool branch_taken_0x2c9038 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c9038) {
            ctx->pc = 0x2C9048u;
            goto label_2c9048;
        }
    }
    ctx->pc = 0x2C9040u;
    // 0x2c9040: 0x5444fffb
    ctx->pc = 0x2C9040u;
    {
        const bool branch_taken_0x2c9040 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        if (branch_taken_0x2c9040) {
            ctx->pc = 0x2C9044u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->pc = 0x2C9030u;
            goto label_2c9030;
        }
    }
    ctx->pc = 0x2C9048u;
label_2c9048:
    // 0x2c9048: 0x3e00008
    ctx->pc = 0x2C9048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C904Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C9030u: goto label_2c9030;
            case 0x2C9048u: goto label_2c9048;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C9050u;
}
