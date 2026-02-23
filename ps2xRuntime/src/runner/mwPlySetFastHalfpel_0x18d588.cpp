#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlySetFastHalfpel
// Address: 0x18d588 - 0x18d598
void mwPlySetFastHalfpel_0x18d588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlySetFastHalfpel");


    ctx->pc = 0x18d588u;

    // 0x18d588: 0xa0302d
    ctx->pc = 0x18d588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d58c: 0x8c840030
    ctx->pc = 0x18d58cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x18d590: 0x8065604
    ctx->pc = 0x18D590u;
    ctx->pc = 0x18D594u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x195810u;
    SFD_SetMpvCond_0x195810(rdram, ctx, runtime); return;
    ctx->pc = 0x18D598u;
}
