#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SumnerHintsActivate
// Address: 0x274828 - 0x2748b8
void SumnerHintsActivate_0x274828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x274828u;

    // 0x274828: 0x27bdfff0
    ctx->pc = 0x274828u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27482c: 0xffbf0000
    ctx->pc = 0x27482cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x274830: 0x3c030034
    ctx->pc = 0x274830u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x274834: 0xc461fbb0
    ctx->pc = 0x274834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294966192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274838: 0x44800000
    ctx->pc = 0x274838u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x27483c: 0x46000832
    ctx->pc = 0x27483cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x274840: 0x0
    ctx->pc = 0x274840u;
    // NOP
    // 0x274844: 0x4500000e
    ctx->pc = 0x274844u;
    {
        const bool branch_taken_0x274844 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x274848u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x274844) {
            ctx->pc = 0x274880u;
            goto label_274880;
        }
    }
    ctx->pc = 0x27484Cu;
    // 0x27484c: 0xc440ffa4
    ctx->pc = 0x27484cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274850: 0x3c014000
    ctx->pc = 0x274850u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x274854: 0x44810800
    ctx->pc = 0x274854u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x274858: 0x46010000
    ctx->pc = 0x274858u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27485c: 0xe460fbb0
    ctx->pc = 0x27485cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294966192), bits); }
    // 0x274860: 0x3c030034
    ctx->pc = 0x274860u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x274864: 0x24020003
    ctx->pc = 0x274864u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x274868: 0xac62fc88
    ctx->pc = 0x274868u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966408), GPR_U32(ctx, 2));
    // 0x27486c: 0x3c030034
    ctx->pc = 0x27486cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x274870: 0x24020001
    ctx->pc = 0x274870u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x274874: 0xac62fbac
    ctx->pc = 0x274874u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966188), GPR_U32(ctx, 2));
    // 0x274878: 0x1000000c
    ctx->pc = 0x274878u;
    {
        const bool branch_taken_0x274878 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27487Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x274878) {
            ctx->pc = 0x2748ACu;
            goto label_2748ac;
        }
    }
    ctx->pc = 0x274880u;
label_274880:
    // 0x274880: 0xc441ffa4
    ctx->pc = 0x274880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274884: 0xc460fbb0
    ctx->pc = 0x274884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294966192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274888: 0x46000834
    ctx->pc = 0x274888u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27488c: 0x0
    ctx->pc = 0x27488cu;
    // NOP
    // 0x274890: 0x45010006
    ctx->pc = 0x274890u;
    {
        const bool branch_taken_0x274890 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x274894u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x274890) {
            ctx->pc = 0x2748ACu;
            goto label_2748ac;
        }
    }
    ctx->pc = 0x274898u;
    // 0x274898: 0xc083a0a
    ctx->pc = 0x274898u;
    SET_GPR_U32(ctx, 31, 0x2748A0u);
    ctx->pc = 0x20E828u;
    {
        const uint32_t __entryPc = ctx->pc;
        HintMenu_0x20e828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2748A0u; }
    }
    if (ctx->pc != 0x2748A0u) { return; }
    ctx->pc = 0x2748A0u;
    // 0x2748a0: 0x3c020034
    ctx->pc = 0x2748a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2748a4: 0xac40fbb0
    ctx->pc = 0x2748a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966192), GPR_U32(ctx, 0));
    // 0x2748a8: 0x24020001
    ctx->pc = 0x2748a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2748ac:
    // 0x2748ac: 0xdfbf0000
    ctx->pc = 0x2748acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2748b0: 0x3e00008
    ctx->pc = 0x2748B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2748B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x274880u: goto label_274880;
            case 0x2748ACu: goto label_2748ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2748B8u;
}
