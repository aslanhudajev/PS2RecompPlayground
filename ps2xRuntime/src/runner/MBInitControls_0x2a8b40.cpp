#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBInitControls
// Address: 0x2a8b40 - 0x2a8b78
void MBInitControls_0x2a8b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a8b40u;

    // 0x2a8b40: 0x182d
    ctx->pc = 0x2a8b40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8b44: 0x3c02003c
    ctx->pc = 0x2a8b44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2a8b48: 0x24454ea8
    ctx->pc = 0x2a8b48u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 20136));
    // 0x2a8b4c: 0x0
    ctx->pc = 0x2a8b4cu;
    // NOP
label_2a8b50:
    // 0x2a8b50: 0x31080
    ctx->pc = 0x2a8b50u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a8b54: 0x451021
    ctx->pc = 0x2a8b54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2a8b58: 0xac440000
    ctx->pc = 0x2a8b58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x2a8b5c: 0x24840001
    ctx->pc = 0x2a8b5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x2a8b60: 0x24630001
    ctx->pc = 0x2a8b60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2a8b64: 0x2862000d
    ctx->pc = 0x2a8b64u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 13));
    // 0x2a8b68: 0x1440fff9
    ctx->pc = 0x2A8B68u;
    {
        const bool branch_taken_0x2a8b68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a8b68) {
            ctx->pc = 0x2A8B50u;
            goto label_2a8b50;
        }
    }
    ctx->pc = 0x2A8B70u;
    // 0x2a8b70: 0x3e00008
    ctx->pc = 0x2A8B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A8B50u: goto label_2a8b50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A8B78u;
}
