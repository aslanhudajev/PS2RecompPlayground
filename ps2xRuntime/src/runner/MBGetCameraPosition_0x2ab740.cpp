#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBGetCameraPosition
// Address: 0x2ab740 - 0x2ab754
void MBGetCameraPosition_0x2ab740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ab740u;

    // 0x2ab740: 0x3c020036
    ctx->pc = 0x2ab740u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ab744: 0x8c42dee0
    ctx->pc = 0x2ab744u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ab748: 0x8c450004
    ctx->pc = 0x2ab748u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ab74c: 0x80b958e
    ctx->pc = 0x2AB74Cu;
    ctx->pc = 0x2AB750u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
    ctx->pc = 0x2E5638u;
    sceVu0CopyVector_0x2e5638(rdram, ctx, runtime); return;
    ctx->pc = 0x2AB754u;
}
