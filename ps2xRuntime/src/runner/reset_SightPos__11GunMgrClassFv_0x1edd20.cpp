#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: reset_SightPos__11GunMgrClassFv
// Address: 0x1edd20 - 0x1edd68
void reset_SightPos__11GunMgrClassFv_0x1edd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("reset_SightPos__11GunMgrClassFv");


    ctx->pc = 0x1edd20u;

    // 0x1edd20: 0x27bdffd0
    ctx->pc = 0x1edd20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1edd24: 0x7fbf0020
    ctx->pc = 0x1edd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1edd28: 0x7fb10010
    ctx->pc = 0x1edd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1edd2c: 0x7fb00000
    ctx->pc = 0x1edd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1edd30: 0x70808e28
    ctx->pc = 0x1edd30u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1edd34: 0x70008628
    ctx->pc = 0x1edd34u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1edd38:
    // 0x1edd38: 0x72202628
    ctx->pc = 0x1edd38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1edd3c: 0xc07b71c
    ctx->pc = 0x1EDD3Cu;
    SET_GPR_U32(ctx, 31, 0x1EDD44u);
    ctx->pc = 0x1EDD40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1EDC70u;
    {
        const uint32_t __entryPc = ctx->pc;
        reset_SightPosPl__11GunMgrClassFi_0x1edc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EDD44u; }
        else if (ctx->pc != 0x1EDD44u) { ctx->pc = 0x1EDD44u; }
    }
    if (ctx->pc != 0x1EDD44u) { return; }
    ctx->pc = 0x1EDD44u;
    // 0x1edd44: 0x26100001
    ctx->pc = 0x1edd44u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x1edd48: 0x2a030002
    ctx->pc = 0x1edd48u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), 2));
    // 0x1edd4c: 0x1460fffa
    ctx->pc = 0x1EDD4Cu;
    {
        const bool branch_taken_0x1edd4c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1edd4c) {
            ctx->pc = 0x1EDD38u;
            goto label_1edd38;
        }
    }
    ctx->pc = 0x1EDD54u;
    // 0x1edd54: 0x7bbf0020
    ctx->pc = 0x1edd54u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1edd58: 0x7bb10010
    ctx->pc = 0x1edd58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1edd5c: 0x7bb00000
    ctx->pc = 0x1edd5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1edd60: 0x3e00008
    ctx->pc = 0x1EDD60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDD64u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EDD38u: goto label_1edd38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EDD68u;
}
