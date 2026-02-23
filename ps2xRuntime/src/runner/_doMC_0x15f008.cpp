#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _doMC
// Address: 0x15f008 - 0x15f194
void _doMC_0x15f008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_doMC");


    ctx->pc = 0x15f008u;

label_15f008:
    // 0x15f008: 0x27bdff90
    ctx->pc = 0x15f008u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
label_15f00c:
    // 0x15f00c: 0x24020140
    ctx->pc = 0x15f00cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 320));
label_15f010:
    // 0x15f010: 0xffb40040
    ctx->pc = 0x15f010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_15f014:
    // 0x15f014: 0x80a02d
    ctx->pc = 0x15f014u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15f018:
    // 0x15f018: 0xffb50050
    ctx->pc = 0x15f018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_15f01c:
    // 0x15f01c: 0x2822818
    ctx->pc = 0x15f01cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
label_15f020:
    // 0x15f020: 0x3c150023
    ctx->pc = 0x15f020u;
    SET_GPR_U32(ctx, 21, ((uint32_t)35 << 16));
label_15f024:
    // 0x15f024: 0xffbf0060
    ctx->pc = 0x15f024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_15f028:
    // 0x15f028: 0x26a4a838
    ctx->pc = 0x15f028u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 4294944824));
label_15f02c:
    // 0x15f02c: 0xffb30030
    ctx->pc = 0x15f02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_15f030:
    // 0x15f030: 0xffb20020
    ctx->pc = 0x15f030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_15f034:
    // 0x15f034: 0xffb10010
    ctx->pc = 0x15f034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_15f038:
    // 0x15f038: 0x851021
    ctx->pc = 0x15f038u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_15f03c:
    // 0x15f03c: 0xffb00000
    ctx->pc = 0x15f03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_15f040:
    // 0x15f040: 0x8c430138
    ctx->pc = 0x15f040u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 312)));
label_15f044:
    // 0x15f044: 0x10600018
label_15f048:
    if (ctx->pc == 0x15F048u) {
        ctx->pc = 0x15F048u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 300));
        ctx->pc = 0x15F04Cu;
        goto label_15f04c;
    }
    ctx->pc = 0x15F044u;
    {
        const bool branch_taken_0x15f044 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x15F048u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 300));
        if (branch_taken_0x15f044) {
            ctx->pc = 0x15F0A8u;
            goto label_15f0a8;
        }
    }
    ctx->pc = 0x15F04Cu;
label_15f04c:
    // 0x15f04c: 0xa33021
    ctx->pc = 0x15f04cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_15f050:
    // 0x15f050: 0x8cc20000
    ctx->pc = 0x15f050u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_15f054:
    // 0x15f054: 0x18400014
label_15f058:
    if (ctx->pc == 0x15F058u) {
        ctx->pc = 0x15F058u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x15F05Cu;
        goto label_15f05c;
    }
    ctx->pc = 0x15F054u;
    {
        const bool branch_taken_0x15f054 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x15F058u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x15f054) {
            ctx->pc = 0x15F0A8u;
            goto label_15f0a8;
        }
    }
    ctx->pc = 0x15F05Cu;
label_15f05c:
    // 0x15f05c: 0x24a20048
    ctx->pc = 0x15f05cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 72));
label_15f060:
    // 0x15f060: 0x24830038
    ctx->pc = 0x15f060u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 56));
label_15f064:
    // 0x15f064: 0x448821
    ctx->pc = 0x15f064u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_15f068:
    // 0x15f068: 0xc0982d
    ctx->pc = 0x15f068u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_15f06c:
    // 0x15f06c: 0xa38021
    ctx->pc = 0x15f06cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_15f070:
    // 0x15f070: 0x8e02fff0
    ctx->pc = 0x15f070u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
label_15f074:
    // 0x15f074: 0x0
    ctx->pc = 0x15f074u;
    // NOP
label_15f078:
    // 0x15f078: 0x220202d
    ctx->pc = 0x15f078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15f07c:
    // 0x15f07c: 0x40f809
