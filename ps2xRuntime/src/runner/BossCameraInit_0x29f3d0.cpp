#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: BossCameraInit
// Address: 0x29f3d0 - 0x29f418
void BossCameraInit_0x29f3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29f3d0u;

    // 0x29f3d0: 0x27bdfff0
    ctx->pc = 0x29f3d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29f3d4: 0xffbf0000
    ctx->pc = 0x29f3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29f3d8: 0x3c020036
    ctx->pc = 0x29f3d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29f3dc: 0xac40db68
    ctx->pc = 0x29f3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957928), GPR_U32(ctx, 0));
    // 0x29f3e0: 0x3c020036
    ctx->pc = 0x29f3e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29f3e4: 0x3c040036
    ctx->pc = 0x29f3e4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)54 << 16));
    // 0x29f3e8: 0x2484dbd0
    ctx->pc = 0x29f3e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294958032));
    // 0x29f3ec: 0xc084ce4
    ctx->pc = 0x29F3ECu;
    SET_GPR_U32(ctx, 31, 0x29F3F4u);
    ctx->pc = 0x29F3F0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958016), GPR_U32(ctx, 4));
    ctx->pc = 0x213390u;
    {
        const uint32_t __entryPc = ctx->pc;
        CamReset_0x213390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F3F4u; }
    }
    if (ctx->pc != 0x29F3F4u) { return; }
    ctx->pc = 0x29F3F4u;
    // 0x29f3f4: 0x3c030034
    ctx->pc = 0x29f3f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x29f3f8: 0x3c020034
    ctx->pc = 0x29f3f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x29f3fc: 0x3c013f80
    ctx->pc = 0x29f3fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x29f400: 0x44810000
    ctx->pc = 0x29f400u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29f404: 0xe440f950
    ctx->pc = 0x29f404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965584), bits); }
    // 0x29f408: 0xe460f94c
    ctx->pc = 0x29f408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294965580), bits); }
    // 0x29f40c: 0xdfbf0000
    ctx->pc = 0x29f40cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29f410: 0x3e00008
    ctx->pc = 0x29F410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F414u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29F418u;
}
