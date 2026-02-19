#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DeadEnd
// Address: 0x23bf08 - 0x23bf4c
void DeadEnd_0x23bf08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x23bf08u;

    // 0x23bf08: 0x240203b0
    ctx->pc = 0x23bf08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 944));
    // 0x23bf0c: 0x822018
    ctx->pc = 0x23bf0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x23bf10: 0x3c020033
    ctx->pc = 0x23bf10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23bf14: 0x2442dfd0
    ctx->pc = 0x23bf14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x23bf18: 0x822021
    ctx->pc = 0x23bf18u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23bf1c: 0x8c82036c
    ctx->pc = 0x23bf1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 876)));
    // 0x23bf20: 0x1c400008
    ctx->pc = 0x23BF20u;
    {
        const bool branch_taken_0x23bf20 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x23BF24u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 60));
        if (branch_taken_0x23bf20) {
            ctx->pc = 0x23BF44u;
            goto label_23bf44;
        }
    }
    ctx->pc = 0x23BF28u;
    // 0x23bf28: 0x14400006
    ctx->pc = 0x23BF28u;
    {
        const bool branch_taken_0x23bf28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23BF2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 876), GPR_U32(ctx, 5));
        if (branch_taken_0x23bf28) {
            ctx->pc = 0x23BF44u;
            goto label_23bf44;
        }
    }
    ctx->pc = 0x23BF30u;
    // 0x23bf30: 0x8c8200e4
    ctx->pc = 0x23bf30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x23bf34: 0x2442fffd
    ctx->pc = 0x23bf34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x23bf38: 0x2c420002
    ctx->pc = 0x23bf38u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x23bf3c: 0x54400001
    ctx->pc = 0x23BF3Cu;
    {
        const bool branch_taken_0x23bf3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x23bf3c) {
            ctx->pc = 0x23BF40u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 0));
            ctx->pc = 0x23BF44u;
            goto label_23bf44;
        }
    }
    ctx->pc = 0x23BF44u;
label_23bf44:
    // 0x23bf44: 0x3e00008
    ctx->pc = 0x23BF44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23BF44u: goto label_23bf44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23BF4Cu;
}
