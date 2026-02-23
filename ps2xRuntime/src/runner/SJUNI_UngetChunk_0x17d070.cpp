#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJUNI_UngetChunk
// Address: 0x17d070 - 0x17d1a8
void SJUNI_UngetChunk_0x17d070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJUNI_UngetChunk");


    ctx->pc = 0x17d070u;

label_17d070:
    // 0x17d070: 0x27bdffc0
    ctx->pc = 0x17d070u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
label_17d074:
    // 0x17d074: 0xffb20020
    ctx->pc = 0x17d074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_17d078:
    // 0x17d078: 0xffb10010
    ctx->pc = 0x17d078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_17d07c:
    // 0x17d07c: 0xa0902d
    ctx->pc = 0x17d07cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17d080:
    // 0x17d080: 0xffb00000
    ctx->pc = 0x17d080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17d084:
    // 0x17d084: 0xc0882d
    ctx->pc = 0x17d084u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17d088:
    // 0x17d088: 0xffbf0030
    ctx->pc = 0x17d088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_17d08c:
    // 0x17d08c: 0x2e420004
    ctx->pc = 0x17d08cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), 4));
label_17d090:
    // 0x17d090: 0x14400009
label_17d094:
    if (ctx->pc == 0x17D094u) {
        ctx->pc = 0x17D094u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17D098u;
        goto label_17d098;
    }
    ctx->pc = 0x17D090u;
    {
        const bool branch_taken_0x17d090 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17D094u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17d090) {
            ctx->pc = 0x17D0B8u;
            goto label_17d0b8;
        }
    }
    ctx->pc = 0x17D098u;
label_17d098:
    // 0x17d098: 0x8e020028
    ctx->pc = 0x17d098u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_17d09c:
    // 0x17d09c: 0x1040003d
label_17d0a0:
    if (ctx->pc == 0x17D0A0u) {
        ctx->pc = 0x17D0A0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x17D0A4u;
        goto label_17d0a4;
    }
    ctx->pc = 0x17D09Cu;
    {
        const bool branch_taken_0x17d09c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17D0A0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x17d09c) {
            ctx->pc = 0x17D194u;
            goto label_17d194;
        }
    }
    ctx->pc = 0x17D0A4u;
label_17d0a4:
    // 0x17d0a4: 0x8e04002c
    ctx->pc = 0x17d0a4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_17d0a8:
    // 0x17d0a8: 0x40f809
