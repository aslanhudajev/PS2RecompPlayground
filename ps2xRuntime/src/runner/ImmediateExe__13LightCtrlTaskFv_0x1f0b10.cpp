#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ImmediateExe__13LightCtrlTaskFv
// Address: 0x1f0b10 - 0x1f0b6c
void ImmediateExe__13LightCtrlTaskFv_0x1f0b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ImmediateExe__13LightCtrlTaskFv");


    ctx->pc = 0x1f0b10u;

    // 0x1f0b10: 0x27bdfff0
    ctx->pc = 0x1f0b10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f0b14: 0x7fbf0000
    ctx->pc = 0x1f0b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1f0b18: 0x8c86000c
    ctx->pc = 0x1f0b18u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1f0b1c: 0x8c820004
    ctx->pc = 0x1f0b1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1f0b20: 0x24850180
    ctx->pc = 0x1f0b20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 4), 384));
    // 0x1f0b24: 0x61840
    ctx->pc = 0x1f0b24u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 1));
    // 0x1f0b28: 0x661821
    ctx->pc = 0x1f0b28u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1f0b2c: 0x318c0
    ctx->pc = 0x1f0b2cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f0b30: 0x661823
    ctx->pc = 0x1f0b30u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1f0b34: 0x31880
    ctx->pc = 0x1f0b34u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f0b38: 0x831821
    ctx->pc = 0x1f0b38u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f0b3c: 0x14400002
    ctx->pc = 0x1F0B3Cu;
    {
        const bool branch_taken_0x1f0b3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F0B40u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
        if (branch_taken_0x1f0b3c) {
            ctx->pc = 0x1F0B48u;
            goto label_1f0b48;
        }
    }
    ctx->pc = 0x1F0B44u;
    // 0x1f0b44: 0x70001e28
    ctx->pc = 0x1f0b44u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f0b48:
    // 0x1f0b48: 0x8c820008
    ctx->pc = 0x1f0b48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1f0b4c: 0x14400002
    ctx->pc = 0x1F0B4Cu;
    {
        const bool branch_taken_0x1f0b4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F0B50u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1f0b4c) {
            ctx->pc = 0x1F0B58u;
            goto label_1f0b58;
        }
    }
    ctx->pc = 0x1F0B54u;
    // 0x1f0b54: 0x70002e28
    ctx->pc = 0x1f0b54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f0b58:
    // 0x1f0b58: 0xc07c154
    ctx->pc = 0x1F0B58u;
    SET_GPR_U32(ctx, 31, 0x1F0B60u);
    ctx->pc = 0x1F0550u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetLight__FP12GLOBAL_LIGHTP11LOCAL_LIGHT_0x1f0550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0B60u; }
        else if (ctx->pc != 0x1F0B60u) { ctx->pc = 0x1F0B60u; }
    }
    if (ctx->pc != 0x1F0B60u) { return; }
    ctx->pc = 0x1F0B60u;
    // 0x1f0b60: 0x7bbf0000
    ctx->pc = 0x1f0b60u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0b64: 0x3e00008
    ctx->pc = 0x1F0B64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0B68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0B48u: goto label_1f0b48;
            case 0x1F0B58u: goto label_1f0b58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F0B6Cu;
}
