#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetScrollScale
// Address: 0x201b10 - 0x201b48
void GetScrollScale_0x201b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x201b10u;

    // 0x201b10: 0x3c020031
    ctx->pc = 0x201b10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x201b14: 0x4800006
    ctx->pc = 0x201B14u;
    {
        const bool branch_taken_0x201b14 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x201B18u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294964904));
        if (branch_taken_0x201b14) {
            ctx->pc = 0x201B30u;
            goto label_201b30;
        }
    }
    ctx->pc = 0x201B1Cu;
    // 0x201b1c: 0x24030044
    ctx->pc = 0x201b1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 68));
    // 0x201b20: 0x831818
    ctx->pc = 0x201b20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x201b24: 0x3c020031
    ctx->pc = 0x201b24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x201b28: 0x2442f6f0
    ctx->pc = 0x201b28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294964976));
    // 0x201b2c: 0x621821
    ctx->pc = 0x201b2cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_201b30:
    // 0x201b30: 0x24020014
    ctx->pc = 0x201b30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
    // 0x201b34: 0xa21018
    ctx->pc = 0x201b34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x201b38: 0x8c630018
    ctx->pc = 0x201b38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x201b3c: 0x431021
    ctx->pc = 0x201b3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x201b40: 0x3e00008
    ctx->pc = 0x201B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201B44u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201B30u: goto label_201b30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201B48u;
}
