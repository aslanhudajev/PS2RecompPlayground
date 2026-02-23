#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfadxt_ExecServerSub
// Address: 0x18fcf0 - 0x18fd80
void sfadxt_ExecServerSub_0x18fcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfadxt_ExecServerSub");


    ctx->pc = 0x18fcf0u;

    // 0x18fcf0: 0x27bdffc0
    ctx->pc = 0x18fcf0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18fcf4: 0x24050006
    ctx->pc = 0x18fcf4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    // 0x18fcf8: 0xffb10020
    ctx->pc = 0x18fcf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x18fcfc: 0x80882d
    ctx->pc = 0x18fcfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fd00: 0xffbf0030
    ctx->pc = 0x18fd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18fd04: 0xc0674c2
    ctx->pc = 0x18FD04u;
    SET_GPR_U32(ctx, 31, 0x18FD0Cu);
    ctx->pc = 0x18FD08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD0Cu; }
        else if (ctx->pc != 0x18FD0Cu) { ctx->pc = 0x18FD0Cu; }
    }
    if (ctx->pc != 0x18FD0Cu) { return; }
    ctx->pc = 0x18FD0Cu;
    // 0x18fd0c: 0x10400017
    ctx->pc = 0x18FD0Cu;
    {
        const bool branch_taken_0x18fd0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18FD10u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18fd0c) {
            ctx->pc = 0x18FD6Cu;
            goto label_18fd6c;
        }
    }
    ctx->pc = 0x18FD14u;
    // 0x18fd14: 0xc06420e
    ctx->pc = 0x18FD14u;
    SET_GPR_U32(ctx, 31, 0x18FD1Cu);
    ctx->pc = 0x18FD18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x190838u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfadxt_GetTermDst_0x190838(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD1Cu; }
        else if (ctx->pc != 0x18FD1Cu) { ctx->pc = 0x18FD1Cu; }
    }
    if (ctx->pc != 0x18FD1Cu) { return; }
    ctx->pc = 0x18FD1Cu;
    // 0x18fd1c: 0x24030001
    ctx->pc = 0x18fd1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18fd20: 0x54430003
    ctx->pc = 0x18FD20u;
    {
        const bool branch_taken_0x18fd20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x18fd20) {
            ctx->pc = 0x18FD24u;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x18FD30u;
            goto label_18fd30;
        }
    }
    ctx->pc = 0x18FD28u;
    // 0x18fd28: 0x10000010
    ctx->pc = 0x18FD28u;
    {
        const bool branch_taken_0x18fd28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18FD2Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18fd28) {
            ctx->pc = 0x18FD6Cu;
            goto label_18fd6c;
        }
    }
    ctx->pc = 0x18FD30u;
label_18fd30:
    // 0x18fd30: 0xc063f60
    ctx->pc = 0x18FD30u;
    SET_GPR_U32(ctx, 31, 0x18FD38u);
    ctx->pc = 0x18FD34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18FD80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfadxt_SupplyData_0x18fd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD38u; }
        else if (ctx->pc != 0x18FD38u) { ctx->pc = 0x18FD38u; }
    }
    if (ctx->pc != 0x18FD38u) { return; }
    ctx->pc = 0x18FD38u;
    // 0x18fd38: 0x40802d
    ctx->pc = 0x18fd38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fd3c: 0xc064166
    ctx->pc = 0x18FD3Cu;
    SET_GPR_U32(ctx, 31, 0x18FD44u);
    ctx->pc = 0x18FD40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x190598u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfadxt_ChkPrepFlg_0x190598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD44u; }
        else if (ctx->pc != 0x18FD44u) { ctx->pc = 0x18FD44u; }
    }
    if (ctx->pc != 0x18FD44u) { return; }
    ctx->pc = 0x18FD44u;
    // 0x18fd44: 0x8fa50000
    ctx->pc = 0x18fd44u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18fd48: 0xc064198
    ctx->pc = 0x18FD48u;
    SET_GPR_U32(ctx, 31, 0x18FD50u);
    ctx->pc = 0x18FD4Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x190660u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfadxt_ChkTermFlg_0x190660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD50u; }
        else if (ctx->pc != 0x18FD50u) { ctx->pc = 0x18FD50u; }
    }
    if (ctx->pc != 0x18FD50u) { return; }
    ctx->pc = 0x18FD50u;
    // 0x18fd50: 0xc06421a
    ctx->pc = 0x18FD50u;
    SET_GPR_U32(ctx, 31, 0x18FD58u);
    ctx->pc = 0x18FD54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x190868u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfadxt_SetAdxtHd_0x190868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD58u; }
        else if (ctx->pc != 0x18FD58u) { ctx->pc = 0x18FD58u; }
    }
    if (ctx->pc != 0x18FD58u) { return; }
    ctx->pc = 0x18FD58u;
    // 0x18fd58: 0xc064250
    ctx->pc = 0x18FD58u;
    SET_GPR_U32(ctx, 31, 0x18FD60u);
    ctx->pc = 0x18FD5Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x190940u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfadxt_SetSvrFreq_0x190940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD60u; }
        else if (ctx->pc != 0x18FD60u) { ctx->pc = 0x18FD60u; }
    }
    if (ctx->pc != 0x18FD60u) { return; }
    ctx->pc = 0x18FD60u;
    // 0x18fd60: 0xc063f12
    ctx->pc = 0x18FD60u;
    SET_GPR_U32(ctx, 31, 0x18FD68u);
    ctx->pc = 0x18FD64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18FC48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfadxt_HeadDecCallBack_0x18fc48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FD68u; }
        else if (ctx->pc != 0x18FD68u) { ctx->pc = 0x18FD68u; }
    }
    if (ctx->pc != 0x18FD68u) { return; }
    ctx->pc = 0x18FD68u;
    // 0x18fd68: 0x200102d
    ctx->pc = 0x18fd68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18fd6c:
    // 0x18fd6c: 0xdfbf0030
    ctx->pc = 0x18fd6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18fd70: 0xdfb10020
    ctx->pc = 0x18fd70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18fd74: 0xdfb00010
    ctx->pc = 0x18fd74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18fd78: 0x3e00008
    ctx->pc = 0x18FD78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FD7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18FD30u: goto label_18fd30;
            case 0x18FD6Cu: goto label_18fd6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18FD80u;
}
