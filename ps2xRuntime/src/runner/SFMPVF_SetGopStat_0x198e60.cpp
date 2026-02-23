#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPVF_SetGopStat
// Address: 0x198e60 - 0x198e68
void SFMPVF_SetGopStat_0x198e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPVF_SetGopStat");


    ctx->pc = 0x198e60u;

    // 0x198e60: 0x3e00008
    ctx->pc = 0x198E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198E64u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 14200), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x198E68u;
}
