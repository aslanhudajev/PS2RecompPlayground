#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFTIM_GetNowTime
// Address: 0x19dff0 - 0x19e080
void SFTIM_GetNowTime_0x19dff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFTIM_GetNowTime");


    ctx->pc = 0x19dff0u;

label_19dff0:
    // 0x19dff0: 0x27bdffa0
    ctx->pc = 0x19dff0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
label_19dff4:
    // 0x19dff4: 0xffb10020
    ctx->pc = 0x19dff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_19dff8:
    // 0x19dff8: 0x80882d
    ctx->pc = 0x19dff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19dffc:
    // 0x19dffc: 0xffb30040
    ctx->pc = 0x19dffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_19e000:
    // 0x19e000: 0xffb20030
    ctx->pc = 0x19e000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_19e004:
    // 0x19e004: 0xc0982d
    ctx->pc = 0x19e004u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19e008:
    // 0x19e008: 0xffb00010
    ctx->pc = 0x19e008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_19e00c:
    // 0x19e00c: 0xa0902d
    ctx->pc = 0x19e00cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19e010:
    // 0x19e010: 0xffbf0050
    ctx->pc = 0x19e010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_19e014:
    // 0x19e014: 0xc064f3a
label_19e018:
    if (ctx->pc == 0x19E018u) {
        ctx->pc = 0x19E018u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19E01Cu;
        goto label_19e01c;
    }
    ctx->pc = 0x19E014u;
    SET_GPR_U32(ctx, 31, 0x19E01Cu);
    ctx->pc = 0x19E018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_LockCs_0x193ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E01Cu; }
        else if (ctx->pc != 0x19E01Cu) { ctx->pc = 0x19E01Cu; }
    }
    if (ctx->pc != 0x19E01Cu) { return; }
    ctx->pc = 0x19E01Cu;
label_19e01c:
    // 0x19e01c: 0x26300a94
    ctx->pc = 0x19e01cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 2708));
label_19e020:
    // 0x19e020: 0x220202d
    ctx->pc = 0x19e020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e024:
    // 0x19e024: 0xc0674c2
label_19e028:
    if (ctx->pc == 0x19E028u) {
        ctx->pc = 0x19E028u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x19E02Cu;
        goto label_19e02c;
    }
    ctx->pc = 0x19E024u;
    SET_GPR_U32(ctx, 31, 0x19E02Cu);
    ctx->pc = 0x19E028u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E02Cu; }
        else if (ctx->pc != 0x19E02Cu) { ctx->pc = 0x19E02Cu; }
    }
    if (ctx->pc != 0x19E02Cu) { return; }
    ctx->pc = 0x19E02Cu;
label_19e02c:
    // 0x19e02c: 0x21080
    ctx->pc = 0x19e02cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_19e030:
    // 0x19e030: 0x2028021
    ctx->pc = 0x19e030u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_19e034:
    // 0x19e034: 0x8e020000
    ctx->pc = 0x19e034u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19e038:
    // 0x19e038: 0x14400003
label_19e03c:
    if (ctx->pc == 0x19E03Cu) {
        ctx->pc = 0x19E03Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19E040u;
        goto label_19e040;
    }
    ctx->pc = 0x19E038u;
    {
        const bool branch_taken_0x19e038 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x19E03Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19e038) {
            ctx->pc = 0x19E048u;
            goto label_19e048;
        }
    }
    ctx->pc = 0x19E040u;
label_19e040:
    // 0x19e040: 0x3c02001a
    ctx->pc = 0x19e040u;
    SET_GPR_U32(ctx, 2, ((uint32_t)26 << 16));
label_19e044:
    // 0x19e044: 0x2442e080
    ctx->pc = 0x19e044u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959232));
label_19e048:
    // 0x19e048: 0x240282d
    ctx->pc = 0x19e048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19e04c:
    // 0x19e04c: 0x40f809
