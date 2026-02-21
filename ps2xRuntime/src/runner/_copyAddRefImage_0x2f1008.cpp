#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _copyAddRefImage
// Address: 0x2f1008 - 0x2f1064
void _copyAddRefImage_0x2f1008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f1008u;

    // 0x2f1008: 0x240c0018
    ctx->pc = 0x2f1008u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 24));
    // 0x2f100c: 0x3c0a002f
    ctx->pc = 0x2f100cu;
    SET_GPR_U32(ctx, 10, ((uint32_t)47 << 16));
    // 0x2f1010: 0x254a10b0
    ctx->pc = 0x2f1010u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4272));
    // 0x2f1014: 0x794b0000
    ctx->pc = 0x2f1014u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_2f1018:
    // 0x2f1018: 0x78a80000
    ctx->pc = 0x2f1018u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f101c: 0x218cffff
    ctx->pc = 0x2f101cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x2f1020: 0x78cd0000
    ctx->pc = 0x2f1020u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f1024: 0x24840010
    ctx->pc = 0x2f1024u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16));
    // 0x2f1028: 0x78a90010
    ctx->pc = 0x2f1028u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2f102c: 0x710d4108
    ctx->pc = 0x2f102cu;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 13)));
    // 0x2f1030: 0x78c20010
    ctx->pc = 0x2f1030u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2f1034: 0x710b41e8
    ctx->pc = 0x2f1034u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 11)));
    // 0x2f1038: 0x71224908
    ctx->pc = 0x2f1038u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 2)));
    // 0x2f103c: 0x710041c8
    ctx->pc = 0x2f103cu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2f1040: 0x712b49e8
    ctx->pc = 0x2f1040u;
    SET_GPR_VEC(ctx, 9, PS2_PMINH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 11)));
    // 0x2f1044: 0x24a50020
    ctx->pc = 0x2f1044u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
    // 0x2f1048: 0x712049c8
    ctx->pc = 0x2f1048u;
    SET_GPR_VEC(ctx, 9, PS2_PMAXH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2f104c: 0x24c60020
    ctx->pc = 0x2f104cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 32));
    // 0x2f1050: 0x712856c8
    ctx->pc = 0x2f1050u;
    SET_GPR_VEC(ctx, 10, PS2_PPACB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x2f1054: 0x1580fff0
    ctx->pc = 0x2F1054u;
    {
        const bool branch_taken_0x2f1054 = (GPR_U32(ctx, 12) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F1058u;
        WRITE128(ADD32(GPR_U32(ctx, 4), 4294967280), GPR_VEC(ctx, 10));
        if (branch_taken_0x2f1054) {
            ctx->pc = 0x2F1018u;
            goto label_2f1018;
        }
    }
    ctx->pc = 0x2F105Cu;
    // 0x2f105c: 0x3e00008
    ctx->pc = 0x2F105Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F1018u: goto label_2f1018;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F1064u;
}
