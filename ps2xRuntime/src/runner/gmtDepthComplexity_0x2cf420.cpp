#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: gmtDepthComplexity
// Address: 0x2cf420 - 0x2cf47c
void gmtDepthComplexity_0x2cf420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cf420u;

    // 0x2cf420: 0x3c02003d
    ctx->pc = 0x2cf420u;
    SET_GPR_U32(ctx, 2, ((uint32_t)61 << 16));
    // 0x2cf424: 0x8c422240
    ctx->pc = 0x2cf424u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8768)));
    // 0x2cf428: 0x14400004
    ctx->pc = 0x2CF428u;
    {
        const bool branch_taken_0x2cf428 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CF42Cu;
        SET_GPR_U32(ctx, 6, ((uint32_t)61 << 16));
        if (branch_taken_0x2cf428) {
            ctx->pc = 0x2CF43Cu;
            goto label_2cf43c;
        }
    }
    ctx->pc = 0x2CF430u;
    // 0x2cf430: 0x44800000
    ctx->pc = 0x2cf430u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2cf434: 0x3e00008
    ctx->pc = 0x2CF434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CF43Cu: goto label_2cf43c;
            case 0x2CF474u: goto label_2cf474;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CF43Cu;
label_2cf43c:
    // 0x2cf43c: 0xc4c12244
    ctx->pc = 0x2cf43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cf440: 0x46800860
    ctx->pc = 0x2cf440u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2cf444: 0x3c03003d
    ctx->pc = 0x2cf444u;
    SET_GPR_U32(ctx, 3, ((uint32_t)61 << 16));
    // 0x2cf448: 0x8c622240
    ctx->pc = 0x2cf448u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8768)));
    // 0x2cf44c: 0xa21018
    ctx->pc = 0x2cf44cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2cf450: 0x44820000
    ctx->pc = 0x2cf450u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2cf454: 0x46800020
    ctx->pc = 0x2cf454u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2cf458: 0x0
    ctx->pc = 0x2cf458u;
    // NOP
    // 0x2cf45c: 0x0
    ctx->pc = 0x2cf45cu;
    // NOP
    // 0x2cf460: 0x46000843
    ctx->pc = 0x2cf460u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x2cf464: 0x10800003
    ctx->pc = 0x2CF464u;
    {
        const bool branch_taken_0x2cf464 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2cf464) {
            ctx->pc = 0x2CF474u;
            goto label_2cf474;
        }
    }
    ctx->pc = 0x2CF46Cu;
    // 0x2cf46c: 0xac602240
    ctx->pc = 0x2cf46cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8768), GPR_U32(ctx, 0));
    // 0x2cf470: 0xacc02244
    ctx->pc = 0x2cf470u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8772), GPR_U32(ctx, 0));
label_2cf474:
    // 0x2cf474: 0x3e00008
    ctx->pc = 0x2CF474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF478u;
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CF43Cu: goto label_2cf43c;
            case 0x2CF474u: goto label_2cf474;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CF47Cu;
}
