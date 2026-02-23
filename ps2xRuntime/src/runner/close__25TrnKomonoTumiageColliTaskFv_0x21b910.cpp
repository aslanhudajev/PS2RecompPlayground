#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: close__25TrnKomonoTumiageColliTaskFv
// Address: 0x21b910 - 0x21b91c
void close__25TrnKomonoTumiageColliTaskFv_0x21b910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("close__25TrnKomonoTumiageColliTaskFv");


    ctx->pc = 0x21b910u;

    // 0x21b910: 0x24030001
    ctx->pc = 0x21b910u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x21b914: 0x3e00008
    ctx->pc = 0x21B914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B918u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 324), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21B91Cu;
}
