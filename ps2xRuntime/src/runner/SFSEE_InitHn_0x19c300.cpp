#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFSEE_InitHn
// Address: 0x19c300 - 0x19c320
void SFSEE_InitHn_0x19c300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFSEE_InitHn");


    ctx->pc = 0x19c300u;

    // 0x19c300: 0x24830004
    ctx->pc = 0x19c300u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 4));
    // 0x19c304: 0x2405fffd
    ctx->pc = 0x19c304u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x19c308: 0x24020001
    ctx->pc = 0x19c308u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c30c: 0xac800004
    ctx->pc = 0x19c30cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x19c310: 0xac620008
    ctx->pc = 0x19c310u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x19c314: 0xac650004
    ctx->pc = 0x19c314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x19c318: 0x3e00008
    ctx->pc = 0x19C318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C31Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19C320u;
}
