#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _dispatchMpegCallback
// Address: 0x163bb0 - 0x163c00
void _dispatchMpegCallback_0x163bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_dispatchMpegCallback");


    ctx->pc = 0x163bb0u;

label_163bb0:
    // 0x163bb0: 0x27bdfff0
    ctx->pc = 0x163bb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_163bb4:
    // 0x163bb4: 0x382d
    ctx->pc = 0x163bb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163bb8:
    // 0x163bb8: 0x1080000d
label_163bbc:
    if (ctx->pc == 0x163BBCu) {
        ctx->pc = 0x163BBCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x163BC0u;
        goto label_163bc0;
    }
    ctx->pc = 0x163BB8u;
    {
        const bool branch_taken_0x163bb8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x163BBCu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x163bb8) {
            ctx->pc = 0x163BF0u;
            goto label_163bf0;
        }
    }
    ctx->pc = 0x163BC0u;
label_163bc0:
    // 0x163bc0: 0x8c860040
    ctx->pc = 0x163bc0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_163bc4:
    // 0x163bc4: 0x10c0000b
label_163bc8:
    if (ctx->pc == 0x163BC8u) {
        ctx->pc = 0x163BC8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x163BCCu;
        goto label_163bcc;
    }
    ctx->pc = 0x163BC4u;
    {
        const bool branch_taken_0x163bc4 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        ctx->pc = 0x163BC8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x163bc4) {
            ctx->pc = 0x163BF4u;
            goto label_163bf4;
        }
    }
    ctx->pc = 0x163BCCu;
label_163bcc:
    // 0x163bcc: 0x8ca20000
    ctx->pc = 0x163bccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_163bd0:
    // 0x163bd0: 0x210c0
    ctx->pc = 0x163bd0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
label_163bd4:
    // 0x163bd4: 0xc21821
    ctx->pc = 0x163bd4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_163bd8:
    // 0x163bd8: 0x8c63000c
    ctx->pc = 0x163bd8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_163bdc:
    // 0x163bdc: 0x10600005
label_163be0:
    if (ctx->pc == 0x163BE0u) {
        ctx->pc = 0x163BE0u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x163BE4u;
        goto label_163be4;
    }
    ctx->pc = 0x163BDCu;
    {
        const bool branch_taken_0x163bdc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x163BE0u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        if (branch_taken_0x163bdc) {
            ctx->pc = 0x163BF4u;
            goto label_163bf4;
        }
    }
    ctx->pc = 0x163BE4u;
label_163be4:
    // 0x163be4: 0x60f809
label_163be8:
    if (ctx->pc == 0x163BE8u) {
        ctx->pc = 0x163BE8u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->pc = 0x163BECu;
        goto label_163bec;
    }
    ctx->pc = 0x163BE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x163BECu);
        ctx->pc = 0x163BE8u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163BB0u: goto label_163bb0;
            case 0x163BB4u: goto label_163bb4;
            case 0x163BB8u: goto label_163bb8;
            case 0x163BBCu: goto label_163bbc;
            case 0x163BC0u: goto label_163bc0;
            case 0x163BC4u: goto label_163bc4;
            case 0x163BC8u: goto label_163bc8;
            case 0x163BCCu: goto label_163bcc;
            case 0x163BD0u: goto label_163bd0;
            case 0x163BD4u: goto label_163bd4;
            case 0x163BD8u: goto label_163bd8;
            case 0x163BDCu: goto label_163bdc;
            case 0x163BE0u: goto label_163be0;
            case 0x163BE4u: goto label_163be4;
            case 0x163BE8u: goto label_163be8;
            case 0x163BECu: goto label_163bec;
            case 0x163BF0u: goto label_163bf0;
            case 0x163BF4u: goto label_163bf4;
            case 0x163BF8u: goto label_163bf8;
            case 0x163BFCu: goto label_163bfc;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x163BECu; }
            if (ctx->pc != 0x163BECu) { return; }
        }
    }
    ctx->pc = 0x163BECu;
label_163bec:
    // 0x163bec: 0x40382d
    ctx->pc = 0x163becu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_163bf0:
    // 0x163bf0: 0xdfbf0000
    ctx->pc = 0x163bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_163bf4:
    // 0x163bf4: 0xe0102d
    ctx->pc = 0x163bf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_163bf8:
    // 0x163bf8: 0x3e00008
label_163bfc:
    if (ctx->pc == 0x163BFCu) {
        ctx->pc = 0x163BFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x163C00u;
        goto label_fallthrough_0x163bf8;
    }
    ctx->pc = 0x163BF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163BFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x163BB0u: goto label_163bb0;
            case 0x163BB4u: goto label_163bb4;
            case 0x163BB8u: goto label_163bb8;
            case 0x163BBCu: goto label_163bbc;
            case 0x163BC0u: goto label_163bc0;
            case 0x163BC4u: goto label_163bc4;
            case 0x163BC8u: goto label_163bc8;
            case 0x163BCCu: goto label_163bcc;
            case 0x163BD0u: goto label_163bd0;
            case 0x163BD4u: goto label_163bd4;
            case 0x163BD8u: goto label_163bd8;
            case 0x163BDCu: goto label_163bdc;
            case 0x163BE0u: goto label_163be0;
            case 0x163BE4u: goto label_163be4;
            case 0x163BE8u: goto label_163be8;
            case 0x163BECu: goto label_163bec;
            case 0x163BF0u: goto label_163bf0;
            case 0x163BF4u: goto label_163bf4;
            case 0x163BF8u: goto label_163bf8;
            case 0x163BFCu: goto label_163bfc;
            default: break;
        }
        return;
    }
label_fallthrough_0x163bf8:
    ctx->pc = 0x163C00u;
}
