#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: get_blit_dims
// Address: 0x284888 - 0x2848cc
void get_blit_dims_0x284888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x284888u;

    // 0x284888: 0x27bdffd0
    ctx->pc = 0x284888u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28488c: 0xffbf0020
    ctx->pc = 0x28488cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x284890: 0xffb10010
    ctx->pc = 0x284890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x284894: 0xffb00000
    ctx->pc = 0x284894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x284898: 0xa0802d
    ctx->pc = 0x284898u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28489c: 0xc0882d
    ctx->pc = 0x28489cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2848a0: 0xc0b3da0
    ctx->pc = 0x2848A0u;
    SET_GPR_U32(ctx, 31, 0x2848A8u);
    ctx->pc = 0x2848A4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x2CF680u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRomTexPtr_0x2cf680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2848A8u; }
    }
    if (ctx->pc != 0x2848A8u) { return; }
    ctx->pc = 0x2848A8u;
    // 0x2848a8: 0x94430016
    ctx->pc = 0x2848a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x2848ac: 0xae030000
    ctx->pc = 0x2848acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2848b0: 0x94420018
    ctx->pc = 0x2848b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2848b4: 0xae220000
    ctx->pc = 0x2848b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2848b8: 0xdfbf0020
    ctx->pc = 0x2848b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2848bc: 0xdfb10010
    ctx->pc = 0x2848bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2848c0: 0xdfb00000
    ctx->pc = 0x2848c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2848c4: 0x3e00008
    ctx->pc = 0x2848C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2848C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2848CCu;
}
