#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: gun_action__FP11Gun_Act_tag
// Address: 0x1eda10 - 0x1eda94
void gun_action__FP11Gun_Act_tag_0x1eda10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("gun_action__FP11Gun_Act_tag");


    ctx->pc = 0x1eda10u;

    // 0x1eda10: 0x27bdffe0
    ctx->pc = 0x1eda10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1eda14: 0x7fbf0010
    ctx->pc = 0x1eda14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1eda18: 0x7fb00000
    ctx->pc = 0x1eda18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eda1c: 0x8c830038
    ctx->pc = 0x1eda1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1eda20: 0x10600017
    ctx->pc = 0x1EDA20u;
    {
        const bool branch_taken_0x1eda20 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EDA24u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1eda20) {
            ctx->pc = 0x1EDA80u;
            goto label_1eda80;
        }
    }
    ctx->pc = 0x1EDA28u;
    // 0x1eda28: 0x24030001
    ctx->pc = 0x1eda28u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eda2c: 0xae030024
    ctx->pc = 0x1eda2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x1eda30: 0x8e030038
    ctx->pc = 0x1eda30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1eda34: 0x28630008
    ctx->pc = 0x1eda34u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), 8));
    // 0x1eda38: 0x14600007
    ctx->pc = 0x1EDA38u;
    {
        const bool branch_taken_0x1eda38 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1EDA3Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1eda38) {
            ctx->pc = 0x1EDA58u;
            goto label_1eda58;
        }
    }
    ctx->pc = 0x1EDA40u;
    // 0x1eda40: 0xc07b590
    ctx->pc = 0x1EDA40u;
    SET_GPR_U32(ctx, 31, 0x1EDA48u);
    ctx->pc = 0x1ED640u;
    {
        const uint32_t __entryPc = ctx->pc;
        guncon2_job__FP11Gun_Act_tag_0x1ed640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDA48u; }
        else if (ctx->pc != 0x1EDA48u) { ctx->pc = 0x1EDA48u; }
    }
    if (ctx->pc != 0x1EDA48u) { return; }
    ctx->pc = 0x1EDA48u;
    // 0x1eda48: 0xc07b6a8
    ctx->pc = 0x1EDA48u;
    SET_GPR_U32(ctx, 31, 0x1EDA50u);
    ctx->pc = 0x1EDA4Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EDAA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        key_convert__FP11Gun_Act_tag_0x1edaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDA50u; }
        else if (ctx->pc != 0x1EDA50u) { ctx->pc = 0x1EDA50u; }
    }
    if (ctx->pc != 0x1EDA50u) { return; }
    ctx->pc = 0x1EDA50u;
    // 0x1eda50: 0x1000000d
    ctx->pc = 0x1EDA50u;
    {
        const bool branch_taken_0x1eda50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EDA54u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1eda50) {
            ctx->pc = 0x1EDA88u;
            goto label_1eda88;
        }
    }
    ctx->pc = 0x1EDA58u;
label_1eda58:
    // 0x1eda58: 0xae03001c
    ctx->pc = 0x1eda58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x1eda5c: 0xae030020
    ctx->pc = 0x1eda5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1eda60: 0x8e03001c
    ctx->pc = 0x1eda60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1eda64: 0xae030004
    ctx->pc = 0x1eda64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1eda68: 0x8e030020
    ctx->pc = 0x1eda68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1eda6c: 0xae030008
    ctx->pc = 0x1eda6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1eda70: 0xae000028
    ctx->pc = 0x1eda70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1eda74: 0xae00002c
    ctx->pc = 0x1eda74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1eda78: 0x10000002
    ctx->pc = 0x1EDA78u;
    {
        const bool branch_taken_0x1eda78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1EDA7Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        if (branch_taken_0x1eda78) {
            ctx->pc = 0x1EDA84u;
            goto label_1eda84;
        }
    }
    ctx->pc = 0x1EDA80u;
label_1eda80:
    // 0x1eda80: 0xae000024
    ctx->pc = 0x1eda80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1eda84:
    // 0x1eda84: 0x7bbf0010
    ctx->pc = 0x1eda84u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1eda88:
    // 0x1eda88: 0x7bb00000
    ctx->pc = 0x1eda88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eda8c: 0x3e00008
    ctx->pc = 0x1EDA8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDA90u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EDA58u: goto label_1eda58;
            case 0x1EDA80u: goto label_1eda80;
            case 0x1EDA84u: goto label_1eda84;
            case 0x1EDA88u: goto label_1eda88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EDA94u;
}
