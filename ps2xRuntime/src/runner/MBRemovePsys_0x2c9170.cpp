#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBRemovePsys
// Address: 0x2c9170 - 0x2c91c0
void MBRemovePsys_0x2c9170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c9170u;

    // 0x2c9170: 0x10800011
    ctx->pc = 0x2C9170u;
    {
        const bool branch_taken_0x2c9170 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C9174u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
        if (branch_taken_0x2c9170) {
            ctx->pc = 0x2C91B8u;
            goto label_2c91b8;
        }
    }
    ctx->pc = 0x2C9178u;
    // 0x2c9178: 0x80830052
    ctx->pc = 0x2c9178u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 82)));
    // 0x2c917c: 0x54620001
    ctx->pc = 0x2C917Cu;
    {
        const bool branch_taken_0x2c917c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2c917c) {
            ctx->pc = 0x2C9180u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 120)));
            ctx->pc = 0x2C9184u;
            goto label_2c9184;
        }
    }
    ctx->pc = 0x2C9184u;
label_2c9184:
    // 0x2c9184: 0x10800004
    ctx->pc = 0x2C9184u;
    {
        const bool branch_taken_0x2c9184 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C9188u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
        if (branch_taken_0x2c9184) {
            ctx->pc = 0x2C9198u;
            goto label_2c9198;
        }
    }
    ctx->pc = 0x2C918Cu;
    // 0x2c918c: 0x80830052
    ctx->pc = 0x2c918cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 82)));
    // 0x2c9190: 0x50620004
    ctx->pc = 0x2C9190u;
    {
        const bool branch_taken_0x2c9190 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2c9190) {
            ctx->pc = 0x2C9194u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 112)));
            ctx->pc = 0x2C91A4u;
            goto label_2c91a4;
        }
    }
    ctx->pc = 0x2C9198u;
label_2c9198:
    // 0x2c9198: 0x3c04003b
    ctx->pc = 0x2c9198u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x2c919c: 0x80b492e
    ctx->pc = 0x2C919Cu;
    ctx->pc = 0x2C91A0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 29680));
    ctx->pc = 0x2D24B8u;
    Errorf_0x2d24b8(rdram, ctx, runtime); return;
    ctx->pc = 0x2C91A4u;
label_2c91a4:
    // 0x2c91a4: 0x90820037
    ctx->pc = 0x2c91a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 55)));
    // 0x2c91a8: 0x2c420006
    ctx->pc = 0x2c91a8u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 6));
    // 0x2c91ac: 0x10400002
    ctx->pc = 0x2C91ACu;
    {
        const bool branch_taken_0x2c91ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C91B0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x2c91ac) {
            ctx->pc = 0x2C91B8u;
            goto label_2c91b8;
        }
    }
    ctx->pc = 0x2C91B4u;
    // 0x2c91b4: 0xa0820037
    ctx->pc = 0x2c91b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 55), (uint8_t)GPR_U32(ctx, 2));
label_2c91b8:
    // 0x2c91b8: 0x3e00008
    ctx->pc = 0x2C91B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C9184u: goto label_2c9184;
            case 0x2C9198u: goto label_2c9198;
            case 0x2C91A4u: goto label_2c91a4;
            case 0x2C91B8u: goto label_2c91b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C91C0u;
}
