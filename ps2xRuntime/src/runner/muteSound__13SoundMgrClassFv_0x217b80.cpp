#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: muteSound__13SoundMgrClassFv
// Address: 0x217b80 - 0x217bcc
void muteSound__13SoundMgrClassFv_0x217b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("muteSound__13SoundMgrClassFv");


    ctx->pc = 0x217b80u;

    // 0x217b80: 0x27bdffe0
    ctx->pc = 0x217b80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x217b84: 0x7fbf0010
    ctx->pc = 0x217b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x217b88: 0x70002628
    ctx->pc = 0x217b88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x217b8c: 0x70002e28
    ctx->pc = 0x217b8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x217b90: 0x70003628
    ctx->pc = 0x217b90u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x217b94: 0xc06b42c
    ctx->pc = 0x217B94u;
    SET_GPR_U32(ctx, 31, 0x217B9Cu);
    ctx->pc = 0x217B98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->pc = 0x1AD0B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlsndSetStreamVolume_0x1ad0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217B9Cu; }
        else if (ctx->pc != 0x217B9Cu) { ctx->pc = 0x217B9Cu; }
    }
    if (ctx->pc != 0x217B9Cu) { return; }
    ctx->pc = 0x217B9Cu;
    // 0x217b9c: 0x24100002
    ctx->pc = 0x217b9cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2));
label_217ba0:
    // 0x217ba0: 0x72002628
    ctx->pc = 0x217ba0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x217ba4: 0xc06b460
    ctx->pc = 0x217BA4u;
    SET_GPR_U32(ctx, 31, 0x217BACu);
    ctx->pc = 0x217BA8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AD180u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlsndSetBankVolume_0x1ad180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217BACu; }
        else if (ctx->pc != 0x217BACu) { ctx->pc = 0x217BACu; }
    }
    if (ctx->pc != 0x217BACu) { return; }
    ctx->pc = 0x217BACu;
    // 0x217bac: 0x26100001
    ctx->pc = 0x217bacu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x217bb0: 0x2a030007
    ctx->pc = 0x217bb0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 7));
    // 0x217bb4: 0x1460fffa
    ctx->pc = 0x217BB4u;
    {
        const bool branch_taken_0x217bb4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x217bb4) {
            ctx->pc = 0x217BA0u;
            goto label_217ba0;
        }
    }
    ctx->pc = 0x217BBCu;
    // 0x217bbc: 0x7bbf0010
    ctx->pc = 0x217bbcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217bc0: 0x7bb00000
    ctx->pc = 0x217bc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217bc4: 0x3e00008
    ctx->pc = 0x217BC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217BC8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217BA0u: goto label_217ba0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217BCCu;
}
