#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AddAngle
// Address: 0x2d6918 - 0x2d6934
void AddAngle_0x2d6918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d6918u;

    // 0x2d6918: 0x27bdfff0
    ctx->pc = 0x2d6918u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d691c: 0xffbf0000
    ctx->pc = 0x2d691cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d6920: 0xc0b5a1a
    ctx->pc = 0x2D6920u;
    SET_GPR_U32(ctx, 31, 0x2D6928u);
    ctx->pc = 0x2D6924u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[13]);
    ctx->pc = 0x2D6868u;
    {
        const uint32_t __entryPc = ctx->pc;
        FixAngle_0x2d6868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6928u; }
    }
    if (ctx->pc != 0x2D6928u) { return; }
    ctx->pc = 0x2D6928u;
    // 0x2d6928: 0xdfbf0000
    ctx->pc = 0x2d6928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d692c: 0x3e00008
    ctx->pc = 0x2D692Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6930u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D6934u;
}
