#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlsndSetMasterVolume
// Address: 0x1ad040 - 0x1ad0a8
void nlsndSetMasterVolume_0x1ad040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlsndSetMasterVolume");


    ctx->pc = 0x1ad040u;

    // 0x1ad040: 0x27bdffe0
    ctx->pc = 0x1ad040u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ad044: 0x7fbf0010
    ctx->pc = 0x1ad044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1ad048: 0x8f838ab4
    ctx->pc = 0x1ad048u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937268)));
    // 0x1ad04c: 0x14600013
    ctx->pc = 0x1AD04Cu;
    {
        const bool branch_taken_0x1ad04c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ad04c) {
            ctx->pc = 0x1AD09Cu;
            goto label_1ad09c;
        }
    }
    ctx->pc = 0x1AD054u;
    // 0x1ad054: 0xa61025
    ctx->pc = 0x1ad054u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1ad058: 0x3c010030
    ctx->pc = 0x1ad058u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ad05c: 0xac225b40
    ctx->pc = 0x1ad05cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 23360), GPR_U32(ctx, 2));
    // 0x1ad060: 0xe81025
    ctx->pc = 0x1ad060u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1ad064: 0x3c010030
    ctx->pc = 0x1ad064u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ad068: 0xac225b44
    ctx->pc = 0x1ad068u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 23364), GPR_U32(ctx, 2));
    // 0x1ad06c: 0x3c020030
    ctx->pc = 0x1ad06cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ad070: 0x24475b40
    ctx->pc = 0x1ad070u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 23360));
    // 0x1ad074: 0x34850040
    ctx->pc = 0x1ad074u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 4), 64));
    // 0x1ad078: 0x3c020030
    ctx->pc = 0x1ad078u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ad07c: 0x24445af0
    ctx->pc = 0x1ad07cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 23280));
    // 0x1ad080: 0x70003628
    ctx->pc = 0x1ad080u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ad084: 0x24080010
    ctx->pc = 0x1ad084u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ad088: 0x70004e28
    ctx->pc = 0x1ad088u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ad08c: 0x70005628
    ctx->pc = 0x1ad08cu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ad090: 0x70005e28
    ctx->pc = 0x1ad090u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ad094: 0xc055e72
    ctx->pc = 0x1AD094u;
    SET_GPR_U32(ctx, 31, 0x1AD09Cu);
    ctx->pc = 0x1AD098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->pc = 0x1579C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifCallRpc_0x1579c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD09Cu; }
        else if (ctx->pc != 0x1AD09Cu) { ctx->pc = 0x1AD09Cu; }
    }
    if (ctx->pc != 0x1AD09Cu) { return; }
    ctx->pc = 0x1AD09Cu;
label_1ad09c:
    // 0x1ad09c: 0x7bbf0010
    ctx->pc = 0x1ad09cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad0a0: 0x3e00008
    ctx->pc = 0x1AD0A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD0A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD09Cu: goto label_1ad09c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AD0A8u;
}
