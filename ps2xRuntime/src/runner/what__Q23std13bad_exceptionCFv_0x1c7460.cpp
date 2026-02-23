#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: what__Q23std13bad_exceptionCFv
// Address: 0x1c7460 - 0x1c746c
void what__Q23std13bad_exceptionCFv_0x1c7460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("what__Q23std13bad_exceptionCFv");


    ctx->pc = 0x1c7460u;

    // 0x1c7460: 0x3c020026
    ctx->pc = 0x1c7460u;
    SET_GPR_U32(ctx, 2, ((uint32_t)38 << 16));
    // 0x1c7464: 0x3e00008
    ctx->pc = 0x1C7464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7468u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966376));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C746Cu;
}
