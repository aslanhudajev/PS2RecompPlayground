#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: iRotateThreadReadyQueue
// Address: 0x1152d8 - 0x115354
void iRotateThreadReadyQueue_0x1152d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1152d8u;

    // 0x1152d8: 0x27bdffe0
    ctx->pc = 0x1152d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1152dc: 0xffb00000
    ctx->pc = 0x1152dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1152e0: 0x80802d
    ctx->pc = 0x1152e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1152e4: 0x2e020080
    ctx->pc = 0x1152e4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 128));
    // 0x1152e8: 0x10400005
    ctx->pc = 0x1152E8u;
    {
        const bool branch_taken_0x1152e8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1152ECu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x1152e8) {
            ctx->pc = 0x115300u;
            goto label_115300;
        }
    }
    ctx->pc = 0x1152F0u;
    // 0x1152f0: 0x3c020017
    ctx->pc = 0x1152f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
    // 0x1152f4: 0x8c43fbd8
    ctx->pc = 0x1152f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294966232)));
    // 0x1152f8: 0x14600003
    ctx->pc = 0x1152F8u;
    {
        const bool branch_taken_0x1152f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1152FCu;
        SET_GPR_U32(ctx, 3, ((uint32_t)24 << 16));
        if (branch_taken_0x1152f8) {
            ctx->pc = 0x115308u;
            goto label_115308;
        }
    }
    ctx->pc = 0x115300u;
label_115300:
    // 0x115300: 0x10000010
    ctx->pc = 0x115300u;
    {
        const bool branch_taken_0x115300 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x115304u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x115300) {
            ctx->pc = 0x115344u;
            goto label_115344;
        }
    }
    ctx->pc = 0x115308u;
label_115308:
    // 0x115308: 0x3c050018
    ctx->pc = 0x115308u;
    SET_GPR_U32(ctx, 5, ((uint32_t)24 << 16));
    // 0x11530c: 0x2463a2f8
    ctx->pc = 0x11530cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294943480));
    // 0x115310: 0x8ca4a2f0
    ctx->pc = 0x115310u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 4294943472)));
    // 0x115314: 0x8c620004
    ctx->pc = 0x115314u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x115318: 0x24070001
    ctx->pc = 0x115318u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11531c: 0x304201ff
    ctx->pc = 0x11531cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 511));
    // 0x115320: 0x23040
    ctx->pc = 0x115320u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 2), 1));
    // 0x115324: 0x24420001
    ctx->pc = 0x115324u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x115328: 0x662821
    ctx->pc = 0x115328u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x11532c: 0xac620004
    ctx->pc = 0x11532cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x115330: 0xa0a70008
    ctx->pc = 0x115330u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 7));
    // 0x115334: 0xa0182d
    ctx->pc = 0x115334u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115338: 0xc0438b4
    ctx->pc = 0x115338u;
    SET_GPR_U32(ctx, 31, 0x115340u);
    ctx->pc = 0x11533Cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
    ctx->pc = 0x10E2D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        iSignalSema_0x10e2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115340u; }
    }
    if (ctx->pc != 0x115340u) { return; }
    ctx->pc = 0x115340u;
    // 0x115340: 0x200102d
    ctx->pc = 0x115340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_115344:
    // 0x115344: 0xdfbf0010
    ctx->pc = 0x115344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115348: 0xdfb00000
    ctx->pc = 0x115348u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11534c: 0x3e00008
    ctx->pc = 0x11534Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115350u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x115300u: goto label_115300;
            case 0x115308u: goto label_115308;
            case 0x115344u: goto label_115344;
            default: break;
        }
        return;
    }
    ctx->pc = 0x115354u;
}
