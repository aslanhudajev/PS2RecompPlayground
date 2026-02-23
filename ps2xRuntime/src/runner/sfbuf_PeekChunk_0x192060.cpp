#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfbuf_PeekChunk
// Address: 0x192060 - 0x1920e8
void sfbuf_PeekChunk_0x192060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfbuf_PeekChunk");


    ctx->pc = 0x192060u;

label_192060:
    // 0x192060: 0x27bdffb0
    ctx->pc = 0x192060u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_192064:
    // 0x192064: 0xffb30030
    ctx->pc = 0x192064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_192068:
    // 0x192068: 0xffb20020
    ctx->pc = 0x192068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_19206c:
    // 0x19206c: 0xc0982d
    ctx->pc = 0x19206cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_192070:
    // 0x192070: 0xffb10010
    ctx->pc = 0x192070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_192074:
    // 0x192074: 0xffb00000
    ctx->pc = 0x192074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_192078:
    // 0x192078: 0xffbf0040
    ctx->pc = 0x192078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_19207c:
    // 0x19207c: 0x80802d
    ctx->pc = 0x19207cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_192080:
    // 0x192080: 0x8e030000
    ctx->pc = 0x192080u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_192084:
    // 0x192084: 0x8c620024
    ctx->pc = 0x192084u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_192088:
    // 0x192088: 0x40f809
label_19208c:
    if (ctx->pc == 0x19208Cu) {
        ctx->pc = 0x19208Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x192090u;
        goto label_192090;
    }
    ctx->pc = 0x192088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x192090u);
        ctx->pc = 0x19208Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192060u: goto label_192060;
            case 0x192064u: goto label_192064;
            case 0x192068u: goto label_192068;
            case 0x19206Cu: goto label_19206c;
            case 0x192070u: goto label_192070;
            case 0x192074u: goto label_192074;
            case 0x192078u: goto label_192078;
            case 0x19207Cu: goto label_19207c;
            case 0x192080u: goto label_192080;
            case 0x192084u: goto label_192084;
            case 0x192088u: goto label_192088;
            case 0x19208Cu: goto label_19208c;
            case 0x192090u: goto label_192090;
            case 0x192094u: goto label_192094;
            case 0x192098u: goto label_192098;
            case 0x19209Cu: goto label_19209c;
            case 0x1920A0u: goto label_1920a0;
            case 0x1920A4u: goto label_1920a4;
            case 0x1920A8u: goto label_1920a8;
            case 0x1920ACu: goto label_1920ac;
            case 0x1920B0u: goto label_1920b0;
            case 0x1920B4u: goto label_1920b4;
            case 0x1920B8u: goto label_1920b8;
            case 0x1920BCu: goto label_1920bc;
            case 0x1920C0u: goto label_1920c0;
            case 0x1920C4u: goto label_1920c4;
            case 0x1920C8u: goto label_1920c8;
            case 0x1920CCu: goto label_1920cc;
            case 0x1920D0u: goto label_1920d0;
            case 0x1920D4u: goto label_1920d4;
            case 0x1920D8u: goto label_1920d8;
            case 0x1920DCu: goto label_1920dc;
            case 0x1920E0u: goto label_1920e0;
            case 0x1920E4u: goto label_1920e4;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x192090u; }
            if (ctx->pc != 0x192090u) { return; }
        }
    }
    ctx->pc = 0x192090u;
label_192090:
    // 0x192090: 0x8e030000
    ctx->pc = 0x192090u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_192094:
    // 0x192094: 0x40902d
    ctx->pc = 0x192094u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_192098:
    // 0x192098: 0x260382d
    ctx->pc = 0x192098u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19209c:
    // 0x19209c: 0x200202d
    ctx->pc = 0x19209cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1920a0:
    // 0x1920a0: 0x8c620018
    ctx->pc = 0x1920a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1920a4:
    // 0x1920a4: 0x220282d
    ctx->pc = 0x1920a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1920a8:
    // 0x1920a8: 0x40f809
label_1920ac:
    if (ctx->pc == 0x1920ACu) {
        ctx->pc = 0x1920ACu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1920B0u;
        goto label_1920b0;
    }
    ctx->pc = 0x1920A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1920B0u);
        ctx->pc = 0x1920ACu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192060u: goto label_192060;
            case 0x192064u: goto label_192064;
            case 0x192068u: goto label_192068;
            case 0x19206Cu: goto label_19206c;
            case 0x192070u: goto label_192070;
            case 0x192074u: goto label_192074;
            case 0x192078u: goto label_192078;
            case 0x19207Cu: goto label_19207c;
            case 0x192080u: goto label_192080;
            case 0x192084u: goto label_192084;
            case 0x192088u: goto label_192088;
            case 0x19208Cu: goto label_19208c;
            case 0x192090u: goto label_192090;
            case 0x192094u: goto label_192094;
            case 0x192098u: goto label_192098;
            case 0x19209Cu: goto label_19209c;
            case 0x1920A0u: goto label_1920a0;
            case 0x1920A4u: goto label_1920a4;
            case 0x1920A8u: goto label_1920a8;
            case 0x1920ACu: goto label_1920ac;
            case 0x1920B0u: goto label_1920b0;
            case 0x1920B4u: goto label_1920b4;
            case 0x1920B8u: goto label_1920b8;
            case 0x1920BCu: goto label_1920bc;
            case 0x1920C0u: goto label_1920c0;
            case 0x1920C4u: goto label_1920c4;
            case 0x1920C8u: goto label_1920c8;
            case 0x1920CCu: goto label_1920cc;
            case 0x1920D0u: goto label_1920d0;
            case 0x1920D4u: goto label_1920d4;
            case 0x1920D8u: goto label_1920d8;
            case 0x1920DCu: goto label_1920dc;
            case 0x1920E0u: goto label_1920e0;
            case 0x1920E4u: goto label_1920e4;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1920B0u; }
            if (ctx->pc != 0x1920B0u) { return; }
        }
    }
    ctx->pc = 0x1920B0u;
