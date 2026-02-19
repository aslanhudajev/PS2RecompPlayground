#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: turn_enemy
// Address: 0x23c830 - 0x23c850
void turn_enemy_0x23c830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23c830u;

    // 0x23c830: 0x27bdfff0
    ctx->pc = 0x23c830u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23c834: 0xffbf0000
    ctx->pc = 0x23c834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23c838: 0x80102d
    ctx->pc = 0x23c838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23c83c: 0xc08f196
    ctx->pc = 0x23C83Cu;
    SET_GPR_U32(ctx, 31, 0x23C844u);
    ctx->pc = 0x23C840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x23C658u;
    {
        const uint32_t __entryPc = ctx->pc;
        turn_enemy_ang_0x23c658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23C844u; }
    }
    if (ctx->pc != 0x23C844u) { return; }
    ctx->pc = 0x23C844u;
    // 0x23c844: 0xdfbf0000
    ctx->pc = 0x23c844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c848: 0x3e00008
    ctx->pc = 0x23C848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C84Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23C850u;
}
