#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: std
// Address: 0x1417f0 - 0x141848
void std_0x1417f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("std");


    ctx->pc = 0x1417f0u;

    // 0x1417f0: 0x3c020014
    ctx->pc = 0x1417f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)20 << 16));
    // 0x1417f4: 0x3c030014
    ctx->pc = 0x1417f4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)20 << 16));
    // 0x1417f8: 0x3c080014
    ctx->pc = 0x1417f8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)20 << 16));
    // 0x1417fc: 0x3c090014
    ctx->pc = 0x1417fcu;
    SET_GPR_U32(ctx, 9, ((uint32_t)20 << 16));
    // 0x141800: 0x24424f98
    ctx->pc = 0x141800u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 20376));
    // 0x141804: 0x24635000
    ctx->pc = 0x141804u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 20480));
    // 0x141808: 0x25085080
    ctx->pc = 0x141808u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 20608));
    // 0x14180c: 0x252950e8
    ctx->pc = 0x14180cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 20712));
    // 0x141810: 0xac870054
    ctx->pc = 0x141810u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 7));
    // 0x141814: 0xa485000c
    ctx->pc = 0x141814u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x141818: 0xa486000e
    ctx->pc = 0x141818u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x14181c: 0xac820020
    ctx->pc = 0x14181cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x141820: 0xac830024
    ctx->pc = 0x141820u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x141824: 0xac880028
    ctx->pc = 0x141824u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 8));
    // 0x141828: 0xac89002c
    ctx->pc = 0x141828u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 9));
    // 0x14182c: 0xac800000
    ctx->pc = 0x14182cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x141830: 0xac800004
    ctx->pc = 0x141830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x141834: 0xac800008
    ctx->pc = 0x141834u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x141838: 0xac800010
    ctx->pc = 0x141838u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x14183c: 0xac800018
    ctx->pc = 0x14183cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x141840: 0x3e00008
    ctx->pc = 0x141840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141844u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x141848u;
}
