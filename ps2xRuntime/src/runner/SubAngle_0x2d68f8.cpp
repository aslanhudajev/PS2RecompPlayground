#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SubAngle
// Address: 0x2d68f8 - 0x2d6914
void SubAngle_0x2d68f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d68f8u;

    // 0x2d68f8: 0x27bdfff0
    ctx->pc = 0x2d68f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d68fc: 0xffbf0000
    ctx->pc = 0x2d68fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d6900: 0xc0b5a1a
    ctx->pc = 0x2D6900u;
    SET_GPR_U32(ctx, 31, 0x2D6908u);
    ctx->pc = 0x2D6904u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[13]);
    ctx->pc = 0x2D6868u;
    {
        const uint32_t __entryPc = ctx->pc;
        FixAngle_0x2d6868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6908u; }
    }
    if (ctx->pc != 0x2D6908u) { return; }
    ctx->pc = 0x2D6908u;
    // 0x2d6908: 0xdfbf0000
    ctx->pc = 0x2d6908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d690c: 0x3e00008
    ctx->pc = 0x2D690Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6910u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D6914u;
}