label_1920b0:
    // 0x1920b0: 0x8e030000
    ctx->pc = 0x1920b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1920b4:
    // 0x1920b4: 0x200202d
    ctx->pc = 0x1920b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1920b8:
    // 0x1920b8: 0x220282d
    ctx->pc = 0x1920b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1920bc:
    // 0x1920bc: 0x8c62001c
    ctx->pc = 0x1920bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1920c0:
    // 0x1920c0: 0x40f809
label_1920c4:
    if (ctx->pc == 0x1920C4u) {
        ctx->pc = 0x1920C4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1920C8u;
        goto label_1920c8;
    }
    ctx->pc = 0x1920C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1920C8u);
        ctx->pc = 0x1920C4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192060u: goto label_192060;
            case 0x192064u: goto label_192064;
            case 0x192068u: goto label_192068;
            case 0x19206Cu: goto label_19206c;
            case 0x192070u: goto label_192070;
            case 0x192074u: goto label_192074;
            case 0x192078u: goto label_192078;
            case 0x19207Cu: goto label_19207c;
            case 0x192080u: goto label_192080;
            case 0x192084u: goto label_192084;
            case 0x192088u: goto label_192088;
            case 0x19208Cu: goto label_19208c;
            case 0x192090u: goto label_192090;
            case 0x192094u: goto label_192094;
            case 0x192098u: goto label_192098;
            case 0x19209Cu: goto label_19209c;
            case 0x1920A0u: goto label_1920a0;
            case 0x1920A4u: goto label_1920a4;
            case 0x1920A8u: goto label_1920a8;
            case 0x1920ACu: goto label_1920ac;
            case 0x1920B0u: goto label_1920b0;
            case 0x1920B4u: goto label_1920b4;
            case 0x1920B8u: goto label_1920b8;
            case 0x1920BCu: goto label_1920bc;
            case 0x1920C0u: goto label_1920c0;
            case 0x1920C4u: goto label_1920c4;
            case 0x1920C8u: goto label_1920c8;
            case 0x1920CCu: goto label_1920cc;
            case 0x1920D0u: goto label_1920d0;
            case 0x1920D4u: goto label_1920d4;
            case 0x1920D8u: goto label_1920d8;
            case 0x1920DCu: goto label_1920dc;
            case 0x1920E0u: goto label_1920e0;
            case 0x1920E4u: goto label_1920e4;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1920C8u; }
            if (ctx->pc != 0x1920C8u) { return; }
        }
    }
    ctx->pc = 0x1920C8u;
label_1920c8:
    // 0x1920c8: 0x240102d
    ctx->pc = 0x1920c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1920cc:
    // 0x1920cc: 0xdfbf0040
    ctx->pc = 0x1920ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1920d0:
    // 0x1920d0: 0xdfb30030
    ctx->pc = 0x1920d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1920d4:
    // 0x1920d4: 0xdfb20020
    ctx->pc = 0x1920d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1920d8:
    // 0x1920d8: 0xdfb10010
    ctx->pc = 0x1920d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1920dc:
    // 0x1920dc: 0xdfb00000
    ctx->pc = 0x1920dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1920e0:
    // 0x1920e0: 0x3e00008
label_1920e4:
    if (ctx->pc == 0x1920E4u) {
        ctx->pc = 0x1920E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1920E8u;
        goto label_fallthrough_0x1920e0;
    }
    ctx->pc = 0x1920E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1920E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x192060u: goto label_192060;
            case 0x192064u: goto label_192064;
            case 0x192068u: goto label_192068;
            case 0x19206Cu: goto label_19206c;
            case 0x192070u: goto label_192070;
            case 0x192074u: goto label_192074;
            case 0x192078u: goto label_192078;
            case 0x19207Cu: goto label_19207c;
            case 0x192080u: goto label_192080;
            case 0x192084u: goto label_192084;
            case 0x192088u: goto label_192088;
            case 0x19208Cu: goto label_19208c;
            case 0x192090u: goto label_192090;
            case 0x192094u: goto label_192094;
            case 0x192098u: goto label_192098;
            case 0x19209Cu: goto label_19209c;
            case 0x1920A0u: goto label_1920a0;
            case 0x1920A4u: goto label_1920a4;
            case 0x1920A8u: goto label_1920a8;
            case 0x1920ACu: goto label_1920ac;
            case 0x1920B0u: goto label_1920b0;
            case 0x1920B4u: goto label_1920b4;
            case 0x1920B8u: goto label_1920b8;
            case 0x1920BCu: goto label_1920bc;
            case 0x1920C0u: goto label_1920c0;
            case 0x1920C4u: goto label_1920c4;
            case 0x1920C8u: goto label_1920c8;
            case 0x1920CCu: goto label_1920cc;
            case 0x1920D0u: goto label_1920d0;
            case 0x1920D4u: goto label_1920d4;
            case 0x1920D8u: goto label_1920d8;
            case 0x1920DCu: goto label_1920dc;
            case 0x1920E0u: goto label_1920e0;
            case 0x1920E4u: goto label_1920e4;
            default: break;
        }
        return;
    }
label_fallthrough_0x1920e0:
    ctx->pc = 0x1920E8u;
}
