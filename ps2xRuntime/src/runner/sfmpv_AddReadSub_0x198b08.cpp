#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_AddReadSub
// Address: 0x198b08 - 0x198b8c
void sfmpv_AddReadSub_0x198b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_AddReadSub");


    ctx->pc = 0x198b08u;

    // 0x198b08: 0x27bdfff0
    ctx->pc = 0x198b08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x198b0c: 0x80382d
    ctx->pc = 0x198b0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b10: 0xffbf0000
    ctx->pc = 0x198b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x198b14: 0x24020388
    ctx->pc = 0x198b14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 904));
    // 0x198b18: 0x24e60d34
    ctx->pc = 0x198b18u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 7), 3380));
    // 0x198b1c: 0x8ce33de8
    ctx->pc = 0x198b1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 15848)));
    // 0x198b20: 0x24040001
    ctx->pc = 0x198b20u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x198b24: 0x621818
    ctx->pc = 0x198b24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x198b28: 0xc33021
    ctx->pc = 0x198b28u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x198b2c: 0x8cc20020
    ctx->pc = 0x198b2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x198b30: 0x10440007
    ctx->pc = 0x198B30u;
    {
        const bool branch_taken_0x198b30 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x198B34u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 7), 14144));
        if (branch_taken_0x198b30) {
            ctx->pc = 0x198B50u;
            goto label_198b50;
        }
    }
    ctx->pc = 0x198B38u;
    // 0x198b38: 0x3c05ff00
    ctx->pc = 0x198b38u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x198b3c: 0xe0202d
    ctx->pc = 0x198b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b40: 0xc064ea0
    ctx->pc = 0x198B40u;
    SET_GPR_U32(ctx, 31, 0x198B48u);
    ctx->pc = 0x198B44u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3854));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198B48u; }
        else if (ctx->pc != 0x198B48u) { ctx->pc = 0x198B48u; }
    }
    if (ctx->pc != 0x198B48u) { return; }
    ctx->pc = 0x198B48u;
    // 0x198b48: 0x1000000e
    ctx->pc = 0x198B48u;
    {
        const bool branch_taken_0x198b48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x198B4Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x198b48) {
            ctx->pc = 0x198B84u;
            goto label_198b84;
        }
    }
    ctx->pc = 0x198B50u;
label_198b50:
    // 0x198b50: 0x24c20024
    ctx->pc = 0x198b50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 36));
    // 0x198b54: 0x10450006
    ctx->pc = 0x198B54u;
    {
        const bool branch_taken_0x198b54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x198B58u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x198b54) {
            ctx->pc = 0x198B70u;
            goto label_198b70;
        }
    }
    ctx->pc = 0x198B5Cu;
    // 0x198b5c: 0x3c05ff00
    ctx->pc = 0x198b5cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x198b60: 0xc064ea0
    ctx->pc = 0x198B60u;
    SET_GPR_U32(ctx, 31, 0x198B68u);
    ctx->pc = 0x198B64u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3855));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198B68u; }
        else if (ctx->pc != 0x198B68u) { ctx->pc = 0x198B68u; }
    }
    if (ctx->pc != 0x198B68u) { return; }
    ctx->pc = 0x198B68u;
    // 0x198b68: 0x10000006
    ctx->pc = 0x198B68u;
    {
        const bool branch_taken_0x198b68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x198B6Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x198b68) {
            ctx->pc = 0x198B84u;
            goto label_198b84;
        }
    }
    ctx->pc = 0x198B70u;
label_198b70:
    // 0x198b70: 0x8d040028
    ctx->pc = 0x198b70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x198b74: 0xc0663f6
    ctx->pc = 0x198B74u;
    SET_GPR_U32(ctx, 31, 0x198B7Cu);
    ctx->pc = 0x198B78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    ctx->pc = 0x198FD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFMPVF_EndDrawFrm_0x198fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198B7Cu; }
        else if (ctx->pc != 0x198B7Cu) { ctx->pc = 0x198B7Cu; }
    }
    if (ctx->pc != 0x198B7Cu) { return; }
    ctx->pc = 0x198B7Cu;
    // 0x198b7c: 0x102d
    ctx->pc = 0x198b7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198b80: 0xdfbf0000
    ctx->pc = 0x198b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_198b84:
    // 0x198b84: 0x3e00008
    ctx->pc = 0x198B84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198B88u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198B50u: goto label_198b50;
            case 0x198B70u: goto label_198b70;
            case 0x198B84u: goto label_198b84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198B8Cu;
}
