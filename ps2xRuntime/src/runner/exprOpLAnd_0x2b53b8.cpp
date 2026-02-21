#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: exprOpLAnd
// Address: 0x2b53b8 - 0x2b53d4
void exprOpLAnd_0x2b53b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b53b8u;

    // 0x2b53b8: 0x8ca20010
    ctx->pc = 0x2b53b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2b53bc: 0x10400003
    ctx->pc = 0x2B53BCu;
    {
        const bool branch_taken_0x2b53bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B53C0u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b53bc) {
            ctx->pc = 0x2B53CCu;
            goto label_2b53cc;
        }
    }
    ctx->pc = 0x2B53C4u;
    // 0x2b53c4: 0x8cc20010
    ctx->pc = 0x2b53c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2b53c8: 0x2182b
    ctx->pc = 0x2b53c8u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2b53cc:
    // 0x2b53cc: 0x3e00008
    ctx->pc = 0x2B53CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B53D0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B53CCu: goto label_2b53cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B53D4u;
}
