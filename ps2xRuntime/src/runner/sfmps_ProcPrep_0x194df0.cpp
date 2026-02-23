#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_ProcPrep
// Address: 0x194df0 - 0x194e28
void sfmps_ProcPrep_0x194df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_ProcPrep");


    ctx->pc = 0x194df0u;

    // 0x194df0: 0x27bdffe0
    ctx->pc = 0x194df0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x194df4: 0xffb00000
    ctx->pc = 0x194df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x194df8: 0xffbf0010
    ctx->pc = 0x194df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x194dfc: 0xc06538a
    ctx->pc = 0x194DFCu;
    SET_GPR_U32(ctx, 31, 0x194E04u);
    ctx->pc = 0x194E00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x194E28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_ChkPrepFlg_0x194e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194E04u; }
        else if (ctx->pc != 0x194E04u) { ctx->pc = 0x194E04u; }
    }
    if (ctx->pc != 0x194E04u) { return; }
    ctx->pc = 0x194E04u;
    // 0x194e04: 0xc06544c
    ctx->pc = 0x194E04u;
    SET_GPR_U32(ctx, 31, 0x194E0Cu);
    ctx->pc = 0x194E08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x195130u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_SetMvInf_0x195130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194E0Cu; }
        else if (ctx->pc != 0x194E0Cu) { ctx->pc = 0x194E0Cu; }
    }
    if (ctx->pc != 0x194E0Cu) { return; }
    ctx->pc = 0x194E0Cu;
    // 0x194e0c: 0xc0653f4
    ctx->pc = 0x194E0Cu;
    SET_GPR_U32(ctx, 31, 0x194E14u);
    ctx->pc = 0x194E10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x194FD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmps_AdjustAvPlay_0x194fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x194E14u; }
        else if (ctx->pc != 0x194E14u) { ctx->pc = 0x194E14u; }
    }
    if (ctx->pc != 0x194E14u) { return; }
    ctx->pc = 0x194E14u;
    // 0x194e14: 0x200202d
    ctx->pc = 0x194e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194e18: 0xdfbf0010
    ctx->pc = 0x194e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194e1c: 0xdfb00000
    ctx->pc = 0x194e1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194e20: 0x8065466
    ctx->pc = 0x194E20u;
    ctx->pc = 0x194E24u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x195198u;
    sfmps_SetMpsHd_0x195198(rdram, ctx, runtime); return;
    ctx->pc = 0x194E28u;
}
