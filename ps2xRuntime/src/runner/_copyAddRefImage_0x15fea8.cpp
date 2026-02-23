#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _copyAddRefImage
// Address: 0x15fea8 - 0x15ff04
void _copyAddRefImage_0x15fea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_copyAddRefImage");


    ctx->pc = 0x15fea8u;

    // 0x15fea8: 0x240c0018
    ctx->pc = 0x15fea8u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 24));
    // 0x15feac: 0x3c0a0016
    ctx->pc = 0x15feacu;
    SET_GPR_U32(ctx, 10, ((uint32_t)22 << 16));
    // 0x15feb0: 0x254aff50
    ctx->pc = 0x15feb0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967120));
    // 0x15feb4: 0x794b0000
    ctx->pc = 0x15feb4u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_15feb8:
    // 0x15feb8: 0x78a80000
    ctx->pc = 0x15feb8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15febc: 0x218cffff
    ctx->pc = 0x15febcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x15fec0: 0x78cd0000
    ctx->pc = 0x15fec0u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15fec4: 0x24840010
    ctx->pc = 0x15fec4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16));
    // 0x15fec8: 0x78a90010
    ctx->pc = 0x15fec8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x15fecc: 0x710d4108
    ctx->pc = 0x15feccu;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 13)));
    // 0x15fed0: 0x78c20010
    ctx->pc = 0x15fed0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x15fed4: 0x710b41e8
    ctx->pc = 0x15fed4u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 11)));
    // 0x15fed8: 0x71224908
    ctx->pc = 0x15fed8u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 2)));
    // 0x15fedc: 0x710041c8
    ctx->pc = 0x15fedcu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x15fee0: 0x712b49e8
    ctx->pc = 0x15fee0u;
    SET_GPR_VEC(ctx, 9, PS2_PMINH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 11)));
    // 0x15fee4: 0x24a50020
    ctx->pc = 0x15fee4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
    // 0x15fee8: 0x712049c8
    ctx->pc = 0x15fee8u;
    SET_GPR_VEC(ctx, 9, PS2_PMAXH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x15feec: 0x24c60020
    ctx->pc = 0x15feecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 32));
    // 0x15fef0: 0x712856c8
    ctx->pc = 0x15fef0u;
    SET_GPR_VEC(ctx, 10, PS2_PPACB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x15fef4: 0x1580fff0
    ctx->pc = 0x15FEF4u;
    {
        const bool branch_taken_0x15fef4 = (GPR_U32(ctx, 12) != GPR_U32(ctx, 0));
        ctx->pc = 0x15FEF8u;
        WRITE128(ADD32(GPR_U32(ctx, 4), 4294967280), GPR_VEC(ctx, 10));
        if (branch_taken_0x15fef4) {
            ctx->pc = 0x15FEB8u;
            goto label_15feb8;
        }
    }
    ctx->pc = 0x15FEFCu;
    // 0x15fefc: 0x3e00008
    ctx->pc = 0x15FEFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15FEB8u: goto label_15feb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15FF04u;
}
