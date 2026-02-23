#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwl_convYccPlaneFromSFD
// Address: 0x18dcd8 - 0x18dd08
void mwl_convYccPlaneFromSFD_0x18dcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwl_convYccPlaneFromSFD");


    ctx->pc = 0x18dcd8u;

    // 0x18dcd8: 0x8c820008
    ctx->pc = 0x18dcd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18dcdc: 0xaca20000
    ctx->pc = 0x18dcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x18dce0: 0x8c830000
    ctx->pc = 0x18dce0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18dce4: 0xaca30004
    ctx->pc = 0x18dce4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x18dce8: 0x8c820004
    ctx->pc = 0x18dce8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18dcec: 0xaca20008
    ctx->pc = 0x18dcecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x18dcf0: 0x8483000e
    ctx->pc = 0x18dcf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x18dcf4: 0xaca3000c
    ctx->pc = 0x18dcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x18dcf8: 0x8482000c
    ctx->pc = 0x18dcf8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x18dcfc: 0xaca20014
    ctx->pc = 0x18dcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x18dd00: 0x3e00008
    ctx->pc = 0x18DD00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DD04u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18DD08u;
}
