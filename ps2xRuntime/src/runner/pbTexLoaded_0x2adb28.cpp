#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbTexLoaded
// Address: 0x2adb28 - 0x2adb88
void pbTexLoaded_0x2adb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2adb28u;

    // 0x2adb28: 0x3c020036
    ctx->pc = 0x2adb28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2adb2c: 0x8c42dee0
    ctx->pc = 0x2adb2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2adb30: 0x8c420038
    ctx->pc = 0x2adb30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x2adb34: 0x42100
    ctx->pc = 0x2adb34u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x2adb38: 0x441021
    ctx->pc = 0x2adb38u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2adb3c: 0x8c420004
    ctx->pc = 0x2adb3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2adb40: 0x8c420078
    ctx->pc = 0x2adb40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x2adb44: 0x451021
    ctx->pc = 0x2adb44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2adb48: 0x90420000
    ctx->pc = 0x2adb48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2adb4c: 0xc23024
    ctx->pc = 0x2adb4cu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2adb50: 0x10c0000b
    ctx->pc = 0x2ADB50u;
    {
        const bool branch_taken_0x2adb50 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ADB54u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2adb50) {
            ctx->pc = 0x2ADB80u;
            goto label_2adb80;
        }
    }
    ctx->pc = 0x2ADB58u;
    // 0x2adb58: 0x24040001
    ctx->pc = 0x2adb58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2adb5c: 0x0
    ctx->pc = 0x2adb5cu;
    // NOP
label_2adb60:
    // 0x2adb60: 0xc41024
    ctx->pc = 0x2adb60u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2adb64: 0x50400003
    ctx->pc = 0x2ADB64u;
    {
        const bool branch_taken_0x2adb64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2adb64) {
            ctx->pc = 0x2ADB68u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
            ctx->pc = 0x2ADB74u;
            goto label_2adb74;
        }
    }
    ctx->pc = 0x2ADB6Cu;
    // 0x2adb6c: 0x3e00008
    ctx->pc = 0x2ADB6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ADB70u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2ADB60u: goto label_2adb60;
            case 0x2ADB74u: goto label_2adb74;
            case 0x2ADB80u: goto label_2adb80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2ADB74u;
label_2adb74:
    // 0x2adb74: 0x28620002
    ctx->pc = 0x2adb74u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
    // 0x2adb78: 0x1440fff9
    ctx->pc = 0x2ADB78u;
    {
        const bool branch_taken_0x2adb78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2ADB7Cu;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
        if (branch_taken_0x2adb78) {
            ctx->pc = 0x2ADB60u;
            goto label_2adb60;
        }
    }
    ctx->pc = 0x2ADB80u;
label_2adb80:
    // 0x2adb80: 0x3e00008
    ctx->pc = 0x2ADB80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ADB84u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2ADB60u: goto label_2adb60;
            case 0x2ADB74u: goto label_2adb74;
            case 0x2ADB80u: goto label_2adb80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2ADB88u;
}
