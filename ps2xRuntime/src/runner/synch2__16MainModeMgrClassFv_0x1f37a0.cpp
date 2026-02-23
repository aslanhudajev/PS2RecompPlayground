#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: synch2__16MainModeMgrClassFv
// Address: 0x1f37a0 - 0x1f37dc
void synch2__16MainModeMgrClassFv_0x1f37a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("synch2__16MainModeMgrClassFv");


    ctx->pc = 0x1f37a0u;

    // 0x1f37a0: 0x27bdffe0
    ctx->pc = 0x1f37a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f37a4: 0x7fbf0010
    ctx->pc = 0x1f37a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1f37a8: 0x7fb00000
    ctx->pc = 0x1f37a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f37ac: 0x84820006
    ctx->pc = 0x1f37acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1f37b0: 0x70808628
    ctx->pc = 0x1f37b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1f37b4: 0xa4820004
    ctx->pc = 0x1f37b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f37b8: 0x8f858bcc
    ctx->pc = 0x1f37b8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x1f37bc: 0xc07cf30
    ctx->pc = 0x1F37BCu;
    SET_GPR_U32(ctx, 31, 0x1F37C4u);
    ctx->pc = 0x1F37C0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x1F3CC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        OvlChangeMainModule__Fii_0x1f3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F37C4u; }
        else if (ctx->pc != 0x1F37C4u) { ctx->pc = 0x1F37C4u; }
    }
    if (ctx->pc != 0x1F37C4u) { return; }
    ctx->pc = 0x1F37C4u;
    // 0x1f37c4: 0x2403ffff
    ctx->pc = 0x1f37c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f37c8: 0xa6030006
    ctx->pc = 0x1f37c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f37cc: 0x7bbf0010
    ctx->pc = 0x1f37ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f37d0: 0x7bb00000
    ctx->pc = 0x1f37d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f37d4: 0x3e00008
    ctx->pc = 0x1F37D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F37D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F37DCu;
}
