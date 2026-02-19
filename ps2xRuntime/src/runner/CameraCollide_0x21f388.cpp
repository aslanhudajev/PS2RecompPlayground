#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CameraCollide
// Address: 0x21f388 - 0x21f3ec
void CameraCollide_0x21f388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21f388u;

    // 0x21f388: 0x27bdfff0
    ctx->pc = 0x21f388u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x21f38c: 0xffbf0000
    ctx->pc = 0x21f38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21f390: 0x3c030032
    ctx->pc = 0x21f390u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x21f394: 0x24020003
    ctx->pc = 0x21f394u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x21f398: 0xac62fd3c
    ctx->pc = 0x21f398u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966588), GPR_U32(ctx, 2));
    // 0x21f39c: 0x3c020032
    ctx->pc = 0x21f39cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21f3a0: 0x3c01c000
    ctx->pc = 0x21f3a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49152 << 16));
    // 0x21f3a4: 0x44810000
    ctx->pc = 0x21f3a4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21f3a8: 0xe440fd2c
    ctx->pc = 0x21f3a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294966572), bits); }
    // 0x21f3ac: 0x3c020032
    ctx->pc = 0x21f3acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21f3b0: 0x3c014000
    ctx->pc = 0x21f3b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x21f3b4: 0x44810000
    ctx->pc = 0x21f3b4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21f3b8: 0xe440fd30
    ctx->pc = 0x21f3b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294966576), bits); }
    // 0x21f3bc: 0x3c060032
    ctx->pc = 0x21f3bcu;
    SET_GPR_U32(ctx, 6, ((uint32_t)50 << 16));
    // 0x21f3c0: 0x24c6fc50
    ctx->pc = 0x21f3c0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294966352));
    // 0x21f3c4: 0x2407003e
    ctx->pc = 0x21f3c4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 62));
    // 0x21f3c8: 0x3c013dcc
    ctx->pc = 0x21f3c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x21f3cc: 0x3421cccd
    ctx->pc = 0x21f3ccu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x21f3d0: 0x44816000
    ctx->pc = 0x21f3d0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x21f3d4: 0xc087866
    ctx->pc = 0x21F3D4u;
    SET_GPR_U32(ctx, 31, 0x21F3DCu);
    ctx->pc = 0x21F3D8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21E198u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldCollide_0x21e198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21F3DCu; }
    }
    if (ctx->pc != 0x21F3DCu) { return; }
    ctx->pc = 0x21F3DCu;
    // 0x21f3dc: 0x2102b
    ctx->pc = 0x21f3dcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x21f3e0: 0xdfbf0000
    ctx->pc = 0x21f3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21f3e4: 0x3e00008
    ctx->pc = 0x21F3E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F3E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21F3ECu;
}