label_17d0ac:
    if (ctx->pc == 0x17D0ACu) {
        ctx->pc = 0x17D0ACu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x17D0B0u;
        goto label_17d0b0;
    }
    ctx->pc = 0x17D0A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17D0B0u);
        ctx->pc = 0x17D0ACu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17D070u: goto label_17d070;
            case 0x17D074u: goto label_17d074;
            case 0x17D078u: goto label_17d078;
            case 0x17D07Cu: goto label_17d07c;
            case 0x17D080u: goto label_17d080;
            case 0x17D084u: goto label_17d084;
            case 0x17D088u: goto label_17d088;
            case 0x17D08Cu: goto label_17d08c;
            case 0x17D090u: goto label_17d090;
            case 0x17D094u: goto label_17d094;
            case 0x17D098u: goto label_17d098;
            case 0x17D09Cu: goto label_17d09c;
            case 0x17D0A0u: goto label_17d0a0;
            case 0x17D0A4u: goto label_17d0a4;
            case 0x17D0A8u: goto label_17d0a8;
            case 0x17D0ACu: goto label_17d0ac;
            case 0x17D0B0u: goto label_17d0b0;
            case 0x17D0B4u: goto label_17d0b4;
            case 0x17D0B8u: goto label_17d0b8;
            case 0x17D0BCu: goto label_17d0bc;
            case 0x17D0C0u: goto label_17d0c0;
            case 0x17D0C4u: goto label_17d0c4;
            case 0x17D0C8u: goto label_17d0c8;
            case 0x17D0CCu: goto label_17d0cc;
            case 0x17D0D0u: goto label_17d0d0;
            case 0x17D0D4u: goto label_17d0d4;
            case 0x17D0D8u: goto label_17d0d8;
            case 0x17D0DCu: goto label_17d0dc;
            case 0x17D0E0u: goto label_17d0e0;
            case 0x17D0E4u: goto label_17d0e4;
            case 0x17D0E8u: goto label_17d0e8;
            case 0x17D0ECu: goto label_17d0ec;
            case 0x17D0F0u: goto label_17d0f0;
            case 0x17D0F4u: goto label_17d0f4;
            case 0x17D0F8u: goto label_17d0f8;
            case 0x17D0FCu: goto label_17d0fc;
            case 0x17D100u: goto label_17d100;
            case 0x17D104u: goto label_17d104;
            case 0x17D108u: goto label_17d108;
            case 0x17D10Cu: goto label_17d10c;
            case 0x17D110u: goto label_17d110;
            case 0x17D114u: goto label_17d114;
            case 0x17D118u: goto label_17d118;
            case 0x17D11Cu: goto label_17d11c;
            case 0x17D120u: goto label_17d120;
            case 0x17D124u: goto label_17d124;
            case 0x17D128u: goto label_17d128;
            case 0x17D12Cu: goto label_17d12c;
            case 0x17D130u: goto label_17d130;
            case 0x17D134u: goto label_17d134;
            case 0x17D138u: goto label_17d138;
            case 0x17D13Cu: goto label_17d13c;
            case 0x17D140u: goto label_17d140;
            case 0x17D144u: goto label_17d144;
            case 0x17D148u: goto label_17d148;
            case 0x17D14Cu: goto label_17d14c;
            case 0x17D150u: goto label_17d150;
            case 0x17D154u: goto label_17d154;
            case 0x17D158u: goto label_17d158;
            case 0x17D15Cu: goto label_17d15c;
            case 0x17D160u: goto label_17d160;
            case 0x17D164u: goto label_17d164;
            case 0x17D168u: goto label_17d168;
            case 0x17D16Cu: goto label_17d16c;
            case 0x17D170u: goto label_17d170;
            case 0x17D174u: goto label_17d174;
            case 0x17D178u: goto label_17d178;
            case 0x17D17Cu: goto label_17d17c;
            case 0x17D180u: goto label_17d180;
            case 0x17D184u: goto label_17d184;
            case 0x17D188u: goto label_17d188;
            case 0x17D18Cu: goto label_17d18c;
            case 0x17D190u: goto label_17d190;
            case 0x17D194u: goto label_17d194;
            case 0x17D198u: goto label_17d198;
            case 0x17D19Cu: goto label_17d19c;
            case 0x17D1A0u: goto label_17d1a0;
            case 0x17D1A4u: goto label_17d1a4;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17D0B0u; }
            if (ctx->pc != 0x17D0B0u) { return; }
        }
    }
    ctx->pc = 0x17D0B0u;
label_17d0b0:
    // 0x17d0b0: 0x10000038
label_17d0b4:
    if (ctx->pc == 0x17D0B4u) {
        ctx->pc = 0x17D0B4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x17D0B8u;
        goto label_17d0b8;
    }
    ctx->pc = 0x17D0B0u;
    {
        const bool branch_taken_0x17d0b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17D0B4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x17d0b0) {
            ctx->pc = 0x17D194u;
            goto label_17d194;
        }
    }
    ctx->pc = 0x17D0B8u;
label_17d0b8:
    // 0x17d0b8: 0x8e220004
    ctx->pc = 0x17d0b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_17d0bc:
    // 0x17d0bc: 0x18400035
label_17d0c0:
    if (ctx->pc == 0x17D0C0u) {
        ctx->pc = 0x17D0C0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x17D0C4u;
        goto label_17d0c4;
    }
    ctx->pc = 0x17D0BCu;
    {
        const bool branch_taken_0x17d0bc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x17D0C0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x17d0bc) {
            ctx->pc = 0x17D194u;
            goto label_17d194;
        }
    }
    ctx->pc = 0x17D0C4u;
label_17d0c4:
    // 0x17d0c4: 0x8e220000
    ctx->pc = 0x17d0c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17d0c8:
    // 0x17d0c8: 0x50400033
label_17d0cc:
    if (ctx->pc == 0x17D0CCu) {
        ctx->pc = 0x17D0CCu;
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x17D0D0u;
        goto label_17d0d0;
    }
    ctx->pc = 0x17D0C8u;
    {
        const bool branch_taken_0x17d0c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x17d0c8) {
            ctx->pc = 0x17D0CCu;
            SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->pc = 0x17D198u;
            goto label_17d198;
        }
    }
    ctx->pc = 0x17D0D0u;
