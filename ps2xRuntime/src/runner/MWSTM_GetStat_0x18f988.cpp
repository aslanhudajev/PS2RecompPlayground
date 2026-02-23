#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSTM_GetStat
// Address: 0x18f988 - 0x18f9b4
void MWSTM_GetStat_0x18f988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSTM_GetStat");


    ctx->pc = 0x18f988u;

    // 0x18f988: 0x27bdffe0
    ctx->pc = 0x18f988u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18f98c: 0xffb00000
    ctx->pc = 0x18f98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18f990: 0xffbf0010
    ctx->pc = 0x18f990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18f994: 0xc05c2e0
    ctx->pc = 0x18F994u;
    SET_GPR_U32(ctx, 31, 0x18F99Cu);
    ctx->pc = 0x18F998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x170B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_GetStat_0x170b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F99Cu; }
        else if (ctx->pc != 0x18F99Cu) { ctx->pc = 0x18F99Cu; }
    }
    if (ctx->pc != 0x18F99Cu) { return; }
    ctx->pc = 0x18F99Cu;
    // 0x18f99c: 0xae020000
    ctx->pc = 0x18f99cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x18f9a0: 0xdfbf0010
    ctx->pc = 0x18f9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18f9a4: 0x102d
    ctx->pc = 0x18f9a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f9a8: 0xdfb00000
    ctx->pc = 0x18f9a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f9ac: 0x3e00008
    ctx->pc = 0x18F9ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F9B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F9B4u;
}
