#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: EndTask
// Address: 0x1a2610 - 0x1a2620
void EndTask_0x1a2610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("EndTask");


    ctx->pc = 0x1a2610u;

    // 0x1a2610: 0x3c020030
    ctx->pc = 0x1a2610u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1a2614: 0x24442130
    ctx->pc = 0x1a2614u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 8496));
    // 0x1a2618: 0x805123c
    ctx->pc = 0x1A2618u;
    ctx->pc = 0x1A261Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1448F0u;
    longjmp_0x1448f0(rdram, ctx, runtime); return;
    ctx->pc = 0x1A2620u;
}