label_15f080:
    if (ctx->pc == 0x15F080u) {
        ctx->pc = 0x15F080u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x15F084u;
        goto label_15f084;
    }
    ctx->pc = 0x15F07Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15F084u);
        ctx->pc = 0x15F080u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15F008u: goto label_15f008;
            case 0x15F00Cu: goto label_15f00c;
            case 0x15F010u: goto label_15f010;
            case 0x15F014u: goto label_15f014;
            case 0x15F018u: goto label_15f018;
            case 0x15F01Cu: goto label_15f01c;
            case 0x15F020u: goto label_15f020;
            case 0x15F024u: goto label_15f024;
            case 0x15F028u: goto label_15f028;
            case 0x15F02Cu: goto label_15f02c;
            case 0x15F030u: goto label_15f030;
            case 0x15F034u: goto label_15f034;
            case 0x15F038u: goto label_15f038;
            case 0x15F03Cu: goto label_15f03c;
            case 0x15F040u: goto label_15f040;
            case 0x15F044u: goto label_15f044;
            case 0x15F048u: goto label_15f048;
            case 0x15F04Cu: goto label_15f04c;
            case 0x15F050u: goto label_15f050;
            case 0x15F054u: goto label_15f054;
            case 0x15F058u: goto label_15f058;
            case 0x15F05Cu: goto label_15f05c;
            case 0x15F060u: goto label_15f060;
            case 0x15F064u: goto label_15f064;
            case 0x15F068u: goto label_15f068;
            case 0x15F06Cu: goto label_15f06c;
            case 0x15F070u: goto label_15f070;
            case 0x15F074u: goto label_15f074;
            case 0x15F078u: goto label_15f078;
            case 0x15F07Cu: goto label_15f07c;
            case 0x15F080u: goto label_15f080;
            case 0x15F084u: goto label_15f084;
            case 0x15F088u: goto label_15f088;
            case 0x15F08Cu: goto label_15f08c;
            case 0x15F090u: goto label_15f090;
            case 0x15F094u: goto label_15f094;
            case 0x15F098u: goto label_15f098;
            case 0x15F09Cu: goto label_15f09c;
            case 0x15F0A0u: goto label_15f0a0;
            case 0x15F0A4u: goto label_15f0a4;
            case 0x15F0A8u: goto label_15f0a8;
            case 0x15F0ACu: goto label_15f0ac;
            case 0x15F0B0u: goto label_15f0b0;
            case 0x15F0B4u: goto label_15f0b4;
            case 0x15F0B8u: goto label_15f0b8;
            case 0x15F0BCu: goto label_15f0bc;
            case 0x15F0C0u: goto label_15f0c0;
            case 0x15F0C4u: goto label_15f0c4;
            case 0x15F0C8u: goto label_15f0c8;
            case 0x15F0CCu: goto label_15f0cc;
            case 0x15F0D0u: goto label_15f0d0;
            case 0x15F0D4u: goto label_15f0d4;
            case 0x15F0D8u: goto label_15f0d8;
            case 0x15F0DCu: goto label_15f0dc;
            case 0x15F0E0u: goto label_15f0e0;
            case 0x15F0E4u: goto label_15f0e4;
            case 0x15F0E8u: goto label_15f0e8;
            case 0x15F0ECu: goto label_15f0ec;
            case 0x15F0F0u: goto label_15f0f0;
            case 0x15F0F4u: goto label_15f0f4;
            case 0x15F0F8u: goto label_15f0f8;
            case 0x15F0FCu: goto label_15f0fc;
            case 0x15F100u: goto label_15f100;
            case 0x15F104u: goto label_15f104;
            case 0x15F108u: goto label_15f108;
            case 0x15F10Cu: goto label_15f10c;
            case 0x15F110u: goto label_15f110;
            case 0x15F114u: goto label_15f114;
            case 0x15F118u: goto label_15f118;
            case 0x15F11Cu: goto label_15f11c;
            case 0x15F120u: goto label_15f120;
            case 0x15F124u: goto label_15f124;
            case 0x15F128u: goto label_15f128;
            case 0x15F12Cu: goto label_15f12c;
            case 0x15F130u: goto label_15f130;
            case 0x15F134u: goto label_15f134;
            case 0x15F138u: goto label_15f138;
            case 0x15F13Cu: goto label_15f13c;
            case 0x15F140u: goto label_15f140;
            case 0x15F144u: goto label_15f144;
            case 0x15F148u: goto label_15f148;
            case 0x15F14Cu: goto label_15f14c;
            case 0x15F150u: goto label_15f150;
            case 0x15F154u: goto label_15f154;
            case 0x15F158u: goto label_15f158;
            case 0x15F15Cu: goto label_15f15c;
            case 0x15F160u: goto label_15f160;
            case 0x15F164u: goto label_15f164;
            case 0x15F168u: goto label_15f168;
            case 0x15F16Cu: goto label_15f16c;
            case 0x15F170u: goto label_15f170;
            case 0x15F174u: goto label_15f174;
            case 0x15F178u: goto label_15f178;
            case 0x15F17Cu: goto label_15f17c;
            case 0x15F180u: goto label_15f180;
            case 0x15F184u: goto label_15f184;
            case 0x15F188u: goto label_15f188;
            case 0x15F18Cu: goto label_15f18c;
            case 0x15F190u: goto label_15f190;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15F084u; }
            if (ctx->pc != 0x15F084u) { return; }
        }
    }
    ctx->pc = 0x15F084u;
