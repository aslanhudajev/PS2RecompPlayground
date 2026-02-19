#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: exprOpEq
// Address: 0x2b5510 - 0x2b5574
void exprOpEq_0x2b5510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b5510u;

    // 0x2b5510: 0x8c830000
    ctx->pc = 0x2b5510u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b5514: 0x24020001
    ctx->pc = 0x2b5514u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b5518: 0x1062000b
    ctx->pc = 0x2B5518u;
    {
        const bool branch_taken_0x2b5518 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B551Cu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x2b5518) {
            ctx->pc = 0x2B5548u;
            goto label_2b5548;
        }
    }
    ctx->pc = 0x2B5520u;
    // 0x2b5520: 0x1040000f
    ctx->pc = 0x2B5520u;
    {
        const bool branch_taken_0x2b5520 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5524u;
        SET_GPR_U32(ctx, 7, ((uint32_t)59 << 16));
        if (branch_taken_0x2b5520) {
            ctx->pc = 0x2B5560u;
            goto label_2b5560;
        }
    }
    ctx->pc = 0x2B5528u;
    // 0x2b5528: 0xc4a10010
    ctx->pc = 0x2b5528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b552c: 0xc4c00010
    ctx->pc = 0x2b552cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5530: 0x46000832
    ctx->pc = 0x2b5530u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b5534: 0x0
    ctx->pc = 0x2b5534u;
    // NOP
    // 0x2b5538: 0x45010007
    ctx->pc = 0x2B5538u;
    {
        const bool branch_taken_0x2b5538 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B553Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2b5538) {
            ctx->pc = 0x2B5558u;
            goto label_2b5558;
        }
    }
    ctx->pc = 0x2B5540u;
    // 0x2b5540: 0x10000005
    ctx->pc = 0x2B5540u;
    {
        const bool branch_taken_0x2b5540 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5544u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b5540) {
            ctx->pc = 0x2B5558u;
            goto label_2b5558;
        }
    }
    ctx->pc = 0x2B5548u;
label_2b5548:
    // 0x2b5548: 0x8ca20010
    ctx->pc = 0x2b5548u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2b554c: 0x8cc30010
    ctx->pc = 0x2b554cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2b5550: 0x431026
    ctx->pc = 0x2b5550u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b5554: 0x2c420001
    ctx->pc = 0x2b5554u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
label_2b5558:
    // 0x2b5558: 0x10000003
    ctx->pc = 0x2B5558u;
    {
        const bool branch_taken_0x2b5558 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B555Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x2b5558) {
            ctx->pc = 0x2B5568u;
            goto label_2b5568;
        }
    }
    ctx->pc = 0x2B5560u;
label_2b5560:
    // 0x2b5560: 0x80ad496
    ctx->pc = 0x2B5560u;
    ctx->pc = 0x2B5564u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 18888));
    ctx->pc = 0x2B5258u;
    typeError_0x2b5258(rdram, ctx, runtime); return;
    ctx->pc = 0x2B5568u;
label_2b5568:
    // 0x2b5568: 0x24020001
    ctx->pc = 0x2b5568u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b556c: 0x3e00008
    ctx->pc = 0x2B556Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5570u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B5548u: goto label_2b5548;
            case 0x2B5558u: goto label_2b5558;
            case 0x2B5560u: goto label_2b5560;
            case 0x2B5568u: goto label_2b5568;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B5574u;
}
