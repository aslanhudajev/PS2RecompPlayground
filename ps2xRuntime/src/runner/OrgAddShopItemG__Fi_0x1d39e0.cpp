#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: OrgAddShopItemG__Fi
// Address: 0x1d39e0 - 0x1d3a0c
void OrgAddShopItemG__Fi_0x1d39e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("OrgAddShopItemG__Fi");


    ctx->pc = 0x1d39e0u;

    // 0x1d39e0: 0x3c030050
    ctx->pc = 0x1d39e0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x1d39e4: 0x2463fc88
    ctx->pc = 0x1d39e4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294966408));
    // 0x1d39e8: 0x642021
    ctx->pc = 0x1d39e8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d39ec: 0x80830000
    ctx->pc = 0x1d39ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d39f0: 0x14600004
    ctx->pc = 0x1D39F0u;
    {
        const bool branch_taken_0x1d39f0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1D39F4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1d39f0) {
            ctx->pc = 0x1D3A04u;
            goto label_1d3a04;
        }
    }
    ctx->pc = 0x1D39F8u;
    // 0x1d39f8: 0xa0830000
    ctx->pc = 0x1d39f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d39fc: 0x3c010050
    ctx->pc = 0x1d39fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1d3a00: 0xa023fd3c
    ctx->pc = 0x1d3a00u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294966588), (uint8_t)GPR_U32(ctx, 3));
label_1d3a04:
    // 0x1d3a04: 0x3e00008
    ctx->pc = 0x1D3A04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D3A04u: goto label_1d3a04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D3A0Cu;
}
