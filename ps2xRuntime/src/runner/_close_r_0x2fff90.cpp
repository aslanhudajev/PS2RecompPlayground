#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _close_r
// Address: 0x2fff90 - 0x2fffe8
void _close_r_0x2fff90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2fff90u;

    // 0x2fff90: 0x27bdffd0
    ctx->pc = 0x2fff90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fff94: 0xffb10010
    ctx->pc = 0x2fff94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2fff98: 0xffb00000
    ctx->pc = 0x2fff98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fff9c: 0x80882d
    ctx->pc = 0x2fff9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fffa0: 0x3c10003c
    ctx->pc = 0x2fffa0u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
    // 0x2fffa4: 0xffbf0020
    ctx->pc = 0x2fffa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fffa8: 0xa0202d
    ctx->pc = 0x2fffa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fffac: 0xc0c0f04
    ctx->pc = 0x2FFFACu;
    SET_GPR_U32(ctx, 31, 0x2FFFB4u);
    ctx->pc = 0x2FFFB0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294947224), GPR_U32(ctx, 0));
    ctx->pc = 0x303C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        close_0x303c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFFB4u; }
    }
    if (ctx->pc != 0x2FFFB4u) { return; }
    ctx->pc = 0x2FFFB4u;
    // 0x2fffb4: 0x40182d
    ctx->pc = 0x2fffb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fffb8: 0x2402ffff
    ctx->pc = 0x2fffb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fffbc: 0x14620005
    ctx->pc = 0x2FFFBCu;
    {
        const bool branch_taken_0x2fffbc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2FFFC0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2fffbc) {
            ctx->pc = 0x2FFFD4u;
            goto label_2fffd4;
        }
    }
    ctx->pc = 0x2FFFC4u;
    // 0x2fffc4: 0x8e02b198
    ctx->pc = 0x2fffc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294947224)));
    // 0x2fffc8: 0x54400002
    ctx->pc = 0x2FFFC8u;
    {
        const bool branch_taken_0x2fffc8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2fffc8) {
            ctx->pc = 0x2FFFCCu;
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
            ctx->pc = 0x2FFFD4u;
            goto label_2fffd4;
        }
    }
    ctx->pc = 0x2FFFD0u;
    // 0x2fffd0: 0xdfbf0020
    ctx->pc = 0x2fffd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fffd4:
    // 0x2fffd4: 0x60102d
    ctx->pc = 0x2fffd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fffd8: 0xdfb10010
    ctx->pc = 0x2fffd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fffdc: 0xdfb00000
    ctx->pc = 0x2fffdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fffe0: 0x3e00008
    ctx->pc = 0x2FFFE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFFE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2FFFD4u: goto label_2fffd4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2FFFE8u;
}
