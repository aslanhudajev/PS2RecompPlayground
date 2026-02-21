#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _copyAddRefImage
// Address: 0x1226c8 - 0x122724
void _copyAddRefImage_0x1226c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1226c8u;

    // 0x1226c8: 0x240c0018
    ctx->pc = 0x1226c8u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 24));
    // 0x1226cc: 0x3c0a0012
    ctx->pc = 0x1226ccu;
    SET_GPR_U32(ctx, 10, ((uint32_t)18 << 16));
    // 0x1226d0: 0x254a2770
    ctx->pc = 0x1226d0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 10096));
    // 0x1226d4: 0x794b0000
    ctx->pc = 0x1226d4u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_1226d8:
    // 0x1226d8: 0x78a80000
    ctx->pc = 0x1226d8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1226dc: 0x218cffff
    ctx->pc = 0x1226dcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x1226e0: 0x78cd0000
    ctx->pc = 0x1226e0u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1226e4: 0x24840010
    ctx->pc = 0x1226e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16));
    // 0x1226e8: 0x78a90010
    ctx->pc = 0x1226e8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1226ec: 0x710d4108
    ctx->pc = 0x1226ecu;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 13)));
    // 0x1226f0: 0x78c20010
    ctx->pc = 0x1226f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1226f4: 0x710b41e8
    ctx->pc = 0x1226f4u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 11)));
    // 0x1226f8: 0x71224908
    ctx->pc = 0x1226f8u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 2)));
    // 0x1226fc: 0x710041c8
    ctx->pc = 0x1226fcu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x122700: 0x712b49e8
    ctx->pc = 0x122700u;
    SET_GPR_VEC(ctx, 9, PS2_PMINH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 11)));
    // 0x122704: 0x24a50020
    ctx->pc = 0x122704u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
    // 0x122708: 0x712049c8
    ctx->pc = 0x122708u;
    SET_GPR_VEC(ctx, 9, PS2_PMAXH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x12270c: 0x24c60020
    ctx->pc = 0x12270cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 32));
    // 0x122710: 0x712856c8
    ctx->pc = 0x122710u;
    SET_GPR_VEC(ctx, 10, PS2_PPACB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x122714: 0x1580fff0
    ctx->pc = 0x122714u;
    {
        const bool branch_taken_0x122714 = (GPR_U32(ctx, 12) != GPR_U32(ctx, 0));
        ctx->pc = 0x122718u;
        WRITE128(ADD32(GPR_U32(ctx, 4), 4294967280), GPR_VEC(ctx, 10));
        if (branch_taken_0x122714) {
            ctx->pc = 0x1226D8u;
            goto label_1226d8;
        }
    }
    ctx->pc = 0x12271Cu;
    // 0x12271c: 0x3e00008
    ctx->pc = 0x12271Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1226D8u: goto label_1226d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x122724u;
}
