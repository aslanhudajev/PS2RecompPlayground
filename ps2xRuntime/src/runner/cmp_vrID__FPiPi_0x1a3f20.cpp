#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: cmp_vrID__FPiPi
// Address: 0x1a3f20 - 0x1a3f5c
void cmp_vrID__FPiPi_0x1a3f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("cmp_vrID__FPiPi");


    ctx->pc = 0x1a3f20u;

    // 0x1a3f20: 0x10000008
    ctx->pc = 0x1A3F20u;
    {
        const bool branch_taken_0x1a3f20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3F24u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
        if (branch_taken_0x1a3f20) {
            ctx->pc = 0x1A3F44u;
            goto label_1a3f44;
        }
    }
    ctx->pc = 0x1A3F28u;
label_1a3f28:
    // 0x1a3f28: 0x24440004
    ctx->pc = 0x1a3f28u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a3f2c: 0x8c420000
    ctx->pc = 0x1a3f2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a3f30: 0x54400003
    ctx->pc = 0x1A3F30u;
    {
        const bool branch_taken_0x1a3f30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a3f30) {
            ctx->pc = 0x1A3F34u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4));
            ctx->pc = 0x1A3F40u;
            goto label_1a3f40;
        }
    }
    ctx->pc = 0x1A3F38u;
    // 0x1a3f38: 0x10000006
    ctx->pc = 0x1A3F38u;
    {
        const bool branch_taken_0x1a3f38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A3F3Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1a3f38) {
            ctx->pc = 0x1A3F54u;
            goto label_1a3f54;
        }
    }
    ctx->pc = 0x1A3F40u;
label_1a3f40:
    // 0x1a3f40: 0x8c830000
    ctx->pc = 0x1a3f40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a3f44:
    // 0x1a3f44: 0x8ca20000
    ctx->pc = 0x1a3f44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a3f48: 0x1062fff7
    ctx->pc = 0x1A3F48u;
    {
        const bool branch_taken_0x1a3f48 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1A3F4Cu;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a3f48) {
            ctx->pc = 0x1A3F28u;
            goto label_1a3f28;
        }
    }
    ctx->pc = 0x1A3F50u;
    // 0x1a3f50: 0x70001628
    ctx->pc = 0x1a3f50u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a3f54:
    // 0x1a3f54: 0x3e00008
    ctx->pc = 0x1A3F54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A3F28u: goto label_1a3f28;
            case 0x1A3F40u: goto label_1a3f40;
            case 0x1A3F44u: goto label_1a3f44;
            case 0x1A3F54u: goto label_1a3f54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A3F5Cu;
}
