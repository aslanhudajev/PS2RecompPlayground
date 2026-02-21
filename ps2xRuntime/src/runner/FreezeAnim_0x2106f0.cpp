#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FreezeAnim
// Address: 0x2106f0 - 0x21070c
void FreezeAnim_0x2106f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2106f0u;

    // 0x2106f0: 0x3c020031
    ctx->pc = 0x2106f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2106f4: 0xc440ffb4
    ctx->pc = 0x2106f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2106f8: 0xc4810020
    ctx->pc = 0x2106f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2106fc: 0x46010001
    ctx->pc = 0x2106fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x210700: 0xe4800030
    ctx->pc = 0x210700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x210704: 0x3e00008
    ctx->pc = 0x210704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210708u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 30), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21070Cu;
}
