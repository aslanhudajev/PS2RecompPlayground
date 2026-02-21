#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: setAnalogButton
// Address: 0x205f00 - 0x205f30
void setAnalogButton_0x205f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x205f00u;

    // 0x205f00: 0x24020003
    ctx->pc = 0x205f00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x205f04: 0x18a00008
    ctx->pc = 0x205F04u;
    {
        const bool branch_taken_0x205f04 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x205F08u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x205f04) {
            ctx->pc = 0x205F28u;
            goto label_205f28;
        }
    }
    ctx->pc = 0x205F0Cu;
    // 0x205f0c: 0x28a200ff
    ctx->pc = 0x205f0cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 255));
    // 0x205f10: 0x10400003
    ctx->pc = 0x205F10u;
    {
        const bool branch_taken_0x205f10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x205F14u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
        if (branch_taken_0x205f10) {
            ctx->pc = 0x205F20u;
            goto label_205f20;
        }
    }
    ctx->pc = 0x205F18u;
    // 0x205f18: 0x3e00008
    ctx->pc = 0x205F18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205F1Cu;
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x205F20u: goto label_205f20;
            case 0x205F28u: goto label_205f28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x205F20u;
label_205f20:
    // 0x205f20: 0x3e00008
    ctx->pc = 0x205F20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205F24u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x205F20u: goto label_205f20;
            case 0x205F28u: goto label_205f28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x205F28u;
label_205f28:
    // 0x205f28: 0x3e00008
    ctx->pc = 0x205F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205F2Cu;
        WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x205F20u: goto label_205f20;
            case 0x205F28u: goto label_205f28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x205F30u;
}
