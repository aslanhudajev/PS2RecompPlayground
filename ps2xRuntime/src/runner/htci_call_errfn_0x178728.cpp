#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htci_call_errfn
// Address: 0x178728 - 0x178758
void htci_call_errfn_0x178728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htci_call_errfn");


    ctx->pc = 0x178728u;

label_178728:
    // 0x178728: 0x3c020024
    ctx->pc = 0x178728u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
label_17872c:
    // 0x17872c: 0x27bdfff0
    ctx->pc = 0x17872cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_178730:
    // 0x178730: 0x8c43a0ac
    ctx->pc = 0x178730u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294942892)));
label_178734:
    // 0x178734: 0x80302d
    ctx->pc = 0x178734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_178738:
    // 0x178738: 0x10600004
label_17873c:
    if (ctx->pc == 0x17873Cu) {
        ctx->pc = 0x17873Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x178740u;
        goto label_178740;
    }
    ctx->pc = 0x178738u;
    {
        const bool branch_taken_0x178738 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x17873Cu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x178738) {
            ctx->pc = 0x17874Cu;
            goto label_17874c;
        }
    }
    ctx->pc = 0x178740u;
label_178740:
    // 0x178740: 0x3c020024
    ctx->pc = 0x178740u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
label_178744:
    // 0x178744: 0x60f809
label_178748:
    if (ctx->pc == 0x178748u) {
        ctx->pc = 0x178748u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294942896)));
        ctx->pc = 0x17874Cu;
        goto label_17874c;
    }
    ctx->pc = 0x178744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17874Cu);
        ctx->pc = 0x178748u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294942896)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178728u: goto label_178728;
            case 0x17872Cu: goto label_17872c;
            case 0x178730u: goto label_178730;
            case 0x178734u: goto label_178734;
            case 0x178738u: goto label_178738;
            case 0x17873Cu: goto label_17873c;
            case 0x178740u: goto label_178740;
            case 0x178744u: goto label_178744;
            case 0x178748u: goto label_178748;
            case 0x17874Cu: goto label_17874c;
            case 0x178750u: goto label_178750;
            case 0x178754u: goto label_178754;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17874Cu; }
            if (ctx->pc != 0x17874Cu) { return; }
        }
    }
    ctx->pc = 0x17874Cu;
label_17874c:
    // 0x17874c: 0xdfbf0000
    ctx->pc = 0x17874cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_178750:
    // 0x178750: 0x3e00008
label_178754:
    if (ctx->pc == 0x178754u) {
        ctx->pc = 0x178754u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x178758u;
        goto label_fallthrough_0x178750;
    }
    ctx->pc = 0x178750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178754u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178728u: goto label_178728;
            case 0x17872Cu: goto label_17872c;
            case 0x178730u: goto label_178730;
            case 0x178734u: goto label_178734;
            case 0x178738u: goto label_178738;
            case 0x17873Cu: goto label_17873c;
            case 0x178740u: goto label_178740;
            case 0x178744u: goto label_178744;
            case 0x178748u: goto label_178748;
            case 0x17874Cu: goto label_17874c;
            case 0x178750u: goto label_178750;
            case 0x178754u: goto label_178754;
            default: break;
        }
        return;
    }
label_fallthrough_0x178750:
    ctx->pc = 0x178758u;
}
