#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSTM_IsFsStatErr
// Address: 0x18f9b8 - 0x18f9dc
void MWSTM_IsFsStatErr_0x18f9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSTM_IsFsStatErr");


    ctx->pc = 0x18f9b8u;

    // 0x18f9b8: 0x27bdfff0
    ctx->pc = 0x18f9b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18f9bc: 0xffbf0000
    ctx->pc = 0x18f9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f9c0: 0xc05c2e0
    ctx->pc = 0x18F9C0u;
    SET_GPR_U32(ctx, 31, 0x18F9C8u);
    ctx->pc = 0x170B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_GetStat_0x170b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F9C8u; }
        else if (ctx->pc != 0x18F9C8u) { ctx->pc = 0x18F9C8u; }
    }
    if (ctx->pc != 0x18F9C8u) { return; }
    ctx->pc = 0x18F9C8u;
    // 0x18f9c8: 0x38420004
    ctx->pc = 0x18f9c8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 4));
    // 0x18f9cc: 0xdfbf0000
    ctx->pc = 0x18f9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f9d0: 0x2c420001
    ctx->pc = 0x18f9d0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x18f9d4: 0x3e00008
    ctx->pc = 0x18F9D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F9D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F9DCu;
}