label_17d0d0:
    // 0x17d0d0: 0xc05efbc
label_17d0d4:
    if (ctx->pc == 0x17D0D4u) {
        ctx->pc = 0x17D0D8u;
        goto label_17d0d8;
    }
    ctx->pc = 0x17D0D0u;
    SET_GPR_U32(ctx, 31, 0x17D0D8u);
    ctx->pc = 0x17BEF0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJCRS_Lock_0x17bef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17D0D8u; }
        else if (ctx->pc != 0x17D0D8u) { ctx->pc = 0x17D0D8u; }
    }
    if (ctx->pc != 0x17D0D8u) { return; }
    ctx->pc = 0x17D0D8u;
label_17d0d8:
    // 0x17d0d8: 0x122880
    ctx->pc = 0x17d0d8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 18), 2));
label_17d0dc:
    // 0x17d0dc: 0x26080018
    ctx->pc = 0x17d0dcu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 24));
label_17d0e0:
    // 0x17d0e0: 0x1051021
    ctx->pc = 0x17d0e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_17d0e4:
    // 0x17d0e4: 0x82040005
    ctx->pc = 0x17d0e4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_17d0e8:
    // 0x17d0e8: 0x24030001
    ctx->pc = 0x17d0e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_17d0ec:
    // 0x17d0ec: 0x1483000e
label_17d0f0:
    if (ctx->pc == 0x17D0F0u) {
        ctx->pc = 0x17D0F0u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x17D0F4u;
        goto label_17d0f4;
    }
    ctx->pc = 0x17D0ECu;
    {
        const bool branch_taken_0x17d0ec = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x17D0F0u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x17d0ec) {
            ctx->pc = 0x17D128u;
            goto label_17d128;
        }
    }
    ctx->pc = 0x17D0F4u;
label_17d0f4:
    // 0x17d0f4: 0x50c0000d
label_17d0f8:
    if (ctx->pc == 0x17D0F8u) {
        ctx->pc = 0x17D0F8u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x17D0FCu;
        goto label_17d0fc;
    }
    ctx->pc = 0x17D0F4u;
    {
        const bool branch_taken_0x17d0f4 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x17d0f4) {
            ctx->pc = 0x17D0F8u;
            SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->pc = 0x17D12Cu;
            goto label_17d12c;
        }
    }
    ctx->pc = 0x17D0FCu;
label_17d0fc:
    // 0x17d0fc: 0x8e240000
    ctx->pc = 0x17d0fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_17d100:
    // 0x17d100: 0x8e270004
    ctx->pc = 0x17d100u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_17d104:
    // 0x17d104: 0x8cc30008
    ctx->pc = 0x17d104u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_17d108:
    // 0x17d108: 0x871021
    ctx->pc = 0x17d108u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_17d10c:
    // 0x17d10c: 0x54430007
label_17d110:
    if (ctx->pc == 0x17D110u) {
        ctx->pc = 0x17D110u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x17D114u;
        goto label_17d114;
    }
    ctx->pc = 0x17D10Cu;
    {
        const bool branch_taken_0x17d10c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x17d10c) {
            ctx->pc = 0x17D110u;
            SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->pc = 0x17D12Cu;
            goto label_17d12c;
        }
    }
    ctx->pc = 0x17D114u;
label_17d114:
    // 0x17d114: 0x8cc2000c
    ctx->pc = 0x17d114u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_17d118:
    // 0x17d118: 0xacc40008
    ctx->pc = 0x17d118u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_17d11c:
    // 0x17d11c: 0x471021
    ctx->pc = 0x17d11cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_17d120:
    // 0x17d120: 0x10000016
label_17d124:
    if (ctx->pc == 0x17D124u) {
        ctx->pc = 0x17D124u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x17D128u;
        goto label_17d128;
    }
    ctx->pc = 0x17D120u;
    {
        const bool branch_taken_0x17d120 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17D124u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x17d120) {
            ctx->pc = 0x17D17Cu;
            goto label_17d17c;
        }
    }
    ctx->pc = 0x17D128u;
label_17d128:
    // 0x17d128: 0x8e060014
    ctx->pc = 0x17d128u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_17d12c:
    // 0x17d12c: 0x54c00009
