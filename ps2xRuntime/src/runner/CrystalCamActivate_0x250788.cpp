#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CrystalCamActivate
// Address: 0x250788 - 0x2507ac
void CrystalCamActivate_0x250788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x250788u;

    // 0x250788: 0x3c020033
    ctx->pc = 0x250788u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x25078c: 0x8c464978
    ctx->pc = 0x25078cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 18808)));
    // 0x250790: 0x202d
    ctx->pc = 0x250790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250794: 0x24c50010
    ctx->pc = 0x250794u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 16));
    // 0x250798: 0x24c60020
    ctx->pc = 0x250798u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 32));
    // 0x25079c: 0x24070032
    ctx->pc = 0x25079cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 50));
    // 0x2507a0: 0x402d
    ctx->pc = 0x2507a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2507a4: 0x80a89ac
    ctx->pc = 0x2507A4u;
    ctx->pc = 0x2507A8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A26B0u;
    TriggerCameraActivate_0x2a26b0(rdram, ctx, runtime); return;
    ctx->pc = 0x2507ACu;
}
