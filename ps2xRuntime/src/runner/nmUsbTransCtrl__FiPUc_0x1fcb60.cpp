#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nmUsbTransCtrl__FiPUc
// Address: 0x1fcb60 - 0x1fcbd0
void nmUsbTransCtrl__FiPUc_0x1fcb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nmUsbTransCtrl__FiPUc");


    ctx->pc = 0x1fcb60u;

    // 0x1fcb60: 0x27bdffd0
    ctx->pc = 0x1fcb60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fcb64: 0x7fbf0020
    ctx->pc = 0x1fcb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1fcb68: 0x7fb00010
    ctx->pc = 0x1fcb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fcb6c: 0x3c010052
    ctx->pc = 0x1fcb6cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)82 << 16));
    // 0x1fcb70: 0xa0249480
    ctx->pc = 0x1fcb70u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294939776), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fcb74: 0x3c020052
    ctx->pc = 0x1fcb74u;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x1fcb78: 0x70a08628
    ctx->pc = 0x1fcb78u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1fcb7c: 0x24449481
    ctx->pc = 0x1fcb7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294939777));
    // 0x1fcb80: 0xc050c90
    ctx->pc = 0x1FCB80u;
    SET_GPR_U32(ctx, 31, 0x1FCB88u);
    ctx->pc = 0x1FCB84u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x143240u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x143240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCB88u; }
        else if (ctx->pc != 0x1FCB88u) { ctx->pc = 0x1FCB88u; }
    }
    if (ctx->pc != 0x1FCB88u) { return; }
    ctx->pc = 0x1FCB88u;
    // 0x1fcb88: 0x3c020052
    ctx->pc = 0x1fcb88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x1fcb8c: 0x24479480
    ctx->pc = 0x1fcb8cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294939776));
    // 0x1fcb90: 0x3c020052
    ctx->pc = 0x1fcb90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x1fcb94: 0x24080020
    ctx->pc = 0x1fcb94u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1fcb98: 0x72004e28
    ctx->pc = 0x1fcb98u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1fcb9c: 0x24449440
    ctx->pc = 0x1fcb9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294939712));
    // 0x1fcba0: 0x24050005
    ctx->pc = 0x1fcba0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fcba4: 0x24060001
    ctx->pc = 0x1fcba4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fcba8: 0x71005628
    ctx->pc = 0x1fcba8u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1fcbac: 0x70005e28
    ctx->pc = 0x1fcbacu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fcbb0: 0xc055e72
    ctx->pc = 0x1FCBB0u;
    SET_GPR_U32(ctx, 31, 0x1FCBB8u);
    ctx->pc = 0x1FCBB4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->pc = 0x1579C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifCallRpc_0x1579c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FCBB8u; }
        else if (ctx->pc != 0x1FCBB8u) { ctx->pc = 0x1FCBB8u; }
    }
    if (ctx->pc != 0x1FCBB8u) { return; }
    ctx->pc = 0x1FCBB8u;
    // 0x1fcbb8: 0x50400001
    ctx->pc = 0x1FCBB8u;
    {
        const bool branch_taken_0x1fcbb8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1fcbb8) {
            ctx->pc = 0x1FCBBCu;
            SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
            ctx->pc = 0x1FCBC0u;
            goto label_1fcbc0;
        }
    }
    ctx->pc = 0x1FCBC0u;
label_1fcbc0:
    // 0x1fcbc0: 0x7bbf0020
    ctx->pc = 0x1fcbc0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fcbc4: 0x7bb00010
    ctx->pc = 0x1fcbc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fcbc8: 0x3e00008
    ctx->pc = 0x1FCBC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCBCCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FCBC0u: goto label_1fcbc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FCBD0u;
}
