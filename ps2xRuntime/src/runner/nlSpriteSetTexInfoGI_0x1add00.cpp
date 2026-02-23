#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlSpriteSetTexInfoGI
// Address: 0x1add00 - 0x1add08
void nlSpriteSetTexInfoGI_0x1add00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlSpriteSetTexInfoGI");


    ctx->pc = 0x1add00u;

    // 0x1add00: 0x806b6fc
    ctx->pc = 0x1ADD00u;
    ctx->pc = 0x1ADD04u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1ADBF0u;
    nlSpriteSetTexInfo_i_0x1adbf0(rdram, ctx, runtime); return;
    ctx->pc = 0x1ADD08u;
}
