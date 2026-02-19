#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: default_options
// Address: 0x2035c8 - 0x203610
void default_options_0x2035c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2035c8u;

    // 0x2035c8: 0x3c030031
    ctx->pc = 0x2035c8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x2035cc: 0x2462ffe8
    ctx->pc = 0x2035ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x2035d0: 0xac60ffe8
    ctx->pc = 0x2035d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967272), GPR_U32(ctx, 0));
    // 0x2035d4: 0xac400004
    ctx->pc = 0x2035d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2035d8: 0x24030003
    ctx->pc = 0x2035d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2035dc: 0xac430008
    ctx->pc = 0x2035dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x2035e0: 0xac400018
    ctx->pc = 0x2035e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x2035e4: 0x24030001
    ctx->pc = 0x2035e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2035e8: 0xac43001c
    ctx->pc = 0x2035e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x2035ec: 0xac400020
    ctx->pc = 0x2035ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x2035f0: 0xac40000c
    ctx->pc = 0x2035f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2035f4: 0xac400010
    ctx->pc = 0x2035f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x2035f8: 0xac400014
    ctx->pc = 0x2035f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x2035fc: 0x24030200
    ctx->pc = 0x2035fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 512));
    // 0x203600: 0xac430024
    ctx->pc = 0x203600u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x203604: 0xac400028
    ctx->pc = 0x203604u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x203608: 0x808296a
    ctx->pc = 0x203608u;
    ctx->pc = 0x20360Cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    ctx->pc = 0x20A5A8u;
    init_prefs_0x20a5a8(rdram, ctx, runtime); return;
    ctx->pc = 0x203610u;
}
