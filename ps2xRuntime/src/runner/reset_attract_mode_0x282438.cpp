#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: reset_attract_mode
// Address: 0x282438 - 0x282488
void reset_attract_mode_0x282438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x282438u;

    // 0x282438: 0x3c020035
    ctx->pc = 0x282438u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28243c: 0xac409b9c
    ctx->pc = 0x28243cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294941596), GPR_U32(ctx, 0));
    // 0x282440: 0x3c020035
    ctx->pc = 0x282440u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x282444: 0xac40a2dc
    ctx->pc = 0x282444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943452), GPR_U32(ctx, 0));
    // 0x282448: 0x3c020035
    ctx->pc = 0x282448u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x28244c: 0xac40a2e0
    ctx->pc = 0x28244cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943456), GPR_U32(ctx, 0));
    // 0x282450: 0x3c020032
    ctx->pc = 0x282450u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x282454: 0xac40fd60
    ctx->pc = 0x282454u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966624), GPR_U32(ctx, 0));
    // 0x282458: 0x3c060035
    ctx->pc = 0x282458u;
    SET_GPR_U32(ctx, 6, ((uint32_t)53 << 16));
    // 0x28245c: 0x3c050035
    ctx->pc = 0x28245cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)53 << 16));
    // 0x282460: 0x3c040035
    ctx->pc = 0x282460u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x282464: 0x3c030035
    ctx->pc = 0x282464u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x282468: 0x2402ffff
    ctx->pc = 0x282468u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28246c: 0xac629ba8
    ctx->pc = 0x28246cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941608), GPR_U32(ctx, 2));
    // 0x282470: 0xac829bb0
    ctx->pc = 0x282470u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294941616), GPR_U32(ctx, 2));
    // 0x282474: 0xaca29bb4
    ctx->pc = 0x282474u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294941620), GPR_U32(ctx, 2));
    // 0x282478: 0xacc29bac
    ctx->pc = 0x282478u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294941612), GPR_U32(ctx, 2));
    // 0x28247c: 0x3c030035
    ctx->pc = 0x28247cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x282480: 0x3e00008
    ctx->pc = 0x282480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282484u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294941628), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x282488u;
}
