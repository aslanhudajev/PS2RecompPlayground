#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwl_sfd_dmy
// Address: 0x18d0d8 - 0x18d0e4
void mwl_sfd_dmy_0x18d0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwl_sfd_dmy");


    ctx->pc = 0x18d0d8u;

    // 0x18d0d8: 0x3c020024
    ctx->pc = 0x18d0d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18d0dc: 0x3e00008
    ctx->pc = 0x18D0DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D0E0u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 10436), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18D0E4u;
}
