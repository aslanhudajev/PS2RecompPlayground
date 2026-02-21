#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: runMenu
// Address: 0x102268 - 0x102348
void runMenu_0x102268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x102268u;

label_102268:
    // 0x102268: 0x27bdffd0
    ctx->pc = 0x102268u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_10226c:
    // 0x10226c: 0x24020004
    ctx->pc = 0x10226cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_102270:
    // 0x102270: 0xffb10010
    ctx->pc = 0x102270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_102274:
    // 0x102274: 0x3c040017
    ctx->pc = 0x102274u;
    SET_GPR_U32(ctx, 4, ((uint32_t)23 << 16));
label_102278:
    // 0x102278: 0x3c110014
    ctx->pc = 0x102278u;
    SET_GPR_U32(ctx, 17, ((uint32_t)20 << 16));
label_10227c:
    // 0x10227c: 0xffbf0020
    ctx->pc = 0x10227cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_102280:
    // 0x102280: 0xffb00000
    ctx->pc = 0x102280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_102284:
    // 0x102284: 0x24842c38
    ctx->pc = 0x102284u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 11320));
label_102288:
    // 0x102288: 0xc04ace4
label_10228c:
    if (ctx->pc == 0x10228Cu) {
        ctx->pc = 0x10228Cu;
        WRITE16(ADD32(GPR_U32(ctx, 17), 4294959040), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x102290u;
        goto label_102290;
    }
    ctx->pc = 0x102288u;
    SET_GPR_U32(ctx, 31, 0x102290u);
    ctx->pc = 0x10228Cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4294959040), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102290u; }
    }
    if (ctx->pc != 0x102290u) { return; }
    ctx->pc = 0x102290u;
label_102290:
    // 0x102290: 0x10000026
label_102294:
    if (ctx->pc == 0x102294u) {
        ctx->pc = 0x102294u;
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294959040)));
        ctx->pc = 0x102298u;
        goto label_102298;
    }
    ctx->pc = 0x102290u;
    {
        const bool branch_taken_0x102290 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x102294u;
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294959040)));
        if (branch_taken_0x102290) {
            ctx->pc = 0x10232Cu;
            goto label_10232c;
        }
    }
    ctx->pc = 0x102298u;
label_102298:
    // 0x102298: 0xc040260
label_10229c:
    if (ctx->pc == 0x10229Cu) {
        ctx->pc = 0x1022A0u;
        goto label_1022a0;
    }
    ctx->pc = 0x102298u;
    SET_GPR_U32(ctx, 31, 0x1022A0u);
    ctx->pc = 0x100980u;
    {
        const uint32_t __entryPc = ctx->pc;
        menuControl_0x100980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1022A0u; }
    }
    if (ctx->pc != 0x1022A0u) { return; }
    ctx->pc = 0x1022A0u;
label_1022a0:
    // 0x1022a0: 0x8623dfc0
    ctx->pc = 0x1022a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294959040)));
label_1022a4:
    // 0x1022a4: 0x2c620005
    ctx->pc = 0x1022a4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 5));
label_1022a8:
    // 0x1022a8: 0x1040001d
label_1022ac:
    if (ctx->pc == 0x1022ACu) {
        ctx->pc = 0x1022ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        ctx->pc = 0x1022B0u;
        goto label_1022b0;
    }
    ctx->pc = 0x1022A8u;
    {
        const bool branch_taken_0x1022a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1022ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x1022a8) {
            ctx->pc = 0x102320u;
            goto label_102320;
        }
    }
    ctx->pc = 0x1022B0u;
label_1022b0:
    // 0x1022b0: 0x31880
    ctx->pc = 0x1022b0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_1022b4:
    // 0x1022b4: 0x24422c50
    ctx->pc = 0x1022b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 11344));
label_1022b8:
    // 0x1022b8: 0x621821
    ctx->pc = 0x1022b8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1022bc:
    // 0x1022bc: 0x8c640000
    ctx->pc = 0x1022bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1022c0:
    // 0x1022c0: 0x800008
