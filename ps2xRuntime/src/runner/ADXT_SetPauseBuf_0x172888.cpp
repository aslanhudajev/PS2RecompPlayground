#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_SetPauseBuf
// Address: 0x172888 - 0x172890
void ADXT_SetPauseBuf_0x172888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_SetPauseBuf");


    ctx->pc = 0x172888u;

    // 0x172888: 0x3e00008
    ctx->pc = 0x172888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17288Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16384));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x172890u;
}
