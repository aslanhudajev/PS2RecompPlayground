#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _copyRefImage
// Address: 0x2f1068 - 0x2f10c8
void _copyRefImage_0x2f1068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f1068u;

    // 0x2f1068: 0x240c0018
    ctx->pc = 0x2f1068u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2f106c: 0x3c0a002f
    ctx->pc = 0x2f106cu;
    SET_GPR_U32(ctx, 10, ((uint32_t)47 << 16));
    // 0x2f1070: 0x254a10b0
    ctx->pc = 0x2f1070u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4272));
    // 0x2f1074: 0x794b0000
    ctx->pc = 0x2f1074u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_2f1078:
    // 0x2f1078: 0x78a80000
    ctx->pc = 0x2f1078u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f107c: 0x218cffff
    ctx->pc = 0x2f107cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x2f1080: 0x710b41e8
    ctx->pc = 0x2f1080u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 11)));
    // 0x2f1084: 0x78a90010
    ctx->pc = 0x2f1084u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2f1088: 0x710041c8
    ctx->pc = 0x2f1088u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2f108c: 0x712b49e8
    ctx->pc = 0x2f108cu;
    SET_GPR_VEC(ctx, 9, PS2_PMINH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 11)));
    // 0x2f1090: 0x24a50020
    ctx->pc = 0x2f1090u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
    // 0x2f1094: 0x712049c8
    ctx->pc = 0x2f1094u;
    SET_GPR_VEC(ctx, 9, PS2_PMAXH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2f1098: 0x24840010
    ctx->pc = 0x2f1098u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16));
    // 0x2f109c: 0x712856c8
    ctx->pc = 0x2f109cu;
    SET_GPR_VEC(ctx, 10, PS2_PPACB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x2f10a0: 0x1580fff5
    ctx->pc = 0x2F10A0u;
    {
        const bool branch_taken_0x2f10a0 = (GPR_U32(ctx, 12) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F10A4u;
        WRITE128(ADD32(GPR_U32(ctx, 4), 4294967280), GPR_VEC(ctx, 10));
        if (branch_taken_0x2f10a0) {
            ctx->pc = 0x2F1078u;
            goto label_2f1078;
        }
    }
    ctx->pc = 0x2F10A8u;
    // 0x2f10a8: 0x0
    ctx->pc = 0x2f10a8u;
    // NOP
    // 0x2f10ac: 0x0
    ctx->pc = 0x2f10acu;
    // NOP
    // 0x2f10b0: 0xff00ff
    ctx->pc = 0x2f10b0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x2f10b4: 0xff00ff
    ctx->pc = 0x2f10b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x2f10b8: 0xff00ff
    ctx->pc = 0x2f10b8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x2f10bc: 0xff00ff
    ctx->pc = 0x2f10bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x2f10c0: 0x3e00008
    ctx->pc = 0x2F10C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F1078u: goto label_2f1078;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F10C8u;
}
