#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LinkCOMMONPol__Fv
// Address: 0x213fe0 - 0x214020
void LinkCOMMONPol__Fv_0x213fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LinkCOMMONPol__Fv");


    ctx->pc = 0x213fe0u;

    // 0x213fe0: 0x3c010050
    ctx->pc = 0x213fe0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x213fe4: 0x8427faf8
    ctx->pc = 0x213fe4u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294966008)));
    // 0x213fe8: 0x3c030050
    ctx->pc = 0x213fe8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x213fec: 0x2468ea30
    ctx->pc = 0x213fecu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 3), 4294961712));
    // 0x213ff0: 0x3c030050
    ctx->pc = 0x213ff0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x213ff4: 0x2464ea2a
    ctx->pc = 0x213ff4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294961706));
    // 0x213ff8: 0x24060001
    ctx->pc = 0x213ff8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x213ffc: 0x3c010050
    ctx->pc = 0x213ffcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x214000: 0x72900
    ctx->pc = 0x214000u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 7), 4));
    // 0x214004: 0xa426faf8
    ctx->pc = 0x214004u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294966008), (uint16_t)GPR_U32(ctx, 6));
    // 0x214008: 0x852021
    ctx->pc = 0x214008u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21400c: 0xa4860000
    ctx->pc = 0x21400cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x214010: 0x2403010d
    ctx->pc = 0x214010u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 269));
    // 0x214014: 0xa5070008
    ctx->pc = 0x214014u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 8), (uint16_t)GPR_U32(ctx, 7));
    // 0x214018: 0x3e00008
    ctx->pc = 0x214018u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21401Cu;
        WRITE16(ADD32(GPR_U32(ctx, 8), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x214020u;
}
