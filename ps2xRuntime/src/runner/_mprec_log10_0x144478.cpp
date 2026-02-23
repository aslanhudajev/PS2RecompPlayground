#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _mprec_log10
// Address: 0x144478 - 0x1444e4
void _mprec_log10_0x144478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_mprec_log10");


    ctx->pc = 0x144478u;

    // 0x144478: 0x27bdffe0
    ctx->pc = 0x144478u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14447c: 0xffb00000
    ctx->pc = 0x14447cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x144480: 0x80802d
    ctx->pc = 0x144480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144484: 0x3404ffc0
    ctx->pc = 0x144484u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65472));
    // 0x144488: 0x423bc
    ctx->pc = 0x144488u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x14448c: 0x2a020018
    ctx->pc = 0x14448cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 24));
    // 0x144490: 0x10400007
    ctx->pc = 0x144490u;
    {
        const bool branch_taken_0x144490 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x144494u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        if (branch_taken_0x144490) {
            ctx->pc = 0x1444B0u;
            goto label_1444b0;
        }
    }
    ctx->pc = 0x144498u;
    // 0x144498: 0x3c02002b
    ctx->pc = 0x144498u;
    SET_GPR_U32(ctx, 2, ((uint32_t)43 << 16));
    // 0x14449c: 0x1018c0
    ctx->pc = 0x14449cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 3));
    // 0x1444a0: 0x24426f78
    ctx->pc = 0x1444a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 28536));
    // 0x1444a4: 0x621821
    ctx->pc = 0x1444a4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1444a8: 0x1000000a
    ctx->pc = 0x1444A8u;
    {
        const bool branch_taken_0x1444a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1444ACu;
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x1444a8) {
            ctx->pc = 0x1444D4u;
            goto label_1444d4;
        }
    }
    ctx->pc = 0x1444B0u;
label_1444b0:
    // 0x1444b0: 0x1a000008
    ctx->pc = 0x1444B0u;
    {
        const bool branch_taken_0x1444b0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1444B4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1444b0) {
            ctx->pc = 0x1444D4u;
            goto label_1444d4;
        }
    }
    ctx->pc = 0x1444B8u;
label_1444b8:
    // 0x1444b8: 0x34058048
    ctx->pc = 0x1444b8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32840));
    // 0x1444bc: 0x52bfc
    ctx->pc = 0x1444bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x1444c0: 0xc052cb8
    ctx->pc = 0x1444C0u;
    SET_GPR_U32(ctx, 31, 0x1444C8u);
    ctx->pc = 0x1444C4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->pc = 0x14B2E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x14b2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1444C8u; }
        else if (ctx->pc != 0x1444C8u) { ctx->pc = 0x1444C8u; }
    }
    if (ctx->pc != 0x1444C8u) { return; }
    ctx->pc = 0x1444C8u;
    // 0x1444c8: 0x1e00fffb
    ctx->pc = 0x1444C8u;
    {
        const bool branch_taken_0x1444c8 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x1444CCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1444c8) {
            ctx->pc = 0x1444B8u;
            goto label_1444b8;
        }
    }
    ctx->pc = 0x1444D0u;
    // 0x1444d0: 0x80102d
    ctx->pc = 0x1444d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1444d4:
    // 0x1444d4: 0xdfbf0010
    ctx->pc = 0x1444d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1444d8: 0xdfb00000
    ctx->pc = 0x1444d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1444dc: 0x3e00008
    ctx->pc = 0x1444DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1444E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1444B0u: goto label_1444b0;
            case 0x1444B8u: goto label_1444b8;
            case 0x1444D4u: goto label_1444d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1444E4u;
}
