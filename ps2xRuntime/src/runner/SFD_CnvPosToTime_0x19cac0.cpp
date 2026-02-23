#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_CnvPosToTime
// Address: 0x19cac0 - 0x19cb5c
void SFD_CnvPosToTime_0x19cac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_CnvPosToTime");


    ctx->pc = 0x19cac0u;

    // 0x19cac0: 0x27bdffa0
    ctx->pc = 0x19cac0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19cac4: 0x24020001
    ctx->pc = 0x19cac4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19cac8: 0xffb30040
    ctx->pc = 0x19cac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x19cacc: 0xffb20030
    ctx->pc = 0x19caccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x19cad0: 0xc0982d
    ctx->pc = 0x19cad0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cad4: 0xffb10020
    ctx->pc = 0x19cad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x19cad8: 0xa0902d
    ctx->pc = 0x19cad8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cadc: 0xffb00010
    ctx->pc = 0x19cadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19cae0: 0xe0882d
    ctx->pc = 0x19cae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cae4: 0xffbf0050
    ctx->pc = 0x19cae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x19cae8: 0x80802d
    ctx->pc = 0x19cae8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19caec: 0xae600000
    ctx->pc = 0x19caecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x19caf0: 0xc064f1e
    ctx->pc = 0x19CAF0u;
    SET_GPR_U32(ctx, 31, 0x19CAF8u);
    ctx->pc = 0x19CAF4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CAF8u; }
        else if (ctx->pc != 0x19CAF8u) { ctx->pc = 0x19CAF8u; }
    }
    if (ctx->pc != 0x19CAF8u) { return; }
    ctx->pc = 0x19CAF8u;
    // 0x19caf8: 0x10400006
    ctx->pc = 0x19CAF8u;
    {
        const bool branch_taken_0x19caf8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19CAFCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19caf8) {
            ctx->pc = 0x19CB14u;
            goto label_19cb14;
        }
    }
    ctx->pc = 0x19CB00u;
    // 0x19cb00: 0x3c05ff00
    ctx->pc = 0x19cb00u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19cb04: 0xc064ea0
    ctx->pc = 0x19CB04u;
    SET_GPR_U32(ctx, 31, 0x19CB0Cu);
    ctx->pc = 0x19CB08u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 343));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB0Cu; }
        else if (ctx->pc != 0x19CB0Cu) { ctx->pc = 0x19CB0Cu; }
    }
    if (ctx->pc != 0x19CB0Cu) { return; }
    ctx->pc = 0x19CB0Cu;
    // 0x19cb0c: 0x1000000d
    ctx->pc = 0x19CB0Cu;
    {
        const bool branch_taken_0x19cb0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19CB10u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x19cb0c) {
            ctx->pc = 0x19CB44u;
            goto label_19cb44;
        }
    }
    ctx->pc = 0x19CB14u;
label_19cb14:
    // 0x19cb14: 0x8e046758
    ctx->pc = 0x19cb14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 26456)));
    // 0x19cb18: 0xc06725c
    ctx->pc = 0x19CB18u;
    SET_GPR_U32(ctx, 31, 0x19CB20u);
    ctx->pc = 0x19CB1Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19C970u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfsee_IsSeekAble_0x19c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB20u; }
        else if (ctx->pc != 0x19CB20u) { ctx->pc = 0x19CB20u; }
    }
    if (ctx->pc != 0x19CB20u) { return; }
    ctx->pc = 0x19CB20u;
    // 0x19cb20: 0x8fa20000
    ctx->pc = 0x19cb20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19cb24: 0x10400005
    ctx->pc = 0x19CB24u;
    {
        const bool branch_taken_0x19cb24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19CB28u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19cb24) {
            ctx->pc = 0x19CB3Cu;
            goto label_19cb3c;
        }
    }
    ctx->pc = 0x19CB2Cu;
    // 0x19cb2c: 0x8e046758
    ctx->pc = 0x19cb2cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 26456)));
    // 0x19cb30: 0x260302d
    ctx->pc = 0x19cb30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cb34: 0xc0672d8
    ctx->pc = 0x19CB34u;
    SET_GPR_U32(ctx, 31, 0x19CB3Cu);
    ctx->pc = 0x19CB38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19CB60u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfsee_CnvPosToTime_0x19cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CB3Cu; }
        else if (ctx->pc != 0x19CB3Cu) { ctx->pc = 0x19CB3Cu; }
    }
    if (ctx->pc != 0x19CB3Cu) { return; }
    ctx->pc = 0x19CB3Cu;
label_19cb3c:
    // 0x19cb3c: 0x102d
    ctx->pc = 0x19cb3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19cb40: 0xdfbf0050
    ctx->pc = 0x19cb40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19cb44:
    // 0x19cb44: 0xdfb30040
    ctx->pc = 0x19cb44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19cb48: 0xdfb20030
    ctx->pc = 0x19cb48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19cb4c: 0xdfb10020
    ctx->pc = 0x19cb4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19cb50: 0xdfb00010
    ctx->pc = 0x19cb50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19cb54: 0x3e00008
    ctx->pc = 0x19CB54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CB58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19CB14u: goto label_19cb14;
            case 0x19CB3Cu: goto label_19cb3c;
            case 0x19CB44u: goto label_19cb44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19CB5Cu;
}
