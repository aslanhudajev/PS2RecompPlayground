#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: getElemInfPtr
// Address: 0x1a0740 - 0x1a0788
void getElemInfPtr_0x1a0740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("getElemInfPtr");


    ctx->pc = 0x1a0740u;

    // 0x1a0740: 0x27bdffd0
    ctx->pc = 0x1a0740u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a0744: 0xffb10010
    ctx->pc = 0x1a0744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a0748: 0xffbf0020
    ctx->pc = 0x1a0748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a074c: 0xa0882d
    ctx->pc = 0x1a074cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0750: 0xffb00000
    ctx->pc = 0x1a0750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0754: 0xc067f18
    ctx->pc = 0x1A0754u;
    SET_GPR_U32(ctx, 31, 0x1A075Cu);
    ctx->pc = 0x1A0758u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->pc = 0x19FC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        isEffectiveVer_0x19fc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A075Cu; }
        else if (ctx->pc != 0x1A075Cu) { ctx->pc = 0x1A075Cu; }
    }
    if (ctx->pc != 0x1A075Cu) { return; }
    ctx->pc = 0x1A075Cu;
    // 0x1a075c: 0x14400003
    ctx->pc = 0x1A075Cu;
    {
        const bool branch_taken_0x1a075c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A0760u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a075c) {
            ctx->pc = 0x1A076Cu;
            goto label_1a076c;
        }
    }
    ctx->pc = 0x1A0764u;
    // 0x1a0764: 0x10000003
    ctx->pc = 0x1A0764u;
    {
        const bool branch_taken_0x1a0764 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0768u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0764) {
            ctx->pc = 0x1A0774u;
            goto label_1a0774;
        }
    }
    ctx->pc = 0x1A076Cu;
label_1a076c:
    // 0x1a076c: 0xc067fb0
    ctx->pc = 0x1A076Cu;
    SET_GPR_U32(ctx, 31, 0x1A0774u);
    ctx->pc = 0x1A0770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19FEC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        searchStmId_0x19fec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0774u; }
        else if (ctx->pc != 0x1A0774u) { ctx->pc = 0x1A0774u; }
    }
    if (ctx->pc != 0x1A0774u) { return; }
    ctx->pc = 0x1A0774u;
label_1a0774:
    // 0x1a0774: 0xdfbf0020
    ctx->pc = 0x1a0774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0778: 0xdfb10010
    ctx->pc = 0x1a0778u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a077c: 0xdfb00000
    ctx->pc = 0x1a077cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0780: 0x3e00008
    ctx->pc = 0x1A0780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0784u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A076Cu: goto label_1a076c;
            case 0x1A0774u: goto label_1a0774;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0788u;
}
