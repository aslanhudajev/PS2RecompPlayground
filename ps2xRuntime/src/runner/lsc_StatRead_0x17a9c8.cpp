#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: lsc_StatRead
// Address: 0x17a9c8 - 0x17aa70
void lsc_StatRead_0x17a9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("lsc_StatRead");


    ctx->pc = 0x17a9c8u;

    // 0x17a9c8: 0x27bdffd0
    ctx->pc = 0x17a9c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17a9cc: 0xffb00000
    ctx->pc = 0x17a9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17a9d0: 0xffbf0020
    ctx->pc = 0x17a9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17a9d4: 0x80802d
    ctx->pc = 0x17a9d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a9d8: 0xffb10010
    ctx->pc = 0x17a9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17a9dc: 0x8e040028
    ctx->pc = 0x17a9dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x17a9e0: 0x54800008
    ctx->pc = 0x17A9E0u;
    {
        const bool branch_taken_0x17a9e0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x17a9e0) {
            ctx->pc = 0x17A9E4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->pc = 0x17AA04u;
            goto label_17aa04;
        }
    }
    ctx->pc = 0x17A9E8u;
    // 0x17a9e8: 0x3c04002c
    ctx->pc = 0x17a9e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17a9ec: 0xdfbf0020
    ctx->pc = 0x17a9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a9f0: 0xdfb10010
    ctx->pc = 0x17a9f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a9f4: 0x2484bba0
    ctx->pc = 0x17a9f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949792));
    // 0x17a9f8: 0xdfb00000
    ctx->pc = 0x17a9f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a9fc: 0x805e9c6
    ctx->pc = 0x17A9FCu;
    ctx->pc = 0x17AA00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x17A718u;
    LSC_CallErrFunc_0x17a718(rdram, ctx, runtime); return;
    ctx->pc = 0x17AA04u;
label_17aa04:
    // 0x17aa04: 0x21180
    ctx->pc = 0x17aa04u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x17aa08: 0x24420038
    ctx->pc = 0x17aa08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 56));
    // 0x17aa0c: 0xc05c2e0
    ctx->pc = 0x17AA0Cu;
    SET_GPR_U32(ctx, 31, 0x17AA14u);
    ctx->pc = 0x17AA10u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->pc = 0x170B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_GetStat_0x170b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AA14u; }
        else if (ctx->pc != 0x17AA14u) { ctx->pc = 0x17AA14u; }
    }
    if (ctx->pc != 0x17AA14u) { return; }
    ctx->pc = 0x17AA14u;
    // 0x17aa14: 0x40182d
    ctx->pc = 0x17aa14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aa18: 0x24020004
    ctx->pc = 0x17aa18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x17aa1c: 0x14620004
    ctx->pc = 0x17AA1Cu;
    {
        const bool branch_taken_0x17aa1c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x17AA20u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x17aa1c) {
            ctx->pc = 0x17AA30u;
            goto label_17aa30;
        }
    }
    ctx->pc = 0x17AA24u;
    // 0x17aa24: 0x24020003
    ctx->pc = 0x17aa24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x17aa28: 0x1000000c
    ctx->pc = 0x17AA28u;
    {
        const bool branch_taken_0x17aa28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17AA2Cu;
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x17aa28) {
            ctx->pc = 0x17AA5Cu;
            goto label_17aa5c;
        }
    }
    ctx->pc = 0x17AA30u;
label_17aa30:
    // 0x17aa30: 0x14640005
    ctx->pc = 0x17AA30u;
    {
        const bool branch_taken_0x17aa30 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x17AA34u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x17aa30) {
            ctx->pc = 0x17AA48u;
            goto label_17aa48;
        }
    }
    ctx->pc = 0x17AA38u;
    // 0x17aa38: 0xc05c2f4
    ctx->pc = 0x17AA38u;
    SET_GPR_U32(ctx, 31, 0x17AA40u);
    ctx->pc = 0x17AA3Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->pc = 0x170BD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Tell_0x170bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AA40u; }
        else if (ctx->pc != 0x17AA40u) { ctx->pc = 0x17AA40u; }
    }
    if (ctx->pc != 0x17AA40u) { return; }
    ctx->pc = 0x17AA40u;
    // 0x17aa40: 0x10000006
    ctx->pc = 0x17AA40u;
    {
        const bool branch_taken_0x17aa40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17AA44u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
        if (branch_taken_0x17aa40) {
            ctx->pc = 0x17AA5Cu;
            goto label_17aa5c;
        }
    }
    ctx->pc = 0x17AA48u;
label_17aa48:
    // 0x17aa48: 0x14620005
    ctx->pc = 0x17AA48u;
    {
        const bool branch_taken_0x17aa48 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x17AA4Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x17aa48) {
            ctx->pc = 0x17AA60u;
            goto label_17aa60;
        }
    }
    ctx->pc = 0x17AA50u;
    // 0x17aa50: 0x8e02002c
    ctx->pc = 0x17aa50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x17aa54: 0xae240038
    ctx->pc = 0x17aa54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 4));
    // 0x17aa58: 0xae22003c
    ctx->pc = 0x17aa58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
label_17aa5c:
    // 0x17aa5c: 0xdfbf0020
    ctx->pc = 0x17aa5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17aa60:
    // 0x17aa60: 0xdfb10010
    ctx->pc = 0x17aa60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17aa64: 0xdfb00000
    ctx->pc = 0x17aa64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17aa68: 0x3e00008
    ctx->pc = 0x17AA68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AA6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17AA04u: goto label_17aa04;
            case 0x17AA30u: goto label_17aa30;
            case 0x17AA48u: goto label_17aa48;
            case 0x17AA5Cu: goto label_17aa5c;
            case 0x17AA60u: goto label_17aa60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17AA70u;
}
