#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBUnlockMessages
// Address: 0x2c5870 - 0x2c58d4
void MBUnlockMessages_0x2c5870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c5870u;

    // 0x2c5870: 0x3c020038
    ctx->pc = 0x2c5870u;
    SET_GPR_U32(ctx, 2, ((uint32_t)56 << 16));
    // 0x2c5874: 0x2484ffff
    ctx->pc = 0x2c5874u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2c5878: 0x4810006
    ctx->pc = 0x2C5878u;
    {
        const bool branch_taken_0x2c5878 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2C587Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294947120), GPR_U32(ctx, 4));
        if (branch_taken_0x2c5878) {
            ctx->pc = 0x2C5894u;
            goto label_2c5894;
        }
    }
    ctx->pc = 0x2C5880u;
    // 0x2c5880: 0x3c03003d
    ctx->pc = 0x2c5880u;
    SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
    // 0x2c5884: 0x3c02003d
    ctx->pc = 0x2c5884u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c5888: 0xac401f70
    ctx->pc = 0x2c5888u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8048), GPR_U32(ctx, 0));
    // 0x2c588c: 0x3e00008
    ctx->pc = 0x2C588Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5890u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953304), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C5894u: goto label_2c5894;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C5894u;
label_2c5894:
    // 0x2c5894: 0x3c04003d
    ctx->pc = 0x2c5894u;
    SET_GPR_U32(ctx, 4, ((uint32_t)61 << 16));
    // 0x2c5898: 0x3c02003d
    ctx->pc = 0x2c5898u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c589c: 0x2442c960
    ctx->pc = 0x2c589cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294953312));
    // 0x2c58a0: 0x3c030038
    ctx->pc = 0x2c58a0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)56 << 16));
    // 0x2c58a4: 0x8c63b130
    ctx->pc = 0x2c58a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294947120)));
    // 0x2c58a8: 0x31880
    ctx->pc = 0x2c58a8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c58ac: 0x621021
    ctx->pc = 0x2c58acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c58b0: 0x8c420000
    ctx->pc = 0x2c58b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c58b4: 0xac82c958
    ctx->pc = 0x2c58b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294953304), GPR_U32(ctx, 2));
    // 0x2c58b8: 0x3c04003d
    ctx->pc = 0x2c58b8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)61 << 16));
    // 0x2c58bc: 0x3c02003d
    ctx->pc = 0x2c58bcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2c58c0: 0x24421f78
    ctx->pc = 0x2c58c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 8056));
    // 0x2c58c4: 0x621821
    ctx->pc = 0x2c58c4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c58c8: 0x8c620000
    ctx->pc = 0x2c58c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c58cc: 0x3e00008
    ctx->pc = 0x2C58CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C58D0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 8048), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C5894u: goto label_2c5894;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C58D4u;
}
