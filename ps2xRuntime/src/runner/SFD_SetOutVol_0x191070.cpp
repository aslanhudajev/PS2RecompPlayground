#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_SetOutVol
// Address: 0x191070 - 0x1910e4
void SFD_SetOutVol_0x191070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_SetOutVol");


    ctx->pc = 0x191070u;

label_191070:
    // 0x191070: 0x27bdffd0
    ctx->pc = 0x191070u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_191074:
    // 0x191074: 0xffb00000
    ctx->pc = 0x191074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_191078:
    // 0x191078: 0xffb10010
    ctx->pc = 0x191078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_19107c:
    // 0x19107c: 0x80802d
    ctx->pc = 0x19107cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_191080:
    // 0x191080: 0xffbf0020
    ctx->pc = 0x191080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_191084:
    // 0x191084: 0xc064f1e
label_191088:
    if (ctx->pc == 0x191088u) {
        ctx->pc = 0x191088u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19108Cu;
        goto label_19108c;
    }
    ctx->pc = 0x191084u;
    SET_GPR_U32(ctx, 31, 0x19108Cu);
    ctx->pc = 0x191088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19108Cu; }
        else if (ctx->pc != 0x19108Cu) { ctx->pc = 0x19108Cu; }
    }
    if (ctx->pc != 0x19108Cu) { return; }
    ctx->pc = 0x19108Cu;
label_19108c:
    // 0x19108c: 0x10400009
label_191090:
    if (ctx->pc == 0x191090u) {
        ctx->pc = 0x191090u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x191094u;
        goto label_191094;
    }
    ctx->pc = 0x19108Cu;
    {
        const bool branch_taken_0x19108c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x191090u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19108c) {
            ctx->pc = 0x1910B4u;
            goto label_1910b4;
        }
    }
    ctx->pc = 0x191094u;
label_191094:
    // 0x191094: 0x3c05ff00
    ctx->pc = 0x191094u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
label_191098:
    // 0x191098: 0xdfbf0020
    ctx->pc = 0x191098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19109c:
    // 0x19109c: 0xdfb10010
    ctx->pc = 0x19109cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1910a0:
    // 0x1910a0: 0x202d
    ctx->pc = 0x1910a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1910a4:
    // 0x1910a4: 0xdfb00000
    ctx->pc = 0x1910a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1910a8:
    // 0x1910a8: 0x34a501a3
    ctx->pc = 0x1910a8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 419));
label_1910ac:
    // 0x1910ac: 0x8064ea0
label_1910b0:
    if (ctx->pc == 0x1910B0u) {
        ctx->pc = 0x1910B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1910B4u;
        goto label_1910b4;
    }
    ctx->pc = 0x1910ACu;
    ctx->pc = 0x1910B0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x193A80u;
    SFLIB_SetErr_0x193a80(rdram, ctx, runtime); return;
    ctx->pc = 0x1910B4u;
label_1910b4:
    // 0x1910b4: 0xc0674c2
label_1910b8:
    if (ctx->pc == 0x1910B8u) {
        ctx->pc = 0x1910B8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1910BCu;
        goto label_1910bc;
    }
    ctx->pc = 0x1910B4u;
    SET_GPR_U32(ctx, 31, 0x1910BCu);
    ctx->pc = 0x1910B8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 6));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1910BCu; }
        else if (ctx->pc != 0x1910BCu) { ctx->pc = 0x1910BCu; }
    }
    if (ctx->pc != 0x1910BCu) { return; }
    ctx->pc = 0x1910BCu;
label_1910bc:
    // 0x1910bc: 0x10400004
label_1910c0:
    if (ctx->pc == 0x1910C0u) {
        ctx->pc = 0x1910C0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1910C4u;
        goto label_1910c4;
    }
    ctx->pc = 0x1910BCu;
    {
        const bool branch_taken_0x1910bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1910C0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1910bc) {
            ctx->pc = 0x1910D0u;
            goto label_1910d0;
        }
    }
    ctx->pc = 0x1910C4u;
label_1910c4:
    // 0x1910c4: 0x8e0259ac
    ctx->pc = 0x1910c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 22956)));
