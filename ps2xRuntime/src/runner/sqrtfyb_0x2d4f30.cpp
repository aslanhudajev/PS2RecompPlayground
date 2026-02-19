#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: sqrtfyb
// Address: 0x2d4f30 - 0x2d4f68
void sqrtfyb_0x2d4f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d4f30u;

    // 0x2d4f30: 0x3c02003a
    ctx->pc = 0x2d4f30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2d4f34: 0xe44c2640
    ctx->pc = 0x2d4f34u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 9792), bits); }
    // 0x2d4f38: 0x24422640
    ctx->pc = 0x2d4f38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9792));
    // 0x2d4f3c: 0x3c04003a
    ctx->pc = 0x2d4f3cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2d4f40: 0x24832620
    ctx->pc = 0x2d4f40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 9760));
    // 0x2d4f44: 0xd8500000
    ctx->pc = 0x2d4f44u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d4f48: 0xf
    ctx->pc = 0x2d4f48u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2d4f4c: 0x40f
    ctx->pc = 0x2d4f4cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2d4f50: 0x4a0002ff
    ctx->pc = 0x2d4f50u;
    // NOP operation, no action needed for VU0
    // 0x2d4f54: 0x4a001038
    ctx->pc = 0x2d4f54u;
    {     ctx->vu0_tpc = 0x200;     runtime->executeVU0Microprogram(rdram, ctx, 0x200); }
    // 0x2d4f58: 0x4a0002ff
    ctx->pc = 0x2d4f58u;
    // NOP operation, no action needed for VU0
    // 0x2d4f5c: 0xf8700000
    ctx->pc = 0x2d4f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2d4f60: 0x3e00008
    ctx->pc = 0x2D4F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4F64u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 9760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D4F68u;
}
