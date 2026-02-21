#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setDigitalButton
// Address: 0x205ed0 - 0x205ef0
void setDigitalButton_0x205ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x205ed0u;

    // 0x205ed0: 0x24020001
    ctx->pc = 0x205ed0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x205ed4: 0x10a00004
    ctx->pc = 0x205ED4u;
    {
        const bool branch_taken_0x205ed4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x205ED8u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x205ed4) {
            ctx->pc = 0x205EE8u;
            goto label_205ee8;
        }
    }
    ctx->pc = 0x205EDCu;
    // 0x205edc: 0x240200ff
    ctx->pc = 0x205edcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x205ee0: 0x3e00008
    ctx->pc = 0x205EE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205EE4u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x205EE8u: goto label_205ee8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x205EE8u;
label_205ee8:
    // 0x205ee8: 0x3e00008
    ctx->pc = 0x205EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205EECu;
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x205EE8u: goto label_205ee8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x205EF0u;
}
