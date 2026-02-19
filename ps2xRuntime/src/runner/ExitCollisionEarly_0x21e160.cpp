#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ExitCollisionEarly
// Address: 0x21e160 - 0x21e198
void ExitCollisionEarly_0x21e160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21e160u;

    // 0x21e160: 0x3c020032
    ctx->pc = 0x21e160u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x21e164: 0x8c42fd3c
    ctx->pc = 0x21e164u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966588)));
    // 0x21e168: 0x30420020
    ctx->pc = 0x21e168u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32));
    // 0x21e16c: 0x10400008
    ctx->pc = 0x21E16Cu;
    {
        const bool branch_taken_0x21e16c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21E170u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21e16c) {
            ctx->pc = 0x21E190u;
            goto label_21e190;
        }
    }
    ctx->pc = 0x21E174u;
    // 0x21e174: 0x3c02003c
    ctx->pc = 0x21e174u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21e178: 0xc441d5a4
    ctx->pc = 0x21e178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21e17c: 0x44800000
    ctx->pc = 0x21e17cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21e180: 0x46000832
    ctx->pc = 0x21e180u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21e184: 0x0
    ctx->pc = 0x21e184u;
    // NOP
    // 0x21e188: 0x45030001
    ctx->pc = 0x21E188u;
    {
        const bool branch_taken_0x21e188 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21e188) {
            ctx->pc = 0x21E18Cu;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x21E190u;
            goto label_21e190;
        }
    }
    ctx->pc = 0x21E190u;
label_21e190:
    // 0x21e190: 0x3e00008
    ctx->pc = 0x21E190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E194u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21E190u: goto label_21e190;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21E198u;
}
