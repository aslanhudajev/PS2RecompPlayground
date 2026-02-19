#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBWindowProjection
// Address: 0x2ab838 - 0x2ab878
void MBWindowProjection_0x2ab838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ab838u;

    // 0x2ab838: 0x3c020036
    ctx->pc = 0x2ab838u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ab83c: 0x44800000
    ctx->pc = 0x2ab83cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2ab840: 0x46006836
    ctx->pc = 0x2ab840u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ab844: 0x0
    ctx->pc = 0x2ab844u;
    // NOP
    // 0x2ab848: 0x45000003
    ctx->pc = 0x2AB848u;
    {
        const bool branch_taken_0x2ab848 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AB84Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
        if (branch_taken_0x2ab848) {
            ctx->pc = 0x2AB858u;
            goto label_2ab858;
        }
    }
    ctx->pc = 0x2AB850u;
    // 0x2ab850: 0x3c013f80
    ctx->pc = 0x2ab850u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x2ab854: 0x44816800
    ctx->pc = 0x2ab854u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
label_2ab858:
    // 0x2ab858: 0x8c620004
    ctx->pc = 0x2ab858u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ab85c: 0xe44d005c
    ctx->pc = 0x2ab85cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 92), bits); }
    // 0x2ab860: 0x8c620004
    ctx->pc = 0x2ab860u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ab864: 0xe44c0058
    ctx->pc = 0x2ab864u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2ab868: 0x8c630004
    ctx->pc = 0x2ab868u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2ab86c: 0x24020001
    ctx->pc = 0x2ab86cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ab870: 0x3e00008
    ctx->pc = 0x2AB870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB874u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AB858u: goto label_2ab858;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AB878u;
}
