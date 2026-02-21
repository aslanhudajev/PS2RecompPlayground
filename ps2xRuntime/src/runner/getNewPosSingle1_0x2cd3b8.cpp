#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: getNewPosSingle1
// Address: 0x2cd3b8 - 0x2cd3f4
void getNewPosSingle1_0x2cd3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cd3b8u;

    // 0x2cd3b8: 0x3c02002d
    ctx->pc = 0x2cd3b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
    // 0x2cd3bc: 0x2442d3f8
    ctx->pc = 0x2cd3bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294956024));
    // 0x2cd3c0: 0xac820068
    ctx->pc = 0x2cd3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 2));
    // 0x2cd3c4: 0x9482002c
    ctx->pc = 0x2cd3c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x2cd3c8: 0x3042fff7
    ctx->pc = 0x2cd3c8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65527));
    // 0x2cd3cc: 0xa482002c
    ctx->pc = 0x2cd3ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cd3d0: 0x8c820010
    ctx->pc = 0x2cd3d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2cd3d4: 0xc4a00030
    ctx->pc = 0x2cd3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd3d8: 0xe4400000
    ctx->pc = 0x2cd3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2cd3dc: 0xc4a00034
    ctx->pc = 0x2cd3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd3e0: 0xe4400004
    ctx->pc = 0x2cd3e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2cd3e4: 0xc4a00038
    ctx->pc = 0x2cd3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cd3e8: 0xe4400008
    ctx->pc = 0x2cd3e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2cd3ec: 0x3e00008
    ctx->pc = 0x2CD3ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD3F0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CD3F4u;
}
