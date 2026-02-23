#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: clearOnGame__13SoundMgrClassFv
// Address: 0x217c50 - 0x217cb0
void clearOnGame__13SoundMgrClassFv_0x217c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("clearOnGame__13SoundMgrClassFv");


    ctx->pc = 0x217c50u;

    // 0x217c50: 0x27bdffd0
    ctx->pc = 0x217c50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x217c54: 0x7fbf0020
    ctx->pc = 0x217c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x217c58: 0x7fb10010
    ctx->pc = 0x217c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x217c5c: 0x7fb00000
    ctx->pc = 0x217c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x217c60: 0x70808e28
    ctx->pc = 0x217c60u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x217c64: 0x24100001
    ctx->pc = 0x217c64u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_217c68:
    // 0x217c68: 0xc06b48c
    ctx->pc = 0x217C68u;
    SET_GPR_U32(ctx, 31, 0x217C70u);
    ctx->pc = 0x217C6Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AD230u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlsndBankNoteOff_0x1ad230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217C70u; }
        else if (ctx->pc != 0x217C70u) { ctx->pc = 0x217C70u; }
    }
    if (ctx->pc != 0x217C70u) { return; }
    ctx->pc = 0x217C70u;
    // 0x217c70: 0x26100001
    ctx->pc = 0x217c70u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x217c74: 0x2a020007
    ctx->pc = 0x217c74u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 7));
    // 0x217c78: 0x0
    ctx->pc = 0x217c78u;
    // NOP
    // 0x217c7c: 0x1440fffa
    ctx->pc = 0x217C7Cu;
    {
        const bool branch_taken_0x217c7c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x217c7c) {
            ctx->pc = 0x217C68u;
            goto label_217c68;
        }
    }
    ctx->pc = 0x217C84u;
    // 0x217c84: 0xc05c73a
    ctx->pc = 0x217C84u;
    SET_GPR_U32(ctx, 31, 0x217C8Cu);
    ctx->pc = 0x217C88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937856)));
    ctx->pc = 0x171CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_Stop_0x171ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217C8Cu; }
        else if (ctx->pc != 0x217C8Cu) { ctx->pc = 0x217C8Cu; }
    }
    if (ctx->pc != 0x217C8Cu) { return; }
    ctx->pc = 0x217C8Cu;
    // 0x217c8c: 0xc05c73a
    ctx->pc = 0x217C8Cu;
    SET_GPR_U32(ctx, 31, 0x217C94u);
    ctx->pc = 0x217C90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937860)));
    ctx->pc = 0x171CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_Stop_0x171ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217C94u; }
        else if (ctx->pc != 0x217C94u) { ctx->pc = 0x217C94u; }
    }
    if (ctx->pc != 0x217C94u) { return; }
    ctx->pc = 0x217C94u;
    // 0x217c94: 0xc0861f0
    ctx->pc = 0x217C94u;
    SET_GPR_U32(ctx, 31, 0x217C9Cu);
    ctx->pc = 0x217C98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2187C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        voiceReqInit__13SoundMgrClassFv_0x2187c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217C9Cu; }
        else if (ctx->pc != 0x217C9Cu) { ctx->pc = 0x217C9Cu; }
    }
    if (ctx->pc != 0x217C9Cu) { return; }
    ctx->pc = 0x217C9Cu;
    // 0x217c9c: 0x7bbf0020
    ctx->pc = 0x217c9cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217ca0: 0x7bb10010
    ctx->pc = 0x217ca0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217ca4: 0x7bb00000
    ctx->pc = 0x217ca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217ca8: 0x3e00008
    ctx->pc = 0x217CA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217CACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217C68u: goto label_217c68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217CB0u;
}
