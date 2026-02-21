#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: checkOneList
// Address: 0x2c9268 - 0x2c929c
void checkOneList_0x2c9268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c9268u;

    // 0x2c9268: 0x8c820004
    ctx->pc = 0x2c9268u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c926c: 0x10400009
    ctx->pc = 0x2C926Cu;
    {
        const bool branch_taken_0x2c926c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2c926c) {
            ctx->pc = 0x2C9294u;
            goto label_2c9294;
        }
    }
    ctx->pc = 0x2C9274u;
    // 0x2c9274: 0x0
    ctx->pc = 0x2c9274u;
    // NOP
label_2c9278:
    // 0x2c9278: 0x8c420024
    ctx->pc = 0x2c9278u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2c927c: 0x0
    ctx->pc = 0x2c927cu;
    // NOP
    // 0x2c9280: 0x0
    ctx->pc = 0x2c9280u;
    // NOP
    // 0x2c9284: 0x0
    ctx->pc = 0x2c9284u;
    // NOP
    // 0x2c9288: 0x0
    ctx->pc = 0x2c9288u;
    // NOP
    // 0x2c928c: 0x1440fffa
    ctx->pc = 0x2C928Cu;
    {
        const bool branch_taken_0x2c928c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c928c) {
            ctx->pc = 0x2C9278u;
            goto label_2c9278;
        }
    }
    ctx->pc = 0x2C9294u;
label_2c9294:
    // 0x2c9294: 0x3e00008
    ctx->pc = 0x2C9294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C9278u: goto label_2c9278;
            case 0x2C9294u: goto label_2c9294;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C929Cu;
}
