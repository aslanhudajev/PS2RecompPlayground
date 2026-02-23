#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlsndSetStreamVolume
// Address: 0x1ad0b0 - 0x1ad10c
void nlsndSetStreamVolume_0x1ad0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlsndSetStreamVolume");


    ctx->pc = 0x1ad0b0u;

    // 0x1ad0b0: 0x27bdffe0
    ctx->pc = 0x1ad0b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ad0b4: 0x7fbf0010
    ctx->pc = 0x1ad0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1ad0b8: 0x8f838ab4
    ctx->pc = 0x1ad0b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937268)));
    // 0x1ad0bc: 0x14600010
    ctx->pc = 0x1AD0BCu;
    {
        const bool branch_taken_0x1ad0bc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AD0C0u;
        SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
        if (branch_taken_0x1ad0bc) {
            ctx->pc = 0x1AD100u;
            goto label_1ad100;
        }
    }
    ctx->pc = 0x1AD0C4u;
    // 0x1ad0c4: 0xac255b40
    ctx->pc = 0x1ad0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 23360), GPR_U32(ctx, 5));
    // 0x1ad0c8: 0x3c020030
    ctx->pc = 0x1ad0c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ad0cc: 0x3c010030
    ctx->pc = 0x1ad0ccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ad0d0: 0xac265b44
    ctx->pc = 0x1ad0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 23364), GPR_U32(ctx, 6));
    // 0x1ad0d4: 0x24475b40
    ctx->pc = 0x1ad0d4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 23360));
    // 0x1ad0d8: 0x34850080
    ctx->pc = 0x1ad0d8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 4), 128));
    // 0x1ad0dc: 0x3c020030
    ctx->pc = 0x1ad0dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ad0e0: 0x24445af0
    ctx->pc = 0x1ad0e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 23280));
    // 0x1ad0e4: 0x70003628
    ctx->pc = 0x1ad0e4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ad0e8: 0x24080010
    ctx->pc = 0x1ad0e8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ad0ec: 0x70004e28
    ctx->pc = 0x1ad0ecu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ad0f0: 0x70005628
    ctx->pc = 0x1ad0f0u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ad0f4: 0x70005e28
    ctx->pc = 0x1ad0f4u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ad0f8: 0xc055e72
    ctx->pc = 0x1AD0F8u;
    SET_GPR_U32(ctx, 31, 0x1AD100u);
    ctx->pc = 0x1AD0FCu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->pc = 0x1579C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifCallRpc_0x1579c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD100u; }
        else if (ctx->pc != 0x1AD100u) { ctx->pc = 0x1AD100u; }
    }
    if (ctx->pc != 0x1AD100u) { return; }
    ctx->pc = 0x1AD100u;
label_1ad100:
    // 0x1ad100: 0x7bbf0010
    ctx->pc = 0x1ad100u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad104: 0x3e00008
    ctx->pc = 0x1AD104u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD108u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD100u: goto label_1ad100;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AD10Cu;
}
