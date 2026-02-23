#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PlayerWorkInit__Fv
// Address: 0x213a60 - 0x213ab8
void PlayerWorkInit__Fv_0x213a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PlayerWorkInit__Fv");


    ctx->pc = 0x213a60u;

    // 0x213a60: 0x3c030050
    ctx->pc = 0x213a60u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x213a64: 0x70004628
    ctx->pc = 0x213a64u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x213a68: 0x2467dd20
    ctx->pc = 0x213a68u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 4294958368));
    // 0x213a6c: 0x24040009
    ctx->pc = 0x213a6cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 9));
    // 0x213a70: 0x2405000a
    ctx->pc = 0x213a70u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    // 0x213a74: 0x2406000b
    ctx->pc = 0x213a74u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 11));
label_213a78:
    // 0x213a78: 0xace80000
    ctx->pc = 0x213a78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x213a7c: 0xace000bc
    ctx->pc = 0x213a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 188), GPR_U32(ctx, 0));
    // 0x213a80: 0x3c010050
    ctx->pc = 0x213a80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x213a84: 0x8423e504
    ctx->pc = 0x213a84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x213a88: 0x50660006
    ctx->pc = 0x213A88u;
    {
        const bool branch_taken_0x213a88 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 6));
        if (branch_taken_0x213a88) {
            ctx->pc = 0x213A8Cu;
            SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
            ctx->pc = 0x213AA4u;
            goto label_213aa4;
        }
    }
    ctx->pc = 0x213A90u;
    // 0x213a90: 0x10650003
    ctx->pc = 0x213A90u;
    {
        const bool branch_taken_0x213a90 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 5));
        if (branch_taken_0x213a90) {
            ctx->pc = 0x213AA0u;
            goto label_213aa0;
        }
    }
    ctx->pc = 0x213A98u;
    // 0x213a98: 0xace40004
    ctx->pc = 0x213a98u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x213a9c: 0x0
    ctx->pc = 0x213a9cu;
    // NOP
label_213aa0:
    // 0x213aa0: 0x25080001
    ctx->pc = 0x213aa0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_213aa4:
    // 0x213aa4: 0x29030002
    ctx->pc = 0x213aa4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 8), 2));
    // 0x213aa8: 0x1460fff3
    ctx->pc = 0x213AA8u;
    {
        const bool branch_taken_0x213aa8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x213AACu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 840));
        if (branch_taken_0x213aa8) {
            ctx->pc = 0x213A78u;
            goto label_213a78;
        }
    }
    ctx->pc = 0x213AB0u;
    // 0x213ab0: 0x3e00008
    ctx->pc = 0x213AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x213A78u: goto label_213a78;
            case 0x213AA0u: goto label_213aa0;
            case 0x213AA4u: goto label_213aa4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x213AB8u;
}
