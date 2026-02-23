#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlySetAudioSw
// Address: 0x18f4f8 - 0x18f508
void mwPlySetAudioSw_0x18f4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlySetAudioSw");


    ctx->pc = 0x18f4f8u;

    // 0x18f4f8: 0xa0302d
    ctx->pc = 0x18f4f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f4fc: 0x8c840030
    ctx->pc = 0x18f4fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x18f500: 0x806741e
    ctx->pc = 0x18F500u;
    ctx->pc = 0x18F504u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x19D078u;
    SFD_SetCond_0x19d078(rdram, ctx, runtime); return;
    ctx->pc = 0x18F508u;
}
