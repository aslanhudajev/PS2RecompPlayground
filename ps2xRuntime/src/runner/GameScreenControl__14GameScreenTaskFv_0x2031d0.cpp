#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GameScreenControl__14GameScreenTaskFv
// Address: 0x2031d0 - 0x2032b8
void GameScreenControl__14GameScreenTaskFv_0x2031d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GameScreenControl__14GameScreenTaskFv");


    ctx->pc = 0x2031d0u;

label_2031d0:
    // 0x2031d0: 0x80830004
    ctx->pc = 0x2031d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_2031d4:
    // 0x2031d4: 0x2c610009
    ctx->pc = 0x2031d4u;
    SET_GPR_U32(ctx, 1, SLTU32(GPR_U32(ctx, 3), 9));
label_2031d8:
    // 0x2031d8: 0x10200030
label_2031dc:
    if (ctx->pc == 0x2031DCu) {
        ctx->pc = 0x2031DCu;
        SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
        ctx->pc = 0x2031E0u;
        goto label_2031e0;
    }
    ctx->pc = 0x2031D8u;
    {
        const bool branch_taken_0x2031d8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x2031DCu;
        SET_GPR_U32(ctx, 5, ((uint32_t)44 << 16));
        if (branch_taken_0x2031d8) {
            ctx->pc = 0x20329Cu;
            goto label_20329c;
        }
    }
    ctx->pc = 0x2031E0u;
label_2031e0:
    // 0x2031e0: 0x31880
    ctx->pc = 0x2031e0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_2031e4:
    // 0x2031e4: 0x24a50330
    ctx->pc = 0x2031e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 816));
label_2031e8:
    // 0x2031e8: 0x651821
    ctx->pc = 0x2031e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2031ec:
    // 0x2031ec: 0x8c630000
    ctx->pc = 0x2031ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2031f0:
    // 0x2031f0: 0x600008
label_2031f4:
    if (ctx->pc == 0x2031F4u) {
        ctx->pc = 0x2031F8u;
        goto label_2031f8;
    }
    ctx->pc = 0x2031F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2031D0u: goto label_2031d0;
            case 0x2031D4u: goto label_2031d4;
            case 0x2031D8u: goto label_2031d8;
            case 0x2031DCu: goto label_2031dc;
            case 0x2031E0u: goto label_2031e0;
            case 0x2031E4u: goto label_2031e4;
            case 0x2031E8u: goto label_2031e8;
            case 0x2031ECu: goto label_2031ec;
            case 0x2031F0u: goto label_2031f0;
            case 0x2031F4u: goto label_2031f4;
            case 0x2031F8u: goto label_2031f8;
            case 0x2031FCu: goto label_2031fc;
            case 0x203200u: goto label_203200;
            case 0x203204u: goto label_203204;
            case 0x203208u: goto label_203208;
            case 0x20320Cu: goto label_20320c;
            case 0x203210u: goto label_203210;
            case 0x203214u: goto label_203214;
            case 0x203218u: goto label_203218;
            case 0x20321Cu: goto label_20321c;
            case 0x203220u: goto label_203220;
            case 0x203224u: goto label_203224;
            case 0x203228u: goto label_203228;
            case 0x20322Cu: goto label_20322c;
            case 0x203230u: goto label_203230;
            case 0x203234u: goto label_203234;
            case 0x203238u: goto label_203238;
            case 0x20323Cu: goto label_20323c;
            case 0x203240u: goto label_203240;
            case 0x203244u: goto label_203244;
            case 0x203248u: goto label_203248;
            case 0x20324Cu: goto label_20324c;
            case 0x203250u: goto label_203250;
            case 0x203254u: goto label_203254;
            case 0x203258u: goto label_203258;
            case 0x20325Cu: goto label_20325c;
            case 0x203260u: goto label_203260;
            case 0x203264u: goto label_203264;
            case 0x203268u: goto label_203268;
            case 0x20326Cu: goto label_20326c;
            case 0x203270u: goto label_203270;
            case 0x203274u: goto label_203274;
            case 0x203278u: goto label_203278;
            case 0x20327Cu: goto label_20327c;
            case 0x203280u: goto label_203280;
            case 0x203284u: goto label_203284;
            case 0x203288u: goto label_203288;
            case 0x20328Cu: goto label_20328c;
            case 0x203290u: goto label_203290;
            case 0x203294u: goto label_203294;
            case 0x203298u: goto label_203298;
            case 0x20329Cu: goto label_20329c;
            case 0x2032A0u: goto label_2032a0;
            case 0x2032A4u: goto label_2032a4;
            case 0x2032A8u: goto label_2032a8;
            case 0x2032ACu: goto label_2032ac;
            case 0x2032B0u: goto label_2032b0;
            case 0x2032B4u: goto label_2032b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2031F8u;
