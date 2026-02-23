#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SprPutCE__FP7SPR_ARGi
// Address: 0x217020 - 0x217080
void SprPutCE__FP7SPR_ARGi_0x217020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SprPutCE__FP7SPR_ARGi");


    ctx->pc = 0x217020u;

    // 0x217020: 0x27bdfff0
    ctx->pc = 0x217020u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x217024: 0x7fbf0000
    ctx->pc = 0x217024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x217028: 0x8c870048
    ctx->pc = 0x217028u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x21702c: 0x3c03004a
    ctx->pc = 0x21702cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)74 << 16));
    // 0x217030: 0x2463f738
    ctx->pc = 0x217030u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294965048));
    // 0x217034: 0x73080
    ctx->pc = 0x217034u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 7), 2));
    // 0x217038: 0xc73021
    ctx->pc = 0x217038u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x21703c: 0x63100
    ctx->pc = 0x21703cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 4));
    // 0x217040: 0x663021
    ctx->pc = 0x217040u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x217044: 0x8cc30048
    ctx->pc = 0x217044u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x217048: 0x1060000a
    ctx->pc = 0x217048u;
    {
        const bool branch_taken_0x217048 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x217048) {
            ctx->pc = 0x217074u;
            goto label_217074;
        }
    }
    ctx->pc = 0x217050u;
    // 0x217050: 0x8cc20000
    ctx->pc = 0x217050u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x217054: 0xac820000
    ctx->pc = 0x217054u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x217058: 0x8cc20004
    ctx->pc = 0x217058u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x21705c: 0xac820004
    ctx->pc = 0x21705cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x217060: 0x8cc20008
    ctx->pc = 0x217060u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x217064: 0xac820008
    ctx->pc = 0x217064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x217068: 0x8cc20044
    ctx->pc = 0x217068u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x21706c: 0xc06a27c
    ctx->pc = 0x21706Cu;
    SET_GPR_U32(ctx, 31, 0x217074u);
    ctx->pc = 0x217070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
    ctx->pc = 0x1A89F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSprPutEntry_0x1a89f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217074u; }
        else if (ctx->pc != 0x217074u) { ctx->pc = 0x217074u; }
    }
    if (ctx->pc != 0x217074u) { return; }
    ctx->pc = 0x217074u;
label_217074:
    // 0x217074: 0x7bbf0000
    ctx->pc = 0x217074u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217078: 0x3e00008
    ctx->pc = 0x217078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21707Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217074u: goto label_217074;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217080u;
}