label_1022c4:
    if (ctx->pc == 0x1022C4u) {
        ctx->pc = 0x1022C8u;
        goto label_1022c8;
    }
    ctx->pc = 0x1022C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102268u: goto label_102268;
            case 0x10226Cu: goto label_10226c;
            case 0x102270u: goto label_102270;
            case 0x102274u: goto label_102274;
            case 0x102278u: goto label_102278;
            case 0x10227Cu: goto label_10227c;
            case 0x102280u: goto label_102280;
            case 0x102284u: goto label_102284;
            case 0x102288u: goto label_102288;
            case 0x10228Cu: goto label_10228c;
            case 0x102290u: goto label_102290;
            case 0x102294u: goto label_102294;
            case 0x102298u: goto label_102298;
            case 0x10229Cu: goto label_10229c;
            case 0x1022A0u: goto label_1022a0;
            case 0x1022A4u: goto label_1022a4;
            case 0x1022A8u: goto label_1022a8;
            case 0x1022ACu: goto label_1022ac;
            case 0x1022B0u: goto label_1022b0;
            case 0x1022B4u: goto label_1022b4;
            case 0x1022B8u: goto label_1022b8;
            case 0x1022BCu: goto label_1022bc;
            case 0x1022C0u: goto label_1022c0;
            case 0x1022C4u: goto label_1022c4;
            case 0x1022C8u: goto label_1022c8;
            case 0x1022CCu: goto label_1022cc;
            case 0x1022D0u: goto label_1022d0;
            case 0x1022D4u: goto label_1022d4;
            case 0x1022D8u: goto label_1022d8;
            case 0x1022DCu: goto label_1022dc;
            case 0x1022E0u: goto label_1022e0;
            case 0x1022E4u: goto label_1022e4;
            case 0x1022E8u: goto label_1022e8;
            case 0x1022ECu: goto label_1022ec;
            case 0x1022F0u: goto label_1022f0;
            case 0x1022F4u: goto label_1022f4;
            case 0x1022F8u: goto label_1022f8;
            case 0x1022FCu: goto label_1022fc;
            case 0x102300u: goto label_102300;
            case 0x102304u: goto label_102304;
            case 0x102308u: goto label_102308;
            case 0x10230Cu: goto label_10230c;
            case 0x102310u: goto label_102310;
            case 0x102314u: goto label_102314;
            case 0x102318u: goto label_102318;
            case 0x10231Cu: goto label_10231c;
            case 0x102320u: goto label_102320;
            case 0x102324u: goto label_102324;
            case 0x102328u: goto label_102328;
            case 0x10232Cu: goto label_10232c;
            case 0x102330u: goto label_102330;
            case 0x102334u: goto label_102334;
            case 0x102338u: goto label_102338;
            case 0x10233Cu: goto label_10233c;
            case 0x102340u: goto label_102340;
            case 0x102344u: goto label_102344;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1022C8u;
label_1022c8:
    // 0x1022c8: 0x8f8280b4
    ctx->pc = 0x1022c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934708)));
label_1022cc:
    // 0x1022cc: 0x1440000e
label_1022d0:
    if (ctx->pc == 0x1022D0u) {
        ctx->pc = 0x1022D0u;
        SET_GPR_U32(ctx, 16, ((uint32_t)20 << 16));
        ctx->pc = 0x1022D4u;
        goto label_1022d4;
    }
    ctx->pc = 0x1022CCu;
    {
        const bool branch_taken_0x1022cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1022D0u;
        SET_GPR_U32(ctx, 16, ((uint32_t)20 << 16));
        if (branch_taken_0x1022cc) {
            ctx->pc = 0x102308u;
            goto label_102308;
        }
    }
    ctx->pc = 0x1022D4u;
label_1022d4:
    // 0x1022d4: 0x0
    ctx->pc = 0x1022d4u;
    // NOP
label_1022d8:
    // 0x1022d8: 0xc042fd0
