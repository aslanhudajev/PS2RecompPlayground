#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PointInView
// Address: 0x2a22a8 - 0x2a22ec
void PointInView_0x2a22a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a22a8u;

    // 0x2a22a8: 0x27bdffd0
    ctx->pc = 0x2a22a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a22ac: 0xffbf0010
    ctx->pc = 0x2a22acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a22b0: 0xffb00000
    ctx->pc = 0x2a22b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a22b4: 0xe7b40020
    ctx->pc = 0x2a22b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a22b8: 0x46006506
    ctx->pc = 0x2a22b8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2a22bc: 0xa0302d
    ctx->pc = 0x2a22bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a22c0: 0x3c100036
    ctx->pc = 0x2a22c0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
    // 0x2a22c4: 0xc0b587e
    ctx->pc = 0x2A22C4u;
    SET_GPR_U32(ctx, 31, 0x2A22CCu);
    ctx->pc = 0x2A22C8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 4294958584));
    ctx->pc = 0x2D61F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MulBodyVecMat4_0x2d61f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A22CCu; }
    }
    if (ctx->pc != 0x2A22CCu) { return; }
    ctx->pc = 0x2A22CCu;
    // 0x2a22cc: 0x2604ddf8
    ctx->pc = 0x2a22ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294958584));
    // 0x2a22d0: 0xc0a884a
    ctx->pc = 0x2A22D0u;
    SET_GPR_U32(ctx, 31, 0x2A22D8u);
    ctx->pc = 0x2A22D4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2A2128u;
    {
        const uint32_t __entryPc = ctx->pc;
        PointViewDist_0x2a2128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A22D8u; }
    }
    if (ctx->pc != 0x2A22D8u) { return; }
    ctx->pc = 0x2A22D8u;
    // 0x2a22d8: 0xdfbf0010
    ctx->pc = 0x2a22d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a22dc: 0xdfb00000
    ctx->pc = 0x2a22dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a22e0: 0xc7b40020
    ctx->pc = 0x2a22e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a22e4: 0x3e00008
    ctx->pc = 0x2A22E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A22E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A22ECu;
}
