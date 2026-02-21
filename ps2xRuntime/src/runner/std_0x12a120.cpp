#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: std
// Address: 0x12a120 - 0x12a178
void std_0x12a120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12a120u;

    // 0x12a120: 0x3c020013
    ctx->pc = 0x12a120u;
    SET_GPR_U32(ctx, 2, ((uint32_t)19 << 16));
    // 0x12a124: 0x3c030013
    ctx->pc = 0x12a124u;
    SET_GPR_U32(ctx, 3, ((uint32_t)19 << 16));
    // 0x12a128: 0x3c080013
    ctx->pc = 0x12a128u;
    SET_GPR_U32(ctx, 8, ((uint32_t)19 << 16));
    // 0x12a12c: 0x3c090013
    ctx->pc = 0x12a12cu;
    SET_GPR_U32(ctx, 9, ((uint32_t)19 << 16));
    // 0x12a130: 0x2442b558
    ctx->pc = 0x12a130u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294948184));
    // 0x12a134: 0x2463b5c0
    ctx->pc = 0x12a134u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294948288));
    // 0x12a138: 0x2508b640
    ctx->pc = 0x12a138u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294948416));
    // 0x12a13c: 0x2529b6a8
    ctx->pc = 0x12a13cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294948520));
    // 0x12a140: 0xac870054
    ctx->pc = 0x12a140u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 7));
    // 0x12a144: 0xa485000c
    ctx->pc = 0x12a144u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x12a148: 0xa486000e
    ctx->pc = 0x12a148u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x12a14c: 0xac820020
    ctx->pc = 0x12a14cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x12a150: 0xac830024
    ctx->pc = 0x12a150u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x12a154: 0xac880028
    ctx->pc = 0x12a154u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 8));
    // 0x12a158: 0xac89002c
    ctx->pc = 0x12a158u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 9));
    // 0x12a15c: 0xac800000
    ctx->pc = 0x12a15cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x12a160: 0xac800004
    ctx->pc = 0x12a160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x12a164: 0xac800008
    ctx->pc = 0x12a164u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x12a168: 0xac800010
    ctx->pc = 0x12a168u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x12a16c: 0xac800018
    ctx->pc = 0x12a16cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x12a170: 0x3e00008
    ctx->pc = 0x12A170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A174u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12A178u;
}
