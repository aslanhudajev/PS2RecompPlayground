#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: nuke_ctrls
// Address: 0x207018 - 0x207078
void nuke_ctrls_0x207018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x207018u;

    // 0x207018: 0x2402ffff
    ctx->pc = 0x207018u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20701c: 0x14820010
    ctx->pc = 0x20701Cu;
    {
        const bool branch_taken_0x20701c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x207020u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x20701c) {
            ctx->pc = 0x207060u;
            goto label_207060;
        }
    }
    ctx->pc = 0x207024u;
    // 0x207024: 0x182d
    ctx->pc = 0x207024u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207028: 0x2404003c
    ctx->pc = 0x207028u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 60));
    // 0x20702c: 0x3c020031
    ctx->pc = 0x20702cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x207030: 0x24461b98
    ctx->pc = 0x207030u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 7064));
    // 0x207034: 0x0
    ctx->pc = 0x207034u;
    // NOP
label_207038:
    // 0x207038: 0x642818
    ctx->pc = 0x207038u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20703c: 0xa61021
    ctx->pc = 0x20703cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x207040: 0xac400000
    ctx->pc = 0x207040u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x207044: 0x24630001
    ctx->pc = 0x207044u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x207048: 0x28620004
    ctx->pc = 0x207048u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 4));
    // 0x20704c: 0x0
    ctx->pc = 0x20704cu;
    // NOP
    // 0x207050: 0x1440fff9
    ctx->pc = 0x207050u;
    {
        const bool branch_taken_0x207050 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x207050) {
            ctx->pc = 0x207038u;
            goto label_207038;
        }
    }
    ctx->pc = 0x207058u;
    // 0x207058: 0x3e00008
    ctx->pc = 0x207058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207038u: goto label_207038;
            case 0x207060u: goto label_207060;
            default: break;
        }
        return;
    }
    ctx->pc = 0x207060u;
label_207060:
    // 0x207060: 0x24631b90
    ctx->pc = 0x207060u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7056));
    // 0x207064: 0x2402003c
    ctx->pc = 0x207064u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
    // 0x207068: 0x821018
    ctx->pc = 0x207068u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20706c: 0x621821
    ctx->pc = 0x20706cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x207070: 0x3e00008
    ctx->pc = 0x207070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207074u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207038u: goto label_207038;
            case 0x207060u: goto label_207060;
            default: break;
        }
        return;
    }
    ctx->pc = 0x207078u;
}
