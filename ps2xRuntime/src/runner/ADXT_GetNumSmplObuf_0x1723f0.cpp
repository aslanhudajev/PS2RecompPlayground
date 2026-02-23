#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_GetNumSmplObuf
// Address: 0x1723f0 - 0x172434
void ADXT_GetNumSmplObuf_0x1723f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_GetNumSmplObuf");


    ctx->pc = 0x1723f0u;

label_1723f0:
    // 0x1723f0: 0x27bdfff0
    ctx->pc = 0x1723f0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1723f4:
    // 0x1723f4: 0x52880
    ctx->pc = 0x1723f4u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
label_1723f8:
    // 0x1723f8: 0xffbf0000
    ctx->pc = 0x1723f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1723fc:
    // 0x1723fc: 0x852021
    ctx->pc = 0x1723fcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_172400:
    // 0x172400: 0x8c840018
    ctx->pc = 0x172400u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_172404:
    // 0x172404: 0x50800008
label_172408:
    if (ctx->pc == 0x172408u) {
        ctx->pc = 0x172408u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17240Cu;
        goto label_17240c;
    }
    ctx->pc = 0x172404u;
    {
        const bool branch_taken_0x172404 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x172404) {
            ctx->pc = 0x172408u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x172428u;
            goto label_172428;
        }
    }
    ctx->pc = 0x17240Cu;
label_17240c:
    // 0x17240c: 0x8c830000
    ctx->pc = 0x17240cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_172410:
    // 0x172410: 0x8c620024
    ctx->pc = 0x172410u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_172414:
    // 0x172414: 0x40f809
label_172418:
    if (ctx->pc == 0x172418u) {
        ctx->pc = 0x172418u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x17241Cu;
        goto label_17241c;
    }
    ctx->pc = 0x172414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17241Cu);
        ctx->pc = 0x172418u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1723F0u: goto label_1723f0;
            case 0x1723F4u: goto label_1723f4;
            case 0x1723F8u: goto label_1723f8;
            case 0x1723FCu: goto label_1723fc;
            case 0x172400u: goto label_172400;
            case 0x172404u: goto label_172404;
            case 0x172408u: goto label_172408;
            case 0x17240Cu: goto label_17240c;
            case 0x172410u: goto label_172410;
            case 0x172414u: goto label_172414;
            case 0x172418u: goto label_172418;
            case 0x17241Cu: goto label_17241c;
            case 0x172420u: goto label_172420;
            case 0x172424u: goto label_172424;
            case 0x172428u: goto label_172428;
            case 0x17242Cu: goto label_17242c;
            case 0x172430u: goto label_172430;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17241Cu; }
            if (ctx->pc != 0x17241Cu) { return; }
        }
    }
    ctx->pc = 0x17241Cu;
label_17241c:
    // 0x17241c: 0x21fc2
    ctx->pc = 0x17241cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
label_172420:
    // 0x172420: 0x621821
    ctx->pc = 0x172420u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_172424:
    // 0x172424: 0x31043
    ctx->pc = 0x172424u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
label_172428:
    // 0x172428: 0xdfbf0000
    ctx->pc = 0x172428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17242c:
    // 0x17242c: 0x3e00008
label_172430:
    if (ctx->pc == 0x172430u) {
        ctx->pc = 0x172430u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x172434u;
        goto label_fallthrough_0x17242c;
    }
    ctx->pc = 0x17242Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172430u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1723F0u: goto label_1723f0;
            case 0x1723F4u: goto label_1723f4;
            case 0x1723F8u: goto label_1723f8;
            case 0x1723FCu: goto label_1723fc;
            case 0x172400u: goto label_172400;
            case 0x172404u: goto label_172404;
            case 0x172408u: goto label_172408;
            case 0x17240Cu: goto label_17240c;
            case 0x172410u: goto label_172410;
            case 0x172414u: goto label_172414;
            case 0x172418u: goto label_172418;
            case 0x17241Cu: goto label_17241c;
            case 0x172420u: goto label_172420;
            case 0x172424u: goto label_172424;
            case 0x172428u: goto label_172428;
            case 0x17242Cu: goto label_17242c;
            case 0x172430u: goto label_172430;
            default: break;
        }
        return;
    }
label_fallthrough_0x17242c:
    ctx->pc = 0x172434u;
}
