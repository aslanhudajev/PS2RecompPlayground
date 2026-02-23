#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_ExecHndl
// Address: 0x173df8 - 0x173e94
void ADXT_ExecHndl_0x173df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_ExecHndl");


    ctx->pc = 0x173df8u;

    // 0x173df8: 0x27bdffe0
    ctx->pc = 0x173df8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x173dfc: 0x24020003
    ctx->pc = 0x173dfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x173e00: 0xffb00000
    ctx->pc = 0x173e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173e04: 0xffbf0010
    ctx->pc = 0x173e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x173e08: 0x80802d
    ctx->pc = 0x173e08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173e0c: 0x82030001
    ctx->pc = 0x173e0cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x173e10: 0x14620005
    ctx->pc = 0x173E10u;
    {
        const bool branch_taken_0x173e10 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x173E14u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x173e10) {
            ctx->pc = 0x173E28u;
            goto label_173e28;
        }
    }
    ctx->pc = 0x173E18u;
    // 0x173e18: 0xc05ce58
    ctx->pc = 0x173E18u;
    SET_GPR_U32(ctx, 31, 0x173E20u);
    ctx->pc = 0x173960u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxt_stat_playing_0x173960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173E20u; }
        else if (ctx->pc != 0x173E20u) { ctx->pc = 0x173E20u; }
    }
    if (ctx->pc != 0x173E20u) { return; }
    ctx->pc = 0x173E20u;
    // 0x173e20: 0x10000018
    ctx->pc = 0x173E20u;
    {
        const bool branch_taken_0x173e20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x173E24u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x173e20) {
            ctx->pc = 0x173E84u;
            goto label_173e84;
        }
    }
    ctx->pc = 0x173E28u;
label_173e28:
    // 0x173e28: 0x14620005
    ctx->pc = 0x173E28u;
    {
        const bool branch_taken_0x173e28 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x173E2Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x173e28) {
            ctx->pc = 0x173E40u;
            goto label_173e40;
        }
    }
    ctx->pc = 0x173E30u;
    // 0x173e30: 0xc05cd32
    ctx->pc = 0x173E30u;
    SET_GPR_U32(ctx, 31, 0x173E38u);
    ctx->pc = 0x173E34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1734C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxt_stat_decinfo_0x1734c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173E38u; }
        else if (ctx->pc != 0x173E38u) { ctx->pc = 0x173E38u; }
    }
    if (ctx->pc != 0x173E38u) { return; }
    ctx->pc = 0x173E38u;
    // 0x173e38: 0x10000012
    ctx->pc = 0x173E38u;
    {
        const bool branch_taken_0x173e38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x173E3Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x173e38) {
            ctx->pc = 0x173E84u;
            goto label_173e84;
        }
    }
    ctx->pc = 0x173E40u;
label_173e40:
    // 0x173e40: 0x14620005
    ctx->pc = 0x173E40u;
    {
        const bool branch_taken_0x173e40 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x173E44u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x173e40) {
            ctx->pc = 0x173E58u;
            goto label_173e58;
        }
    }
    ctx->pc = 0x173E48u;
    // 0x173e48: 0xc05cdfa
    ctx->pc = 0x173E48u;
    SET_GPR_U32(ctx, 31, 0x173E50u);
    ctx->pc = 0x173E4Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1737E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxt_stat_prep_0x1737e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173E50u; }
        else if (ctx->pc != 0x173E50u) { ctx->pc = 0x173E50u; }
    }
    if (ctx->pc != 0x173E50u) { return; }
    ctx->pc = 0x173E50u;
    // 0x173e50: 0x1000000c
    ctx->pc = 0x173E50u;
    {
        const bool branch_taken_0x173e50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x173E54u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x173e50) {
            ctx->pc = 0x173E84u;
            goto label_173e84;
        }
    }
    ctx->pc = 0x173E58u;
label_173e58:
    // 0x173e58: 0x14620005
    ctx->pc = 0x173E58u;
    {
        const bool branch_taken_0x173e58 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x173E5Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x173e58) {
            ctx->pc = 0x173E70u;
            goto label_173e70;
        }
    }
    ctx->pc = 0x173E60u;
    // 0x173e60: 0xc05ce88
    ctx->pc = 0x173E60u;
    SET_GPR_U32(ctx, 31, 0x173E68u);
    ctx->pc = 0x173E64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x173A20u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxt_stat_decend_0x173a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173E68u; }
        else if (ctx->pc != 0x173E68u) { ctx->pc = 0x173E68u; }
    }
    if (ctx->pc != 0x173E68u) { return; }
    ctx->pc = 0x173E68u;
    // 0x173e68: 0x10000006
    ctx->pc = 0x173E68u;
    {
        const bool branch_taken_0x173e68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x173E6Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x173e68) {
            ctx->pc = 0x173E84u;
            goto label_173e84;
        }
    }
    ctx->pc = 0x173E70u;
label_173e70:
    // 0x173e70: 0x14620004
    ctx->pc = 0x173E70u;
    {
        const bool branch_taken_0x173e70 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x173E74u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x173e70) {
            ctx->pc = 0x173E84u;
            goto label_173e84;
        }
    }
    ctx->pc = 0x173E78u;
    // 0x173e78: 0xc05ce9e
    ctx->pc = 0x173E78u;
    SET_GPR_U32(ctx, 31, 0x173E80u);
    ctx->pc = 0x173E7Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x173A78u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxt_stat_playend_0x173a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173E80u; }
        else if (ctx->pc != 0x173E80u) { ctx->pc = 0x173E80u; }
    }
    if (ctx->pc != 0x173E80u) { return; }
    ctx->pc = 0x173E80u;
    // 0x173e80: 0x200202d
    ctx->pc = 0x173e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_173e84:
    // 0x173e84: 0xdfbf0010
    ctx->pc = 0x173e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173e88: 0xdfb00000
    ctx->pc = 0x173e88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173e8c: 0x805cf6a
    ctx->pc = 0x173E8Cu;
    ctx->pc = 0x173E90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x173DA8u;
    ADXT_ExecErrChkPS2_0x173da8(rdram, ctx, runtime); return;
    ctx->pc = 0x173E94u;
}
