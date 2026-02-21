#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoTexScroll2Sub
// Address: 0x210c90 - 0x210d48
void DoTexScroll2Sub_0x210c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x210c90u;

    // 0x210c90: 0x27bdffc0
    ctx->pc = 0x210c90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x210c94: 0xffbf0020
    ctx->pc = 0x210c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x210c98: 0xffb10010
    ctx->pc = 0x210c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x210c9c: 0xffb00000
    ctx->pc = 0x210c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x210ca0: 0xe7b40030
    ctx->pc = 0x210ca0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x210ca4: 0xc0802d
    ctx->pc = 0x210ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210ca8: 0x8482004e
    ctx->pc = 0x210ca8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 78)));
    // 0x210cac: 0xa21023
    ctx->pc = 0x210cacu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x210cb0: 0x44826000
    ctx->pc = 0x210cb0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x210cb4: 0x46806320
    ctx->pc = 0x210cb4u;
    ctx->f[12] = FPU_CVT_S_W(*(int32_t*)&ctx->f[12]);
    // 0x210cb8: 0x8482004c
    ctx->pc = 0x210cb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x210cbc: 0x44827000
    ctx->pc = 0x210cbcu;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 2);
    // 0x210cc0: 0x468073a0
    ctx->pc = 0x210cc0u;
    ctx->f[14] = FPU_CVT_S_W(*(int32_t*)&ctx->f[14]);
    // 0x210cc4: 0x3c013f80
    ctx->pc = 0x210cc4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x210cc8: 0x4481a000
    ctx->pc = 0x210cc8u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x210ccc: 0x44800000
    ctx->pc = 0x210cccu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x210cd0: 0x46007034
    ctx->pc = 0x210cd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x210cd4: 0x0
    ctx->pc = 0x210cd4u;
    // NOP
    // 0x210cd8: 0x45000004
    ctx->pc = 0x210CD8u;
    {
        const bool branch_taken_0x210cd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x210CDCu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x210cd8) {
            ctx->pc = 0x210CECu;
            goto label_210cec;
        }
    }
    ctx->pc = 0x210CE0u;
    // 0x210ce0: 0x46007387
    ctx->pc = 0x210ce0u;
    ctx->f[14] = FPU_NEG_S(ctx->f[14]);
    // 0x210ce4: 0x3c01bf80
    ctx->pc = 0x210ce4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x210ce8: 0x4481a000
    ctx->pc = 0x210ce8u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_210cec:
    // 0x210cec: 0xa0202d
    ctx->pc = 0x210cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210cf0: 0x44806800
    ctx->pc = 0x210cf0u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x210cf4: 0xc084270
    ctx->pc = 0x210CF4u;
    SET_GPR_U32(ctx, 31, 0x210CFCu);
    ctx->pc = 0x210CF8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2109C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcTexScroll_0x2109c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210CFCu; }
    }
    if (ctx->pc != 0x210CFCu) { return; }
    ctx->pc = 0x210CFCu;
    // 0x210cfc: 0x12200007
    ctx->pc = 0x210CFCu;
    {
        const bool branch_taken_0x210cfc = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x210D00u;
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        if (branch_taken_0x210cfc) {
            ctx->pc = 0x210D1Cu;
            goto label_210d1c;
        }
    }
    ctx->pc = 0x210D04u;
    // 0x210d04: 0x3c02003a
    ctx->pc = 0x210d04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x210d08: 0x24420cb0
    ctx->pc = 0x210d08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3248));
    // 0x210d0c: 0x101900
    ctx->pc = 0x210d0cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 4));
    // 0x210d10: 0x431021
    ctx->pc = 0x210d10u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x210d14: 0x10000006
    ctx->pc = 0x210D14u;
    {
        const bool branch_taken_0x210d14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x210D18u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        if (branch_taken_0x210d14) {
            ctx->pc = 0x210D30u;
            goto label_210d30;
        }
    }
    ctx->pc = 0x210D1Cu;
label_210d1c:
    // 0x210d1c: 0x3c02003a
    ctx->pc = 0x210d1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x210d20: 0x24420cb0
    ctx->pc = 0x210d20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3248));
    // 0x210d24: 0x101900
    ctx->pc = 0x210d24u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 4));
    // 0x210d28: 0x431021
    ctx->pc = 0x210d28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x210d2c: 0xe4400004
    ctx->pc = 0x210d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_210d30:
    // 0x210d30: 0xdfbf0020
    ctx->pc = 0x210d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210d34: 0xdfb10010
    ctx->pc = 0x210d34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210d38: 0xdfb00000
    ctx->pc = 0x210d38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210d3c: 0xc7b40030
    ctx->pc = 0x210d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x210d40: 0x3e00008
    ctx->pc = 0x210D40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210D44u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x210CECu: goto label_210cec;
            case 0x210D1Cu: goto label_210d1c;
            case 0x210D30u: goto label_210d30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x210D48u;
}
