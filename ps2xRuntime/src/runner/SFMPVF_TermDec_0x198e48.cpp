#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPVF_TermDec
// Address: 0x198e48 - 0x198e54
void SFMPVF_TermDec_0x198e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPVF_TermDec");


    ctx->pc = 0x198e48u;

    // 0x198e48: 0x24020001
    ctx->pc = 0x198e48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x198e4c: 0x3e00008
    ctx->pc = 0x198E4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198E50u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 14196), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x198E54u;
}
