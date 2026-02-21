#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StringTextWidth
// Address: 0x2027c8 - 0x2027f4
void StringTextWidth_0x2027c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2027c8u;

    // 0x2027c8: 0x27bdfff0
    ctx->pc = 0x2027c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2027cc: 0xffbf0000
    ctx->pc = 0x2027ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2027d0: 0x80102d
    ctx->pc = 0x2027d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2027d4: 0xa0302d
    ctx->pc = 0x2027d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2027d8: 0x3c040031
    ctx->pc = 0x2027d8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x2027dc: 0x2484f6a8
    ctx->pc = 0x2027dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294964904));
    // 0x2027e0: 0xc0809a8
    ctx->pc = 0x2027E0u;
    SET_GPR_U32(ctx, 31, 0x2027E8u);
    ctx->pc = 0x2027E4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2026A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StringTextWidthSub_0x2026a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2027E8u; }
    }
    if (ctx->pc != 0x2027E8u) { return; }
    ctx->pc = 0x2027E8u;
    // 0x2027e8: 0xdfbf0000
    ctx->pc = 0x2027e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2027ec: 0x3e00008
    ctx->pc = 0x2027ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2027F0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2027F4u;
}
