#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: voBufIsFull
// Address: 0x11a930 - 0x11a944
void voBufIsFull_0x11a930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11a930u;

    // 0x11a930: 0x8c830010
    ctx->pc = 0x11a930u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x11a934: 0x8c82000c
    ctx->pc = 0x11a934u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x11a938: 0x431026
    ctx->pc = 0x11a938u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11a93c: 0x3e00008
    ctx->pc = 0x11A93Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A940u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11A944u;
}
