#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPV_GetDctCnt
// Address: 0x1883a8 - 0x1883c0
void MPV_GetDctCnt_0x1883a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPV_GetDctCnt");


    ctx->pc = 0x1883a8u;

    // 0x1883a8: 0x24840070
    ctx->pc = 0x1883a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 112));
    // 0x1883ac: 0x8c820018
    ctx->pc = 0x1883acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1883b0: 0xaca20000
    ctx->pc = 0x1883b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1883b4: 0x8c83001c
    ctx->pc = 0x1883b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1883b8: 0x3e00008
    ctx->pc = 0x1883B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1883BCu;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1883C0u;
}
