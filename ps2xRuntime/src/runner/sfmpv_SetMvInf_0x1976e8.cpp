#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_SetMvInf
// Address: 0x1976e8 - 0x19771c
void sfmpv_SetMvInf_0x1976e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_SetMvInf");


    ctx->pc = 0x1976e8u;

    // 0x1976e8: 0x8cc30000
    ctx->pc = 0x1976e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1976ec: 0x8cc80010
    ctx->pc = 0x1976ecu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1976f0: 0xac830000
    ctx->pc = 0x1976f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1976f4: 0x8cc20004
    ctx->pc = 0x1976f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1976f8: 0xac820004
    ctx->pc = 0x1976f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1976fc: 0x8cc30008
    ctx->pc = 0x1976fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x197700: 0xac830008
    ctx->pc = 0x197700u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x197704: 0x8cc2000c
    ctx->pc = 0x197704u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x197708: 0xac870020
    ctx->pc = 0x197708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 7));
    // 0x19770c: 0xac82000c
    ctx->pc = 0x19770cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x197710: 0xac880014
    ctx->pc = 0x197710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 8));
    // 0x197714: 0x3e00008
    ctx->pc = 0x197714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197718u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19771Cu;
}
