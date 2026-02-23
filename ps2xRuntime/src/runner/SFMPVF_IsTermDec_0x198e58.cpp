#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPVF_IsTermDec
// Address: 0x198e58 - 0x198e60
void SFMPVF_IsTermDec_0x198e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPVF_IsTermDec");


    ctx->pc = 0x198e58u;

    // 0x198e58: 0x3e00008
    ctx->pc = 0x198E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198E5Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 14196)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x198E60u;
}
