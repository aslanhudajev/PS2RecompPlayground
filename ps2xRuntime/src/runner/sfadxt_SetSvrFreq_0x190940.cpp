#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfadxt_SetSvrFreq
// Address: 0x190940 - 0x1909ec
void sfadxt_SetSvrFreq_0x190940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfadxt_SetSvrFreq");


    ctx->pc = 0x190940u;

    // 0x190940: 0x27bdffb0
    ctx->pc = 0x190940u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x190944: 0x2405001b
    ctx->pc = 0x190944u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 27));
    // 0x190948: 0xffb20020
    ctx->pc = 0x190948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x19094c: 0xffb10010
    ctx->pc = 0x19094cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x190950: 0xffb00000
    ctx->pc = 0x190950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x190954: 0xffbf0040
    ctx->pc = 0x190954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x190958: 0x80802d
    ctx->pc = 0x190958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19095c: 0xffb30030
    ctx->pc = 0x19095cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x190960: 0x8e133e20
    ctx->pc = 0x190960u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 16), 15904)));
    // 0x190964: 0xc0674c2
    ctx->pc = 0x190964u;
    SET_GPR_U32(ctx, 31, 0x19096Cu);
    ctx->pc = 0x190968u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 15904));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19096Cu; }
        else if (ctx->pc != 0x19096Cu) { ctx->pc = 0x19096Cu; }
    }
    if (ctx->pc != 0x19096Cu) { return; }
    ctx->pc = 0x19096Cu;
    // 0x19096c: 0x40882d
    ctx->pc = 0x19096cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190970: 0xc067b18
    ctx->pc = 0x190970u;
    SET_GPR_U32(ctx, 31, 0x190978u);
    ctx->pc = 0x190974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19EC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFTIM_GetSpeed_0x19ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x190978u; }
        else if (ctx->pc != 0x190978u) { ctx->pc = 0x190978u; }
    }
    if (ctx->pc != 0x190978u) { return; }
    ctx->pc = 0x190978u;
    // 0x190978: 0x40282d
    ctx->pc = 0x190978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19097c: 0x28a203e9
    ctx->pc = 0x19097cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 1001));
    // 0x190980: 0x54400009
    ctx->pc = 0x190980u;
    {
        const bool branch_taken_0x190980 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x190980) {
            ctx->pc = 0x190984u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 68)));
            ctx->pc = 0x1909A8u;
            goto label_1909a8;
        }
    }
    ctx->pc = 0x190988u;
    // 0x190988: 0x240203e8
    ctx->pc = 0x190988u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1000));
    // 0x19098c: 0x50a00001
    ctx->pc = 0x19098Cu;
    {
        const bool branch_taken_0x19098c = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x19098c) {
            ctx->pc = 0x190990u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x190994u;
            goto label_190994;
        }
    }
    ctx->pc = 0x190994u;
label_190994:
    // 0x190994: 0x2221018
    ctx->pc = 0x190994u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x190998: 0x7045001a
    ctx->pc = 0x190998u;
    { int32_t divisor = GPR_S32(ctx, 5); if (divisor != 0) { ctx->lo1 = (uint32_t)(GPR_S32(ctx, 2) / divisor); ctx->hi1 = (uint32_t)(GPR_S32(ctx, 5) % divisor); } else { ctx->lo1= (GPR_S32(ctx,2) < 0) ? 1 : -1; ctx->hi1=GPR_S32(ctx,5); } }
    // 0x19099c: 0x70001012
    ctx->pc = 0x19099cu;
    SET_GPR_U32(ctx, 2, ctx->lo1);
    // 0x1909a0: 0x40882d
    ctx->pc = 0x1909a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1909a4: 0x8e420044
    ctx->pc = 0x1909a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_1909a8:
    // 0x1909a8: 0x1051000a
    ctx->pc = 0x1909A8u;
    {
        const bool branch_taken_0x1909a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        ctx->pc = 0x1909ACu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x1909a8) {
            ctx->pc = 0x1909D4u;
            goto label_1909d4;
        }
    }
    ctx->pc = 0x1909B0u;
    // 0x1909b0: 0xae510044
    ctx->pc = 0x1909b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 17));
    // 0x1909b4: 0x260202d
    ctx->pc = 0x1909b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1909b8: 0x220282d
    ctx->pc = 0x1909b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1909bc: 0xdfb30030
    ctx->pc = 0x1909bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1909c0: 0xdfb20020
    ctx->pc = 0x1909c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1909c4: 0xdfb10010
    ctx->pc = 0x1909c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1909c8: 0xdfb00000
    ctx->pc = 0x1909c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1909cc: 0x805c8d0
    ctx->pc = 0x1909CCu;
    ctx->pc = 0x1909D0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x172340u;
    ADXT_SetSvrFreq_0x172340(rdram, ctx, runtime); return;
    ctx->pc = 0x1909D4u;
label_1909d4:
    // 0x1909d4: 0xdfb30030
    ctx->pc = 0x1909d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1909d8: 0xdfb20020
    ctx->pc = 0x1909d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1909dc: 0xdfb10010
    ctx->pc = 0x1909dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1909e0: 0xdfb00000
    ctx->pc = 0x1909e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1909e4: 0x3e00008
    ctx->pc = 0x1909E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1909E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190994u: goto label_190994;
            case 0x1909A8u: goto label_1909a8;
            case 0x1909D4u: goto label_1909d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1909ECu;
}
