#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _defStopDMA
// Address: 0x164e28 - 0x164e34
void _defStopDMA_0x164e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_defStopDMA");


    ctx->pc = 0x164e28u;

    // 0x164e28: 0x8c840040
    ctx->pc = 0x164e28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x164e2c: 0x8054fda
    ctx->pc = 0x164E2Cu;
    ctx->pc = 0x164E30u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 76));
    ctx->pc = 0x153F68u;
    sceIpuStopDMA_0x153f68(rdram, ctx, runtime); return;
    ctx->pc = 0x164E34u;
}