label_15f084:
    // 0x15f084: 0x8e030000
    ctx->pc = 0x15f084u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15f088:
    // 0x15f088: 0x26240070
    ctx->pc = 0x15f088u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 112));
label_15f08c:
    // 0x15f08c: 0x26100004
    ctx->pc = 0x15f08cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
label_15f090:
    // 0x15f090: 0x60f809
label_15f094:
    if (ctx->pc == 0x15F094u) {
        ctx->pc = 0x15F094u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 28));
        ctx->pc = 0x15F098u;
        goto label_15f098;
    }
    ctx->pc = 0x15F090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F098u);
        ctx->pc = 0x15F094u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 28));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15F008u: goto label_15f008;
            case 0x15F00Cu: goto label_15f00c;
            case 0x15F010u: goto label_15f010;
            case 0x15F014u: goto label_15f014;
            case 0x15F018u: goto label_15f018;
            case 0x15F01Cu: goto label_15f01c;
            case 0x15F020u: goto label_15f020;
            case 0x15F024u: goto label_15f024;
            case 0x15F028u: goto label_15f028;
            case 0x15F02Cu: goto label_15f02c;
            case 0x15F030u: goto label_15f030;
            case 0x15F034u: goto label_15f034;
            case 0x15F038u: goto label_15f038;
            case 0x15F03Cu: goto label_15f03c;
            case 0x15F040u: goto label_15f040;
            case 0x15F044u: goto label_15f044;
            case 0x15F048u: goto label_15f048;
            case 0x15F04Cu: goto label_15f04c;
            case 0x15F050u: goto label_15f050;
            case 0x15F054u: goto label_15f054;
            case 0x15F058u: goto label_15f058;
            case 0x15F05Cu: goto label_15f05c;
            case 0x15F060u: goto label_15f060;
            case 0x15F064u: goto label_15f064;
            case 0x15F068u: goto label_15f068;
            case 0x15F06Cu: goto label_15f06c;
            case 0x15F070u: goto label_15f070;
            case 0x15F074u: goto label_15f074;
            case 0x15F078u: goto label_15f078;
            case 0x15F07Cu: goto label_15f07c;
            case 0x15F080u: goto label_15f080;
            case 0x15F084u: goto label_15f084;
            case 0x15F088u: goto label_15f088;
            case 0x15F08Cu: goto label_15f08c;
            case 0x15F090u: goto label_15f090;
            case 0x15F094u: goto label_15f094;
            case 0x15F098u: goto label_15f098;
            case 0x15F09Cu: goto label_15f09c;
            case 0x15F0A0u: goto label_15f0a0;
            case 0x15F0A4u: goto label_15f0a4;
            case 0x15F0A8u: goto label_15f0a8;
            case 0x15F0ACu: goto label_15f0ac;
            case 0x15F0B0u: goto label_15f0b0;
            case 0x15F0B4u: goto label_15f0b4;
            case 0x15F0B8u: goto label_15f0b8;
            case 0x15F0BCu: goto label_15f0bc;
            case 0x15F0C0u: goto label_15f0c0;
            case 0x15F0C4u: goto label_15f0c4;
            case 0x15F0C8u: goto label_15f0c8;
            case 0x15F0CCu: goto label_15f0cc;
            case 0x15F0D0u: goto label_15f0d0;
            case 0x15F0D4u: goto label_15f0d4;
            case 0x15F0D8u: goto label_15f0d8;
            case 0x15F0DCu: goto label_15f0dc;
            case 0x15F0E0u: goto label_15f0e0;
            case 0x15F0E4u: goto label_15f0e4;
            case 0x15F0E8u: goto label_15f0e8;
            case 0x15F0ECu: goto label_15f0ec;
            case 0x15F0F0u: goto label_15f0f0;
            case 0x15F0F4u: goto label_15f0f4;
            case 0x15F0F8u: goto label_15f0f8;
            case 0x15F0FCu: goto label_15f0fc;
            case 0x15F100u: goto label_15f100;
            case 0x15F104u: goto label_15f104;
            case 0x15F108u: goto label_15f108;
            case 0x15F10Cu: goto label_15f10c;
            case 0x15F110u: goto label_15f110;
            case 0x15F114u: goto label_15f114;
            case 0x15F118u: goto label_15f118;
            case 0x15F11Cu: goto label_15f11c;
            case 0x15F120u: goto label_15f120;
            case 0x15F124u: goto label_15f124;
            case 0x15F128u: goto label_15f128;
            case 0x15F12Cu: goto label_15f12c;
            case 0x15F130u: goto label_15f130;
            case 0x15F134u: goto label_15f134;
            case 0x15F138u: goto label_15f138;
            case 0x15F13Cu: goto label_15f13c;
            case 0x15F140u: goto label_15f140;
            case 0x15F144u: goto label_15f144;
            case 0x15F148u: goto label_15f148;
            case 0x15F14Cu: goto label_15f14c;
            case 0x15F150u: goto label_15f150;
            case 0x15F154u: goto label_15f154;
            case 0x15F158u: goto label_15f158;
            case 0x15F15Cu: goto label_15f15c;
            case 0x15F160u: goto label_15f160;
            case 0x15F164u: goto label_15f164;
            case 0x15F168u: goto label_15f168;
            case 0x15F16Cu: goto label_15f16c;
            case 0x15F170u: goto label_15f170;
            case 0x15F174u: goto label_15f174;
            case 0x15F178u: goto label_15f178;
            case 0x15F17Cu: goto label_15f17c;
            case 0x15F180u: goto label_15f180;
            case 0x15F184u: goto label_15f184;
            case 0x15F188u: goto label_15f188;
            case 0x15F18Cu: goto label_15f18c;
            case 0x15F190u: goto label_15f190;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15F098u; }
            if (ctx->pc != 0x15F098u) { return; }
        }
    }
    ctx->pc = 0x15F098u;
