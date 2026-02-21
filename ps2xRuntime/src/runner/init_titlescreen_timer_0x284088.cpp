#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_titlescreen_timer
// Address: 0x284088 - 0x2840b8
void init_titlescreen_timer_0x284088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x284088u;

    // 0x284088: 0x3c020031
    ctx->pc = 0x284088u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x28408c: 0x8c42f184
    ctx->pc = 0x28408cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
    // 0x284090: 0x10400006
    ctx->pc = 0x284090u;
    {
        const bool branch_taken_0x284090 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x284094u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x284090) {
            ctx->pc = 0x2840ACu;
            goto label_2840ac;
        }
    }
    ctx->pc = 0x284098u;
    // 0x284098: 0x3c02003c
    ctx->pc = 0x284098u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x28409c: 0x3c030031
    ctx->pc = 0x28409cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
    // 0x2840a0: 0x9463f1b2
    ctx->pc = 0x2840a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294963634)));
    // 0x2840a4: 0x3e00008
    ctx->pc = 0x2840A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2840A8u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 15180), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2840ACu: goto label_2840ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2840ACu;
label_2840ac:
    // 0x2840ac: 0x24020708
    ctx->pc = 0x2840acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1800));
    // 0x2840b0: 0x3e00008
    ctx->pc = 0x2840B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2840B4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 15180), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2840ACu: goto label_2840ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2840B8u;
}
