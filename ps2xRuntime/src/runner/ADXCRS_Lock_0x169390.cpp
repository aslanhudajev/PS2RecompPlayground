#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXCRS_Lock
// Address: 0x169390 - 0x1693c0
void ADXCRS_Lock_0x169390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXCRS_Lock");
    ctx->pc = 0x169390u;

    // 0x169390: 0x27bdfff0
    ctx->pc = 0x169390u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x169394: 0x8f8280f8
    ctx->pc = 0x169394u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934776)));
    // 0x169398: 0x14400004
    ctx->pc = 0x169398u;
    {
        const bool branch_taken_0x169398 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16939Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x169398) {
            ctx->pc = 0x1693ACu;
            goto label_1693ac;
        }
    }
    ctx->pc = 0x1693A0u;
    // 0x1693a0: 0xc05f6f6
    ctx->pc = 0x1693A0u;
    SET_GPR_U32(ctx, 31, 0x1693A8u);
    ctx->pc = 0x17DBD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_Lock_0x17dbd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1693A8u; }
        else if (ctx->pc != 0x1693A8u) { ctx->pc = 0x1693A8u; }
    }
    if (ctx->pc != 0x1693A8u) { return; }
    ctx->pc = 0x1693A8u;
    // 0x1693a8: 0x8f8280f8
    ctx->pc = 0x1693a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934776)));
label_1693ac:
    // 0x1693ac: 0x24420001
    ctx->pc = 0x1693acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1693b0: 0xdfbf0000
    ctx->pc = 0x1693b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1693b4: 0xaf8280f8
    ctx->pc = 0x1693b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934776), GPR_U32(ctx, 2));
    // 0x1693b8: 0x3e00008
    ctx->pc = 0x1693B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1693BCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1693ACu: goto label_1693ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1693C0u;
}
