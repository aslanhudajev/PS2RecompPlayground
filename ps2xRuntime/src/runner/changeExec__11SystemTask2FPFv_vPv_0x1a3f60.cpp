#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: changeExec__11SystemTask2FPFv_vPv
// Address: 0x1a3f60 - 0x1a3f74
void changeExec__11SystemTask2FPFv_vPv_0x1a3f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("changeExec__11SystemTask2FPFv_vPv");


    ctx->pc = 0x1a3f60u;

    // 0x1a3f60: 0x8c830038
    ctx->pc = 0x1a3f60u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1a3f64: 0xac650000
    ctx->pc = 0x1a3f64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1a3f68: 0x8c830038
    ctx->pc = 0x1a3f68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1a3f6c: 0x3e00008
    ctx->pc = 0x1A3F6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3F70u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A3F74u;
}