label_2031f8:
    // 0x2031f8: 0x24030004
    ctx->pc = 0x2031f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
label_2031fc:
    // 0x2031fc: 0xa0830004
    ctx->pc = 0x2031fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
label_203200:
    // 0x203200: 0x24030001
    ctx->pc = 0x203200u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_203204:
    // 0x203204: 0x10000025
label_203208:
    if (ctx->pc == 0x203208u) {
        ctx->pc = 0x203208u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937448), GPR_U32(ctx, 3));
        ctx->pc = 0x20320Cu;
        goto label_20320c;
    }
    ctx->pc = 0x203204u;
    {
        const bool branch_taken_0x203204 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x203208u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937448), GPR_U32(ctx, 3));
        if (branch_taken_0x203204) {
            ctx->pc = 0x20329Cu;
            goto label_20329c;
        }
    }
    ctx->pc = 0x20320Cu;
label_20320c:
    // 0x20320c: 0x24030004
    ctx->pc = 0x20320cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
label_203210:
    // 0x203210: 0xa0830004
    ctx->pc = 0x203210u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
label_203214:
    // 0x203214: 0x10000021
label_203218:
    if (ctx->pc == 0x203218u) {
        ctx->pc = 0x203218u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937448), GPR_U32(ctx, 0));
        ctx->pc = 0x20321Cu;
        goto label_20321c;
    }
    ctx->pc = 0x203214u;
    {
        const bool branch_taken_0x203214 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x203218u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937448), GPR_U32(ctx, 0));
        if (branch_taken_0x203214) {
            ctx->pc = 0x20329Cu;
            goto label_20329c;
        }
    }
    ctx->pc = 0x20321Cu;
label_20321c:
    // 0x20321c: 0x24030002
    ctx->pc = 0x20321cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_203220:
    // 0x203220: 0xa0830004
    ctx->pc = 0x203220u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
label_203224:
    // 0x203224: 0x24030001
    ctx->pc = 0x203224u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_203228:
    // 0x203228: 0x1000001c
label_20322c:
    if (ctx->pc == 0x20322Cu) {
        ctx->pc = 0x20322Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937448), GPR_U32(ctx, 3));
        ctx->pc = 0x203230u;
        goto label_203230;
    }
    ctx->pc = 0x203228u;
    {
        const bool branch_taken_0x203228 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20322Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937448), GPR_U32(ctx, 3));
        if (branch_taken_0x203228) {
            ctx->pc = 0x20329Cu;
            goto label_20329c;
        }
    }
    ctx->pc = 0x203230u;
label_203230:
    // 0x203230: 0xaf808b68
    ctx->pc = 0x203230u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937448), GPR_U32(ctx, 0));
label_203234:
    // 0x203234: 0x8c850008
    ctx->pc = 0x203234u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_203238:
    // 0x203238: 0x24a3ffff
    ctx->pc = 0x203238u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 4294967295));
label_20323c:
    // 0x20323c: 0x1ca00017
