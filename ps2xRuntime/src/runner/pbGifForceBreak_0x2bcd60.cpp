#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbGifForceBreak
// Address: 0x2bcd60 - 0x2bcd78
void pbGifForceBreak_0x2bcd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bcd60u;

    // 0x2bcd60: 0x3c031000
    ctx->pc = 0x2bcd60u;
    SET_GPR_U32(ctx, 3, ((uint32_t)4096 << 16));
    // 0x2bcd64: 0x34633000
    ctx->pc = 0x2bcd64u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 12288));
    // 0x2bcd68: 0x24020008
    ctx->pc = 0x2bcd68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2bcd6c: 0xac620000
    ctx->pc = 0x2bcd6cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x2bcd70: 0x3e00008
    ctx->pc = 0x2BCD70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BCD78u;
}
