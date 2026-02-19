#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: player_set_intower
// Address: 0x231ad8 - 0x231b00
void player_set_intower_0x231ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x231ad8u;

    // 0x231ad8: 0x24032b00
    ctx->pc = 0x231ad8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x231adc: 0x831818
    ctx->pc = 0x231adcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x231ae0: 0x3c020032
    ctx->pc = 0x231ae0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x231ae4: 0x24421bc0
    ctx->pc = 0x231ae4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x231ae8: 0x621821
    ctx->pc = 0x231ae8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231aec: 0x2402000b
    ctx->pc = 0x231aecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
    // 0x231af0: 0xac6200fc
    ctx->pc = 0x231af0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 252), GPR_U32(ctx, 2));
    // 0x231af4: 0x24020001
    ctx->pc = 0x231af4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x231af8: 0x808d382
    ctx->pc = 0x231AF8u;
    ctx->pc = 0x231AFCu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 10964), GPR_U32(ctx, 2));
    ctx->pc = 0x234E08u;
    setup_player_display_0x234e08(rdram, ctx, runtime); return;
    ctx->pc = 0x231B00u;
}
