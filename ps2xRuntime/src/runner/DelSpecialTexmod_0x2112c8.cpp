#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DelSpecialTexmod
// Address: 0x2112c8 - 0x211300
void DelSpecialTexmod_0x2112c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2112c8u;

    // 0x2112c8: 0x480000b
    ctx->pc = 0x2112C8u;
    {
        const bool branch_taken_0x2112c8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2112CCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x2112c8) {
            ctx->pc = 0x2112F8u;
            goto label_2112f8;
        }
    }
    ctx->pc = 0x2112D0u;
    // 0x2112d0: 0x8c42c9a8
    ctx->pc = 0x2112d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294953384)));
    // 0x2112d4: 0x82102a
    ctx->pc = 0x2112d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
    // 0x2112d8: 0x10400007
    ctx->pc = 0x2112D8u;
    {
        const bool branch_taken_0x2112d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2112DCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x2112d8) {
            ctx->pc = 0x2112F8u;
            goto label_2112f8;
        }
    }
    ctx->pc = 0x2112E0u;
    // 0x2112e0: 0x2463c9b0
    ctx->pc = 0x2112e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294953392));
    // 0x2112e4: 0x24020058
    ctx->pc = 0x2112e4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 88));
    // 0x2112e8: 0x821018
    ctx->pc = 0x2112e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2112ec: 0x621821
    ctx->pc = 0x2112ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2112f0: 0x2402ffff
    ctx->pc = 0x2112f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2112f4: 0xac620044
    ctx->pc = 0x2112f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
label_2112f8:
    // 0x2112f8: 0x3e00008
    ctx->pc = 0x2112F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2112F8u: goto label_2112f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x211300u;
}
