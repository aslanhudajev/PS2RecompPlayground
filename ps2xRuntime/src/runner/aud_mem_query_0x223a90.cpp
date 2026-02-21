#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: aud_mem_query
// Address: 0x223a90 - 0x223ab8
void aud_mem_query_0x223a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x223a90u;

    // 0x223a90: 0x27bdfff0
    ctx->pc = 0x223a90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x223a94: 0xffbf0000
    ctx->pc = 0x223a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223a98: 0x24040019
    ctx->pc = 0x223a98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 25));
    // 0x223a9c: 0xc088ce8
    ctx->pc = 0x223A9Cu;
    SET_GPR_U32(ctx, 31, 0x223AA4u);
    ctx->pc = 0x223AA0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2233A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        audIOP_0x2233a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223AA4u; }
    }
    if (ctx->pc != 0x223AA4u) { return; }
    ctx->pc = 0x223AA4u;
    // 0x223aa4: 0x3c02003c
    ctx->pc = 0x223aa4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x223aa8: 0x24420b00
    ctx->pc = 0x223aa8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2816));
    // 0x223aac: 0xdfbf0000
    ctx->pc = 0x223aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223ab0: 0x3e00008
    ctx->pc = 0x223AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223AB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x223AB8u;
}
