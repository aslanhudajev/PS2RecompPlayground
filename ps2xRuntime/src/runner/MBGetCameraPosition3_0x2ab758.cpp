#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBGetCameraPosition3
// Address: 0x2ab758 - 0x2ab788
void MBGetCameraPosition3_0x2ab758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ab758u;

    // 0x2ab758: 0x3c020036
    ctx->pc = 0x2ab758u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ab75c: 0x8c43dee0
    ctx->pc = 0x2ab75cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ab760: 0x8c620004
    ctx->pc = 0x2ab760u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ab764: 0xc4400020
    ctx->pc = 0x2ab764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab768: 0xe4800000
    ctx->pc = 0x2ab768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2ab76c: 0x8c620004
    ctx->pc = 0x2ab76cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ab770: 0xc4400024
    ctx->pc = 0x2ab770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab774: 0xe4800004
    ctx->pc = 0x2ab774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2ab778: 0x8c620004
    ctx->pc = 0x2ab778u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ab77c: 0xc4400028
    ctx->pc = 0x2ab77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ab780: 0x3e00008
    ctx->pc = 0x2AB780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB784u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB788u;
}
