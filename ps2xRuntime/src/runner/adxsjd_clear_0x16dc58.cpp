#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxsjd_clear
// Address: 0x16dc58 - 0x16dc8c
void adxsjd_clear_0x16dc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxsjd_clear");


    ctx->pc = 0x16dc58u;

    // 0x16dc58: 0x3c027fff
    ctx->pc = 0x16dc58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x16dc5c: 0x2403ffff
    ctx->pc = 0x16dc5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16dc60: 0x3442ffff
    ctx->pc = 0x16dc60u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x16dc64: 0xac83003c
    ctx->pc = 0x16dc64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x16dc68: 0xac820038
    ctx->pc = 0x16dc68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x16dc6c: 0xa0800003
    ctx->pc = 0x16dc6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x16dc70: 0xac800098
    ctx->pc = 0x16dc70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 0));
    // 0x16dc74: 0xac80002c
    ctx->pc = 0x16dc74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x16dc78: 0xac800030
    ctx->pc = 0x16dc78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x16dc7c: 0xac800034
    ctx->pc = 0x16dc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x16dc80: 0xac800040
    ctx->pc = 0x16dc80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x16dc84: 0x3e00008
    ctx->pc = 0x16DC84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DC88u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16DC8Cu;
}
