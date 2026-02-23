#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlArcSin
// Address: 0x1a77e0 - 0x1a7880
void nlArcSin_0x1a77e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlArcSin");


    ctx->pc = 0x1a77e0u;

    // 0x1a77e0: 0x27bdffe0
    ctx->pc = 0x1a77e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a77e4: 0x7fbf0010
    ctx->pc = 0x1a77e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1a77e8: 0xe7b40000
    ctx->pc = 0x1a77e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a77ec: 0x3c023f80
    ctx->pc = 0x1a77ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x1a77f0: 0x46006506
    ctx->pc = 0x1a77f0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1a77f4: 0x44820800
    ctx->pc = 0x1a77f4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x1a77f8: 0x4600a005
    ctx->pc = 0x1a77f8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[20]);
    // 0x1a77fc: 0x46010036
    ctx->pc = 0x1a77fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7800: 0x0
    ctx->pc = 0x1a7800u;
    // NOP
    // 0x1a7804: 0x45010003
    ctx->pc = 0x1A7804u;
    {
        const bool branch_taken_0x1a7804 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7808u;
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
        if (branch_taken_0x1a7804) {
            ctx->pc = 0x1A7814u;
            goto label_1a7814;
        }
    }
    ctx->pc = 0x1A780Cu;
    // 0x1a780c: 0x10000018
    ctx->pc = 0x1A780Cu;
    {
        const bool branch_taken_0x1a780c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7810u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1a780c) {
            ctx->pc = 0x1A7870u;
            goto label_1a7870;
        }
    }
    ctx->pc = 0x1A7814u;
label_1a7814:
    // 0x1a7814: 0xc06c2a8
    ctx->pc = 0x1A7814u;
    SET_GPR_U32(ctx, 31, 0x1A781Cu);
    ctx->pc = 0x1A7818u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->pc = 0x1B0AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0AA0_0x1b0aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A781Cu; }
        else if (ctx->pc != 0x1A781Cu) { ctx->pc = 0x1A781Cu; }
    }
    if (ctx->pc != 0x1A781Cu) { return; }
    ctx->pc = 0x1A781Cu;
    // 0x1a781c: 0x44800800
    ctx->pc = 0x1a781cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x1a7820: 0x0
    ctx->pc = 0x1a7820u;
    // NOP
    // 0x1a7824: 0x46000832
    ctx->pc = 0x1a7824u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7828: 0x0
    ctx->pc = 0x1a7828u;
    // NOP
    // 0x1a782c: 0x4501000a
    ctx->pc = 0x1A782Cu;
    {
        const bool branch_taken_0x1a782c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a782c) {
            ctx->pc = 0x1A7858u;
            goto label_1a7858;
        }
    }
    ctx->pc = 0x1A7834u;
    // 0x1a7834: 0x0
    ctx->pc = 0x1a7834u;
    // NOP
    // 0x1a7838: 0x0
    ctx->pc = 0x1a7838u;
    // NOP
    // 0x1a783c: 0x4600a303
    ctx->pc = 0x1a783cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[0];
    // 0x1a7840: 0x0
    ctx->pc = 0x1a7840u;
    // NOP
    // 0x1a7844: 0x0
    ctx->pc = 0x1a7844u;
    // NOP
    // 0x1a7848: 0xc069e20
    ctx->pc = 0x1A7848u;
    SET_GPR_U32(ctx, 31, 0x1A7850u);
    ctx->pc = 0x1A7880u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlArcTan_0x1a7880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7850u; }
        else if (ctx->pc != 0x1A7850u) { ctx->pc = 0x1A7850u; }
    }
    if (ctx->pc != 0x1A7850u) { return; }
    ctx->pc = 0x1A7850u;
    // 0x1a7850: 0x10000008
    ctx->pc = 0x1A7850u;
    {
        const bool branch_taken_0x1a7850 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7854u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1a7850) {
            ctx->pc = 0x1A7874u;
            goto label_1a7874;
        }
    }
    ctx->pc = 0x1A7858u;
label_1a7858:
    // 0x1a7858: 0x4601a036
    ctx->pc = 0x1a7858u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a785c: 0x0
    ctx->pc = 0x1a785cu;
    // NOP
    // 0x1a7860: 0x45010003
    ctx->pc = 0x1A7860u;
    {
        const bool branch_taken_0x1a7860 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7864u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 49152));
        if (branch_taken_0x1a7860) {
            ctx->pc = 0x1A7870u;
            goto label_1a7870;
        }
    }
    ctx->pc = 0x1A7868u;
    // 0x1a7868: 0x10000001
    ctx->pc = 0x1A7868u;
    {
        const bool branch_taken_0x1a7868 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A786Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16384));
        if (branch_taken_0x1a7868) {
            ctx->pc = 0x1A7870u;
            goto label_1a7870;
        }
    }
    ctx->pc = 0x1A7870u;
label_1a7870:
    // 0x1a7870: 0x7bbf0010
    ctx->pc = 0x1a7870u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a7874:
    // 0x1a7874: 0xc7b40000
    ctx->pc = 0x1a7874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a7878: 0x3e00008
    ctx->pc = 0x1A7878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A787Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7814u: goto label_1a7814;
            case 0x1A7858u: goto label_1a7858;
            case 0x1A7870u: goto label_1a7870;
            case 0x1A7874u: goto label_1a7874;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A7880u;
}
