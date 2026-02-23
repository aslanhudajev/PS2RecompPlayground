#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: dvci_call_errfn
// Address: 0x1774f0 - 0x177520
void dvci_call_errfn_0x1774f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("dvci_call_errfn");


    ctx->pc = 0x1774f0u;

label_1774f0:
    // 0x1774f0: 0x3c020024
    ctx->pc = 0x1774f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
label_1774f4:
    // 0x1774f4: 0x27bdfff0
    ctx->pc = 0x1774f4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1774f8:
    // 0x1774f8: 0x8c439364
    ctx->pc = 0x1774f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294939492)));
label_1774fc:
    // 0x1774fc: 0x80302d
    ctx->pc = 0x1774fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_177500:
    // 0x177500: 0x10600004
label_177504:
    if (ctx->pc == 0x177504u) {
        ctx->pc = 0x177504u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x177508u;
        goto label_177508;
    }
    ctx->pc = 0x177500u;
    {
        const bool branch_taken_0x177500 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x177504u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x177500) {
            ctx->pc = 0x177514u;
            goto label_177514;
        }
    }
    ctx->pc = 0x177508u;
label_177508:
    // 0x177508: 0x3c020024
    ctx->pc = 0x177508u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
label_17750c:
    // 0x17750c: 0x60f809
label_177510:
    if (ctx->pc == 0x177510u) {
        ctx->pc = 0x177510u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294939496)));
        ctx->pc = 0x177514u;
        goto label_177514;
    }
    ctx->pc = 0x17750Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x177514u);
        ctx->pc = 0x177510u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294939496)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1774F0u: goto label_1774f0;
            case 0x1774F4u: goto label_1774f4;
            case 0x1774F8u: goto label_1774f8;
            case 0x1774FCu: goto label_1774fc;
            case 0x177500u: goto label_177500;
            case 0x177504u: goto label_177504;
            case 0x177508u: goto label_177508;
            case 0x17750Cu: goto label_17750c;
            case 0x177510u: goto label_177510;
            case 0x177514u: goto label_177514;
            case 0x177518u: goto label_177518;
            case 0x17751Cu: goto label_17751c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x177514u; }
            if (ctx->pc != 0x177514u) { return; }
        }
    }
    ctx->pc = 0x177514u;
label_177514:
    // 0x177514: 0xdfbf0000
    ctx->pc = 0x177514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_177518:
    // 0x177518: 0x3e00008
label_17751c:
    if (ctx->pc == 0x17751Cu) {
        ctx->pc = 0x17751Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x177520u;
        goto label_fallthrough_0x177518;
    }
    ctx->pc = 0x177518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17751Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1774F0u: goto label_1774f0;
            case 0x1774F4u: goto label_1774f4;
            case 0x1774F8u: goto label_1774f8;
            case 0x1774FCu: goto label_1774fc;
            case 0x177500u: goto label_177500;
            case 0x177504u: goto label_177504;
            case 0x177508u: goto label_177508;
            case 0x17750Cu: goto label_17750c;
            case 0x177510u: goto label_177510;
            case 0x177514u: goto label_177514;
            case 0x177518u: goto label_177518;
            case 0x17751Cu: goto label_17751c;
            default: break;
        }
        return;
    }
label_fallthrough_0x177518:
    ctx->pc = 0x177520u;
}
