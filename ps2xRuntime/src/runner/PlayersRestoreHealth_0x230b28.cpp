#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayersRestoreHealth
// Address: 0x230b28 - 0x230b78
void PlayersRestoreHealth_0x230b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x230b28u;

    // 0x230b28: 0x202d
    ctx->pc = 0x230b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230b2c: 0x3c020032
    ctx->pc = 0x230b2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x230b30: 0x24431bc0
    ctx->pc = 0x230b30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x230b34: 0x24070008
    ctx->pc = 0x230b34u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 8));
    // 0x230b38: 0x24060001
    ctx->pc = 0x230b38u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x230b3c: 0x24050018
    ctx->pc = 0x230b3cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 24));
label_230b40:
    // 0x230b40: 0x8c6200fc
    ctx->pc = 0x230b40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 252)));
    // 0x230b44: 0x50470001
    ctx->pc = 0x230B44u;
    {
        const bool branch_taken_0x230b44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 7));
        if (branch_taken_0x230b44) {
            ctx->pc = 0x230B48u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 252), GPR_U32(ctx, 6));
            ctx->pc = 0x230B4Cu;
            goto label_230b4c;
        }
    }
    ctx->pc = 0x230B4Cu;
label_230b4c:
    // 0x230b4c: 0x8c62000c
    ctx->pc = 0x230b4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x230b50: 0x454018
    ctx->pc = 0x230b50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x230b54: 0x1031021
    ctx->pc = 0x230b54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x230b58: 0xc44009b0
    ctx->pc = 0x230b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230b5c: 0xe4601a10
    ctx->pc = 0x230b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6672), bits); }
    // 0x230b60: 0x24840001
    ctx->pc = 0x230b60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x230b64: 0x28820004
    ctx->pc = 0x230b64u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 4));
    // 0x230b68: 0x1440fff5
    ctx->pc = 0x230B68u;
    {
        const bool branch_taken_0x230b68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x230B6Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 11008));
        if (branch_taken_0x230b68) {
            ctx->pc = 0x230B40u;
            goto label_230b40;
        }
    }
    ctx->pc = 0x230B70u;
    // 0x230b70: 0x3e00008
    ctx->pc = 0x230B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x230B40u: goto label_230b40;
            case 0x230B4Cu: goto label_230b4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x230B78u;
}
