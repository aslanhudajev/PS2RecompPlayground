#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: exprOpNe
// Address: 0x2b5578 - 0x2b55dc
void exprOpNe_0x2b5578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b5578u;

    // 0x2b5578: 0x8c830000
    ctx->pc = 0x2b5578u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b557c: 0x24020001
    ctx->pc = 0x2b557cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5580: 0x1062000b
    ctx->pc = 0x2B5580u;
    {
        const bool branch_taken_0x2b5580 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B5584u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2b5580) {
            ctx->pc = 0x2B55B0u;
            goto label_2b55b0;
        }
    }
    ctx->pc = 0x2B5588u;
    // 0x2b5588: 0x1040000f
    ctx->pc = 0x2B5588u;
    {
        const bool branch_taken_0x2b5588 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B558Cu;
        SET_GPR_U32(ctx, 7, ((uint32_t)59 << 16));
        if (branch_taken_0x2b5588) {
            ctx->pc = 0x2B55C8u;
            goto label_2b55c8;
        }
    }
    ctx->pc = 0x2B5590u;
    // 0x2b5590: 0xc4a10010
    ctx->pc = 0x2b5590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5594: 0xc4c00010
    ctx->pc = 0x2b5594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5598: 0x46000832
    ctx->pc = 0x2b5598u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b559c: 0x0
    ctx->pc = 0x2b559cu;
    // NOP
    // 0x2b55a0: 0x45000007
    ctx->pc = 0x2B55A0u;
    {
        const bool branch_taken_0x2b55a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B55A4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2b55a0) {
            ctx->pc = 0x2B55C0u;
            goto label_2b55c0;
        }
    }
    ctx->pc = 0x2B55A8u;
    // 0x2b55a8: 0x10000005
    ctx->pc = 0x2B55A8u;
    {
        const bool branch_taken_0x2b55a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B55ACu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b55a8) {
            ctx->pc = 0x2B55C0u;
            goto label_2b55c0;
        }
    }
    ctx->pc = 0x2B55B0u;
label_2b55b0:
    // 0x2b55b0: 0x8ca20010
    ctx->pc = 0x2b55b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2b55b4: 0x8cc30010
    ctx->pc = 0x2b55b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2b55b8: 0x431026
    ctx->pc = 0x2b55b8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b55bc: 0x2102b
    ctx->pc = 0x2b55bcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2b55c0:
    // 0x2b55c0: 0x10000003
    ctx->pc = 0x2B55C0u;
    {
        const bool branch_taken_0x2b55c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B55C4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x2b55c0) {
            ctx->pc = 0x2B55D0u;
            goto label_2b55d0;
        }
    }
    ctx->pc = 0x2B55C8u;
label_2b55c8:
    // 0x2b55c8: 0x80ad496
    ctx->pc = 0x2B55C8u;
    ctx->pc = 0x2B55CCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 18896));
    ctx->pc = 0x2B5258u;
    typeError_0x2b5258(rdram, ctx, runtime); return;
    ctx->pc = 0x2B55D0u;
label_2b55d0:
    // 0x2b55d0: 0x24020001
    ctx->pc = 0x2b55d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b55d4: 0x3e00008
    ctx->pc = 0x2B55D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B55D8u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B55B0u: goto label_2b55b0;
            case 0x2B55C0u: goto label_2b55c0;
            case 0x2B55C8u: goto label_2b55c8;
            case 0x2B55D0u: goto label_2b55d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B55DCu;
}
