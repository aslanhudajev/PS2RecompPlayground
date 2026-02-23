#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_Stop
// Address: 0x171ce8 - 0x171d48
void ADXT_Stop_0x171ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_Stop");


    ctx->pc = 0x171ce8u;

label_171ce8:
    // 0x171ce8: 0x27bdffe0
    ctx->pc = 0x171ce8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
label_171cec:
    // 0x171cec: 0xffb00000
    ctx->pc = 0x171cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_171cf0:
    // 0x171cf0: 0xffbf0010
    ctx->pc = 0x171cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_171cf4:
    // 0x171cf4: 0xc05a4e4
label_171cf8:
    if (ctx->pc == 0x171CF8u) {
        ctx->pc = 0x171CF8u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171CFCu;
        goto label_171cfc;
    }
    ctx->pc = 0x171CF4u;
    SET_GPR_U32(ctx, 31, 0x171CFCu);
    ctx->pc = 0x171CF8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x169390u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Lock_0x169390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171CFCu; }
        else if (ctx->pc != 0x171CFCu) { ctx->pc = 0x171CFCu; }
    }
    if (ctx->pc != 0x171CFCu) { return; }
    ctx->pc = 0x171CFCu;
label_171cfc:
    // 0x171cfc: 0x82030002
    ctx->pc = 0x171cfcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_171d00:
    // 0x171d00: 0x24020004
    ctx->pc = 0x171d00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_171d04:
    // 0x171d04: 0x1462000a
label_171d08:
    if (ctx->pc == 0x171D08u) {
        ctx->pc = 0x171D0Cu;
        goto label_171d0c;
    }
    ctx->pc = 0x171D04u;
    {
        const bool branch_taken_0x171d04 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x171d04) {
            ctx->pc = 0x171D30u;
            goto label_171d30;
        }
    }
    ctx->pc = 0x171D0Cu;
label_171d0c:
    // 0x171d0c: 0xc05e88e
label_171d10:
    if (ctx->pc == 0x171D10u) {
        ctx->pc = 0x171D10u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->pc = 0x171D14u;
        goto label_171d14;
    }
    ctx->pc = 0x171D0Cu;
    SET_GPR_U32(ctx, 31, 0x171D14u);
    ctx->pc = 0x171D10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 148)));
    ctx->pc = 0x17A238u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_Stop_0x17a238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171D14u; }
        else if (ctx->pc != 0x171D14u) { ctx->pc = 0x171D14u; }
    }
    if (ctx->pc != 0x171D14u) { return; }
    ctx->pc = 0x171D14u;
label_171d14:
    // 0x171d14: 0x8e040014
    ctx->pc = 0x171d14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_171d18:
    // 0x171d18: 0x10800005
label_171d1c:
    if (ctx->pc == 0x171D1Cu) {
        ctx->pc = 0x171D20u;
        goto label_171d20;
    }
    ctx->pc = 0x171D18u;
    {
        const bool branch_taken_0x171d18 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x171d18) {
            ctx->pc = 0x171D30u;
            goto label_171d30;
        }
    }
    ctx->pc = 0x171D20u;
label_171d20:
    // 0x171d20: 0x8c830000
    ctx->pc = 0x171d20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_171d24:
    // 0x171d24: 0x8c620014
    ctx->pc = 0x171d24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_171d28:
    // 0x171d28: 0x40f809
label_171d2c:
    if (ctx->pc == 0x171D2Cu) {
        ctx->pc = 0x171D30u;
        goto label_171d30;
    }
    ctx->pc = 0x171D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x171D30u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171CE8u: goto label_171ce8;
            case 0x171CECu: goto label_171cec;
            case 0x171CF0u: goto label_171cf0;
            case 0x171CF4u: goto label_171cf4;
            case 0x171CF8u: goto label_171cf8;
            case 0x171CFCu: goto label_171cfc;
            case 0x171D00u: goto label_171d00;
            case 0x171D04u: goto label_171d04;
            case 0x171D08u: goto label_171d08;
            case 0x171D0Cu: goto label_171d0c;
            case 0x171D10u: goto label_171d10;
            case 0x171D14u: goto label_171d14;
            case 0x171D18u: goto label_171d18;
            case 0x171D1Cu: goto label_171d1c;
            case 0x171D20u: goto label_171d20;
            case 0x171D24u: goto label_171d24;
            case 0x171D28u: goto label_171d28;
            case 0x171D2Cu: goto label_171d2c;
            case 0x171D30u: goto label_171d30;
            case 0x171D34u: goto label_171d34;
            case 0x171D38u: goto label_171d38;
            case 0x171D3Cu: goto label_171d3c;
            case 0x171D40u: goto label_171d40;
            case 0x171D44u: goto label_171d44;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x171D30u; }
            if (ctx->pc != 0x171D30u) { return; }
        }
    }
    ctx->pc = 0x171D30u;
label_171d30:
    // 0x171d30: 0xc05c6da
label_171d34:
    if (ctx->pc == 0x171D34u) {
        ctx->pc = 0x171D34u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x171D38u;
        goto label_171d38;
    }
    ctx->pc = 0x171D30u;
    SET_GPR_U32(ctx, 31, 0x171D38u);
    ctx->pc = 0x171D34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171B68u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_StopWithoutLsc_0x171b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171D38u; }
        else if (ctx->pc != 0x171D38u) { ctx->pc = 0x171D38u; }
    }
    if (ctx->pc != 0x171D38u) { return; }
    ctx->pc = 0x171D38u;
label_171d38:
    // 0x171d38: 0xdfbf0010
    ctx->pc = 0x171d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_171d3c:
    // 0x171d3c: 0xdfb00000
    ctx->pc = 0x171d3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_171d40:
    // 0x171d40: 0x805a4f0
label_171d44:
    if (ctx->pc == 0x171D44u) {
        ctx->pc = 0x171D44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x171D48u;
        goto label_fallthrough_0x171d40;
    }
    ctx->pc = 0x171D40u;
    ctx->pc = 0x171D44u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x1693C0u;
    ADXCRS_Unlock_0x1693c0(rdram, ctx, runtime); return;
label_fallthrough_0x171d40:
    ctx->pc = 0x171D48u;
}
