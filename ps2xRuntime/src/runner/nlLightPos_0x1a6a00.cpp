#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlLightPos
// Address: 0x1a6a00 - 0x1a6a30
void nlLightPos_0x1a6a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlLightPos");


    ctx->pc = 0x1a6a00u;

    // 0x1a6a00: 0x41840
    ctx->pc = 0x1a6a00u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1a6a04: 0x641821
    ctx->pc = 0x1a6a04u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6a08: 0x31880
    ctx->pc = 0x1a6a08u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a6a0c: 0x641821
    ctx->pc = 0x1a6a0cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6a10: 0x32100
    ctx->pc = 0x1a6a10u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 4));
    // 0x1a6a14: 0x3c030030
    ctx->pc = 0x1a6a14u;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
    // 0x1a6a18: 0x24633d30
    ctx->pc = 0x1a6a18u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15664));
    // 0x1a6a1c: 0x641821
    ctx->pc = 0x1a6a1cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6a20: 0xe46c0040
    ctx->pc = 0x1a6a20u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x1a6a24: 0xe46d0044
    ctx->pc = 0x1a6a24u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x1a6a28: 0x3e00008
    ctx->pc = 0x1A6A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6A2Cu;
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A6A30u;
}
