#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_prefs
// Address: 0x20a5a8 - 0x20a5dc
void init_prefs_0x20a5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20a5a8u;

    // 0x20a5a8: 0x3c040032
    ctx->pc = 0x20a5a8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
    // 0x20a5ac: 0x2482f458
    ctx->pc = 0x20a5acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294964312));
    // 0x20a5b0: 0x24030080
    ctx->pc = 0x20a5b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 128));
    // 0x20a5b4: 0xac83f458
    ctx->pc = 0x20a5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294964312), GPR_U32(ctx, 3));
    // 0x20a5b8: 0xac430004
    ctx->pc = 0x20a5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x20a5bc: 0x24030001
    ctx->pc = 0x20a5bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a5c0: 0xac430008
    ctx->pc = 0x20a5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x20a5c4: 0xac40000c
    ctx->pc = 0x20a5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x20a5c8: 0xac400010
    ctx->pc = 0x20a5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x20a5cc: 0xac430014
    ctx->pc = 0x20a5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x20a5d0: 0xac400018
    ctx->pc = 0x20a5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x20a5d4: 0x3e00008
    ctx->pc = 0x20A5D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A5D8u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20A5DCu;
}
