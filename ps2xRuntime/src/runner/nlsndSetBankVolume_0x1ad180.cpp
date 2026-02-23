#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlsndSetBankVolume
// Address: 0x1ad180 - 0x1ad1dc
void nlsndSetBankVolume_0x1ad180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlsndSetBankVolume");


    ctx->pc = 0x1ad180u;

    // 0x1ad180: 0x27bdffe0
    ctx->pc = 0x1ad180u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ad184: 0x7fbf0010
    ctx->pc = 0x1ad184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1ad188: 0x8f838ab4
    ctx->pc = 0x1ad188u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937268)));
    // 0x1ad18c: 0x14600010
    ctx->pc = 0x1AD18Cu;
    {
        const bool branch_taken_0x1ad18c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1AD190u;
        SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
        if (branch_taken_0x1ad18c) {
            ctx->pc = 0x1AD1D0u;
            goto label_1ad1d0;
        }
    }
    ctx->pc = 0x1AD194u;
    // 0x1ad194: 0xac245b40
    ctx->pc = 0x1ad194u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 23360), GPR_U32(ctx, 4));
    // 0x1ad198: 0x3c020030
    ctx->pc = 0x1ad198u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ad19c: 0x3c010030
    ctx->pc = 0x1ad19cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ad1a0: 0xac255b44
    ctx->pc = 0x1ad1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 23364), GPR_U32(ctx, 5));
    // 0x1ad1a4: 0x24475b40
    ctx->pc = 0x1ad1a4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 23360));
    // 0x1ad1a8: 0x3c020030
    ctx->pc = 0x1ad1a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ad1ac: 0x24445af0
    ctx->pc = 0x1ad1acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 23280));
    // 0x1ad1b0: 0x240500e0
    ctx->pc = 0x1ad1b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x1ad1b4: 0x70003628
    ctx->pc = 0x1ad1b4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ad1b8: 0x24080010
    ctx->pc = 0x1ad1b8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ad1bc: 0x70004e28
    ctx->pc = 0x1ad1bcu;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ad1c0: 0x70005628
    ctx->pc = 0x1ad1c0u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ad1c4: 0x70005e28
    ctx->pc = 0x1ad1c4u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ad1c8: 0xc055e72
    ctx->pc = 0x1AD1C8u;
    SET_GPR_U32(ctx, 31, 0x1AD1D0u);
    ctx->pc = 0x1AD1CCu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->pc = 0x1579C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifCallRpc_0x1579c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD1D0u; }
        else if (ctx->pc != 0x1AD1D0u) { ctx->pc = 0x1AD1D0u; }
    }
    if (ctx->pc != 0x1AD1D0u) { return; }
    ctx->pc = 0x1AD1D0u;
label_1ad1d0:
    // 0x1ad1d0: 0x7bbf0010
    ctx->pc = 0x1ad1d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad1d4: 0x3e00008
    ctx->pc = 0x1AD1D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD1D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD1D0u: goto label_1ad1d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AD1DCu;
}
