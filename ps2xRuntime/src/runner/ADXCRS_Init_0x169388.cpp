#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXCRS_Init
// Address: 0x169388 - 0x169390
void ADXCRS_Init_0x169388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXCRS_Init");
    ctx->pc = 0x169388u;

    // 0x169388: 0x3e00008
    ctx->pc = 0x169388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16938Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934776), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169390u;
}
