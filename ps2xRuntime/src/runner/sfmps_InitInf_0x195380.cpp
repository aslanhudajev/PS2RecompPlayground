#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmps_InitInf
// Address: 0x195380 - 0x1953c0
void sfmps_InitInf_0x195380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmps_InitInf");


    ctx->pc = 0x195380u;

    // 0x195380: 0x3c027fff
    ctx->pc = 0x195380u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x195384: 0x2403ffff
    ctx->pc = 0x195384u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x195388: 0x3442ffff
    ctx->pc = 0x195388u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x19538c: 0xac83002c
    ctx->pc = 0x19538cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x195390: 0xac82001c
    ctx->pc = 0x195390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x195394: 0xac800000
    ctx->pc = 0x195394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x195398: 0xac800004
    ctx->pc = 0x195398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x19539c: 0xac800008
    ctx->pc = 0x19539cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1953a0: 0xac82000c
    ctx->pc = 0x1953a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1953a4: 0xac820010
    ctx->pc = 0x1953a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x1953a8: 0xac800014
    ctx->pc = 0x1953a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1953ac: 0xac820018
    ctx->pc = 0x1953acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x1953b0: 0xac830020
    ctx->pc = 0x1953b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x1953b4: 0xac830024
    ctx->pc = 0x1953b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x1953b8: 0x3e00008
    ctx->pc = 0x1953B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1953BCu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1953C0u;
}
