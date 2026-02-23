#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_SetSceMpeg
// Address: 0x199dc0 - 0x199dcc
void SFD_SetSceMpeg_0x199dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_SetSceMpeg");


    ctx->pc = 0x199dc0u;

    // 0x199dc0: 0x3c020026
    ctx->pc = 0x199dc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x199dc4: 0x3e00008
    ctx->pc = 0x199DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199DC8u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294958928), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x199DCCu;
}
