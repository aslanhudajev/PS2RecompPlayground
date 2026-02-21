#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbDebugObjEnd
// Address: 0x2bd9a0 - 0x2bd9c8
void pbDebugObjEnd_0x2bd9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bd9a0u;

    // 0x2bd9a0: 0x3c020037
    ctx->pc = 0x2bd9a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bd9a4: 0x8c422740
    ctx->pc = 0x2bd9a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 10048)));
    // 0x2bd9a8: 0xac450034
    ctx->pc = 0x2bd9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 5));
    // 0x2bd9ac: 0x8c420000
    ctx->pc = 0x2bd9acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bd9b0: 0x10400003
    ctx->pc = 0x2BD9B0u;
    {
        const bool branch_taken_0x2bd9b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2bd9b0) {
            ctx->pc = 0x2BD9C0u;
            goto label_2bd9c0;
        }
    }
    ctx->pc = 0x2BD9B8u;
    // 0x2bd9b8: 0x80af5a0
    ctx->pc = 0x2BD9B8u;
    ctx->pc = 0x2BD680u;
    pbDebugObjSStep_0x2bd680(rdram, ctx, runtime); return;
    ctx->pc = 0x2BD9C0u;
label_2bd9c0:
    // 0x2bd9c0: 0x3e00008
    ctx->pc = 0x2BD9C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BD9C0u: goto label_2bd9c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2BD9C8u;
}
