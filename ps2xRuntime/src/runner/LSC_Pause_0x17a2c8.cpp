#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LSC_Pause
// Address: 0x17a2c8 - 0x17a2f4
void LSC_Pause_0x17a2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LSC_Pause");


    ctx->pc = 0x17a2c8u;

    // 0x17a2c8: 0x14800004
    ctx->pc = 0x17A2C8u;
    {
        const bool branch_taken_0x17a2c8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x17A2CCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x17a2c8) {
            ctx->pc = 0x17A2DCu;
            goto label_17a2dc;
        }
    }
    ctx->pc = 0x17A2D0u;
    // 0x17a2d0: 0x3c04002c
    ctx->pc = 0x17a2d0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17a2d4: 0x805e9c6
    ctx->pc = 0x17A2D4u;
    ctx->pc = 0x17A2D8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949480));
    ctx->pc = 0x17A718u;
    LSC_CallErrFunc_0x17a718(rdram, ctx, runtime); return;
    ctx->pc = 0x17A2DCu;
label_17a2dc:
    // 0x17a2dc: 0x14a20003
    ctx->pc = 0x17A2DCu;
    {
        const bool branch_taken_0x17a2dc = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        if (branch_taken_0x17a2dc) {
            ctx->pc = 0x17A2ECu;
            goto label_17a2ec;
        }
    }
    ctx->pc = 0x17A2E4u;
    // 0x17a2e4: 0x3e00008
    ctx->pc = 0x17A2E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A2E8u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A2DCu: goto label_17a2dc;
            case 0x17A2ECu: goto label_17a2ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A2ECu;
label_17a2ec:
    // 0x17a2ec: 0x3e00008
    ctx->pc = 0x17A2ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A2F0u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A2DCu: goto label_17a2dc;
            case 0x17A2ECu: goto label_17a2ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A2F4u;
}