label_15f098:
    // 0x15f098: 0x8e620000
    ctx->pc = 0x15f098u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_15f09c:
    // 0x15f09c: 0x242102a
    ctx->pc = 0x15f09cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
label_15f0a0:
    // 0x15f0a0: 0x5440fff5
label_15f0a4:
    if (ctx->pc == 0x15F0A4u) {
        ctx->pc = 0x15F0A4u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
        ctx->pc = 0x15F0A8u;
        goto label_15f0a8;
    }
    ctx->pc = 0x15F0A0u;
    {
        const bool branch_taken_0x15f0a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x15f0a0) {
            ctx->pc = 0x15F0A4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
            ctx->pc = 0x15F078u;
            goto label_15f078;
        }
    }
    ctx->pc = 0x15F0A8u;
label_15f0a8:
    // 0x15f0a8: 0x24030140
    ctx->pc = 0x15f0a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 320));
label_15f0ac:
    // 0x15f0ac: 0x26a5a838
    ctx->pc = 0x15f0acu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 21), 4294944824));
label_15f0b0:
    // 0x15f0b0: 0x2832018
    ctx->pc = 0x15f0b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
label_15f0b4:
    // 0x15f0b4: 0xa41021
    ctx->pc = 0x15f0b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_15f0b8:
    // 0x15f0b8: 0x8c430130
    ctx->pc = 0x15f0b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_15f0bc:
    // 0x15f0bc: 0x10600008