label_17d130:
    if (ctx->pc == 0x17D130u) {
        ctx->pc = 0x17D130u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->pc = 0x17D134u;
        goto label_17d134;
    }
    ctx->pc = 0x17D12Cu;
    {
        const bool branch_taken_0x17d12c = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        if (branch_taken_0x17d12c) {
            ctx->pc = 0x17D130u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->pc = 0x17D154u;
            goto label_17d154;
        }
    }
    ctx->pc = 0x17D134u;
label_17d134:
    // 0x17d134: 0x8e020028
    ctx->pc = 0x17d134u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_17d138:
    // 0x17d138: 0x10400011
label_17d13c:
    if (ctx->pc == 0x17D13Cu) {
        ctx->pc = 0x17D13Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x17D140u;
        goto label_17d140;
    }
    ctx->pc = 0x17D138u;
    {
        const bool branch_taken_0x17d138 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17D13Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x17d138) {
            ctx->pc = 0x17D180u;
            goto label_17d180;
        }
    }
    ctx->pc = 0x17D140u;
label_17d140:
    // 0x17d140: 0x8e04002c
    ctx->pc = 0x17d140u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_17d144:
    // 0x17d144: 0x40f809
label_17d148:
    if (ctx->pc == 0x17D148u) {
        ctx->pc = 0x17D148u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x17D14Cu;
        goto label_17d14c;
    }
    ctx->pc = 0x17D144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17D14Cu);
        ctx->pc = 0x17D148u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17D070u: goto label_17d070;
            case 0x17D074u: goto label_17d074;
            case 0x17D078u: goto label_17d078;
            case 0x17D07Cu: goto label_17d07c;
            case 0x17D080u: goto label_17d080;
            case 0x17D084u: goto label_17d084;
            case 0x17D088u: goto label_17d088;
            case 0x17D08Cu: goto label_17d08c;
            case 0x17D090u: goto label_17d090;
            case 0x17D094u: goto label_17d094;
            case 0x17D098u: goto label_17d098;
            case 0x17D09Cu: goto label_17d09c;
            case 0x17D0A0u: goto label_17d0a0;
            case 0x17D0A4u: goto label_17d0a4;
            case 0x17D0A8u: goto label_17d0a8;
            case 0x17D0ACu: goto label_17d0ac;
            case 0x17D0B0u: goto label_17d0b0;
            case 0x17D0B4u: goto label_17d0b4;
            case 0x17D0B8u: goto label_17d0b8;
            case 0x17D0BCu: goto label_17d0bc;
            case 0x17D0C0u: goto label_17d0c0;
            case 0x17D0C4u: goto label_17d0c4;
            case 0x17D0C8u: goto label_17d0c8;
            case 0x17D0CCu: goto label_17d0cc;
            case 0x17D0D0u: goto label_17d0d0;
            case 0x17D0D4u: goto label_17d0d4;
            case 0x17D0D8u: goto label_17d0d8;
            case 0x17D0DCu: goto label_17d0dc;
            case 0x17D0E0u: goto label_17d0e0;
            case 0x17D0E4u: goto label_17d0e4;
            case 0x17D0E8u: goto label_17d0e8;
            case 0x17D0ECu: goto label_17d0ec;
            case 0x17D0F0u: goto label_17d0f0;
            case 0x17D0F4u: goto label_17d0f4;
            case 0x17D0F8u: goto label_17d0f8;
            case 0x17D0FCu: goto label_17d0fc;
            case 0x17D100u: goto label_17d100;
            case 0x17D104u: goto label_17d104;
            case 0x17D108u: goto label_17d108;
            case 0x17D10Cu: goto label_17d10c;
            case 0x17D110u: goto label_17d110;
            case 0x17D114u: goto label_17d114;
            case 0x17D118u: goto label_17d118;
            case 0x17D11Cu: goto label_17d11c;
            case 0x17D120u: goto label_17d120;
            case 0x17D124u: goto label_17d124;
            case 0x17D128u: goto label_17d128;
            case 0x17D12Cu: goto label_17d12c;
            case 0x17D130u: goto label_17d130;
            case 0x17D134u: goto label_17d134;
            case 0x17D138u: goto label_17d138;
            case 0x17D13Cu: goto label_17d13c;
            case 0x17D140u: goto label_17d140;
            case 0x17D144u: goto label_17d144;
            case 0x17D148u: goto label_17d148;
            case 0x17D14Cu: goto label_17d14c;
            case 0x17D150u: goto label_17d150;
            case 0x17D154u: goto label_17d154;
            case 0x17D158u: goto label_17d158;
            case 0x17D15Cu: goto label_17d15c;
            case 0x17D160u: goto label_17d160;
            case 0x17D164u: goto label_17d164;
            case 0x17D168u: goto label_17d168;
            case 0x17D16Cu: goto label_17d16c;
            case 0x17D170u: goto label_17d170;
            case 0x17D174u: goto label_17d174;
            case 0x17D178u: goto label_17d178;
            case 0x17D17Cu: goto label_17d17c;
            case 0x17D180u: goto label_17d180;
            case 0x17D184u: goto label_17d184;
            case 0x17D188u: goto label_17d188;
            case 0x17D18Cu: goto label_17d18c;
            case 0x17D190u: goto label_17d190;
            case 0x17D194u: goto label_17d194;
            case 0x17D198u: goto label_17d198;
            case 0x17D19Cu: goto label_17d19c;
            case 0x17D1A0u: goto label_17d1a0;
            case 0x17D1A4u: goto label_17d1a4;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17D14Cu; }
            if (ctx->pc != 0x17D14Cu) { return; }
        }
    }
    ctx->pc = 0x17D14Cu;
