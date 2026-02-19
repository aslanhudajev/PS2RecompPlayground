#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: exprOpLe
// Address: 0x2b5648 - 0x2b56b0
void exprOpLe_0x2b5648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b5648u;

    // 0x2b5648: 0x8c830000
    ctx->pc = 0x2b5648u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b564c: 0x10600005
    ctx->pc = 0x2B564Cu;
    {
        const bool branch_taken_0x2b564c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5650u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2b564c) {
            ctx->pc = 0x2B5664u;
            goto label_2b5664;
        }
    }
    ctx->pc = 0x2B5654u;
    // 0x2b5654: 0x1062000b
    ctx->pc = 0x2B5654u;
    {
        const bool branch_taken_0x2b5654 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B5658u;
        SET_GPR_U32(ctx, 7, ((uint32_t)59 << 16));
        if (branch_taken_0x2b5654) {
            ctx->pc = 0x2B5684u;
            goto label_2b5684;
        }
    }
    ctx->pc = 0x2B565Cu;
    // 0x2b565c: 0x1000000f
    ctx->pc = 0x2B565Cu;
    {
        const bool branch_taken_0x2b565c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b565c) {
            ctx->pc = 0x2B569Cu;
            goto label_2b569c;
        }
    }
    ctx->pc = 0x2B5664u;
label_2b5664:
    // 0x2b5664: 0xc4a10010
    ctx->pc = 0x2b5664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5668: 0xc4c00010
    ctx->pc = 0x2b5668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b566c: 0x46000836
    ctx->pc = 0x2b566cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b5670: 0x0
    ctx->pc = 0x2b5670u;
    // NOP
    // 0x2b5674: 0x4503000b
    ctx->pc = 0x2B5674u;
    {
        const bool branch_taken_0x2b5674 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b5674) {
            ctx->pc = 0x2B5678u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
            ctx->pc = 0x2B56A4u;
            goto label_2b56a4;
        }
    }
    ctx->pc = 0x2B567Cu;
    // 0x2b567c: 0x10000005
    ctx->pc = 0x2B567Cu;
    {
        const bool branch_taken_0x2b567c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5680u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b567c) {
            ctx->pc = 0x2B5694u;
            goto label_2b5694;
        }
    }
    ctx->pc = 0x2B5684u;
label_2b5684:
    // 0x2b5684: 0x8ca30010
    ctx->pc = 0x2b5684u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2b5688: 0x8cc20010
    ctx->pc = 0x2b5688u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2b568c: 0x43102a
    ctx->pc = 0x2b568cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x2b5690: 0x38420001
    ctx->pc = 0x2b5690u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
label_2b5694:
    // 0x2b5694: 0x10000003
    ctx->pc = 0x2B5694u;
    {
        const bool branch_taken_0x2b5694 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5698u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x2b5694) {
            ctx->pc = 0x2B56A4u;
            goto label_2b56a4;
        }
    }
    ctx->pc = 0x2B569Cu;
label_2b569c:
    // 0x2b569c: 0x80ad496
    ctx->pc = 0x2B569Cu;
    ctx->pc = 0x2B56A0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 18912));
    ctx->pc = 0x2B5258u;
    typeError_0x2b5258(rdram, ctx, runtime); return;
    ctx->pc = 0x2B56A4u;
label_2b56a4:
    // 0x2b56a4: 0x24020001
    ctx->pc = 0x2b56a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b56a8: 0x3e00008
    ctx->pc = 0x2B56A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B56ACu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B5664u: goto label_2b5664;
            case 0x2B5684u: goto label_2b5684;
            case 0x2B5694u: goto label_2b5694;
            case 0x2B569Cu: goto label_2b569c;
            case 0x2B56A4u: goto label_2b56a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B56B0u;
}
