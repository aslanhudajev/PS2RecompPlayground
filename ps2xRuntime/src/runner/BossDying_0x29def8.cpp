#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: BossDying
// Address: 0x29def8 - 0x29df08
void BossDying_0x29def8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29def8u;

    // 0x29def8: 0x3c030036
    ctx->pc = 0x29def8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x29defc: 0x24020001
    ctx->pc = 0x29defcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x29df00: 0x3e00008
    ctx->pc = 0x29DF00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DF04u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294957064), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29DF08u;
}
