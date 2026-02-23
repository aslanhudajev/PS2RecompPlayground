#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfadxt_GetFreeChunk
// Address: 0x18fe00 - 0x18fe2c
void sfadxt_GetFreeChunk_0x18fe00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfadxt_GetFreeChunk");


    ctx->pc = 0x18fe00u;

label_18fe00:
    // 0x18fe00: 0x27bdfff0
    ctx->pc = 0x18fe00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_18fe04:
    // 0x18fe04: 0x8c830000
    ctx->pc = 0x18fe04u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18fe08:
    // 0x18fe08: 0xffbf0000
    ctx->pc = 0x18fe08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18fe0c:
    // 0x18fe0c: 0xc0382d
    ctx->pc = 0x18fe0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18fe10:
    // 0x18fe10: 0xa0302d
    ctx->pc = 0x18fe10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18fe14:
    // 0x18fe14: 0x8c620018
    ctx->pc = 0x18fe14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_18fe18:
    // 0x18fe18: 0x40f809
label_18fe1c:
    if (ctx->pc == 0x18FE1Cu) {
        ctx->pc = 0x18FE1Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18FE20u;
        goto label_18fe20;
    }
    ctx->pc = 0x18FE18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18FE20u);
        ctx->pc = 0x18FE1Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18FE00u: goto label_18fe00;
            case 0x18FE04u: goto label_18fe04;
            case 0x18FE08u: goto label_18fe08;
            case 0x18FE0Cu: goto label_18fe0c;
            case 0x18FE10u: goto label_18fe10;
            case 0x18FE14u: goto label_18fe14;
            case 0x18FE18u: goto label_18fe18;
            case 0x18FE1Cu: goto label_18fe1c;
            case 0x18FE20u: goto label_18fe20;
            case 0x18FE24u: goto label_18fe24;
            case 0x18FE28u: goto label_18fe28;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18FE20u; }
            if (ctx->pc != 0x18FE20u) { return; }
        }
    }
    ctx->pc = 0x18FE20u;
label_18fe20:
    // 0x18fe20: 0xdfbf0000
    ctx->pc = 0x18fe20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18fe24:
    // 0x18fe24: 0x3e00008
label_18fe28:
    if (ctx->pc == 0x18FE28u) {
        ctx->pc = 0x18FE28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x18FE2Cu;
        goto label_fallthrough_0x18fe24;
    }
    ctx->pc = 0x18FE24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FE28u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18FE00u: goto label_18fe00;
            case 0x18FE04u: goto label_18fe04;
            case 0x18FE08u: goto label_18fe08;
            case 0x18FE0Cu: goto label_18fe0c;
            case 0x18FE10u: goto label_18fe10;
            case 0x18FE14u: goto label_18fe14;
            case 0x18FE18u: goto label_18fe18;
            case 0x18FE1Cu: goto label_18fe1c;
            case 0x18FE20u: goto label_18fe20;
            case 0x18FE24u: goto label_18fe24;
            case 0x18FE28u: goto label_18fe28;
            default: break;
        }
        return;
    }
label_fallthrough_0x18fe24:
    ctx->pc = 0x18FE2Cu;
}
