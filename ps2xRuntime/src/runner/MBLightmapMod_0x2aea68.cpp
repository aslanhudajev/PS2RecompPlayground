#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBLightmapMod
// Address: 0x2aea68 - 0x2aea84
void MBLightmapMod_0x2aea68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2aea68u;

    // 0x2aea68: 0x3c020036
    ctx->pc = 0x2aea68u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2aea6c: 0x8c43dee0
    ctx->pc = 0x2aea6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2aea70: 0x8c62001c
    ctx->pc = 0x2aea70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2aea74: 0xe44c00b0
    ctx->pc = 0x2aea74u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x2aea78: 0x8c62001c
    ctx->pc = 0x2aea78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2aea7c: 0x3e00008
    ctx->pc = 0x2AEA7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEA80u;
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AEA84u;
}
