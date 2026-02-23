#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyGetNumTotalSkip
// Address: 0x18d040 - 0x18d060
void mwPlyGetNumTotalSkip_0x18d040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyGetNumTotalSkip");


    ctx->pc = 0x18d040u;

    // 0x18d040: 0x27bdffb0
    ctx->pc = 0x18d040u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18d044: 0xffbf0040
    ctx->pc = 0x18d044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18d048: 0xc063d6c
    ctx->pc = 0x18D048u;
    SET_GPR_U32(ctx, 31, 0x18D050u);
    ctx->pc = 0x18D04Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18F5B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFD_GetPlyInf_0x18f5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D050u; }
        else if (ctx->pc != 0x18D050u) { ctx->pc = 0x18D050u; }
    }
    if (ctx->pc != 0x18D050u) { return; }
    ctx->pc = 0x18D050u;
    // 0x18d050: 0x8fa20004
    ctx->pc = 0x18d050u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x18d054: 0xdfbf0040
    ctx->pc = 0x18d054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18d058: 0x3e00008
    ctx->pc = 0x18D058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D05Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18D060u;
}