label_1022dc:
    if (ctx->pc == 0x1022DCu) {
        ctx->pc = 0x1022DCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1022E0u;
        goto label_1022e0;
    }
    ctx->pc = 0x1022D8u;
    SET_GPR_U32(ctx, 31, 0x1022E0u);
    ctx->pc = 0x1022DCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10BF40u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetVoiceStatus_0x10bf40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1022E0u; }
    }
    if (ctx->pc != 0x1022E0u) { return; }
    ctx->pc = 0x1022E0u;
label_1022e0:
    // 0x1022e0: 0x2603e120
    ctx->pc = 0x1022e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 4294959392));
label_1022e4:
    // 0x1022e4: 0xaf8280b0
    ctx->pc = 0x1022e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934704), GPR_U32(ctx, 2));
label_1022e8:
    // 0x1022e8: 0x8c65001c
    ctx->pc = 0x1022e8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1022ec:
    // 0x1022ec: 0x24040003
    ctx->pc = 0x1022ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
label_1022f0:
    // 0x1022f0: 0xc042ca6
label_1022f4:
    if (ctx->pc == 0x1022F4u) {
        ctx->pc = 0x1022F4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16383));
        ctx->pc = 0x1022F8u;
        goto label_1022f8;
    }
    ctx->pc = 0x1022F0u;
    SET_GPR_U32(ctx, 31, 0x1022F8u);
    ctx->pc = 0x1022F4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16383));
    ctx->pc = 0x10B298u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlaySound_0x10b298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1022F8u; }
    }
    if (ctx->pc != 0x1022F8u) { return; }
    ctx->pc = 0x1022F8u;
label_1022f8:
    // 0x1022f8: 0x8f8280b4
    ctx->pc = 0x1022f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934708)));
label_1022fc:
    // 0x1022fc: 0x24420001
    ctx->pc = 0x1022fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_102300:
    // 0x102300: 0x1040fff5
label_102304:
    if (ctx->pc == 0x102304u) {
        ctx->pc = 0x102304u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934708), GPR_U32(ctx, 2));
        ctx->pc = 0x102308u;
        goto label_102308;
    }
    ctx->pc = 0x102300u;
    {
        const bool branch_taken_0x102300 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x102304u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934708), GPR_U32(ctx, 2));
        if (branch_taken_0x102300) {
            ctx->pc = 0x1022D8u;
            goto label_1022d8;
        }
    }
    ctx->pc = 0x102308u;
label_102308:
    // 0x102308: 0xc0407e0
label_10230c:
    if (ctx->pc == 0x10230Cu) {
        ctx->pc = 0x102310u;
        goto label_102310;
    }
    ctx->pc = 0x102308u;
    SET_GPR_U32(ctx, 31, 0x102310u);
    ctx->pc = 0x101F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        updateScreen_0x101f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102310u; }
    }
    if (ctx->pc != 0x102310u) { return; }
    ctx->pc = 0x102310u;
label_102310:
    // 0x102310: 0x10000003
label_102314:
    if (ctx->pc == 0x102314u) {
        ctx->pc = 0x102318u;
        goto label_102318;
    }
    ctx->pc = 0x102310u;
    {
        const bool branch_taken_0x102310 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x102310) {
            ctx->pc = 0x102320u;
            goto label_102320;
        }
    }
    ctx->pc = 0x102318u;
label_102318:
    // 0x102318: 0xc042c86
label_10231c:
    if (ctx->pc == 0x10231Cu) {
        ctx->pc = 0x102320u;
        goto label_102320;
    }
    ctx->pc = 0x102318u;
    SET_GPR_U32(ctx, 31, 0x102320u);
    ctx->pc = 0x10B218u;
    {
        const uint32_t __entryPc = ctx->pc;
        StopAllSounds_0x10b218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102320u; }
    }
    if (ctx->pc != 0x102320u) { return; }
    ctx->pc = 0x102320u;
label_102320:
    // 0x102320: 0xc0407e0
label_102324:
    if (ctx->pc == 0x102324u) {
        ctx->pc = 0x102328u;
        goto label_102328;
    }
    ctx->pc = 0x102320u;
    SET_GPR_U32(ctx, 31, 0x102328u);
    ctx->pc = 0x101F80u;
    {
        const uint32_t __entryPc = ctx->pc;
        updateScreen_0x101f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102328u; }
    }
    if (ctx->pc != 0x102328u) { return; }
    ctx->pc = 0x102328u;