label_15f0c0:
    if (ctx->pc == 0x15F0C0u) {
        ctx->pc = 0x15F0C0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 320));
        ctx->pc = 0x15F0C4u;
        goto label_15f0c4;
    }
    ctx->pc = 0x15F0BCu;
    {
        const bool branch_taken_0x15f0bc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x15F0C0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 320));
        if (branch_taken_0x15f0bc) {
            ctx->pc = 0x15F0E0u;
            goto label_15f0e0;
        }
    }
    ctx->pc = 0x15F0C4u;
label_15f0c4:
    // 0x15f0c4: 0x8c43013c
    ctx->pc = 0x15f0c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 316)));
label_15f0c8:
    // 0x15f0c8: 0x10600003
label_15f0cc:
    if (ctx->pc == 0x15F0CCu) {
        ctx->pc = 0x15F0CCu;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        ctx->pc = 0x15F0D0u;
        goto label_15f0d0;
    }
    ctx->pc = 0x15F0C8u;
    {
        const bool branch_taken_0x15f0c8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x15F0CCu;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x15f0c8) {
            ctx->pc = 0x15F0D8u;
            goto label_15f0d8;
        }
    }
    ctx->pc = 0x15F0D0u;
label_15f0d0:
    // 0x15f0d0: 0xc059112
label_15f0d4:
    if (ctx->pc == 0x15F0D4u) {
        ctx->pc = 0x15F0D4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937408));
        ctx->pc = 0x15F0D8u;
        goto label_15f0d8;
    }
    ctx->pc = 0x15F0D0u;
    SET_GPR_U32(ctx, 31, 0x15F0D8u);
    ctx->pc = 0x15F0D4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937408));
    ctx->pc = 0x164448u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x164448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F0D8u; }
        else if (ctx->pc != 0x15F0D8u) { ctx->pc = 0x15F0D8u; }
    }
    if (ctx->pc != 0x15F0D8u) { return; }
    ctx->pc = 0x15F0D8u;
label_15f0d8:
    // 0x15f0d8: 0x24030140
    ctx->pc = 0x15f0d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 320));
label_15f0dc:
    // 0x15f0dc: 0x26a5a838
    ctx->pc = 0x15f0dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 21), 4294944824));
label_15f0e0:
    // 0x15f0e0: 0x2832018
    ctx->pc = 0x15f0e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
label_15f0e4:
    // 0x15f0e4: 0xa41021
    ctx->pc = 0x15f0e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_15f0e8:
    // 0x15f0e8: 0x8c430130
    ctx->pc = 0x15f0e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_15f0ec:
    // 0x15f0ec: 0x5060000d
label_15f0f0:
    if (ctx->pc == 0x15F0F0u) {
        ctx->pc = 0x15F0F0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 316)));
        ctx->pc = 0x15F0F4u;
        goto label_15f0f4;
    }
    ctx->pc = 0x15F0ECu;
    {
        const bool branch_taken_0x15f0ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x15f0ec) {
            ctx->pc = 0x15F0F0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 316)));
            ctx->pc = 0x15F124u;
            goto label_15f124;
        }
    }
    ctx->pc = 0x15F0F4u;
label_15f0f4:
    // 0x15f0f4: 0x40182d
    ctx->pc = 0x15f0f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15f0f8:
    // 0x15f0f8: 0x8c440128
    ctx->pc = 0x15f0f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 296)));
label_15f0fc:
    // 0x15f0fc: 0x8c650004
    ctx->pc = 0x15f0fcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15f100:
    // 0x15f100: 0xdfbf0060
    ctx->pc = 0x15f100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_15f104:
    // 0x15f104: 0xdfb50050
    ctx->pc = 0x15f104u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_15f108:
    // 0x15f108: 0xdfb40040
    ctx->pc = 0x15f108u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15f10c:
    // 0x15f10c: 0xdfb30030
    ctx->pc = 0x15f10cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15f110:
    // 0x15f110: 0xdfb20020
    ctx->pc = 0x15f110u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15f114:
    // 0x15f114: 0xdfb10010
    ctx->pc = 0x15f114u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15f118:
    // 0x15f118: 0xdfb00000
    ctx->pc = 0x15f118u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15f11c:
    // 0x15f11c: 0x8057fc2
