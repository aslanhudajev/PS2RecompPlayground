#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_ErrFn
// Address: 0x198880 - 0x1988b4
void sfmpv_ErrFn_0x198880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_ErrFn");


    ctx->pc = 0x198880u;

    // 0x198880: 0x10a0000a
    ctx->pc = 0x198880u;
    {
        const bool branch_taken_0x198880 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x198880) {
            ctx->pc = 0x1988ACu;
            goto label_1988ac;
        }
    }
    ctx->pc = 0x198888u;
    // 0x198888: 0x3c02ffff
    ctx->pc = 0x198888u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x19888c: 0x3442fffe
    ctx->pc = 0x19888cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65534));
    // 0x198890: 0x45102b
    ctx->pc = 0x198890u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x198894: 0x14400003
    ctx->pc = 0x198894u;
    {
        const bool branch_taken_0x198894 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x198898u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 65533));
        if (branch_taken_0x198894) {
            ctx->pc = 0x1988A4u;
            goto label_1988a4;
        }
    }
    ctx->pc = 0x19889Cu;
    // 0x19889c: 0x10400003
    ctx->pc = 0x19889Cu;
    {
        const bool branch_taken_0x19889c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x19889c) {
            ctx->pc = 0x1988ACu;
            goto label_1988ac;
        }
    }
    ctx->pc = 0x1988A4u;
label_1988a4:
    // 0x1988a4: 0x8064ea0
    ctx->pc = 0x1988A4u;
    ctx->pc = 0x193A80u;
    SFLIB_SetErr_0x193a80(rdram, ctx, runtime); return;
    ctx->pc = 0x1988ACu;
label_1988ac:
    // 0x1988ac: 0x3e00008
    ctx->pc = 0x1988ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1988A4u: goto label_1988a4;
            case 0x1988ACu: goto label_1988ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1988B4u;
}
