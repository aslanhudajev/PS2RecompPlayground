#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_GetTimeSfreq
// Address: 0x171d78 - 0x171e40
void ADXT_GetTimeSfreq_0x171d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_GetTimeSfreq");


    ctx->pc = 0x171d78u;

    // 0x171d78: 0x27bdffc0
    ctx->pc = 0x171d78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x171d7c: 0xffb20020
    ctx->pc = 0x171d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x171d80: 0xffb10010
    ctx->pc = 0x171d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x171d84: 0x80902d
    ctx->pc = 0x171d84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171d88: 0xffb00000
    ctx->pc = 0x171d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171d8c: 0xc0882d
    ctx->pc = 0x171d8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171d90: 0xffbf0030
    ctx->pc = 0x171d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x171d94: 0x92430001
    ctx->pc = 0x171d94u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x171d98: 0x2462fffd
    ctx->pc = 0x171d98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x171d9c: 0x2c420002
    ctx->pc = 0x171d9cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x171da0: 0x10400005
    ctx->pc = 0x171DA0u;
    {
        const bool branch_taken_0x171da0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x171DA4u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x171da0) {
            ctx->pc = 0x171DB8u;
            goto label_171db8;
        }
    }
    ctx->pc = 0x171DA8u;
    // 0x171da8: 0xc05b694
    ctx->pc = 0x171DA8u;
    SET_GPR_U32(ctx, 31, 0x171DB0u);
    ctx->pc = 0x171DACu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->pc = 0x16DA50u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXRNA_GetTime_0x16da50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171DB0u; }
        else if (ctx->pc != 0x171DB0u) { ctx->pc = 0x171DB0u; }
    }
    if (ctx->pc != 0x171DB0u) { return; }
    ctx->pc = 0x171DB0u;
    // 0x171db0: 0x1000001a
    ctx->pc = 0x171DB0u;
    {
        const bool branch_taken_0x171db0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x171DB4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 136)));
        if (branch_taken_0x171db0) {
            ctx->pc = 0x171E1Cu;
            goto label_171e1c;
        }
    }
    ctx->pc = 0x171DB8u;
label_171db8:
    // 0x171db8: 0x31600
    ctx->pc = 0x171db8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 24));
    // 0x171dbc: 0x24030005
    ctx->pc = 0x171dbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x171dc0: 0x21603
    ctx->pc = 0x171dc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x171dc4: 0x54430012
    ctx->pc = 0x171DC4u;
    {
        const bool branch_taken_0x171dc4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x171dc4) {
            ctx->pc = 0x171DC8u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x171E10u;
            goto label_171e10;
        }
    }
    ctx->pc = 0x171DCCu;
    // 0x171dcc: 0xc05ba04
    ctx->pc = 0x171DCCu;
    SET_GPR_U32(ctx, 31, 0x171DD4u);
    ctx->pc = 0x171DD0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->pc = 0x16E810u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetTotalNumSmpl_0x16e810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171DD4u; }
        else if (ctx->pc != 0x171DD4u) { ctx->pc = 0x171DD4u; }
    }
    if (ctx->pc != 0x171DD4u) { return; }
    ctx->pc = 0x171DD4u;
    // 0x171dd4: 0x8e440004
    ctx->pc = 0x171dd4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x171dd8: 0xc05b9dc
    ctx->pc = 0x171DD8u;
    SET_GPR_U32(ctx, 31, 0x171DE0u);
    ctx->pc = 0x171DDCu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x16E770u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetSfreq_0x16e770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171DE0u; }
        else if (ctx->pc != 0x171DE0u) { ctx->pc = 0x171DE0u; }
    }
    if (ctx->pc != 0x171DE0u) { return; }
    ctx->pc = 0x171DE0u;
    // 0x171de0: 0x8e440004
    ctx->pc = 0x171de0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x171de4: 0xc05b9ec
    ctx->pc = 0x171DE4u;
    SET_GPR_U32(ctx, 31, 0x171DECu);
    ctx->pc = 0x171DE8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x16E7B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetOutBps_0x16e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171DECu; }
        else if (ctx->pc != 0x171DECu) { ctx->pc = 0x171DECu; }
    }
    if (ctx->pc != 0x171DECu) { return; }
    ctx->pc = 0x171DECu;
    // 0x171dec: 0x24030010
    ctx->pc = 0x171decu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
    // 0x171df0: 0x50400001
    ctx->pc = 0x171DF0u;
    {
        const bool branch_taken_0x171df0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x171df0) {
            ctx->pc = 0x171DF4u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x171DF8u;
            goto label_171df8;
        }
    }
    ctx->pc = 0x171DF8u;
label_171df8:
    // 0x171df8: 0x62001a
    ctx->pc = 0x171df8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x171dfc: 0x8e020000
    ctx->pc = 0x171dfcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x171e00: 0x1812
    ctx->pc = 0x171e00u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x171e04: 0x431018
    ctx->pc = 0x171e04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x171e08: 0x10000003
    ctx->pc = 0x171E08u;
    {
        const bool branch_taken_0x171e08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x171E0Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x171e08) {
            ctx->pc = 0x171E18u;
            goto label_171e18;
        }
    }
    ctx->pc = 0x171E10u;
label_171e10:
    // 0x171e10: 0x24020001
    ctx->pc = 0x171e10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x171e14: 0xae220000
    ctx->pc = 0x171e14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_171e18:
    // 0x171e18: 0x8e430088
    ctx->pc = 0x171e18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 136)));
label_171e1c:
    // 0x171e1c: 0x8e020000
    ctx->pc = 0x171e1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x171e20: 0xdfbf0030
    ctx->pc = 0x171e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x171e24: 0x431021
    ctx->pc = 0x171e24u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171e28: 0xdfb20020
    ctx->pc = 0x171e28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171e2c: 0xae020000
    ctx->pc = 0x171e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x171e30: 0xdfb10010
    ctx->pc = 0x171e30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171e34: 0xdfb00000
    ctx->pc = 0x171e34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171e38: 0x3e00008
    ctx->pc = 0x171E38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171E3Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171DB8u: goto label_171db8;
            case 0x171DF8u: goto label_171df8;
            case 0x171E10u: goto label_171e10;
            case 0x171E18u: goto label_171e18;
            case 0x171E1Cu: goto label_171e1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x171E40u;
}
