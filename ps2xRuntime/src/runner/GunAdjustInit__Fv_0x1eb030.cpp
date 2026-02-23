#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GunAdjustInit__Fv
// Address: 0x1eb030 - 0x1eb050
void GunAdjustInit__Fv_0x1eb030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GunAdjustInit__Fv");


    ctx->pc = 0x1eb030u;

    // 0x1eb030: 0xaf808dcc
    ctx->pc = 0x1eb030u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 0));
    // 0x1eb034: 0xaf808dd4
    ctx->pc = 0x1eb034u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938068), GPR_U32(ctx, 0));
    // 0x1eb038: 0xaf808dd8
    ctx->pc = 0x1eb038u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938072), GPR_U32(ctx, 0));
    // 0x1eb03c: 0xaf808ddc
    ctx->pc = 0x1eb03cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938076), GPR_U32(ctx, 0));
    // 0x1eb040: 0xaf808de0
    ctx->pc = 0x1eb040u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938080), GPR_U32(ctx, 0));
    // 0x1eb044: 0xaf808df8
    ctx->pc = 0x1eb044u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938104), GPR_U32(ctx, 0));
    // 0x1eb048: 0x3e00008
    ctx->pc = 0x1EB048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB04Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938108), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EB050u;
}
