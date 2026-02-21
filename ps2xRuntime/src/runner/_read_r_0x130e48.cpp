#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _read_r
// Address: 0x130e48 - 0x130ea8
void _read_r_0x130e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x130e48u;

    // 0x130e48: 0x27bdffd0
    ctx->pc = 0x130e48u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x130e4c: 0xffb00000
    ctx->pc = 0x130e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130e50: 0x80802d
    ctx->pc = 0x130e50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e54: 0xffb10010
    ctx->pc = 0x130e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x130e58: 0xa0202d
    ctx->pc = 0x130e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e5c: 0x3c110017
    ctx->pc = 0x130e5cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)23 << 16));
    // 0x130e60: 0xc0282d
    ctx->pc = 0x130e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e64: 0xffbf0020
    ctx->pc = 0x130e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x130e68: 0xae205fe0
    ctx->pc = 0x130e68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24544), GPR_U32(ctx, 0));
    // 0x130e6c: 0xc043a10
    ctx->pc = 0x130E6Cu;
    SET_GPR_U32(ctx, 31, 0x130E74u);
    ctx->pc = 0x130E70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10E840u;
    {
        const uint32_t __entryPc = ctx->pc;
        read_0x10e840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130E74u; }
    }
    if (ctx->pc != 0x130E74u) { return; }
    ctx->pc = 0x130E74u;
    // 0x130e74: 0x40182d
    ctx->pc = 0x130e74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e78: 0x2402ffff
    ctx->pc = 0x130e78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x130e7c: 0x14620005
    ctx->pc = 0x130E7Cu;
    {
        const bool branch_taken_0x130e7c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x130E80u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x130e7c) {
            ctx->pc = 0x130E94u;
            goto label_130e94;
        }
    }
    ctx->pc = 0x130E84u;
    // 0x130e84: 0x8e225fe0
    ctx->pc = 0x130e84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 24544)));
    // 0x130e88: 0x54400002
    ctx->pc = 0x130E88u;
    {
        const bool branch_taken_0x130e88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x130e88) {
            ctx->pc = 0x130E8Cu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
            ctx->pc = 0x130E94u;
            goto label_130e94;
        }
    }
    ctx->pc = 0x130E90u;
    // 0x130e90: 0xdfbf0020
    ctx->pc = 0x130e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_130e94:
    // 0x130e94: 0x60102d
    ctx->pc = 0x130e94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e98: 0xdfb10010
    ctx->pc = 0x130e98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130e9c: 0xdfb00000
    ctx->pc = 0x130e9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130ea0: 0x3e00008
    ctx->pc = 0x130EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130EA4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130E94u: goto label_130e94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130EA8u;
}