label_1910c8:
    // 0x1910c8: 0x40f809
label_1910cc:
    if (ctx->pc == 0x1910CCu) {
        ctx->pc = 0x1910CCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1910D0u;
        goto label_1910d0;
    }
    ctx->pc = 0x1910C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1910D0u);
        ctx->pc = 0x1910CCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191070u: goto label_191070;
            case 0x191074u: goto label_191074;
            case 0x191078u: goto label_191078;
            case 0x19107Cu: goto label_19107c;
            case 0x191080u: goto label_191080;
            case 0x191084u: goto label_191084;
            case 0x191088u: goto label_191088;
            case 0x19108Cu: goto label_19108c;
            case 0x191090u: goto label_191090;
            case 0x191094u: goto label_191094;
            case 0x191098u: goto label_191098;
            case 0x19109Cu: goto label_19109c;
            case 0x1910A0u: goto label_1910a0;
            case 0x1910A4u: goto label_1910a4;
            case 0x1910A8u: goto label_1910a8;
            case 0x1910ACu: goto label_1910ac;
            case 0x1910B0u: goto label_1910b0;
            case 0x1910B4u: goto label_1910b4;
            case 0x1910B8u: goto label_1910b8;
            case 0x1910BCu: goto label_1910bc;
            case 0x1910C0u: goto label_1910c0;
            case 0x1910C4u: goto label_1910c4;
            case 0x1910C8u: goto label_1910c8;
            case 0x1910CCu: goto label_1910cc;
            case 0x1910D0u: goto label_1910d0;
            case 0x1910D4u: goto label_1910d4;
            case 0x1910D8u: goto label_1910d8;
            case 0x1910DCu: goto label_1910dc;
            case 0x1910E0u: goto label_1910e0;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1910D0u; }
            if (ctx->pc != 0x1910D0u) { return; }
        }
    }
    ctx->pc = 0x1910D0u;
label_1910d0:
    // 0x1910d0: 0xdfbf0020
    ctx->pc = 0x1910d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1910d4:
    // 0x1910d4: 0xdfb10010
    ctx->pc = 0x1910d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1910d8:
    // 0x1910d8: 0xdfb00000
    ctx->pc = 0x1910d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1910dc:
    // 0x1910dc: 0x3e00008
label_1910e0:
    if (ctx->pc == 0x1910E0u) {
        ctx->pc = 0x1910E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1910E4u;
        goto label_fallthrough_0x1910dc;
    }
    ctx->pc = 0x1910DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1910E0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191070u: goto label_191070;
            case 0x191074u: goto label_191074;
            case 0x191078u: goto label_191078;
            case 0x19107Cu: goto label_19107c;
            case 0x191080u: goto label_191080;
            case 0x191084u: goto label_191084;
            case 0x191088u: goto label_191088;
            case 0x19108Cu: goto label_19108c;
            case 0x191090u: goto label_191090;
            case 0x191094u: goto label_191094;
            case 0x191098u: goto label_191098;
            case 0x19109Cu: goto label_19109c;
            case 0x1910A0u: goto label_1910a0;
            case 0x1910A4u: goto label_1910a4;
            case 0x1910A8u: goto label_1910a8;
            case 0x1910ACu: goto label_1910ac;
            case 0x1910B0u: goto label_1910b0;
            case 0x1910B4u: goto label_1910b4;
            case 0x1910B8u: goto label_1910b8;
            case 0x1910BCu: goto label_1910bc;
            case 0x1910C0u: goto label_1910c0;
            case 0x1910C4u: goto label_1910c4;
            case 0x1910C8u: goto label_1910c8;
            case 0x1910CCu: goto label_1910cc;
            case 0x1910D0u: goto label_1910d0;
            case 0x1910D4u: goto label_1910d4;
            case 0x1910D8u: goto label_1910d8;
            case 0x1910DCu: goto label_1910dc;
            case 0x1910E0u: goto label_1910e0;
            default: break;
        }
        return;
    }
label_fallthrough_0x1910dc:
    ctx->pc = 0x1910E4u;
}
