#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: removeFreeBlock__11PalMgrClassFP7LMBlock
// Address: 0x203e90 - 0x203ed8
void removeFreeBlock__11PalMgrClassFP7LMBlock_0x203e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("removeFreeBlock__11PalMgrClassFP7LMBlock");


    ctx->pc = 0x203e90u;

    // 0x203e90: 0x8ca60000
    ctx->pc = 0x203e90u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x203e94: 0x14c00004
    ctx->pc = 0x203E94u;
    {
        const bool branch_taken_0x203e94 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        if (branch_taken_0x203e94) {
            ctx->pc = 0x203EA8u;
            goto label_203ea8;
        }
    }
    ctx->pc = 0x203E9Cu;
    // 0x203e9c: 0x8ca30004
    ctx->pc = 0x203e9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x203ea0: 0x10000003
    ctx->pc = 0x203EA0u;
    {
        const bool branch_taken_0x203ea0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x203EA4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x203ea0) {
            ctx->pc = 0x203EB0u;
            goto label_203eb0;
        }
    }
    ctx->pc = 0x203EA8u;
label_203ea8:
    // 0x203ea8: 0x8ca30004
    ctx->pc = 0x203ea8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x203eac: 0xacc30004
    ctx->pc = 0x203eacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_203eb0:
    // 0x203eb0: 0x8ca60004
    ctx->pc = 0x203eb0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x203eb4: 0x14c00004
    ctx->pc = 0x203EB4u;
    {
        const bool branch_taken_0x203eb4 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        if (branch_taken_0x203eb4) {
            ctx->pc = 0x203EC8u;
            goto label_203ec8;
        }
    }
    ctx->pc = 0x203EBCu;
    // 0x203ebc: 0x8ca30000
    ctx->pc = 0x203ebcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x203ec0: 0x10000003
    ctx->pc = 0x203EC0u;
    {
        const bool branch_taken_0x203ec0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x203EC4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        if (branch_taken_0x203ec0) {
            ctx->pc = 0x203ED0u;
            goto label_203ed0;
        }
    }
    ctx->pc = 0x203EC8u;
label_203ec8:
    // 0x203ec8: 0x8ca30000
    ctx->pc = 0x203ec8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x203ecc: 0xacc30000
    ctx->pc = 0x203eccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_203ed0:
    // 0x203ed0: 0x3e00008
    ctx->pc = 0x203ED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203EA8u: goto label_203ea8;
            case 0x203EB0u: goto label_203eb0;
            case 0x203EC8u: goto label_203ec8;
            case 0x203ED0u: goto label_203ed0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x203ED8u;
}
