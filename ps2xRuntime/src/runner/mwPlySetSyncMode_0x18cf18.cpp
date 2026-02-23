#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlySetSyncMode
// Address: 0x18cf18 - 0x18cf70
void mwPlySetSyncMode_0x18cf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlySetSyncMode");


    ctx->pc = 0x18cf18u;

    // 0x18cf18: 0x80182d
    ctx->pc = 0x18cf18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cf1c: 0x14a00004
    ctx->pc = 0x18CF1Cu;
    {
        const bool branch_taken_0x18cf1c = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x18CF20u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 48)));
        if (branch_taken_0x18cf1c) {
            ctx->pc = 0x18CF30u;
            goto label_18cf30;
        }
    }
    ctx->pc = 0x18CF24u;
    // 0x18cf24: 0x2405000f
    ctx->pc = 0x18cf24u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    // 0x18cf28: 0x806741e
    ctx->pc = 0x18CF28u;
    ctx->pc = 0x18CF2Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19D078u;
    SFD_SetCond_0x19d078(rdram, ctx, runtime); return;
    ctx->pc = 0x18CF30u;
label_18cf30:
    // 0x18cf30: 0x24060001
    ctx->pc = 0x18cf30u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18cf34: 0x14a60003
    ctx->pc = 0x18CF34u;
    {
        const bool branch_taken_0x18cf34 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 6));
        ctx->pc = 0x18CF38u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x18cf34) {
            ctx->pc = 0x18CF44u;
            goto label_18cf44;
        }
    }
    ctx->pc = 0x18CF3Cu;
    // 0x18cf3c: 0x806741e
    ctx->pc = 0x18CF3Cu;
    ctx->pc = 0x18CF40u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x19D078u;
    SFD_SetCond_0x19d078(rdram, ctx, runtime); return;
    ctx->pc = 0x18CF44u;
label_18cf44:
    // 0x18cf44: 0x14a20008
    ctx->pc = 0x18CF44u;
    {
        const bool branch_taken_0x18cf44 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        if (branch_taken_0x18cf44) {
            ctx->pc = 0x18CF68u;
            goto label_18cf68;
        }
    }
    ctx->pc = 0x18CF4Cu;
    // 0x18cf4c: 0x8c62000c
    ctx->pc = 0x18cf4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x18cf50: 0x14460003
    ctx->pc = 0x18CF50u;
    {
        const bool branch_taken_0x18cf50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 6));
        ctx->pc = 0x18CF54u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x18cf50) {
            ctx->pc = 0x18CF60u;
            goto label_18cf60;
        }
    }
    ctx->pc = 0x18CF58u;
    // 0x18cf58: 0x806741e
    ctx->pc = 0x18CF58u;
    ctx->pc = 0x18CF5Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x19D078u;
    SFD_SetCond_0x19d078(rdram, ctx, runtime); return;
    ctx->pc = 0x18CF60u;
label_18cf60:
    // 0x18cf60: 0x806741e
    ctx->pc = 0x18CF60u;
    ctx->pc = 0x18CF64u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x19D078u;
    SFD_SetCond_0x19d078(rdram, ctx, runtime); return;
    ctx->pc = 0x18CF68u;
label_18cf68:
    // 0x18cf68: 0x3e00008
    ctx->pc = 0x18CF68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18CF30u: goto label_18cf30;
            case 0x18CF44u: goto label_18cf44;
            case 0x18CF60u: goto label_18cf60;
            case 0x18CF68u: goto label_18cf68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18CF70u;
}
