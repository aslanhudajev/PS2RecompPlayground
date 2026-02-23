#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyGetNumTotalDec
// Address: 0x18d020 - 0x18d040
void mwPlyGetNumTotalDec_0x18d020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyGetNumTotalDec");


    ctx->pc = 0x18d020u;

    // 0x18d020: 0x27bdffb0
    ctx->pc = 0x18d020u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18d024: 0xffbf0040
    ctx->pc = 0x18d024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18d028: 0xc063d6c
    ctx->pc = 0x18D028u;
    SET_GPR_U32(ctx, 31, 0x18D030u);
    ctx->pc = 0x18D02Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18F5B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFD_GetPlyInf_0x18f5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D030u; }
        else if (ctx->pc != 0x18D030u) { ctx->pc = 0x18D030u; }
    }
    if (ctx->pc != 0x18D030u) { return; }
    ctx->pc = 0x18D030u;
    // 0x18d030: 0x8fa20000
    ctx->pc = 0x18d030u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d034: 0xdfbf0040
    ctx->pc = 0x18d034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18d038: 0x3e00008
    ctx->pc = 0x18D038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D03Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18D040u;
}
