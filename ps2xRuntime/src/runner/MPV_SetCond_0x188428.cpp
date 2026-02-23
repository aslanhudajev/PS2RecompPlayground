#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPV_SetCond
// Address: 0x188428 - 0x1884b4
void MPV_SetCond_0x188428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPV_SetCond");


    ctx->pc = 0x188428u;

    // 0x188428: 0x27bdffc0
    ctx->pc = 0x188428u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18842c: 0xffb20020
    ctx->pc = 0x18842cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x188430: 0xffb10010
    ctx->pc = 0x188430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x188434: 0xc0902d
    ctx->pc = 0x188434u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188438: 0xffb00000
    ctx->pc = 0x188438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18843c: 0xa0882d
    ctx->pc = 0x18843cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188440: 0x80802d
    ctx->pc = 0x188440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188444: 0x16000007
    ctx->pc = 0x188444u;
    {
        const bool branch_taken_0x188444 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x188448u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        if (branch_taken_0x188444) {
            ctx->pc = 0x188464u;
            goto label_188464;
        }
    }
    ctx->pc = 0x18844Cu;
    // 0x18844c: 0x220202d
    ctx->pc = 0x18844cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188450: 0xc06212e
    ctx->pc = 0x188450u;
    SET_GPR_U32(ctx, 31, 0x188458u);
    ctx->pc = 0x188454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1884B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvlib_SetCondAll_0x1884b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188458u; }
        else if (ctx->pc != 0x188458u) { ctx->pc = 0x188458u; }
    }
    if (ctx->pc != 0x188458u) { return; }
    ctx->pc = 0x188458u;
    // 0x188458: 0x3c02002e
    ctx->pc = 0x188458u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x18845c: 0x1000000b
    ctx->pc = 0x18845Cu;
    {
        const bool branch_taken_0x18845c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x188460u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 17040));
        if (branch_taken_0x18845c) {
            ctx->pc = 0x18848Cu;
            goto label_18848c;
        }
    }
    ctx->pc = 0x188464u;
label_188464:
    // 0x188464: 0xc062142
    ctx->pc = 0x188464u;
    SET_GPR_U32(ctx, 31, 0x18846Cu);
    ctx->pc = 0x188468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x188508u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVLIB_CheckHn_0x188508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18846Cu; }
        else if (ctx->pc != 0x18846Cu) { ctx->pc = 0x18846Cu; }
    }
    if (ctx->pc != 0x18846Cu) { return; }
    ctx->pc = 0x18846Cu;
    // 0x18846c: 0x10400006
    ctx->pc = 0x18846Cu;
    {
        const bool branch_taken_0x18846c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x188470u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x18846c) {
            ctx->pc = 0x188488u;
            goto label_188488;
        }
    }
    ctx->pc = 0x188474u;
    // 0x188474: 0x3c05ff03
    ctx->pc = 0x188474u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65283 << 16));
    // 0x188478: 0xc061846
    ctx->pc = 0x188478u;
    SET_GPR_U32(ctx, 31, 0x188480u);
    ctx->pc = 0x18847Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 514));
    ctx->pc = 0x186118u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVERR_SetCode_0x186118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188480u; }
        else if (ctx->pc != 0x188480u) { ctx->pc = 0x188480u; }
    }
    if (ctx->pc != 0x188480u) { return; }
    ctx->pc = 0x188480u;
    // 0x188480: 0x10000007
    ctx->pc = 0x188480u;
    {
        const bool branch_taken_0x188480 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x188484u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x188480) {
            ctx->pc = 0x1884A0u;
            goto label_1884a0;
        }
    }
    ctx->pc = 0x188488u;
label_188488:
    // 0x188488: 0x26040168
    ctx->pc = 0x188488u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 360));
label_18848c:
    // 0x18848c: 0x111880
    ctx->pc = 0x18848cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x188490: 0x102d
    ctx->pc = 0x188490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188494: 0x641821
    ctx->pc = 0x188494u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x188498: 0xac720000
    ctx->pc = 0x188498u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x18849c: 0xdfbf0030
    ctx->pc = 0x18849cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1884a0:
    // 0x1884a0: 0xdfb20020
    ctx->pc = 0x1884a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1884a4: 0xdfb10010
    ctx->pc = 0x1884a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1884a8: 0xdfb00000
    ctx->pc = 0x1884a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1884ac: 0x3e00008
    ctx->pc = 0x1884ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1884B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188464u: goto label_188464;
            case 0x188488u: goto label_188488;
            case 0x18848Cu: goto label_18848c;
            case 0x1884A0u: goto label_1884a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1884B4u;
}