label_203240:
    if (ctx->pc == 0x203240u) {
        ctx->pc = 0x203240u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x203244u;
        goto label_203244;
    }
    ctx->pc = 0x20323Cu;
    {
        const bool branch_taken_0x20323c = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x203240u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        if (branch_taken_0x20323c) {
            ctx->pc = 0x20329Cu;
            goto label_20329c;
        }
    }
    ctx->pc = 0x203244u;
label_203244:
    // 0x203244: 0xac800008
    ctx->pc = 0x203244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_203248:
    // 0x203248: 0x24030004
    ctx->pc = 0x203248u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
label_20324c:
    // 0x20324c: 0xa0830004
    ctx->pc = 0x20324cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
label_203250:
    // 0x203250: 0x10000012
label_203254:
    if (ctx->pc == 0x203254u) {
        ctx->pc = 0x203254u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937448), GPR_U32(ctx, 0));
        ctx->pc = 0x203258u;
        goto label_203258;
    }
    ctx->pc = 0x203250u;
    {
        const bool branch_taken_0x203250 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x203254u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937448), GPR_U32(ctx, 0));
        if (branch_taken_0x203250) {
            ctx->pc = 0x20329Cu;
            goto label_20329c;
        }
    }
    ctx->pc = 0x203258u;
label_203258:
    // 0x203258: 0x24030001
    ctx->pc = 0x203258u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_20325c:
    // 0x20325c: 0xaf838b68
    ctx->pc = 0x20325cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937448), GPR_U32(ctx, 3));
label_203260:
    // 0x203260: 0x8c850008
    ctx->pc = 0x203260u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_203264:
    // 0x203264: 0x24a30001
    ctx->pc = 0x203264u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 1));
label_203268:
    // 0x203268: 0xac830008
    ctx->pc = 0x203268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_20326c:
    // 0x20326c: 0x28a30021
    ctx->pc = 0x20326cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 33));
label_203270:
    // 0x203270: 0x1460000a
label_203274:
    if (ctx->pc == 0x203274u) {
        ctx->pc = 0x203274u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 33));
        ctx->pc = 0x203278u;
        goto label_203278;
    }
    ctx->pc = 0x203270u;
    {
        const bool branch_taken_0x203270 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x203274u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 33));
        if (branch_taken_0x203270) {
            ctx->pc = 0x20329Cu;
            goto label_20329c;
        }
    }
    ctx->pc = 0x203278u;
label_203278:
    // 0x203278: 0xac830008
    ctx->pc = 0x203278u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_20327c:
    // 0x20327c: 0x24030002
    ctx->pc = 0x20327cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_203280:
    // 0x203280: 0x10000006
label_203284:
    if (ctx->pc == 0x203284u) {
        ctx->pc = 0x203284u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x203288u;
        goto label_203288;
    }
    ctx->pc = 0x203280u;
    {
        const bool branch_taken_0x203280 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x203284u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x203280) {
            ctx->pc = 0x20329Cu;
            goto label_20329c;
        }
    }
    ctx->pc = 0x203288u;
label_203288:
    // 0x203288: 0x24030001
    ctx->pc = 0x203288u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_20328c:
    // 0x20328c: 0x10000003
label_203290:
    if (ctx->pc == 0x203290u) {
        ctx->pc = 0x203290u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937448), GPR_U32(ctx, 3));
        ctx->pc = 0x203294u;
        goto label_203294;
    }
    ctx->pc = 0x20328Cu;
    {
        const bool branch_taken_0x20328c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x203290u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937448), GPR_U32(ctx, 3));
        if (branch_taken_0x20328c) {
            ctx->pc = 0x20329Cu;
            goto label_20329c;
        }
    }
    ctx->pc = 0x203294u;
label_203294:
    // 0x203294: 0x80830005
    ctx->pc = 0x203294u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
label_203298:
    // 0x203298: 0xa0830004
    ctx->pc = 0x203298u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 3));
