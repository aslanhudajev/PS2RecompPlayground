#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PopLight__13LightCtrlTaskFv
// Address: 0x1f0cb0 - 0x1f0d50
void PopLight__13LightCtrlTaskFv_0x1f0cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PopLight__13LightCtrlTaskFv");


    ctx->pc = 0x1f0cb0u;

    // 0x1f0cb0: 0x27bdffe0
    ctx->pc = 0x1f0cb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f0cb4: 0x7fbf0010
    ctx->pc = 0x1f0cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1f0cb8: 0x7fb00000
    ctx->pc = 0x1f0cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f0cbc: 0x8c82000c
    ctx->pc = 0x1f0cbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1f0cc0: 0x70808628
    ctx->pc = 0x1f0cc0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1f0cc4: 0x2442ffff
    ctx->pc = 0x1f0cc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f0cc8: 0x4410002
    ctx->pc = 0x1F0CC8u;
    {
        const bool branch_taken_0x1f0cc8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1F0CCCu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x1f0cc8) {
            ctx->pc = 0x1F0CD4u;
            goto label_1f0cd4;
        }
    }
    ctx->pc = 0x1F0CD0u;
    // 0x1f0cd0: 0xae00000c
    ctx->pc = 0x1f0cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1f0cd4:
    // 0x1f0cd4: 0x8e04000c
    ctx->pc = 0x1f0cd4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f0cd8: 0x8e020004
    ctx->pc = 0x1f0cd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f0cdc: 0x26050180
    ctx->pc = 0x1f0cdcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 384));
    // 0x1f0ce0: 0x41840
    ctx->pc = 0x1f0ce0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1f0ce4: 0x641821
    ctx->pc = 0x1f0ce4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f0ce8: 0x318c0
    ctx->pc = 0x1f0ce8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f0cec: 0x641823
    ctx->pc = 0x1f0cecu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f0cf0: 0x31880
    ctx->pc = 0x1f0cf0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f0cf4: 0x2031821
    ctx->pc = 0x1f0cf4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1f0cf8: 0x14400002
    ctx->pc = 0x1F0CF8u;
    {
        const bool branch_taken_0x1f0cf8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1F0CFCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 16));
        if (branch_taken_0x1f0cf8) {
            ctx->pc = 0x1F0D04u;
            goto label_1f0d04;
        }
    }
    ctx->pc = 0x1F0D00u;
    // 0x1f0d00: 0x70002628
    ctx->pc = 0x1f0d00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f0d04:
    // 0x1f0d04: 0x8e020008
    ctx->pc = 0x1f0d04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f0d08: 0x14400002
    ctx->pc = 0x1F0D08u;
    {
        const bool branch_taken_0x1f0d08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1f0d08) {
            ctx->pc = 0x1F0D14u;
            goto label_1f0d14;
        }
    }
    ctx->pc = 0x1F0D10u;
    // 0x1f0d10: 0x70002e28
    ctx->pc = 0x1f0d10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1f0d14:
    // 0x1f0d14: 0xc07c154
    ctx->pc = 0x1F0D14u;
    SET_GPR_U32(ctx, 31, 0x1F0D1Cu);
    ctx->pc = 0x1F0550u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetLight__FP12GLOBAL_LIGHTP11LOCAL_LIGHT_0x1f0550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F0D1Cu; }
        else if (ctx->pc != 0x1F0D1Cu) { ctx->pc = 0x1F0D1Cu; }
    }
    if (ctx->pc != 0x1F0D1Cu) { return; }
    ctx->pc = 0x1F0D1Cu;
    // 0x1f0d1c: 0x8e04000c
    ctx->pc = 0x1f0d1cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f0d20: 0x41840
    ctx->pc = 0x1f0d20u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1f0d24: 0x641821
    ctx->pc = 0x1f0d24u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f0d28: 0x318c0
    ctx->pc = 0x1f0d28u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1f0d2c: 0x641823
    ctx->pc = 0x1f0d2cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f0d30: 0x31880
    ctx->pc = 0x1f0d30u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f0d34: 0x2031821
    ctx->pc = 0x1f0d34u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1f0d38: 0x24630010
    ctx->pc = 0x1f0d38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
    // 0x1f0d3c: 0xaf838d44
    ctx->pc = 0x1f0d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937924), GPR_U32(ctx, 3));
    // 0x1f0d40: 0x7bbf0010
    ctx->pc = 0x1f0d40u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0d44: 0x7bb00000
    ctx->pc = 0x1f0d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0d48: 0x3e00008
    ctx->pc = 0x1F0D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0D4Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F0CD4u: goto label_1f0cd4;
            case 0x1F0D04u: goto label_1f0d04;
            case 0x1F0D14u: goto label_1f0d14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F0D50u;
}
