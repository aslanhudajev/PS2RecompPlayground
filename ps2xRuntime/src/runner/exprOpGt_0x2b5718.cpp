#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: exprOpGt
// Address: 0x2b5718 - 0x2b577c
void exprOpGt_0x2b5718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b5718u;

    // 0x2b5718: 0x8c830000
    ctx->pc = 0x2b5718u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b571c: 0x10600005
    ctx->pc = 0x2B571Cu;
    {
        const bool branch_taken_0x2b571c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5720u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2b571c) {
            ctx->pc = 0x2B5734u;
            goto label_2b5734;
        }
    }
    ctx->pc = 0x2B5724u;
    // 0x2b5724: 0x1062000b
    ctx->pc = 0x2B5724u;
    {
        const bool branch_taken_0x2b5724 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B5728u;
        SET_GPR_U32(ctx, 7, ((uint32_t)59 << 16));
        if (branch_taken_0x2b5724) {
            ctx->pc = 0x2B5754u;
            goto label_2b5754;
        }
    }
    ctx->pc = 0x2B572Cu;
    // 0x2b572c: 0x1000000e
    ctx->pc = 0x2B572Cu;
    {
        const bool branch_taken_0x2b572c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b572c) {
            ctx->pc = 0x2B5768u;
            goto label_2b5768;
        }
    }
    ctx->pc = 0x2B5734u;
label_2b5734:
    // 0x2b5734: 0xc4a10010
    ctx->pc = 0x2b5734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5738: 0xc4c00010
    ctx->pc = 0x2b5738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b573c: 0x46010034
    ctx->pc = 0x2b573cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b5740: 0x0
    ctx->pc = 0x2b5740u;
    // NOP
    // 0x2b5744: 0x4503000a
    ctx->pc = 0x2B5744u;
    {
        const bool branch_taken_0x2b5744 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b5744) {
            ctx->pc = 0x2B5748u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
            ctx->pc = 0x2B5770u;
            goto label_2b5770;
        }
    }
    ctx->pc = 0x2B574Cu;
    // 0x2b574c: 0x10000004
    ctx->pc = 0x2B574Cu;
    {
        const bool branch_taken_0x2b574c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5750u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b574c) {
            ctx->pc = 0x2B5760u;
            goto label_2b5760;
        }
    }
    ctx->pc = 0x2B5754u;
label_2b5754:
    // 0x2b5754: 0x8ca30010
    ctx->pc = 0x2b5754u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2b5758: 0x8cc20010
    ctx->pc = 0x2b5758u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2b575c: 0x43102a
    ctx->pc = 0x2b575cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_2b5760:
    // 0x2b5760: 0x10000003
    ctx->pc = 0x2B5760u;
    {
        const bool branch_taken_0x2b5760 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5764u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x2b5760) {
            ctx->pc = 0x2B5770u;
            goto label_2b5770;
        }
    }
    ctx->pc = 0x2B5768u;
label_2b5768:
    // 0x2b5768: 0x80ad496
    ctx->pc = 0x2B5768u;
    ctx->pc = 0x2B576Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 18928));
    ctx->pc = 0x2B5258u;
    typeError_0x2b5258(rdram, ctx, runtime); return;
    ctx->pc = 0x2B5770u;
label_2b5770:
    // 0x2b5770: 0x24020001
    ctx->pc = 0x2b5770u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5774: 0x3e00008
    ctx->pc = 0x2B5774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5778u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B5734u: goto label_2b5734;
            case 0x2B5754u: goto label_2b5754;
            case 0x2B5760u: goto label_2b5760;
            case 0x2B5768u: goto label_2b5768;
            case 0x2B5770u: goto label_2b5770;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B577Cu;
}
