#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlsndSetVoiceVolume
// Address: 0x1ad110 - 0x1ad180
void nlsndSetVoiceVolume_0x1ad110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlsndSetVoiceVolume");


    ctx->pc = 0x1ad110u;

    // 0x1ad110: 0x27bdffe0
    ctx->pc = 0x1ad110u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ad114: 0x7fbf0010
    ctx->pc = 0x1ad114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1ad118: 0x8f838ab4
    ctx->pc = 0x1ad118u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937268)));
    // 0x1ad11c: 0x14600015
    ctx->pc = 0x1AD11Cu;
    {
        const bool branch_taken_0x1ad11c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ad11c) {
            ctx->pc = 0x1AD174u;
            goto label_1ad174;
        }
    }
    ctx->pc = 0x1AD124u;
    // 0x1ad124: 0xc71025
    ctx->pc = 0x1ad124u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1ad128: 0x3c010030
    ctx->pc = 0x1ad128u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ad12c: 0xac225b40
    ctx->pc = 0x1ad12cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 23360), GPR_U32(ctx, 2));
    // 0x1ad130: 0x1091025
    ctx->pc = 0x1ad130u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1ad134: 0x3c010030
    ctx->pc = 0x1ad134u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ad138: 0xac225b44
    ctx->pc = 0x1ad138u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 23364), GPR_U32(ctx, 2));
    // 0x1ad13c: 0x51040
    ctx->pc = 0x1ad13cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x1ad140: 0x344200c0
    ctx->pc = 0x1ad140u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 192));
    // 0x1ad144: 0x442825
    ctx->pc = 0x1ad144u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ad148: 0x3c020030
    ctx->pc = 0x1ad148u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ad14c: 0x24475b40
    ctx->pc = 0x1ad14cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 23360));
    // 0x1ad150: 0x3c020030
    ctx->pc = 0x1ad150u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ad154: 0x24445af0
    ctx->pc = 0x1ad154u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 23280));
    // 0x1ad158: 0x70003628
    ctx->pc = 0x1ad158u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ad15c: 0x24080010
    ctx->pc = 0x1ad15cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ad160: 0x70004e28
    ctx->pc = 0x1ad160u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ad164: 0x70005628
    ctx->pc = 0x1ad164u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ad168: 0x70005e28
    ctx->pc = 0x1ad168u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ad16c: 0xc055e72
    ctx->pc = 0x1AD16Cu;
    SET_GPR_U32(ctx, 31, 0x1AD174u);
    ctx->pc = 0x1AD170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->pc = 0x1579C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifCallRpc_0x1579c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD174u; }
        else if (ctx->pc != 0x1AD174u) { ctx->pc = 0x1AD174u; }
    }
    if (ctx->pc != 0x1AD174u) { return; }
    ctx->pc = 0x1AD174u;
label_1ad174:
    // 0x1ad174: 0x7bbf0010
    ctx->pc = 0x1ad174u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad178: 0x3e00008
    ctx->pc = 0x1AD178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD17Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD174u: goto label_1ad174;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AD180u;
}
