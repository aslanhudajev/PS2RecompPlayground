#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: pushSetStat__13PauseMgrClassFi
// Address: 0x1f3bb0 - 0x1f3bf4
void pushSetStat__13PauseMgrClassFi_0x1f3bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("pushSetStat__13PauseMgrClassFi");


    ctx->pc = 0x1f3bb0u;

label_1f3bb0:
    // 0x1f3bb0: 0x27bdffd0
    ctx->pc = 0x1f3bb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_1f3bb4:
    // 0x1f3bb4: 0x7fbf0020
    ctx->pc = 0x1f3bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_1f3bb8:
    // 0x1f3bb8: 0x7fb10010
    ctx->pc = 0x1f3bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f3bbc:
    // 0x1f3bbc: 0x7fb00000
    ctx->pc = 0x1f3bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f3bc0:
    // 0x1f3bc0: 0x70a08628
    ctx->pc = 0x1f3bc0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_1f3bc4:
    // 0x1f3bc4: 0xc07ced8
label_1f3bc8:
    if (ctx->pc == 0x1F3BC8u) {
        ctx->pc = 0x1F3BC8u;
        SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1F3BCCu;
        goto label_1f3bcc;
    }
    ctx->pc = 0x1F3BC4u;
    SET_GPR_U32(ctx, 31, 0x1F3BCCu);
    ctx->pc = 0x1F3BC8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1F3B60u;
    {
        const uint32_t __entryPc = ctx->pc;
        pushStat__13PauseMgrClassFv_0x1f3b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3BCCu; }
        else if (ctx->pc != 0x1F3BCCu) { ctx->pc = 0x1F3BCCu; }
    }
    if (ctx->pc != 0x1F3BCCu) { return; }
    ctx->pc = 0x1F3BCCu;
label_1f3bcc:
    // 0x1f3bcc: 0x8e390000
    ctx->pc = 0x1f3bccu;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f3bd0:
    // 0x1f3bd0: 0x72002e28
    ctx->pc = 0x1f3bd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1f3bd4:
    // 0x1f3bd4: 0x8f39000c
    ctx->pc = 0x1f3bd4u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1f3bd8:
    // 0x1f3bd8: 0x320f809
label_1f3bdc:
    if (ctx->pc == 0x1F3BDCu) {
        ctx->pc = 0x1F3BDCu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        ctx->pc = 0x1F3BE0u;
        goto label_1f3be0;
    }
    ctx->pc = 0x1F3BD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F3BE0u);
        ctx->pc = 0x1F3BDCu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3BB0u: goto label_1f3bb0;
            case 0x1F3BB4u: goto label_1f3bb4;
            case 0x1F3BB8u: goto label_1f3bb8;
            case 0x1F3BBCu: goto label_1f3bbc;
            case 0x1F3BC0u: goto label_1f3bc0;
            case 0x1F3BC4u: goto label_1f3bc4;
            case 0x1F3BC8u: goto label_1f3bc8;
            case 0x1F3BCCu: goto label_1f3bcc;
            case 0x1F3BD0u: goto label_1f3bd0;
            case 0x1F3BD4u: goto label_1f3bd4;
            case 0x1F3BD8u: goto label_1f3bd8;
            case 0x1F3BDCu: goto label_1f3bdc;
            case 0x1F3BE0u: goto label_1f3be0;
            case 0x1F3BE4u: goto label_1f3be4;
            case 0x1F3BE8u: goto label_1f3be8;
            case 0x1F3BECu: goto label_1f3bec;
            case 0x1F3BF0u: goto label_1f3bf0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F3BE0u; }
            if (ctx->pc != 0x1F3BE0u) { return; }
        }
    }
    ctx->pc = 0x1F3BE0u;
label_1f3be0:
    // 0x1f3be0: 0x7bbf0020
    ctx->pc = 0x1f3be0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f3be4:
    // 0x1f3be4: 0x7bb10010
    ctx->pc = 0x1f3be4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f3be8:
    // 0x1f3be8: 0x7bb00000
    ctx->pc = 0x1f3be8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f3bec:
    // 0x1f3bec: 0x3e00008
label_1f3bf0:
    if (ctx->pc == 0x1F3BF0u) {
        ctx->pc = 0x1F3BF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1F3BF4u;
        goto label_fallthrough_0x1f3bec;
    }
    ctx->pc = 0x1F3BECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3BF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3BB0u: goto label_1f3bb0;
            case 0x1F3BB4u: goto label_1f3bb4;
            case 0x1F3BB8u: goto label_1f3bb8;
            case 0x1F3BBCu: goto label_1f3bbc;
            case 0x1F3BC0u: goto label_1f3bc0;
            case 0x1F3BC4u: goto label_1f3bc4;
            case 0x1F3BC8u: goto label_1f3bc8;
            case 0x1F3BCCu: goto label_1f3bcc;
            case 0x1F3BD0u: goto label_1f3bd0;
            case 0x1F3BD4u: goto label_1f3bd4;
            case 0x1F3BD8u: goto label_1f3bd8;
            case 0x1F3BDCu: goto label_1f3bdc;
            case 0x1F3BE0u: goto label_1f3be0;
            case 0x1F3BE4u: goto label_1f3be4;
            case 0x1F3BE8u: goto label_1f3be8;
            case 0x1F3BECu: goto label_1f3bec;
            case 0x1F3BF0u: goto label_1f3bf0;
            default: break;
        }
        return;
    }
label_fallthrough_0x1f3bec:
    ctx->pc = 0x1F3BF4u;
}
