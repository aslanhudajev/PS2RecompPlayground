#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AtreeTreeInit
// Address: 0x212dd0 - 0x212e28
void AtreeTreeInit_0x212dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x212dd0u;

    // 0x212dd0: 0x3c020032
    ctx->pc = 0x212dd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x212dd4: 0xac40f4b0
    ctx->pc = 0x212dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294964400), GPR_U32(ctx, 0));
    // 0x212dd8: 0x3c020032
    ctx->pc = 0x212dd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x212ddc: 0xac40f4b4
    ctx->pc = 0x212ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294964404), GPR_U32(ctx, 0));
    // 0x212de0: 0x3c03003c
    ctx->pc = 0x212de0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x212de4: 0x3c020032
    ctx->pc = 0x212de4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x212de8: 0x2442f4f8
    ctx->pc = 0x212de8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294964472));
    // 0x212dec: 0x42080
    ctx->pc = 0x212decu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x212df0: 0x821021
    ctx->pc = 0x212df0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x212df4: 0x8c420000
    ctx->pc = 0x212df4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x212df8: 0xac62cb6c
    ctx->pc = 0x212df8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953836), GPR_U32(ctx, 2));
    // 0x212dfc: 0x3c020032
    ctx->pc = 0x212dfcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x212e00: 0xac40f4bc
    ctx->pc = 0x212e00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294964412), GPR_U32(ctx, 0));
    // 0x212e04: 0x3c020032
    ctx->pc = 0x212e04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x212e08: 0xac40f4c0
    ctx->pc = 0x212e08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294964416), GPR_U32(ctx, 0));
    // 0x212e0c: 0x3c03003c
    ctx->pc = 0x212e0cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x212e10: 0x3c020032
    ctx->pc = 0x212e10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x212e14: 0x2442f518
    ctx->pc = 0x212e14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294964504));
    // 0x212e18: 0x822021
    ctx->pc = 0x212e18u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x212e1c: 0x8c820000
    ctx->pc = 0x212e1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x212e20: 0x8084b20
    ctx->pc = 0x212E20u;
    ctx->pc = 0x212E24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953840), GPR_U32(ctx, 2));
    ctx->pc = 0x212C80u;
    AtreeSetEmpty_0x212c80(rdram, ctx, runtime); return;
    ctx->pc = 0x212E28u;
}