label_102328:
    // 0x102328: 0x8623dfc0
    ctx->pc = 0x102328u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4294959040)));
label_10232c:
    // 0x10232c: 0x24020002
    ctx->pc = 0x10232cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_102330:
    // 0x102330: 0x1462ffd9
label_102334:
    if (ctx->pc == 0x102334u) {
        ctx->pc = 0x102334u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x102338u;
        goto label_102338;
    }
    ctx->pc = 0x102330u;
    {
        const bool branch_taken_0x102330 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x102334u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x102330) {
            ctx->pc = 0x102298u;
            goto label_102298;
        }
    }
    ctx->pc = 0x102338u;
label_102338:
    // 0x102338: 0xdfb10010
    ctx->pc = 0x102338u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10233c:
    // 0x10233c: 0xdfb00000
    ctx->pc = 0x10233cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_102340:
    // 0x102340: 0x3e00008
label_102344:
    if (ctx->pc == 0x102344u) {
        ctx->pc = 0x102344u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x102348u;
        goto label_fallthrough_0x102340;
    }
    ctx->pc = 0x102340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102344u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102268u: goto label_102268;
            case 0x10226Cu: goto label_10226c;
            case 0x102270u: goto label_102270;
            case 0x102274u: goto label_102274;
            case 0x102278u: goto label_102278;
            case 0x10227Cu: goto label_10227c;
            case 0x102280u: goto label_102280;
            case 0x102284u: goto label_102284;
            case 0x102288u: goto label_102288;
            case 0x10228Cu: goto label_10228c;
            case 0x102290u: goto label_102290;
            case 0x102294u: goto label_102294;
            case 0x102298u: goto label_102298;
            case 0x10229Cu: goto label_10229c;
            case 0x1022A0u: goto label_1022a0;
            case 0x1022A4u: goto label_1022a4;
            case 0x1022A8u: goto label_1022a8;
            case 0x1022ACu: goto label_1022ac;
            case 0x1022B0u: goto label_1022b0;
            case 0x1022B4u: goto label_1022b4;
            case 0x1022B8u: goto label_1022b8;
            case 0x1022BCu: goto label_1022bc;
            case 0x1022C0u: goto label_1022c0;
            case 0x1022C4u: goto label_1022c4;
            case 0x1022C8u: goto label_1022c8;
            case 0x1022CCu: goto label_1022cc;
            case 0x1022D0u: goto label_1022d0;
            case 0x1022D4u: goto label_1022d4;
            case 0x1022D8u: goto label_1022d8;
            case 0x1022DCu: goto label_1022dc;
            case 0x1022E0u: goto label_1022e0;
            case 0x1022E4u: goto label_1022e4;
            case 0x1022E8u: goto label_1022e8;
            case 0x1022ECu: goto label_1022ec;
            case 0x1022F0u: goto label_1022f0;
            case 0x1022F4u: goto label_1022f4;
            case 0x1022F8u: goto label_1022f8;
            case 0x1022FCu: goto label_1022fc;
            case 0x102300u: goto label_102300;
            case 0x102304u: goto label_102304;
            case 0x102308u: goto label_102308;
            case 0x10230Cu: goto label_10230c;
            case 0x102310u: goto label_102310;
            case 0x102314u: goto label_102314;
            case 0x102318u: goto label_102318;
            case 0x10231Cu: goto label_10231c;
            case 0x102320u: goto label_102320;
            case 0x102324u: goto label_102324;
            case 0x102328u: goto label_102328;
            case 0x10232Cu: goto label_10232c;
            case 0x102330u: goto label_102330;
            case 0x102334u: goto label_102334;
            case 0x102338u: goto label_102338;
            case 0x10233Cu: goto label_10233c;
            case 0x102340u: goto label_102340;
            case 0x102344u: goto label_102344;
            default: break;
        }
        return;
    }
label_fallthrough_0x102340:
    ctx->pc = 0x102348u;
}
