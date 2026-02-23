#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyCalcWorkCprmSfd
// Address: 0x18eaa0 - 0x18eadc
void mwPlyCalcWorkCprmSfd_0x18eaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyCalcWorkCprmSfd");


    ctx->pc = 0x18eaa0u;

    // 0x18eaa0: 0x27bdffd0
    ctx->pc = 0x18eaa0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18eaa4: 0xffb00000
    ctx->pc = 0x18eaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18eaa8: 0xffb10010
    ctx->pc = 0x18eaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x18eaac: 0xffbf0020
    ctx->pc = 0x18eaacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18eab0: 0xc063a96
    ctx->pc = 0x18EAB0u;
    SET_GPR_U32(ctx, 31, 0x18EAB8u);
    ctx->pc = 0x18EAB4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18EA58u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyCalcWorkSfd_0x18ea58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EAB8u; }
        else if (ctx->pc != 0x18EAB8u) { ctx->pc = 0x18EAB8u; }
    }
    if (ctx->pc != 0x18EAB8u) { return; }
    ctx->pc = 0x18EAB8u;
    // 0x18eab8: 0x40882d
    ctx->pc = 0x18eab8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eabc: 0xc063a7a
    ctx->pc = 0x18EABCu;
    SET_GPR_U32(ctx, 31, 0x18EAC4u);
    ctx->pc = 0x18EAC0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18E9E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyCalcWorkCompo_0x18e9e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EAC4u; }
        else if (ctx->pc != 0x18EAC4u) { ctx->pc = 0x18EAC4u; }
    }
    if (ctx->pc != 0x18EAC4u) { return; }
    ctx->pc = 0x18EAC4u;
    // 0x18eac4: 0x2221021
    ctx->pc = 0x18eac4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x18eac8: 0xdfbf0020
    ctx->pc = 0x18eac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18eacc: 0xdfb10010
    ctx->pc = 0x18eaccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ead0: 0xdfb00000
    ctx->pc = 0x18ead0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ead4: 0x3e00008
    ctx->pc = 0x18EAD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EAD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18EADCu;
}
