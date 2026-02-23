#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_CnvTimeToPos
// Address: 0x19c9d8 - 0x19ca6c
void SFD_CnvTimeToPos_0x19c9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_CnvTimeToPos");


    ctx->pc = 0x19c9d8u;

    // 0x19c9d8: 0x27bdffa0
    ctx->pc = 0x19c9d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19c9dc: 0xffb10020
    ctx->pc = 0x19c9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x19c9e0: 0xffb30040
    ctx->pc = 0x19c9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x19c9e4: 0xe0882d
    ctx->pc = 0x19c9e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c9e8: 0xffb20030
    ctx->pc = 0x19c9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x19c9ec: 0xc0982d
    ctx->pc = 0x19c9ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c9f0: 0xffb00010
    ctx->pc = 0x19c9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x19c9f4: 0xa0902d
    ctx->pc = 0x19c9f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c9f8: 0xffbf0050
    ctx->pc = 0x19c9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x19c9fc: 0x80802d
    ctx->pc = 0x19c9fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ca00: 0xc064f1e
    ctx->pc = 0x19CA00u;
    SET_GPR_U32(ctx, 31, 0x19CA08u);
    ctx->pc = 0x19CA04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA08u; }
        else if (ctx->pc != 0x19CA08u) { ctx->pc = 0x19CA08u; }
    }
    if (ctx->pc != 0x19CA08u) { return; }
    ctx->pc = 0x19CA08u;
    // 0x19ca08: 0x10400006
    ctx->pc = 0x19CA08u;
    {
        const bool branch_taken_0x19ca08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19CA0Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19ca08) {
            ctx->pc = 0x19CA24u;
            goto label_19ca24;
        }
    }
    ctx->pc = 0x19CA10u;
    // 0x19ca10: 0x3c05ff00
    ctx->pc = 0x19ca10u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19ca14: 0xc064ea0
    ctx->pc = 0x19CA14u;
    SET_GPR_U32(ctx, 31, 0x19CA1Cu);
    ctx->pc = 0x19CA18u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 342));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA1Cu; }
        else if (ctx->pc != 0x19CA1Cu) { ctx->pc = 0x19CA1Cu; }
    }
    if (ctx->pc != 0x19CA1Cu) { return; }
    ctx->pc = 0x19CA1Cu;
    // 0x19ca1c: 0x1000000d
    ctx->pc = 0x19CA1Cu;
    {
        const bool branch_taken_0x19ca1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19CA20u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x19ca1c) {
            ctx->pc = 0x19CA54u;
            goto label_19ca54;
        }
    }
    ctx->pc = 0x19CA24u;
label_19ca24:
    // 0x19ca24: 0x8e046758
    ctx->pc = 0x19ca24u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 26456)));
    // 0x19ca28: 0xc06725c
    ctx->pc = 0x19CA28u;
    SET_GPR_U32(ctx, 31, 0x19CA30u);
    ctx->pc = 0x19CA2Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19C970u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfsee_IsSeekAble_0x19c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA30u; }
        else if (ctx->pc != 0x19CA30u) { ctx->pc = 0x19CA30u; }
    }
    if (ctx->pc != 0x19CA30u) { return; }
    ctx->pc = 0x19CA30u;
    // 0x19ca30: 0x8fa20000
    ctx->pc = 0x19ca30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ca34: 0x10400005
    ctx->pc = 0x19CA34u;
    {
        const bool branch_taken_0x19ca34 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19CA38u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19ca34) {
            ctx->pc = 0x19CA4Cu;
            goto label_19ca4c;
        }
    }
    ctx->pc = 0x19CA3Cu;
    // 0x19ca3c: 0x8e046758
    ctx->pc = 0x19ca3cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 26456)));
    // 0x19ca40: 0x260302d
    ctx->pc = 0x19ca40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ca44: 0xc06729c
    ctx->pc = 0x19CA44u;
    SET_GPR_U32(ctx, 31, 0x19CA4Cu);
    ctx->pc = 0x19CA48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19CA70u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfsee_CnvTimeToPos_0x19ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CA4Cu; }
        else if (ctx->pc != 0x19CA4Cu) { ctx->pc = 0x19CA4Cu; }
    }
    if (ctx->pc != 0x19CA4Cu) { return; }
    ctx->pc = 0x19CA4Cu;
label_19ca4c:
    // 0x19ca4c: 0x102d
    ctx->pc = 0x19ca4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ca50: 0xdfbf0050
    ctx->pc = 0x19ca50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19ca54:
    // 0x19ca54: 0xdfb30040
    ctx->pc = 0x19ca54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19ca58: 0xdfb20030
    ctx->pc = 0x19ca58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19ca5c: 0xdfb10020
    ctx->pc = 0x19ca5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ca60: 0xdfb00010
    ctx->pc = 0x19ca60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ca64: 0x3e00008
    ctx->pc = 0x19CA64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CA68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19CA24u: goto label_19ca24;
            case 0x19CA4Cu: goto label_19ca4c;
            case 0x19CA54u: goto label_19ca54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19CA6Cu;
}
