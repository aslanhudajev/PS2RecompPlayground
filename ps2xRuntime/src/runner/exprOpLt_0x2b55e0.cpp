#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: exprOpLt
// Address: 0x2b55e0 - 0x2b5644
void exprOpLt_0x2b55e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2b55e0u;

    // 0x2b55e0: 0x8c830000
    ctx->pc = 0x2b55e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b55e4: 0x10600005
    ctx->pc = 0x2B55E4u;
    {
        const bool branch_taken_0x2b55e4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B55E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2b55e4) {
            ctx->pc = 0x2B55FCu;
            goto label_2b55fc;
        }
    }
    ctx->pc = 0x2B55ECu;
    // 0x2b55ec: 0x1062000b
    ctx->pc = 0x2B55ECu;
    {
        const bool branch_taken_0x2b55ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2B55F0u;
        SET_GPR_U32(ctx, 7, ((uint32_t)59 << 16));
        if (branch_taken_0x2b55ec) {
            ctx->pc = 0x2B561Cu;
            goto label_2b561c;
        }
    }
    ctx->pc = 0x2B55F4u;
    // 0x2b55f4: 0x1000000e
    ctx->pc = 0x2B55F4u;
    {
        const bool branch_taken_0x2b55f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2b55f4) {
            ctx->pc = 0x2B5630u;
            goto label_2b5630;
        }
    }
    ctx->pc = 0x2B55FCu;
label_2b55fc:
    // 0x2b55fc: 0xc4a10010
    ctx->pc = 0x2b55fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b5600: 0xc4c00010
    ctx->pc = 0x2b5600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b5604: 0x46000834
    ctx->pc = 0x2b5604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b5608: 0x0
    ctx->pc = 0x2b5608u;
    // NOP
    // 0x2b560c: 0x4503000a
    ctx->pc = 0x2B560Cu;
    {
        const bool branch_taken_0x2b560c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b560c) {
            ctx->pc = 0x2B5610u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
            ctx->pc = 0x2B5638u;
            goto label_2b5638;
        }
    }
    ctx->pc = 0x2B5614u;
    // 0x2b5614: 0x10000004
    ctx->pc = 0x2B5614u;
    {
        const bool branch_taken_0x2b5614 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B5618u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2b5614) {
            ctx->pc = 0x2B5628u;
            goto label_2b5628;
        }
    }
    ctx->pc = 0x2B561Cu;
label_2b561c:
    // 0x2b561c: 0x8ca20010
    ctx->pc = 0x2b561cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2b5620: 0x8cc30010
    ctx->pc = 0x2b5620u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2b5624: 0x43102a
    ctx->pc = 0x2b5624u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_2b5628:
    // 0x2b5628: 0x10000003
    ctx->pc = 0x2B5628u;
    {
        const bool branch_taken_0x2b5628 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2B562Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x2b5628) {
            ctx->pc = 0x2B5638u;
            goto label_2b5638;
        }
    }
    ctx->pc = 0x2B5630u;
label_2b5630:
    // 0x2b5630: 0x80ad496
    ctx->pc = 0x2B5630u;
    ctx->pc = 0x2B5634u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 18904));
    ctx->pc = 0x2B5258u;
    typeError_0x2b5258(rdram, ctx, runtime); return;
    ctx->pc = 0x2B5638u;
label_2b5638:
    // 0x2b5638: 0x24020001
    ctx->pc = 0x2b5638u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b563c: 0x3e00008
    ctx->pc = 0x2B563Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5640u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B55FCu: goto label_2b55fc;
            case 0x2B561Cu: goto label_2b561c;
            case 0x2B5628u: goto label_2b5628;
            case 0x2B5630u: goto label_2b5630;
            case 0x2B5638u: goto label_2b5638;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2B5644u;
}
