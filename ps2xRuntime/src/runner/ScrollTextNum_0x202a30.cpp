#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ScrollTextNum
// Address: 0x202a30 - 0x202a68
void ScrollTextNum_0x202a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x202a30u;

    // 0x202a30: 0x3c020031
    ctx->pc = 0x202a30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x202a34: 0x4800006
    ctx->pc = 0x202A34u;
    {
        const bool branch_taken_0x202a34 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x202A38u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294964904));
        if (branch_taken_0x202a34) {
            ctx->pc = 0x202A50u;
            goto label_202a50;
        }
    }
    ctx->pc = 0x202A3Cu;
    // 0x202a3c: 0x24030044
    ctx->pc = 0x202a3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 68));
    // 0x202a40: 0x831818
    ctx->pc = 0x202a40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x202a44: 0x3c020031
    ctx->pc = 0x202a44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x202a48: 0x2442f6f0
    ctx->pc = 0x202a48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294964976));
    // 0x202a4c: 0x621821
    ctx->pc = 0x202a4cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_202a50:
    // 0x202a50: 0x24020014
    ctx->pc = 0x202a50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x202a54: 0xa21018
    ctx->pc = 0x202a54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x202a58: 0x8c630018
    ctx->pc = 0x202a58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x202a5c: 0x431021
    ctx->pc = 0x202a5cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x202a60: 0x3e00008
    ctx->pc = 0x202A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202A64u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202A50u: goto label_202a50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x202A68u;
}
