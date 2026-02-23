#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlySetAdjustY16
// Address: 0x18d598 - 0x18d5a8
void mwPlySetAdjustY16_0x18d598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlySetAdjustY16");


    ctx->pc = 0x18d598u;

    // 0x18d598: 0xa0302d
    ctx->pc = 0x18d598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d59c: 0x8c840030
    ctx->pc = 0x18d59cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x18d5a0: 0x8065604
    ctx->pc = 0x18D5A0u;
    ctx->pc = 0x18D5A4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x195810u;
    SFD_SetMpvCond_0x195810(rdram, ctx, runtime); return;
    ctx->pc = 0x18D5A8u;
}
