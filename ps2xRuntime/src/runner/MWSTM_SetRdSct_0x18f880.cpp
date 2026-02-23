#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSTM_SetRdSct
// Address: 0x18f880 - 0x18f8a0
void MWSTM_SetRdSct_0x18f880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSTM_SetRdSct");


    ctx->pc = 0x18f880u;

    // 0x18f880: 0x27bdfff0
    ctx->pc = 0x18f880u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18f884: 0xffbf0000
    ctx->pc = 0x18f884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f888: 0xc05c43c
    ctx->pc = 0x18F888u;
    SET_GPR_U32(ctx, 31, 0x18F890u);
    ctx->pc = 0x1710F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_SetReqRdSize_0x1710f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F890u; }
        else if (ctx->pc != 0x18F890u) { ctx->pc = 0x18F890u; }
    }
    if (ctx->pc != 0x18F890u) { return; }
    ctx->pc = 0x18F890u;
    // 0x18f890: 0xdfbf0000
    ctx->pc = 0x18f890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f894: 0x102d
    ctx->pc = 0x18f894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f898: 0x3e00008
    ctx->pc = 0x18F898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F89Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F8A0u;
}
