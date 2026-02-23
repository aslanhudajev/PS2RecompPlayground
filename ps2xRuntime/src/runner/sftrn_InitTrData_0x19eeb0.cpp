#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sftrn_InitTrData
// Address: 0x19eeb0 - 0x19eef8
void sftrn_InitTrData_0x19eeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sftrn_InitTrData");


    ctx->pc = 0x19eeb0u;

    // 0x19eeb0: 0x24020008
    ctx->pc = 0x19eeb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x19eeb4: 0xac8506a8
    ctx->pc = 0x19eeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1704), GPR_U32(ctx, 5));
    // 0x19eeb8: 0xac8206ac
    ctx->pc = 0x19eeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1708), GPR_U32(ctx, 2));
    // 0x19eebc: 0x24050008
    ctx->pc = 0x19eebcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 8));
    // 0x19eec0: 0xac800004
    ctx->pc = 0x19eec0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x19eec4: 0x24030002
    ctx->pc = 0x19eec4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x19eec8: 0xac800000
    ctx->pc = 0x19eec8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x19eecc: 0x248206b8
    ctx->pc = 0x19eeccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1720));
label_19eed0:
    // 0x19eed0: 0xac450000
    ctx->pc = 0x19eed0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x19eed4: 0x2463ffff
    ctx->pc = 0x19eed4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x19eed8: 0x2442fffc
    ctx->pc = 0x19eed8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x19eedc: 0x0
    ctx->pc = 0x19eedcu;
    // NOP
    // 0x19eee0: 0x0
    ctx->pc = 0x19eee0u;
    // NOP
    // 0x19eee4: 0x461fffa
    ctx->pc = 0x19EEE4u;
    {
        const bool branch_taken_0x19eee4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x19eee4) {
            ctx->pc = 0x19EED0u;
            goto label_19eed0;
        }
    }
    ctx->pc = 0x19EEECu;
    // 0x19eeec: 0x2402ffff
    ctx->pc = 0x19eeecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19eef0: 0x3e00008
    ctx->pc = 0x19EEF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EEF4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 1724), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19EED0u: goto label_19eed0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19EEF8u;
}
