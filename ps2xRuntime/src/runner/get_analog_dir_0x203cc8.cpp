#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: get_analog_dir
// Address: 0x203cc8 - 0x203cfc
void get_analog_dir_0x203cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x203cc8u;

    // 0x203cc8: 0x90830000
    ctx->pc = 0x203cc8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x203ccc: 0x30620001
    ctx->pc = 0x203cccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x203cd0: 0x10400008
    ctx->pc = 0x203CD0u;
    {
        const bool branch_taken_0x203cd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x203CD4u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x203cd0) {
            ctx->pc = 0x203CF4u;
            goto label_203cf4;
        }
    }
    ctx->pc = 0x203CD8u;
    // 0x203cd8: 0x50400003
    ctx->pc = 0x203CD8u;
    {
        const bool branch_taken_0x203cd8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x203cd8) {
            ctx->pc = 0x203CDCu;
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
            ctx->pc = 0x203CE8u;
            goto label_203ce8;
        }
    }
    ctx->pc = 0x203CE0u;
    // 0x203ce0: 0x3e00008
    ctx->pc = 0x203CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203CE4u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203CE8u: goto label_203ce8;
            case 0x203CF4u: goto label_203cf4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x203CE8u;
label_203ce8:
    // 0x203ce8: 0x240200ff
    ctx->pc = 0x203ce8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 255));
    // 0x203cec: 0x3e00008
    ctx->pc = 0x203CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203CF0u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203CE8u: goto label_203ce8;
            case 0x203CF4u: goto label_203cf4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x203CF4u;
label_203cf4:
    // 0x203cf4: 0x3e00008
    ctx->pc = 0x203CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203CF8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203CE8u: goto label_203ce8;
            case 0x203CF4u: goto label_203cf4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x203CFCu;
}
