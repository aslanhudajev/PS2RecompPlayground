#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: IsFreePlay__11CreditClassFv
// Address: 0x1d42f0 - 0x1d436c
void IsFreePlay__11CreditClassFv_0x1d42f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("IsFreePlay__11CreditClassFv");


    ctx->pc = 0x1d42f0u;

    // 0x1d42f0: 0x3c010050
    ctx->pc = 0x1d42f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1d42f4: 0x8423e504
    ctx->pc = 0x1d42f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x1d42f8: 0x2402000a
    ctx->pc = 0x1d42f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d42fc: 0x14620016
    ctx->pc = 0x1D42FCu;
    {
        const bool branch_taken_0x1d42fc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1D4300u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1d42fc) {
            ctx->pc = 0x1D4358u;
            goto label_1d4358;
        }
    }
    ctx->pc = 0x1D4304u;
    // 0x1d4304: 0x8f838bcc
    ctx->pc = 0x1d4304u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x1d4308: 0x24020002
    ctx->pc = 0x1d4308u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d430c: 0x1062000e
    ctx->pc = 0x1D430Cu;
    {
        const bool branch_taken_0x1d430c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1D4310u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1d430c) {
            ctx->pc = 0x1D4348u;
            goto label_1d4348;
        }
    }
    ctx->pc = 0x1D4314u;
    // 0x1d4314: 0x10600008
    ctx->pc = 0x1D4314u;
    {
        const bool branch_taken_0x1d4314 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D4318u;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x1d4314) {
            ctx->pc = 0x1D4338u;
            goto label_1d4338;
        }
    }
    ctx->pc = 0x1D431Cu;
    // 0x1d431c: 0x24020001
    ctx->pc = 0x1d431cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4320: 0x10620003
    ctx->pc = 0x1D4320u;
    {
        const bool branch_taken_0x1d4320 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x1d4320) {
            ctx->pc = 0x1D4330u;
            goto label_1d4330;
        }
    }
    ctx->pc = 0x1D4328u;
    // 0x1d4328: 0x10000009
    ctx->pc = 0x1D4328u;
    {
        const bool branch_taken_0x1d4328 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D432Cu;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1d4328) {
            ctx->pc = 0x1D4350u;
            goto label_1d4350;
        }
    }
    ctx->pc = 0x1D4330u;
label_1d4330:
    // 0x1d4330: 0x1000000c
    ctx->pc = 0x1D4330u;
    {
        const bool branch_taken_0x1d4330 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D4334u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
        if (branch_taken_0x1d4330) {
            ctx->pc = 0x1D4364u;
            goto label_1d4364;
        }
    }
    ctx->pc = 0x1D4338u;
label_1d4338:
    // 0x1d4338: 0x8022fec4
    ctx->pc = 0x1d4338u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966980)));
    // 0x1d433c: 0x401026
    ctx->pc = 0x1d433cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
    // 0x1d4340: 0x10000008
    ctx->pc = 0x1D4340u;
    {
        const bool branch_taken_0x1d4340 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D4344u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
        if (branch_taken_0x1d4340) {
            ctx->pc = 0x1D4364u;
            goto label_1d4364;
        }
    }
    ctx->pc = 0x1D4348u;
label_1d4348:
    // 0x1d4348: 0x10000006
    ctx->pc = 0x1D4348u;
    {
        const bool branch_taken_0x1d4348 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d4348) {
            ctx->pc = 0x1D4364u;
            goto label_1d4364;
        }
    }
    ctx->pc = 0x1D4350u;
label_1d4350:
    // 0x1d4350: 0x10000004
    ctx->pc = 0x1D4350u;
    {
        const bool branch_taken_0x1d4350 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d4350) {
            ctx->pc = 0x1D4364u;
            goto label_1d4364;
        }
    }
    ctx->pc = 0x1D4358u;
label_1d4358:
    // 0x1d4358: 0x8022fec4
    ctx->pc = 0x1d4358u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294966980)));
    // 0x1d435c: 0x401026
    ctx->pc = 0x1d435cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
    // 0x1d4360: 0x2c420001
    ctx->pc = 0x1d4360u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_1d4364:
    // 0x1d4364: 0x3e00008
    ctx->pc = 0x1D4364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D4330u: goto label_1d4330;
            case 0x1D4338u: goto label_1d4338;
            case 0x1D4348u: goto label_1d4348;
            case 0x1D4350u: goto label_1d4350;
            case 0x1D4358u: goto label_1d4358;
            case 0x1D4364u: goto label_1d4364;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D436Cu;
}
