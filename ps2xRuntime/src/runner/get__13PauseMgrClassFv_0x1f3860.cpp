#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: get__13PauseMgrClassFv
// Address: 0x1f3860 - 0x1f3884
void get__13PauseMgrClassFv_0x1f3860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("get__13PauseMgrClassFv");


    ctx->pc = 0x1f3860u;

    // 0x1f3860: 0x84820010
    ctx->pc = 0x1f3860u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1f3864: 0x10400003
    ctx->pc = 0x1F3864u;
    {
        const bool branch_taken_0x1f3864 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1F3868u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x1f3864) {
            ctx->pc = 0x1F3874u;
            goto label_1f3874;
        }
    }
    ctx->pc = 0x1F386Cu;
    // 0x1f386c: 0x10000003
    ctx->pc = 0x1F386Cu;
    {
        const bool branch_taken_0x1f386c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1f386c) {
            ctx->pc = 0x1F387Cu;
            goto label_1f387c;
        }
    }
    ctx->pc = 0x1F3874u;
label_1f3874:
    // 0x1f3874: 0x84820004
    ctx->pc = 0x1f3874u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1f3878: 0x0
    ctx->pc = 0x1f3878u;
    // NOP
label_1f387c:
    // 0x1f387c: 0x3e00008
    ctx->pc = 0x1F387Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3874u: goto label_1f3874;
            case 0x1F387Cu: goto label_1f387c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F3884u;
}
