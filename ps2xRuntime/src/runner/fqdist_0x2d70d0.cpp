#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: fqdist
// Address: 0x2d70d0 - 0x2d710c
void fqdist_0x2d70d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d70d0u;

    // 0x2d70d0: 0x3c02003a
    ctx->pc = 0x2d70d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d70d4: 0x24442640
    ctx->pc = 0x2d70d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 9792));
    // 0x2d70d8: 0xe44c2640
    ctx->pc = 0x2d70d8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 9792), bits); }
    // 0x2d70dc: 0xe48d0004
    ctx->pc = 0x2d70dcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2d70e0: 0x3c03003a
    ctx->pc = 0x2d70e0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2d70e4: 0x24622620
    ctx->pc = 0x2d70e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 9760));
    // 0x2d70e8: 0xd8900000
    ctx->pc = 0x2d70e8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d70ec: 0xf
    ctx->pc = 0x2d70ecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2d70f0: 0x40f
    ctx->pc = 0x2d70f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2d70f4: 0x4a0002ff
    ctx->pc = 0x2d70f4u;
    // NOP operation, no action needed for VU0
    // 0x2d70f8: 0x4a001138
    ctx->pc = 0x2d70f8u;
    {     ctx->vu0_tpc = 0x220;     runtime->executeVU0Microprogram(rdram, ctx, 0x220); }
    // 0x2d70fc: 0x4a0002ff
    ctx->pc = 0x2d70fcu;
    // NOP operation, no action needed for VU0
    // 0x2d7100: 0xf8500000
    ctx->pc = 0x2d7100u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2d7104: 0x3e00008
    ctx->pc = 0x2D7104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7108u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 9760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D710Cu;
}
