#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _markOutput
// Address: 0x2f3c38 - 0x2f3c70
void _markOutput_0x2f3c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f3c38u;

    // 0x2f3c38: 0x3c02003a
    ctx->pc = 0x2f3c38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f3c3c: 0x24050002
    ctx->pc = 0x2f3c3cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f3c40: 0x8c433024
    ctx->pc = 0x2f3c40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12324)));
    // 0x2f3c44: 0x8c640040
    ctx->pc = 0x2f3c44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2f3c48: 0x8c820008
    ctx->pc = 0x2f3c48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2f3c4c: 0x10450004
    ctx->pc = 0x2F3C4Cu;
    {
        const bool branch_taken_0x2f3c4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x2F3C50u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f3c4c) {
            ctx->pc = 0x2F3C60u;
            goto label_2f3c60;
        }
    }
    ctx->pc = 0x2F3C54u;
    // 0x2f3c54: 0x8c433144
    ctx->pc = 0x2f3c54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12612)));
    // 0x2f3c58: 0xac850008
    ctx->pc = 0x2f3c58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x2f3c5c: 0xac8300ac
    ctx->pc = 0x2f3c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 3));
label_2f3c60:
    // 0x2f3c60: 0x3c03003a
    ctx->pc = 0x2f3c60u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2f3c64: 0x24020001
    ctx->pc = 0x2f3c64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3c68: 0x3e00008
    ctx->pc = 0x2F3C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3C6Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 14528), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F3C60u: goto label_2f3c60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F3C70u;
}
