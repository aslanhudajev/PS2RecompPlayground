#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: EventStageClear__Fv
// Address: 0x1e2e50 - 0x1e2e94
void EventStageClear__Fv_0x1e2e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("EventStageClear__Fv");


    ctx->pc = 0x1e2e50u;

    // 0x1e2e50: 0x3c010050
    ctx->pc = 0x1e2e50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e2e54: 0x8424e504
    ctx->pc = 0x1e2e54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x1e2e58: 0x24030001
    ctx->pc = 0x1e2e58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2e5c: 0xa3838b94
    ctx->pc = 0x1e2e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937492), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e2e60: 0x2403000a
    ctx->pc = 0x1e2e60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e2e64: 0x10830003
    ctx->pc = 0x1E2E64u;
    {
        const bool branch_taken_0x1e2e64 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1E2E68u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937556), GPR_U32(ctx, 0));
        if (branch_taken_0x1e2e64) {
            ctx->pc = 0x1E2E74u;
            goto label_1e2e74;
        }
    }
    ctx->pc = 0x1E2E6Cu;
    // 0x1e2e6c: 0x10000007
    ctx->pc = 0x1E2E6Cu;
    {
        const bool branch_taken_0x1e2e6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e2e6c) {
            ctx->pc = 0x1E2E8Cu;
            goto label_1e2e8c;
        }
    }
    ctx->pc = 0x1E2E74u;
label_1e2e74:
    // 0x1e2e74: 0x83848b90
    ctx->pc = 0x1e2e74u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937488)));
    // 0x1e2e78: 0x24030008
    ctx->pc = 0x1e2e78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e2e7c: 0x10830003
    ctx->pc = 0x1E2E7Cu;
    {
        const bool branch_taken_0x1e2e7c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1e2e7c) {
            ctx->pc = 0x1E2E8Cu;
            goto label_1e2e8c;
        }
    }
    ctx->pc = 0x1E2E84u;
    // 0x1e2e84: 0x24030005
    ctx->pc = 0x1e2e84u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e2e88: 0xa3838b90
    ctx->pc = 0x1e2e88u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937488), (uint8_t)GPR_U32(ctx, 3));
label_1e2e8c:
    // 0x1e2e8c: 0x3e00008
    ctx->pc = 0x1E2E8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E2E74u: goto label_1e2e74;
            case 0x1E2E8Cu: goto label_1e2e8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E2E94u;
}
