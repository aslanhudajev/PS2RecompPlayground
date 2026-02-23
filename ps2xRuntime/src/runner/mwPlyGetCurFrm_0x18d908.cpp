#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyGetCurFrm
// Address: 0x18d908 - 0x18d990
void mwPlyGetCurFrm_0x18d908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyGetCurFrm");


    ctx->pc = 0x18d908u;

    // 0x18d908: 0x27bdffc0
    ctx->pc = 0x18d908u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18d90c: 0xffb00010
    ctx->pc = 0x18d90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x18d910: 0xffb10020
    ctx->pc = 0x18d910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x18d914: 0x80802d
    ctx->pc = 0x18d914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d918: 0xffbf0030
    ctx->pc = 0x18d918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18d91c: 0xc063d42
    ctx->pc = 0x18D91Cu;
    SET_GPR_U32(ctx, 31, 0x18D924u);
    ctx->pc = 0x18D920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18F508u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyGetSfdHn_0x18f508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D924u; }
        else if (ctx->pc != 0x18D924u) { ctx->pc = 0x18D924u; }
    }
    if (ctx->pc != 0x18D924u) { return; }
    ctx->pc = 0x18D924u;
    // 0x18d924: 0x40202d
    ctx->pc = 0x18d924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d928: 0xc066f86
    ctx->pc = 0x18D928u;
    SET_GPR_U32(ctx, 31, 0x18D930u);
    ctx->pc = 0x18D92Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19BE18u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFD_GetFrm_0x19be18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D930u; }
        else if (ctx->pc != 0x18D930u) { ctx->pc = 0x18D930u; }
    }
    if (ctx->pc != 0x18D930u) { return; }
    ctx->pc = 0x18D930u;
    // 0x18d930: 0x8fa50000
    ctx->pc = 0x18d930u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d934: 0x10a00010
    ctx->pc = 0x18D934u;
    {
        const bool branch_taken_0x18d934 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x18D938u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x18d934) {
            ctx->pc = 0x18D978u;
            goto label_18d978;
        }
    }
    ctx->pc = 0x18D93Cu;
    // 0x18d93c: 0x8e020028
    ctx->pc = 0x18d93cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x18d940: 0xae03008c
    ctx->pc = 0x18d940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
    // 0x18d944: 0x24040007
    ctx->pc = 0x18d944u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
    // 0x18d948: 0x14440006
    ctx->pc = 0x18D948u;
    {
        const bool branch_taken_0x18d948 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 4));
        ctx->pc = 0x18D94Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 5));
        if (branch_taken_0x18d948) {
            ctx->pc = 0x18D964u;
            goto label_18d964;
        }
    }
    ctx->pc = 0x18D950u;
    // 0x18d950: 0x8ca60004
    ctx->pc = 0x18d950u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x18d954: 0x8ca40020
    ctx->pc = 0x18d954u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x18d958: 0xc06360c
    ctx->pc = 0x18D958u;
    SET_GPR_U32(ctx, 31, 0x18D960u);
    ctx->pc = 0x18D95Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->pc = 0x18D830u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFD_CompoAlpha256_0x18d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D960u; }
        else if (ctx->pc != 0x18D960u) { ctx->pc = 0x18D960u; }
    }
    if (ctx->pc != 0x18D960u) { return; }
    ctx->pc = 0x18D960u;
    // 0x18d960: 0x8fa50000
    ctx->pc = 0x18d960u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18d964:
    // 0x18d964: 0xa0202d
    ctx->pc = 0x18d964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d968: 0xc063664
    ctx->pc = 0x18D968u;
    SET_GPR_U32(ctx, 31, 0x18D970u);
    ctx->pc = 0x18D96Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18D990u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwl_convFrmInfFromSFD_0x18d990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D970u; }
        else if (ctx->pc != 0x18D970u) { ctx->pc = 0x18D970u; }
    }
    if (ctx->pc != 0x18D970u) { return; }
    ctx->pc = 0x18D970u;
    // 0x18d970: 0x10000003
    ctx->pc = 0x18D970u;
    {
        const bool branch_taken_0x18d970 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18D974u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x18d970) {
            ctx->pc = 0x18D980u;
            goto label_18d980;
        }
    }
    ctx->pc = 0x18D978u;
label_18d978:
    // 0x18d978: 0xae200000
    ctx->pc = 0x18d978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x18d97c: 0xdfbf0030
    ctx->pc = 0x18d97cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18d980:
    // 0x18d980: 0xdfb10020
    ctx->pc = 0x18d980u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18d984: 0xdfb00010
    ctx->pc = 0x18d984u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d988: 0x3e00008
    ctx->pc = 0x18D988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D98Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18D964u: goto label_18d964;
            case 0x18D978u: goto label_18d978;
            case 0x18D980u: goto label_18d980;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18D990u;
}
