#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SumnerActive
// Address: 0x275620 - 0x275648
void SumnerActive_0x275620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x275620u;

    // 0x275620: 0x3c020034
    ctx->pc = 0x275620u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x275624: 0xc441fbc0
    ctx->pc = 0x275624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x275628: 0x44800000
    ctx->pc = 0x275628u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x27562c: 0x46010034
    ctx->pc = 0x27562cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275630: 0x0
    ctx->pc = 0x275630u;
    // NOP
    // 0x275634: 0x45000002
    ctx->pc = 0x275634u;
    {
        const bool branch_taken_0x275634 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x275638u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x275634) {
            ctx->pc = 0x275640u;
            goto label_275640;
        }
    }
    ctx->pc = 0x27563Cu;
    // 0x27563c: 0x24020001
    ctx->pc = 0x27563cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_275640:
    // 0x275640: 0x3e00008
    ctx->pc = 0x275640u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x275640u: goto label_275640;
            default: break;
        }
        return;
    }
    ctx->pc = 0x275648u;
}
