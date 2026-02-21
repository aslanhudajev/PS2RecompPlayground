#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ShakeCamera
// Address: 0x26fb60 - 0x26fbbc
void ShakeCamera_0x26fb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26fb60u;

    // 0x26fb60: 0x3c02003c
    ctx->pc = 0x26fb60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26fb64: 0x8c4239a8
    ctx->pc = 0x26fb64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14760)));
    // 0x26fb68: 0x10400005
    ctx->pc = 0x26FB68u;
    {
        const bool branch_taken_0x26fb68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x26FB6Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x26fb68) {
            ctx->pc = 0x26FB80u;
            goto label_26fb80;
        }
    }
    ctx->pc = 0x26FB70u;
    // 0x26fb70: 0x8c4239ac
    ctx->pc = 0x26fb70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14764)));
    // 0x26fb74: 0xe2102a
    ctx->pc = 0x26fb74u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 2)));
    // 0x26fb78: 0x1440000e
    ctx->pc = 0x26FB78u;
    {
        const bool branch_taken_0x26fb78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x26fb78) {
            ctx->pc = 0x26FBB4u;
            goto label_26fbb4;
        }
    }
    ctx->pc = 0x26FB80u;
label_26fb80:
    // 0x26fb80: 0x3c03003c
    ctx->pc = 0x26fb80u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x26fb84: 0x24020001
    ctx->pc = 0x26fb84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x26fb88: 0xac6239a8
    ctx->pc = 0x26fb88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14760), GPR_U32(ctx, 2));
    // 0x26fb8c: 0x3c02003c
    ctx->pc = 0x26fb8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26fb90: 0xac4439a4
    ctx->pc = 0x26fb90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14756), GPR_U32(ctx, 4));
    // 0x26fb94: 0x3c02003c
    ctx->pc = 0x26fb94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26fb98: 0xac4539b0
    ctx->pc = 0x26fb98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14768), GPR_U32(ctx, 5));
    // 0x26fb9c: 0x3c02003c
    ctx->pc = 0x26fb9cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26fba0: 0xac4639b4
    ctx->pc = 0x26fba0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14772), GPR_U32(ctx, 6));
    // 0x26fba4: 0x3c02003c
    ctx->pc = 0x26fba4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26fba8: 0xe44c39b8
    ctx->pc = 0x26fba8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14776), bits); }
    // 0x26fbac: 0x3c02003c
    ctx->pc = 0x26fbacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26fbb0: 0xac4739ac
    ctx->pc = 0x26fbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14764), GPR_U32(ctx, 7));
label_26fbb4:
    // 0x26fbb4: 0x3e00008
    ctx->pc = 0x26FBB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26FB80u: goto label_26fb80;
            case 0x26FBB4u: goto label_26fbb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26FBBCu;
}
