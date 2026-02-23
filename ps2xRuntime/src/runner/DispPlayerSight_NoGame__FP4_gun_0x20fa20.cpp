#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: DispPlayerSight_NoGame__FP4_gun
// Address: 0x20fa20 - 0x20fa3c
void DispPlayerSight_NoGame__FP4_gun_0x20fa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("DispPlayerSight_NoGame__FP4_gun");


    ctx->pc = 0x20fa20u;

    // 0x20fa20: 0x27bdfff0
    ctx->pc = 0x20fa20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20fa24: 0x7fbf0000
    ctx->pc = 0x20fa24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x20fa28: 0xc083e00
    ctx->pc = 0x20FA28u;
    SET_GPR_U32(ctx, 31, 0x20FA30u);
    ctx->pc = 0x20F800u;
    {
        const uint32_t __entryPc = ctx->pc;
        dispSight_core__FP4_gun_0x20f800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FA30u; }
        else if (ctx->pc != 0x20FA30u) { ctx->pc = 0x20FA30u; }
    }
    if (ctx->pc != 0x20FA30u) { return; }
    ctx->pc = 0x20FA30u;
    // 0x20fa30: 0x7bbf0000
    ctx->pc = 0x20fa30u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20fa34: 0x3e00008
    ctx->pc = 0x20FA34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FA38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20FA3Cu;
}
