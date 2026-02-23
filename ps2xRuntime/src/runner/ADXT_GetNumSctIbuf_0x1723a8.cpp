#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_GetNumSctIbuf
// Address: 0x1723a8 - 0x1723ec
void ADXT_GetNumSctIbuf_0x1723a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_GetNumSctIbuf");


    ctx->pc = 0x1723a8u;

label_1723a8:
    // 0x1723a8: 0x27bdfff0
    ctx->pc = 0x1723a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
label_1723ac:
    // 0x1723ac: 0xffbf0000
    ctx->pc = 0x1723acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1723b0:
    // 0x1723b0: 0x8c840014
    ctx->pc = 0x1723b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1723b4:
    // 0x1723b4: 0x5080000a
label_1723b8:
    if (ctx->pc == 0x1723B8u) {
        ctx->pc = 0x1723B8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1723BCu;
        goto label_1723bc;
    }
    ctx->pc = 0x1723B4u;
    {
        const bool branch_taken_0x1723b4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x1723b4) {
            ctx->pc = 0x1723B8u;
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x1723E0u;
            goto label_1723e0;
        }
    }
    ctx->pc = 0x1723BCu;
label_1723bc:
    // 0x1723bc: 0x8c830000
    ctx->pc = 0x1723bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1723c0:
    // 0x1723c0: 0x8c620024
    ctx->pc = 0x1723c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1723c4:
    // 0x1723c4: 0x40f809
label_1723c8:
    if (ctx->pc == 0x1723C8u) {
        ctx->pc = 0x1723C8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1723CCu;
        goto label_1723cc;
    }
    ctx->pc = 0x1723C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1723CCu);
        ctx->pc = 0x1723C8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1723A8u: goto label_1723a8;
            case 0x1723ACu: goto label_1723ac;
            case 0x1723B0u: goto label_1723b0;
            case 0x1723B4u: goto label_1723b4;
            case 0x1723B8u: goto label_1723b8;
            case 0x1723BCu: goto label_1723bc;
            case 0x1723C0u: goto label_1723c0;
            case 0x1723C4u: goto label_1723c4;
            case 0x1723C8u: goto label_1723c8;
            case 0x1723CCu: goto label_1723cc;
            case 0x1723D0u: goto label_1723d0;
            case 0x1723D4u: goto label_1723d4;
            case 0x1723D8u: goto label_1723d8;
            case 0x1723DCu: goto label_1723dc;
            case 0x1723E0u: goto label_1723e0;
            case 0x1723E4u: goto label_1723e4;
            case 0x1723E8u: goto label_1723e8;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1723CCu; }
            if (ctx->pc != 0x1723CCu) { return; }
        }
    }
    ctx->pc = 0x1723CCu;
label_1723cc:
    // 0x1723cc: 0x2404ffff
    ctx->pc = 0x1723ccu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_1723d0:
    // 0x1723d0: 0x244307ff
    ctx->pc = 0x1723d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 2047));
label_1723d4:
    // 0x1723d4: 0x82202a
    ctx->pc = 0x1723d4u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
label_1723d8:
    // 0x1723d8: 0x44180b
    ctx->pc = 0x1723d8u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 2));
label_1723dc:
    // 0x1723dc: 0x312c3
    ctx->pc = 0x1723dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 11));
label_1723e0:
    // 0x1723e0: 0xdfbf0000
    ctx->pc = 0x1723e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1723e4:
    // 0x1723e4: 0x3e00008
label_1723e8:
    if (ctx->pc == 0x1723E8u) {
        ctx->pc = 0x1723E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1723ECu;
        goto label_fallthrough_0x1723e4;
    }
    ctx->pc = 0x1723E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1723E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1723A8u: goto label_1723a8;
            case 0x1723ACu: goto label_1723ac;
            case 0x1723B0u: goto label_1723b0;
            case 0x1723B4u: goto label_1723b4;
            case 0x1723B8u: goto label_1723b8;
            case 0x1723BCu: goto label_1723bc;
            case 0x1723C0u: goto label_1723c0;
            case 0x1723C4u: goto label_1723c4;
            case 0x1723C8u: goto label_1723c8;
            case 0x1723CCu: goto label_1723cc;
            case 0x1723D0u: goto label_1723d0;
            case 0x1723D4u: goto label_1723d4;
            case 0x1723D8u: goto label_1723d8;
            case 0x1723DCu: goto label_1723dc;
            case 0x1723E0u: goto label_1723e0;
            case 0x1723E4u: goto label_1723e4;
            case 0x1723E8u: goto label_1723e8;
            default: break;
        }
        return;
    }
label_fallthrough_0x1723e4:
    ctx->pc = 0x1723ECu;
}
