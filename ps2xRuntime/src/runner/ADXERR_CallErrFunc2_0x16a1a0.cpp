#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXERR_CallErrFunc2
// Address: 0x16a1a0 - 0x16a208
void ADXERR_CallErrFunc2_0x16a1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXERR_CallErrFunc2");


    ctx->pc = 0x16a1a0u;

label_16a1a0:
    // 0x16a1a0: 0x27bdffd0
    ctx->pc = 0x16a1a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_16a1a4:
    // 0x16a1a4: 0x3c020023
    ctx->pc = 0x16a1a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_16a1a8:
    // 0x16a1a8: 0xffb00000
    ctx->pc = 0x16a1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16a1ac:
    // 0x16a1ac: 0x240600ff
    ctx->pc = 0x16a1acu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 255));
label_16a1b0:
    // 0x16a1b0: 0xffb10010
    ctx->pc = 0x16a1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_16a1b4:
    // 0x16a1b4: 0xa0802d
    ctx->pc = 0x16a1b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16a1b8:
    // 0x16a1b8: 0x2451b490
    ctx->pc = 0x16a1b8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294947984));
label_16a1bc:
    // 0x16a1bc: 0x80282d
    ctx->pc = 0x16a1bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16a1c0:
    // 0x16a1c0: 0xffbf0020
    ctx->pc = 0x16a1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_16a1c4:
    // 0x16a1c4: 0xc05167c
label_16a1c8:
    if (ctx->pc == 0x16A1C8u) {
        ctx->pc = 0x16A1C8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16A1CCu;
        goto label_16a1cc;
    }
    ctx->pc = 0x16A1C4u;
    SET_GPR_U32(ctx, 31, 0x16A1CCu);
    ctx->pc = 0x16A1C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1459F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncpy_0x1459f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A1CCu; }
        else if (ctx->pc != 0x16A1CCu) { ctx->pc = 0x16A1CCu; }
    }
    if (ctx->pc != 0x16A1CCu) { return; }
    ctx->pc = 0x16A1CCu;
label_16a1cc:
    // 0x16a1cc: 0x200282d
    ctx->pc = 0x16a1ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16a1d0:
    // 0x16a1d0: 0x220202d
    ctx->pc = 0x16a1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16a1d4:
    // 0x16a1d4: 0xc0515a2
label_16a1d8:
    if (ctx->pc == 0x16A1D8u) {
        ctx->pc = 0x16A1D8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 255));
        ctx->pc = 0x16A1DCu;
        goto label_16a1dc;
    }
    ctx->pc = 0x16A1D4u;
    SET_GPR_U32(ctx, 31, 0x16A1DCu);
    ctx->pc = 0x16A1D8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 255));
    ctx->pc = 0x145688u;
    {
        const uint32_t __entryPc = ctx->pc;
        strncat_0x145688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A1DCu; }
        else if (ctx->pc != 0x16A1DCu) { ctx->pc = 0x16A1DCu; }
    }
    if (ctx->pc != 0x16A1DCu) { return; }
    ctx->pc = 0x16A1DCu;
label_16a1dc:
    // 0x16a1dc: 0x8f828108
    ctx->pc = 0x16a1dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934792)));
label_16a1e0:
    // 0x16a1e0: 0x10400003
label_16a1e4:
    if (ctx->pc == 0x16A1E4u) {
        ctx->pc = 0x16A1E4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934796)));
        ctx->pc = 0x16A1E8u;
        goto label_16a1e8;
    }
    ctx->pc = 0x16A1E0u;
    {
        const bool branch_taken_0x16a1e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16A1E4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934796)));
        if (branch_taken_0x16a1e0) {
            ctx->pc = 0x16A1F0u;
            goto label_16a1f0;
        }
    }
    ctx->pc = 0x16A1E8u;
label_16a1e8:
    // 0x16a1e8: 0x40f809
label_16a1ec:
    if (ctx->pc == 0x16A1ECu) {
        ctx->pc = 0x16A1ECu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16A1F0u;
        goto label_16a1f0;
    }
    ctx->pc = 0x16A1E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16A1F0u);
        ctx->pc = 0x16A1ECu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16A1A0u: goto label_16a1a0;
            case 0x16A1A4u: goto label_16a1a4;
            case 0x16A1A8u: goto label_16a1a8;
            case 0x16A1ACu: goto label_16a1ac;
            case 0x16A1B0u: goto label_16a1b0;
            case 0x16A1B4u: goto label_16a1b4;
            case 0x16A1B8u: goto label_16a1b8;
            case 0x16A1BCu: goto label_16a1bc;
            case 0x16A1C0u: goto label_16a1c0;
            case 0x16A1C4u: goto label_16a1c4;
            case 0x16A1C8u: goto label_16a1c8;
            case 0x16A1CCu: goto label_16a1cc;
            case 0x16A1D0u: goto label_16a1d0;
            case 0x16A1D4u: goto label_16a1d4;
            case 0x16A1D8u: goto label_16a1d8;
            case 0x16A1DCu: goto label_16a1dc;
            case 0x16A1E0u: goto label_16a1e0;
            case 0x16A1E4u: goto label_16a1e4;
            case 0x16A1E8u: goto label_16a1e8;
            case 0x16A1ECu: goto label_16a1ec;
            case 0x16A1F0u: goto label_16a1f0;
            case 0x16A1F4u: goto label_16a1f4;
            case 0x16A1F8u: goto label_16a1f8;
            case 0x16A1FCu: goto label_16a1fc;
            case 0x16A200u: goto label_16a200;
            case 0x16A204u: goto label_16a204;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16A1F0u; }
            if (ctx->pc != 0x16A1F0u) { return; }
        }
    }
    ctx->pc = 0x16A1F0u;
label_16a1f0:
    // 0x16a1f0: 0x220202d
    ctx->pc = 0x16a1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16a1f4:
    // 0x16a1f4: 0xdfbf0020
    ctx->pc = 0x16a1f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_16a1f8:
    // 0x16a1f8: 0xdfb10010
    ctx->pc = 0x16a1f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16a1fc:
    // 0x16a1fc: 0xdfb00000
    ctx->pc = 0x16a1fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16a200:
    // 0x16a200: 0x805f70a
label_16a204:
    if (ctx->pc == 0x16A204u) {
        ctx->pc = 0x16A204u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x16A208u;
        goto label_fallthrough_0x16a200;
    }
    ctx->pc = 0x16A200u;
    ctx->pc = 0x16A204u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x17DC28u;
    SVM_CallErr_0x17dc28(rdram, ctx, runtime); return;
label_fallthrough_0x16a200:
    ctx->pc = 0x16A208u;
}
