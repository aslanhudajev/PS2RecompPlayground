#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlDmaBeginMFifo
// Address: 0x1a52f0 - 0x1a539c
void nlDmaBeginMFifo_0x1a52f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlDmaBeginMFifo");


    ctx->pc = 0x1a52f0u;

    // 0x1a52f0: 0x8f8389b4
    ctx->pc = 0x1a52f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937012)));
    // 0x1a52f4: 0x24020001
    ctx->pc = 0x1a52f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a52f8: 0x14620003
    ctx->pc = 0x1A52F8u;
    {
        const bool branch_taken_0x1a52f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1a52f8) {
            ctx->pc = 0x1A5308u;
            goto label_1a5308;
        }
    }
    ctx->pc = 0x1A5300u;
label_1a5300:
    // 0x1a5300: 0x1000ffff
    ctx->pc = 0x1A5300u;
    {
        const bool branch_taken_0x1a5300 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a5300) {
            ctx->pc = 0x1A5300u;
            goto label_1a5300;
        }
    }
    ctx->pc = 0x1A5308u;
label_1a5308:
    // 0x1a5308: 0x8f8389b0
    ctx->pc = 0x1a5308u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937008)));
    // 0x1a530c: 0x24020001
    ctx->pc = 0x1a530cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5310: 0x14620004
    ctx->pc = 0x1A5310u;
    {
        const bool branch_taken_0x1a5310 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1A5314u;
        SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
        if (branch_taken_0x1a5310) {
            ctx->pc = 0x1A5324u;
            goto label_1a5324;
        }
    }
    ctx->pc = 0x1A5318u;
label_1a5318:
    // 0x1a5318: 0x1000ffff
    ctx->pc = 0x1A5318u;
    {
        const bool branch_taken_0x1a5318 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a5318) {
            ctx->pc = 0x1A5318u;
            goto label_1a5318;
        }
    }
    ctx->pc = 0x1A5320u;
label_1a5320:
    // 0x1a5320: 0x3c021000
    ctx->pc = 0x1a5320u;
    SET_GPR_U32(ctx, 2, ((uint32_t)4096 << 16));
label_1a5324:
    // 0x1a5324: 0x34429000
    ctx->pc = 0x1a5324u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 36864));
    // 0x1a5328: 0x8c420000
    ctx->pc = 0x1a5328u;
    SET_GPR_U32(ctx, 2, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x1a532c: 0x30420100
    ctx->pc = 0x1a532cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 256));
    // 0x1a5330: 0x0
    ctx->pc = 0x1a5330u;
    // NOP
    // 0x1a5334: 0x1440fffa
    ctx->pc = 0x1A5334u;
    {
        const bool branch_taken_0x1a5334 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a5334) {
            ctx->pc = 0x1A5320u;
            goto label_1a5320;
        }
    }
    ctx->pc = 0x1A533Cu;
    // 0x1a533c: 0x3c011001
    ctx->pc = 0x1a533cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a5340: 0x8c26e000
    ctx->pc = 0x1a5340u;
    SET_GPR_U32(ctx, 6, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294959104))); // MMIO: 0x1000e000
    // 0x1a5344: 0x2405fff3
    ctx->pc = 0x1a5344u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1a5348: 0x2404fff2
    ctx->pc = 0x1a5348u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967282));
    // 0x1a534c: 0x24030001
    ctx->pc = 0x1a534cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5350: 0x70001628
    ctx->pc = 0x1a5350u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a5354: 0xc52824
    ctx->pc = 0x1a5354u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1a5358: 0x34a50008
    ctx->pc = 0x1a5358u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 8));
    // 0x1a535c: 0x3c011001
    ctx->pc = 0x1a535cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a5360: 0xac25e000
    ctx->pc = 0x1a5360u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294959104), GPR_U32(ctx, 5)); // MMIO: 0x1000e000
    // 0x1a5364: 0x8f8589c4
    ctx->pc = 0x1a5364u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937028)));
    // 0x1a5368: 0x3c011001
    ctx->pc = 0x1a5368u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a536c: 0xac25d010
    ctx->pc = 0x1a536cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294955024), GPR_U32(ctx, 5)); // MMIO: 0x1000d010
    // 0x1a5370: 0x8f8589c4
    ctx->pc = 0x1a5370u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937028)));
    // 0x1a5374: 0x3c011001
    ctx->pc = 0x1a5374u;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a5378: 0xac259030
    ctx->pc = 0x1a5378u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294938672), GPR_U32(ctx, 5)); // MMIO: 0x10009030
    // 0x1a537c: 0x3c011001
    ctx->pc = 0x1a537cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a5380: 0x8c259000
    ctx->pc = 0x1a5380u;
    SET_GPR_U32(ctx, 5, runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294938624))); // MMIO: 0x10009000
    // 0x1a5384: 0xa42024
    ctx->pc = 0x1a5384u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1a5388: 0x34840105
    ctx->pc = 0x1a5388u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 261));
    // 0x1a538c: 0x3c011001
    ctx->pc = 0x1a538cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)4097 << 16));
    // 0x1a5390: 0xac249000
    ctx->pc = 0x1a5390u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294938624), GPR_U32(ctx, 4)); // MMIO: 0x10009000
    // 0x1a5394: 0x3e00008
    ctx->pc = 0x1A5394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5398u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937012), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5300u: goto label_1a5300;
            case 0x1A5308u: goto label_1a5308;
            case 0x1A5318u: goto label_1a5318;
            case 0x1A5320u: goto label_1a5320;
            case 0x1A5324u: goto label_1a5324;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A539Cu;
}
