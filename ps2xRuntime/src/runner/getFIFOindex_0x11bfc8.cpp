#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: getFIFOindex
// Address: 0x11bfc8 - 0x11c008
void getFIFOindex_0x11bfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11bfc8u;

    // 0x11bfc8: 0x80302d
    ctx->pc = 0x11bfc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bfcc: 0x3c020fff
    ctx->pc = 0x11bfccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)4095 << 16));
    // 0x11bfd0: 0x8cc30008
    ctx->pc = 0x11bfd0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x11bfd4: 0x3442ffff
    ctx->pc = 0x11bfd4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x11bfd8: 0x8cc40004
    ctx->pc = 0x11bfd8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x11bfdc: 0x31900
    ctx->pc = 0x11bfdcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 4));
    // 0x11bfe0: 0x641821
    ctx->pc = 0x11bfe0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11bfe4: 0x24630010
    ctx->pc = 0x11bfe4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
    // 0x11bfe8: 0x621824
    ctx->pc = 0x11bfe8u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11bfec: 0x54a30003
    ctx->pc = 0x11BFECu;
    {
        const bool branch_taken_0x11bfec = (GPR_U32(ctx, 5) != GPR_U32(ctx, 3));
        if (branch_taken_0x11bfec) {
            ctx->pc = 0x11BFF0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->pc = 0x11BFFCu;
            goto label_11bffc;
        }
    }
    ctx->pc = 0x11BFF4u;
    // 0x11bff4: 0x3e00008
    ctx->pc = 0x11BFF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BFF8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11BFFCu: goto label_11bffc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11BFFCu;
label_11bffc:
    // 0x11bffc: 0xa21023
    ctx->pc = 0x11bffcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x11c000: 0x3e00008
    ctx->pc = 0x11C000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C004u;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 11));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11BFFCu: goto label_11bffc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11C008u;
}
