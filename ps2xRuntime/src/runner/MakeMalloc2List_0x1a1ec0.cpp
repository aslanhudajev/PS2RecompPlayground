#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MakeMalloc2List
// Address: 0x1a1ec0 - 0x1a1ef4
void MakeMalloc2List_0x1a1ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MakeMalloc2List");


    ctx->pc = 0x1a1ec0u;

    // 0x1a1ec0: 0x8c87fffc
    ctx->pc = 0x1a1ec0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
    // 0x1a1ec4: 0x8ca6fff8
    ctx->pc = 0x1a1ec4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
    // 0x1a1ec8: 0x3c034000
    ctx->pc = 0x1a1ec8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16384 << 16));
    // 0x1a1ecc: 0xacc7fffc
    ctx->pc = 0x1a1eccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967292), GPR_U32(ctx, 7));
    // 0x1a1ed0: 0x8ca7fff8
    ctx->pc = 0x1a1ed0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
    // 0x1a1ed4: 0x8c86fffc
    ctx->pc = 0x1a1ed4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
    // 0x1a1ed8: 0xacc7fff8
    ctx->pc = 0x1a1ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967288), GPR_U32(ctx, 7));
    // 0x1a1edc: 0xac85fffc
    ctx->pc = 0x1a1edcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294967292), GPR_U32(ctx, 5));
    // 0x1a1ee0: 0xaca4fff8
    ctx->pc = 0x1a1ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967288), GPR_U32(ctx, 4));
    // 0x1a1ee4: 0x8ca4fff4
    ctx->pc = 0x1a1ee4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4294967284)));
    // 0x1a1ee8: 0x831825
    ctx->pc = 0x1a1ee8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a1eec: 0x3e00008
    ctx->pc = 0x1A1EECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1EF0u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294967284), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A1EF4u;
}
