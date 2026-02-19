#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ipbKickTraversalDma
// Address: 0x2ab308 - 0x2ab358
void ipbKickTraversalDma_0x2ab308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ab308u;

    // 0x2ab308: 0x27bdffd0
    ctx->pc = 0x2ab308u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ab30c: 0xffbf0020
    ctx->pc = 0x2ab30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ab310: 0xffbe0010
    ctx->pc = 0x2ab310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x2ab314: 0x3a0f02d
    ctx->pc = 0x2ab314u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab318: 0xafc40000
    ctx->pc = 0x2ab318u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x2ab31c: 0xafc00004
    ctx->pc = 0x2ab31cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
    // 0x2ab320: 0xafc00008
    ctx->pc = 0x2ab320u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
    // 0x2ab324: 0x8fc20000
    ctx->pc = 0x2ab324u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2ab328: 0x24030003
    ctx->pc = 0x2ab328u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ab32c: 0x14430004
    ctx->pc = 0x2AB32Cu;
    {
        const bool branch_taken_0x2ab32c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2ab32c) {
            ctx->pc = 0x2AB340u;
            goto label_2ab340;
        }
    }
    ctx->pc = 0x2AB334u;
    // 0x2ab334: 0x8fc40000
    ctx->pc = 0x2ab334u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2ab338: 0xc0aa172
    ctx->pc = 0x2AB338u;
    SET_GPR_U32(ctx, 31, 0x2AB340u);
    ctx->pc = 0x2A85C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ipbDmaPageHandler_0x2a85c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AB340u; }
    }
    if (ctx->pc != 0x2AB340u) { return; }
    ctx->pc = 0x2AB340u;
label_2ab340:
    // 0x2ab340: 0x3c0e82d
    ctx->pc = 0x2ab340u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab344: 0xdfbf0020
    ctx->pc = 0x2ab344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ab348: 0xdfbe0010
    ctx->pc = 0x2ab348u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ab34c: 0x27bd0030
    ctx->pc = 0x2ab34cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ab350: 0x3e00008
    ctx->pc = 0x2AB350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AB340u: goto label_2ab340;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AB358u;
}
