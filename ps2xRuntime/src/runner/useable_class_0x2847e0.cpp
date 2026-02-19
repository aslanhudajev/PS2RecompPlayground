#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: useable_class
// Address: 0x2847e0 - 0x28480c
void useable_class_0x2847e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2847e0u;

    // 0x2847e0: 0x8c820010
    ctx->pc = 0x2847e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2847e4: 0x28420008
    ctx->pc = 0x2847e4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 8));
    // 0x2847e8: 0x50400003
    ctx->pc = 0x2847E8u;
    {
        const bool branch_taken_0x2847e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2847e8) {
            ctx->pc = 0x2847ECu;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2472)));
            ctx->pc = 0x2847F8u;
            goto label_2847f8;
        }
    }
    ctx->pc = 0x2847F0u;
    // 0x2847f0: 0x3e00008
    ctx->pc = 0x2847F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2847F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2847F8u: goto label_2847f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2847F8u;
label_2847f8:
    // 0x2847f8: 0x8c830010
    ctx->pc = 0x2847f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2847fc: 0x2463fff8
    ctx->pc = 0x2847fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x284800: 0x621007
    ctx->pc = 0x284800u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x284804: 0x3e00008
    ctx->pc = 0x284804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284808u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2847F8u: goto label_2847f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28480Cu;
}
