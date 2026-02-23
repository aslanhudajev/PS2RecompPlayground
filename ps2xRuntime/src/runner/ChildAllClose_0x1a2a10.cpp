#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ChildAllClose
// Address: 0x1a2a10 - 0x1a2a18
void ChildAllClose_0x1a2a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ChildAllClose");


    ctx->pc = 0x1a2a10u;

    // 0x1a2a10: 0x8068a6c
    ctx->pc = 0x1A2A10u;
    ctx->pc = 0x1A2A14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294936904)));
    ctx->pc = 0x1A29B0u;
    ChildAllClose0_0x1a29b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1A2A18u;
}