label_15f120:
    if (ctx->pc == 0x15F120u) {
        ctx->pc = 0x15F120u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x15F124u;
        goto label_15f124;
    }
    ctx->pc = 0x15F11Cu;
    ctx->pc = 0x15F120u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x15FF08u;
    _copyRefImage_0x15ff08(rdram, ctx, runtime); return;
    ctx->pc = 0x15F124u;
label_15f124:
    // 0x15f124: 0x5060000d
label_15f128:
    if (ctx->pc == 0x15F128u) {
        ctx->pc = 0x15F128u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->pc = 0x15F12Cu;
        goto label_15f12c;
    }
    ctx->pc = 0x15F124u;
    {
        const bool branch_taken_0x15f124 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x15f124) {
            ctx->pc = 0x15F128u;
            SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
            ctx->pc = 0x15F15Cu;
            goto label_15f15c;
        }
    }
    ctx->pc = 0x15F12Cu;
label_15f12c:
    // 0x15f12c: 0x3c030023
    ctx->pc = 0x15f12cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
label_15f130:
    // 0x15f130: 0x8c440128
    ctx->pc = 0x15f130u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 296)));
label_15f134:
    // 0x15f134: 0x8c65a218
    ctx->pc = 0x15f134u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4294943256)));
label_15f138:
    // 0x15f138: 0xdfbf0060
    ctx->pc = 0x15f138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_15f13c:
    // 0x15f13c: 0xdfb50050
    ctx->pc = 0x15f13cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_15f140:
    // 0x15f140: 0xdfb40040
    ctx->pc = 0x15f140u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15f144:
    // 0x15f144: 0xdfb30030
    ctx->pc = 0x15f144u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15f148:
    // 0x15f148: 0xdfb20020
    ctx->pc = 0x15f148u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15f14c:
    // 0x15f14c: 0xdfb10010
    ctx->pc = 0x15f14cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15f150:
    // 0x15f150: 0xdfb00000
    ctx->pc = 0x15f150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15f154:
    // 0x15f154: 0x8057fc2
label_15f158:
    if (ctx->pc == 0x15F158u) {
        ctx->pc = 0x15F158u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x15F15Cu;
        goto label_15f15c;
    }
    ctx->pc = 0x15F154u;
    ctx->pc = 0x15F158u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x15FF08u;
    _copyRefImage_0x15ff08(rdram, ctx, runtime); return;
    ctx->pc = 0x15F15Cu;
label_15f15c:
    // 0x15f15c: 0x3c060023
    ctx->pc = 0x15f15cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)35 << 16));
label_15f160:
    // 0x15f160: 0x40182d
    ctx->pc = 0x15f160u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15f164:
    // 0x15f164: 0x8cc5a218
    ctx->pc = 0x15f164u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 4294943256)));
label_15f168:
    // 0x15f168: 0x8c640128
    ctx->pc = 0x15f168u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 296)));
label_15f16c:
    // 0x15f16c: 0x8c460004
    ctx->pc = 0x15f16cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15f170:
    // 0x15f170: 0xdfbf0060
    ctx->pc = 0x15f170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_15f174:
    // 0x15f174: 0xdfb50050
    ctx->pc = 0x15f174u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_15f178:
    // 0x15f178: 0xdfb40040
    ctx->pc = 0x15f178u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15f17c:
    // 0x15f17c: 0xdfb30030
    ctx->pc = 0x15f17cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15f180:
    // 0x15f180: 0xdfb20020
    ctx->pc = 0x15f180u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15f184:
    // 0x15f184: 0xdfb10010
    ctx->pc = 0x15f184u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15f188:
    // 0x15f188: 0xdfb00000
    ctx->pc = 0x15f188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15f18c:
    // 0x15f18c: 0x8057faa
label_15f190:
    if (ctx->pc == 0x15F190u) {
        ctx->pc = 0x15F190u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x15F194u;
        goto label_fallthrough_0x15f18c;
    }
    ctx->pc = 0x15F18Cu;
    ctx->pc = 0x15F190u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x15FEA8u;
    _copyAddRefImage_0x15fea8(rdram, ctx, runtime); return;
label_fallthrough_0x15f18c:
    ctx->pc = 0x15F194u;
}
