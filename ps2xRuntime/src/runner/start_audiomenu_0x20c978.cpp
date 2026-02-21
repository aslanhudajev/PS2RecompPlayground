#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: start_audiomenu
// Address: 0x20c978 - 0x20c9d0
void start_audiomenu_0x20c978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20c978u;

    // 0x20c978: 0x27bdffe0
    ctx->pc = 0x20c978u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20c97c: 0xffbf0010
    ctx->pc = 0x20c97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20c980: 0xffb00000
    ctx->pc = 0x20c980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20c984: 0x3c04003c
    ctx->pc = 0x20c984u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x20c988: 0x3c050032
    ctx->pc = 0x20c988u;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
    // 0x20c98c: 0x24a2f458
    ctx->pc = 0x20c98cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294964312));
    // 0x20c990: 0x8c420004
    ctx->pc = 0x20c990u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20c994: 0xac82c568
    ctx->pc = 0x20c994u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294952296), GPR_U32(ctx, 2));
    // 0x20c998: 0x3c03003c
    ctx->pc = 0x20c998u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x20c99c: 0x2470c580
    ctx->pc = 0x20c99cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4294952320));
    // 0x20c9a0: 0x8ca2f458
    ctx->pc = 0x20c9a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4294964312)));
    // 0x20c9a4: 0xac62c580
    ctx->pc = 0x20c9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952320), GPR_U32(ctx, 2));
    // 0x20c9a8: 0xc08322a
    ctx->pc = 0x20C9A8u;
    SET_GPR_U32(ctx, 31, 0x20C9B0u);
    ctx->pc = 0x20C9ACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294952296));
    ctx->pc = 0x20C8A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        start_audioslider_0x20c8a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C9B0u; }
    }
    if (ctx->pc != 0x20C9B0u) { return; }
    ctx->pc = 0x20C9B0u;
    // 0x20c9b0: 0xc08322a
    ctx->pc = 0x20C9B0u;
    SET_GPR_U32(ctx, 31, 0x20C9B8u);
    ctx->pc = 0x20C9B4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20C8A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        start_audioslider_0x20c8a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C9B8u; }
    }
    if (ctx->pc != 0x20C9B8u) { return; }
    ctx->pc = 0x20C9B8u;
    // 0x20c9b8: 0x3c02003c
    ctx->pc = 0x20c9b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x20c9bc: 0xac40c598
    ctx->pc = 0x20c9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294952344), GPR_U32(ctx, 0));
    // 0x20c9c0: 0xdfbf0010
    ctx->pc = 0x20c9c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20c9c4: 0xdfb00000
    ctx->pc = 0x20c9c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20c9c8: 0x3e00008
    ctx->pc = 0x20C9C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C9CCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20C9D0u;
}
