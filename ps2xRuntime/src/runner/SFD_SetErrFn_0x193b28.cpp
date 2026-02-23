#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_SetErrFn
// Address: 0x193b28 - 0x193bb0
void SFD_SetErrFn_0x193b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_SetErrFn");


    ctx->pc = 0x193b28u;

    // 0x193b28: 0x27bdffc0
    ctx->pc = 0x193b28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x193b2c: 0xffb20020
    ctx->pc = 0x193b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x193b30: 0xffb10010
    ctx->pc = 0x193b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x193b34: 0xc0902d
    ctx->pc = 0x193b34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b38: 0xffb00000
    ctx->pc = 0x193b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x193b3c: 0xa0882d
    ctx->pc = 0x193b3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b40: 0x80802d
    ctx->pc = 0x193b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b44: 0x16000006
    ctx->pc = 0x193B44u;
    {
        const bool branch_taken_0x193b44 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x193B48u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        if (branch_taken_0x193b44) {
            ctx->pc = 0x193B60u;
            goto label_193b60;
        }
    }
    ctx->pc = 0x193B4Cu;
    // 0x193b4c: 0x3c040026
    ctx->pc = 0x193b4cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)38 << 16));
    // 0x193b50: 0xc064eec
    ctx->pc = 0x193B50u;
    SET_GPR_U32(ctx, 31, 0x193B58u);
    ctx->pc = 0x193B54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294958804));
    ctx->pc = 0x193BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sflib_SetErrFnSub_0x193bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B58u; }
        else if (ctx->pc != 0x193B58u) { ctx->pc = 0x193B58u; }
    }
    if (ctx->pc != 0x193B58u) { return; }
    ctx->pc = 0x193B58u;
    // 0x193b58: 0x1000000f
    ctx->pc = 0x193B58u;
    {
        const bool branch_taken_0x193b58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x193B5Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x193b58) {
            ctx->pc = 0x193B98u;
            goto label_193b98;
        }
    }
    ctx->pc = 0x193B60u;
label_193b60:
    // 0x193b60: 0xc064f1e
    ctx->pc = 0x193B60u;
    SET_GPR_U32(ctx, 31, 0x193B68u);
    ctx->pc = 0x193B64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B68u; }
        else if (ctx->pc != 0x193B68u) { ctx->pc = 0x193B68u; }
    }
    if (ctx->pc != 0x193B68u) { return; }
    ctx->pc = 0x193B68u;
    // 0x193b68: 0x10400006
    ctx->pc = 0x193B68u;
    {
        const bool branch_taken_0x193b68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x193B6Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x193b68) {
            ctx->pc = 0x193B84u;
            goto label_193b84;
        }
    }
    ctx->pc = 0x193B70u;
    // 0x193b70: 0x3c05ff00
    ctx->pc = 0x193b70u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x193b74: 0xc064ea0
    ctx->pc = 0x193B74u;
    SET_GPR_U32(ctx, 31, 0x193B7Cu);
    ctx->pc = 0x193B78u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 257));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B7Cu; }
        else if (ctx->pc != 0x193B7Cu) { ctx->pc = 0x193B7Cu; }
    }
    if (ctx->pc != 0x193B7Cu) { return; }
    ctx->pc = 0x193B7Cu;
    // 0x193b7c: 0x10000007
    ctx->pc = 0x193B7Cu;
    {
        const bool branch_taken_0x193b7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x193B80u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x193b7c) {
            ctx->pc = 0x193B9Cu;
            goto label_193b9c;
        }
    }
    ctx->pc = 0x193B84u;
label_193b84:
    // 0x193b84: 0x26040980
    ctx->pc = 0x193b84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 2432));
    // 0x193b88: 0x220282d
    ctx->pc = 0x193b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193b8c: 0xc064eec
    ctx->pc = 0x193B8Cu;
    SET_GPR_U32(ctx, 31, 0x193B94u);
    ctx->pc = 0x193B90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193BB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sflib_SetErrFnSub_0x193bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193B94u; }
        else if (ctx->pc != 0x193B94u) { ctx->pc = 0x193B94u; }
    }
    if (ctx->pc != 0x193B94u) { return; }
    ctx->pc = 0x193B94u;
    // 0x193b94: 0x102d
    ctx->pc = 0x193b94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193b98:
    // 0x193b98: 0xdfbf0030
    ctx->pc = 0x193b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_193b9c:
    // 0x193b9c: 0xdfb20020
    ctx->pc = 0x193b9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x193ba0: 0xdfb10010
    ctx->pc = 0x193ba0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x193ba4: 0xdfb00000
    ctx->pc = 0x193ba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193ba8: 0x3e00008
    ctx->pc = 0x193BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193BACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x193B60u: goto label_193b60;
            case 0x193B84u: goto label_193b84;
            case 0x193B98u: goto label_193b98;
            case 0x193B9Cu: goto label_193b9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x193BB0u;
}