label_20329c:
    // 0x20329c: 0x80850004
    ctx->pc = 0x20329cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_2032a0:
    // 0x2032a0: 0x24030008
    ctx->pc = 0x2032a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
label_2032a4:
    // 0x2032a4: 0x10a30002
label_2032a8:
    if (ctx->pc == 0x2032A8u) {
        ctx->pc = 0x2032ACu;
        goto label_2032ac;
    }
    ctx->pc = 0x2032A4u;
    {
        const bool branch_taken_0x2032a4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 3));
        if (branch_taken_0x2032a4) {
            ctx->pc = 0x2032B0u;
            goto label_2032b0;
        }
    }
    ctx->pc = 0x2032ACu;
label_2032ac:
    // 0x2032ac: 0xa0850005
    ctx->pc = 0x2032acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 5));
label_2032b0:
    // 0x2032b0: 0x3e00008
label_2032b4:
    if (ctx->pc == 0x2032B4u) {
        ctx->pc = 0x2032B8u;
        goto label_fallthrough_0x2032b0;
    }
    ctx->pc = 0x2032B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2031D0u: goto label_2031d0;
            case 0x2031D4u: goto label_2031d4;
            case 0x2031D8u: goto label_2031d8;
            case 0x2031DCu: goto label_2031dc;
            case 0x2031E0u: goto label_2031e0;
            case 0x2031E4u: goto label_2031e4;
            case 0x2031E8u: goto label_2031e8;
            case 0x2031ECu: goto label_2031ec;
            case 0x2031F0u: goto label_2031f0;
            case 0x2031F4u: goto label_2031f4;
            case 0x2031F8u: goto label_2031f8;
            case 0x2031FCu: goto label_2031fc;
            case 0x203200u: goto label_203200;
            case 0x203204u: goto label_203204;
            case 0x203208u: goto label_203208;
            case 0x20320Cu: goto label_20320c;
            case 0x203210u: goto label_203210;
            case 0x203214u: goto label_203214;
            case 0x203218u: goto label_203218;
            case 0x20321Cu: goto label_20321c;
            case 0x203220u: goto label_203220;
            case 0x203224u: goto label_203224;
            case 0x203228u: goto label_203228;
            case 0x20322Cu: goto label_20322c;
            case 0x203230u: goto label_203230;
            case 0x203234u: goto label_203234;
            case 0x203238u: goto label_203238;
            case 0x20323Cu: goto label_20323c;
            case 0x203240u: goto label_203240;
            case 0x203244u: goto label_203244;
            case 0x203248u: goto label_203248;
            case 0x20324Cu: goto label_20324c;
            case 0x203250u: goto label_203250;
            case 0x203254u: goto label_203254;
            case 0x203258u: goto label_203258;
            case 0x20325Cu: goto label_20325c;
            case 0x203260u: goto label_203260;
            case 0x203264u: goto label_203264;
            case 0x203268u: goto label_203268;
            case 0x20326Cu: goto label_20326c;
            case 0x203270u: goto label_203270;
            case 0x203274u: goto label_203274;
            case 0x203278u: goto label_203278;
            case 0x20327Cu: goto label_20327c;
            case 0x203280u: goto label_203280;
            case 0x203284u: goto label_203284;
            case 0x203288u: goto label_203288;
            case 0x20328Cu: goto label_20328c;
            case 0x203290u: goto label_203290;
            case 0x203294u: goto label_203294;
            case 0x203298u: goto label_203298;
            case 0x20329Cu: goto label_20329c;
            case 0x2032A0u: goto label_2032a0;
            case 0x2032A4u: goto label_2032a4;
            case 0x2032A8u: goto label_2032a8;
            case 0x2032ACu: goto label_2032ac;
            case 0x2032B0u: goto label_2032b0;
            case 0x2032B4u: goto label_2032b4;
            default: break;
        }
        return;
    }
label_fallthrough_0x2032b0:
    ctx->pc = 0x2032B8u;
}
