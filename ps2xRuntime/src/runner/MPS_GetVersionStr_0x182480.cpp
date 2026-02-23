#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPS_GetVersionStr
// Address: 0x182480 - 0x18248c
void MPS_GetVersionStr_0x182480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPS_GetVersionStr");


    ctx->pc = 0x182480u;

    // 0x182480: 0x3c02002c
    ctx->pc = 0x182480u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x182484: 0x3e00008
    ctx->pc = 0x182484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182488u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294952848));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18248Cu;
}
