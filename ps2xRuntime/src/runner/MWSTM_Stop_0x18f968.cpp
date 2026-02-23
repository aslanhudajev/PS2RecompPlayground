#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MWSTM_Stop
// Address: 0x18f968 - 0x18f988
void MWSTM_Stop_0x18f968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MWSTM_Stop");


    ctx->pc = 0x18f968u;

    // 0x18f968: 0x27bdfff0
    ctx->pc = 0x18f968u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18f96c: 0xffbf0000
    ctx->pc = 0x18f96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18f970: 0xc05c31c
    ctx->pc = 0x18F970u;
    SET_GPR_U32(ctx, 31, 0x18F978u);
    ctx->pc = 0x170C70u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Stop_0x170c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18F978u; }
        else if (ctx->pc != 0x18F978u) { ctx->pc = 0x18F978u; }
    }
    if (ctx->pc != 0x18F978u) { return; }
    ctx->pc = 0x18F978u;
    // 0x18f978: 0xdfbf0000
    ctx->pc = 0x18f978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18f97c: 0x102d
    ctx->pc = 0x18f97cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f980: 0x3e00008
    ctx->pc = 0x18F980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F984u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18F988u;
}
