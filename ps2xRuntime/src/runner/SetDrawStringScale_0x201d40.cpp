#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetDrawStringScale
// Address: 0x201d40 - 0x201d58
void SetDrawStringScale_0x201d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x201d40u;

    // 0x201d40: 0x3c020031
    ctx->pc = 0x201d40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x201d44: 0x3c030031
    ctx->pc = 0x201d44u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x201d48: 0xc460f27c
    ctx->pc = 0x201d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x201d4c: 0xe440f280
    ctx->pc = 0x201d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294963840), bits); }
    // 0x201d50: 0x3e00008
    ctx->pc = 0x201D50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201D54u;
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294963836), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201D58u;
}
