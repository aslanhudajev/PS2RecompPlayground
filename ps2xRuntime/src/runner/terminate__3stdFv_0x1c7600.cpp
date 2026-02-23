#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: terminate__3stdFv
// Address: 0x1c7600 - 0x1c7620
void terminate__3stdFv_0x1c7600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("terminate__3stdFv");


    ctx->pc = 0x1c7600u;

label_1c7600:
    // 0x1c7600: 0x27bdfff0
    ctx->pc = 0x1c7600u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c7604:
    // 0x1c7604: 0x7fbf0000
    ctx->pc = 0x1c7604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_1c7608:
    // 0x1c7608: 0x8f82834c
    ctx->pc = 0x1c7608u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935372)));
label_1c760c:
    // 0x1c760c: 0x40f809
label_1c7610:
    if (ctx->pc == 0x1C7610u) {
        ctx->pc = 0x1C7614u;
        goto label_1c7614;
    }
    ctx->pc = 0x1C760Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C7614u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C7600u: goto label_1c7600;
            case 0x1C7604u: goto label_1c7604;
            case 0x1C7608u: goto label_1c7608;
            case 0x1C760Cu: goto label_1c760c;
            case 0x1C7610u: goto label_1c7610;
            case 0x1C7614u: goto label_1c7614;
            case 0x1C7618u: goto label_1c7618;
            case 0x1C761Cu: goto label_1c761c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C7614u; }
            if (ctx->pc != 0x1C7614u) { return; }
        }
    }
    ctx->pc = 0x1C7614u;
label_1c7614:
    // 0x1c7614: 0x7bbf0000
    ctx->pc = 0x1c7614u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c7618:
    // 0x1c7618: 0x3e00008
label_1c761c:
    if (ctx->pc == 0x1C761Cu) {
        ctx->pc = 0x1C761Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C7620u;
        goto label_fallthrough_0x1c7618;
    }
    ctx->pc = 0x1C7618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C761Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C7600u: goto label_1c7600;
            case 0x1C7604u: goto label_1c7604;
            case 0x1C7608u: goto label_1c7608;
            case 0x1C760Cu: goto label_1c760c;
            case 0x1C7610u: goto label_1c7610;
            case 0x1C7614u: goto label_1c7614;
            case 0x1C7618u: goto label_1c7618;
            case 0x1C761Cu: goto label_1c761c;
            default: break;
        }
        return;
    }
label_fallthrough_0x1c7618:
    ctx->pc = 0x1C7620u;
}
