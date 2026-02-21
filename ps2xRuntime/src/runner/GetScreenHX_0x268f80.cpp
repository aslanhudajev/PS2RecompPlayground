#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetScreenHX
// Address: 0x268f80 - 0x268fe0
void GetScreenHX_0x268f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x268f80u;

    // 0x268f80: 0x3c020034
    ctx->pc = 0x268f80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x268f84: 0x8c42f8fc
    ctx->pc = 0x268f84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965500)));
    // 0x268f88: 0x14400006
    ctx->pc = 0x268F88u;
    {
        const bool branch_taken_0x268f88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x268F8Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x268f88) {
            ctx->pc = 0x268FA4u;
            goto label_268fa4;
        }
    }
    ctx->pc = 0x268F90u;
    // 0x268f90: 0x44800000
    ctx->pc = 0x268f90u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x268f94: 0x3e00008
    ctx->pc = 0x268F94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x268F9Cu: goto label_268f9c;
            case 0x268FA4u: goto label_268fa4;
            case 0x268FB0u: goto label_268fb0;
            case 0x268FC8u: goto label_268fc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x268F9Cu;
label_268f9c:
    // 0x268f9c: 0x3e00008
    ctx->pc = 0x268F9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268FA0u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x268F9Cu: goto label_268f9c;
            case 0x268FA4u: goto label_268fa4;
            case 0x268FB0u: goto label_268fb0;
            case 0x268FC8u: goto label_268fc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x268FA4u;
label_268fa4:
    // 0x268fa4: 0x3c020034
    ctx->pc = 0x268fa4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x268fa8: 0x2443f530
    ctx->pc = 0x268fa8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294964528));
    // 0x268fac: 0x0
    ctx->pc = 0x268facu;
    // NOP
label_268fb0:
    // 0x268fb0: 0x8c620000
    ctx->pc = 0x268fb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x268fb4: 0x10400004
    ctx->pc = 0x268FB4u;
    {
        const bool branch_taken_0x268fb4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x268FB8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x268fb4) {
            ctx->pc = 0x268FC8u;
            goto label_268fc8;
        }
    }
    ctx->pc = 0x268FBCu;
    // 0x268fbc: 0x8c620004
    ctx->pc = 0x268fbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x268fc0: 0x1082fff6
    ctx->pc = 0x268FC0u;
    {
        const bool branch_taken_0x268fc0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x268fc0) {
            ctx->pc = 0x268F9Cu;
            goto label_268f9c;
        }
    }
    ctx->pc = 0x268FC8u;
label_268fc8:
    // 0x268fc8: 0x28a2000f
    ctx->pc = 0x268fc8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 15));
    // 0x268fcc: 0x1440fff8
    ctx->pc = 0x268FCCu;
    {
        const bool branch_taken_0x268fcc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x268FD0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 64));
        if (branch_taken_0x268fcc) {
            ctx->pc = 0x268FB0u;
            goto label_268fb0;
        }
    }
    ctx->pc = 0x268FD4u;
    // 0x268fd4: 0x44800000
    ctx->pc = 0x268fd4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x268fd8: 0x3e00008
    ctx->pc = 0x268FD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x268F9Cu: goto label_268f9c;
            case 0x268FA4u: goto label_268fa4;
            case 0x268FB0u: goto label_268fb0;
            case 0x268FC8u: goto label_268fc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x268FE0u;
}
