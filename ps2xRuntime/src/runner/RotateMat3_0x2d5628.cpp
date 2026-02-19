#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: RotateMat3
// Address: 0x2d5628 - 0x2d56b8
void RotateMat3_0x2d5628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d5628u;

    // 0x2d5628: 0x27bdffd0
    ctx->pc = 0x2d5628u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d562c: 0xffbf0020
    ctx->pc = 0x2d562cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d5630: 0xffb10010
    ctx->pc = 0x2d5630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2d5634: 0xffb00000
    ctx->pc = 0x2d5634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d5638: 0x80802d
    ctx->pc = 0x2d5638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d563c: 0xc60c0004
    ctx->pc = 0x2d563cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d5640: 0x44800000
    ctx->pc = 0x2d5640u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2d5644: 0x46006032
    ctx->pc = 0x2d5644u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d5648: 0x0
    ctx->pc = 0x2d5648u;
    // NOP
    // 0x2d564c: 0x45010003
    ctx->pc = 0x2D564Cu;
    {
        const bool branch_taken_0x2d564c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D5650u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d564c) {
            ctx->pc = 0x2D565Cu;
            goto label_2d565c;
        }
    }
    ctx->pc = 0x2D5654u;
    // 0x2d5654: 0xc0b5632
    ctx->pc = 0x2D5654u;
    SET_GPR_U32(ctx, 31, 0x2D565Cu);
    ctx->pc = 0x2D5658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D58C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        YawMat3_0x2d58c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D565Cu; }
    }
    if (ctx->pc != 0x2D565Cu) { return; }
    ctx->pc = 0x2D565Cu;
label_2d565c:
    // 0x2d565c: 0xc60c0000
    ctx->pc = 0x2d565cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d5660: 0x44800000
    ctx->pc = 0x2d5660u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x2d5664: 0x46006032
    ctx->pc = 0x2d5664u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d5668: 0x0
    ctx->pc = 0x2d5668u;
    // NOP
    // 0x2d566c: 0x45030005
    ctx->pc = 0x2D566Cu;
    {
        const bool branch_taken_0x2d566c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d566c) {
            ctx->pc = 0x2D5670u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->pc = 0x2D5684u;
            goto label_2d5684;
        }
    }
    ctx->pc = 0x2D5674u;
    // 0x2d5674: 0xc0b5660
    ctx->pc = 0x2D5674u;
    SET_GPR_U32(ctx, 31, 0x2D567Cu);
    ctx->pc = 0x2D5678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5980u;
    {
        const uint32_t __entryPc = ctx->pc;
        PitchMat3_0x2d5980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D567Cu; }
    }
    if (ctx->pc != 0x2D567Cu) { return; }
    ctx->pc = 0x2D567Cu;
    // 0x2d567c: 0xc60c0008
    ctx->pc = 0x2d567cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2d5680: 0x44800000
    ctx->pc = 0x2d5680u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_2d5684:
    // 0x2d5684: 0x46006032
    ctx->pc = 0x2d5684u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d5688: 0x0
    ctx->pc = 0x2d5688u;
    // NOP
    // 0x2d568c: 0x45010006
    ctx->pc = 0x2D568Cu;
    {
        const bool branch_taken_0x2d568c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D5690u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2d568c) {
            ctx->pc = 0x2D56A8u;
            goto label_2d56a8;
        }
    }
    ctx->pc = 0x2D5694u;
    // 0x2d5694: 0x220202d
    ctx->pc = 0x2d5694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5698: 0xdfb10010
    ctx->pc = 0x2d5698u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d569c: 0xdfb00000
    ctx->pc = 0x2d569cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d56a0: 0x80b568c
    ctx->pc = 0x2D56A0u;
    ctx->pc = 0x2D56A4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x2D5A30u;
    RollMat3_0x2d5a30(rdram, ctx, runtime); return;
    ctx->pc = 0x2D56A8u;
label_2d56a8:
    // 0x2d56a8: 0xdfb10010
    ctx->pc = 0x2d56a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d56ac: 0xdfb00000
    ctx->pc = 0x2d56acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d56b0: 0x3e00008
    ctx->pc = 0x2D56B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D56B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D565Cu: goto label_2d565c;
            case 0x2D5684u: goto label_2d5684;
            case 0x2D56A8u: goto label_2d56a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D56B8u;
}
