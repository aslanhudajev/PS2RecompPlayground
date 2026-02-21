#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _fs_version
// Address: 0x306b78 - 0x306bdc
void _fs_version_0x306b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x306b78u;

    // 0x306b78: 0x27bdffd0
    ctx->pc = 0x306b78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x306b7c: 0x3c02003e
    ctx->pc = 0x306b7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)62 << 16));
    // 0x306b80: 0xffb10010
    ctx->pc = 0x306b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x306b84: 0x3c05003a
    ctx->pc = 0x306b84u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x306b88: 0xffb00000
    ctx->pc = 0x306b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x306b8c: 0x24516b78
    ctx->pc = 0x306b8cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 27512));
    // 0x306b90: 0xffbf0020
    ctx->pc = 0x306b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x306b94: 0x24a5426c
    ctx->pc = 0x306b94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 17004));
    // 0x306b98: 0x802d
    ctx->pc = 0x306b98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306b9c: 0x220202d
    ctx->pc = 0x306b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306ba0: 0xc0bec34
    ctx->pc = 0x306BA0u;
    SET_GPR_U32(ctx, 31, 0x306BA8u);
    ctx->pc = 0x306BA4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x2FB0D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x2fb0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306BA8u; }
    }
    if (ctx->pc != 0x306BA8u) { return; }
    ctx->pc = 0x306BA8u;
    // 0x306ba8: 0x10400006
    ctx->pc = 0x306BA8u;
    {
        const bool branch_taken_0x306ba8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x306BACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x306ba8) {
            ctx->pc = 0x306BC4u;
            goto label_306bc4;
        }
    }
    ctx->pc = 0x306BB0u;
    // 0x306bb0: 0x220202d
    ctx->pc = 0x306bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306bb4: 0x8c454290
    ctx->pc = 0x306bb4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 17040)));
    // 0x306bb8: 0xc0bec34
    ctx->pc = 0x306BB8u;
    SET_GPR_U32(ctx, 31, 0x306BC0u);
    ctx->pc = 0x306BBCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x2FB0D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcmp_0x2fb0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x306BC0u; }
    }
    if (ctx->pc != 0x306BC0u) { return; }
    ctx->pc = 0x306BC0u;
    // 0x306bc0: 0x2802b
    ctx->pc = 0x306bc0u;
    SET_GPR_U32(ctx, 16, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_306bc4:
    // 0x306bc4: 0x200102d
    ctx->pc = 0x306bc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306bc8: 0xdfbf0020
    ctx->pc = 0x306bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x306bcc: 0xdfb10010
    ctx->pc = 0x306bccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x306bd0: 0xdfb00000
    ctx->pc = 0x306bd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x306bd4: 0x3e00008
    ctx->pc = 0x306BD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306BD8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x306BC4u: goto label_306bc4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x306BDCu;
}
