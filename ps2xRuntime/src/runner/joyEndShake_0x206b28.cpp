#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: joyEndShake
// Address: 0x206b28 - 0x206ba0
void joyEndShake_0x206b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x206b28u;

    // 0x206b28: 0x27bdffd0
    ctx->pc = 0x206b28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x206b2c: 0xffbf0020
    ctx->pc = 0x206b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x206b30: 0xffb00010
    ctx->pc = 0x206b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x206b34: 0x80802d
    ctx->pc = 0x206b34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206b38: 0x3c02003c
    ctx->pc = 0x206b38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x206b3c: 0x2442bdc0
    ctx->pc = 0x206b3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950336));
    // 0x206b40: 0x101880
    ctx->pc = 0x206b40u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 2));
    // 0x206b44: 0x621821
    ctx->pc = 0x206b44u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x206b48: 0x8c620000
    ctx->pc = 0x206b48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x206b4c: 0x10400010
    ctx->pc = 0x206B4Cu;
    {
        const bool branch_taken_0x206b4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x206B50u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x206b4c) {
            ctx->pc = 0x206B90u;
            goto label_206b90;
        }
    }
    ctx->pc = 0x206B54u;
    // 0x206b54: 0x8c420f08
    ctx->pc = 0x206b54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 3848)));
    // 0x206b58: 0x1440000e
    ctx->pc = 0x206B58u;
    {
        const bool branch_taken_0x206b58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x206B5Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x206b58) {
            ctx->pc = 0x206B94u;
            goto label_206b94;
        }
    }
    ctx->pc = 0x206B60u;
    // 0x206b60: 0x3a0202d
    ctx->pc = 0x206b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206b64: 0x282d
    ctx->pc = 0x206b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206b68: 0xc0becc6
    ctx->pc = 0x206B68u;
    SET_GPR_U32(ctx, 31, 0x206B70u);
    ctx->pc = 0x206B6Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x2FB318u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x2fb318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206B70u; }
    }
    if (ctx->pc != 0x206B70u) { return; }
    ctx->pc = 0x206B70u;
    // 0x206b70: 0x26040003
    ctx->pc = 0x206b70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 3));
    // 0x206b74: 0x2402ffff
    ctx->pc = 0x206b74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x206b78: 0x50102a
    ctx->pc = 0x206b78u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x206b7c: 0x202200b
    ctx->pc = 0x206b7cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 16));
    // 0x206b80: 0x42083
    ctx->pc = 0x206b80u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x206b84: 0x32050003
    ctx->pc = 0x206b84u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 16), 3));
    // 0x206b88: 0xc0b9234
    ctx->pc = 0x206B88u;
    SET_GPR_U32(ctx, 31, 0x206B90u);
    ctx->pc = 0x206B8Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E48D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadSetActDirect_0x2e48d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206B90u; }
    }
    if (ctx->pc != 0x206B90u) { return; }
    ctx->pc = 0x206B90u;
label_206b90:
    // 0x206b90: 0xdfbf0020
    ctx->pc = 0x206b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_206b94:
    // 0x206b94: 0xdfb00010
    ctx->pc = 0x206b94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206b98: 0x3e00008
    ctx->pc = 0x206B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206B9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206B90u: goto label_206b90;
            case 0x206B94u: goto label_206b94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x206BA0u;
}
