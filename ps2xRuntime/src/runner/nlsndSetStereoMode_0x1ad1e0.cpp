#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlsndSetStereoMode
// Address: 0x1ad1e0 - 0x1ad228
void nlsndSetStereoMode_0x1ad1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlsndSetStereoMode");


    ctx->pc = 0x1ad1e0u;

    // 0x1ad1e0: 0x27bdffe0
    ctx->pc = 0x1ad1e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ad1e4: 0x7fbf0010
    ctx->pc = 0x1ad1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1ad1e8: 0x8f838ab4
    ctx->pc = 0x1ad1e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937268)));
    // 0x1ad1ec: 0x1460000b
    ctx->pc = 0x1AD1ECu;
    {
        const bool branch_taken_0x1ad1ec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AD1F0u;
        SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 4), 544));
        if (branch_taken_0x1ad1ec) {
            ctx->pc = 0x1AD21Cu;
            goto label_1ad21c;
        }
    }
    ctx->pc = 0x1AD1F4u;
    // 0x1ad1f4: 0x3c020030
    ctx->pc = 0x1ad1f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ad1f8: 0x24445af0
    ctx->pc = 0x1ad1f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 23280));
    // 0x1ad1fc: 0x70003628
    ctx->pc = 0x1ad1fcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ad200: 0x70003e28
    ctx->pc = 0x1ad200u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ad204: 0x70004628
    ctx->pc = 0x1ad204u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ad208: 0x70004e28
    ctx->pc = 0x1ad208u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ad20c: 0x70005628
    ctx->pc = 0x1ad20cu;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ad210: 0x70005e28
    ctx->pc = 0x1ad210u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ad214: 0xc055e72
    ctx->pc = 0x1AD214u;
    SET_GPR_U32(ctx, 31, 0x1AD21Cu);
    ctx->pc = 0x1AD218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->pc = 0x1579C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifCallRpc_0x1579c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD21Cu; }
        else if (ctx->pc != 0x1AD21Cu) { ctx->pc = 0x1AD21Cu; }
    }
    if (ctx->pc != 0x1AD21Cu) { return; }
    ctx->pc = 0x1AD21Cu;
label_1ad21c:
    // 0x1ad21c: 0x7bbf0010
    ctx->pc = 0x1ad21cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad220: 0x3e00008
    ctx->pc = 0x1AD220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD224u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD21Cu: goto label_1ad21c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AD228u;
}
