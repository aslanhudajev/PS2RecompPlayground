#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init0__9FcvEffectFifffiiif
// Address: 0x1d89f0 - 0x1d8a30
void init0__9FcvEffectFifffiiif_0x1d89f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init0__9FcvEffectFifffiiif");


    ctx->pc = 0x1d89f0u;

    // 0x1d89f0: 0x27bdfff0
    ctx->pc = 0x1d89f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d89f4: 0x7fbf0000
    ctx->pc = 0x1d89f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1d89f8: 0xac85001c
    ctx->pc = 0x1d89f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 5));
    // 0x1d89fc: 0xe48c003c
    ctx->pc = 0x1d89fcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x1d8a00: 0xe48d0040
    ctx->pc = 0x1d8a00u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x1d8a04: 0xe48e0044
    ctx->pc = 0x1d8a04u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x1d8a08: 0xac860048
    ctx->pc = 0x1d8a08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 6));
    // 0x1d8a0c: 0xac87004c
    ctx->pc = 0x1d8a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 7));
    // 0x1d8a10: 0xac880050
    ctx->pc = 0x1d8a10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 8));
    // 0x1d8a14: 0xe48f002c
    ctx->pc = 0x1d8a14u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x1d8a18: 0xac800014
    ctx->pc = 0x1d8a18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1d8a1c: 0xc07628c
    ctx->pc = 0x1D8A1Cu;
    SET_GPR_U32(ctx, 31, 0x1D8A24u);
    ctx->pc = 0x1D8A20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    ctx->pc = 0x1D8A30u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__9FcvEffectFv_0x1d8a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8A24u; }
        else if (ctx->pc != 0x1D8A24u) { ctx->pc = 0x1D8A24u; }
    }
    if (ctx->pc != 0x1D8A24u) { return; }
    ctx->pc = 0x1D8A24u;
    // 0x1d8a24: 0x7bbf0000
    ctx->pc = 0x1d8a24u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8a28: 0x3e00008
    ctx->pc = 0x1D8A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8A2Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8A30u;
}