label_19e050:
    if (ctx->pc == 0x19E050u) {
        ctx->pc = 0x19E050u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19E054u;
        goto label_19e054;
    }
    ctx->pc = 0x19E04Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19E054u);
        ctx->pc = 0x19E050u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19DFF0u: goto label_19dff0;
            case 0x19DFF4u: goto label_19dff4;
            case 0x19DFF8u: goto label_19dff8;
            case 0x19DFFCu: goto label_19dffc;
            case 0x19E000u: goto label_19e000;
            case 0x19E004u: goto label_19e004;
            case 0x19E008u: goto label_19e008;
            case 0x19E00Cu: goto label_19e00c;
            case 0x19E010u: goto label_19e010;
            case 0x19E014u: goto label_19e014;
            case 0x19E018u: goto label_19e018;
            case 0x19E01Cu: goto label_19e01c;
            case 0x19E020u: goto label_19e020;
            case 0x19E024u: goto label_19e024;
            case 0x19E028u: goto label_19e028;
            case 0x19E02Cu: goto label_19e02c;
            case 0x19E030u: goto label_19e030;
            case 0x19E034u: goto label_19e034;
            case 0x19E038u: goto label_19e038;
            case 0x19E03Cu: goto label_19e03c;
            case 0x19E040u: goto label_19e040;
            case 0x19E044u: goto label_19e044;
            case 0x19E048u: goto label_19e048;
            case 0x19E04Cu: goto label_19e04c;
            case 0x19E050u: goto label_19e050;
            case 0x19E054u: goto label_19e054;
            case 0x19E058u: goto label_19e058;
            case 0x19E05Cu: goto label_19e05c;
            case 0x19E060u: goto label_19e060;
            case 0x19E064u: goto label_19e064;
            case 0x19E068u: goto label_19e068;
            case 0x19E06Cu: goto label_19e06c;
            case 0x19E070u: goto label_19e070;
            case 0x19E074u: goto label_19e074;
            case 0x19E078u: goto label_19e078;
            case 0x19E07Cu: goto label_19e07c;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19E054u; }
            if (ctx->pc != 0x19E054u) { return; }
        }
    }
    ctx->pc = 0x19E054u;
label_19e054:
    // 0x19e054: 0x40802d
    ctx->pc = 0x19e054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e058:
    // 0x19e058: 0xc064f44
label_19e05c:
    if (ctx->pc == 0x19E05Cu) {
        ctx->pc = 0x19E05Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x19E060u;
        goto label_19e060;
    }
    ctx->pc = 0x19E058u;
    SET_GPR_U32(ctx, 31, 0x19E060u);
    ctx->pc = 0x19E05Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_UnlockCs_0x193d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E060u; }
        else if (ctx->pc != 0x19E060u) { ctx->pc = 0x19E060u; }
    }
    if (ctx->pc != 0x19E060u) { return; }
    ctx->pc = 0x19E060u;
label_19e060:
    // 0x19e060: 0x200102d
    ctx->pc = 0x19e060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e064:
    // 0x19e064: 0xdfbf0050
    ctx->pc = 0x19e064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_19e068:
    // 0x19e068: 0xdfb30040
    ctx->pc = 0x19e068u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19e06c:
    // 0x19e06c: 0xdfb20030
    ctx->pc = 0x19e06cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19e070:
    // 0x19e070: 0xdfb10020
    ctx->pc = 0x19e070u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19e074:
    // 0x19e074: 0xdfb00010
    ctx->pc = 0x19e074u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19e078:
    // 0x19e078: 0x3e00008
label_19e07c:
    if (ctx->pc == 0x19E07Cu) {
        ctx->pc = 0x19E07Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x19E080u;
        goto label_fallthrough_0x19e078;
    }
    ctx->pc = 0x19E078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E07Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19DFF0u: goto label_19dff0;
            case 0x19DFF4u: goto label_19dff4;
            case 0x19DFF8u: goto label_19dff8;
            case 0x19DFFCu: goto label_19dffc;
            case 0x19E000u: goto label_19e000;
            case 0x19E004u: goto label_19e004;
            case 0x19E008u: goto label_19e008;
            case 0x19E00Cu: goto label_19e00c;
            case 0x19E010u: goto label_19e010;
            case 0x19E014u: goto label_19e014;
            case 0x19E018u: goto label_19e018;
            case 0x19E01Cu: goto label_19e01c;
            case 0x19E020u: goto label_19e020;
            case 0x19E024u: goto label_19e024;
            case 0x19E028u: goto label_19e028;
            case 0x19E02Cu: goto label_19e02c;
            case 0x19E030u: goto label_19e030;
            case 0x19E034u: goto label_19e034;
            case 0x19E038u: goto label_19e038;
            case 0x19E03Cu: goto label_19e03c;
            case 0x19E040u: goto label_19e040;
            case 0x19E044u: goto label_19e044;
            case 0x19E048u: goto label_19e048;
            case 0x19E04Cu: goto label_19e04c;
            case 0x19E050u: goto label_19e050;
            case 0x19E054u: goto label_19e054;
            case 0x19E058u: goto label_19e058;
            case 0x19E05Cu: goto label_19e05c;
            case 0x19E060u: goto label_19e060;
            case 0x19E064u: goto label_19e064;
            case 0x19E068u: goto label_19e068;
            case 0x19E06Cu: goto label_19e06c;
            case 0x19E070u: goto label_19e070;
            case 0x19E074u: goto label_19e074;
            case 0x19E078u: goto label_19e078;
            case 0x19E07Cu: goto label_19e07c;
            default: break;
        }
        return;
    }
label_fallthrough_0x19e078:
    ctx->pc = 0x19E080u;
}
