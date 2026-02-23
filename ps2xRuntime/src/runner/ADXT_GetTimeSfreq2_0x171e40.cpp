#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_GetTimeSfreq2
// Address: 0x171e40 - 0x171f24
void ADXT_GetTimeSfreq2_0x171e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_GetTimeSfreq2");


    ctx->pc = 0x171e40u;

    // 0x171e40: 0x27bdffc0
    ctx->pc = 0x171e40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x171e44: 0xffb20020
    ctx->pc = 0x171e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x171e48: 0xffb10010
    ctx->pc = 0x171e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x171e4c: 0xa0902d
    ctx->pc = 0x171e4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171e50: 0xffb00000
    ctx->pc = 0x171e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171e54: 0x80882d
    ctx->pc = 0x171e54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171e58: 0xffbf0030
    ctx->pc = 0x171e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x171e5c: 0x92230001
    ctx->pc = 0x171e5cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x171e60: 0x2462fffd
    ctx->pc = 0x171e60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x171e64: 0x2c420002
    ctx->pc = 0x171e64u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x171e68: 0x1040000c
    ctx->pc = 0x171E68u;
    {
        const bool branch_taken_0x171e68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x171E6Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x171e68) {
            ctx->pc = 0x171E9Cu;
            goto label_171e9c;
        }
    }
    ctx->pc = 0x171E70u;
    // 0x171e70: 0xc05b9dc
    ctx->pc = 0x171E70u;
    SET_GPR_U32(ctx, 31, 0x171E78u);
    ctx->pc = 0x171E74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x16E770u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetSfreq_0x16e770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171E78u; }
        else if (ctx->pc != 0x171E78u) { ctx->pc = 0x171E78u; }
    }
    if (ctx->pc != 0x171E78u) { return; }
    ctx->pc = 0x171E78u;
    // 0x171e78: 0x8e240004
    ctx->pc = 0x171e78u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x171e7c: 0xc05b9ba
    ctx->pc = 0x171E7Cu;
    SET_GPR_U32(ctx, 31, 0x171E84u);
    ctx->pc = 0x171E80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x16E6E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetDecNumSmpl_0x16e6e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171E84u; }
        else if (ctx->pc != 0x171E84u) { ctx->pc = 0x171E84u; }
    }
    if (ctx->pc != 0x171E84u) { return; }
    ctx->pc = 0x171E84u;
    // 0x171e84: 0x8e24000c
    ctx->pc = 0x171e84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x171e88: 0xc05b696
    ctx->pc = 0x171E88u;
    SET_GPR_U32(ctx, 31, 0x171E90u);
    ctx->pc = 0x171E8Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16DA58u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXRNA_GetNumData_0x16da58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171E90u; }
        else if (ctx->pc != 0x171E90u) { ctx->pc = 0x171E90u; }
    }
    if (ctx->pc != 0x171E90u) { return; }
    ctx->pc = 0x171E90u;
    // 0x171e90: 0x2028023
    ctx->pc = 0x171e90u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x171e94: 0x10000019
    ctx->pc = 0x171E94u;
    {
        const bool branch_taken_0x171e94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x171E98u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        if (branch_taken_0x171e94) {
            ctx->pc = 0x171EFCu;
            goto label_171efc;
        }
    }
    ctx->pc = 0x171E9Cu;
label_171e9c:
    // 0x171e9c: 0x31600
    ctx->pc = 0x171e9cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 24));
    // 0x171ea0: 0x24030005
    ctx->pc = 0x171ea0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 5));
    // 0x171ea4: 0x21603
    ctx->pc = 0x171ea4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x171ea8: 0x54430012
    ctx->pc = 0x171EA8u;
    {
        const bool branch_taken_0x171ea8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x171ea8) {
            ctx->pc = 0x171EACu;
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x171EF4u;
            goto label_171ef4;
        }
    }
    ctx->pc = 0x171EB0u;
    // 0x171eb0: 0xc05ba04
    ctx->pc = 0x171EB0u;
    SET_GPR_U32(ctx, 31, 0x171EB8u);
    ctx->pc = 0x171EB4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->pc = 0x16E810u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetTotalNumSmpl_0x16e810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171EB8u; }
        else if (ctx->pc != 0x171EB8u) { ctx->pc = 0x171EB8u; }
    }
    if (ctx->pc != 0x171EB8u) { return; }
    ctx->pc = 0x171EB8u;
    // 0x171eb8: 0x8e240004
    ctx->pc = 0x171eb8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x171ebc: 0xc05b9dc
    ctx->pc = 0x171EBCu;
    SET_GPR_U32(ctx, 31, 0x171EC4u);
    ctx->pc = 0x171EC0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x16E770u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetSfreq_0x16e770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171EC4u; }
        else if (ctx->pc != 0x171EC4u) { ctx->pc = 0x171EC4u; }
    }
    if (ctx->pc != 0x171EC4u) { return; }
    ctx->pc = 0x171EC4u;
    // 0x171ec4: 0x8e240004
    ctx->pc = 0x171ec4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x171ec8: 0xc05b9ec
    ctx->pc = 0x171EC8u;
    SET_GPR_U32(ctx, 31, 0x171ED0u);
    ctx->pc = 0x171ECCu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x16E7B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetOutBps_0x16e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171ED0u; }
        else if (ctx->pc != 0x171ED0u) { ctx->pc = 0x171ED0u; }
    }
    if (ctx->pc != 0x171ED0u) { return; }
    ctx->pc = 0x171ED0u;
    // 0x171ed0: 0x24030010
    ctx->pc = 0x171ed0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 16));
    // 0x171ed4: 0x50400001
    ctx->pc = 0x171ED4u;
    {
        const bool branch_taken_0x171ed4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x171ed4) {
            ctx->pc = 0x171ED8u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x171EDCu;
            goto label_171edc;
        }
    }
    ctx->pc = 0x171EDCu;
label_171edc:
    // 0x171edc: 0x62001a
    ctx->pc = 0x171edcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x171ee0: 0x8e420000
    ctx->pc = 0x171ee0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x171ee4: 0x1812
    ctx->pc = 0x171ee4u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x171ee8: 0x431018
    ctx->pc = 0x171ee8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x171eec: 0x10000003
    ctx->pc = 0x171EECu;
    {
        const bool branch_taken_0x171eec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x171EF0u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x171eec) {
            ctx->pc = 0x171EFCu;
            goto label_171efc;
        }
    }
    ctx->pc = 0x171EF4u;
label_171ef4:
    // 0x171ef4: 0x24020001
    ctx->pc = 0x171ef4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x171ef8: 0xae020000
    ctx->pc = 0x171ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_171efc:
    // 0x171efc: 0x8e230088
    ctx->pc = 0x171efcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x171f00: 0x8e420000
    ctx->pc = 0x171f00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x171f04: 0xdfbf0030
    ctx->pc = 0x171f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x171f08: 0x431021
    ctx->pc = 0x171f08u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171f0c: 0xdfb10010
    ctx->pc = 0x171f0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171f10: 0xae420000
    ctx->pc = 0x171f10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x171f14: 0xdfb20020
    ctx->pc = 0x171f14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171f18: 0xdfb00000
    ctx->pc = 0x171f18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171f1c: 0x3e00008
    ctx->pc = 0x171F1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171F20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171E9Cu: goto label_171e9c;
            case 0x171EDCu: goto label_171edc;
            case 0x171EF4u: goto label_171ef4;
            case 0x171EFCu: goto label_171efc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x171F24u;
}
