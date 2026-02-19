#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBSetFontZ
// Address: 0x2c5120 - 0x2c5130
void MBSetFontZ_0x2c5120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c5120u;

    // 0x2c5120: 0x3c020038
    ctx->pc = 0x2c5120u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c5124: 0xc440b174
    ctx->pc = 0x2c5124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5128: 0x3e00008
    ctx->pc = 0x2C5128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C512Cu;
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294947188), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5130u;
}