label_17d14c:
    // 0x17d14c: 0x1000000c
label_17d150:
    if (ctx->pc == 0x17D150u) {
        ctx->pc = 0x17D150u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x17D154u;
        goto label_17d154;
    }
    ctx->pc = 0x17D14Cu;
    {
        const bool branch_taken_0x17d14c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17D150u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x17d14c) {
            ctx->pc = 0x17D180u;
            goto label_17d180;
        }
    }
    ctx->pc = 0x17D154u;
label_17d154:
    // 0x17d154: 0x1051821
    ctx->pc = 0x17d154u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_17d158:
    // 0x17d158: 0xae020014
    ctx->pc = 0x17d158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_17d15c:
    // 0x17d15c: 0xacc00000
    ctx->pc = 0x17d15cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_17d160:
    // 0x17d160: 0x6a220007
    ctx->pc = 0x17d160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data << shift) & mask)); }
label_17d164:
    // 0x17d164: 0x6e220000
    ctx->pc = 0x17d164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t shift = (addr & 7) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_data = READ64(addr & ~7ULL); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & ~mask) | ((aligned_data >> shift) & mask)); }
label_17d168:
    // 0x17d168: 0xb0c2000f
    ctx->pc = 0x17d168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t shift = (7 - (addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL >> shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_17d16c:
    // 0x17d16c: 0xb4c20008
    ctx->pc = 0x17d16cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t shift = ((addr & 7)) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFULL << shift; uint64_t aligned_addr = addr & ~7ULL; uint64_t old_data = READ64(aligned_addr); uint64_t new_data = (old_data & ~mask) | ((GPR_U64(ctx, 2) << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17d170:
    // 0x17d170: 0x8c620000
    ctx->pc = 0x17d170u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17d174:
    // 0x17d174: 0xacc20000
    ctx->pc = 0x17d174u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_17d178:
    // 0x17d178: 0xac660000
    ctx->pc = 0x17d178u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_17d17c:
    // 0x17d17c: 0xdfbf0030
    ctx->pc = 0x17d17cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_17d180:
    // 0x17d180: 0xdfb20020
    ctx->pc = 0x17d180u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17d184:
    // 0x17d184: 0xdfb10010
    ctx->pc = 0x17d184u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17d188:
    // 0x17d188: 0xdfb00000
    ctx->pc = 0x17d188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17d18c:
    // 0x17d18c: 0x805efc2
label_17d190:
    if (ctx->pc == 0x17D190u) {
        ctx->pc = 0x17D190u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x17D194u;
        goto label_17d194;
    }
    ctx->pc = 0x17D18Cu;
    ctx->pc = 0x17D190u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x17BF08u;
    SJCRS_Unlock_0x17bf08(rdram, ctx, runtime); return;
    ctx->pc = 0x17D194u;
label_17d194:
    // 0x17d194: 0xdfb20020
    ctx->pc = 0x17d194u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17d198:
    // 0x17d198: 0xdfb10010
    ctx->pc = 0x17d198u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17d19c:
    // 0x17d19c: 0xdfb00000
    ctx->pc = 0x17d19cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17d1a0:
    // 0x17d1a0: 0x3e00008
label_17d1a4:
    if (ctx->pc == 0x17D1A4u) {
        ctx->pc = 0x17D1A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x17D1A8u;
        goto label_fallthrough_0x17d1a0;
    }
    ctx->pc = 0x17D1A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D1A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17D070u: goto label_17d070;
            case 0x17D074u: goto label_17d074;
            case 0x17D078u: goto label_17d078;
            case 0x17D07Cu: goto label_17d07c;
            case 0x17D080u: goto label_17d080;
            case 0x17D084u: goto label_17d084;
            case 0x17D088u: goto label_17d088;
            case 0x17D08Cu: goto label_17d08c;
            case 0x17D090u: goto label_17d090;
            case 0x17D094u: goto label_17d094;
            case 0x17D098u: goto label_17d098;
            case 0x17D09Cu: goto label_17d09c;
            case 0x17D0A0u: goto label_17d0a0;
            case 0x17D0A4u: goto label_17d0a4;
            case 0x17D0A8u: goto label_17d0a8;
            case 0x17D0ACu: goto label_17d0ac;
            case 0x17D0B0u: goto label_17d0b0;
            case 0x17D0B4u: goto label_17d0b4;
            case 0x17D0B8u: goto label_17d0b8;
            case 0x17D0BCu: goto label_17d0bc;
            case 0x17D0C0u: goto label_17d0c0;
            case 0x17D0C4u: goto label_17d0c4;
            case 0x17D0C8u: goto label_17d0c8;
            case 0x17D0CCu: goto label_17d0cc;
            case 0x17D0D0u: goto label_17d0d0;
            case 0x17D0D4u: goto label_17d0d4;
            case 0x17D0D8u: goto label_17d0d8;
            case 0x17D0DCu: goto label_17d0dc;
            case 0x17D0E0u: goto label_17d0e0;
            case 0x17D0E4u: goto label_17d0e4;
            case 0x17D0E8u: goto label_17d0e8;
            case 0x17D0ECu: goto label_17d0ec;
            case 0x17D0F0u: goto label_17d0f0;
            case 0x17D0F4u: goto label_17d0f4;
            case 0x17D0F8u: goto label_17d0f8;
            case 0x17D0FCu: goto label_17d0fc;
            case 0x17D100u: goto label_17d100;
            case 0x17D104u: goto label_17d104;
            case 0x17D108u: goto label_17d108;
            case 0x17D10Cu: goto label_17d10c;
            case 0x17D110u: goto label_17d110;
            case 0x17D114u: goto label_17d114;
            case 0x17D118u: goto label_17d118;
            case 0x17D11Cu: goto label_17d11c;
            case 0x17D120u: goto label_17d120;
            case 0x17D124u: goto label_17d124;
            case 0x17D128u: goto label_17d128;
            case 0x17D12Cu: goto label_17d12c;
            case 0x17D130u: goto label_17d130;
            case 0x17D134u: goto label_17d134;
            case 0x17D138u: goto label_17d138;
            case 0x17D13Cu: goto label_17d13c;
            case 0x17D140u: goto label_17d140;
            case 0x17D144u: goto label_17d144;
            case 0x17D148u: goto label_17d148;
            case 0x17D14Cu: goto label_17d14c;
            case 0x17D150u: goto label_17d150;
            case 0x17D154u: goto label_17d154;
            case 0x17D158u: goto label_17d158;
            case 0x17D15Cu: goto label_17d15c;
            case 0x17D160u: goto label_17d160;
            case 0x17D164u: goto label_17d164;
            case 0x17D168u: goto label_17d168;
            case 0x17D16Cu: goto label_17d16c;
            case 0x17D170u: goto label_17d170;
            case 0x17D174u: goto label_17d174;
            case 0x17D178u: goto label_17d178;
            case 0x17D17Cu: goto label_17d17c;
            case 0x17D180u: goto label_17d180;
            case 0x17D184u: goto label_17d184;
            case 0x17D188u: goto label_17d188;
            case 0x17D18Cu: goto label_17d18c;
            case 0x17D190u: goto label_17d190;
            case 0x17D194u: goto label_17d194;
            case 0x17D198u: goto label_17d198;
            case 0x17D19Cu: goto label_17d19c;
            case 0x17D1A0u: goto label_17d1a0;
            case 0x17D1A4u: goto label_17d1a4;
            default: break;
        }
        return;
    }
label_fallthrough_0x17d1a0:
    ctx->pc = 0x17D1A8u;
}
