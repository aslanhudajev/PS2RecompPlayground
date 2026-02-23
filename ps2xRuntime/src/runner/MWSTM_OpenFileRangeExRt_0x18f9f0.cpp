#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSTM_OpenFileRangeExRt
// Address: 0x18f9f0 - 0x18fa0c
void MWSTM_OpenFileRangeExRt_0x18f9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSTM_OpenFileRangeExRt");


    ctx->pc = 0x18f9f0u;

    // 0x18f9f0: 0x27bdfff0
    ctx->pc = 0x18f9f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18f9f4: 0xffbf0000
    ctx->pc = 0x18f9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f9f8: 0xc05c242
    ctx->pc = 0x18F9F8u;
    SET_GPR_U32(ctx, 31, 0x18FA00u);
    ctx->pc = 0x170908u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_OpenFileRangeExRt_0x170908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FA00u; }
        else if (ctx->pc != 0x18FA00u) { ctx->pc = 0x18FA00u; }
    }
    if (ctx->pc != 0x18FA00u) { return; }
    ctx->pc = 0x18FA00u;
    // 0x18fa00: 0xdfbf0000
    ctx->pc = 0x18fa00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18fa04: 0x3e00008
    ctx->pc = 0x18FA04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FA08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18FA0Cu;
}
