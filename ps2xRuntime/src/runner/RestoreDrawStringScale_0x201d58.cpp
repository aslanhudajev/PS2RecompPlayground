#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RestoreDrawStringScale
// Address: 0x201d58 - 0x201d6c
void RestoreDrawStringScale_0x201d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x201d58u;

    // 0x201d58: 0x3c020031
    ctx->pc = 0x201d58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x201d5c: 0x3c030031
    ctx->pc = 0x201d5cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x201d60: 0xc460f280
    ctx->pc = 0x201d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x201d64: 0x3e00008
    ctx->pc = 0x201D64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201D68u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294963836), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201D6Cu;
}
