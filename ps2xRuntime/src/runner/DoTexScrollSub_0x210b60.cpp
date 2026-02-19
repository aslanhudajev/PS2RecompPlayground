#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoTexScrollSub
// Address: 0x210b60 - 0x210c04
void DoTexScrollSub_0x210b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x210b60u;

    // 0x210b60: 0x27bdffc0
    ctx->pc = 0x210b60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x210b64: 0xffbf0030
    ctx->pc = 0x210b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x210b68: 0xffb10020
    ctx->pc = 0x210b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x210b6c: 0xffb00010
    ctx->pc = 0x210b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x210b70: 0x80882d
    ctx->pc = 0x210b70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210b74: 0xc0202d
    ctx->pc = 0x210b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210b78: 0x100802d
    ctx->pc = 0x210b78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210b7c: 0x84a2004e
    ctx->pc = 0x210b7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 78)));
    // 0x210b80: 0x821023
    ctx->pc = 0x210b80u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x210b84: 0x84a3004c
    ctx->pc = 0x210b84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x210b88: 0x44826000
    ctx->pc = 0x210b88u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x210b8c: 0x46806320
    ctx->pc = 0x210b8cu;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x210b90: 0xc4ad0050
    ctx->pc = 0x210b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x210b94: 0x46806b60
    ctx->pc = 0x210b94u;
    ctx->f[13] = FPU_CVT_S_W(*(int32_t*)&ctx->f[13]);
    // 0x210b98: 0x44837000
    ctx->pc = 0x210b98u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 3);
    // 0x210b9c: 0x468073a0
    ctx->pc = 0x210b9cu;
    ctx->f[14] = FPU_CVT_S_W(*(int32_t*)&ctx->f[14]);
    // 0x210ba0: 0xc084270
    ctx->pc = 0x210BA0u;
    SET_GPR_U32(ctx, 31, 0x210BA8u);
    ctx->pc = 0x210BA4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2109C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcTexScroll_0x2109c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210BA8u; }
    }
    if (ctx->pc != 0x210BA8u) { return; }
    ctx->pc = 0x210BA8u;
    // 0x210ba8: 0x1200000a
    ctx->pc = 0x210BA8u;
    {
        const bool branch_taken_0x210ba8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x210BACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x210ba8) {
            ctx->pc = 0x210BD4u;
            goto label_210bd4;
        }
    }
    ctx->pc = 0x210BB0u;
    // 0x210bb0: 0x3c013f80
    ctx->pc = 0x210bb0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x210bb4: 0x44816000
    ctx->pc = 0x210bb4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x210bb8: 0x44806800
    ctx->pc = 0x210bb8u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x210bbc: 0xc7ae0000
    ctx->pc = 0x210bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x210bc0: 0x460003c6
    ctx->pc = 0x210bc0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[0]);
    // 0x210bc4: 0xc0b4214
    ctx->pc = 0x210BC4u;
    SET_GPR_U32(ctx, 31, 0x210BCCu);
    ctx->pc = 0x210BC8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0850u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetUVScaleAdd_0x2d0850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210BCCu; }
    }
    if (ctx->pc != 0x210BCCu) { return; }
    ctx->pc = 0x210BCCu;
    // 0x210bcc: 0x10000009
    ctx->pc = 0x210BCCu;
    {
        const bool branch_taken_0x210bcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x210BD0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x210bcc) {
            ctx->pc = 0x210BF4u;
            goto label_210bf4;
        }
    }
    ctx->pc = 0x210BD4u;
label_210bd4:
    // 0x210bd4: 0xc7ac0000
    ctx->pc = 0x210bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x210bd8: 0x46000346
    ctx->pc = 0x210bd8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x210bdc: 0x3c013f80
    ctx->pc = 0x210bdcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x210be0: 0x44817000
    ctx->pc = 0x210be0u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
    // 0x210be4: 0x44807800
    ctx->pc = 0x210be4u;
    *(uint32_t*)&ctx->f[15] = GPR_U32(ctx, 0);
    // 0x210be8: 0xc0b4214
    ctx->pc = 0x210BE8u;
    SET_GPR_U32(ctx, 31, 0x210BF0u);
    ctx->pc = 0x210BECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D0850u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetUVScaleAdd_0x2d0850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210BF0u; }
    }
    if (ctx->pc != 0x210BF0u) { return; }
    ctx->pc = 0x210BF0u;
    // 0x210bf0: 0xdfbf0030
    ctx->pc = 0x210bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_210bf4:
    // 0x210bf4: 0xdfb10020
    ctx->pc = 0x210bf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210bf8: 0xdfb00010
    ctx->pc = 0x210bf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210bfc: 0x3e00008
    ctx->pc = 0x210BFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210C00u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x210BD4u: goto label_210bd4;
            case 0x210BF4u: goto label_210bf4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x210C04u;
}
