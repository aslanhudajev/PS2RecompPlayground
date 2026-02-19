#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: zcalloc
// Address: 0x2da550 - 0x2da56c
void zcalloc_0x2da550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2da550u;

    // 0x2da550: 0x27bdfff0
    ctx->pc = 0x2da550u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2da554: 0xffbf0000
    ctx->pc = 0x2da554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2da558: 0xc0b4f1a
    ctx->pc = 0x2DA558u;
    SET_GPR_U32(ctx, 31, 0x2DA560u);
    ctx->pc = 0x2DA55Cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    ctx->pc = 0x2D3C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        AllocHiMem_0x2d3c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DA560u; }
    }
    if (ctx->pc != 0x2DA560u) { return; }
    ctx->pc = 0x2DA560u;
    // 0x2da560: 0xdfbf0000
    ctx->pc = 0x2da560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da564: 0x3e00008
    ctx->pc = 0x2DA564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA568u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DA56Cu;
}
