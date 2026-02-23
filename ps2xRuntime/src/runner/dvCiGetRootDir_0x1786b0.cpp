#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dvCiGetRootDir
// Address: 0x1786b0 - 0x1786bc
void dvCiGetRootDir_0x1786b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dvCiGetRootDir");


    ctx->pc = 0x1786b0u;

    // 0x1786b0: 0x3c020024
    ctx->pc = 0x1786b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x1786b4: 0x3e00008
    ctx->pc = 0x1786B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1786B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294942496));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1786BCu;
}
