#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: get_button
// Address: 0x203d00 - 0x203d48
void get_button_0x203d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x203d00u;

    // 0x203d00: 0x41040
    ctx->pc = 0x203d00u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x203d04: 0x453021
    ctx->pc = 0x203d04u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x203d08: 0x90c30000
    ctx->pc = 0x203d08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x203d0c: 0x30620001
    ctx->pc = 0x203d0cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x203d10: 0x1040000b
    ctx->pc = 0x203D10u;
    {
        const bool branch_taken_0x203d10 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x203D14u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 2));
        if (branch_taken_0x203d10) {
            ctx->pc = 0x203D40u;
            goto label_203d40;
        }
    }
    ctx->pc = 0x203D18u;
    // 0x203d18: 0x50400005
    ctx->pc = 0x203D18u;
    {
        const bool branch_taken_0x203d18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x203d18) {
            ctx->pc = 0x203D1Cu;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x203D30u;
            goto label_203d30;
        }
    }
    ctx->pc = 0x203D20u;
    // 0x203d20: 0x90c20001
    ctx->pc = 0x203d20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x203d24: 0x2c420006
    ctx->pc = 0x203d24u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 6));
    // 0x203d28: 0x3e00008
    ctx->pc = 0x203D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203D2Cu;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203D30u: goto label_203d30;
            case 0x203D40u: goto label_203d40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x203D30u;
label_203d30:
    // 0x203d30: 0x451021
    ctx->pc = 0x203d30u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x203d34: 0x90420001
    ctx->pc = 0x203d34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x203d38: 0x3e00008
    ctx->pc = 0x203D38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203D3Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203D30u: goto label_203d30;
            case 0x203D40u: goto label_203d40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x203D40u;
label_203d40:
    // 0x203d40: 0x3e00008
    ctx->pc = 0x203D40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203D44u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x203D30u: goto label_203d30;
            case 0x203D40u: goto label_203d40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x203D48u;
}
