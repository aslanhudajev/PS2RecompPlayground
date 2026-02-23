#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlSetFog
// Address: 0x1a6580 - 0x1a6594
void nlSetFog_0x1a6580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlSetFog");


    ctx->pc = 0x1a6580u;

    // 0x1a6580: 0x3c010030
    ctx->pc = 0x1a6580u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a6584: 0xe42c3a60
    ctx->pc = 0x1a6584u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 14944), bits); }
    // 0x1a6588: 0x3c010030
    ctx->pc = 0x1a6588u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1a658c: 0x3e00008
    ctx->pc = 0x1A658Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6590u;
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 14948), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6594u;
}
