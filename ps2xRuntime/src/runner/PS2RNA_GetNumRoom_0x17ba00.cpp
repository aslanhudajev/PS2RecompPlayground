#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PS2RNA_GetNumRoom
// Address: 0x17ba00 - 0x17ba30
void PS2RNA_GetNumRoom_0x17ba00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PS2RNA_GetNumRoom");


    ctx->pc = 0x17ba00u;

label_17ba00:
    // 0x17ba00: 0x27bdfff0
    ctx->pc = 0x17ba00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_17ba04:
    // 0x17ba04: 0xffbf0000
    ctx->pc = 0x17ba04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17ba08:
    // 0x17ba08: 0x8c820008
    ctx->pc = 0x17ba08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_17ba0c:
    // 0x17ba0c: 0x8c440008
    ctx->pc = 0x17ba0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_17ba10:
    // 0x17ba10: 0x8c830000
    ctx->pc = 0x17ba10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17ba14:
    // 0x17ba14: 0x8c620024
    ctx->pc = 0x17ba14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_17ba18:
    // 0x17ba18: 0x40f809
label_17ba1c:
    if (ctx->pc == 0x17BA1Cu) {
        ctx->pc = 0x17BA1Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17BA20u;
        goto label_17ba20;
    }
    ctx->pc = 0x17BA18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17BA20u);
        ctx->pc = 0x17BA1Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17BA00u: goto label_17ba00;
            case 0x17BA04u: goto label_17ba04;
            case 0x17BA08u: goto label_17ba08;
            case 0x17BA0Cu: goto label_17ba0c;
            case 0x17BA10u: goto label_17ba10;
            case 0x17BA14u: goto label_17ba14;
            case 0x17BA18u: goto label_17ba18;
            case 0x17BA1Cu: goto label_17ba1c;
            case 0x17BA20u: goto label_17ba20;
            case 0x17BA24u: goto label_17ba24;
            case 0x17BA28u: goto label_17ba28;
            case 0x17BA2Cu: goto label_17ba2c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17BA20u; }
            if (ctx->pc != 0x17BA20u) { return; }
        }
    }
    ctx->pc = 0x17BA20u;
label_17ba20:
    // 0x17ba20: 0xdfbf0000
    ctx->pc = 0x17ba20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17ba24:
    // 0x17ba24: 0x21042
    ctx->pc = 0x17ba24u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
label_17ba28:
    // 0x17ba28: 0x3e00008
label_17ba2c:
    if (ctx->pc == 0x17BA2Cu) {
        ctx->pc = 0x17BA2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x17BA30u;
        goto label_fallthrough_0x17ba28;
    }
    ctx->pc = 0x17BA28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BA2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17BA00u: goto label_17ba00;
            case 0x17BA04u: goto label_17ba04;
            case 0x17BA08u: goto label_17ba08;
            case 0x17BA0Cu: goto label_17ba0c;
            case 0x17BA10u: goto label_17ba10;
            case 0x17BA14u: goto label_17ba14;
            case 0x17BA18u: goto label_17ba18;
            case 0x17BA1Cu: goto label_17ba1c;
            case 0x17BA20u: goto label_17ba20;
            case 0x17BA24u: goto label_17ba24;
            case 0x17BA28u: goto label_17ba28;
            case 0x17BA2Cu: goto label_17ba2c;
            default: break;
        }
        return;
    }
label_fallthrough_0x17ba28:
    ctx->pc = 0x17BA30u;
}
