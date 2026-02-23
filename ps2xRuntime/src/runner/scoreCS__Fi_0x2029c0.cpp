#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: scoreCS__Fi
// Address: 0x2029c0 - 0x2029f4
void scoreCS__Fi_0x2029c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("scoreCS__Fi");


    ctx->pc = 0x2029c0u;

    // 0x2029c0: 0x3c02000f
    ctx->pc = 0x2029c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15 << 16));
    // 0x2029c4: 0x3442423f
    ctx->pc = 0x2029c4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 16959));
    // 0x2029c8: 0x44082a
    ctx->pc = 0x2029c8u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x2029cc: 0x10200003
    ctx->pc = 0x2029CCu;
    {
        const bool branch_taken_0x2029cc = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x2029cc) {
            ctx->pc = 0x2029DCu;
            goto label_2029dc;
        }
    }
    ctx->pc = 0x2029D4u;
    // 0x2029d4: 0x10000005
    ctx->pc = 0x2029D4u;
    {
        const bool branch_taken_0x2029d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2029d4) {
            ctx->pc = 0x2029ECu;
            goto label_2029ec;
        }
    }
    ctx->pc = 0x2029DCu;
label_2029dc:
    // 0x2029dc: 0x4810002
    ctx->pc = 0x2029DCu;
    {
        const bool branch_taken_0x2029dc = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2029dc) {
            ctx->pc = 0x2029E8u;
            goto label_2029e8;
        }
    }
    ctx->pc = 0x2029E4u;
    // 0x2029e4: 0x70002628
    ctx->pc = 0x2029e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2029e8:
    // 0x2029e8: 0x70801628
    ctx->pc = 0x2029e8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_2029ec:
    // 0x2029ec: 0x3e00008
    ctx->pc = 0x2029ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2029DCu: goto label_2029dc;
            case 0x2029E8u: goto label_2029e8;
            case 0x2029ECu: goto label_2029ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2029F4u;
}
