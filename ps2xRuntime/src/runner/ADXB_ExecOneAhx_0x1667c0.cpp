#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXB_ExecOneAhx
// Address: 0x1667c0 - 0x1667e0
void ADXB_ExecOneAhx_0x1667c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXB_ExecOneAhx");


    ctx->pc = 0x1667c0u;

label_1667c0:
    // 0x1667c0: 0x27bdfff0
    ctx->pc = 0x1667c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1667c4:
    // 0x1667c4: 0x8f828098
    ctx->pc = 0x1667c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934680)));
label_1667c8:
    // 0x1667c8: 0xffbf0000
    ctx->pc = 0x1667c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1667cc:
    // 0x1667cc: 0x40f809
label_1667d0:
    if (ctx->pc == 0x1667D0u) {
        ctx->pc = 0x1667D4u;
        goto label_1667d4;
    }
    ctx->pc = 0x1667CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1667D4u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1667C0u: goto label_1667c0;
            case 0x1667C4u: goto label_1667c4;
            case 0x1667C8u: goto label_1667c8;
            case 0x1667CCu: goto label_1667cc;
            case 0x1667D0u: goto label_1667d0;
            case 0x1667D4u: goto label_1667d4;
            case 0x1667D8u: goto label_1667d8;
            case 0x1667DCu: goto label_1667dc;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1667D4u; }
            if (ctx->pc != 0x1667D4u) { return; }
        }
    }
    ctx->pc = 0x1667D4u;
label_1667d4:
    // 0x1667d4: 0xdfbf0000
    ctx->pc = 0x1667d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1667d8:
    // 0x1667d8: 0x3e00008
label_1667dc:
    if (ctx->pc == 0x1667DCu) {
        ctx->pc = 0x1667DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1667E0u;
        goto label_fallthrough_0x1667d8;
    }
    ctx->pc = 0x1667D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1667DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1667C0u: goto label_1667c0;
            case 0x1667C4u: goto label_1667c4;
            case 0x1667C8u: goto label_1667c8;
            case 0x1667CCu: goto label_1667cc;
            case 0x1667D0u: goto label_1667d0;
            case 0x1667D4u: goto label_1667d4;
            case 0x1667D8u: goto label_1667d8;
            case 0x1667DCu: goto label_1667dc;
            default: break;
        }
        return;
    }
label_fallthrough_0x1667d8:
    ctx->pc = 0x1667E0u;
}
