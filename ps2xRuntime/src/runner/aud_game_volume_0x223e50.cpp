#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: aud_game_volume
// Address: 0x223e50 - 0x223e70
void aud_game_volume_0x223e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x223e50u;

    // 0x223e50: 0x27bdfff0
    ctx->pc = 0x223e50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x223e54: 0xffbf0000
    ctx->pc = 0x223e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223e58: 0x24040012
    ctx->pc = 0x223e58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 18));
    // 0x223e5c: 0xc088ce8
    ctx->pc = 0x223E5Cu;
    SET_GPR_U32(ctx, 31, 0x223E64u);
    ctx->pc = 0x223E60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2233A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        audIOP_0x2233a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223E64u; }
    }
    if (ctx->pc != 0x223E64u) { return; }
    ctx->pc = 0x223E64u;
    // 0x223e64: 0xdfbf0000
    ctx->pc = 0x223e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223e68: 0x3e00008
    ctx->pc = 0x223E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223E6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x223E70u;
}
