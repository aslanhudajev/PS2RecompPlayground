#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfhds_IsPrvate2PketStart
// Address: 0x192f00 - 0x192f24
void sfhds_IsPrvate2PketStart_0x192f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfhds_IsPrvate2PketStart");


    ctx->pc = 0x192f00u;

    // 0x192f00: 0x27bdfff0
    ctx->pc = 0x192f00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x192f04: 0xffbf0000
    ctx->pc = 0x192f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x192f08: 0xc064bca
    ctx->pc = 0x192F08u;
    SET_GPR_U32(ctx, 31, 0x192F10u);
    ctx->pc = 0x192F28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfhds_ReadLong_0x192f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x192F10u; }
        else if (ctx->pc != 0x192F10u) { ctx->pc = 0x192F10u; }
    }
    if (ctx->pc != 0x192F10u) { return; }
    ctx->pc = 0x192F10u;
    // 0x192f10: 0x384201bf
    ctx->pc = 0x192f10u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 447));
    // 0x192f14: 0xdfbf0000
    ctx->pc = 0x192f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192f18: 0x2c420001
    ctx->pc = 0x192f18u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x192f1c: 0x3e00008
    ctx->pc = 0x192F1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192F20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192F24u;
}
