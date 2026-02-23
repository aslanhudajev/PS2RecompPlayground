#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_IsEmptyBpic
// Address: 0x197b28 - 0x197bb4
void sfmpv_IsEmptyBpic_0x197b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_IsEmptyBpic");


    ctx->pc = 0x197b28u;

    // 0x197b28: 0x27bdffd0
    ctx->pc = 0x197b28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x197b2c: 0x24020003
    ctx->pc = 0x197b2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x197b30: 0xffb10010
    ctx->pc = 0x197b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x197b34: 0xffb00000
    ctx->pc = 0x197b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x197b38: 0xc0882d
    ctx->pc = 0x197b38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b3c: 0xffbf0020
    ctx->pc = 0x197b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x197b40: 0x14a20006
    ctx->pc = 0x197B40u;
    {
        const bool branch_taken_0x197b40 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x197B44u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x197b40) {
            ctx->pc = 0x197B5Cu;
            goto label_197b5c;
        }
    }
    ctx->pc = 0x197B48u;
    // 0x197b48: 0x200202d
    ctx->pc = 0x197b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b4c: 0xc0674c2
    ctx->pc = 0x197B4Cu;
    SET_GPR_U32(ctx, 31, 0x197B54u);
    ctx->pc = 0x197B50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197B54u; }
        else if (ctx->pc != 0x197B54u) { ctx->pc = 0x197B54u; }
    }
    if (ctx->pc != 0x197B54u) { return; }
    ctx->pc = 0x197B54u;
    // 0x197b54: 0x10400003
    ctx->pc = 0x197B54u;
    {
        const bool branch_taken_0x197b54 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x197B58u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 2304));
        if (branch_taken_0x197b54) {
            ctx->pc = 0x197B64u;
            goto label_197b64;
        }
    }
    ctx->pc = 0x197B5Cu;
label_197b5c:
    // 0x197b5c: 0x10000010
    ctx->pc = 0x197B5Cu;
    {
        const bool branch_taken_0x197b5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x197B60u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x197b5c) {
            ctx->pc = 0x197BA0u;
            goto label_197ba0;
        }
    }
    ctx->pc = 0x197B64u;
label_197b64:
    // 0x197b64: 0x8e250004
    ctx->pc = 0x197b64u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x197b68: 0x8c460008
    ctx->pc = 0x197b68u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x197b6c: 0x26100940
    ctx->pc = 0x197b6cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 2368));
    // 0x197b70: 0x8c43000c
    ctx->pc = 0x197b70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x197b74: 0xc30018
    ctx->pc = 0x197b74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 0, (int32_t)(uint32_t)result); }
    // 0x197b78: 0x3012
    ctx->pc = 0x197b78u;
    SET_GPR_U32(ctx, 6, ctx->lo);
    // 0x197b7c: 0xc0616ec
    ctx->pc = 0x197B7Cu;
    SET_GPR_U32(ctx, 31, 0x197B84u);
    ctx->pc = 0x197B80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x185BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPV_IsEmptyBpic_0x185bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197B84u; }
        else if (ctx->pc != 0x197B84u) { ctx->pc = 0x197B84u; }
    }
    if (ctx->pc != 0x197B84u) { return; }
    ctx->pc = 0x197B84u;
    // 0x197b84: 0x40182d
    ctx->pc = 0x197b84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b88: 0x10600005
    ctx->pc = 0x197B88u;
    {
        const bool branch_taken_0x197b88 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x197B8Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x197b88) {
            ctx->pc = 0x197BA0u;
            goto label_197ba0;
        }
    }
    ctx->pc = 0x197B90u;
    // 0x197b90: 0x8e020010
    ctx->pc = 0x197b90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x197b94: 0x24420001
    ctx->pc = 0x197b94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x197b98: 0xae020010
    ctx->pc = 0x197b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x197b9c: 0x60102d
    ctx->pc = 0x197b9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_197ba0:
    // 0x197ba0: 0xdfbf0020
    ctx->pc = 0x197ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197ba4: 0xdfb10010
    ctx->pc = 0x197ba4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197ba8: 0xdfb00000
    ctx->pc = 0x197ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197bac: 0x3e00008
    ctx->pc = 0x197BACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197BB0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197B5Cu: goto label_197b5c;
            case 0x197B64u: goto label_197b64;
            case 0x197BA0u: goto label_197ba0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x197BB4u;
}
