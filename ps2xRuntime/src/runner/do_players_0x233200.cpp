#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_players
// Address: 0x233200 - 0x23447c
void do_players_0x233200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x233200u;

label_233200:
    // 0x233200: 0x27bdfef0
    ctx->pc = 0x233200u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967024));
label_233204:
    // 0x233204: 0xffbf00e0
    ctx->pc = 0x233204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
label_233208:
    // 0x233208: 0xffbe00d0
    ctx->pc = 0x233208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
label_23320c:
    // 0x23320c: 0xffb700c0
    ctx->pc = 0x23320cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
label_233210:
    // 0x233210: 0xffb600b0
    ctx->pc = 0x233210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
label_233214:
    // 0x233214: 0xffb500a0
    ctx->pc = 0x233214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
label_233218:
    // 0x233218: 0xffb40090
    ctx->pc = 0x233218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_23321c:
    // 0x23321c: 0xffb30080
    ctx->pc = 0x23321cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
label_233220:
    // 0x233220: 0xffb20070
    ctx->pc = 0x233220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_233224:
    // 0x233224: 0xffb10060
    ctx->pc = 0x233224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
label_233228:
    // 0x233228: 0xffb00050
    ctx->pc = 0x233228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_23322c:
    // 0x23322c: 0xe7b60100
    ctx->pc = 0x23322cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_233230:
    // 0x233230: 0xe7b500f8
    ctx->pc = 0x233230u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_233234:
    // 0x233234: 0xe7b400f0
    ctx->pc = 0x233234u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_233238:
    // 0x233238: 0xb02d
    ctx->pc = 0x233238u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23323c:
    // 0x23323c: 0x3c020032
    ctx->pc = 0x23323cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_233240:
    // 0x233240: 0x8c4207b4
    ctx->pc = 0x233240u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1972)));
label_233244:
    // 0x233244: 0x2a02b
    ctx->pc = 0x233244u;
    SET_GPR_U32(ctx, 20, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_233248:
    // 0x233248: 0x3c01461c
    ctx->pc = 0x233248u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17948 << 16));
label_23324c:
    // 0x23324c: 0x34213c00
    ctx->pc = 0x23324cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 15360));
label_233250:
    // 0x233250: 0x4481b000
    ctx->pc = 0x233250u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 1);
label_233254:
    // 0x233254: 0x3c020031
    ctx->pc = 0x233254u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_233258:
    // 0x233258: 0xdc420e28
    ctx->pc = 0x233258u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
label_23325c:
    // 0x23325c: 0x30420010
    ctx->pc = 0x23325cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
label_233260:
    // 0x233260: 0x10400003
label_233264:
    if (ctx->pc == 0x233264u) {
        ctx->pc = 0x233264u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x233268u;
        goto label_233268;
    }
    ctx->pc = 0x233260u;
    {
        const bool branch_taken_0x233260 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x233264u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x233260) {
            ctx->pc = 0x233270u;
            goto label_233270;
        }
    }
    ctx->pc = 0x233268u;
label_233268:
    // 0x233268: 0x3c020032
    ctx->pc = 0x233268u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_23326c:
    // 0x23326c: 0xac571330
    ctx->pc = 0x23326cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4912), GPR_U32(ctx, 23));
label_233270:
    // 0x233270: 0x3c020031
    ctx->pc = 0x233270u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_233274:
    // 0x233274: 0x8c430018
    ctx->pc = 0x233274u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_233278:
    // 0x233278: 0x24024010
    ctx->pc = 0x233278u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16400));
label_23327c:
    // 0x23327c: 0x1462007b
label_233280:
    if (ctx->pc == 0x233280u) {
        ctx->pc = 0x233280u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x233284u;
        goto label_233284;
    }
    ctx->pc = 0x23327Cu;
    {
        const bool branch_taken_0x23327c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x233280u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x23327c) {
            ctx->pc = 0x23346Cu;
            goto label_23346c;
        }
    }
    ctx->pc = 0x233284u;
label_233284:
    // 0x233284: 0x3c020032
    ctx->pc = 0x233284u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_233288:
    // 0x233288: 0x8c421330
    ctx->pc = 0x233288u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4912)));
label_23328c:
    // 0x23328c: 0x4400076
label_233290:
    if (ctx->pc == 0x233290u) {
        ctx->pc = 0x233290u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x233294u;
        goto label_233294;
    }
    ctx->pc = 0x23328Cu;
    {
        const bool branch_taken_0x23328c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x233290u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x23328c) {
            ctx->pc = 0x233468u;
            goto label_233468;
        }
    }
    ctx->pc = 0x233294u;
label_233294:
    // 0x233294: 0x8c420808
    ctx->pc = 0x233294u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2056)));
label_233298:
    // 0x233298: 0x14400005
label_23329c:
    if (ctx->pc == 0x23329Cu) {
        ctx->pc = 0x23329Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x2332A0u;
        goto label_2332a0;
    }
    ctx->pc = 0x233298u;
    {
        const bool branch_taken_0x233298 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23329Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x233298) {
            ctx->pc = 0x2332B0u;
            goto label_2332b0;
        }
    }
    ctx->pc = 0x2332A0u;
label_2332a0:
    // 0x2332a0: 0x3c020032
    ctx->pc = 0x2332a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2332a4:
    // 0x2332a4: 0x8c42080c
    ctx->pc = 0x2332a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
label_2332a8:
    // 0x2332a8: 0x10400003
label_2332ac:
    if (ctx->pc == 0x2332ACu) {
        ctx->pc = 0x2332ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x2332B0u;
        goto label_2332b0;
    }
    ctx->pc = 0x2332A8u;
    {
        const bool branch_taken_0x2332a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2332ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2332a8) {
            ctx->pc = 0x2332B8u;
            goto label_2332b8;
        }
    }
    ctx->pc = 0x2332B0u;
label_2332b0:
    // 0x2332b0: 0x1000006d
label_2332b4:
    if (ctx->pc == 0x2332B4u) {
        ctx->pc = 0x2332B4u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 7084), GPR_U32(ctx, 0));
        ctx->pc = 0x2332B8u;
        goto label_2332b8;
    }
    ctx->pc = 0x2332B0u;
    {
        const bool branch_taken_0x2332b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2332B4u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 7084), GPR_U32(ctx, 0));
        if (branch_taken_0x2332b0) {
            ctx->pc = 0x233468u;
            goto label_233468;
        }
    }
    ctx->pc = 0x2332B8u;
label_2332b8:
    // 0x2332b8: 0x3c040032
    ctx->pc = 0x2332b8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)50 << 16));
label_2332bc:
    // 0x2332bc: 0x3c030031
    ctx->pc = 0x2332bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_2332c0:
    // 0x2332c0: 0x8c821bac
    ctx->pc = 0x2332c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 7084)));
label_2332c4:
    // 0x2332c4: 0x8c63ffbc
    ctx->pc = 0x2332c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
label_2332c8:
    // 0x2332c8: 0x431021
    ctx->pc = 0x2332c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2332cc:
    // 0x2332cc: 0x18400066
label_2332d0:
    if (ctx->pc == 0x2332D0u) {
        ctx->pc = 0x2332D0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 7084), GPR_U32(ctx, 2));
        ctx->pc = 0x2332D4u;
        goto label_2332d4;
    }
    ctx->pc = 0x2332CCu;
    {
        const bool branch_taken_0x2332cc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2332D0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 7084), GPR_U32(ctx, 2));
        if (branch_taken_0x2332cc) {
            ctx->pc = 0x233468u;
            goto label_233468;
        }
    }
    ctx->pc = 0x2332D4u;
label_2332d4:
    // 0x2332d4: 0x3c020031
    ctx->pc = 0x2332d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2332d8:
    // 0x2332d8: 0x8c42f184
    ctx->pc = 0x2332d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294963588)));
label_2332dc:
    // 0x2332dc: 0x10400031
label_2332e0:
    if (ctx->pc == 0x2332E0u) {
        ctx->pc = 0x2332E0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x2332E4u;
        goto label_2332e4;
    }
    ctx->pc = 0x2332DCu;
    {
        const bool branch_taken_0x2332dc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2332E0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2332dc) {
            ctx->pc = 0x2333A4u;
            goto label_2333a4;
        }
    }
    ctx->pc = 0x2332E4u;
label_2332e4:
    // 0x2332e4: 0x8c43e7f0
    ctx->pc = 0x2332e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
label_2332e8:
    // 0x2332e8: 0x2402000d
    ctx->pc = 0x2332e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
label_2332ec:
    // 0x2332ec: 0x14620018
label_2332f0:
    if (ctx->pc == 0x2332F0u) {
        ctx->pc = 0x2332F0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x2332F4u;
        goto label_2332f4;
    }
    ctx->pc = 0x2332ECu;
    {
        const bool branch_taken_0x2332ec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2332F0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x2332ec) {
            ctx->pc = 0x233350u;
            goto label_233350;
        }
    }
    ctx->pc = 0x2332F4u;
label_2332f4:
    // 0x2332f4: 0x3c020034
    ctx->pc = 0x2332f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2332f8:
    // 0x2332f8: 0x8c43fa8c
    ctx->pc = 0x2332f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294965900)));
label_2332fc:
    // 0x2332fc: 0x24020001
    ctx->pc = 0x2332fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_233300:
    // 0x233300: 0x1462005a
label_233304:
    if (ctx->pc == 0x233304u) {
        ctx->pc = 0x233304u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x233308u;
        goto label_233308;
    }
    ctx->pc = 0x233300u;
    {
        const bool branch_taken_0x233300 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x233304u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x233300) {
            ctx->pc = 0x23346Cu;
            goto label_23346c;
        }
    }
    ctx->pc = 0x233308u;
label_233308:
    // 0x233308: 0x3c100032
    ctx->pc = 0x233308u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
label_23330c:
    // 0x23330c: 0x8e021330
    ctx->pc = 0x23330cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4912)));
label_233310:
    // 0x233310: 0x30420001
    ctx->pc = 0x233310u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_233314:
    // 0x233314: 0x14400055
label_233318:
    if (ctx->pc == 0x233318u) {
        ctx->pc = 0x233318u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x23331Cu;
        goto label_23331c;
    }
    ctx->pc = 0x233314u;
    {
        const bool branch_taken_0x233314 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x233318u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x233314) {
            ctx->pc = 0x23346Cu;
            goto label_23346c;
        }
    }
    ctx->pc = 0x23331Cu;
label_23331c:
    // 0x23331c: 0x202d
    ctx->pc = 0x23331cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233320:
    // 0x233320: 0x3c05003a
    ctx->pc = 0x233320u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
label_233324:
    // 0x233324: 0xc080726
label_233328:
    if (ctx->pc == 0x233328u) {
        ctx->pc = 0x233328u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30704));
        ctx->pc = 0x23332Cu;
        goto label_23332c;
    }
    ctx->pc = 0x233324u;
    SET_GPR_U32(ctx, 31, 0x23332Cu);
    ctx->pc = 0x233328u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30704));
    ctx->pc = 0x201C98u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindScrollMessage_0x201c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23332Cu; }
    }
    if (ctx->pc != 0x23332Cu) { return; }
    ctx->pc = 0x23332Cu;
label_23332c:
    // 0x23332c: 0x2404ffff
    ctx->pc = 0x23332cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_233330:
    // 0x233330: 0x40282d
    ctx->pc = 0x233330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233334:
    // 0x233334: 0x302d
    ctx->pc = 0x233334u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233338:
    // 0x233338: 0xc08a0b4
label_23333c:
    if (ctx->pc == 0x23333Cu) {
        ctx->pc = 0x23333Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x233340u;
        goto label_233340;
    }
    ctx->pc = 0x233338u;
    SET_GPR_U32(ctx, 31, 0x233340u);
    ctx->pc = 0x23333Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2282D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScrollMessageBox_0x2282d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233340u; }
    }
    if (ctx->pc != 0x233340u) { return; }
    ctx->pc = 0x233340u;
label_233340:
    // 0x233340: 0x8e021330
    ctx->pc = 0x233340u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4912)));
label_233344:
    // 0x233344: 0x34420001
    ctx->pc = 0x233344u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
label_233348:
    // 0x233348: 0x10000047
label_23334c:
    if (ctx->pc == 0x23334Cu) {
        ctx->pc = 0x23334Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4912), GPR_U32(ctx, 2));
        ctx->pc = 0x233350u;
        goto label_233350;
    }
    ctx->pc = 0x233348u;
    {
        const bool branch_taken_0x233348 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23334Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4912), GPR_U32(ctx, 2));
        if (branch_taken_0x233348) {
            ctx->pc = 0x233468u;
            goto label_233468;
        }
    }
    ctx->pc = 0x233350u;
label_233350:
    // 0x233350: 0x8c43e7f0
    ctx->pc = 0x233350u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
label_233354:
    // 0x233354: 0x2402000c
    ctx->pc = 0x233354u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
label_233358:
    // 0x233358: 0x10620043
label_23335c:
    if (ctx->pc == 0x23335Cu) {
        ctx->pc = 0x23335Cu;
        SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
        ctx->pc = 0x233360u;
        goto label_233360;
    }
    ctx->pc = 0x233358u;
    {
        const bool branch_taken_0x233358 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23335Cu;
        SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
        if (branch_taken_0x233358) {
            ctx->pc = 0x233468u;
            goto label_233468;
        }
    }
    ctx->pc = 0x233360u;
label_233360:
    // 0x233360: 0x8e021330
    ctx->pc = 0x233360u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4912)));
label_233364:
    // 0x233364: 0x30420002
    ctx->pc = 0x233364u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
label_233368:
    // 0x233368: 0x1040003f
label_23336c:
    if (ctx->pc == 0x23336Cu) {
        ctx->pc = 0x23336Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233370u;
        goto label_233370;
    }
    ctx->pc = 0x233368u;
    {
        const bool branch_taken_0x233368 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23336Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x233368) {
            ctx->pc = 0x233468u;
            goto label_233468;
        }
    }
    ctx->pc = 0x233370u;
label_233370:
    // 0x233370: 0x3c05003a
    ctx->pc = 0x233370u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
label_233374:
    // 0x233374: 0xc080726
label_233378:
    if (ctx->pc == 0x233378u) {
        ctx->pc = 0x233378u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30720));
        ctx->pc = 0x23337Cu;
        goto label_23337c;
    }
    ctx->pc = 0x233374u;
    SET_GPR_U32(ctx, 31, 0x23337Cu);
    ctx->pc = 0x233378u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30720));
    ctx->pc = 0x201C98u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindScrollMessage_0x201c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23337Cu; }
    }
    if (ctx->pc != 0x23337Cu) { return; }
    ctx->pc = 0x23337Cu;
label_23337c:
    // 0x23337c: 0x2404ffff
    ctx->pc = 0x23337cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_233380:
    // 0x233380: 0x40282d
    ctx->pc = 0x233380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233384:
    // 0x233384: 0x302d
    ctx->pc = 0x233384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233388:
    // 0x233388: 0xc08a0b4
label_23338c:
    if (ctx->pc == 0x23338Cu) {
        ctx->pc = 0x23338Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x233390u;
        goto label_233390;
    }
    ctx->pc = 0x233388u;
    SET_GPR_U32(ctx, 31, 0x233390u);
    ctx->pc = 0x23338Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2282D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScrollMessageBox_0x2282d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233390u; }
    }
    if (ctx->pc != 0x233390u) { return; }
    ctx->pc = 0x233390u;
label_233390:
    // 0x233390: 0x8e021330
    ctx->pc = 0x233390u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4912)));
label_233394:
    // 0x233394: 0x2403fffd
    ctx->pc = 0x233394u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967293));
label_233398:
    // 0x233398: 0x431024
    ctx->pc = 0x233398u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23339c:
    // 0x23339c: 0x10000032
label_2333a0:
    if (ctx->pc == 0x2333A0u) {
        ctx->pc = 0x2333A0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4912), GPR_U32(ctx, 2));
        ctx->pc = 0x2333A4u;
        goto label_2333a4;
    }
    ctx->pc = 0x23339Cu;
    {
        const bool branch_taken_0x23339c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2333A0u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 4912), GPR_U32(ctx, 2));
        if (branch_taken_0x23339c) {
            ctx->pc = 0x233468u;
            goto label_233468;
        }
    }
    ctx->pc = 0x2333A4u;
label_2333a4:
    // 0x2333a4: 0x8c43e7f0
    ctx->pc = 0x2333a4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
label_2333a8:
    // 0x2333a8: 0x2402000d
    ctx->pc = 0x2333a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
label_2333ac:
    // 0x2333ac: 0x1462002c
label_2333b0:
    if (ctx->pc == 0x2333B0u) {
        ctx->pc = 0x2333B0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        ctx->pc = 0x2333B4u;
        goto label_2333b4;
    }
    ctx->pc = 0x2333ACu;
    {
        const bool branch_taken_0x2333ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2333B0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x2333ac) {
            ctx->pc = 0x233460u;
            goto label_233460;
        }
    }
    ctx->pc = 0x2333B4u;
label_2333b4:
    // 0x2333b4: 0x3c020034
    ctx->pc = 0x2333b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_2333b8:
    // 0x2333b8: 0x8c42fbb8
    ctx->pc = 0x2333b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294966200)));
label_2333bc:
    // 0x2333bc: 0x10400014
label_2333c0:
    if (ctx->pc == 0x2333C0u) {
        ctx->pc = 0x2333C0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2333C4u;
        goto label_2333c4;
    }
    ctx->pc = 0x2333BCu;
    {
        const bool branch_taken_0x2333bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2333C0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2333bc) {
            ctx->pc = 0x233410u;
            goto label_233410;
        }
    }
    ctx->pc = 0x2333C4u;
label_2333c4:
    // 0x2333c4: 0x3c05003a
    ctx->pc = 0x2333c4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
label_2333c8:
    // 0x2333c8: 0xc080726
label_2333cc:
    if (ctx->pc == 0x2333CCu) {
        ctx->pc = 0x2333CCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30736));
        ctx->pc = 0x2333D0u;
        goto label_2333d0;
    }
    ctx->pc = 0x2333C8u;
    SET_GPR_U32(ctx, 31, 0x2333D0u);
    ctx->pc = 0x2333CCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30736));
    ctx->pc = 0x201C98u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindScrollMessage_0x201c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2333D0u; }
    }
    if (ctx->pc != 0x2333D0u) { return; }
    ctx->pc = 0x2333D0u;
label_2333d0:
    // 0x2333d0: 0x2404ffff
    ctx->pc = 0x2333d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2333d4:
    // 0x2333d4: 0x40282d
    ctx->pc = 0x2333d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2333d8:
    // 0x2333d8: 0x2406ffff
    ctx->pc = 0x2333d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2333dc:
    // 0x2333dc: 0xc08a0b4
label_2333e0:
    if (ctx->pc == 0x2333E0u) {
        ctx->pc = 0x2333E0u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2333E4u;
        goto label_2333e4;
    }
    ctx->pc = 0x2333DCu;
    SET_GPR_U32(ctx, 31, 0x2333E4u);
    ctx->pc = 0x2333E0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2282D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScrollMessageBox_0x2282d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2333E4u; }
    }
    if (ctx->pc != 0x2333E4u) { return; }
    ctx->pc = 0x2333E4u;
label_2333e4:
    // 0x2333e4: 0x3c030034
    ctx->pc = 0x2333e4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_2333e8:
    // 0x2333e8: 0x24020006
    ctx->pc = 0x2333e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
label_2333ec:
    // 0x2333ec: 0xac62fc88
    ctx->pc = 0x2333ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966408), GPR_U32(ctx, 2));
label_2333f0:
    // 0x2333f0: 0x3c030034
    ctx->pc = 0x2333f0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_2333f4:
    // 0x2333f4: 0x24020001
    ctx->pc = 0x2333f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2333f8:
    // 0x2333f8: 0xac62fbac
    ctx->pc = 0x2333f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966188), GPR_U32(ctx, 2));
label_2333fc:
    // 0x2333fc: 0x3c030034
    ctx->pc = 0x2333fcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_233400:
    // 0x233400: 0x3c020031
    ctx->pc = 0x233400u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_233404:
    // 0x233404: 0xc440ffa4
    ctx->pc = 0x233404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_233408:
    // 0x233408: 0xc0941e2
label_23340c:
    if (ctx->pc == 0x23340Cu) {
        ctx->pc = 0x23340Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294966196), bits); }
        ctx->pc = 0x233410u;
        goto label_233410;
    }
    ctx->pc = 0x233408u;
    SET_GPR_U32(ctx, 31, 0x233410u);
    ctx->pc = 0x23340Cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294966196), bits); }
    ctx->pc = 0x250788u;
    {
        const uint32_t __entryPc = ctx->pc;
        CrystalCamActivate_0x250788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233410u; }
    }
    if (ctx->pc != 0x233410u) { return; }
    ctx->pc = 0x233410u;
label_233410:
    // 0x233410: 0x3c020034
    ctx->pc = 0x233410u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_233414:
    // 0x233414: 0x8c43e808
    ctx->pc = 0x233414u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961160)));
label_233418:
    // 0x233418: 0x24020006
    ctx->pc = 0x233418u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
label_23341c:
    // 0x23341c: 0x14620010
label_233420:
    if (ctx->pc == 0x233420u) {
        ctx->pc = 0x233420u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        ctx->pc = 0x233424u;
        goto label_233424;
    }
    ctx->pc = 0x23341Cu;
    {
        const bool branch_taken_0x23341c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x233420u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x23341c) {
            ctx->pc = 0x233460u;
            goto label_233460;
        }
    }
    ctx->pc = 0x233424u;
label_233424:
    // 0x233424: 0x3c020034
    ctx->pc = 0x233424u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_233428:
    // 0x233428: 0x8c43e80c
    ctx->pc = 0x233428u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961164)));
label_23342c:
    // 0x23342c: 0x24020001
    ctx->pc = 0x23342cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_233430:
    // 0x233430: 0x1462000b
label_233434:
    if (ctx->pc == 0x233434u) {
        ctx->pc = 0x233434u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        ctx->pc = 0x233438u;
        goto label_233438;
    }
    ctx->pc = 0x233430u;
    {
        const bool branch_taken_0x233430 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x233434u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x233430) {
            ctx->pc = 0x233460u;
            goto label_233460;
        }
    }
    ctx->pc = 0x233438u;
label_233438:
    // 0x233438: 0x202d
    ctx->pc = 0x233438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23343c:
    // 0x23343c: 0x3c05003a
    ctx->pc = 0x23343cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
label_233440:
    // 0x233440: 0xc080726
label_233444:
    if (ctx->pc == 0x233444u) {
        ctx->pc = 0x233444u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30752));
        ctx->pc = 0x233448u;
        goto label_233448;
    }
    ctx->pc = 0x233440u;
    SET_GPR_U32(ctx, 31, 0x233448u);
    ctx->pc = 0x233444u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 30752));
    ctx->pc = 0x201C98u;
    {
        const uint32_t __entryPc = ctx->pc;
        FindScrollMessage_0x201c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233448u; }
    }
    if (ctx->pc != 0x233448u) { return; }
    ctx->pc = 0x233448u;
label_233448:
    // 0x233448: 0x2404ffff
    ctx->pc = 0x233448u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_23344c:
    // 0x23344c: 0x40282d
    ctx->pc = 0x23344cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233450:
    // 0x233450: 0x2406ffff
    ctx->pc = 0x233450u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
label_233454:
    // 0x233454: 0xc08a0b4
label_233458:
    if (ctx->pc == 0x233458u) {
        ctx->pc = 0x233458u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x23345Cu;
        goto label_23345c;
    }
    ctx->pc = 0x233454u;
    SET_GPR_U32(ctx, 31, 0x23345Cu);
    ctx->pc = 0x233458u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2282D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScrollMessageBox_0x2282d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23345Cu; }
    }
    if (ctx->pc != 0x23345Cu) { return; }
    ctx->pc = 0x23345Cu;
label_23345c:
    // 0x23345c: 0x3c030032
    ctx->pc = 0x23345cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_233460:
    // 0x233460: 0x2402ffff
    ctx->pc = 0x233460u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_233464:
    // 0x233464: 0xac621330
    ctx->pc = 0x233464u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4912), GPR_U32(ctx, 2));
label_233468:
    // 0x233468: 0x3c020031
    ctx->pc = 0x233468u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_23346c:
    // 0x23346c: 0x8c430018
    ctx->pc = 0x23346cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_233470:
    // 0x233470: 0x24024012
    ctx->pc = 0x233470u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16402));
label_233474:
    // 0x233474: 0x106200fd
label_233478:
    if (ctx->pc == 0x233478u) {
        ctx->pc = 0x233478u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16397));
        ctx->pc = 0x23347Cu;
        goto label_23347c;
    }
    ctx->pc = 0x233474u;
    {
        const bool branch_taken_0x233474 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x233478u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16397));
        if (branch_taken_0x233474) {
            ctx->pc = 0x23386Cu;
            goto label_23386c;
        }
    }
    ctx->pc = 0x23347Cu;
label_23347c:
    // 0x23347c: 0x106200fb
label_233480:
    if (ctx->pc == 0x233480u) {
        ctx->pc = 0x233480u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16399));
        ctx->pc = 0x233484u;
        goto label_233484;
    }
    ctx->pc = 0x23347Cu;
    {
        const bool branch_taken_0x23347c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x233480u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16399));
        if (branch_taken_0x23347c) {
            ctx->pc = 0x23386Cu;
            goto label_23386c;
        }
    }
    ctx->pc = 0x233484u;
label_233484:
    // 0x233484: 0x106200f9
label_233488:
    if (ctx->pc == 0x233488u) {
        ctx->pc = 0x233488u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16406));
        ctx->pc = 0x23348Cu;
        goto label_23348c;
    }
    ctx->pc = 0x233484u;
    {
        const bool branch_taken_0x233484 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x233488u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16406));
        if (branch_taken_0x233484) {
            ctx->pc = 0x23386Cu;
            goto label_23386c;
        }
    }
    ctx->pc = 0x23348Cu;
label_23348c:
    // 0x23348c: 0x106200f8
label_233490:
    if (ctx->pc == 0x233490u) {
        ctx->pc = 0x233490u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233494u;
        goto label_233494;
    }
    ctx->pc = 0x23348Cu;
    {
        const bool branch_taken_0x23348c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x233490u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23348c) {
            ctx->pc = 0x233870u;
            goto label_233870;
        }
    }
    ctx->pc = 0x233494u;
label_233494:
    // 0x233494: 0xc0a3bae
label_233498:
    if (ctx->pc == 0x233498u) {
        ctx->pc = 0x23349Cu;
        goto label_23349c;
    }
    ctx->pc = 0x233494u;
    SET_GPR_U32(ctx, 31, 0x23349Cu);
    ctx->pc = 0x28EEB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoHelp_0x28eeb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23349Cu; }
    }
    if (ctx->pc != 0x23349Cu) { return; }
    ctx->pc = 0x23349Cu;
label_23349c:
    // 0x23349c: 0x3c020032
    ctx->pc = 0x23349cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2334a0:
    // 0x2334a0: 0x24511bc0
    ctx->pc = 0x2334a0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 7104));
label_2334a4:
    // 0x2334a4: 0x4480a000
    ctx->pc = 0x2334a4u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
label_2334a8:
    // 0x2334a8: 0x8e2200fc
    ctx->pc = 0x2334a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 252)));
label_2334ac:
    // 0x2334ac: 0x5040001f
label_2334b0:
    if (ctx->pc == 0x2334B0u) {
        ctx->pc = 0x2334B0u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x2334B4u;
        goto label_2334b4;
    }
    ctx->pc = 0x2334ACu;
    {
        const bool branch_taken_0x2334ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2334ac) {
            ctx->pc = 0x2334B0u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x23352Cu;
            goto label_23352c;
        }
    }
    ctx->pc = 0x2334B4u;
label_2334b4:
    // 0x2334b4: 0xc08cbd0
label_2334b8:
    if (ctx->pc == 0x2334B8u) {
        ctx->pc = 0x2334B8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2334BCu;
        goto label_2334bc;
    }
    ctx->pc = 0x2334B4u;
    SET_GPR_U32(ctx, 31, 0x2334BCu);
    ctx->pc = 0x2334B8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x232F40u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerSelecting_0x232f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2334BCu; }
    }
    if (ctx->pc != 0x2334BCu) { return; }
    ctx->pc = 0x2334BCu;
label_2334bc:
    // 0x2334bc: 0x5440001b
label_2334c0:
    if (ctx->pc == 0x2334C0u) {
        ctx->pc = 0x2334C0u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x2334C4u;
        goto label_2334c4;
    }
    ctx->pc = 0x2334BCu;
    {
        const bool branch_taken_0x2334bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2334bc) {
            ctx->pc = 0x2334C0u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x23352Cu;
            goto label_23352c;
        }
    }
    ctx->pc = 0x2334C4u;
label_2334c4:
    // 0x2334c4: 0x26300020
    ctx->pc = 0x2334c4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 32));
label_2334c8:
    // 0x2334c8: 0x200202d
    ctx->pc = 0x2334c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2334cc:
    // 0x2334cc: 0x2625081c
    ctx->pc = 0x2334ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 2076));
label_2334d0:
    // 0x2334d0: 0xc080d02
label_2334d4:
    if (ctx->pc == 0x2334D4u) {
        ctx->pc = 0x2334D4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 2064));
        ctx->pc = 0x2334D8u;
        goto label_2334d8;
    }
    ctx->pc = 0x2334D0u;
    SET_GPR_U32(ctx, 31, 0x2334D8u);
    ctx->pc = 0x2334D4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 2064));
    ctx->pc = 0x203408u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetObjWorldMat_0x203408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2334D8u; }
    }
    if (ctx->pc != 0x2334D8u) { return; }
    ctx->pc = 0x2334D8u;
label_2334d8:
    // 0x2334d8: 0x8e240090
    ctx->pc = 0x2334d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_2334dc:
    // 0x2334dc: 0x50800013
label_2334e0:
    if (ctx->pc == 0x2334E0u) {
        ctx->pc = 0x2334E0u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x2334E4u;
        goto label_2334e4;
    }
    ctx->pc = 0x2334DCu;
    {
        const bool branch_taken_0x2334dc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2334dc) {
            ctx->pc = 0x2334E0u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x23352Cu;
            goto label_23352c;
        }
    }
    ctx->pc = 0x2334E4u;
label_2334e4:
    // 0x2334e4: 0x8c840000
    ctx->pc = 0x2334e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2334e8:
    // 0x2334e8: 0x1080000f
label_2334ec:
    if (ctx->pc == 0x2334ECu) {
        ctx->pc = 0x2334ECu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 48));
        ctx->pc = 0x2334F0u;
        goto label_2334f0;
    }
    ctx->pc = 0x2334E8u;
    {
        const bool branch_taken_0x2334e8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2334ECu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 48));
        if (branch_taken_0x2334e8) {
            ctx->pc = 0x233528u;
            goto label_233528;
        }
    }
    ctx->pc = 0x2334F0u;
label_2334f0:
    // 0x2334f0: 0x262500e4
    ctx->pc = 0x2334f0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 228));
label_2334f4:
    // 0x2334f4: 0xc0b57a2
label_2334f8:
    if (ctx->pc == 0x2334F8u) {
        ctx->pc = 0x2334F8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2334FCu;
        goto label_2334fc;
    }
    ctx->pc = 0x2334F4u;
    SET_GPR_U32(ctx, 31, 0x2334FCu);
    ctx->pc = 0x2334F8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldVector_0x2d5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2334FCu; }
    }
    if (ctx->pc != 0x2334FCu) { return; }
    ctx->pc = 0x2334FCu;
label_2334fc:
    // 0x2334fc: 0xc6200050
    ctx->pc = 0x2334fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_233500:
    // 0x233500: 0xc62100e4
    ctx->pc = 0x233500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_233504:
    // 0x233504: 0x46010000
    ctx->pc = 0x233504u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_233508:
    // 0x233508: 0xe62000e4
    ctx->pc = 0x233508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 228), bits); }
label_23350c:
    // 0x23350c: 0xc6200054
    ctx->pc = 0x23350cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_233510:
    // 0x233510: 0x46140000
    ctx->pc = 0x233510u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_233514:
    // 0x233514: 0xe62000e8
    ctx->pc = 0x233514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 232), bits); }
label_233518:
    // 0x233518: 0xc6200058
    ctx->pc = 0x233518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23351c:
    // 0x23351c: 0xc62100ec
    ctx->pc = 0x23351cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_233520:
    // 0x233520: 0x46010000
    ctx->pc = 0x233520u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_233524:
    // 0x233524: 0xe62000ec
    ctx->pc = 0x233524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 236), bits); }
label_233528:
    // 0x233528: 0x26730001
    ctx->pc = 0x233528u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_23352c:
    // 0x23352c: 0x2a620004
    ctx->pc = 0x23352cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 4));
label_233530:
    // 0x233530: 0x1440ffdd
label_233534:
    if (ctx->pc == 0x233534u) {
        ctx->pc = 0x233534u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 11008));
        ctx->pc = 0x233538u;
        goto label_233538;
    }
    ctx->pc = 0x233530u;
    {
        const bool branch_taken_0x233530 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x233534u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 11008));
        if (branch_taken_0x233530) {
            ctx->pc = 0x2334A8u;
            goto label_2334a8;
        }
    }
    ctx->pc = 0x233538u;
label_233538:
    // 0x233538: 0x3c020031
    ctx->pc = 0x233538u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_23353c:
    // 0x23353c: 0x3c030031
    ctx->pc = 0x23353cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_233540:
    // 0x233540: 0x8c42ff9c
    ctx->pc = 0x233540u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
label_233544:
    // 0x233544: 0x8c630024
    ctx->pc = 0x233544u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_233548:
    // 0x233548: 0x431025
    ctx->pc = 0x233548u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_23354c:
    // 0x23354c: 0x10400005
label_233550:
    if (ctx->pc == 0x233550u) {
        ctx->pc = 0x233550u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        ctx->pc = 0x233554u;
        goto label_233554;
    }
    ctx->pc = 0x23354Cu;
    {
        const bool branch_taken_0x23354c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x233550u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x23354c) {
            ctx->pc = 0x233564u;
            goto label_233564;
        }
    }
    ctx->pc = 0x233554u;
label_233554:
    // 0x233554: 0xc08da4e
label_233558:
    if (ctx->pc == 0x233558u) {
        ctx->pc = 0x233558u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x23355Cu;
        goto label_23355c;
    }
    ctx->pc = 0x233554u;
    SET_GPR_U32(ctx, 31, 0x23355Cu);
    ctx->pc = 0x233558u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x236938u;
    {
        const uint32_t __entryPc = ctx->pc;
        WritePlayerInfo_0x236938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23355Cu; }
    }
    if (ctx->pc != 0x23355Cu) { return; }
    ctx->pc = 0x23355Cu;
label_23355c:
    // 0x23355c: 0x100003b8
label_233560:
    if (ctx->pc == 0x233560u) {
        ctx->pc = 0x233560u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233564u;
        goto label_233564;
    }
    ctx->pc = 0x23355Cu;
    {
        const bool branch_taken_0x23355c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x233560u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23355c) {
            ctx->pc = 0x234440u;
            goto label_234440;
        }
    }
    ctx->pc = 0x233564u;
label_233564:
    // 0x233564: 0x8c43dbac
    ctx->pc = 0x233564u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294957996)));
label_233568:
    // 0x233568: 0x24020001
    ctx->pc = 0x233568u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_23356c:
    // 0x23356c: 0x14620012
label_233570:
    if (ctx->pc == 0x233570u) {
        ctx->pc = 0x233570u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x233574u;
        goto label_233574;
    }
    ctx->pc = 0x23356Cu;
    {
        const bool branch_taken_0x23356c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x233570u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x23356c) {
            ctx->pc = 0x2335B8u;
            goto label_2335b8;
        }
    }
    ctx->pc = 0x233574u;
label_233574:
    // 0x233574: 0xc08da4e
label_233578:
    if (ctx->pc == 0x233578u) {
        ctx->pc = 0x233578u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x23357Cu;
        goto label_23357c;
    }
    ctx->pc = 0x233574u;
    SET_GPR_U32(ctx, 31, 0x23357Cu);
    ctx->pc = 0x233578u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x236938u;
    {
        const uint32_t __entryPc = ctx->pc;
        WritePlayerInfo_0x236938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23357Cu; }
    }
    if (ctx->pc != 0x23357Cu) { return; }
    ctx->pc = 0x23357Cu;
label_23357c:
    // 0x23357c: 0x982d
    ctx->pc = 0x23357cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233580:
    // 0x233580: 0x3c020032
    ctx->pc = 0x233580u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_233584:
    // 0x233584: 0x24511bc0
    ctx->pc = 0x233584u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 7104));
label_233588:
    // 0x233588: 0x3c020031
    ctx->pc = 0x233588u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_23358c:
    // 0x23358c: 0xc441ffa8
    ctx->pc = 0x23358cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_233590:
    // 0x233590: 0xc62000b4
    ctx->pc = 0x233590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_233594:
    // 0x233594: 0x46010000
    ctx->pc = 0x233594u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_233598:
    // 0x233598: 0xe62000b4
    ctx->pc = 0x233598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 180), bits); }
label_23359c:
    // 0x23359c: 0x26730001
    ctx->pc = 0x23359cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_2335a0:
    // 0x2335a0: 0x26312b00
    ctx->pc = 0x2335a0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 11008));
label_2335a4:
    // 0x2335a4: 0x2a620004
    ctx->pc = 0x2335a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 4));
label_2335a8:
    // 0x2335a8: 0x1440fff9
label_2335ac:
    if (ctx->pc == 0x2335ACu) {
        ctx->pc = 0x2335B0u;
        goto label_2335b0;
    }
    ctx->pc = 0x2335A8u;
    {
        const bool branch_taken_0x2335a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2335a8) {
            ctx->pc = 0x233590u;
            goto label_233590;
        }
    }
    ctx->pc = 0x2335B0u;
label_2335b0:
    // 0x2335b0: 0x100003a3
label_2335b4:
    if (ctx->pc == 0x2335B4u) {
        ctx->pc = 0x2335B4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2335B8u;
        goto label_2335b8;
    }
    ctx->pc = 0x2335B0u;
    {
        const bool branch_taken_0x2335b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2335B4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2335b0) {
            ctx->pc = 0x234440u;
            goto label_234440;
        }
    }
    ctx->pc = 0x2335B8u;
label_2335b8:
    // 0x2335b8: 0x8c430018
    ctx->pc = 0x2335b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2335bc:
    // 0x2335bc: 0x24024010
    ctx->pc = 0x2335bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16400));
label_2335c0:
    // 0x2335c0: 0x14620004
label_2335c4:
    if (ctx->pc == 0x2335C4u) {
        ctx->pc = 0x2335C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x2335C8u;
        goto label_2335c8;
    }
    ctx->pc = 0x2335C0u;
    {
        const bool branch_taken_0x2335c0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2335C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2335c0) {
            ctx->pc = 0x2335D4u;
            goto label_2335d4;
        }
    }
    ctx->pc = 0x2335C8u;
label_2335c8:
    // 0x2335c8: 0xc09d738
label_2335cc:
    if (ctx->pc == 0x2335CCu) {
        ctx->pc = 0x2335CCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2335D0u;
        goto label_2335d0;
    }
    ctx->pc = 0x2335C8u;
    SET_GPR_U32(ctx, 31, 0x2335D0u);
    ctx->pc = 0x2335CCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x275CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        TowerCheckMessages_0x275ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2335D0u; }
    }
    if (ctx->pc != 0x2335D0u) { return; }
    ctx->pc = 0x2335D0u;
label_2335d0:
    // 0x2335d0: 0x3c020032
    ctx->pc = 0x2335d0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2335d4:
    // 0x2335d4: 0x8c420808
    ctx->pc = 0x2335d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2056)));
label_2335d8:
    // 0x2335d8: 0x10400028
label_2335dc:
    if (ctx->pc == 0x2335DCu) {
        ctx->pc = 0x2335DCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x2335E0u;
        goto label_2335e0;
    }
    ctx->pc = 0x2335D8u;
    {
        const bool branch_taken_0x2335d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2335DCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2335d8) {
            ctx->pc = 0x23367Cu;
            goto label_23367c;
        }
    }
    ctx->pc = 0x2335E0u;
label_2335e0:
    // 0x2335e0: 0x8c42080c
    ctx->pc = 0x2335e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
label_2335e4:
    // 0x2335e4: 0x1040001c
label_2335e8:
    if (ctx->pc == 0x2335E8u) {
        ctx->pc = 0x2335E8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x2335ECu;
        goto label_2335ec;
    }
    ctx->pc = 0x2335E4u;
    {
        const bool branch_taken_0x2335e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2335E8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2335e4) {
            ctx->pc = 0x233658u;
            goto label_233658;
        }
    }
    ctx->pc = 0x2335ECu;
label_2335ec:
    // 0x2335ec: 0x982d
    ctx->pc = 0x2335ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2335f0:
    // 0x2335f0: 0x24511bc0
    ctx->pc = 0x2335f0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 7104));
label_2335f4:
    // 0x2335f4: 0x24150001
    ctx->pc = 0x2335f4u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
label_2335f8:
    // 0x2335f8: 0x3c120031
    ctx->pc = 0x2335f8u;
    SET_GPR_U32(ctx, 18, ((uint32_t)49 << 16));
label_2335fc:
    // 0x2335fc: 0x24104010
    ctx->pc = 0x2335fcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 16400));
label_233600:
    // 0x233600: 0x8e2208f4
    ctx->pc = 0x233600u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 2292)));
label_233604:
    // 0x233604: 0x10400002
label_233608:
    if (ctx->pc == 0x233608u) {
        ctx->pc = 0x233608u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x23360Cu;
        goto label_23360c;
    }
    ctx->pc = 0x233604u;
    {
        const bool branch_taken_0x233604 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x233608u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x233604) {
            ctx->pc = 0x233610u;
            goto label_233610;
        }
    }
    ctx->pc = 0x23360Cu;
label_23360c:
    // 0x23360c: 0xae2208f4
    ctx->pc = 0x23360cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2292), GPR_U32(ctx, 2));
label_233610:
    // 0x233610: 0x8e2300fc
    ctx->pc = 0x233610u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 252)));
label_233614:
    // 0x233614: 0x54750009
label_233618:
    if (ctx->pc == 0x233618u) {
        ctx->pc = 0x233618u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 484), GPR_U32(ctx, 0));
        ctx->pc = 0x23361Cu;
        goto label_23361c;
    }
    ctx->pc = 0x233614u;
    {
        const bool branch_taken_0x233614 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 21));
        if (branch_taken_0x233614) {
            ctx->pc = 0x233618u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 484), GPR_U32(ctx, 0));
            ctx->pc = 0x23363Cu;
            goto label_23363c;
        }
    }
    ctx->pc = 0x23361Cu;
label_23361c:
    // 0x23361c: 0x8e220090
    ctx->pc = 0x23361cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 144)));
label_233620:
    // 0x233620: 0x10400005
label_233624:
    if (ctx->pc == 0x233624u) {
        ctx->pc = 0x233624u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->pc = 0x233628u;
        goto label_233628;
    }
    ctx->pc = 0x233620u;
    {
        const bool branch_taken_0x233620 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x233624u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 24)));
        if (branch_taken_0x233620) {
            ctx->pc = 0x233638u;
            goto label_233638;
        }
    }
    ctx->pc = 0x233628u;
label_233628:
    // 0x233628: 0x50500001
label_23362c:
    if (ctx->pc == 0x23362Cu) {
        ctx->pc = 0x23362Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 10948), GPR_U32(ctx, 3));
        ctx->pc = 0x233630u;
        goto label_233630;
    }
    ctx->pc = 0x233628u;
    {
        const bool branch_taken_0x233628 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 16));
        if (branch_taken_0x233628) {
            ctx->pc = 0x23362Cu;
            WRITE32(ADD32(GPR_U32(ctx, 17), 10948), GPR_U32(ctx, 3));
            ctx->pc = 0x233630u;
            goto label_233630;
        }
    }
    ctx->pc = 0x233630u;
label_233630:
    // 0x233630: 0xc09dea0
label_233634:
    if (ctx->pc == 0x233634u) {
        ctx->pc = 0x233634u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233638u;
        goto label_233638;
    }
    ctx->pc = 0x233630u;
    SET_GPR_U32(ctx, 31, 0x233638u);
    ctx->pc = 0x233634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x277A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoPlayerAction_0x277a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233638u; }
    }
    if (ctx->pc != 0x233638u) { return; }
    ctx->pc = 0x233638u;
label_233638:
    // 0x233638: 0xae2001e4
    ctx->pc = 0x233638u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 484), GPR_U32(ctx, 0));
label_23363c:
    // 0x23363c: 0x220202d
    ctx->pc = 0x23363cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_233640:
    // 0x233640: 0xc08ac14
label_233644:
    if (ctx->pc == 0x233644u) {
        ctx->pc = 0x233644u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233648u;
        goto label_233648;
    }
    ctx->pc = 0x233640u;
    SET_GPR_U32(ctx, 31, 0x233648u);
    ctx->pc = 0x233644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22B050u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdatePlayerWorldMat_0x22b050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233648u; }
    }
    if (ctx->pc != 0x233648u) { return; }
    ctx->pc = 0x233648u;
label_233648:
    // 0x233648: 0x26730001
    ctx->pc = 0x233648u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_23364c:
    // 0x23364c: 0x2a620004
    ctx->pc = 0x23364cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 4));
label_233650:
    // 0x233650: 0x1440ffeb
label_233654:
    if (ctx->pc == 0x233654u) {
        ctx->pc = 0x233654u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 11008));
        ctx->pc = 0x233658u;
        goto label_233658;
    }
    ctx->pc = 0x233650u;
    {
        const bool branch_taken_0x233650 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x233654u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 11008));
        if (branch_taken_0x233650) {
            ctx->pc = 0x233600u;
            goto label_233600;
        }
    }
    ctx->pc = 0x233658u;
label_233658:
    // 0x233658: 0xc08da4e
label_23365c:
    if (ctx->pc == 0x23365Cu) {
        ctx->pc = 0x23365Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x233660u;
        goto label_233660;
    }
    ctx->pc = 0x233658u;
    SET_GPR_U32(ctx, 31, 0x233660u);
    ctx->pc = 0x23365Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x236938u;
    {
        const uint32_t __entryPc = ctx->pc;
        WritePlayerInfo_0x236938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233660u; }
    }
    if (ctx->pc != 0x233660u) { return; }
    ctx->pc = 0x233660u;
label_233660:
    // 0x233660: 0x3c020032
    ctx->pc = 0x233660u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_233664:
    // 0x233664: 0x8c4207bc
    ctx->pc = 0x233664u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1980)));
label_233668:
    // 0x233668: 0x14400005
label_23366c:
    if (ctx->pc == 0x23366Cu) {
        ctx->pc = 0x23366Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x233670u;
        goto label_233670;
    }
    ctx->pc = 0x233668u;
    {
        const bool branch_taken_0x233668 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23366Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x233668) {
            ctx->pc = 0x233680u;
            goto label_233680;
        }
    }
    ctx->pc = 0x233670u;
label_233670:
    // 0x233670: 0x3c020032
    ctx->pc = 0x233670u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_233674:
    // 0x233674: 0x8c42f454
    ctx->pc = 0x233674u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294964308)));
label_233678:
    // 0x233678: 0x2a00a
    ctx->pc = 0x233678u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 0));
label_23367c:
    // 0x23367c: 0x3c020032
    ctx->pc = 0x23367cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_233680:
    // 0x233680: 0x8c42080c
    ctx->pc = 0x233680u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
label_233684:
    // 0x233684: 0x10400008
label_233688:
    if (ctx->pc == 0x233688u) {
        ctx->pc = 0x233688u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x23368Cu;
        goto label_23368c;
    }
    ctx->pc = 0x233684u;
    {
        const bool branch_taken_0x233684 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x233688u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x233684) {
            ctx->pc = 0x2336A8u;
            goto label_2336a8;
        }
    }
    ctx->pc = 0x23368Cu;
label_23368c:
    // 0x23368c: 0x8c4207bc
    ctx->pc = 0x23368cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1980)));
label_233690:
    // 0x233690: 0x14400006
label_233694:
    if (ctx->pc == 0x233694u) {
        ctx->pc = 0x233694u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x233698u;
        goto label_233698;
    }
    ctx->pc = 0x233690u;
    {
        const bool branch_taken_0x233690 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x233694u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x233690) {
            ctx->pc = 0x2336ACu;
            goto label_2336ac;
        }
    }
    ctx->pc = 0x233698u;
label_233698:
    // 0x233698: 0x3c020032
    ctx->pc = 0x233698u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_23369c:
    // 0x23369c: 0x8c42f454
    ctx->pc = 0x23369cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294964308)));
label_2336a0:
    // 0x2336a0: 0x10400073
label_2336a4:
    if (ctx->pc == 0x2336A4u) {
        ctx->pc = 0x2336A4u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2336A8u;
        goto label_2336a8;
    }
    ctx->pc = 0x2336A0u;
    {
        const bool branch_taken_0x2336a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2336A4u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2336a0) {
            ctx->pc = 0x233870u;
            goto label_233870;
        }
    }
    ctx->pc = 0x2336A8u;
label_2336a8:
    // 0x2336a8: 0x3c020032
    ctx->pc = 0x2336a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2336ac:
    // 0x2336ac: 0xac4007d4
    ctx->pc = 0x2336acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2004), GPR_U32(ctx, 0));
label_2336b0:
    // 0x2336b0: 0x982d
    ctx->pc = 0x2336b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2336b4:
    // 0x2336b4: 0x3c020032
    ctx->pc = 0x2336b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2336b8:
    // 0x2336b8: 0x24511bc0
    ctx->pc = 0x2336b8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 7104));
label_2336bc:
    // 0x2336bc: 0x3c013f00
    ctx->pc = 0x2336bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
label_2336c0:
    // 0x2336c0: 0x4481a800
    ctx->pc = 0x2336c0u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
label_2336c4:
    // 0x2336c4: 0x24100001
    ctx->pc = 0x2336c4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_2336c8:
    // 0x2336c8: 0x3c020031
    ctx->pc = 0x2336c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2336cc:
    // 0x2336cc: 0x24551b94
    ctx->pc = 0x2336ccu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 7060));
label_2336d0:
    // 0x2336d0: 0x3c120032
    ctx->pc = 0x2336d0u;
    SET_GPR_U32(ctx, 18, ((uint32_t)50 << 16));
label_2336d4:
    // 0x2336d4: 0x0
    ctx->pc = 0x2336d4u;
    // NOP
label_2336d8:
    // 0x2336d8: 0xc6200124
    ctx->pc = 0x2336d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2336dc:
    // 0x2336dc: 0x46150502
    ctx->pc = 0x2336dcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_2336e0:
    // 0x2336e0: 0xc0b58fc
label_2336e4:
    if (ctx->pc == 0x2336E4u) {
        ctx->pc = 0x2336E4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 2108));
        ctx->pc = 0x2336E8u;
        goto label_2336e8;
    }
    ctx->pc = 0x2336E0u;
    SET_GPR_U32(ctx, 31, 0x2336E8u);
    ctx->pc = 0x2336E4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 2108));
    ctx->pc = 0x2D63F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector2D_0x2d63f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2336E8u; }
    }
    if (ctx->pc != 0x2336E8u) { return; }
    ctx->pc = 0x2336E8u;
label_2336e8:
    // 0x2336e8: 0x46000046
    ctx->pc = 0x2336e8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2336ec:
    // 0x2336ec: 0x4601a034
    ctx->pc = 0x2336ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2336f0:
    // 0x2336f0: 0x0
    ctx->pc = 0x2336f0u;
    // NOP
label_2336f4:
    // 0x2336f4: 0x45030001
label_2336f8:
    if (ctx->pc == 0x2336F8u) {
        ctx->pc = 0x2336F8u;
        ctx->f[1] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x2336FCu;
        goto label_2336fc;
    }
    ctx->pc = 0x2336F4u;
    {
        const bool branch_taken_0x2336f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2336f4) {
            ctx->pc = 0x2336F8u;
            ctx->f[1] = FPU_MOV_S(ctx->f[20]);
            ctx->pc = 0x2336FCu;
            goto label_2336fc;
        }
    }
    ctx->pc = 0x2336FCu;
label_2336fc:
    // 0x2336fc: 0xc620083c
    ctx->pc = 0x2336fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_233700:
    // 0x233700: 0x46000802
    ctx->pc = 0x233700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_233704:
    // 0x233704: 0xe6200830
    ctx->pc = 0x233704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2096), bits); }
label_233708:
    // 0x233708: 0xc6200840
    ctx->pc = 0x233708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23370c:
    // 0x23370c: 0x46000802
    ctx->pc = 0x23370cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_233710:
    // 0x233710: 0xe6200834
    ctx->pc = 0x233710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2100), bits); }
label_233714:
    // 0x233714: 0xc6200844
    ctx->pc = 0x233714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_233718:
    // 0x233718: 0x46000802
    ctx->pc = 0x233718u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_23371c:
    // 0x23371c: 0xe6200838
    ctx->pc = 0x23371cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2104), bits); }
label_233720:
    // 0x233720: 0x3c013f2a
    ctx->pc = 0x233720u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16170 << 16));
label_233724:
    // 0x233724: 0x3421c083
    ctx->pc = 0x233724u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 49283));
label_233728:
    // 0x233728: 0x44810000
    ctx->pc = 0x233728u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_23372c:
    // 0x23372c: 0x46000842
    ctx->pc = 0x23372cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_233730:
    // 0x233730: 0x3c013c23
    ctx->pc = 0x233730u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
label_233734:
    // 0x233734: 0x3421d70a
    ctx->pc = 0x233734u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
label_233738:
    // 0x233738: 0x44810000
    ctx->pc = 0x233738u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_23373c:
    // 0x23373c: 0x46000834
    ctx->pc = 0x23373cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_233740:
    // 0x233740: 0x0
    ctx->pc = 0x233740u;
    // NOP
label_233744:
    // 0x233744: 0x45000002
label_233748:
    if (ctx->pc == 0x233748u) {
        ctx->pc = 0x233748u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x23374Cu;
        goto label_23374c;
    }
    ctx->pc = 0x233744u;
    {
        const bool branch_taken_0x233744 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x233748u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x233744) {
            ctx->pc = 0x233750u;
            goto label_233750;
        }
    }
    ctx->pc = 0x23374Cu;
label_23374c:
    // 0x23374c: 0x44800800
    ctx->pc = 0x23374cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
label_233750:
    // 0x233750: 0x46000802
    ctx->pc = 0x233750u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_233754:
    // 0x233754: 0xe620083c
    ctx->pc = 0x233754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2108), bits); }
label_233758:
    // 0x233758: 0xc6200840
    ctx->pc = 0x233758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23375c:
    // 0x23375c: 0x46000802
    ctx->pc = 0x23375cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_233760:
    // 0x233760: 0xe6200840
    ctx->pc = 0x233760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2112), bits); }
label_233764:
    // 0x233764: 0xc6200844
    ctx->pc = 0x233764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_233768:
    // 0x233768: 0x46000802
    ctx->pc = 0x233768u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_23376c:
    // 0x23376c: 0xe6200844
    ctx->pc = 0x23376cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2116), bits); }
label_233770:
    // 0x233770: 0x9623093c
    ctx->pc = 0x233770u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2364)));
label_233774:
    // 0x233774: 0x30620004
    ctx->pc = 0x233774u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 4));
label_233778:
    // 0x233778: 0x10400003
label_23377c:
    if (ctx->pc == 0x23377Cu) {
        ctx->pc = 0x23377Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 8));
        ctx->pc = 0x233780u;
        goto label_233780;
    }
    ctx->pc = 0x233778u;
    {
        const bool branch_taken_0x233778 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23377Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 8));
        if (branch_taken_0x233778) {
            ctx->pc = 0x233788u;
            goto label_233788;
        }
    }
    ctx->pc = 0x233780u;
label_233780:
    // 0x233780: 0x10000003
label_233784:
    if (ctx->pc == 0x233784u) {
        ctx->pc = 0x233784u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65531));
        ctx->pc = 0x233788u;
        goto label_233788;
    }
    ctx->pc = 0x233780u;
    {
        const bool branch_taken_0x233780 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x233784u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65531));
        if (branch_taken_0x233780) {
            ctx->pc = 0x233790u;
            goto label_233790;
        }
    }
    ctx->pc = 0x233788u;
label_233788:
    // 0x233788: 0x9622093c
    ctx->pc = 0x233788u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2364)));
label_23378c:
    // 0x23378c: 0x3042fff7
    ctx->pc = 0x23378cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65527));
label_233790:
    // 0x233790: 0xa622093c
    ctx->pc = 0x233790u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2364), (uint16_t)GPR_U32(ctx, 2));
label_233794:
    // 0x233794: 0x8e2200fc
    ctx->pc = 0x233794u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 252)));
label_233798:
    // 0x233798: 0x14500007
label_23379c:
    if (ctx->pc == 0x23379Cu) {
        ctx->pc = 0x23379Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 252)));
        ctx->pc = 0x2337A0u;
        goto label_2337a0;
    }
    ctx->pc = 0x233798u;
    {
        const bool branch_taken_0x233798 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        ctx->pc = 0x23379Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 252)));
        if (branch_taken_0x233798) {
            ctx->pc = 0x2337B8u;
            goto label_2337b8;
        }
    }
    ctx->pc = 0x2337A0u;
label_2337a0:
    // 0x2337a0: 0xc6201a10
    ctx->pc = 0x2337a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2337a4:
    // 0x2337a4: 0x46160034
    ctx->pc = 0x2337a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2337a8:
    // 0x2337a8: 0x45000003
label_2337ac:
    if (ctx->pc == 0x2337ACu) {
        ctx->pc = 0x2337B0u;
        goto label_2337b0;
    }
    ctx->pc = 0x2337A8u;
    {
        const bool branch_taken_0x2337a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2337a8) {
            ctx->pc = 0x2337B8u;
            goto label_2337b8;
        }
    }
    ctx->pc = 0x2337B0u;
label_2337b0:
    // 0x2337b0: 0x260b82d
    ctx->pc = 0x2337b0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2337b4:
    // 0x2337b4: 0x46000586
    ctx->pc = 0x2337b4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2337b8:
    // 0x2337b8: 0x24020004
    ctx->pc = 0x2337b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_2337bc:
    // 0x2337bc: 0x14620007
label_2337c0:
    if (ctx->pc == 0x2337C0u) {
        ctx->pc = 0x2337C0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x2337C4u;
        goto label_2337c4;
    }
    ctx->pc = 0x2337BCu;
    {
        const bool branch_taken_0x2337bc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2337C0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2337bc) {
            ctx->pc = 0x2337DCu;
            goto label_2337dc;
        }
    }
    ctx->pc = 0x2337C4u;
label_2337c4:
    // 0x2337c4: 0x2402003c
    ctx->pc = 0x2337c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
label_2337c8:
    // 0x2337c8: 0x2621818
    ctx->pc = 0x2337c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2337cc:
    // 0x2337cc: 0x751021
    ctx->pc = 0x2337ccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_2337d0:
    // 0x2337d0: 0x90420000
    ctx->pc = 0x2337d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2337d4:
    // 0x2337d4: 0x10400005
label_2337d8:
    if (ctx->pc == 0x2337D8u) {
        ctx->pc = 0x2337D8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x2337DCu;
        goto label_2337dc;
    }
    ctx->pc = 0x2337D4u;
    {
        const bool branch_taken_0x2337d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2337D8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2337d4) {
            ctx->pc = 0x2337ECu;
            goto label_2337ec;
        }
    }
    ctx->pc = 0x2337DCu;
label_2337dc:
    // 0x2337dc: 0x8c4207bc
    ctx->pc = 0x2337dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1980)));
label_2337e0:
    // 0x2337e0: 0x28420003
    ctx->pc = 0x2337e0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 3));
label_2337e4:
    // 0x2337e4: 0x54400003
label_2337e8:
    if (ctx->pc == 0x2337E8u) {
        ctx->pc = 0x2337E8u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x2337ECu;
        goto label_2337ec;
    }
    ctx->pc = 0x2337E4u;
    {
        const bool branch_taken_0x2337e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2337e4) {
            ctx->pc = 0x2337E8u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x2337F4u;
            goto label_2337f4;
        }
    }
    ctx->pc = 0x2337ECu;
label_2337ec:
    // 0x2337ec: 0xae5007d4
    ctx->pc = 0x2337ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2004), GPR_U32(ctx, 16));
label_2337f0:
    // 0x2337f0: 0x26730001
    ctx->pc = 0x2337f0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_2337f4:
    // 0x2337f4: 0x2a620004
    ctx->pc = 0x2337f4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 4));
label_2337f8:
    // 0x2337f8: 0x1440ffb7
label_2337fc:
    if (ctx->pc == 0x2337FCu) {
        ctx->pc = 0x2337FCu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 11008));
        ctx->pc = 0x233800u;
        goto label_233800;
    }
    ctx->pc = 0x2337F8u;
    {
        const bool branch_taken_0x2337f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2337FCu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 11008));
        if (branch_taken_0x2337f8) {
            ctx->pc = 0x2336D8u;
            goto label_2336d8;
        }
    }
    ctx->pc = 0x233800u;
label_233800:
    // 0x233800: 0x3c020034
    ctx->pc = 0x233800u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_233804:
    // 0x233804: 0xac40f938
    ctx->pc = 0x233804u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965560), GPR_U32(ctx, 0));
label_233808:
    // 0x233808: 0x3c030034
    ctx->pc = 0x233808u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_23380c:
    // 0x23380c: 0x24020001
    ctx->pc = 0x23380cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_233810:
    // 0x233810: 0xac62f940
    ctx->pc = 0x233810u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965568), GPR_U32(ctx, 2));
label_233814:
    // 0x233814: 0x3c020034
    ctx->pc = 0x233814u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_233818:
    // 0x233818: 0xc08ca68
label_23381c:
    if (ctx->pc == 0x23381Cu) {
        ctx->pc = 0x23381Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294965760), GPR_U32(ctx, 0));
        ctx->pc = 0x233820u;
        goto label_233820;
    }
    ctx->pc = 0x233818u;
    SET_GPR_U32(ctx, 31, 0x233820u);
    ctx->pc = 0x23381Cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965760), GPR_U32(ctx, 0));
    ctx->pc = 0x2329A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        all_players_go_to_same_level_0x2329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233820u; }
    }
    if (ctx->pc != 0x233820u) { return; }
    ctx->pc = 0x233820u;
label_233820:
    // 0x233820: 0x40b02d
    ctx->pc = 0x233820u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233824:
    // 0x233824: 0x3c020031
    ctx->pc = 0x233824u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_233828:
    // 0x233828: 0xdc420e28
    ctx->pc = 0x233828u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
label_23382c:
    // 0x23382c: 0x30420004
    ctx->pc = 0x23382cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
label_233830:
    // 0x233830: 0x1440000f
label_233834:
    if (ctx->pc == 0x233834u) {
        ctx->pc = 0x233834u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233838u;
        goto label_233838;
    }
    ctx->pc = 0x233830u;
    {
        const bool branch_taken_0x233830 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x233834u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x233830) {
            ctx->pc = 0x233870u;
            goto label_233870;
        }
    }
    ctx->pc = 0x233838u;
label_233838:
    // 0x233838: 0x3c020034
    ctx->pc = 0x233838u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_23383c:
    // 0x23383c: 0x3c030034
    ctx->pc = 0x23383cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_233840:
    // 0x233840: 0x3c090034
    ctx->pc = 0x233840u;
    SET_GPR_U32(ctx, 9, ((uint32_t)52 << 16));
label_233844:
    // 0x233844: 0x3c0a0034
    ctx->pc = 0x233844u;
    SET_GPR_U32(ctx, 10, ((uint32_t)52 << 16));
label_233848:
    // 0x233848: 0x24040002
    ctx->pc = 0x233848u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_23384c:
    // 0x23384c: 0x24050002
    ctx->pc = 0x23384cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
label_233850:
    // 0x233850: 0x3c06003a
    ctx->pc = 0x233850u;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
label_233854:
    // 0x233854: 0x24c67830
    ctx->pc = 0x233854u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 30768));
label_233858:
    // 0x233858: 0x8c47f930
    ctx->pc = 0x233858u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 4294965552)));
label_23385c:
    // 0x23385c: 0x8c68f928
    ctx->pc = 0x23385cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 3), 4294965544)));
label_233860:
    // 0x233860: 0x8d29f92c
    ctx->pc = 0x233860u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 9), 4294965548)));
label_233864:
    // 0x233864: 0xc0b47da
label_233868:
    if (ctx->pc == 0x233868u) {
        ctx->pc = 0x233868u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294965720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x23386Cu;
        goto label_23386c;
    }
    ctx->pc = 0x233864u;
    SET_GPR_U32(ctx, 31, 0x23386Cu);
    ctx->pc = 0x233868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294965720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2D1F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        xyprintf_0x2d1f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23386Cu; }
    }
    if (ctx->pc != 0x23386Cu) { return; }
    ctx->pc = 0x23386Cu;
label_23386c:
    // 0x23386c: 0x982d
    ctx->pc = 0x23386cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233870:
    // 0x233870: 0x3c020032
    ctx->pc = 0x233870u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_233874:
    // 0x233874: 0x24511bc0
    ctx->pc = 0x233874u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 7104));
label_233878:
    // 0x233878: 0x3c01c4fa
    ctx->pc = 0x233878u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50426 << 16));
label_23387c:
    // 0x23387c: 0x4481a000
    ctx->pc = 0x23387cu;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_233880:
    // 0x233880: 0x202d
    ctx->pc = 0x233880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233884:
    // 0x233884: 0x26250878
    ctx->pc = 0x233884u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 2168));
label_233888:
    // 0x233888: 0x2626087c
    ctx->pc = 0x233888u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 2172));
label_23388c:
    // 0x23388c: 0xc09cf78
label_233890:
    if (ctx->pc == 0x233890u) {
        ctx->pc = 0x233890u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 96));
        ctx->pc = 0x233894u;
        goto label_233894;
    }
    ctx->pc = 0x23388Cu;
    SET_GPR_U32(ctx, 31, 0x233894u);
    ctx->pc = 0x233890u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 17), 96));
    ctx->pc = 0x273DE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_screen_pos_0x273de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233894u; }
    }
    if (ctx->pc != 0x233894u) { return; }
    ctx->pc = 0x233894u;
label_233894:
    // 0x233894: 0xc6200878
    ctx->pc = 0x233894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_233898:
    // 0x233898: 0x46140034
    ctx->pc = 0x233898u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23389c:
    // 0x23389c: 0x45000003
label_2338a0:
    if (ctx->pc == 0x2338A0u) {
        ctx->pc = 0x2338A4u;
        goto label_2338a4;
    }
    ctx->pc = 0x23389Cu;
    {
        const bool branch_taken_0x23389c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23389c) {
            ctx->pc = 0x2338ACu;
            goto label_2338ac;
        }
    }
    ctx->pc = 0x2338A4u;
label_2338a4:
    // 0x2338a4: 0x10000007
label_2338a8:
    if (ctx->pc == 0x2338A8u) {
        ctx->pc = 0x2338A8u;
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2168), bits); }
        ctx->pc = 0x2338ACu;
        goto label_2338ac;
    }
    ctx->pc = 0x2338A4u;
    {
        const bool branch_taken_0x2338a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2338A8u;
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2168), bits); }
        if (branch_taken_0x2338a4) {
            ctx->pc = 0x2338C4u;
            goto label_2338c4;
        }
    }
    ctx->pc = 0x2338ACu;
label_2338ac:
    // 0x2338ac: 0x3c0144fa
    ctx->pc = 0x2338acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17658 << 16));
label_2338b0:
    // 0x2338b0: 0x44810800
    ctx->pc = 0x2338b0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_2338b4:
    // 0x2338b4: 0x46000834
    ctx->pc = 0x2338b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2338b8:
    // 0x2338b8: 0x0
    ctx->pc = 0x2338b8u;
    // NOP
label_2338bc:
    // 0x2338bc: 0x45030001
label_2338c0:
    if (ctx->pc == 0x2338C0u) {
        ctx->pc = 0x2338C0u;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2168), bits); }
        ctx->pc = 0x2338C4u;
        goto label_2338c4;
    }
    ctx->pc = 0x2338BCu;
    {
        const bool branch_taken_0x2338bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2338bc) {
            ctx->pc = 0x2338C0u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2168), bits); }
            ctx->pc = 0x2338C4u;
            goto label_2338c4;
        }
    }
    ctx->pc = 0x2338C4u;
label_2338c4:
    // 0x2338c4: 0x3c01c4fa
    ctx->pc = 0x2338c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)50426 << 16));
label_2338c8:
    // 0x2338c8: 0x44810800
    ctx->pc = 0x2338c8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_2338cc:
    // 0x2338cc: 0xc620087c
    ctx->pc = 0x2338ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2338d0:
    // 0x2338d0: 0x46010034
    ctx->pc = 0x2338d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2338d4:
    // 0x2338d4: 0x0
    ctx->pc = 0x2338d4u;
    // NOP
label_2338d8:
    // 0x2338d8: 0x45030009
label_2338dc:
    if (ctx->pc == 0x2338DCu) {
        ctx->pc = 0x2338DCu;
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2172), bits); }
        ctx->pc = 0x2338E0u;
        goto label_2338e0;
    }
    ctx->pc = 0x2338D8u;
    {
        const bool branch_taken_0x2338d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2338d8) {
            ctx->pc = 0x2338DCu;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2172), bits); }
            ctx->pc = 0x233900u;
            goto label_233900;
        }
    }
    ctx->pc = 0x2338E0u;
label_2338e0:
    // 0x2338e0: 0x3c0144fa
    ctx->pc = 0x2338e0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17658 << 16));
label_2338e4:
    // 0x2338e4: 0x44810800
    ctx->pc = 0x2338e4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_2338e8:
    // 0x2338e8: 0xc620087c
    ctx->pc = 0x2338e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2338ec:
    // 0x2338ec: 0x46000834
    ctx->pc = 0x2338ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2338f0:
    // 0x2338f0: 0x0
    ctx->pc = 0x2338f0u;
    // NOP
label_2338f4:
    // 0x2338f4: 0x45020003
label_2338f8:
    if (ctx->pc == 0x2338F8u) {
        ctx->pc = 0x2338F8u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x2338FCu;
        goto label_2338fc;
    }
    ctx->pc = 0x2338F4u;
    {
        const bool branch_taken_0x2338f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2338f4) {
            ctx->pc = 0x2338F8u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x233904u;
            goto label_233904;
        }
    }
    ctx->pc = 0x2338FCu;
label_2338fc:
    // 0x2338fc: 0xe621087c
    ctx->pc = 0x2338fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2172), bits); }
label_233900:
    // 0x233900: 0x26730001
    ctx->pc = 0x233900u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_233904:
    // 0x233904: 0x2a620004
    ctx->pc = 0x233904u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 4));
label_233908:
    // 0x233908: 0x1440ffdd
label_23390c:
    if (ctx->pc == 0x23390Cu) {
        ctx->pc = 0x23390Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 11008));
        ctx->pc = 0x233910u;
        goto label_233910;
    }
    ctx->pc = 0x233908u;
    {
        const bool branch_taken_0x233908 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23390Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 11008));
        if (branch_taken_0x233908) {
            ctx->pc = 0x233880u;
            goto label_233880;
        }
    }
    ctx->pc = 0x233910u;
label_233910:
    // 0x233910: 0x982d
    ctx->pc = 0x233910u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233914:
    // 0x233914: 0x3c020032
    ctx->pc = 0x233914u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_233918:
    // 0x233918: 0x24511bc0
    ctx->pc = 0x233918u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 7104));
label_23391c:
    // 0x23391c: 0x0
    ctx->pc = 0x23391cu;
    // NOP
label_233920:
    // 0x233920: 0x3c100031
    ctx->pc = 0x233920u;
    SET_GPR_U32(ctx, 16, ((uint32_t)49 << 16));
label_233924:
    // 0x233924: 0x8e030018
    ctx->pc = 0x233924u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_233928:
    // 0x233928: 0x2402400b
    ctx->pc = 0x233928u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16395));
label_23392c:
    // 0x23392c: 0x10620226
label_233930:
    if (ctx->pc == 0x233930u) {
        ctx->pc = 0x233930u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 16399));
        ctx->pc = 0x233934u;
        goto label_233934;
    }
    ctx->pc = 0x23392Cu;
    {
        const bool branch_taken_0x23392c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x233930u;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 16399));
        if (branch_taken_0x23392c) {
            ctx->pc = 0x2341C8u;
            goto label_2341c8;
        }
    }
    ctx->pc = 0x233934u;
label_233934:
    // 0x233934: 0x50720225
label_233938:
    if (ctx->pc == 0x233938u) {
        ctx->pc = 0x233938u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x23393Cu;
        goto label_23393c;
    }
    ctx->pc = 0x233934u;
    {
        const bool branch_taken_0x233934 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 18));
        if (branch_taken_0x233934) {
            ctx->pc = 0x233938u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x2341CCu;
            goto label_2341cc;
        }
    }
    ctx->pc = 0x23393Cu;
label_23393c:
    // 0x23393c: 0xc08cbd0
label_233940:
    if (ctx->pc == 0x233940u) {
        ctx->pc = 0x233940u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233944u;
        goto label_233944;
    }
    ctx->pc = 0x23393Cu;
    SET_GPR_U32(ctx, 31, 0x233944u);
    ctx->pc = 0x233940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x232F40u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerSelecting_0x232f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233944u; }
    }
    if (ctx->pc != 0x233944u) { return; }
    ctx->pc = 0x233944u;
label_233944:
    // 0x233944: 0x5440002f
label_233948:
    if (ctx->pc == 0x233948u) {
        ctx->pc = 0x233948u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 2292)));
        ctx->pc = 0x23394Cu;
        goto label_23394c;
    }
    ctx->pc = 0x233944u;
    {
        const bool branch_taken_0x233944 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x233944) {
            ctx->pc = 0x233948u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 2292)));
            ctx->pc = 0x233A04u;
            goto label_233a04;
        }
    }
    ctx->pc = 0x23394Cu;
label_23394c:
    // 0x23394c: 0x8e030018
    ctx->pc = 0x23394cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_233950:
    // 0x233950: 0x24024012
    ctx->pc = 0x233950u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16402));
label_233954:
    // 0x233954: 0x1062021c
label_233958:
    if (ctx->pc == 0x233958u) {
        ctx->pc = 0x233958u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16397));
        ctx->pc = 0x23395Cu;
        goto label_23395c;
    }
    ctx->pc = 0x233954u;
    {
        const bool branch_taken_0x233954 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x233958u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16397));
        if (branch_taken_0x233954) {
            ctx->pc = 0x2341C8u;
            goto label_2341c8;
        }
    }
    ctx->pc = 0x23395Cu;
label_23395c:
    // 0x23395c: 0x5062021b
label_233960:
    if (ctx->pc == 0x233960u) {
        ctx->pc = 0x233960u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x233964u;
        goto label_233964;
    }
    ctx->pc = 0x23395Cu;
    {
        const bool branch_taken_0x23395c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x23395c) {
            ctx->pc = 0x233960u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x2341CCu;
            goto label_2341cc;
        }
    }
    ctx->pc = 0x233964u;
label_233964:
    // 0x233964: 0x10720218
label_233968:
    if (ctx->pc == 0x233968u) {
        ctx->pc = 0x233968u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16406));
        ctx->pc = 0x23396Cu;
        goto label_23396c;
    }
    ctx->pc = 0x233964u;
    {
        const bool branch_taken_0x233964 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 18));
        ctx->pc = 0x233968u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16406));
        if (branch_taken_0x233964) {
            ctx->pc = 0x2341C8u;
            goto label_2341c8;
        }
    }
    ctx->pc = 0x23396Cu;
label_23396c:
    // 0x23396c: 0x10620216
label_233970:
    if (ctx->pc == 0x233970u) {
        ctx->pc = 0x233970u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x233974u;
        goto label_233974;
    }
    ctx->pc = 0x23396Cu;
    {
        const bool branch_taken_0x23396c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x233970u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x23396c) {
            ctx->pc = 0x2341C8u;
            goto label_2341c8;
        }
    }
    ctx->pc = 0x233974u;
label_233974:
    // 0x233974: 0x8c42080c
    ctx->pc = 0x233974u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
label_233978:
    // 0x233978: 0x10400021
label_23397c:
    if (ctx->pc == 0x23397Cu) {
        ctx->pc = 0x23397Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x233980u;
        goto label_233980;
    }
    ctx->pc = 0x233978u;
    {
        const bool branch_taken_0x233978 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23397Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x233978) {
            ctx->pc = 0x233A00u;
            goto label_233a00;
        }
    }
    ctx->pc = 0x233980u;
label_233980:
    // 0x233980: 0x8c4207bc
    ctx->pc = 0x233980u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1980)));
label_233984:
    // 0x233984: 0x5440001f
label_233988:
    if (ctx->pc == 0x233988u) {
        ctx->pc = 0x233988u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 2292)));
        ctx->pc = 0x23398Cu;
        goto label_23398c;
    }
    ctx->pc = 0x233984u;
    {
        const bool branch_taken_0x233984 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x233984) {
            ctx->pc = 0x233988u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 2292)));
            ctx->pc = 0x233A04u;
            goto label_233a04;
        }
    }
    ctx->pc = 0x23398Cu;
label_23398c:
    // 0x23398c: 0x3c020032
    ctx->pc = 0x23398cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_233990:
    // 0x233990: 0x8c42f454
    ctx->pc = 0x233990u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294964308)));
label_233994:
    // 0x233994: 0x5440001b
label_233998:
    if (ctx->pc == 0x233998u) {
        ctx->pc = 0x233998u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 2292)));
        ctx->pc = 0x23399Cu;
        goto label_23399c;
    }
    ctx->pc = 0x233994u;
    {
        const bool branch_taken_0x233994 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x233994) {
            ctx->pc = 0x233998u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 2292)));
            ctx->pc = 0x233A04u;
            goto label_233a04;
        }
    }
    ctx->pc = 0x23399Cu;
label_23399c:
    // 0x23399c: 0x8e2300fc
    ctx->pc = 0x23399cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 252)));
label_2339a0:
    // 0x2339a0: 0x24020001
    ctx->pc = 0x2339a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2339a4:
    // 0x2339a4: 0x54620209
label_2339a8:
    if (ctx->pc == 0x2339A8u) {
        ctx->pc = 0x2339A8u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x2339ACu;
        goto label_2339ac;
    }
    ctx->pc = 0x2339A4u;
    {
        const bool branch_taken_0x2339a4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2339a4) {
            ctx->pc = 0x2339A8u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x2341CCu;
            goto label_2341cc;
        }
    }
    ctx->pc = 0x2339ACu;
label_2339ac:
    // 0x2339ac: 0xc08b46c
label_2339b0:
    if (ctx->pc == 0x2339B0u) {
        ctx->pc = 0x2339B0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2339B4u;
        goto label_2339b4;
    }
    ctx->pc = 0x2339ACu;
    SET_GPR_U32(ctx, 31, 0x2339B4u);
    ctx->pc = 0x2339B0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22D1B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerProcessPowerups_0x22d1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2339B4u; }
    }
    if (ctx->pc != 0x2339B4u) { return; }
    ctx->pc = 0x2339B4u;
label_2339b4:
    // 0x2339b4: 0xc0932be
label_2339b8:
    if (ctx->pc == 0x2339B8u) {
        ctx->pc = 0x2339B8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2339BCu;
        goto label_2339bc;
    }
    ctx->pc = 0x2339B4u;
    SET_GPR_U32(ctx, 31, 0x2339BCu);
    ctx->pc = 0x2339B8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24CAF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoPlayerStart_0x24caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2339BCu; }
    }
    if (ctx->pc != 0x2339BCu) { return; }
    ctx->pc = 0x2339BCu;
label_2339bc:
    // 0x2339bc: 0xc08cc10
label_2339c0:
    if (ctx->pc == 0x2339C0u) {
        ctx->pc = 0x2339C0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2339C4u;
        goto label_2339c4;
    }
    ctx->pc = 0x2339BCu;
    SET_GPR_U32(ctx, 31, 0x2339C4u);
    ctx->pc = 0x2339C0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x233040u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerProcessSkinFX_0x233040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2339C4u; }
    }
    if (ctx->pc != 0x2339C4u) { return; }
    ctx->pc = 0x2339C4u;
label_2339c4:
    // 0x2339c4: 0xc093d1c
label_2339c8:
    if (ctx->pc == 0x2339C8u) {
        ctx->pc = 0x2339C8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2339CCu;
        goto label_2339cc;
    }
    ctx->pc = 0x2339C4u;
    SET_GPR_U32(ctx, 31, 0x2339CCu);
    ctx->pc = 0x2339C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24F470u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerDoWeapTrail_0x24f470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2339CCu; }
    }
    if (ctx->pc != 0x2339CCu) { return; }
    ctx->pc = 0x2339CCu;
label_2339cc:
    // 0x2339cc: 0x220202d
    ctx->pc = 0x2339ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2339d0:
    // 0x2339d0: 0xc08ac14
label_2339d4:
    if (ctx->pc == 0x2339D4u) {
        ctx->pc = 0x2339D4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2339D8u;
        goto label_2339d8;
    }
    ctx->pc = 0x2339D0u;
    SET_GPR_U32(ctx, 31, 0x2339D8u);
    ctx->pc = 0x2339D4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22B050u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdatePlayerWorldMat_0x22b050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2339D8u; }
    }
    if (ctx->pc != 0x2339D8u) { return; }
    ctx->pc = 0x2339D8u;
label_2339d8:
    // 0x2339d8: 0x8e2206a0
    ctx->pc = 0x2339d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 1696)));
label_2339dc:
    // 0x2339dc: 0xc6200050
    ctx->pc = 0x2339dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2339e0:
    // 0x2339e0: 0xe4400030
    ctx->pc = 0x2339e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_2339e4:
    // 0x2339e4: 0x8e2206a0
    ctx->pc = 0x2339e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 1696)));
label_2339e8:
    // 0x2339e8: 0xc6200054
    ctx->pc = 0x2339e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2339ec:
    // 0x2339ec: 0xe4400034
    ctx->pc = 0x2339ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_2339f0:
    // 0x2339f0: 0x8e2206a0
    ctx->pc = 0x2339f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 1696)));
label_2339f4:
    // 0x2339f4: 0xc6200058
    ctx->pc = 0x2339f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2339f8:
    // 0x2339f8: 0x100001f3
label_2339fc:
    if (ctx->pc == 0x2339FCu) {
        ctx->pc = 0x2339FCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
        ctx->pc = 0x233A00u;
        goto label_233a00;
    }
    ctx->pc = 0x2339F8u;
    {
        const bool branch_taken_0x2339f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2339FCu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
        if (branch_taken_0x2339f8) {
            ctx->pc = 0x2341C8u;
            goto label_2341c8;
        }
    }
    ctx->pc = 0x233A00u;
label_233a00:
    // 0x233a00: 0x8e2208f4
    ctx->pc = 0x233a00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 2292)));
label_233a04:
    // 0x233a04: 0x10400002
label_233a08:
    if (ctx->pc == 0x233A08u) {
        ctx->pc = 0x233A08u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x233A0Cu;
        goto label_233a0c;
    }
    ctx->pc = 0x233A04u;
    {
        const bool branch_taken_0x233a04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x233A08u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
        if (branch_taken_0x233a04) {
            ctx->pc = 0x233A10u;
            goto label_233a10;
        }
    }
    ctx->pc = 0x233A0Cu;
label_233a0c:
    // 0x233a0c: 0xae2208f4
    ctx->pc = 0x233a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2292), GPR_U32(ctx, 2));
label_233a10:
    // 0x233a10: 0x862201c8
    ctx->pc = 0x233a10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 456)));
label_233a14:
    // 0x233a14: 0x18400005
label_233a18:
    if (ctx->pc == 0x233A18u) {
        ctx->pc = 0x233A18u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 456)));
        ctx->pc = 0x233A1Cu;
        goto label_233a1c;
    }
    ctx->pc = 0x233A14u;
    {
        const bool branch_taken_0x233a14 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x233A18u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 456)));
        if (branch_taken_0x233a14) {
            ctx->pc = 0x233A2Cu;
            goto label_233a2c;
        }
    }
    ctx->pc = 0x233A1Cu;
label_233a1c:
    // 0x233a1c: 0x3c020031
    ctx->pc = 0x233a1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_233a20:
    // 0x233a20: 0x9442ffbc
    ctx->pc = 0x233a20u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967228)));
label_233a24:
    // 0x233a24: 0x621023
    ctx->pc = 0x233a24u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_233a28:
    // 0x233a28: 0xa62201c8
    ctx->pc = 0x233a28u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 456), (uint16_t)GPR_U32(ctx, 2));
label_233a2c:
    // 0x233a2c: 0x862201d2
    ctx->pc = 0x233a2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 466)));
label_233a30:
    // 0x233a30: 0x18400005
label_233a34:
    if (ctx->pc == 0x233A34u) {
        ctx->pc = 0x233A34u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 466)));
        ctx->pc = 0x233A38u;
        goto label_233a38;
    }
    ctx->pc = 0x233A30u;
    {
        const bool branch_taken_0x233a30 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x233A34u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 466)));
        if (branch_taken_0x233a30) {
            ctx->pc = 0x233A48u;
            goto label_233a48;
        }
    }
    ctx->pc = 0x233A38u;
label_233a38:
    // 0x233a38: 0x3c020031
    ctx->pc = 0x233a38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_233a3c:
    // 0x233a3c: 0x9442ffbc
    ctx->pc = 0x233a3cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967228)));
label_233a40:
    // 0x233a40: 0x621023
    ctx->pc = 0x233a40u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_233a44:
    // 0x233a44: 0xa62201d2
    ctx->pc = 0x233a44u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 466), (uint16_t)GPR_U32(ctx, 2));
label_233a48:
    // 0x233a48: 0x862201d4
    ctx->pc = 0x233a48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 468)));
label_233a4c:
    // 0x233a4c: 0x18400005
label_233a50:
    if (ctx->pc == 0x233A50u) {
        ctx->pc = 0x233A50u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 468)));
        ctx->pc = 0x233A54u;
        goto label_233a54;
    }
    ctx->pc = 0x233A4Cu;
    {
        const bool branch_taken_0x233a4c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x233A50u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 468)));
        if (branch_taken_0x233a4c) {
            ctx->pc = 0x233A64u;
            goto label_233a64;
        }
    }
    ctx->pc = 0x233A54u;
label_233a54:
    // 0x233a54: 0x3c020031
    ctx->pc = 0x233a54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_233a58:
    // 0x233a58: 0x9442ffbc
    ctx->pc = 0x233a58u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967228)));
label_233a5c:
    // 0x233a5c: 0x621023
    ctx->pc = 0x233a5cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_233a60:
    // 0x233a60: 0xa62201d4
    ctx->pc = 0x233a60u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 468), (uint16_t)GPR_U32(ctx, 2));
label_233a64:
    // 0x233a64: 0x862201d6
    ctx->pc = 0x233a64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 470)));
label_233a68:
    // 0x233a68: 0x18400005
label_233a6c:
    if (ctx->pc == 0x233A6Cu) {
        ctx->pc = 0x233A6Cu;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 470)));
        ctx->pc = 0x233A70u;
        goto label_233a70;
    }
    ctx->pc = 0x233A68u;
    {
        const bool branch_taken_0x233a68 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x233A6Cu;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 470)));
        if (branch_taken_0x233a68) {
            ctx->pc = 0x233A80u;
            goto label_233a80;
        }
    }
    ctx->pc = 0x233A70u;
label_233a70:
    // 0x233a70: 0x3c020031
    ctx->pc = 0x233a70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_233a74:
    // 0x233a74: 0x9442ffbc
    ctx->pc = 0x233a74u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967228)));
label_233a78:
    // 0x233a78: 0x621023
    ctx->pc = 0x233a78u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_233a7c:
    // 0x233a7c: 0xa62201d6
    ctx->pc = 0x233a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 470), (uint16_t)GPR_U32(ctx, 2));
label_233a80:
    // 0x233a80: 0x8e2301dc
    ctx->pc = 0x233a80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 476)));
label_233a84:
    // 0x233a84: 0x24020001
    ctx->pc = 0x233a84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_233a88:
    // 0x233a88: 0x5462000e
label_233a8c:
    if (ctx->pc == 0x233A8Cu) {
        ctx->pc = 0x233A8Cu;
        WRITE16(ADD32(GPR_U32(ctx, 17), 472), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x233A90u;
        goto label_233a90;
    }
    ctx->pc = 0x233A88u;
    {
        const bool branch_taken_0x233a88 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x233a88) {
            ctx->pc = 0x233A8Cu;
            WRITE16(ADD32(GPR_U32(ctx, 17), 472), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x233AC4u;
            goto label_233ac4;
        }
    }
    ctx->pc = 0x233A90u;
label_233a90:
    // 0x233a90: 0x862201da
    ctx->pc = 0x233a90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 474)));
label_233a94:
    // 0x233a94: 0x14400006
label_233a98:
    if (ctx->pc == 0x233A98u) {
        ctx->pc = 0x233A98u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x233A9Cu;
        goto label_233a9c;
    }
    ctx->pc = 0x233A94u;
    {
        const bool branch_taken_0x233a94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x233A98u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x233a94) {
            ctx->pc = 0x233AB0u;
            goto label_233ab0;
        }
    }
    ctx->pc = 0x233A9Cu;
label_233a9c:
    // 0x233a9c: 0x962301d8
    ctx->pc = 0x233a9cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 472)));
label_233aa0:
    // 0x233aa0: 0x9442ffbc
    ctx->pc = 0x233aa0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967228)));
label_233aa4:
    // 0x233aa4: 0x621821
    ctx->pc = 0x233aa4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_233aa8:
    // 0x233aa8: 0x10000007
label_233aac:
    if (ctx->pc == 0x233AACu) {
        ctx->pc = 0x233AACu;
        WRITE16(ADD32(GPR_U32(ctx, 17), 472), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x233AB0u;
        goto label_233ab0;
    }
    ctx->pc = 0x233AA8u;
    {
        const bool branch_taken_0x233aa8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x233AACu;
        WRITE16(ADD32(GPR_U32(ctx, 17), 472), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x233aa8) {
            ctx->pc = 0x233AC8u;
            goto label_233ac8;
        }
    }
    ctx->pc = 0x233AB0u;
label_233ab0:
    // 0x233ab0: 0x962301da
    ctx->pc = 0x233ab0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 474)));
label_233ab4:
    // 0x233ab4: 0x9442ffbc
    ctx->pc = 0x233ab4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967228)));
label_233ab8:
    // 0x233ab8: 0x621821
    ctx->pc = 0x233ab8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_233abc:
    // 0x233abc: 0x10000002
label_233ac0:
    if (ctx->pc == 0x233AC0u) {
        ctx->pc = 0x233AC0u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 474), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x233AC4u;
        goto label_233ac4;
    }
    ctx->pc = 0x233ABCu;
    {
        const bool branch_taken_0x233abc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x233AC0u;
        WRITE16(ADD32(GPR_U32(ctx, 17), 474), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x233abc) {
            ctx->pc = 0x233AC8u;
            goto label_233ac8;
        }
    }
    ctx->pc = 0x233AC4u;
label_233ac4:
    // 0x233ac4: 0xa62001da
    ctx->pc = 0x233ac4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 474), (uint16_t)GPR_U32(ctx, 0));
label_233ac8:
    // 0x233ac8: 0x8e3200fc
    ctx->pc = 0x233ac8u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 17), 252)));
label_233acc:
    // 0x233acc: 0x2e42000c
    ctx->pc = 0x233accu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), 12));
label_233ad0:
    // 0x233ad0: 0x104001bc
label_233ad4:
    if (ctx->pc == 0x233AD4u) {
        ctx->pc = 0x233AD4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        ctx->pc = 0x233AD8u;
        goto label_233ad8;
    }
    ctx->pc = 0x233AD0u;
    {
        const bool branch_taken_0x233ad0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x233AD4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x233ad0) {
            ctx->pc = 0x2341C4u;
            goto label_2341c4;
        }
    }
    ctx->pc = 0x233AD8u;
label_233ad8:
    // 0x233ad8: 0x24427870
    ctx->pc = 0x233ad8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 30832));
label_233adc:
    // 0x233adc: 0x121880
    ctx->pc = 0x233adcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 18), 2));
label_233ae0:
    // 0x233ae0: 0x621821
    ctx->pc = 0x233ae0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_233ae4:
    // 0x233ae4: 0x8c620000
    ctx->pc = 0x233ae4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_233ae8:
    // 0x233ae8: 0x400008
label_233aec:
    if (ctx->pc == 0x233AECu) {
        ctx->pc = 0x233AF0u;
        goto label_233af0;
    }
    ctx->pc = 0x233AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233200u: goto label_233200;
            case 0x233204u: goto label_233204;
            case 0x233208u: goto label_233208;
            case 0x23320Cu: goto label_23320c;
            case 0x233210u: goto label_233210;
            case 0x233214u: goto label_233214;
            case 0x233218u: goto label_233218;
            case 0x23321Cu: goto label_23321c;
            case 0x233220u: goto label_233220;
            case 0x233224u: goto label_233224;
            case 0x233228u: goto label_233228;
            case 0x23322Cu: goto label_23322c;
            case 0x233230u: goto label_233230;
            case 0x233234u: goto label_233234;
            case 0x233238u: goto label_233238;
            case 0x23323Cu: goto label_23323c;
            case 0x233240u: goto label_233240;
            case 0x233244u: goto label_233244;
            case 0x233248u: goto label_233248;
            case 0x23324Cu: goto label_23324c;
            case 0x233250u: goto label_233250;
            case 0x233254u: goto label_233254;
            case 0x233258u: goto label_233258;
            case 0x23325Cu: goto label_23325c;
            case 0x233260u: goto label_233260;
            case 0x233264u: goto label_233264;
            case 0x233268u: goto label_233268;
            case 0x23326Cu: goto label_23326c;
            case 0x233270u: goto label_233270;
            case 0x233274u: goto label_233274;
            case 0x233278u: goto label_233278;
            case 0x23327Cu: goto label_23327c;
            case 0x233280u: goto label_233280;
            case 0x233284u: goto label_233284;
            case 0x233288u: goto label_233288;
            case 0x23328Cu: goto label_23328c;
            case 0x233290u: goto label_233290;
            case 0x233294u: goto label_233294;
            case 0x233298u: goto label_233298;
            case 0x23329Cu: goto label_23329c;
            case 0x2332A0u: goto label_2332a0;
            case 0x2332A4u: goto label_2332a4;
            case 0x2332A8u: goto label_2332a8;
            case 0x2332ACu: goto label_2332ac;
            case 0x2332B0u: goto label_2332b0;
            case 0x2332B4u: goto label_2332b4;
            case 0x2332B8u: goto label_2332b8;
            case 0x2332BCu: goto label_2332bc;
            case 0x2332C0u: goto label_2332c0;
            case 0x2332C4u: goto label_2332c4;
            case 0x2332C8u: goto label_2332c8;
            case 0x2332CCu: goto label_2332cc;
            case 0x2332D0u: goto label_2332d0;
            case 0x2332D4u: goto label_2332d4;
            case 0x2332D8u: goto label_2332d8;
            case 0x2332DCu: goto label_2332dc;
            case 0x2332E0u: goto label_2332e0;
            case 0x2332E4u: goto label_2332e4;
            case 0x2332E8u: goto label_2332e8;
            case 0x2332ECu: goto label_2332ec;
            case 0x2332F0u: goto label_2332f0;
            case 0x2332F4u: goto label_2332f4;
            case 0x2332F8u: goto label_2332f8;
            case 0x2332FCu: goto label_2332fc;
            case 0x233300u: goto label_233300;
            case 0x233304u: goto label_233304;
            case 0x233308u: goto label_233308;
            case 0x23330Cu: goto label_23330c;
            case 0x233310u: goto label_233310;
            case 0x233314u: goto label_233314;
            case 0x233318u: goto label_233318;
            case 0x23331Cu: goto label_23331c;
            case 0x233320u: goto label_233320;
            case 0x233324u: goto label_233324;
            case 0x233328u: goto label_233328;
            case 0x23332Cu: goto label_23332c;
            case 0x233330u: goto label_233330;
            case 0x233334u: goto label_233334;
            case 0x233338u: goto label_233338;
            case 0x23333Cu: goto label_23333c;
            case 0x233340u: goto label_233340;
            case 0x233344u: goto label_233344;
            case 0x233348u: goto label_233348;
            case 0x23334Cu: goto label_23334c;
            case 0x233350u: goto label_233350;
            case 0x233354u: goto label_233354;
            case 0x233358u: goto label_233358;
            case 0x23335Cu: goto label_23335c;
            case 0x233360u: goto label_233360;
            case 0x233364u: goto label_233364;
            case 0x233368u: goto label_233368;
            case 0x23336Cu: goto label_23336c;
            case 0x233370u: goto label_233370;
            case 0x233374u: goto label_233374;
            case 0x233378u: goto label_233378;
            case 0x23337Cu: goto label_23337c;
            case 0x233380u: goto label_233380;
            case 0x233384u: goto label_233384;
            case 0x233388u: goto label_233388;
            case 0x23338Cu: goto label_23338c;
            case 0x233390u: goto label_233390;
            case 0x233394u: goto label_233394;
            case 0x233398u: goto label_233398;
            case 0x23339Cu: goto label_23339c;
            case 0x2333A0u: goto label_2333a0;
            case 0x2333A4u: goto label_2333a4;
            case 0x2333A8u: goto label_2333a8;
            case 0x2333ACu: goto label_2333ac;
            case 0x2333B0u: goto label_2333b0;
            case 0x2333B4u: goto label_2333b4;
            case 0x2333B8u: goto label_2333b8;
            case 0x2333BCu: goto label_2333bc;
            case 0x2333C0u: goto label_2333c0;
            case 0x2333C4u: goto label_2333c4;
            case 0x2333C8u: goto label_2333c8;
            case 0x2333CCu: goto label_2333cc;
            case 0x2333D0u: goto label_2333d0;
            case 0x2333D4u: goto label_2333d4;
            case 0x2333D8u: goto label_2333d8;
            case 0x2333DCu: goto label_2333dc;
            case 0x2333E0u: goto label_2333e0;
            case 0x2333E4u: goto label_2333e4;
            case 0x2333E8u: goto label_2333e8;
            case 0x2333ECu: goto label_2333ec;
            case 0x2333F0u: goto label_2333f0;
            case 0x2333F4u: goto label_2333f4;
            case 0x2333F8u: goto label_2333f8;
            case 0x2333FCu: goto label_2333fc;
            case 0x233400u: goto label_233400;
            case 0x233404u: goto label_233404;
            case 0x233408u: goto label_233408;
            case 0x23340Cu: goto label_23340c;
            case 0x233410u: goto label_233410;
            case 0x233414u: goto label_233414;
            case 0x233418u: goto label_233418;
            case 0x23341Cu: goto label_23341c;
            case 0x233420u: goto label_233420;
            case 0x233424u: goto label_233424;
            case 0x233428u: goto label_233428;
            case 0x23342Cu: goto label_23342c;
            case 0x233430u: goto label_233430;
            case 0x233434u: goto label_233434;
            case 0x233438u: goto label_233438;
            case 0x23343Cu: goto label_23343c;
            case 0x233440u: goto label_233440;
            case 0x233444u: goto label_233444;
            case 0x233448u: goto label_233448;
            case 0x23344Cu: goto label_23344c;
            case 0x233450u: goto label_233450;
            case 0x233454u: goto label_233454;
            case 0x233458u: goto label_233458;
            case 0x23345Cu: goto label_23345c;
            case 0x233460u: goto label_233460;
            case 0x233464u: goto label_233464;
            case 0x233468u: goto label_233468;
            case 0x23346Cu: goto label_23346c;
            case 0x233470u: goto label_233470;
            case 0x233474u: goto label_233474;
            case 0x233478u: goto label_233478;
            case 0x23347Cu: goto label_23347c;
            case 0x233480u: goto label_233480;
            case 0x233484u: goto label_233484;
            case 0x233488u: goto label_233488;
            case 0x23348Cu: goto label_23348c;
            case 0x233490u: goto label_233490;
            case 0x233494u: goto label_233494;
            case 0x233498u: goto label_233498;
            case 0x23349Cu: goto label_23349c;
            case 0x2334A0u: goto label_2334a0;
            case 0x2334A4u: goto label_2334a4;
            case 0x2334A8u: goto label_2334a8;
            case 0x2334ACu: goto label_2334ac;
            case 0x2334B0u: goto label_2334b0;
            case 0x2334B4u: goto label_2334b4;
            case 0x2334B8u: goto label_2334b8;
            case 0x2334BCu: goto label_2334bc;
            case 0x2334C0u: goto label_2334c0;
            case 0x2334C4u: goto label_2334c4;
            case 0x2334C8u: goto label_2334c8;
            case 0x2334CCu: goto label_2334cc;
            case 0x2334D0u: goto label_2334d0;
            case 0x2334D4u: goto label_2334d4;
            case 0x2334D8u: goto label_2334d8;
            case 0x2334DCu: goto label_2334dc;
            case 0x2334E0u: goto label_2334e0;
            case 0x2334E4u: goto label_2334e4;
            case 0x2334E8u: goto label_2334e8;
            case 0x2334ECu: goto label_2334ec;
            case 0x2334F0u: goto label_2334f0;
            case 0x2334F4u: goto label_2334f4;
            case 0x2334F8u: goto label_2334f8;
            case 0x2334FCu: goto label_2334fc;
            case 0x233500u: goto label_233500;
            case 0x233504u: goto label_233504;
            case 0x233508u: goto label_233508;
            case 0x23350Cu: goto label_23350c;
            case 0x233510u: goto label_233510;
            case 0x233514u: goto label_233514;
            case 0x233518u: goto label_233518;
            case 0x23351Cu: goto label_23351c;
            case 0x233520u: goto label_233520;
            case 0x233524u: goto label_233524;
            case 0x233528u: goto label_233528;
            case 0x23352Cu: goto label_23352c;
            case 0x233530u: goto label_233530;
            case 0x233534u: goto label_233534;
            case 0x233538u: goto label_233538;
            case 0x23353Cu: goto label_23353c;
            case 0x233540u: goto label_233540;
            case 0x233544u: goto label_233544;
            case 0x233548u: goto label_233548;
            case 0x23354Cu: goto label_23354c;
            case 0x233550u: goto label_233550;
            case 0x233554u: goto label_233554;
            case 0x233558u: goto label_233558;
            case 0x23355Cu: goto label_23355c;
            case 0x233560u: goto label_233560;
            case 0x233564u: goto label_233564;
            case 0x233568u: goto label_233568;
            case 0x23356Cu: goto label_23356c;
            case 0x233570u: goto label_233570;
            case 0x233574u: goto label_233574;
            case 0x233578u: goto label_233578;
            case 0x23357Cu: goto label_23357c;
            case 0x233580u: goto label_233580;
            case 0x233584u: goto label_233584;
            case 0x233588u: goto label_233588;
            case 0x23358Cu: goto label_23358c;
            case 0x233590u: goto label_233590;
            case 0x233594u: goto label_233594;
            case 0x233598u: goto label_233598;
            case 0x23359Cu: goto label_23359c;
            case 0x2335A0u: goto label_2335a0;
            case 0x2335A4u: goto label_2335a4;
            case 0x2335A8u: goto label_2335a8;
            case 0x2335ACu: goto label_2335ac;
            case 0x2335B0u: goto label_2335b0;
            case 0x2335B4u: goto label_2335b4;
            case 0x2335B8u: goto label_2335b8;
            case 0x2335BCu: goto label_2335bc;
            case 0x2335C0u: goto label_2335c0;
            case 0x2335C4u: goto label_2335c4;
            case 0x2335C8u: goto label_2335c8;
            case 0x2335CCu: goto label_2335cc;
            case 0x2335D0u: goto label_2335d0;
            case 0x2335D4u: goto label_2335d4;
            case 0x2335D8u: goto label_2335d8;
            case 0x2335DCu: goto label_2335dc;
            case 0x2335E0u: goto label_2335e0;
            case 0x2335E4u: goto label_2335e4;
            case 0x2335E8u: goto label_2335e8;
            case 0x2335ECu: goto label_2335ec;
            case 0x2335F0u: goto label_2335f0;
            case 0x2335F4u: goto label_2335f4;
            case 0x2335F8u: goto label_2335f8;
            case 0x2335FCu: goto label_2335fc;
            case 0x233600u: goto label_233600;
            case 0x233604u: goto label_233604;
            case 0x233608u: goto label_233608;
            case 0x23360Cu: goto label_23360c;
            case 0x233610u: goto label_233610;
            case 0x233614u: goto label_233614;
            case 0x233618u: goto label_233618;
            case 0x23361Cu: goto label_23361c;
            case 0x233620u: goto label_233620;
            case 0x233624u: goto label_233624;
            case 0x233628u: goto label_233628;
            case 0x23362Cu: goto label_23362c;
            case 0x233630u: goto label_233630;
            case 0x233634u: goto label_233634;
            case 0x233638u: goto label_233638;
            case 0x23363Cu: goto label_23363c;
            case 0x233640u: goto label_233640;
            case 0x233644u: goto label_233644;
            case 0x233648u: goto label_233648;
            case 0x23364Cu: goto label_23364c;
            case 0x233650u: goto label_233650;
            case 0x233654u: goto label_233654;
            case 0x233658u: goto label_233658;
            case 0x23365Cu: goto label_23365c;
            case 0x233660u: goto label_233660;
            case 0x233664u: goto label_233664;
            case 0x233668u: goto label_233668;
            case 0x23366Cu: goto label_23366c;
            case 0x233670u: goto label_233670;
            case 0x233674u: goto label_233674;
            case 0x233678u: goto label_233678;
            case 0x23367Cu: goto label_23367c;
            case 0x233680u: goto label_233680;
            case 0x233684u: goto label_233684;
            case 0x233688u: goto label_233688;
            case 0x23368Cu: goto label_23368c;
            case 0x233690u: goto label_233690;
            case 0x233694u: goto label_233694;
            case 0x233698u: goto label_233698;
            case 0x23369Cu: goto label_23369c;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336A4u: goto label_2336a4;
            case 0x2336A8u: goto label_2336a8;
            case 0x2336ACu: goto label_2336ac;
            case 0x2336B0u: goto label_2336b0;
            case 0x2336B4u: goto label_2336b4;
            case 0x2336B8u: goto label_2336b8;
            case 0x2336BCu: goto label_2336bc;
            case 0x2336C0u: goto label_2336c0;
            case 0x2336C4u: goto label_2336c4;
            case 0x2336C8u: goto label_2336c8;
            case 0x2336CCu: goto label_2336cc;
            case 0x2336D0u: goto label_2336d0;
            case 0x2336D4u: goto label_2336d4;
            case 0x2336D8u: goto label_2336d8;
            case 0x2336DCu: goto label_2336dc;
            case 0x2336E0u: goto label_2336e0;
            case 0x2336E4u: goto label_2336e4;
            case 0x2336E8u: goto label_2336e8;
            case 0x2336ECu: goto label_2336ec;
            case 0x2336F0u: goto label_2336f0;
            case 0x2336F4u: goto label_2336f4;
            case 0x2336F8u: goto label_2336f8;
            case 0x2336FCu: goto label_2336fc;
            case 0x233700u: goto label_233700;
            case 0x233704u: goto label_233704;
            case 0x233708u: goto label_233708;
            case 0x23370Cu: goto label_23370c;
            case 0x233710u: goto label_233710;
            case 0x233714u: goto label_233714;
            case 0x233718u: goto label_233718;
            case 0x23371Cu: goto label_23371c;
            case 0x233720u: goto label_233720;
            case 0x233724u: goto label_233724;
            case 0x233728u: goto label_233728;
            case 0x23372Cu: goto label_23372c;
            case 0x233730u: goto label_233730;
            case 0x233734u: goto label_233734;
            case 0x233738u: goto label_233738;
            case 0x23373Cu: goto label_23373c;
            case 0x233740u: goto label_233740;
            case 0x233744u: goto label_233744;
            case 0x233748u: goto label_233748;
            case 0x23374Cu: goto label_23374c;
            case 0x233750u: goto label_233750;
            case 0x233754u: goto label_233754;
            case 0x233758u: goto label_233758;
            case 0x23375Cu: goto label_23375c;
            case 0x233760u: goto label_233760;
            case 0x233764u: goto label_233764;
            case 0x233768u: goto label_233768;
            case 0x23376Cu: goto label_23376c;
            case 0x233770u: goto label_233770;
            case 0x233774u: goto label_233774;
            case 0x233778u: goto label_233778;
            case 0x23377Cu: goto label_23377c;
            case 0x233780u: goto label_233780;
            case 0x233784u: goto label_233784;
            case 0x233788u: goto label_233788;
            case 0x23378Cu: goto label_23378c;
            case 0x233790u: goto label_233790;
            case 0x233794u: goto label_233794;
            case 0x233798u: goto label_233798;
            case 0x23379Cu: goto label_23379c;
            case 0x2337A0u: goto label_2337a0;
            case 0x2337A4u: goto label_2337a4;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337ACu: goto label_2337ac;
            case 0x2337B0u: goto label_2337b0;
            case 0x2337B4u: goto label_2337b4;
            case 0x2337B8u: goto label_2337b8;
            case 0x2337BCu: goto label_2337bc;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337C8u: goto label_2337c8;
            case 0x2337CCu: goto label_2337cc;
            case 0x2337D0u: goto label_2337d0;
            case 0x2337D4u: goto label_2337d4;
            case 0x2337D8u: goto label_2337d8;
            case 0x2337DCu: goto label_2337dc;
            case 0x2337E0u: goto label_2337e0;
            case 0x2337E4u: goto label_2337e4;
            case 0x2337E8u: goto label_2337e8;
            case 0x2337ECu: goto label_2337ec;
            case 0x2337F0u: goto label_2337f0;
            case 0x2337F4u: goto label_2337f4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233800u: goto label_233800;
            case 0x233804u: goto label_233804;
            case 0x233808u: goto label_233808;
            case 0x23380Cu: goto label_23380c;
            case 0x233810u: goto label_233810;
            case 0x233814u: goto label_233814;
            case 0x233818u: goto label_233818;
            case 0x23381Cu: goto label_23381c;
            case 0x233820u: goto label_233820;
            case 0x233824u: goto label_233824;
            case 0x233828u: goto label_233828;
            case 0x23382Cu: goto label_23382c;
            case 0x233830u: goto label_233830;
            case 0x233834u: goto label_233834;
            case 0x233838u: goto label_233838;
            case 0x23383Cu: goto label_23383c;
            case 0x233840u: goto label_233840;
            case 0x233844u: goto label_233844;
            case 0x233848u: goto label_233848;
            case 0x23384Cu: goto label_23384c;
            case 0x233850u: goto label_233850;
            case 0x233854u: goto label_233854;
            case 0x233858u: goto label_233858;
            case 0x23385Cu: goto label_23385c;
            case 0x233860u: goto label_233860;
            case 0x233864u: goto label_233864;
            case 0x233868u: goto label_233868;
            case 0x23386Cu: goto label_23386c;
            case 0x233870u: goto label_233870;
            case 0x233874u: goto label_233874;
            case 0x233878u: goto label_233878;
            case 0x23387Cu: goto label_23387c;
            case 0x233880u: goto label_233880;
            case 0x233884u: goto label_233884;
            case 0x233888u: goto label_233888;
            case 0x23388Cu: goto label_23388c;
            case 0x233890u: goto label_233890;
            case 0x233894u: goto label_233894;
            case 0x233898u: goto label_233898;
            case 0x23389Cu: goto label_23389c;
            case 0x2338A0u: goto label_2338a0;
            case 0x2338A4u: goto label_2338a4;
            case 0x2338A8u: goto label_2338a8;
            case 0x2338ACu: goto label_2338ac;
            case 0x2338B0u: goto label_2338b0;
            case 0x2338B4u: goto label_2338b4;
            case 0x2338B8u: goto label_2338b8;
            case 0x2338BCu: goto label_2338bc;
            case 0x2338C0u: goto label_2338c0;
            case 0x2338C4u: goto label_2338c4;
            case 0x2338C8u: goto label_2338c8;
            case 0x2338CCu: goto label_2338cc;
            case 0x2338D0u: goto label_2338d0;
            case 0x2338D4u: goto label_2338d4;
            case 0x2338D8u: goto label_2338d8;
            case 0x2338DCu: goto label_2338dc;
            case 0x2338E0u: goto label_2338e0;
            case 0x2338E4u: goto label_2338e4;
            case 0x2338E8u: goto label_2338e8;
            case 0x2338ECu: goto label_2338ec;
            case 0x2338F0u: goto label_2338f0;
            case 0x2338F4u: goto label_2338f4;
            case 0x2338F8u: goto label_2338f8;
            case 0x2338FCu: goto label_2338fc;
            case 0x233900u: goto label_233900;
            case 0x233904u: goto label_233904;
            case 0x233908u: goto label_233908;
            case 0x23390Cu: goto label_23390c;
            case 0x233910u: goto label_233910;
            case 0x233914u: goto label_233914;
            case 0x233918u: goto label_233918;
            case 0x23391Cu: goto label_23391c;
            case 0x233920u: goto label_233920;
            case 0x233924u: goto label_233924;
            case 0x233928u: goto label_233928;
            case 0x23392Cu: goto label_23392c;
            case 0x233930u: goto label_233930;
            case 0x233934u: goto label_233934;
            case 0x233938u: goto label_233938;
            case 0x23393Cu: goto label_23393c;
            case 0x233940u: goto label_233940;
            case 0x233944u: goto label_233944;
            case 0x233948u: goto label_233948;
            case 0x23394Cu: goto label_23394c;
            case 0x233950u: goto label_233950;
            case 0x233954u: goto label_233954;
            case 0x233958u: goto label_233958;
            case 0x23395Cu: goto label_23395c;
            case 0x233960u: goto label_233960;
            case 0x233964u: goto label_233964;
            case 0x233968u: goto label_233968;
            case 0x23396Cu: goto label_23396c;
            case 0x233970u: goto label_233970;
            case 0x233974u: goto label_233974;
            case 0x233978u: goto label_233978;
            case 0x23397Cu: goto label_23397c;
            case 0x233980u: goto label_233980;
            case 0x233984u: goto label_233984;
            case 0x233988u: goto label_233988;
            case 0x23398Cu: goto label_23398c;
            case 0x233990u: goto label_233990;
            case 0x233994u: goto label_233994;
            case 0x233998u: goto label_233998;
            case 0x23399Cu: goto label_23399c;
            case 0x2339A0u: goto label_2339a0;
            case 0x2339A4u: goto label_2339a4;
            case 0x2339A8u: goto label_2339a8;
            case 0x2339ACu: goto label_2339ac;
            case 0x2339B0u: goto label_2339b0;
            case 0x2339B4u: goto label_2339b4;
            case 0x2339B8u: goto label_2339b8;
            case 0x2339BCu: goto label_2339bc;
            case 0x2339C0u: goto label_2339c0;
            case 0x2339C4u: goto label_2339c4;
            case 0x2339C8u: goto label_2339c8;
            case 0x2339CCu: goto label_2339cc;
            case 0x2339D0u: goto label_2339d0;
            case 0x2339D4u: goto label_2339d4;
            case 0x2339D8u: goto label_2339d8;
            case 0x2339DCu: goto label_2339dc;
            case 0x2339E0u: goto label_2339e0;
            case 0x2339E4u: goto label_2339e4;
            case 0x2339E8u: goto label_2339e8;
            case 0x2339ECu: goto label_2339ec;
            case 0x2339F0u: goto label_2339f0;
            case 0x2339F4u: goto label_2339f4;
            case 0x2339F8u: goto label_2339f8;
            case 0x2339FCu: goto label_2339fc;
            case 0x233A00u: goto label_233a00;
            case 0x233A04u: goto label_233a04;
            case 0x233A08u: goto label_233a08;
            case 0x233A0Cu: goto label_233a0c;
            case 0x233A10u: goto label_233a10;
            case 0x233A14u: goto label_233a14;
            case 0x233A18u: goto label_233a18;
            case 0x233A1Cu: goto label_233a1c;
            case 0x233A20u: goto label_233a20;
            case 0x233A24u: goto label_233a24;
            case 0x233A28u: goto label_233a28;
            case 0x233A2Cu: goto label_233a2c;
            case 0x233A30u: goto label_233a30;
            case 0x233A34u: goto label_233a34;
            case 0x233A38u: goto label_233a38;
            case 0x233A3Cu: goto label_233a3c;
            case 0x233A40u: goto label_233a40;
            case 0x233A44u: goto label_233a44;
            case 0x233A48u: goto label_233a48;
            case 0x233A4Cu: goto label_233a4c;
            case 0x233A50u: goto label_233a50;
            case 0x233A54u: goto label_233a54;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A60u: goto label_233a60;
            case 0x233A64u: goto label_233a64;
            case 0x233A68u: goto label_233a68;
            case 0x233A6Cu: goto label_233a6c;
            case 0x233A70u: goto label_233a70;
            case 0x233A74u: goto label_233a74;
            case 0x233A78u: goto label_233a78;
            case 0x233A7Cu: goto label_233a7c;
            case 0x233A80u: goto label_233a80;
            case 0x233A84u: goto label_233a84;
            case 0x233A88u: goto label_233a88;
            case 0x233A8Cu: goto label_233a8c;
            case 0x233A90u: goto label_233a90;
            case 0x233A94u: goto label_233a94;
            case 0x233A98u: goto label_233a98;
            case 0x233A9Cu: goto label_233a9c;
            case 0x233AA0u: goto label_233aa0;
            case 0x233AA4u: goto label_233aa4;
            case 0x233AA8u: goto label_233aa8;
            case 0x233AACu: goto label_233aac;
            case 0x233AB0u: goto label_233ab0;
            case 0x233AB4u: goto label_233ab4;
            case 0x233AB8u: goto label_233ab8;
            case 0x233ABCu: goto label_233abc;
            case 0x233AC0u: goto label_233ac0;
            case 0x233AC4u: goto label_233ac4;
            case 0x233AC8u: goto label_233ac8;
            case 0x233ACCu: goto label_233acc;
            case 0x233AD0u: goto label_233ad0;
            case 0x233AD4u: goto label_233ad4;
            case 0x233AD8u: goto label_233ad8;
            case 0x233ADCu: goto label_233adc;
            case 0x233AE0u: goto label_233ae0;
            case 0x233AE4u: goto label_233ae4;
            case 0x233AE8u: goto label_233ae8;
            case 0x233AECu: goto label_233aec;
            case 0x233AF0u: goto label_233af0;
            case 0x233AF4u: goto label_233af4;
            case 0x233AF8u: goto label_233af8;
            case 0x233AFCu: goto label_233afc;
            case 0x233B00u: goto label_233b00;
            case 0x233B04u: goto label_233b04;
            case 0x233B08u: goto label_233b08;
            case 0x233B0Cu: goto label_233b0c;
            case 0x233B10u: goto label_233b10;
            case 0x233B14u: goto label_233b14;
            case 0x233B18u: goto label_233b18;
            case 0x233B1Cu: goto label_233b1c;
            case 0x233B20u: goto label_233b20;
            case 0x233B24u: goto label_233b24;
            case 0x233B28u: goto label_233b28;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B30u: goto label_233b30;
            case 0x233B34u: goto label_233b34;
            case 0x233B38u: goto label_233b38;
            case 0x233B3Cu: goto label_233b3c;
            case 0x233B40u: goto label_233b40;
            case 0x233B44u: goto label_233b44;
            case 0x233B48u: goto label_233b48;
            case 0x233B4Cu: goto label_233b4c;
            case 0x233B50u: goto label_233b50;
            case 0x233B54u: goto label_233b54;
            case 0x233B58u: goto label_233b58;
            case 0x233B5Cu: goto label_233b5c;
            case 0x233B60u: goto label_233b60;
            case 0x233B64u: goto label_233b64;
            case 0x233B68u: goto label_233b68;
            case 0x233B6Cu: goto label_233b6c;
            case 0x233B70u: goto label_233b70;
            case 0x233B74u: goto label_233b74;
            case 0x233B78u: goto label_233b78;
            case 0x233B7Cu: goto label_233b7c;
            case 0x233B80u: goto label_233b80;
            case 0x233B84u: goto label_233b84;
            case 0x233B88u: goto label_233b88;
            case 0x233B8Cu: goto label_233b8c;
            case 0x233B90u: goto label_233b90;
            case 0x233B94u: goto label_233b94;
            case 0x233B98u: goto label_233b98;
            case 0x233B9Cu: goto label_233b9c;
            case 0x233BA0u: goto label_233ba0;
            case 0x233BA4u: goto label_233ba4;
            case 0x233BA8u: goto label_233ba8;
            case 0x233BACu: goto label_233bac;
            case 0x233BB0u: goto label_233bb0;
            case 0x233BB4u: goto label_233bb4;
            case 0x233BB8u: goto label_233bb8;
            case 0x233BBCu: goto label_233bbc;
            case 0x233BC0u: goto label_233bc0;
            case 0x233BC4u: goto label_233bc4;
            case 0x233BC8u: goto label_233bc8;
            case 0x233BCCu: goto label_233bcc;
            case 0x233BD0u: goto label_233bd0;
            case 0x233BD4u: goto label_233bd4;
            case 0x233BD8u: goto label_233bd8;
            case 0x233BDCu: goto label_233bdc;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BE8u: goto label_233be8;
            case 0x233BECu: goto label_233bec;
            case 0x233BF0u: goto label_233bf0;
            case 0x233BF4u: goto label_233bf4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233BFCu: goto label_233bfc;
            case 0x233C00u: goto label_233c00;
            case 0x233C04u: goto label_233c04;
            case 0x233C08u: goto label_233c08;
            case 0x233C0Cu: goto label_233c0c;
            case 0x233C10u: goto label_233c10;
            case 0x233C14u: goto label_233c14;
            case 0x233C18u: goto label_233c18;
            case 0x233C1Cu: goto label_233c1c;
            case 0x233C20u: goto label_233c20;
            case 0x233C24u: goto label_233c24;
            case 0x233C28u: goto label_233c28;
            case 0x233C2Cu: goto label_233c2c;
            case 0x233C30u: goto label_233c30;
            case 0x233C34u: goto label_233c34;
            case 0x233C38u: goto label_233c38;
            case 0x233C3Cu: goto label_233c3c;
            case 0x233C40u: goto label_233c40;
            case 0x233C44u: goto label_233c44;
            case 0x233C48u: goto label_233c48;
            case 0x233C4Cu: goto label_233c4c;
            case 0x233C50u: goto label_233c50;
            case 0x233C54u: goto label_233c54;
            case 0x233C58u: goto label_233c58;
            case 0x233C5Cu: goto label_233c5c;
            case 0x233C60u: goto label_233c60;
            case 0x233C64u: goto label_233c64;
            case 0x233C68u: goto label_233c68;
            case 0x233C6Cu: goto label_233c6c;
            case 0x233C70u: goto label_233c70;
            case 0x233C74u: goto label_233c74;
            case 0x233C78u: goto label_233c78;
            case 0x233C7Cu: goto label_233c7c;
            case 0x233C80u: goto label_233c80;
            case 0x233C84u: goto label_233c84;
            case 0x233C88u: goto label_233c88;
            case 0x233C8Cu: goto label_233c8c;
            case 0x233C90u: goto label_233c90;
            case 0x233C94u: goto label_233c94;
            case 0x233C98u: goto label_233c98;
            case 0x233C9Cu: goto label_233c9c;
            case 0x233CA0u: goto label_233ca0;
            case 0x233CA4u: goto label_233ca4;
            case 0x233CA8u: goto label_233ca8;
            case 0x233CACu: goto label_233cac;
            case 0x233CB0u: goto label_233cb0;
            case 0x233CB4u: goto label_233cb4;
            case 0x233CB8u: goto label_233cb8;
            case 0x233CBCu: goto label_233cbc;
            case 0x233CC0u: goto label_233cc0;
            case 0x233CC4u: goto label_233cc4;
            case 0x233CC8u: goto label_233cc8;
            case 0x233CCCu: goto label_233ccc;
            case 0x233CD0u: goto label_233cd0;
            case 0x233CD4u: goto label_233cd4;
            case 0x233CD8u: goto label_233cd8;
            case 0x233CDCu: goto label_233cdc;
            case 0x233CE0u: goto label_233ce0;
            case 0x233CE4u: goto label_233ce4;
            case 0x233CE8u: goto label_233ce8;
            case 0x233CECu: goto label_233cec;
            case 0x233CF0u: goto label_233cf0;
            case 0x233CF4u: goto label_233cf4;
            case 0x233CF8u: goto label_233cf8;
            case 0x233CFCu: goto label_233cfc;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D08u: goto label_233d08;
            case 0x233D0Cu: goto label_233d0c;
            case 0x233D10u: goto label_233d10;
            case 0x233D14u: goto label_233d14;
            case 0x233D18u: goto label_233d18;
            case 0x233D1Cu: goto label_233d1c;
            case 0x233D20u: goto label_233d20;
            case 0x233D24u: goto label_233d24;
            case 0x233D28u: goto label_233d28;
            case 0x233D2Cu: goto label_233d2c;
            case 0x233D30u: goto label_233d30;
            case 0x233D34u: goto label_233d34;
            case 0x233D38u: goto label_233d38;
            case 0x233D3Cu: goto label_233d3c;
            case 0x233D40u: goto label_233d40;
            case 0x233D44u: goto label_233d44;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D54u: goto label_233d54;
            case 0x233D58u: goto label_233d58;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D60u: goto label_233d60;
            case 0x233D64u: goto label_233d64;
            case 0x233D68u: goto label_233d68;
            case 0x233D6Cu: goto label_233d6c;
            case 0x233D70u: goto label_233d70;
            case 0x233D74u: goto label_233d74;
            case 0x233D78u: goto label_233d78;
            case 0x233D7Cu: goto label_233d7c;
            case 0x233D80u: goto label_233d80;
            case 0x233D84u: goto label_233d84;
            case 0x233D88u: goto label_233d88;
            case 0x233D8Cu: goto label_233d8c;
            case 0x233D90u: goto label_233d90;
            case 0x233D94u: goto label_233d94;
            case 0x233D98u: goto label_233d98;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DA0u: goto label_233da0;
            case 0x233DA4u: goto label_233da4;
            case 0x233DA8u: goto label_233da8;
            case 0x233DACu: goto label_233dac;
            case 0x233DB0u: goto label_233db0;
            case 0x233DB4u: goto label_233db4;
            case 0x233DB8u: goto label_233db8;
            case 0x233DBCu: goto label_233dbc;
            case 0x233DC0u: goto label_233dc0;
            case 0x233DC4u: goto label_233dc4;
            case 0x233DC8u: goto label_233dc8;
            case 0x233DCCu: goto label_233dcc;
            case 0x233DD0u: goto label_233dd0;
            case 0x233DD4u: goto label_233dd4;
            case 0x233DD8u: goto label_233dd8;
            case 0x233DDCu: goto label_233ddc;
            case 0x233DE0u: goto label_233de0;
            case 0x233DE4u: goto label_233de4;
            case 0x233DE8u: goto label_233de8;
            case 0x233DECu: goto label_233dec;
            case 0x233DF0u: goto label_233df0;
            case 0x233DF4u: goto label_233df4;
            case 0x233DF8u: goto label_233df8;
            case 0x233DFCu: goto label_233dfc;
            case 0x233E00u: goto label_233e00;
            case 0x233E04u: goto label_233e04;
            case 0x233E08u: goto label_233e08;
            case 0x233E0Cu: goto label_233e0c;
            case 0x233E10u: goto label_233e10;
            case 0x233E14u: goto label_233e14;
            case 0x233E18u: goto label_233e18;
            case 0x233E1Cu: goto label_233e1c;
            case 0x233E20u: goto label_233e20;
            case 0x233E24u: goto label_233e24;
            case 0x233E28u: goto label_233e28;
            case 0x233E2Cu: goto label_233e2c;
            case 0x233E30u: goto label_233e30;
            case 0x233E34u: goto label_233e34;
            case 0x233E38u: goto label_233e38;
            case 0x233E3Cu: goto label_233e3c;
            case 0x233E40u: goto label_233e40;
            case 0x233E44u: goto label_233e44;
            case 0x233E48u: goto label_233e48;
            case 0x233E4Cu: goto label_233e4c;
            case 0x233E50u: goto label_233e50;
            case 0x233E54u: goto label_233e54;
            case 0x233E58u: goto label_233e58;
            case 0x233E5Cu: goto label_233e5c;
            case 0x233E60u: goto label_233e60;
            case 0x233E64u: goto label_233e64;
            case 0x233E68u: goto label_233e68;
            case 0x233E6Cu: goto label_233e6c;
            case 0x233E70u: goto label_233e70;
            case 0x233E74u: goto label_233e74;
            case 0x233E78u: goto label_233e78;
            case 0x233E7Cu: goto label_233e7c;
            case 0x233E80u: goto label_233e80;
            case 0x233E84u: goto label_233e84;
            case 0x233E88u: goto label_233e88;
            case 0x233E8Cu: goto label_233e8c;
            case 0x233E90u: goto label_233e90;
            case 0x233E94u: goto label_233e94;
            case 0x233E98u: goto label_233e98;
            case 0x233E9Cu: goto label_233e9c;
            case 0x233EA0u: goto label_233ea0;
            case 0x233EA4u: goto label_233ea4;
            case 0x233EA8u: goto label_233ea8;
            case 0x233EACu: goto label_233eac;
            case 0x233EB0u: goto label_233eb0;
            case 0x233EB4u: goto label_233eb4;
            case 0x233EB8u: goto label_233eb8;
            case 0x233EBCu: goto label_233ebc;
            case 0x233EC0u: goto label_233ec0;
            case 0x233EC4u: goto label_233ec4;
            case 0x233EC8u: goto label_233ec8;
            case 0x233ECCu: goto label_233ecc;
            case 0x233ED0u: goto label_233ed0;
            case 0x233ED4u: goto label_233ed4;
            case 0x233ED8u: goto label_233ed8;
            case 0x233EDCu: goto label_233edc;
            case 0x233EE0u: goto label_233ee0;
            case 0x233EE4u: goto label_233ee4;
            case 0x233EE8u: goto label_233ee8;
            case 0x233EECu: goto label_233eec;
            case 0x233EF0u: goto label_233ef0;
            case 0x233EF4u: goto label_233ef4;
            case 0x233EF8u: goto label_233ef8;
            case 0x233EFCu: goto label_233efc;
            case 0x233F00u: goto label_233f00;
            case 0x233F04u: goto label_233f04;
            case 0x233F08u: goto label_233f08;
            case 0x233F0Cu: goto label_233f0c;
            case 0x233F10u: goto label_233f10;
            case 0x233F14u: goto label_233f14;
            case 0x233F18u: goto label_233f18;
            case 0x233F1Cu: goto label_233f1c;
            case 0x233F20u: goto label_233f20;
            case 0x233F24u: goto label_233f24;
            case 0x233F28u: goto label_233f28;
            case 0x233F2Cu: goto label_233f2c;
            case 0x233F30u: goto label_233f30;
            case 0x233F34u: goto label_233f34;
            case 0x233F38u: goto label_233f38;
            case 0x233F3Cu: goto label_233f3c;
            case 0x233F40u: goto label_233f40;
            case 0x233F44u: goto label_233f44;
            case 0x233F48u: goto label_233f48;
            case 0x233F4Cu: goto label_233f4c;
            case 0x233F50u: goto label_233f50;
            case 0x233F54u: goto label_233f54;
            case 0x233F58u: goto label_233f58;
            case 0x233F5Cu: goto label_233f5c;
            case 0x233F60u: goto label_233f60;
            case 0x233F64u: goto label_233f64;
            case 0x233F68u: goto label_233f68;
            case 0x233F6Cu: goto label_233f6c;
            case 0x233F70u: goto label_233f70;
            case 0x233F74u: goto label_233f74;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233F80u: goto label_233f80;
            case 0x233F84u: goto label_233f84;
            case 0x233F88u: goto label_233f88;
            case 0x233F8Cu: goto label_233f8c;
            case 0x233F90u: goto label_233f90;
            case 0x233F94u: goto label_233f94;
            case 0x233F98u: goto label_233f98;
            case 0x233F9Cu: goto label_233f9c;
            case 0x233FA0u: goto label_233fa0;
            case 0x233FA4u: goto label_233fa4;
            case 0x233FA8u: goto label_233fa8;
            case 0x233FACu: goto label_233fac;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FB8u: goto label_233fb8;
            case 0x233FBCu: goto label_233fbc;
            case 0x233FC0u: goto label_233fc0;
            case 0x233FC4u: goto label_233fc4;
            case 0x233FC8u: goto label_233fc8;
            case 0x233FCCu: goto label_233fcc;
            case 0x233FD0u: goto label_233fd0;
            case 0x233FD4u: goto label_233fd4;
            case 0x233FD8u: goto label_233fd8;
            case 0x233FDCu: goto label_233fdc;
            case 0x233FE0u: goto label_233fe0;
            case 0x233FE4u: goto label_233fe4;
            case 0x233FE8u: goto label_233fe8;
            case 0x233FECu: goto label_233fec;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF4u: goto label_233ff4;
            case 0x233FF8u: goto label_233ff8;
            case 0x233FFCu: goto label_233ffc;
            case 0x234000u: goto label_234000;
            case 0x234004u: goto label_234004;
            case 0x234008u: goto label_234008;
            case 0x23400Cu: goto label_23400c;
            case 0x234010u: goto label_234010;
            case 0x234014u: goto label_234014;
            case 0x234018u: goto label_234018;
            case 0x23401Cu: goto label_23401c;
            case 0x234020u: goto label_234020;
            case 0x234024u: goto label_234024;
            case 0x234028u: goto label_234028;
            case 0x23402Cu: goto label_23402c;
            case 0x234030u: goto label_234030;
            case 0x234034u: goto label_234034;
            case 0x234038u: goto label_234038;
            case 0x23403Cu: goto label_23403c;
            case 0x234040u: goto label_234040;
            case 0x234044u: goto label_234044;
            case 0x234048u: goto label_234048;
            case 0x23404Cu: goto label_23404c;
            case 0x234050u: goto label_234050;
            case 0x234054u: goto label_234054;
            case 0x234058u: goto label_234058;
            case 0x23405Cu: goto label_23405c;
            case 0x234060u: goto label_234060;
            case 0x234064u: goto label_234064;
            case 0x234068u: goto label_234068;
            case 0x23406Cu: goto label_23406c;
            case 0x234070u: goto label_234070;
            case 0x234074u: goto label_234074;
            case 0x234078u: goto label_234078;
            case 0x23407Cu: goto label_23407c;
            case 0x234080u: goto label_234080;
            case 0x234084u: goto label_234084;
            case 0x234088u: goto label_234088;
            case 0x23408Cu: goto label_23408c;
            case 0x234090u: goto label_234090;
            case 0x234094u: goto label_234094;
            case 0x234098u: goto label_234098;
            case 0x23409Cu: goto label_23409c;
            case 0x2340A0u: goto label_2340a0;
            case 0x2340A4u: goto label_2340a4;
            case 0x2340A8u: goto label_2340a8;
            case 0x2340ACu: goto label_2340ac;
            case 0x2340B0u: goto label_2340b0;
            case 0x2340B4u: goto label_2340b4;
            case 0x2340B8u: goto label_2340b8;
            case 0x2340BCu: goto label_2340bc;
            case 0x2340C0u: goto label_2340c0;
            case 0x2340C4u: goto label_2340c4;
            case 0x2340C8u: goto label_2340c8;
            case 0x2340CCu: goto label_2340cc;
            case 0x2340D0u: goto label_2340d0;
            case 0x2340D4u: goto label_2340d4;
            case 0x2340D8u: goto label_2340d8;
            case 0x2340DCu: goto label_2340dc;
            case 0x2340E0u: goto label_2340e0;
            case 0x2340E4u: goto label_2340e4;
            case 0x2340E8u: goto label_2340e8;
            case 0x2340ECu: goto label_2340ec;
            case 0x2340F0u: goto label_2340f0;
            case 0x2340F4u: goto label_2340f4;
            case 0x2340F8u: goto label_2340f8;
            case 0x2340FCu: goto label_2340fc;
            case 0x234100u: goto label_234100;
            case 0x234104u: goto label_234104;
            case 0x234108u: goto label_234108;
            case 0x23410Cu: goto label_23410c;
            case 0x234110u: goto label_234110;
            case 0x234114u: goto label_234114;
            case 0x234118u: goto label_234118;
            case 0x23411Cu: goto label_23411c;
            case 0x234120u: goto label_234120;
            case 0x234124u: goto label_234124;
            case 0x234128u: goto label_234128;
            case 0x23412Cu: goto label_23412c;
            case 0x234130u: goto label_234130;
            case 0x234134u: goto label_234134;
            case 0x234138u: goto label_234138;
            case 0x23413Cu: goto label_23413c;
            case 0x234140u: goto label_234140;
            case 0x234144u: goto label_234144;
            case 0x234148u: goto label_234148;
            case 0x23414Cu: goto label_23414c;
            case 0x234150u: goto label_234150;
            case 0x234154u: goto label_234154;
            case 0x234158u: goto label_234158;
            case 0x23415Cu: goto label_23415c;
            case 0x234160u: goto label_234160;
            case 0x234164u: goto label_234164;
            case 0x234168u: goto label_234168;
            case 0x23416Cu: goto label_23416c;
            case 0x234170u: goto label_234170;
            case 0x234174u: goto label_234174;
            case 0x234178u: goto label_234178;
            case 0x23417Cu: goto label_23417c;
            case 0x234180u: goto label_234180;
            case 0x234184u: goto label_234184;
            case 0x234188u: goto label_234188;
            case 0x23418Cu: goto label_23418c;
            case 0x234190u: goto label_234190;
            case 0x234194u: goto label_234194;
            case 0x234198u: goto label_234198;
            case 0x23419Cu: goto label_23419c;
            case 0x2341A0u: goto label_2341a0;
            case 0x2341A4u: goto label_2341a4;
            case 0x2341A8u: goto label_2341a8;
            case 0x2341ACu: goto label_2341ac;
            case 0x2341B0u: goto label_2341b0;
            case 0x2341B4u: goto label_2341b4;
            case 0x2341B8u: goto label_2341b8;
            case 0x2341BCu: goto label_2341bc;
            case 0x2341C0u: goto label_2341c0;
            case 0x2341C4u: goto label_2341c4;
            case 0x2341C8u: goto label_2341c8;
            case 0x2341CCu: goto label_2341cc;
            case 0x2341D0u: goto label_2341d0;
            case 0x2341D4u: goto label_2341d4;
            case 0x2341D8u: goto label_2341d8;
            case 0x2341DCu: goto label_2341dc;
            case 0x2341E0u: goto label_2341e0;
            case 0x2341E4u: goto label_2341e4;
            case 0x2341E8u: goto label_2341e8;
            case 0x2341ECu: goto label_2341ec;
            case 0x2341F0u: goto label_2341f0;
            case 0x2341F4u: goto label_2341f4;
            case 0x2341F8u: goto label_2341f8;
            case 0x2341FCu: goto label_2341fc;
            case 0x234200u: goto label_234200;
            case 0x234204u: goto label_234204;
            case 0x234208u: goto label_234208;
            case 0x23420Cu: goto label_23420c;
            case 0x234210u: goto label_234210;
            case 0x234214u: goto label_234214;
            case 0x234218u: goto label_234218;
            case 0x23421Cu: goto label_23421c;
            case 0x234220u: goto label_234220;
            case 0x234224u: goto label_234224;
            case 0x234228u: goto label_234228;
            case 0x23422Cu: goto label_23422c;
            case 0x234230u: goto label_234230;
            case 0x234234u: goto label_234234;
            case 0x234238u: goto label_234238;
            case 0x23423Cu: goto label_23423c;
            case 0x234240u: goto label_234240;
            case 0x234244u: goto label_234244;
            case 0x234248u: goto label_234248;
            case 0x23424Cu: goto label_23424c;
            case 0x234250u: goto label_234250;
            case 0x234254u: goto label_234254;
            case 0x234258u: goto label_234258;
            case 0x23425Cu: goto label_23425c;
            case 0x234260u: goto label_234260;
            case 0x234264u: goto label_234264;
            case 0x234268u: goto label_234268;
            case 0x23426Cu: goto label_23426c;
            case 0x234270u: goto label_234270;
            case 0x234274u: goto label_234274;
            case 0x234278u: goto label_234278;
            case 0x23427Cu: goto label_23427c;
            case 0x234280u: goto label_234280;
            case 0x234284u: goto label_234284;
            case 0x234288u: goto label_234288;
            case 0x23428Cu: goto label_23428c;
            case 0x234290u: goto label_234290;
            case 0x234294u: goto label_234294;
            case 0x234298u: goto label_234298;
            case 0x23429Cu: goto label_23429c;
            case 0x2342A0u: goto label_2342a0;
            case 0x2342A4u: goto label_2342a4;
            case 0x2342A8u: goto label_2342a8;
            case 0x2342ACu: goto label_2342ac;
            case 0x2342B0u: goto label_2342b0;
            case 0x2342B4u: goto label_2342b4;
            case 0x2342B8u: goto label_2342b8;
            case 0x2342BCu: goto label_2342bc;
            case 0x2342C0u: goto label_2342c0;
            case 0x2342C4u: goto label_2342c4;
            case 0x2342C8u: goto label_2342c8;
            case 0x2342CCu: goto label_2342cc;
            case 0x2342D0u: goto label_2342d0;
            case 0x2342D4u: goto label_2342d4;
            case 0x2342D8u: goto label_2342d8;
            case 0x2342DCu: goto label_2342dc;
            case 0x2342E0u: goto label_2342e0;
            case 0x2342E4u: goto label_2342e4;
            case 0x2342E8u: goto label_2342e8;
            case 0x2342ECu: goto label_2342ec;
            case 0x2342F0u: goto label_2342f0;
            case 0x2342F4u: goto label_2342f4;
            case 0x2342F8u: goto label_2342f8;
            case 0x2342FCu: goto label_2342fc;
            case 0x234300u: goto label_234300;
            case 0x234304u: goto label_234304;
            case 0x234308u: goto label_234308;
            case 0x23430Cu: goto label_23430c;
            case 0x234310u: goto label_234310;
            case 0x234314u: goto label_234314;
            case 0x234318u: goto label_234318;
            case 0x23431Cu: goto label_23431c;
            case 0x234320u: goto label_234320;
            case 0x234324u: goto label_234324;
            case 0x234328u: goto label_234328;
            case 0x23432Cu: goto label_23432c;
            case 0x234330u: goto label_234330;
            case 0x234334u: goto label_234334;
            case 0x234338u: goto label_234338;
            case 0x23433Cu: goto label_23433c;
            case 0x234340u: goto label_234340;
            case 0x234344u: goto label_234344;
            case 0x234348u: goto label_234348;
            case 0x23434Cu: goto label_23434c;
            case 0x234350u: goto label_234350;
            case 0x234354u: goto label_234354;
            case 0x234358u: goto label_234358;
            case 0x23435Cu: goto label_23435c;
            case 0x234360u: goto label_234360;
            case 0x234364u: goto label_234364;
            case 0x234368u: goto label_234368;
            case 0x23436Cu: goto label_23436c;
            case 0x234370u: goto label_234370;
            case 0x234374u: goto label_234374;
            case 0x234378u: goto label_234378;
            case 0x23437Cu: goto label_23437c;
            case 0x234380u: goto label_234380;
            case 0x234384u: goto label_234384;
            case 0x234388u: goto label_234388;
            case 0x23438Cu: goto label_23438c;
            case 0x234390u: goto label_234390;
            case 0x234394u: goto label_234394;
            case 0x234398u: goto label_234398;
            case 0x23439Cu: goto label_23439c;
            case 0x2343A0u: goto label_2343a0;
            case 0x2343A4u: goto label_2343a4;
            case 0x2343A8u: goto label_2343a8;
            case 0x2343ACu: goto label_2343ac;
            case 0x2343B0u: goto label_2343b0;
            case 0x2343B4u: goto label_2343b4;
            case 0x2343B8u: goto label_2343b8;
            case 0x2343BCu: goto label_2343bc;
            case 0x2343C0u: goto label_2343c0;
            case 0x2343C4u: goto label_2343c4;
            case 0x2343C8u: goto label_2343c8;
            case 0x2343CCu: goto label_2343cc;
            case 0x2343D0u: goto label_2343d0;
            case 0x2343D4u: goto label_2343d4;
            case 0x2343D8u: goto label_2343d8;
            case 0x2343DCu: goto label_2343dc;
            case 0x2343E0u: goto label_2343e0;
            case 0x2343E4u: goto label_2343e4;
            case 0x2343E8u: goto label_2343e8;
            case 0x2343ECu: goto label_2343ec;
            case 0x2343F0u: goto label_2343f0;
            case 0x2343F4u: goto label_2343f4;
            case 0x2343F8u: goto label_2343f8;
            case 0x2343FCu: goto label_2343fc;
            case 0x234400u: goto label_234400;
            case 0x234404u: goto label_234404;
            case 0x234408u: goto label_234408;
            case 0x23440Cu: goto label_23440c;
            case 0x234410u: goto label_234410;
            case 0x234414u: goto label_234414;
            case 0x234418u: goto label_234418;
            case 0x23441Cu: goto label_23441c;
            case 0x234420u: goto label_234420;
            case 0x234424u: goto label_234424;
            case 0x234428u: goto label_234428;
            case 0x23442Cu: goto label_23442c;
            case 0x234430u: goto label_234430;
            case 0x234434u: goto label_234434;
            case 0x234438u: goto label_234438;
            case 0x23443Cu: goto label_23443c;
            case 0x234440u: goto label_234440;
            case 0x234444u: goto label_234444;
            case 0x234448u: goto label_234448;
            case 0x23444Cu: goto label_23444c;
            case 0x234450u: goto label_234450;
            case 0x234454u: goto label_234454;
            case 0x234458u: goto label_234458;
            case 0x23445Cu: goto label_23445c;
            case 0x234460u: goto label_234460;
            case 0x234464u: goto label_234464;
            case 0x234468u: goto label_234468;
            case 0x23446Cu: goto label_23446c;
            case 0x234470u: goto label_234470;
            case 0x234474u: goto label_234474;
            case 0x234478u: goto label_234478;
            default: break;
        }
        return;
    }
    ctx->pc = 0x233AF0u;
label_233af0:
    // 0x233af0: 0x862201cc
    ctx->pc = 0x233af0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 460)));
label_233af4:
    // 0x233af4: 0x184001b3
label_233af8:
    if (ctx->pc == 0x233AF8u) {
        ctx->pc = 0x233AF8u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 460)));
        ctx->pc = 0x233AFCu;
        goto label_233afc;
    }
    ctx->pc = 0x233AF4u;
    {
        const bool branch_taken_0x233af4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x233AF8u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 460)));
        if (branch_taken_0x233af4) {
            ctx->pc = 0x2341C4u;
            goto label_2341c4;
        }
    }
    ctx->pc = 0x233AFCu;
label_233afc:
    // 0x233afc: 0x3c020031
    ctx->pc = 0x233afcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_233b00:
    // 0x233b00: 0x9442ffbc
    ctx->pc = 0x233b00u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967228)));
label_233b04:
    // 0x233b04: 0x621023
    ctx->pc = 0x233b04u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_233b08:
    // 0x233b08: 0xa62201cc
    ctx->pc = 0x233b08u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 460), (uint16_t)GPR_U32(ctx, 2));
label_233b0c:
    // 0x233b0c: 0x21400
    ctx->pc = 0x233b0cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
label_233b10:
    // 0x233b10: 0x5c4001ad
label_233b14:
    if (ctx->pc == 0x233B14u) {
        ctx->pc = 0x233B14u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 18));
        ctx->pc = 0x233B18u;
        goto label_233b18;
    }
    ctx->pc = 0x233B10u;
    {
        const bool branch_taken_0x233b10 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x233b10) {
            ctx->pc = 0x233B14u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 18));
            ctx->pc = 0x2341C8u;
            goto label_2341c8;
        }
    }
    ctx->pc = 0x233B18u;
label_233b18:
    // 0x233b18: 0xc08d382
label_233b1c:
    if (ctx->pc == 0x233B1Cu) {
        ctx->pc = 0x233B1Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233B20u;
        goto label_233b20;
    }
    ctx->pc = 0x233B18u;
    SET_GPR_U32(ctx, 31, 0x233B20u);
    ctx->pc = 0x233B1Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x234E08u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_player_display_0x234e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233B20u; }
    }
    if (ctx->pc != 0x233B20u) { return; }
    ctx->pc = 0x233B20u;
label_233b20:
    // 0x233b20: 0x100001a9
label_233b24:
    if (ctx->pc == 0x233B24u) {
        ctx->pc = 0x233B24u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 18));
        ctx->pc = 0x233B28u;
        goto label_233b28;
    }
    ctx->pc = 0x233B20u;
    {
        const bool branch_taken_0x233b20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x233B24u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 18));
        if (branch_taken_0x233b20) {
            ctx->pc = 0x2341C8u;
            goto label_2341c8;
        }
    }
    ctx->pc = 0x233B28u;
label_233b28:
    // 0x233b28: 0x3c020031
    ctx->pc = 0x233b28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_233b2c:
    // 0x233b2c: 0x8c430018
    ctx->pc = 0x233b2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_233b30:
    // 0x233b30: 0x24024010
    ctx->pc = 0x233b30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16400));
label_233b34:
    // 0x233b34: 0x546201a4
label_233b38:
    if (ctx->pc == 0x233B38u) {
        ctx->pc = 0x233B38u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 18));
        ctx->pc = 0x233B3Cu;
        goto label_233b3c;
    }
    ctx->pc = 0x233B34u;
    {
        const bool branch_taken_0x233b34 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x233b34) {
            ctx->pc = 0x233B38u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 18));
            ctx->pc = 0x2341C8u;
            goto label_2341c8;
        }
    }
    ctx->pc = 0x233B3Cu;
label_233b3c:
    // 0x233b3c: 0x8e232ad4
    ctx->pc = 0x233b3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 10964)));
label_233b40:
    // 0x233b40: 0x24020001
    ctx->pc = 0x233b40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_233b44:
    // 0x233b44: 0x546201a0
label_233b48:
    if (ctx->pc == 0x233B48u) {
        ctx->pc = 0x233B48u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 18));
        ctx->pc = 0x233B4Cu;
        goto label_233b4c;
    }
    ctx->pc = 0x233B44u;
    {
        const bool branch_taken_0x233b44 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x233b44) {
            ctx->pc = 0x233B48u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 18));
            ctx->pc = 0x2341C8u;
            goto label_2341c8;
        }
    }
    ctx->pc = 0x233B4Cu;
label_233b4c:
    // 0x233b4c: 0x3c030031
    ctx->pc = 0x233b4cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_233b50:
    // 0x233b50: 0x24631b90
    ctx->pc = 0x233b50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7056));
label_233b54:
    // 0x233b54: 0x2402003c
    ctx->pc = 0x233b54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
label_233b58:
    // 0x233b58: 0x2621018
    ctx->pc = 0x233b58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_233b5c:
    // 0x233b5c: 0x621821
    ctx->pc = 0x233b5cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_233b60:
    // 0x233b60: 0x8c620008
    ctx->pc = 0x233b60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_233b64:
    // 0x233b64: 0x3c030800
    ctx->pc = 0x233b64u;
    SET_GPR_U32(ctx, 3, ((uint32_t)2048 << 16));
label_233b68:
    // 0x233b68: 0x431024
    ctx->pc = 0x233b68u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_233b6c:
    // 0x233b6c: 0x10400004
label_233b70:
    if (ctx->pc == 0x233B70u) {
        ctx->pc = 0x233B70u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        ctx->pc = 0x233B74u;
        goto label_233b74;
    }
    ctx->pc = 0x233B6Cu;
    {
        const bool branch_taken_0x233b6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x233B70u;
        SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
        if (branch_taken_0x233b6c) {
            ctx->pc = 0x233B80u;
            goto label_233b80;
        }
    }
    ctx->pc = 0x233B74u;
label_233b74:
    // 0x233b74: 0xc08c684
label_233b78:
    if (ctx->pc == 0x233B78u) {
        ctx->pc = 0x233B78u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233B7Cu;
        goto label_233b7c;
    }
    ctx->pc = 0x233B74u;
    SET_GPR_U32(ctx, 31, 0x233B7Cu);
    ctx->pc = 0x233B78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x231A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        inactivate_player_0x231a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233B7Cu; }
    }
    if (ctx->pc != 0x233B7Cu) { return; }
    ctx->pc = 0x233B7Cu;
label_233b7c:
    // 0x233b7c: 0x3c030031
    ctx->pc = 0x233b7cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_233b80:
    // 0x233b80: 0x24631b90
    ctx->pc = 0x233b80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7056));
label_233b84:
    // 0x233b84: 0x2402003c
    ctx->pc = 0x233b84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 60));
label_233b88:
    // 0x233b88: 0x2621018
    ctx->pc = 0x233b88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_233b8c:
    // 0x233b8c: 0x621821
    ctx->pc = 0x233b8cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_233b90:
    // 0x233b90: 0x8c620008
    ctx->pc = 0x233b90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_233b94:
    // 0x233b94: 0x3c030200
    ctx->pc = 0x233b94u;
    SET_GPR_U32(ctx, 3, ((uint32_t)512 << 16));
label_233b98:
    // 0x233b98: 0x431024
    ctx->pc = 0x233b98u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_233b9c:
    // 0x233b9c: 0x54400189
label_233ba0:
    if (ctx->pc == 0x233BA0u) {
        ctx->pc = 0x233BA0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 10964), GPR_U32(ctx, 0));
        ctx->pc = 0x233BA4u;
        goto label_233ba4;
    }
    ctx->pc = 0x233B9Cu;
    {
        const bool branch_taken_0x233b9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x233b9c) {
            ctx->pc = 0x233BA0u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 10964), GPR_U32(ctx, 0));
            ctx->pc = 0x2341C4u;
            goto label_2341c4;
        }
    }
    ctx->pc = 0x233BA4u;
label_233ba4:
    // 0x233ba4: 0x10000188
label_233ba8:
    if (ctx->pc == 0x233BA8u) {
        ctx->pc = 0x233BA8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 18));
        ctx->pc = 0x233BACu;
        goto label_233bac;
    }
    ctx->pc = 0x233BA4u;
    {
        const bool branch_taken_0x233ba4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x233BA8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 18));
        if (branch_taken_0x233ba4) {
            ctx->pc = 0x2341C8u;
            goto label_2341c8;
        }
    }
    ctx->pc = 0x233BACu;
label_233bac:
    // 0x233bac: 0x3c020032
    ctx->pc = 0x233bacu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_233bb0:
    // 0x233bb0: 0x8c4207d0
    ctx->pc = 0x233bb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2000)));
label_233bb4:
    // 0x233bb4: 0x2a00a
    ctx->pc = 0x233bb4u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 0));
label_233bb8:
    // 0x233bb8: 0x8e230100
    ctx->pc = 0x233bb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 256)));
label_233bbc:
    // 0x233bbc: 0x24020004
    ctx->pc = 0x233bbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_233bc0:
    // 0x233bc0: 0x10620009
label_233bc4:
    if (ctx->pc == 0x233BC4u) {
        ctx->pc = 0x233BC4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x233BC8u;
        goto label_233bc8;
    }
    ctx->pc = 0x233BC0u;
    {
        const bool branch_taken_0x233bc0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x233BC4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x233bc0) {
            ctx->pc = 0x233BE8u;
            goto label_233be8;
        }
    }
    ctx->pc = 0x233BC8u;
label_233bc8:
    // 0x233bc8: 0x8e240080
    ctx->pc = 0x233bc8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_233bcc:
    // 0x233bcc: 0xc0b41e4
label_233bd0:
    if (ctx->pc == 0x233BD0u) {
        ctx->pc = 0x233BD0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233BD4u;
        goto label_233bd4;
    }
    ctx->pc = 0x233BCCu;
    SET_GPR_U32(ctx, 31, 0x233BD4u);
    ctx->pc = 0x233BD0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233BD4u; }
    }
    if (ctx->pc != 0x233BD4u) { return; }
    ctx->pc = 0x233BD4u;
label_233bd4:
    // 0x233bd4: 0x8e2406a0
    ctx->pc = 0x233bd4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 1696)));
label_233bd8:
    // 0x233bd8: 0x10800003
label_233bdc:
    if (ctx->pc == 0x233BDCu) {
        ctx->pc = 0x233BDCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x233BE0u;
        goto label_233be0;
    }
    ctx->pc = 0x233BD8u;
    {
        const bool branch_taken_0x233bd8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x233BDCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x233bd8) {
            ctx->pc = 0x233BE8u;
            goto label_233be8;
        }
    }
    ctx->pc = 0x233BE0u;
label_233be0:
    // 0x233be0: 0xc0b41b8
label_233be4:
    if (ctx->pc == 0x233BE4u) {
        ctx->pc = 0x233BE4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233BE8u;
        goto label_233be8;
    }
    ctx->pc = 0x233BE0u;
    SET_GPR_U32(ctx, 31, 0x233BE8u);
    ctx->pc = 0x233BE4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233BE8u; }
    }
    if (ctx->pc != 0x233BE8u) { return; }
    ctx->pc = 0x233BE8u;
label_233be8:
    // 0x233be8: 0x16c00004
label_233bec:
    if (ctx->pc == 0x233BECu) {
        ctx->pc = 0x233BECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x233BF0u;
        goto label_233bf0;
    }
    ctx->pc = 0x233BE8u;
    {
        const bool branch_taken_0x233be8 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        ctx->pc = 0x233BECu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x233be8) {
            ctx->pc = 0x233BFCu;
            goto label_233bfc;
        }
    }
    ctx->pc = 0x233BF0u;
label_233bf0:
    // 0x233bf0: 0x8c420810
    ctx->pc = 0x233bf0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2064)));
label_233bf4:
    // 0x233bf4: 0x5040000e
label_233bf8:
    if (ctx->pc == 0x233BF8u) {
        ctx->pc = 0x233BF8u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2344)));
        ctx->pc = 0x233BFCu;
        goto label_233bfc;
    }
    ctx->pc = 0x233BF4u;
    {
        const bool branch_taken_0x233bf4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x233bf4) {
            ctx->pc = 0x233BF8u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2344)));
            ctx->pc = 0x233C30u;
            goto label_233c30;
        }
    }
    ctx->pc = 0x233BFCu;
label_233bfc:
    // 0x233bfc: 0xc08ca52
label_233c00:
    if (ctx->pc == 0x233C00u) {
        ctx->pc = 0x233C04u;
        goto label_233c04;
    }
    ctx->pc = 0x233BFCu;
    SET_GPR_U32(ctx, 31, 0x233C04u);
    ctx->pc = 0x232948u;
    {
        const uint32_t __entryPc = ctx->pc;
        anybody_playing_0x232948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233C04u; }
    }
    if (ctx->pc != 0x233C04u) { return; }
    ctx->pc = 0x233C04u;
label_233c04:
    // 0x233c04: 0x5440000a
label_233c08:
    if (ctx->pc == 0x233C08u) {
        ctx->pc = 0x233C08u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2344)));
        ctx->pc = 0x233C0Cu;
        goto label_233c0c;
    }
    ctx->pc = 0x233C04u;
    {
        const bool branch_taken_0x233c04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x233c04) {
            ctx->pc = 0x233C08u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2344)));
            ctx->pc = 0x233C30u;
            goto label_233c30;
        }
    }
    ctx->pc = 0x233C0Cu;
label_233c0c:
    // 0x233c0c: 0xc08cc10
label_233c10:
    if (ctx->pc == 0x233C10u) {
        ctx->pc = 0x233C10u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233C14u;
        goto label_233c14;
    }
    ctx->pc = 0x233C0Cu;
    SET_GPR_U32(ctx, 31, 0x233C14u);
    ctx->pc = 0x233C10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x233040u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerProcessSkinFX_0x233040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233C14u; }
    }
    if (ctx->pc != 0x233C14u) { return; }
    ctx->pc = 0x233C14u;
label_233c14:
    // 0x233c14: 0xc093d1c
label_233c18:
    if (ctx->pc == 0x233C18u) {
        ctx->pc = 0x233C18u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233C1Cu;
        goto label_233c1c;
    }
    ctx->pc = 0x233C14u;
    SET_GPR_U32(ctx, 31, 0x233C1Cu);
    ctx->pc = 0x233C18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24F470u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerDoWeapTrail_0x24f470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233C1Cu; }
    }
    if (ctx->pc != 0x233C1Cu) { return; }
    ctx->pc = 0x233C1Cu;
label_233c1c:
    // 0x233c1c: 0x220202d
    ctx->pc = 0x233c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_233c20:
    // 0x233c20: 0xc08caf2
label_233c24:
    if (ctx->pc == 0x233C24u) {
        ctx->pc = 0x233C24u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233C28u;
        goto label_233c28;
    }
    ctx->pc = 0x233C20u;
    SET_GPR_U32(ctx, 31, 0x233C28u);
    ctx->pc = 0x233C24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x232BC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_exit_0x232bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233C28u; }
    }
    if (ctx->pc != 0x233C28u) { return; }
    ctx->pc = 0x233C28u;
label_233c28:
    // 0x233c28: 0x10000167
label_233c2c:
    if (ctx->pc == 0x233C2Cu) {
        ctx->pc = 0x233C2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 18));
        ctx->pc = 0x233C30u;
        goto label_233c30;
    }
    ctx->pc = 0x233C28u;
    {
        const bool branch_taken_0x233c28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x233C2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 18));
        if (branch_taken_0x233c28) {
            ctx->pc = 0x2341C8u;
            goto label_2341c8;
        }
    }
    ctx->pc = 0x233C30u;
label_233c30:
    // 0x233c30: 0x28420258
    ctx->pc = 0x233c30u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 600));
label_233c34:
    // 0x233c34: 0x14400005
label_233c38:
    if (ctx->pc == 0x233C38u) {
        ctx->pc = 0x233C38u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2344)));
        ctx->pc = 0x233C3Cu;
        goto label_233c3c;
    }
    ctx->pc = 0x233C34u;
    {
        const bool branch_taken_0x233c34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x233C38u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2344)));
        if (branch_taken_0x233c34) {
            ctx->pc = 0x233C4Cu;
            goto label_233c4c;
        }
    }
    ctx->pc = 0x233C3Cu;
label_233c3c:
    // 0x233c3c: 0x2462fde4
    ctx->pc = 0x233c3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294966756));
label_233c40:
    // 0x233c40: 0xa6220928
    ctx->pc = 0x233c40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2344), (uint16_t)GPR_U32(ctx, 2));
label_233c44:
    // 0x233c44: 0xc0977c4
label_233c48:
    if (ctx->pc == 0x233C48u) {
        ctx->pc = 0x233C48u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233C4Cu;
        goto label_233c4c;
    }
    ctx->pc = 0x233C44u;
    SET_GPR_U32(ctx, 31, 0x233C4Cu);
    ctx->pc = 0x233C48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25DF10u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioWaitToExit_0x25df10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233C4Cu; }
    }
    if (ctx->pc != 0x233C4Cu) { return; }
    ctx->pc = 0x233C4Cu;
label_233c4c:
    // 0x233c4c: 0x3c020031
    ctx->pc = 0x233c4cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_233c50:
    // 0x233c50: 0x8c430018
    ctx->pc = 0x233c50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_233c54:
    // 0x233c54: 0x24024010
    ctx->pc = 0x233c54u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16400));
label_233c58:
    // 0x233c58: 0x14620036
label_233c5c:
    if (ctx->pc == 0x233C5Cu) {
        ctx->pc = 0x233C5Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x233C60u;
        goto label_233c60;
    }
    ctx->pc = 0x233C58u;
    {
        const bool branch_taken_0x233c58 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x233C5Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x233c58) {
            ctx->pc = 0x233D34u;
            goto label_233d34;
        }
    }
    ctx->pc = 0x233C60u;
label_233c60:
    // 0x233c60: 0x24020001
    ctx->pc = 0x233c60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_233c64:
    // 0x233c64: 0xae222ac4
    ctx->pc = 0x233c64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10948), GPR_U32(ctx, 2));
label_233c68:
    // 0x233c68: 0x8e23000c
    ctx->pc = 0x233c68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_233c6c:
    // 0x233c6c: 0x2402001c
    ctx->pc = 0x233c6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 28));
label_233c70:
    // 0x233c70: 0x621818
    ctx->pc = 0x233c70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_233c74:
    // 0x233c74: 0x26220b44
    ctx->pc = 0x233c74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 2884));
label_233c78:
    // 0x233c78: 0x432821
    ctx->pc = 0x233c78u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_233c7c:
    // 0x233c7c: 0xa0302d
    ctx->pc = 0x233c7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_233c80:
    // 0x233c80: 0x3c030031
    ctx->pc = 0x233c80u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_233c84:
    // 0x233c84: 0x8c62ffbc
    ctx->pc = 0x233c84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294967228)));
label_233c88:
    // 0x233c88: 0x4400005
label_233c8c:
    if (ctx->pc == 0x233C8Cu) {
        ctx->pc = 0x233C8Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        ctx->pc = 0x233C90u;
        goto label_233c90;
    }
    ctx->pc = 0x233C88u;
    {
        const bool branch_taken_0x233c88 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x233C8Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967228));
        if (branch_taken_0x233c88) {
            ctx->pc = 0x233CA0u;
            goto label_233ca0;
        }
    }
    ctx->pc = 0x233C90u;
label_233c90:
    // 0x233c90: 0x44820800
    ctx->pc = 0x233c90u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
label_233c94:
    // 0x233c94: 0x46800860
    ctx->pc = 0x233c94u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_233c98:
    // 0x233c98: 0x10000009
label_233c9c:
    if (ctx->pc == 0x233C9Cu) {
        ctx->pc = 0x233C9Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x233CA0u;
        goto label_233ca0;
    }
    ctx->pc = 0x233C98u;
    {
        const bool branch_taken_0x233c98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x233C9Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x233c98) {
            ctx->pc = 0x233CC0u;
            goto label_233cc0;
        }
    }
    ctx->pc = 0x233CA0u;
label_233ca0:
    // 0x233ca0: 0x8c820000
    ctx->pc = 0x233ca0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_233ca4:
    // 0x233ca4: 0x30430001
    ctx->pc = 0x233ca4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 2), 1));
label_233ca8:
    // 0x233ca8: 0x21042
    ctx->pc = 0x233ca8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 1));
label_233cac:
    // 0x233cac: 0x621825
    ctx->pc = 0x233cacu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_233cb0:
    // 0x233cb0: 0x44830800
    ctx->pc = 0x233cb0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
label_233cb4:
    // 0x233cb4: 0x46800860
    ctx->pc = 0x233cb4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
label_233cb8:
    // 0x233cb8: 0x46010840
    ctx->pc = 0x233cb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_233cbc:
    // 0x233cbc: 0xc4c00000
    ctx->pc = 0x233cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_233cc0:
    // 0x233cc0: 0x46000800
    ctx->pc = 0x233cc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_233cc4:
    // 0x233cc4: 0xe4a00000
    ctx->pc = 0x233cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_233cc8:
    // 0x233cc8: 0x3c020034
    ctx->pc = 0x233cc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_233ccc:
    // 0x233ccc: 0x8c42e7c8
    ctx->pc = 0x233cccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
label_233cd0:
    // 0x233cd0: 0x8c420000
    ctx->pc = 0x233cd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_233cd4:
    // 0x233cd4: 0x30420008
    ctx->pc = 0x233cd4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 8));
label_233cd8:
    // 0x233cd8: 0x10400015
label_233cdc:
    if (ctx->pc == 0x233CDCu) {
        ctx->pc = 0x233CDCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x233CE0u;
        goto label_233ce0;
    }
    ctx->pc = 0x233CD8u;
    {
        const bool branch_taken_0x233cd8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x233CDCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x233cd8) {
            ctx->pc = 0x233D30u;
            goto label_233d30;
        }
    }
    ctx->pc = 0x233CE0u;
label_233ce0:
    // 0x233ce0: 0xc6200060
    ctx->pc = 0x233ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_233ce4:
    // 0x233ce4: 0xe7a00040
    ctx->pc = 0x233ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_233ce8:
    // 0x233ce8: 0xc6210064
    ctx->pc = 0x233ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_233cec:
    // 0x233cec: 0xe7a10044
    ctx->pc = 0x233cecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_233cf0:
    // 0x233cf0: 0xc6200068
    ctx->pc = 0x233cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_233cf4:
    // 0x233cf4: 0xe7a00048
    ctx->pc = 0x233cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_233cf8:
    // 0x233cf8: 0xc44015c8
    ctx->pc = 0x233cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_233cfc:
    // 0x233cfc: 0x46000840
    ctx->pc = 0x233cfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_233d00:
    // 0x233d00: 0xe7a10044
    ctx->pc = 0x233d00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_233d04:
    // 0x233d04: 0x8e220004
    ctx->pc = 0x233d04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_233d08:
    // 0x233d08: 0x21100
    ctx->pc = 0x233d08u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 4));
label_233d0c:
    // 0x233d0c: 0x3c050032
    ctx->pc = 0x233d0cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)50 << 16));
label_233d10:
    // 0x233d10: 0x24a51580
    ctx->pc = 0x233d10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 5504));
label_233d14:
    // 0x233d14: 0x3c030032
    ctx->pc = 0x233d14u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_233d18:
    // 0x233d18: 0x3c060032
    ctx->pc = 0x233d18u;
    SET_GPR_U32(ctx, 6, ((uint32_t)50 << 16));
label_233d1c:
    // 0x233d1c: 0x27a40040
    ctx->pc = 0x233d1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
label_233d20:
    // 0x233d20: 0x452821
    ctx->pc = 0x233d20u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_233d24:
    // 0x233d24: 0xc46c15c4
    ctx->pc = 0x233d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_233d28:
    // 0x233d28: 0xc0abb54
label_233d2c:
    if (ctx->pc == 0x233D2Cu) {
        ctx->pc = 0x233D2Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 5568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->pc = 0x233D30u;
        goto label_233d30;
    }
    ctx->pc = 0x233D28u;
    SET_GPR_U32(ctx, 31, 0x233D30u);
    ctx->pc = 0x233D2Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 5568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2AED50u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPosLightNew_0x2aed50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233D30u; }
    }
    if (ctx->pc != 0x233D30u) { return; }
    ctx->pc = 0x233D30u;
label_233d30:
    // 0x233d30: 0x3c020034
    ctx->pc = 0x233d30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_233d34:
    // 0x233d34: 0x8c42e880
    ctx->pc = 0x233d34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961280)));
label_233d38:
    // 0x233d38: 0x2442fffe
    ctx->pc = 0x233d38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967294));
label_233d3c:
    // 0x233d3c: 0x2c420002
    ctx->pc = 0x233d3cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
label_233d40:
    // 0x233d40: 0x10400013
label_233d44:
    if (ctx->pc == 0x233D44u) {
        ctx->pc = 0x233D48u;
        goto label_233d48;
    }
    ctx->pc = 0x233D40u;
    {
        const bool branch_taken_0x233d40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x233d40) {
            ctx->pc = 0x233D90u;
            goto label_233d90;
        }
    }
    ctx->pc = 0x233D48u;
label_233d48:
    // 0x233d48: 0x8e23080c
    ctx->pc = 0x233d48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 2060)));
label_233d4c:
    // 0x233d4c: 0x1060000c
label_233d50:
    if (ctx->pc == 0x233D50u) {
        ctx->pc = 0x233D50u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x233D54u;
        goto label_233d54;
    }
    ctx->pc = 0x233D4Cu;
    {
        const bool branch_taken_0x233d4c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x233D50u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x233d4c) {
            ctx->pc = 0x233D80u;
            goto label_233d80;
        }
    }
    ctx->pc = 0x233D54u;
label_233d54:
    // 0x233d54: 0x14620006
label_233d58:
    if (ctx->pc == 0x233D58u) {
        ctx->pc = 0x233D58u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x233D5Cu;
        goto label_233d5c;
    }
    ctx->pc = 0x233D54u;
    {
        const bool branch_taken_0x233d54 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x233D58u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x233d54) {
            ctx->pc = 0x233D70u;
            goto label_233d70;
        }
    }
    ctx->pc = 0x233D5Cu;
label_233d5c:
    // 0x233d5c: 0xae22080c
    ctx->pc = 0x233d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2060), GPR_U32(ctx, 2));
label_233d60:
    // 0x233d60: 0x3c020034
    ctx->pc = 0x233d60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_233d64:
    // 0x233d64: 0x260202d
    ctx->pc = 0x233d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_233d68:
    // 0x233d68: 0xc09db1a
label_233d6c:
    if (ctx->pc == 0x233D6Cu) {
        ctx->pc = 0x233D6Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
        ctx->pc = 0x233D70u;
        goto label_233d70;
    }
    ctx->pc = 0x233D68u;
    SET_GPR_U32(ctx, 31, 0x233D70u);
    ctx->pc = 0x233D6Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    ctx->pc = 0x276C68u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerUseLegendItem_0x276c68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233D70u; }
    }
    if (ctx->pc != 0x233D70u) { return; }
    ctx->pc = 0x233D70u;
label_233d70:
    // 0x233d70: 0x3c014000
    ctx->pc = 0x233d70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
label_233d74:
    // 0x233d74: 0x44810000
    ctx->pc = 0x233d74u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_233d78:
    // 0x233d78: 0x10000005
label_233d7c:
    if (ctx->pc == 0x233D7Cu) {
        ctx->pc = 0x233D7Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2004), bits); }
        ctx->pc = 0x233D80u;
        goto label_233d80;
    }
    ctx->pc = 0x233D78u;
    {
        const bool branch_taken_0x233d78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x233D7Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2004), bits); }
        if (branch_taken_0x233d78) {
            ctx->pc = 0x233D90u;
            goto label_233d90;
        }
    }
    ctx->pc = 0x233D80u;
label_233d80:
    // 0x233d80: 0x3c013f4c
    ctx->pc = 0x233d80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16204 << 16));
label_233d84:
    // 0x233d84: 0x3421cccd
    ctx->pc = 0x233d84u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
label_233d88:
    // 0x233d88: 0x44810000
    ctx->pc = 0x233d88u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_233d8c:
    // 0x233d8c: 0xe62007d4
    ctx->pc = 0x233d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2004), bits); }
label_233d90:
    // 0x233d90: 0xc09a352
label_233d94:
    if (ctx->pc == 0x233D94u) {
        ctx->pc = 0x233D94u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x233D98u;
        goto label_233d98;
    }
    ctx->pc = 0x233D90u;
    SET_GPR_U32(ctx, 31, 0x233D98u);
    ctx->pc = 0x233D94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 32));
    ctx->pc = 0x268D48u;
    {
        const uint32_t __entryPc = ctx->pc;
        add_target_0x268d48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233D98u; }
    }
    if (ctx->pc != 0x233D98u) { return; }
    ctx->pc = 0x233D98u;
label_233d98:
    // 0x233d98: 0x3c020034
    ctx->pc = 0x233d98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_233d9c:
    // 0x233d9c: 0x8c43e7f0
    ctx->pc = 0x233d9cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
label_233da0:
    // 0x233da0: 0x2402000d
    ctx->pc = 0x233da0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
label_233da4:
    // 0x233da4: 0x14620006
label_233da8:
    if (ctx->pc == 0x233DA8u) {
        ctx->pc = 0x233DA8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        ctx->pc = 0x233DACu;
        goto label_233dac;
    }
    ctx->pc = 0x233DA4u;
    {
        const bool branch_taken_0x233da4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x233DA8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x233da4) {
            ctx->pc = 0x233DC0u;
            goto label_233dc0;
        }
    }
    ctx->pc = 0x233DACu;
label_233dac:
    // 0x233dac: 0xc09d588
label_233db0:
    if (ctx->pc == 0x233DB0u) {
        ctx->pc = 0x233DB4u;
        goto label_233db4;
    }
    ctx->pc = 0x233DACu;
    SET_GPR_U32(ctx, 31, 0x233DB4u);
    ctx->pc = 0x275620u;
    {
        const uint32_t __entryPc = ctx->pc;
        SumnerActive_0x275620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233DB4u; }
    }
    if (ctx->pc != 0x233DB4u) { return; }
    ctx->pc = 0x233DB4u;
label_233db4:
    // 0x233db4: 0x54400019
label_233db8:
    if (ctx->pc == 0x233DB8u) {
        ctx->pc = 0x233DB8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 256)));
        ctx->pc = 0x233DBCu;
        goto label_233dbc;
    }
    ctx->pc = 0x233DB4u;
    {
        const bool branch_taken_0x233db4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x233db4) {
            ctx->pc = 0x233DB8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 256)));
            ctx->pc = 0x233E1Cu;
            goto label_233e1c;
        }
    }
    ctx->pc = 0x233DBCu;
label_233dbc:
    // 0x233dbc: 0x3c020036
    ctx->pc = 0x233dbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
label_233dc0:
    // 0x233dc0: 0x8c42dbac
    ctx->pc = 0x233dc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957996)));
label_233dc4:
    // 0x233dc4: 0x54400015
label_233dc8:
    if (ctx->pc == 0x233DC8u) {
        ctx->pc = 0x233DC8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 256)));
        ctx->pc = 0x233DCCu;
        goto label_233dcc;
    }
    ctx->pc = 0x233DC4u;
    {
        const bool branch_taken_0x233dc4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x233dc4) {
            ctx->pc = 0x233DC8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 256)));
            ctx->pc = 0x233E1Cu;
            goto label_233e1c;
        }
    }
    ctx->pc = 0x233DCCu;
label_233dcc:
    // 0x233dcc: 0x862201d0
    ctx->pc = 0x233dccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 464)));
label_233dd0:
    // 0x233dd0: 0x18400011
label_233dd4:
    if (ctx->pc == 0x233DD4u) {
        ctx->pc = 0x233DD4u;
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 464)));
        ctx->pc = 0x233DD8u;
        goto label_233dd8;
    }
    ctx->pc = 0x233DD0u;
    {
        const bool branch_taken_0x233dd0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x233DD4u;
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 464)));
        if (branch_taken_0x233dd0) {
            ctx->pc = 0x233E18u;
            goto label_233e18;
        }
    }
    ctx->pc = 0x233DD8u;
label_233dd8:
    // 0x233dd8: 0x3c020031
    ctx->pc = 0x233dd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_233ddc:
    // 0x233ddc: 0x3c030031
    ctx->pc = 0x233ddcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_233de0:
    // 0x233de0: 0x8c42ff9c
    ctx->pc = 0x233de0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967196)));
label_233de4:
    // 0x233de4: 0x8c630024
    ctx->pc = 0x233de4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_233de8:
    // 0x233de8: 0x431025
    ctx->pc = 0x233de8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_233dec:
    // 0x233dec: 0x5440000b
label_233df0:
    if (ctx->pc == 0x233DF0u) {
        ctx->pc = 0x233DF0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 256)));
        ctx->pc = 0x233DF4u;
        goto label_233df4;
    }
    ctx->pc = 0x233DECu;
    {
        const bool branch_taken_0x233dec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x233dec) {
            ctx->pc = 0x233DF0u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 256)));
            ctx->pc = 0x233E1Cu;
            goto label_233e1c;
        }
    }
    ctx->pc = 0x233DF4u;
label_233df4:
    // 0x233df4: 0x3c020031
    ctx->pc = 0x233df4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_233df8:
    // 0x233df8: 0x9442ffbc
    ctx->pc = 0x233df8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967228)));
label_233dfc:
    // 0x233dfc: 0x821023
    ctx->pc = 0x233dfcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_233e00:
    // 0x233e00: 0xa62201d0
    ctx->pc = 0x233e00u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 464), (uint16_t)GPR_U32(ctx, 2));
label_233e04:
    // 0x233e04: 0x21400
    ctx->pc = 0x233e04u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
label_233e08:
    // 0x233e08: 0x58400001
label_233e0c:
    if (ctx->pc == 0x233E0Cu) {
        ctx->pc = 0x233E0Cu;
        WRITE16(ADD32(GPR_U32(ctx, 17), 464), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x233E10u;
        goto label_233e10;
    }
    ctx->pc = 0x233E08u;
    {
        const bool branch_taken_0x233e08 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x233e08) {
            ctx->pc = 0x233E0Cu;
            WRITE16(ADD32(GPR_U32(ctx, 17), 464), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x233E10u;
            goto label_233e10;
        }
    }
    ctx->pc = 0x233E10u;
label_233e10:
    // 0x233e10: 0xc08cc56
label_233e14:
    if (ctx->pc == 0x233E14u) {
        ctx->pc = 0x233E14u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233E18u;
        goto label_233e18;
    }
    ctx->pc = 0x233E10u;
    SET_GPR_U32(ctx, 31, 0x233E18u);
    ctx->pc = 0x233E14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x233158u;
    {
        const uint32_t __entryPc = ctx->pc;
        WriteName_0x233158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233E18u; }
    }
    if (ctx->pc != 0x233E18u) { return; }
    ctx->pc = 0x233E18u;
label_233e18:
    // 0x233e18: 0x8e230100
    ctx->pc = 0x233e18u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 256)));
label_233e1c:
    // 0x233e1c: 0x24020001
    ctx->pc = 0x233e1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_233e20:
    // 0x233e20: 0x10620016
label_233e24:
    if (ctx->pc == 0x233E24u) {
        ctx->pc = 0x233E24u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x233E28u;
        goto label_233e28;
    }
    ctx->pc = 0x233E20u;
    {
        const bool branch_taken_0x233e20 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x233E24u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x233e20) {
            ctx->pc = 0x233E7Cu;
            goto label_233e7c;
        }
    }
    ctx->pc = 0x233E28u;
label_233e28:
    // 0x233e28: 0x8e240080
    ctx->pc = 0x233e28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_233e2c:
    // 0x233e2c: 0xc0b41e4
label_233e30:
    if (ctx->pc == 0x233E30u) {
        ctx->pc = 0x233E30u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233E34u;
        goto label_233e34;
    }
    ctx->pc = 0x233E2Cu;
    SET_GPR_U32(ctx, 31, 0x233E34u);
    ctx->pc = 0x233E30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233E34u; }
    }
    if (ctx->pc != 0x233E34u) { return; }
    ctx->pc = 0x233E34u;
label_233e34:
    // 0x233e34: 0x8e2406a0
    ctx->pc = 0x233e34u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 1696)));
label_233e38:
    // 0x233e38: 0x10800010
label_233e3c:
    if (ctx->pc == 0x233E3Cu) {
        ctx->pc = 0x233E3Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x233E40u;
        goto label_233e40;
    }
    ctx->pc = 0x233E38u;
    {
        const bool branch_taken_0x233e38 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x233E3Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x233e38) {
            ctx->pc = 0x233E7Cu;
            goto label_233e7c;
        }
    }
    ctx->pc = 0x233E40u;
label_233e40:
    // 0x233e40: 0x8c43e7f0
    ctx->pc = 0x233e40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
label_233e44:
    // 0x233e44: 0x2402000c
    ctx->pc = 0x233e44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
label_233e48:
    // 0x233e48: 0x1462000a
label_233e4c:
    if (ctx->pc == 0x233E4Cu) {
        ctx->pc = 0x233E4Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x233E50u;
        goto label_233e50;
    }
    ctx->pc = 0x233E48u;
    {
        const bool branch_taken_0x233e48 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x233E4Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x233e48) {
            ctx->pc = 0x233E74u;
            goto label_233e74;
        }
    }
    ctx->pc = 0x233E50u;
label_233e50:
    // 0x233e50: 0x3c020034
    ctx->pc = 0x233e50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_233e54:
    // 0x233e54: 0x8c43e7f4
    ctx->pc = 0x233e54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961140)));
label_233e58:
    // 0x233e58: 0x24020008
    ctx->pc = 0x233e58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
label_233e5c:
    // 0x233e5c: 0x14620005
label_233e60:
    if (ctx->pc == 0x233E60u) {
        ctx->pc = 0x233E64u;
        goto label_233e64;
    }
    ctx->pc = 0x233E5Cu;
    {
        const bool branch_taken_0x233e5c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x233e5c) {
            ctx->pc = 0x233E74u;
            goto label_233e74;
        }
    }
    ctx->pc = 0x233E64u;
label_233e64:
    // 0x233e64: 0xc0b41b8
label_233e68:
    if (ctx->pc == 0x233E68u) {
        ctx->pc = 0x233E68u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x233E6Cu;
        goto label_233e6c;
    }
    ctx->pc = 0x233E64u;
    SET_GPR_U32(ctx, 31, 0x233E6Cu);
    ctx->pc = 0x233E68u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233E6Cu; }
    }
    if (ctx->pc != 0x233E6Cu) { return; }
    ctx->pc = 0x233E6Cu;
label_233e6c:
    // 0x233e6c: 0x10000003
label_233e70:
    if (ctx->pc == 0x233E70u) {
        ctx->pc = 0x233E74u;
        goto label_233e74;
    }
    ctx->pc = 0x233E6Cu;
    {
        const bool branch_taken_0x233e6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x233e6c) {
            ctx->pc = 0x233E7Cu;
            goto label_233e7c;
        }
    }
    ctx->pc = 0x233E74u;
label_233e74:
    // 0x233e74: 0xc0b41b8
label_233e78:
    if (ctx->pc == 0x233E78u) {
        ctx->pc = 0x233E78u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233E7Cu;
        goto label_233e7c;
    }
    ctx->pc = 0x233E74u;
    SET_GPR_U32(ctx, 31, 0x233E7Cu);
    ctx->pc = 0x233E78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233E7Cu; }
    }
    if (ctx->pc != 0x233E7Cu) { return; }
    ctx->pc = 0x233E7Cu;
label_233e7c:
    // 0x233e7c: 0xc094400
label_233e80:
    if (ctx->pc == 0x233E80u) {
        ctx->pc = 0x233E80u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233E84u;
        goto label_233e84;
    }
    ctx->pc = 0x233E7Cu;
    SET_GPR_U32(ctx, 31, 0x233E84u);
    ctx->pc = 0x233E80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x251000u;
    {
        const uint32_t __entryPc = ctx->pc;
        update_player_milestone_0x251000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233E84u; }
    }
    if (ctx->pc != 0x233E84u) { return; }
    ctx->pc = 0x233E84u;
label_233e84:
    // 0x233e84: 0xc08b46c
label_233e88:
    if (ctx->pc == 0x233E88u) {
        ctx->pc = 0x233E88u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233E8Cu;
        goto label_233e8c;
    }
    ctx->pc = 0x233E84u;
    SET_GPR_U32(ctx, 31, 0x233E8Cu);
    ctx->pc = 0x233E88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22D1B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerProcessPowerups_0x22d1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233E8Cu; }
    }
    if (ctx->pc != 0x233E8Cu) { return; }
    ctx->pc = 0x233E8Cu;
label_233e8c:
    // 0x233e8c: 0x3c020031
    ctx->pc = 0x233e8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_233e90:
    // 0x233e90: 0xdc420e28
    ctx->pc = 0x233e90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
label_233e94:
    // 0x233e94: 0x30420010
    ctx->pc = 0x233e94u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
label_233e98:
    // 0x233e98: 0x1040000b
label_233e9c:
    if (ctx->pc == 0x233E9Cu) {
        ctx->pc = 0x233E9Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x233EA0u;
        goto label_233ea0;
    }
    ctx->pc = 0x233E98u;
    {
        const bool branch_taken_0x233e98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x233E9Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x233e98) {
            ctx->pc = 0x233EC8u;
            goto label_233ec8;
        }
    }
    ctx->pc = 0x233EA0u;
label_233ea0:
    // 0x233ea0: 0x8c420008
    ctx->pc = 0x233ea0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_233ea4:
    // 0x233ea4: 0x10400008
label_233ea8:
    if (ctx->pc == 0x233EA8u) {
        ctx->pc = 0x233EACu;
        goto label_233eac;
    }
    ctx->pc = 0x233EA4u;
    {
        const bool branch_taken_0x233ea4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x233ea4) {
            ctx->pc = 0x233EC8u;
            goto label_233ec8;
        }
    }
    ctx->pc = 0x233EACu;
label_233eac:
    // 0x233eac: 0x16600006
label_233eb0:
    if (ctx->pc == 0x233EB0u) {
        ctx->pc = 0x233EB0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        ctx->pc = 0x233EB4u;
        goto label_233eb4;
    }
    ctx->pc = 0x233EACu;
    {
        const bool branch_taken_0x233eac = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x233EB0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x233eac) {
            ctx->pc = 0x233EC8u;
            goto label_233ec8;
        }
    }
    ctx->pc = 0x233EB4u;
label_233eb4:
    // 0x233eb4: 0x8c42d934
    ctx->pc = 0x233eb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
label_233eb8:
    // 0x233eb8: 0x4410003
label_233ebc:
    if (ctx->pc == 0x233EBCu) {
        ctx->pc = 0x233EC0u;
        goto label_233ec0;
    }
    ctx->pc = 0x233EB8u;
    {
        const bool branch_taken_0x233eb8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x233eb8) {
            ctx->pc = 0x233EC8u;
            goto label_233ec8;
        }
    }
    ctx->pc = 0x233EC0u;
label_233ec0:
    // 0x233ec0: 0xc097046
label_233ec4:
    if (ctx->pc == 0x233EC4u) {
        ctx->pc = 0x233EC4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x233EC8u;
        goto label_233ec8;
    }
    ctx->pc = 0x233EC0u;
    SET_GPR_U32(ctx, 31, 0x233EC8u);
    ctx->pc = 0x233EC4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 80));
    ctx->pc = 0x25C118u;
    {
        const uint32_t __entryPc = ctx->pc;
        print_item_info_0x25c118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233EC8u; }
    }
    if (ctx->pc != 0x233EC8u) { return; }
    ctx->pc = 0x233EC8u;
label_233ec8:
    // 0x233ec8: 0x40034800
    ctx->pc = 0x233ec8u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
label_233ecc:
    // 0x233ecc: 0x3c10003a
    ctx->pc = 0x233eccu;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
label_233ed0:
    // 0x233ed0: 0x8e0221d0
    ctx->pc = 0x233ed0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8656)));
label_233ed4:
    // 0x233ed4: 0xac4303b8
    ctx->pc = 0x233ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 952), GPR_U32(ctx, 3));
label_233ed8:
    // 0x233ed8: 0xc092040
label_233edc:
    if (ctx->pc == 0x233EDCu) {
        ctx->pc = 0x233EDCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233EE0u;
        goto label_233ee0;
    }
    ctx->pc = 0x233ED8u;
    SET_GPR_U32(ctx, 31, 0x233EE0u);
    ctx->pc = 0x233EDCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x248100u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerMotion_0x248100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233EE0u; }
    }
    if (ctx->pc != 0x233EE0u) { return; }
    ctx->pc = 0x233EE0u;
label_233ee0:
    // 0x233ee0: 0x40034800
    ctx->pc = 0x233ee0u;
    SET_GPR_U32(ctx, 3, ctx->cop0_count);
label_233ee4:
    // 0x233ee4: 0x8e0421d0
    ctx->pc = 0x233ee4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8656)));
label_233ee8:
    // 0x233ee8: 0x8c8203b8
    ctx->pc = 0x233ee8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 952)));
label_233eec:
    // 0x233eec: 0x621823
    ctx->pc = 0x233eecu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_233ef0:
    // 0x233ef0: 0x8c8203b0
    ctx->pc = 0x233ef0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 944)));
label_233ef4:
    // 0x233ef4: 0x621821
    ctx->pc = 0x233ef4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_233ef8:
    // 0x233ef8: 0xac8303b0
    ctx->pc = 0x233ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 944), GPR_U32(ctx, 3));
label_233efc:
    // 0x233efc: 0x8c8203b4
    ctx->pc = 0x233efcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 948)));
label_233f00:
    // 0x233f00: 0x24420001
    ctx->pc = 0x233f00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_233f04:
    // 0x233f04: 0xac8203b4
    ctx->pc = 0x233f04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 948), GPR_U32(ctx, 2));
label_233f08:
    // 0x233f08: 0xc6210910
    ctx->pc = 0x233f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_233f0c:
    // 0x233f0c: 0x44800000
    ctx->pc = 0x233f0cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_233f10:
    // 0x233f10: 0x46010034
    ctx->pc = 0x233f10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_233f14:
    // 0x233f14: 0x45000018
label_233f18:
    if (ctx->pc == 0x233F18u) {
        ctx->pc = 0x233F1Cu;
        goto label_233f1c;
    }
    ctx->pc = 0x233F14u;
    {
        const bool branch_taken_0x233f14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x233f14) {
            ctx->pc = 0x233F78u;
            goto label_233f78;
        }
    }
    ctx->pc = 0x233F1Cu;
label_233f1c:
    // 0x233f1c: 0x3c020031
    ctx->pc = 0x233f1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_233f20:
    // 0x233f20: 0x3c014000
    ctx->pc = 0x233f20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
label_233f24:
    // 0x233f24: 0x44810000
    ctx->pc = 0x233f24u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
label_233f28:
    // 0x233f28: 0x46000800
    ctx->pc = 0x233f28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_233f2c:
    // 0x233f2c: 0xc441ffa4
    ctx->pc = 0x233f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_233f30:
    // 0x233f30: 0x46010034
    ctx->pc = 0x233f30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_233f34:
    // 0x233f34: 0x45000010
label_233f38:
    if (ctx->pc == 0x233F38u) {
        ctx->pc = 0x233F3Cu;
        goto label_233f3c;
    }
    ctx->pc = 0x233F34u;
    {
        const bool branch_taken_0x233f34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x233f34) {
            ctx->pc = 0x233F78u;
            goto label_233f78;
        }
    }
    ctx->pc = 0x233F3Cu;
label_233f3c:
    // 0x233f3c: 0x8e22090c
    ctx->pc = 0x233f3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 2316)));
label_233f40:
    // 0x233f40: 0x2842002d
    ctx->pc = 0x233f40u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 45));
label_233f44:
    // 0x233f44: 0x54400005
label_233f48:
    if (ctx->pc == 0x233F48u) {
        ctx->pc = 0x233F48u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 2316)));
        ctx->pc = 0x233F4Cu;
        goto label_233f4c;
    }
    ctx->pc = 0x233F44u;
    {
        const bool branch_taken_0x233f44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x233f44) {
            ctx->pc = 0x233F48u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 2316)));
            ctx->pc = 0x233F5Cu;
            goto label_233f5c;
        }
    }
    ctx->pc = 0x233F4Cu;
label_233f4c:
    // 0x233f4c: 0xc0977a0
label_233f50:
    if (ctx->pc == 0x233F50u) {
        ctx->pc = 0x233F50u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233F54u;
        goto label_233f54;
    }
    ctx->pc = 0x233F4Cu;
    SET_GPR_U32(ctx, 31, 0x233F54u);
    ctx->pc = 0x233F50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25DE80u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioSuchBravery_0x25de80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233F54u; }
    }
    if (ctx->pc != 0x233F54u) { return; }
    ctx->pc = 0x233F54u;
label_233f54:
    // 0x233f54: 0x10000007
label_233f58:
    if (ctx->pc == 0x233F58u) {
        ctx->pc = 0x233F58u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 2320), GPR_U32(ctx, 0));
        ctx->pc = 0x233F5Cu;
        goto label_233f5c;
    }
    ctx->pc = 0x233F54u;
    {
        const bool branch_taken_0x233f54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x233F58u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 2320), GPR_U32(ctx, 0));
        if (branch_taken_0x233f54) {
            ctx->pc = 0x233F74u;
            goto label_233f74;
        }
    }
    ctx->pc = 0x233F5Cu;
label_233f5c:
    // 0x233f5c: 0x2842001e
    ctx->pc = 0x233f5cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 30));
label_233f60:
    // 0x233f60: 0x54400004
label_233f64:
    if (ctx->pc == 0x233F64u) {
        ctx->pc = 0x233F64u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 2320), GPR_U32(ctx, 0));
        ctx->pc = 0x233F68u;
        goto label_233f68;
    }
    ctx->pc = 0x233F60u;
    {
        const bool branch_taken_0x233f60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x233f60) {
            ctx->pc = 0x233F64u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 2320), GPR_U32(ctx, 0));
            ctx->pc = 0x233F74u;
            goto label_233f74;
        }
    }
    ctx->pc = 0x233F68u;
label_233f68:
    // 0x233f68: 0xc0977ae
label_233f6c:
    if (ctx->pc == 0x233F6Cu) {
        ctx->pc = 0x233F6Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233F70u;
        goto label_233f70;
    }
    ctx->pc = 0x233F68u;
    SET_GPR_U32(ctx, 31, 0x233F70u);
    ctx->pc = 0x233F6Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25DEB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioHeroicEffort_0x25deb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233F70u; }
    }
    if (ctx->pc != 0x233F70u) { return; }
    ctx->pc = 0x233F70u;
label_233f70:
    // 0x233f70: 0xae200910
    ctx->pc = 0x233f70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2320), GPR_U32(ctx, 0));
label_233f74:
    // 0x233f74: 0xae20090c
    ctx->pc = 0x233f74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2316), GPR_U32(ctx, 0));
label_233f78:
    // 0x233f78: 0xc08cc10
label_233f7c:
    if (ctx->pc == 0x233F7Cu) {
        ctx->pc = 0x233F7Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233F80u;
        goto label_233f80;
    }
    ctx->pc = 0x233F78u;
    SET_GPR_U32(ctx, 31, 0x233F80u);
    ctx->pc = 0x233F7Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x233040u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerProcessSkinFX_0x233040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233F80u; }
    }
    if (ctx->pc != 0x233F80u) { return; }
    ctx->pc = 0x233F80u;
label_233f80:
    // 0x233f80: 0xc093d1c
label_233f84:
    if (ctx->pc == 0x233F84u) {
        ctx->pc = 0x233F84u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233F88u;
        goto label_233f88;
    }
    ctx->pc = 0x233F80u;
    SET_GPR_U32(ctx, 31, 0x233F88u);
    ctx->pc = 0x233F84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24F470u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerDoWeapTrail_0x24f470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233F88u; }
    }
    if (ctx->pc != 0x233F88u) { return; }
    ctx->pc = 0x233F88u;
label_233f88:
    // 0x233f88: 0x2772826
    ctx->pc = 0x233f88u;
    SET_GPR_U32(ctx, 5, XOR32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
label_233f8c:
    // 0x233f8c: 0x220202d
    ctx->pc = 0x233f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_233f90:
    // 0x233f90: 0xc08ca9e
label_233f94:
    if (ctx->pc == 0x233F94u) {
        ctx->pc = 0x233F94u;
        SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x233F98u;
        goto label_233f98;
    }
    ctx->pc = 0x233F90u;
    SET_GPR_U32(ctx, 31, 0x233F98u);
    ctx->pc = 0x233F94u;
    SET_GPR_U32(ctx, 5, SLTU32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x232A78u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_weakening_0x232a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233F98u; }
    }
    if (ctx->pc != 0x233F98u) { return; }
    ctx->pc = 0x233F98u;
label_233f98:
    // 0x233f98: 0x3c020032
    ctx->pc = 0x233f98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_233f9c:
    // 0x233f9c: 0x10000088
label_233fa0:
    if (ctx->pc == 0x233FA0u) {
        ctx->pc = 0x233FA0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2000)));
        ctx->pc = 0x233FA4u;
        goto label_233fa4;
    }
    ctx->pc = 0x233F9Cu;
    {
        const bool branch_taken_0x233f9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x233FA0u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2000)));
        if (branch_taken_0x233f9c) {
            ctx->pc = 0x2341C0u;
            goto label_2341c0;
        }
    }
    ctx->pc = 0x233FA4u;
label_233fa4:
    // 0x233fa4: 0x3c020031
    ctx->pc = 0x233fa4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_233fa8:
    // 0x233fa8: 0x8c430018
    ctx->pc = 0x233fa8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_233fac:
    // 0x233fac: 0x24024013
    ctx->pc = 0x233facu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16403));
label_233fb0:
    // 0x233fb0: 0x10620003
label_233fb4:
    if (ctx->pc == 0x233FB4u) {
        ctx->pc = 0x233FB4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16407));
        ctx->pc = 0x233FB8u;
        goto label_233fb8;
    }
    ctx->pc = 0x233FB0u;
    {
        const bool branch_taken_0x233fb0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x233FB4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16407));
        if (branch_taken_0x233fb0) {
            ctx->pc = 0x233FC0u;
            goto label_233fc0;
        }
    }
    ctx->pc = 0x233FB8u;
label_233fb8:
    // 0x233fb8: 0x54620019
label_233fbc:
    if (ctx->pc == 0x233FBCu) {
        ctx->pc = 0x233FBCu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 128)));
        ctx->pc = 0x233FC0u;
        goto label_233fc0;
    }
    ctx->pc = 0x233FB8u;
    {
        const bool branch_taken_0x233fb8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x233fb8) {
            ctx->pc = 0x233FBCu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 128)));
            ctx->pc = 0x234020u;
            goto label_234020;
        }
    }
    ctx->pc = 0x233FC0u;
label_233fc0:
    // 0x233fc0: 0x8e240080
    ctx->pc = 0x233fc0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_233fc4:
    // 0x233fc4: 0x10800053
label_233fc8:
    if (ctx->pc == 0x233FC8u) {
        ctx->pc = 0x233FC8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x233FCCu;
        goto label_233fcc;
    }
    ctx->pc = 0x233FC4u;
    {
        const bool branch_taken_0x233fc4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x233FC8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x233fc4) {
            ctx->pc = 0x234114u;
            goto label_234114;
        }
    }
    ctx->pc = 0x233FCCu;
label_233fcc:
    // 0x233fcc: 0xc0b41e4
label_233fd0:
    if (ctx->pc == 0x233FD0u) {
        ctx->pc = 0x233FD0u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233FD4u;
        goto label_233fd4;
    }
    ctx->pc = 0x233FCCu;
    SET_GPR_U32(ctx, 31, 0x233FD4u);
    ctx->pc = 0x233FD0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233FD4u; }
    }
    if (ctx->pc != 0x233FD4u) { return; }
    ctx->pc = 0x233FD4u;
label_233fd4:
    // 0x233fd4: 0xc09dea0
label_233fd8:
    if (ctx->pc == 0x233FD8u) {
        ctx->pc = 0x233FD8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233FDCu;
        goto label_233fdc;
    }
    ctx->pc = 0x233FD4u;
    SET_GPR_U32(ctx, 31, 0x233FDCu);
    ctx->pc = 0x233FD8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x277A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoPlayerAction_0x277a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233FDCu; }
    }
    if (ctx->pc != 0x233FDCu) { return; }
    ctx->pc = 0x233FDCu;
label_233fdc:
    // 0x233fdc: 0x8e2206a0
    ctx->pc = 0x233fdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 1696)));
label_233fe0:
    // 0x233fe0: 0xc6200050
    ctx->pc = 0x233fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_233fe4:
    // 0x233fe4: 0xe4400030
    ctx->pc = 0x233fe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_233fe8:
    // 0x233fe8: 0x8e2206a0
    ctx->pc = 0x233fe8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 1696)));
label_233fec:
    // 0x233fec: 0xc6200054
    ctx->pc = 0x233fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_233ff0:
    // 0x233ff0: 0xe4400034
    ctx->pc = 0x233ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_233ff4:
    // 0x233ff4: 0x8e2206a0
    ctx->pc = 0x233ff4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 1696)));
label_233ff8:
    // 0x233ff8: 0xc6200058
    ctx->pc = 0x233ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_233ffc:
    // 0x233ffc: 0xe4400038
    ctx->pc = 0x233ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_234000:
    // 0x234000: 0xc08b362
label_234004:
    if (ctx->pc == 0x234004u) {
        ctx->pc = 0x234004u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x234008u;
        goto label_234008;
    }
    ctx->pc = 0x234000u;
    SET_GPR_U32(ctx, 31, 0x234008u);
    ctx->pc = 0x234004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22CD88u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerProcessFamiliar_0x22cd88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234008u; }
    }
    if (ctx->pc != 0x234008u) { return; }
    ctx->pc = 0x234008u;
label_234008:
    // 0x234008: 0x220202d
    ctx->pc = 0x234008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23400c:
    // 0x23400c: 0x282d
    ctx->pc = 0x23400cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234010:
    // 0x234010: 0xc08b422
label_234014:
    if (ctx->pc == 0x234014u) {
        ctx->pc = 0x234014u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x234018u;
        goto label_234018;
    }
    ctx->pc = 0x234010u;
    SET_GPR_U32(ctx, 31, 0x234018u);
    ctx->pc = 0x234014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22D088u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerProcessScale_0x22d088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234018u; }
    }
    if (ctx->pc != 0x234018u) { return; }
    ctx->pc = 0x234018u;
label_234018:
    // 0x234018: 0x1000006a
label_23401c:
    if (ctx->pc == 0x23401Cu) {
        ctx->pc = 0x23401Cu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x234020u;
        goto label_234020;
    }
    ctx->pc = 0x234018u;
    {
        const bool branch_taken_0x234018 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x23401Cu;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x234018) {
            ctx->pc = 0x2341C4u;
            goto label_2341c4;
        }
    }
    ctx->pc = 0x234020u;
label_234020:
    // 0x234020: 0x10800003
label_234024:
    if (ctx->pc == 0x234024u) {
        ctx->pc = 0x234024u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x234028u;
        goto label_234028;
    }
    ctx->pc = 0x234020u;
    {
        const bool branch_taken_0x234020 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x234024u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x234020) {
            ctx->pc = 0x234030u;
            goto label_234030;
        }
    }
    ctx->pc = 0x234028u;
label_234028:
    // 0x234028: 0xc0b41b8
label_23402c:
    if (ctx->pc == 0x23402Cu) {
        ctx->pc = 0x23402Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x234030u;
        goto label_234030;
    }
    ctx->pc = 0x234028u;
    SET_GPR_U32(ctx, 31, 0x234030u);
    ctx->pc = 0x23402Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234030u; }
    }
    if (ctx->pc != 0x234030u) { return; }
    ctx->pc = 0x234030u;
label_234030:
    // 0x234030: 0x3c020032
    ctx->pc = 0x234030u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_234034:
    // 0x234034: 0x8c420810
    ctx->pc = 0x234034u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2064)));
label_234038:
    // 0x234038: 0x28420002
    ctx->pc = 0x234038u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
label_23403c:
    // 0x23403c: 0x10400061
label_234040:
    if (ctx->pc == 0x234040u) {
        ctx->pc = 0x234040u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x234044u;
        goto label_234044;
    }
    ctx->pc = 0x23403Cu;
    {
        const bool branch_taken_0x23403c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x234040u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x23403c) {
            ctx->pc = 0x2341C4u;
            goto label_2341c4;
        }
    }
    ctx->pc = 0x234044u;
label_234044:
    // 0x234044: 0x8c4207bc
    ctx->pc = 0x234044u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1980)));
label_234048:
    // 0x234048: 0x5440005f
label_23404c:
    if (ctx->pc == 0x23404Cu) {
        ctx->pc = 0x23404Cu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 18));
        ctx->pc = 0x234050u;
        goto label_234050;
    }
    ctx->pc = 0x234048u;
    {
        const bool branch_taken_0x234048 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x234048) {
            ctx->pc = 0x23404Cu;
            WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 18));
            ctx->pc = 0x2341C8u;
            goto label_2341c8;
        }
    }
    ctx->pc = 0x234050u;
label_234050:
    // 0x234050: 0x3c020032
    ctx->pc = 0x234050u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_234054:
    // 0x234054: 0x1000005a
label_234058:
    if (ctx->pc == 0x234058u) {
        ctx->pc = 0x234058u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294964308)));
        ctx->pc = 0x23405Cu;
        goto label_23405c;
    }
    ctx->pc = 0x234054u;
    {
        const bool branch_taken_0x234054 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x234058u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294964308)));
        if (branch_taken_0x234054) {
            ctx->pc = 0x2341C0u;
            goto label_2341c0;
        }
    }
    ctx->pc = 0x23405Cu;
label_23405c:
    // 0x23405c: 0xc08b46c
label_234060:
    if (ctx->pc == 0x234060u) {
        ctx->pc = 0x234060u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x234064u;
        goto label_234064;
    }
    ctx->pc = 0x23405Cu;
    SET_GPR_U32(ctx, 31, 0x234064u);
    ctx->pc = 0x234060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22D1B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerProcessPowerups_0x22d1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234064u; }
    }
    if (ctx->pc != 0x234064u) { return; }
    ctx->pc = 0x234064u;
label_234064:
    // 0x234064: 0xc091486
label_234068:
    if (ctx->pc == 0x234068u) {
        ctx->pc = 0x234068u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23406Cu;
        goto label_23406c;
    }
    ctx->pc = 0x234064u;
    SET_GPR_U32(ctx, 31, 0x23406Cu);
    ctx->pc = 0x234068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x245218u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerCheckFloor_0x245218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23406Cu; }
    }
    if (ctx->pc != 0x23406Cu) { return; }
    ctx->pc = 0x23406Cu;
label_23406c:
    // 0x23406c: 0x8e2408f8
    ctx->pc = 0x23406cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 2296)));
label_234070:
    // 0x234070: 0x18800006
label_234074:
    if (ctx->pc == 0x234074u) {
        ctx->pc = 0x234074u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 126));
        ctx->pc = 0x234078u;
        goto label_234078;
    }
    ctx->pc = 0x234070u;
    {
        const bool branch_taken_0x234070 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x234074u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 126));
        if (branch_taken_0x234070) {
            ctx->pc = 0x23408Cu;
            goto label_23408c;
        }
    }
    ctx->pc = 0x234078u;
label_234078:
    // 0x234078: 0xae2301e4
    ctx->pc = 0x234078u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 484), GPR_U32(ctx, 3));
label_23407c:
    // 0x23407c: 0x8e2201e0
    ctx->pc = 0x23407cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 480)));
label_234080:
    // 0x234080: 0x14430002
label_234084:
    if (ctx->pc == 0x234084u) {
        ctx->pc = 0x234084u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->pc = 0x234088u;
        goto label_234088;
    }
    ctx->pc = 0x234080u;
    {
        const bool branch_taken_0x234080 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x234084u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967295));
        if (branch_taken_0x234080) {
            ctx->pc = 0x23408Cu;
            goto label_23408c;
        }
    }
    ctx->pc = 0x234088u;
label_234088:
    // 0x234088: 0xae2208f8
    ctx->pc = 0x234088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2296), GPR_U32(ctx, 2));
label_23408c:
    // 0x23408c: 0xc09dea0
label_234090:
    if (ctx->pc == 0x234090u) {
        ctx->pc = 0x234090u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x234094u;
        goto label_234094;
    }
    ctx->pc = 0x23408Cu;
    SET_GPR_U32(ctx, 31, 0x234094u);
    ctx->pc = 0x234090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x277A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoPlayerAction_0x277a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234094u; }
    }
    if (ctx->pc != 0x234094u) { return; }
    ctx->pc = 0x234094u;
label_234094:
    // 0x234094: 0x8e2208f8
    ctx->pc = 0x234094u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 2296)));
label_234098:
    // 0x234098: 0x5c400006
label_23409c:
    if (ctx->pc == 0x23409Cu) {
        ctx->pc = 0x23409Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 1696)));
        ctx->pc = 0x2340A0u;
        goto label_2340a0;
    }
    ctx->pc = 0x234098u;
    {
        const bool branch_taken_0x234098 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x234098) {
            ctx->pc = 0x23409Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 1696)));
            ctx->pc = 0x2340B4u;
            goto label_2340b4;
        }
    }
    ctx->pc = 0x2340A0u;
label_2340a0:
    // 0x2340a0: 0x8e2301e0
    ctx->pc = 0x2340a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 480)));
label_2340a4:
    // 0x2340a4: 0x2402007e
    ctx->pc = 0x2340a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 126));
label_2340a8:
    // 0x2340a8: 0x50620001
label_2340ac:
    if (ctx->pc == 0x2340ACu) {
        ctx->pc = 0x2340ACu;
        WRITE32(ADD32(GPR_U32(ctx, 17), 484), GPR_U32(ctx, 0));
        ctx->pc = 0x2340B0u;
        goto label_2340b0;
    }
    ctx->pc = 0x2340A8u;
    {
        const bool branch_taken_0x2340a8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2340a8) {
            ctx->pc = 0x2340ACu;
            WRITE32(ADD32(GPR_U32(ctx, 17), 484), GPR_U32(ctx, 0));
            ctx->pc = 0x2340B0u;
            goto label_2340b0;
        }
    }
    ctx->pc = 0x2340B0u;
label_2340b0:
    // 0x2340b0: 0x8e2206a0
    ctx->pc = 0x2340b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 1696)));
label_2340b4:
    // 0x2340b4: 0xc62000e4
    ctx->pc = 0x2340b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2340b8:
    // 0x2340b8: 0xe4400030
    ctx->pc = 0x2340b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_2340bc:
    // 0x2340bc: 0x8e2206a0
    ctx->pc = 0x2340bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 1696)));
label_2340c0:
    // 0x2340c0: 0xc62000e8
    ctx->pc = 0x2340c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2340c4:
    // 0x2340c4: 0xe4400034
    ctx->pc = 0x2340c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_2340c8:
    // 0x2340c8: 0x8e2206a0
    ctx->pc = 0x2340c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 1696)));
label_2340cc:
    // 0x2340cc: 0xc62000ec
    ctx->pc = 0x2340ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2340d0:
    // 0x2340d0: 0xe4400038
    ctx->pc = 0x2340d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_2340d4:
    // 0x2340d4: 0x8e2206a0
    ctx->pc = 0x2340d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 1696)));
label_2340d8:
    // 0x2340d8: 0xc6200054
    ctx->pc = 0x2340d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2340dc:
    // 0x2340dc: 0xe4400034
    ctx->pc = 0x2340dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_2340e0:
    // 0x2340e0: 0xc08cc10
label_2340e4:
    if (ctx->pc == 0x2340E4u) {
        ctx->pc = 0x2340E4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2340E8u;
        goto label_2340e8;
    }
    ctx->pc = 0x2340E0u;
    SET_GPR_U32(ctx, 31, 0x2340E8u);
    ctx->pc = 0x2340E4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x233040u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerProcessSkinFX_0x233040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2340E8u; }
    }
    if (ctx->pc != 0x2340E8u) { return; }
    ctx->pc = 0x2340E8u;
label_2340e8:
    // 0x2340e8: 0xc093d1c
label_2340ec:
    if (ctx->pc == 0x2340ECu) {
        ctx->pc = 0x2340ECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2340F0u;
        goto label_2340f0;
    }
    ctx->pc = 0x2340E8u;
    SET_GPR_U32(ctx, 31, 0x2340F0u);
    ctx->pc = 0x2340ECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24F470u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerDoWeapTrail_0x24f470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2340F0u; }
    }
    if (ctx->pc != 0x2340F0u) { return; }
    ctx->pc = 0x2340F0u;
label_2340f0:
    // 0x2340f0: 0x8e2208f8
    ctx->pc = 0x2340f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 2296)));
label_2340f4:
    // 0x2340f4: 0x1c400033
label_2340f8:
    if (ctx->pc == 0x2340F8u) {
        ctx->pc = 0x2340F8u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2340FCu;
        goto label_2340fc;
    }
    ctx->pc = 0x2340F4u;
    {
        const bool branch_taken_0x2340f4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2340F8u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2340f4) {
            ctx->pc = 0x2341C4u;
            goto label_2341c4;
        }
    }
    ctx->pc = 0x2340FCu;
label_2340fc:
    // 0x2340fc: 0x8e2301e0
    ctx->pc = 0x2340fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 480)));
label_234100:
    // 0x234100: 0x2402007e
    ctx->pc = 0x234100u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 126));
label_234104:
    // 0x234104: 0x50620030
label_234108:
    if (ctx->pc == 0x234108u) {
        ctx->pc = 0x234108u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 18));
        ctx->pc = 0x23410Cu;
        goto label_23410c;
    }
    ctx->pc = 0x234104u;
    {
        const bool branch_taken_0x234104 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x234104) {
            ctx->pc = 0x234108u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 18));
            ctx->pc = 0x2341C8u;
            goto label_2341c8;
        }
    }
    ctx->pc = 0x23410Cu;
label_23410c:
    // 0x23410c: 0xc08c6c2
label_234110:
    if (ctx->pc == 0x234110u) {
        ctx->pc = 0x234110u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x234114u;
        goto label_234114;
    }
    ctx->pc = 0x23410Cu;
    SET_GPR_U32(ctx, 31, 0x234114u);
    ctx->pc = 0x234110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x231B08u;
    {
        const uint32_t __entryPc = ctx->pc;
        kill_player_0x231b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234114u; }
    }
    if (ctx->pc != 0x234114u) { return; }
    ctx->pc = 0x234114u;
label_234114:
    // 0x234114: 0x1000002b
label_234118:
    if (ctx->pc == 0x234118u) {
        ctx->pc = 0x234118u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23411Cu;
        goto label_23411c;
    }
    ctx->pc = 0x234114u;
    {
        const bool branch_taken_0x234114 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x234118u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x234114) {
            ctx->pc = 0x2341C4u;
            goto label_2341c4;
        }
    }
    ctx->pc = 0x23411Cu;
label_23411c:
    // 0x23411c: 0xc091486
label_234120:
    if (ctx->pc == 0x234120u) {
        ctx->pc = 0x234120u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x234124u;
        goto label_234124;
    }
    ctx->pc = 0x23411Cu;
    SET_GPR_U32(ctx, 31, 0x234124u);
    ctx->pc = 0x234120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x245218u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerCheckFloor_0x245218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234124u; }
    }
    if (ctx->pc != 0x234124u) { return; }
    ctx->pc = 0x234124u;
label_234124:
    // 0x234124: 0x10000024
label_234128:
    if (ctx->pc == 0x234128u) {
        ctx->pc = 0x23412Cu;
        goto label_23412c;
    }
    ctx->pc = 0x234124u;
    {
        const bool branch_taken_0x234124 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x234124) {
            ctx->pc = 0x2341B8u;
            goto label_2341b8;
        }
    }
    ctx->pc = 0x23412Cu;
label_23412c:
    // 0x23412c: 0xc091486
label_234130:
    if (ctx->pc == 0x234130u) {
        ctx->pc = 0x234130u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x234134u;
        goto label_234134;
    }
    ctx->pc = 0x23412Cu;
    SET_GPR_U32(ctx, 31, 0x234134u);
    ctx->pc = 0x234130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x245218u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerCheckFloor_0x245218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234134u; }
    }
    if (ctx->pc != 0x234134u) { return; }
    ctx->pc = 0x234134u;
label_234134:
    // 0x234134: 0xc0b1dda
label_234138:
    if (ctx->pc == 0x234138u) {
        ctx->pc = 0x23413Cu;
        goto label_23413c;
    }
    ctx->pc = 0x234134u;
    SET_GPR_U32(ctx, 31, 0x23413Cu);
    ctx->pc = 0x2C7768u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBackgroundLoading_0x2c7768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23413Cu; }
    }
    if (ctx->pc != 0x23413Cu) { return; }
    ctx->pc = 0x23413Cu;
label_23413c:
    // 0x23413c: 0x1440000d
label_234140:
    if (ctx->pc == 0x234140u) {
        ctx->pc = 0x234140u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x234144u;
        goto label_234144;
    }
    ctx->pc = 0x23413Cu;
    {
        const bool branch_taken_0x23413c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x234140u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x23413c) {
            ctx->pc = 0x234174u;
            goto label_234174;
        }
    }
    ctx->pc = 0x234144u;
label_234144:
    // 0x234144: 0x3c020031
    ctx->pc = 0x234144u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_234148:
    // 0x234148: 0x8c430018
    ctx->pc = 0x234148u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_23414c:
    // 0x23414c: 0x24024013
    ctx->pc = 0x23414cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16403));
label_234150:
    // 0x234150: 0x10620007
label_234154:
    if (ctx->pc == 0x234154u) {
        ctx->pc = 0x234154u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16407));
        ctx->pc = 0x234158u;
        goto label_234158;
    }
    ctx->pc = 0x234150u;
    {
        const bool branch_taken_0x234150 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x234154u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16407));
        if (branch_taken_0x234150) {
            ctx->pc = 0x234170u;
            goto label_234170;
        }
    }
    ctx->pc = 0x234158u;
label_234158:
    // 0x234158: 0x10620006
label_23415c:
    if (ctx->pc == 0x23415Cu) {
        ctx->pc = 0x23415Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x234160u;
        goto label_234160;
    }
    ctx->pc = 0x234158u;
    {
        const bool branch_taken_0x234158 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23415Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x234158) {
            ctx->pc = 0x234174u;
            goto label_234174;
        }
    }
    ctx->pc = 0x234160u;
label_234160:
    // 0x234160: 0xc08c432
label_234164:
    if (ctx->pc == 0x234164u) {
        ctx->pc = 0x234164u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x234168u;
        goto label_234168;
    }
    ctx->pc = 0x234160u;
    SET_GPR_U32(ctx, 31, 0x234168u);
    ctx->pc = 0x234164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2310C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        activate_player_0x2310c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234168u; }
    }
    if (ctx->pc != 0x234168u) { return; }
    ctx->pc = 0x234168u;
label_234168:
    // 0x234168: 0x10000013
label_23416c:
    if (ctx->pc == 0x23416Cu) {
        ctx->pc = 0x234170u;
        goto label_234170;
    }
    ctx->pc = 0x234168u;
    {
        const bool branch_taken_0x234168 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x234168) {
            ctx->pc = 0x2341B8u;
            goto label_2341b8;
        }
    }
    ctx->pc = 0x234170u;
label_234170:
    // 0x234170: 0x3c020031
    ctx->pc = 0x234170u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_234174:
    // 0x234174: 0x8c420014
    ctx->pc = 0x234174u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_234178:
    // 0x234178: 0x1040000b
label_23417c:
    if (ctx->pc == 0x23417Cu) {
        ctx->pc = 0x23417Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x234180u;
        goto label_234180;
    }
    ctx->pc = 0x234178u;
    {
        const bool branch_taken_0x234178 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x23417Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x234178) {
            ctx->pc = 0x2341A8u;
            goto label_2341a8;
        }
    }
    ctx->pc = 0x234180u;
label_234180:
    // 0x234180: 0x8c430018
    ctx->pc = 0x234180u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_234184:
    // 0x234184: 0x2402400b
    ctx->pc = 0x234184u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16395));
label_234188:
    // 0x234188: 0x1062000b
label_23418c:
    if (ctx->pc == 0x23418Cu) {
        ctx->pc = 0x23418Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16397));
        ctx->pc = 0x234190u;
        goto label_234190;
    }
    ctx->pc = 0x234188u;
    {
        const bool branch_taken_0x234188 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23418Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16397));
        if (branch_taken_0x234188) {
            ctx->pc = 0x2341B8u;
            goto label_2341b8;
        }
    }
    ctx->pc = 0x234190u;
label_234190:
    // 0x234190: 0x10620009
label_234194:
    if (ctx->pc == 0x234194u) {
        ctx->pc = 0x234194u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16399));
        ctx->pc = 0x234198u;
        goto label_234198;
    }
    ctx->pc = 0x234190u;
    {
        const bool branch_taken_0x234190 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x234194u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16399));
        if (branch_taken_0x234190) {
            ctx->pc = 0x2341B8u;
            goto label_2341b8;
        }
    }
    ctx->pc = 0x234198u;
label_234198:
    // 0x234198: 0x10620007
label_23419c:
    if (ctx->pc == 0x23419Cu) {
        ctx->pc = 0x23419Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16406));
        ctx->pc = 0x2341A0u;
        goto label_2341a0;
    }
    ctx->pc = 0x234198u;
    {
        const bool branch_taken_0x234198 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x23419Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16406));
        if (branch_taken_0x234198) {
            ctx->pc = 0x2341B8u;
            goto label_2341b8;
        }
    }
    ctx->pc = 0x2341A0u;
label_2341a0:
    // 0x2341a0: 0x10620005
label_2341a4:
    if (ctx->pc == 0x2341A4u) {
        ctx->pc = 0x2341A8u;
        goto label_2341a8;
    }
    ctx->pc = 0x2341A0u;
    {
        const bool branch_taken_0x2341a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2341a0) {
            ctx->pc = 0x2341B8u;
            goto label_2341b8;
        }
    }
    ctx->pc = 0x2341A8u;
label_2341a8:
    // 0x2341a8: 0xc0a1576
label_2341ac:
    if (ctx->pc == 0x2341ACu) {
        ctx->pc = 0x2341ACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2341B0u;
        goto label_2341b0;
    }
    ctx->pc = 0x2341A8u;
    SET_GPR_U32(ctx, 31, 0x2341B0u);
    ctx->pc = 0x2341ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2855D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        update_class_spec_0x2855d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2341B0u; }
    }
    if (ctx->pc != 0x2341B0u) { return; }
    ctx->pc = 0x2341B0u;
label_2341b0:
    // 0x2341b0: 0xc08da4e
label_2341b4:
    if (ctx->pc == 0x2341B4u) {
        ctx->pc = 0x2341B4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2341B8u;
        goto label_2341b8;
    }
    ctx->pc = 0x2341B0u;
    SET_GPR_U32(ctx, 31, 0x2341B8u);
    ctx->pc = 0x2341B4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x236938u;
    {
        const uint32_t __entryPc = ctx->pc;
        WritePlayerInfo_0x236938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2341B8u; }
    }
    if (ctx->pc != 0x2341B8u) { return; }
    ctx->pc = 0x2341B8u;
label_2341b8:
    // 0x2341b8: 0xc08cbda
label_2341bc:
    if (ctx->pc == 0x2341BCu) {
        ctx->pc = 0x2341BCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2341C0u;
        goto label_2341c0;
    }
    ctx->pc = 0x2341B8u;
    SET_GPR_U32(ctx, 31, 0x2341C0u);
    ctx->pc = 0x2341BCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x232F68u;
    {
        const uint32_t __entryPc = ctx->pc;
        advance_ok_0x232f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2341C0u; }
    }
    if (ctx->pc != 0x2341C0u) { return; }
    ctx->pc = 0x2341C0u;
label_2341c0:
    // 0x2341c0: 0x2a00a
    ctx->pc = 0x2341c0u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 0));
label_2341c4:
    // 0x2341c4: 0xae320100
    ctx->pc = 0x2341c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 18));
label_2341c8:
    // 0x2341c8: 0x26730001
    ctx->pc = 0x2341c8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_2341cc:
    // 0x2341cc: 0x2a620004
    ctx->pc = 0x2341ccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 4));
label_2341d0:
    // 0x2341d0: 0x1440fdd3
label_2341d4:
    if (ctx->pc == 0x2341D4u) {
        ctx->pc = 0x2341D4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 11008));
        ctx->pc = 0x2341D8u;
        goto label_2341d8;
    }
    ctx->pc = 0x2341D0u;
    {
        const bool branch_taken_0x2341d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2341D4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 11008));
        if (branch_taken_0x2341d0) {
            ctx->pc = 0x233920u;
            goto label_233920;
        }
    }
    ctx->pc = 0x2341D8u;
label_2341d8:
    // 0x2341d8: 0x3c020031
    ctx->pc = 0x2341d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2341dc:
    // 0x2341dc: 0x8c430018
    ctx->pc = 0x2341dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2341e0:
    // 0x2341e0: 0x2402400b
    ctx->pc = 0x2341e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16395));
label_2341e4:
    // 0x2341e4: 0x10620019
label_2341e8:
    if (ctx->pc == 0x2341E8u) {
        ctx->pc = 0x2341E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16397));
        ctx->pc = 0x2341ECu;
        goto label_2341ec;
    }
    ctx->pc = 0x2341E4u;
    {
        const bool branch_taken_0x2341e4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2341E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16397));
        if (branch_taken_0x2341e4) {
            ctx->pc = 0x23424Cu;
            goto label_23424c;
        }
    }
    ctx->pc = 0x2341ECu;
label_2341ec:
    // 0x2341ec: 0x10620017
label_2341f0:
    if (ctx->pc == 0x2341F0u) {
        ctx->pc = 0x2341F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16402));
        ctx->pc = 0x2341F4u;
        goto label_2341f4;
    }
    ctx->pc = 0x2341ECu;
    {
        const bool branch_taken_0x2341ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2341F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16402));
        if (branch_taken_0x2341ec) {
            ctx->pc = 0x23424Cu;
            goto label_23424c;
        }
    }
    ctx->pc = 0x2341F4u;
label_2341f4:
    // 0x2341f4: 0x10620015
label_2341f8:
    if (ctx->pc == 0x2341F8u) {
        ctx->pc = 0x2341F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16399));
        ctx->pc = 0x2341FCu;
        goto label_2341fc;
    }
    ctx->pc = 0x2341F4u;
    {
        const bool branch_taken_0x2341f4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2341F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16399));
        if (branch_taken_0x2341f4) {
            ctx->pc = 0x23424Cu;
            goto label_23424c;
        }
    }
    ctx->pc = 0x2341FCu;
label_2341fc:
    // 0x2341fc: 0x10620013
label_234200:
    if (ctx->pc == 0x234200u) {
        ctx->pc = 0x234200u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16406));
        ctx->pc = 0x234204u;
        goto label_234204;
    }
    ctx->pc = 0x2341FCu;
    {
        const bool branch_taken_0x2341fc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x234200u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16406));
        if (branch_taken_0x2341fc) {
            ctx->pc = 0x23424Cu;
            goto label_23424c;
        }
    }
    ctx->pc = 0x234204u;
label_234204:
    // 0x234204: 0x10620011
label_234208:
    if (ctx->pc == 0x234208u) {
        ctx->pc = 0x234208u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23420Cu;
        goto label_23420c;
    }
    ctx->pc = 0x234204u;
    {
        const bool branch_taken_0x234204 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x234208u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x234204) {
            ctx->pc = 0x23424Cu;
            goto label_23424c;
        }
    }
    ctx->pc = 0x23420Cu;
label_23420c:
    // 0x23420c: 0x3c020032
    ctx->pc = 0x23420cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_234210:
    // 0x234210: 0x24511bc0
    ctx->pc = 0x234210u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 7104));
label_234214:
    // 0x234214: 0x0
    ctx->pc = 0x234214u;
    // NOP
label_234218:
    // 0x234218: 0x8e2200fc
    ctx->pc = 0x234218u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 252)));
label_23421c:
    // 0x23421c: 0x50400008
label_234220:
    if (ctx->pc == 0x234220u) {
        ctx->pc = 0x234220u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x234224u;
        goto label_234224;
    }
    ctx->pc = 0x23421Cu;
    {
        const bool branch_taken_0x23421c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x23421c) {
            ctx->pc = 0x234220u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x234240u;
            goto label_234240;
        }
    }
    ctx->pc = 0x234224u;
label_234224:
    // 0x234224: 0x9622093c
    ctx->pc = 0x234224u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2364)));
label_234228:
    // 0x234228: 0x30420001
    ctx->pc = 0x234228u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_23422c:
    // 0x23422c: 0x10400003
label_234230:
    if (ctx->pc == 0x234230u) {
        ctx->pc = 0x234230u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x234234u;
        goto label_234234;
    }
    ctx->pc = 0x23422Cu;
    {
        const bool branch_taken_0x23422c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x234230u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x23422c) {
            ctx->pc = 0x23423Cu;
            goto label_23423c;
        }
    }
    ctx->pc = 0x234234u;
label_234234:
    // 0x234234: 0xc08ac14
label_234238:
    if (ctx->pc == 0x234238u) {
        ctx->pc = 0x234238u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23423Cu;
        goto label_23423c;
    }
    ctx->pc = 0x234234u;
    SET_GPR_U32(ctx, 31, 0x23423Cu);
    ctx->pc = 0x234238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22B050u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdatePlayerWorldMat_0x22b050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23423Cu; }
    }
    if (ctx->pc != 0x23423Cu) { return; }
    ctx->pc = 0x23423Cu;
label_23423c:
    // 0x23423c: 0x26730001
    ctx->pc = 0x23423cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_234240:
    // 0x234240: 0x2a620004
    ctx->pc = 0x234240u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 4));
label_234244:
    // 0x234244: 0x1440fff4
label_234248:
    if (ctx->pc == 0x234248u) {
        ctx->pc = 0x234248u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 11008));
        ctx->pc = 0x23424Cu;
        goto label_23424c;
    }
    ctx->pc = 0x234244u;
    {
        const bool branch_taken_0x234244 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x234248u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 11008));
        if (branch_taken_0x234244) {
            ctx->pc = 0x234218u;
            goto label_234218;
        }
    }
    ctx->pc = 0x23424Cu;
label_23424c:
    // 0x23424c: 0x3c030032
    ctx->pc = 0x23424cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_234250:
    // 0x234250: 0x8c621ba8
    ctx->pc = 0x234250u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 7080)));
label_234254:
    // 0x234254: 0x40202d
    ctx->pc = 0x234254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234258:
    // 0x234258: 0x24420001
    ctx->pc = 0x234258u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_23425c:
    // 0x23425c: 0xac621ba8
    ctx->pc = 0x23425cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7080), GPR_U32(ctx, 2));
label_234260:
    // 0x234260: 0x24830003
    ctx->pc = 0x234260u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 3));
label_234264:
    // 0x234264: 0x2402ffff
    ctx->pc = 0x234264u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_234268:
    // 0x234268: 0x44102a
    ctx->pc = 0x234268u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
label_23426c:
    // 0x23426c: 0x82180b
    ctx->pc = 0x23426cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
label_234270:
    // 0x234270: 0x39083
    ctx->pc = 0x234270u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), 2));
label_234274:
    // 0x234274: 0x121080
    ctx->pc = 0x234274u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 2));
label_234278:
    // 0x234278: 0x829023
    ctx->pc = 0x234278u;
    SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_23427c:
    // 0x23427c: 0x982d
    ctx->pc = 0x23427cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234280:
    // 0x234280: 0x3c020032
    ctx->pc = 0x234280u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_234284:
    // 0x234284: 0x245e1bc0
    ctx->pc = 0x234284u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 2), 7104));
label_234288:
    // 0x234288: 0x24170001
    ctx->pc = 0x234288u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1));
label_23428c:
    // 0x23428c: 0x3c160031
    ctx->pc = 0x23428cu;
    SET_GPR_U32(ctx, 22, ((uint32_t)49 << 16));
label_234290:
    // 0x234290: 0x24154010
    ctx->pc = 0x234290u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 16400));
label_234294:
    // 0x234294: 0x2532021
    ctx->pc = 0x234294u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_234298:
    // 0x234298: 0x24820003
    ctx->pc = 0x234298u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 3));
label_23429c:
    // 0x23429c: 0x2405ffff
    ctx->pc = 0x23429cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2342a0:
    // 0x2342a0: 0xa4182a
    ctx->pc = 0x2342a0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 4)));
label_2342a4:
    // 0x2342a4: 0x83100b
    ctx->pc = 0x2342a4u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
label_2342a8:
    // 0x2342a8: 0x28083
    ctx->pc = 0x2342a8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
label_2342ac:
    // 0x2342ac: 0x101080
    ctx->pc = 0x2342acu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_2342b0:
    // 0x2342b0: 0x828023
    ctx->pc = 0x2342b0u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2342b4:
    // 0x2342b4: 0x24022b00
    ctx->pc = 0x2342b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
label_2342b8:
    // 0x2342b8: 0x2021018
    ctx->pc = 0x2342b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2342bc:
    // 0x2342bc: 0x5e8821
    ctx->pc = 0x2342bcu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_2342c0:
    // 0x2342c0: 0x8e250888
    ctx->pc = 0x2342c0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 2184)));
label_2342c4:
    // 0x2342c4: 0x50a0001b
label_2342c8:
    if (ctx->pc == 0x2342C8u) {
        ctx->pc = 0x2342C8u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x2342CCu;
        goto label_2342cc;
    }
    ctx->pc = 0x2342C4u;
    {
        const bool branch_taken_0x2342c4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x2342c4) {
            ctx->pc = 0x2342C8u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x234334u;
            goto label_234334;
        }
    }
    ctx->pc = 0x2342CCu;
label_2342cc:
    // 0x2342cc: 0x8e2200fc
    ctx->pc = 0x2342ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 252)));
label_2342d0:
    // 0x2342d0: 0x54570017
label_2342d4:
    if (ctx->pc == 0x2342D4u) {
        ctx->pc = 0x2342D4u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 2184), GPR_U32(ctx, 0));
        ctx->pc = 0x2342D8u;
        goto label_2342d8;
    }
    ctx->pc = 0x2342D0u;
    {
        const bool branch_taken_0x2342d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 23));
        if (branch_taken_0x2342d0) {
            ctx->pc = 0x2342D4u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 2184), GPR_U32(ctx, 0));
            ctx->pc = 0x234330u;
            goto label_234330;
        }
    }
    ctx->pc = 0x2342D8u;
label_2342d8:
    // 0x2342d8: 0x8ec20018
    ctx->pc = 0x2342d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 24)));
label_2342dc:
    // 0x2342dc: 0x54550014
label_2342e0:
    if (ctx->pc == 0x2342E0u) {
        ctx->pc = 0x2342E0u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 2184), GPR_U32(ctx, 0));
        ctx->pc = 0x2342E4u;
        goto label_2342e4;
    }
    ctx->pc = 0x2342DCu;
    {
        const bool branch_taken_0x2342dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 21));
        if (branch_taken_0x2342dc) {
            ctx->pc = 0x2342E0u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 2184), GPR_U32(ctx, 0));
            ctx->pc = 0x234330u;
            goto label_234330;
        }
    }
    ctx->pc = 0x2342E4u;
label_2342e4:
    // 0x2342e4: 0xc096320
label_2342e8:
    if (ctx->pc == 0x2342E8u) {
        ctx->pc = 0x2342E8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2342ECu;
        goto label_2342ec;
    }
    ctx->pc = 0x2342E4u;
    SET_GPR_U32(ctx, 31, 0x2342ECu);
    ctx->pc = 0x2342E8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x258C80u;
    {
        const uint32_t __entryPc = ctx->pc;
        GrabPowerup_0x258c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2342ECu; }
    }
    if (ctx->pc != 0x2342ECu) { return; }
    ctx->pc = 0x2342ECu;
label_2342ec:
    // 0x2342ec: 0x282d
    ctx->pc = 0x2342ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2342f0:
    // 0x2342f0: 0x3c020032
    ctx->pc = 0x2342f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2342f4:
    // 0x2342f4: 0x24471bc0
    ctx->pc = 0x2342f4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 7104));
label_2342f8:
    // 0x2342f8: 0x24062b00
    ctx->pc = 0x2342f8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 11008));
label_2342fc:
    // 0x2342fc: 0x0
    ctx->pc = 0x2342fcu;
    // NOP
label_234300:
    // 0x234300: 0x10b00006
label_234304:
    if (ctx->pc == 0x234304u) {
        ctx->pc = 0x234304u;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        ctx->pc = 0x234308u;
        goto label_234308;
    }
    ctx->pc = 0x234300u;
    {
        const bool branch_taken_0x234300 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 16));
        ctx->pc = 0x234304u;
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x234300) {
            ctx->pc = 0x23431Cu;
            goto label_23431c;
        }
    }
    ctx->pc = 0x234308u;
label_234308:
    // 0x234308: 0x472021
    ctx->pc = 0x234308u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_23430c:
    // 0x23430c: 0x8c830888
    ctx->pc = 0x23430cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 2184)));
label_234310:
    // 0x234310: 0x8e220888
    ctx->pc = 0x234310u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 2184)));
label_234314:
    // 0x234314: 0x50620001
label_234318:
    if (ctx->pc == 0x234318u) {
        ctx->pc = 0x234318u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 2184), GPR_U32(ctx, 0));
        ctx->pc = 0x23431Cu;
        goto label_23431c;
    }
    ctx->pc = 0x234314u;
    {
        const bool branch_taken_0x234314 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x234314) {
            ctx->pc = 0x234318u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 2184), GPR_U32(ctx, 0));
            ctx->pc = 0x23431Cu;
            goto label_23431c;
        }
    }
    ctx->pc = 0x23431Cu;
label_23431c:
    // 0x23431c: 0x24a50001
    ctx->pc = 0x23431cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_234320:
    // 0x234320: 0x28a20004
    ctx->pc = 0x234320u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
label_234324:
    // 0x234324: 0x1440fff6
label_234328:
    if (ctx->pc == 0x234328u) {
        ctx->pc = 0x23432Cu;
        goto label_23432c;
    }
    ctx->pc = 0x234324u;
    {
        const bool branch_taken_0x234324 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x234324) {
            ctx->pc = 0x234300u;
            goto label_234300;
        }
    }
    ctx->pc = 0x23432Cu;
label_23432c:
    // 0x23432c: 0xae200888
    ctx->pc = 0x23432cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2184), GPR_U32(ctx, 0));
label_234330:
    // 0x234330: 0x26730001
    ctx->pc = 0x234330u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_234334:
    // 0x234334: 0x2a620004
    ctx->pc = 0x234334u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 4));
label_234338:
    // 0x234338: 0x1440ffd7
label_23433c:
    if (ctx->pc == 0x23433Cu) {
        ctx->pc = 0x23433Cu;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->pc = 0x234340u;
        goto label_234340;
    }
    ctx->pc = 0x234338u;
    {
        const bool branch_taken_0x234338 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x23433Cu;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        if (branch_taken_0x234338) {
            ctx->pc = 0x234298u;
            goto label_234298;
        }
    }
    ctx->pc = 0x234340u;
label_234340:
    // 0x234340: 0x982d
    ctx->pc = 0x234340u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_234344:
    // 0x234344: 0x3c020032
    ctx->pc = 0x234344u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_234348:
    // 0x234348: 0x24511bc0
    ctx->pc = 0x234348u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 7104));
label_23434c:
    // 0x23434c: 0x24040001
    ctx->pc = 0x23434cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_234350:
    // 0x234350: 0x10000003
label_234354:
    if (ctx->pc == 0x234354u) {
        ctx->pc = 0x234354u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x234358u;
        goto label_234358;
    }
    ctx->pc = 0x234350u;
    {
        const bool branch_taken_0x234350 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x234354u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x234350) {
            ctx->pc = 0x234360u;
            goto label_234360;
        }
    }
    ctx->pc = 0x234358u;
label_234358:
    // 0x234358: 0x26730001
    ctx->pc = 0x234358u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_23435c:
    // 0x23435c: 0x26312b00
    ctx->pc = 0x23435cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 11008));
label_234360:
    // 0x234360: 0x2a620004
    ctx->pc = 0x234360u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 4));
label_234364:
    // 0x234364: 0x50400019
label_234368:
    if (ctx->pc == 0x234368u) {
        ctx->pc = 0x234368u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x23436Cu;
        goto label_23436c;
    }
    ctx->pc = 0x234364u;
    {
        const bool branch_taken_0x234364 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x234364) {
            ctx->pc = 0x234368u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
            ctx->pc = 0x2343CCu;
            goto label_2343cc;
        }
    }
    ctx->pc = 0x23436Cu;
label_23436c:
    // 0x23436c: 0x8e2200fc
    ctx->pc = 0x23436cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 252)));
label_234370:
    // 0x234370: 0x50440004
label_234374:
    if (ctx->pc == 0x234374u) {
        ctx->pc = 0x234374u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2344)));
        ctx->pc = 0x234378u;
        goto label_234378;
    }
    ctx->pc = 0x234370u;
    {
        const bool branch_taken_0x234370 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        if (branch_taken_0x234370) {
            ctx->pc = 0x234374u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2344)));
            ctx->pc = 0x234384u;
            goto label_234384;
        }
    }
    ctx->pc = 0x234378u;
label_234378:
    // 0x234378: 0x5443fff8
label_23437c:
    if (ctx->pc == 0x23437Cu) {
        ctx->pc = 0x23437Cu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x234380u;
        goto label_234380;
    }
    ctx->pc = 0x234378u;
    {
        const bool branch_taken_0x234378 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x234378) {
            ctx->pc = 0x23437Cu;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x23435Cu;
            goto label_23435c;
        }
    }
    ctx->pc = 0x234380u;
label_234380:
    // 0x234380: 0x86220928
    ctx->pc = 0x234380u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2344)));
label_234384:
    // 0x234384: 0x1040fff4
label_234388:
    if (ctx->pc == 0x234388u) {
        ctx->pc = 0x234388u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 4));
        ctx->pc = 0x23438Cu;
        goto label_23438c;
    }
    ctx->pc = 0x234384u;
    {
        const bool branch_taken_0x234384 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x234388u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 4));
        if (branch_taken_0x234384) {
            ctx->pc = 0x234358u;
            goto label_234358;
        }
    }
    ctx->pc = 0x23438Cu;
label_23438c:
    // 0x23438c: 0x1040000e
label_234390:
    if (ctx->pc == 0x234390u) {
        ctx->pc = 0x234390u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x234394u;
        goto label_234394;
    }
    ctx->pc = 0x23438Cu;
    {
        const bool branch_taken_0x23438c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x234390u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x23438c) {
            ctx->pc = 0x2343C8u;
            goto label_2343c8;
        }
    }
    ctx->pc = 0x234394u;
label_234394:
    // 0x234394: 0x8c430018
    ctx->pc = 0x234394u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_234398:
    // 0x234398: 0x24024012
    ctx->pc = 0x234398u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16402));
label_23439c:
    // 0x23439c: 0x1062000a
label_2343a0:
    if (ctx->pc == 0x2343A0u) {
        ctx->pc = 0x2343A0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 11008));
        ctx->pc = 0x2343A4u;
        goto label_2343a4;
    }
    ctx->pc = 0x23439Cu;
    {
        const bool branch_taken_0x23439c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2343A0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x23439c) {
            ctx->pc = 0x2343C8u;
            goto label_2343c8;
        }
    }
    ctx->pc = 0x2343A4u;
label_2343a4:
    // 0x2343a4: 0x2652818
    ctx->pc = 0x2343a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2343a8:
    // 0x2343a8: 0x3c020032
    ctx->pc = 0x2343a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2343ac:
    // 0x2343ac: 0x24421be0
    ctx->pc = 0x2343acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7136));
label_2343b0:
    // 0x2343b0: 0xa22821
    ctx->pc = 0x2343b0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2343b4:
    // 0x2343b4: 0x202d
    ctx->pc = 0x2343b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2343b8:
    // 0x2343b8: 0xc098128
label_2343bc:
    if (ctx->pc == 0x2343BCu) {
        ctx->pc = 0x2343BCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
        ctx->pc = 0x2343C0u;
        goto label_2343c0;
    }
    ctx->pc = 0x2343B8u;
    SET_GPR_U32(ctx, 31, 0x2343C0u);
    ctx->pc = 0x2343BCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    ctx->pc = 0x2604A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioExitAnim_0x2604a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2343C0u; }
    }
    if (ctx->pc != 0x2343C0u) { return; }
    ctx->pc = 0x2343C0u;
label_2343c0:
    // 0x2343c0: 0x10000005
label_2343c4:
    if (ctx->pc == 0x2343C4u) {
        ctx->pc = 0x2343C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        ctx->pc = 0x2343C8u;
        goto label_2343c8;
    }
    ctx->pc = 0x2343C0u;
    {
        const bool branch_taken_0x2343c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2343C4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x2343c0) {
            ctx->pc = 0x2343D8u;
            goto label_2343d8;
        }
    }
    ctx->pc = 0x2343C8u;
label_2343c8:
    // 0x2343c8: 0x24040002
    ctx->pc = 0x2343c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
label_2343cc:
    // 0x2343cc: 0xc098128
label_2343d0:
    if (ctx->pc == 0x2343D0u) {
        ctx->pc = 0x2343D0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2343D4u;
        goto label_2343d4;
    }
    ctx->pc = 0x2343CCu;
    SET_GPR_U32(ctx, 31, 0x2343D4u);
    ctx->pc = 0x2343D0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2604A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioExitAnim_0x2604a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2343D4u; }
    }
    if (ctx->pc != 0x2343D4u) { return; }
    ctx->pc = 0x2343D4u;
label_2343d4:
    // 0x2343d4: 0x3c020031
    ctx->pc = 0x2343d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_2343d8:
    // 0x2343d8: 0x8c430018
    ctx->pc = 0x2343d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2343dc:
    // 0x2343dc: 0x2402400d
    ctx->pc = 0x2343dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16397));
label_2343e0:
    // 0x2343e0: 0x10620016
label_2343e4:
    if (ctx->pc == 0x2343E4u) {
        ctx->pc = 0x2343E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16402));
        ctx->pc = 0x2343E8u;
        goto label_2343e8;
    }
    ctx->pc = 0x2343E0u;
    {
        const bool branch_taken_0x2343e0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2343E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16402));
        if (branch_taken_0x2343e0) {
            ctx->pc = 0x23443Cu;
            goto label_23443c;
        }
    }
    ctx->pc = 0x2343E8u;
label_2343e8:
    // 0x2343e8: 0x10620014
label_2343ec:
    if (ctx->pc == 0x2343ECu) {
        ctx->pc = 0x2343ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16406));
        ctx->pc = 0x2343F0u;
        goto label_2343f0;
    }
    ctx->pc = 0x2343E8u;
    {
        const bool branch_taken_0x2343e8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2343ECu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16406));
        if (branch_taken_0x2343e8) {
            ctx->pc = 0x23443Cu;
            goto label_23443c;
        }
    }
    ctx->pc = 0x2343F0u;
label_2343f0:
    // 0x2343f0: 0x10620012
label_2343f4:
    if (ctx->pc == 0x2343F4u) {
        ctx->pc = 0x2343F4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        ctx->pc = 0x2343F8u;
        goto label_2343f8;
    }
    ctx->pc = 0x2343F0u;
    {
        const bool branch_taken_0x2343f0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2343F4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2343f0) {
            ctx->pc = 0x23443Cu;
            goto label_23443c;
        }
    }
    ctx->pc = 0x2343F8u;
label_2343f8:
    // 0x2343f8: 0x8c42080c
    ctx->pc = 0x2343f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
label_2343fc:
    // 0x2343fc: 0x14400010
label_234400:
    if (ctx->pc == 0x234400u) {
        ctx->pc = 0x234400u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x234404u;
        goto label_234404;
    }
    ctx->pc = 0x2343FCu;
    {
        const bool branch_taken_0x2343fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x234400u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2343fc) {
            ctx->pc = 0x234440u;
            goto label_234440;
        }
    }
    ctx->pc = 0x234404u;
label_234404:
    // 0x234404: 0x3c020034
    ctx->pc = 0x234404u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_234408:
    // 0x234408: 0x8c42f938
    ctx->pc = 0x234408u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965560)));
label_23440c:
    // 0x23440c: 0x14400005
label_234410:
    if (ctx->pc == 0x234410u) {
        ctx->pc = 0x234410u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x234414u;
        goto label_234414;
    }
    ctx->pc = 0x23440Cu;
    {
        const bool branch_taken_0x23440c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x234410u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x23440c) {
            ctx->pc = 0x234424u;
            goto label_234424;
        }
    }
    ctx->pc = 0x234414u;
label_234414:
    // 0x234414: 0x8c42f93c
    ctx->pc = 0x234414u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965564)));
label_234418:
    // 0x234418: 0x1c400002
label_23441c:
    if (ctx->pc == 0x23441Cu) {
        ctx->pc = 0x23441Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        ctx->pc = 0x234420u;
        goto label_234420;
    }
    ctx->pc = 0x234418u;
    {
        const bool branch_taken_0x234418 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x23441Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x234418) {
            ctx->pc = 0x234424u;
            goto label_234424;
        }
    }
    ctx->pc = 0x234420u;
label_234420:
    // 0x234420: 0xac40f934
    ctx->pc = 0x234420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965556), GPR_U32(ctx, 0));
label_234424:
    // 0x234424: 0xc08da4e
label_234428:
    if (ctx->pc == 0x234428u) {
        ctx->pc = 0x234428u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x23442Cu;
        goto label_23442c;
    }
    ctx->pc = 0x234424u;
    SET_GPR_U32(ctx, 31, 0x23442Cu);
    ctx->pc = 0x234428u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x236938u;
    {
        const uint32_t __entryPc = ctx->pc;
        WritePlayerInfo_0x236938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23442Cu; }
    }
    if (ctx->pc != 0x23442Cu) { return; }
    ctx->pc = 0x23442Cu;
label_23442c:
    // 0x23442c: 0xc08ace6
label_234430:
    if (ctx->pc == 0x234430u) {
        ctx->pc = 0x234434u;
        goto label_234434;
    }
    ctx->pc = 0x23442Cu;
    SET_GPR_U32(ctx, 31, 0x234434u);
    ctx->pc = 0x22B398u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_got_it_0x22b398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234434u; }
    }
    if (ctx->pc != 0x234434u) { return; }
    ctx->pc = 0x234434u;
label_234434:
    // 0x234434: 0xc09753a
label_234438:
    if (ctx->pc == 0x234438u) {
        ctx->pc = 0x23443Cu;
        goto label_23443c;
    }
    ctx->pc = 0x234434u;
    SET_GPR_U32(ctx, 31, 0x23443Cu);
    ctx->pc = 0x25D4E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoTimestopSound_0x25d4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23443Cu; }
    }
    if (ctx->pc != 0x23443Cu) { return; }
    ctx->pc = 0x23443Cu;
label_23443c:
    // 0x23443c: 0x280102d
    ctx->pc = 0x23443cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_234440:
    // 0x234440: 0xdfbf00e0
    ctx->pc = 0x234440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_234444:
    // 0x234444: 0xdfbe00d0
    ctx->pc = 0x234444u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_234448:
    // 0x234448: 0xdfb700c0
    ctx->pc = 0x234448u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_23444c:
    // 0x23444c: 0xdfb600b0
    ctx->pc = 0x23444cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_234450:
    // 0x234450: 0xdfb500a0
    ctx->pc = 0x234450u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_234454:
    // 0x234454: 0xdfb40090
    ctx->pc = 0x234454u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_234458:
    // 0x234458: 0xdfb30080
    ctx->pc = 0x234458u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_23445c:
    // 0x23445c: 0xdfb20070
    ctx->pc = 0x23445cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_234460:
    // 0x234460: 0xdfb10060
    ctx->pc = 0x234460u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_234464:
    // 0x234464: 0xdfb00050
    ctx->pc = 0x234464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_234468:
    // 0x234468: 0xc7b60100
    ctx->pc = 0x234468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_23446c:
    // 0x23446c: 0xc7b500f8
    ctx->pc = 0x23446cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_234470:
    // 0x234470: 0xc7b400f0
    ctx->pc = 0x234470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_234474:
    // 0x234474: 0x3e00008
label_234478:
    if (ctx->pc == 0x234478u) {
        ctx->pc = 0x234478u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x23447Cu;
        goto label_fallthrough_0x234474;
    }
    ctx->pc = 0x234474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234478u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233200u: goto label_233200;
            case 0x233204u: goto label_233204;
            case 0x233208u: goto label_233208;
            case 0x23320Cu: goto label_23320c;
            case 0x233210u: goto label_233210;
            case 0x233214u: goto label_233214;
            case 0x233218u: goto label_233218;
            case 0x23321Cu: goto label_23321c;
            case 0x233220u: goto label_233220;
            case 0x233224u: goto label_233224;
            case 0x233228u: goto label_233228;
            case 0x23322Cu: goto label_23322c;
            case 0x233230u: goto label_233230;
            case 0x233234u: goto label_233234;
            case 0x233238u: goto label_233238;
            case 0x23323Cu: goto label_23323c;
            case 0x233240u: goto label_233240;
            case 0x233244u: goto label_233244;
            case 0x233248u: goto label_233248;
            case 0x23324Cu: goto label_23324c;
            case 0x233250u: goto label_233250;
            case 0x233254u: goto label_233254;
            case 0x233258u: goto label_233258;
            case 0x23325Cu: goto label_23325c;
            case 0x233260u: goto label_233260;
            case 0x233264u: goto label_233264;
            case 0x233268u: goto label_233268;
            case 0x23326Cu: goto label_23326c;
            case 0x233270u: goto label_233270;
            case 0x233274u: goto label_233274;
            case 0x233278u: goto label_233278;
            case 0x23327Cu: goto label_23327c;
            case 0x233280u: goto label_233280;
            case 0x233284u: goto label_233284;
            case 0x233288u: goto label_233288;
            case 0x23328Cu: goto label_23328c;
            case 0x233290u: goto label_233290;
            case 0x233294u: goto label_233294;
            case 0x233298u: goto label_233298;
            case 0x23329Cu: goto label_23329c;
            case 0x2332A0u: goto label_2332a0;
            case 0x2332A4u: goto label_2332a4;
            case 0x2332A8u: goto label_2332a8;
            case 0x2332ACu: goto label_2332ac;
            case 0x2332B0u: goto label_2332b0;
            case 0x2332B4u: goto label_2332b4;
            case 0x2332B8u: goto label_2332b8;
            case 0x2332BCu: goto label_2332bc;
            case 0x2332C0u: goto label_2332c0;
            case 0x2332C4u: goto label_2332c4;
            case 0x2332C8u: goto label_2332c8;
            case 0x2332CCu: goto label_2332cc;
            case 0x2332D0u: goto label_2332d0;
            case 0x2332D4u: goto label_2332d4;
            case 0x2332D8u: goto label_2332d8;
            case 0x2332DCu: goto label_2332dc;
            case 0x2332E0u: goto label_2332e0;
            case 0x2332E4u: goto label_2332e4;
            case 0x2332E8u: goto label_2332e8;
            case 0x2332ECu: goto label_2332ec;
            case 0x2332F0u: goto label_2332f0;
            case 0x2332F4u: goto label_2332f4;
            case 0x2332F8u: goto label_2332f8;
            case 0x2332FCu: goto label_2332fc;
            case 0x233300u: goto label_233300;
            case 0x233304u: goto label_233304;
            case 0x233308u: goto label_233308;
            case 0x23330Cu: goto label_23330c;
            case 0x233310u: goto label_233310;
            case 0x233314u: goto label_233314;
            case 0x233318u: goto label_233318;
            case 0x23331Cu: goto label_23331c;
            case 0x233320u: goto label_233320;
            case 0x233324u: goto label_233324;
            case 0x233328u: goto label_233328;
            case 0x23332Cu: goto label_23332c;
            case 0x233330u: goto label_233330;
            case 0x233334u: goto label_233334;
            case 0x233338u: goto label_233338;
            case 0x23333Cu: goto label_23333c;
            case 0x233340u: goto label_233340;
            case 0x233344u: goto label_233344;
            case 0x233348u: goto label_233348;
            case 0x23334Cu: goto label_23334c;
            case 0x233350u: goto label_233350;
            case 0x233354u: goto label_233354;
            case 0x233358u: goto label_233358;
            case 0x23335Cu: goto label_23335c;
            case 0x233360u: goto label_233360;
            case 0x233364u: goto label_233364;
            case 0x233368u: goto label_233368;
            case 0x23336Cu: goto label_23336c;
            case 0x233370u: goto label_233370;
            case 0x233374u: goto label_233374;
            case 0x233378u: goto label_233378;
            case 0x23337Cu: goto label_23337c;
            case 0x233380u: goto label_233380;
            case 0x233384u: goto label_233384;
            case 0x233388u: goto label_233388;
            case 0x23338Cu: goto label_23338c;
            case 0x233390u: goto label_233390;
            case 0x233394u: goto label_233394;
            case 0x233398u: goto label_233398;
            case 0x23339Cu: goto label_23339c;
            case 0x2333A0u: goto label_2333a0;
            case 0x2333A4u: goto label_2333a4;
            case 0x2333A8u: goto label_2333a8;
            case 0x2333ACu: goto label_2333ac;
            case 0x2333B0u: goto label_2333b0;
            case 0x2333B4u: goto label_2333b4;
            case 0x2333B8u: goto label_2333b8;
            case 0x2333BCu: goto label_2333bc;
            case 0x2333C0u: goto label_2333c0;
            case 0x2333C4u: goto label_2333c4;
            case 0x2333C8u: goto label_2333c8;
            case 0x2333CCu: goto label_2333cc;
            case 0x2333D0u: goto label_2333d0;
            case 0x2333D4u: goto label_2333d4;
            case 0x2333D8u: goto label_2333d8;
            case 0x2333DCu: goto label_2333dc;
            case 0x2333E0u: goto label_2333e0;
            case 0x2333E4u: goto label_2333e4;
            case 0x2333E8u: goto label_2333e8;
            case 0x2333ECu: goto label_2333ec;
            case 0x2333F0u: goto label_2333f0;
            case 0x2333F4u: goto label_2333f4;
            case 0x2333F8u: goto label_2333f8;
            case 0x2333FCu: goto label_2333fc;
            case 0x233400u: goto label_233400;
            case 0x233404u: goto label_233404;
            case 0x233408u: goto label_233408;
            case 0x23340Cu: goto label_23340c;
            case 0x233410u: goto label_233410;
            case 0x233414u: goto label_233414;
            case 0x233418u: goto label_233418;
            case 0x23341Cu: goto label_23341c;
            case 0x233420u: goto label_233420;
            case 0x233424u: goto label_233424;
            case 0x233428u: goto label_233428;
            case 0x23342Cu: goto label_23342c;
            case 0x233430u: goto label_233430;
            case 0x233434u: goto label_233434;
            case 0x233438u: goto label_233438;
            case 0x23343Cu: goto label_23343c;
            case 0x233440u: goto label_233440;
            case 0x233444u: goto label_233444;
            case 0x233448u: goto label_233448;
            case 0x23344Cu: goto label_23344c;
            case 0x233450u: goto label_233450;
            case 0x233454u: goto label_233454;
            case 0x233458u: goto label_233458;
            case 0x23345Cu: goto label_23345c;
            case 0x233460u: goto label_233460;
            case 0x233464u: goto label_233464;
            case 0x233468u: goto label_233468;
            case 0x23346Cu: goto label_23346c;
            case 0x233470u: goto label_233470;
            case 0x233474u: goto label_233474;
            case 0x233478u: goto label_233478;
            case 0x23347Cu: goto label_23347c;
            case 0x233480u: goto label_233480;
            case 0x233484u: goto label_233484;
            case 0x233488u: goto label_233488;
            case 0x23348Cu: goto label_23348c;
            case 0x233490u: goto label_233490;
            case 0x233494u: goto label_233494;
            case 0x233498u: goto label_233498;
            case 0x23349Cu: goto label_23349c;
            case 0x2334A0u: goto label_2334a0;
            case 0x2334A4u: goto label_2334a4;
            case 0x2334A8u: goto label_2334a8;
            case 0x2334ACu: goto label_2334ac;
            case 0x2334B0u: goto label_2334b0;
            case 0x2334B4u: goto label_2334b4;
            case 0x2334B8u: goto label_2334b8;
            case 0x2334BCu: goto label_2334bc;
            case 0x2334C0u: goto label_2334c0;
            case 0x2334C4u: goto label_2334c4;
            case 0x2334C8u: goto label_2334c8;
            case 0x2334CCu: goto label_2334cc;
            case 0x2334D0u: goto label_2334d0;
            case 0x2334D4u: goto label_2334d4;
            case 0x2334D8u: goto label_2334d8;
            case 0x2334DCu: goto label_2334dc;
            case 0x2334E0u: goto label_2334e0;
            case 0x2334E4u: goto label_2334e4;
            case 0x2334E8u: goto label_2334e8;
            case 0x2334ECu: goto label_2334ec;
            case 0x2334F0u: goto label_2334f0;
            case 0x2334F4u: goto label_2334f4;
            case 0x2334F8u: goto label_2334f8;
            case 0x2334FCu: goto label_2334fc;
            case 0x233500u: goto label_233500;
            case 0x233504u: goto label_233504;
            case 0x233508u: goto label_233508;
            case 0x23350Cu: goto label_23350c;
            case 0x233510u: goto label_233510;
            case 0x233514u: goto label_233514;
            case 0x233518u: goto label_233518;
            case 0x23351Cu: goto label_23351c;
            case 0x233520u: goto label_233520;
            case 0x233524u: goto label_233524;
            case 0x233528u: goto label_233528;
            case 0x23352Cu: goto label_23352c;
            case 0x233530u: goto label_233530;
            case 0x233534u: goto label_233534;
            case 0x233538u: goto label_233538;
            case 0x23353Cu: goto label_23353c;
            case 0x233540u: goto label_233540;
            case 0x233544u: goto label_233544;
            case 0x233548u: goto label_233548;
            case 0x23354Cu: goto label_23354c;
            case 0x233550u: goto label_233550;
            case 0x233554u: goto label_233554;
            case 0x233558u: goto label_233558;
            case 0x23355Cu: goto label_23355c;
            case 0x233560u: goto label_233560;
            case 0x233564u: goto label_233564;
            case 0x233568u: goto label_233568;
            case 0x23356Cu: goto label_23356c;
            case 0x233570u: goto label_233570;
            case 0x233574u: goto label_233574;
            case 0x233578u: goto label_233578;
            case 0x23357Cu: goto label_23357c;
            case 0x233580u: goto label_233580;
            case 0x233584u: goto label_233584;
            case 0x233588u: goto label_233588;
            case 0x23358Cu: goto label_23358c;
            case 0x233590u: goto label_233590;
            case 0x233594u: goto label_233594;
            case 0x233598u: goto label_233598;
            case 0x23359Cu: goto label_23359c;
            case 0x2335A0u: goto label_2335a0;
            case 0x2335A4u: goto label_2335a4;
            case 0x2335A8u: goto label_2335a8;
            case 0x2335ACu: goto label_2335ac;
            case 0x2335B0u: goto label_2335b0;
            case 0x2335B4u: goto label_2335b4;
            case 0x2335B8u: goto label_2335b8;
            case 0x2335BCu: goto label_2335bc;
            case 0x2335C0u: goto label_2335c0;
            case 0x2335C4u: goto label_2335c4;
            case 0x2335C8u: goto label_2335c8;
            case 0x2335CCu: goto label_2335cc;
            case 0x2335D0u: goto label_2335d0;
            case 0x2335D4u: goto label_2335d4;
            case 0x2335D8u: goto label_2335d8;
            case 0x2335DCu: goto label_2335dc;
            case 0x2335E0u: goto label_2335e0;
            case 0x2335E4u: goto label_2335e4;
            case 0x2335E8u: goto label_2335e8;
            case 0x2335ECu: goto label_2335ec;
            case 0x2335F0u: goto label_2335f0;
            case 0x2335F4u: goto label_2335f4;
            case 0x2335F8u: goto label_2335f8;
            case 0x2335FCu: goto label_2335fc;
            case 0x233600u: goto label_233600;
            case 0x233604u: goto label_233604;
            case 0x233608u: goto label_233608;
            case 0x23360Cu: goto label_23360c;
            case 0x233610u: goto label_233610;
            case 0x233614u: goto label_233614;
            case 0x233618u: goto label_233618;
            case 0x23361Cu: goto label_23361c;
            case 0x233620u: goto label_233620;
            case 0x233624u: goto label_233624;
            case 0x233628u: goto label_233628;
            case 0x23362Cu: goto label_23362c;
            case 0x233630u: goto label_233630;
            case 0x233634u: goto label_233634;
            case 0x233638u: goto label_233638;
            case 0x23363Cu: goto label_23363c;
            case 0x233640u: goto label_233640;
            case 0x233644u: goto label_233644;
            case 0x233648u: goto label_233648;
            case 0x23364Cu: goto label_23364c;
            case 0x233650u: goto label_233650;
            case 0x233654u: goto label_233654;
            case 0x233658u: goto label_233658;
            case 0x23365Cu: goto label_23365c;
            case 0x233660u: goto label_233660;
            case 0x233664u: goto label_233664;
            case 0x233668u: goto label_233668;
            case 0x23366Cu: goto label_23366c;
            case 0x233670u: goto label_233670;
            case 0x233674u: goto label_233674;
            case 0x233678u: goto label_233678;
            case 0x23367Cu: goto label_23367c;
            case 0x233680u: goto label_233680;
            case 0x233684u: goto label_233684;
            case 0x233688u: goto label_233688;
            case 0x23368Cu: goto label_23368c;
            case 0x233690u: goto label_233690;
            case 0x233694u: goto label_233694;
            case 0x233698u: goto label_233698;
            case 0x23369Cu: goto label_23369c;
            case 0x2336A0u: goto label_2336a0;
            case 0x2336A4u: goto label_2336a4;
            case 0x2336A8u: goto label_2336a8;
            case 0x2336ACu: goto label_2336ac;
            case 0x2336B0u: goto label_2336b0;
            case 0x2336B4u: goto label_2336b4;
            case 0x2336B8u: goto label_2336b8;
            case 0x2336BCu: goto label_2336bc;
            case 0x2336C0u: goto label_2336c0;
            case 0x2336C4u: goto label_2336c4;
            case 0x2336C8u: goto label_2336c8;
            case 0x2336CCu: goto label_2336cc;
            case 0x2336D0u: goto label_2336d0;
            case 0x2336D4u: goto label_2336d4;
            case 0x2336D8u: goto label_2336d8;
            case 0x2336DCu: goto label_2336dc;
            case 0x2336E0u: goto label_2336e0;
            case 0x2336E4u: goto label_2336e4;
            case 0x2336E8u: goto label_2336e8;
            case 0x2336ECu: goto label_2336ec;
            case 0x2336F0u: goto label_2336f0;
            case 0x2336F4u: goto label_2336f4;
            case 0x2336F8u: goto label_2336f8;
            case 0x2336FCu: goto label_2336fc;
            case 0x233700u: goto label_233700;
            case 0x233704u: goto label_233704;
            case 0x233708u: goto label_233708;
            case 0x23370Cu: goto label_23370c;
            case 0x233710u: goto label_233710;
            case 0x233714u: goto label_233714;
            case 0x233718u: goto label_233718;
            case 0x23371Cu: goto label_23371c;
            case 0x233720u: goto label_233720;
            case 0x233724u: goto label_233724;
            case 0x233728u: goto label_233728;
            case 0x23372Cu: goto label_23372c;
            case 0x233730u: goto label_233730;
            case 0x233734u: goto label_233734;
            case 0x233738u: goto label_233738;
            case 0x23373Cu: goto label_23373c;
            case 0x233740u: goto label_233740;
            case 0x233744u: goto label_233744;
            case 0x233748u: goto label_233748;
            case 0x23374Cu: goto label_23374c;
            case 0x233750u: goto label_233750;
            case 0x233754u: goto label_233754;
            case 0x233758u: goto label_233758;
            case 0x23375Cu: goto label_23375c;
            case 0x233760u: goto label_233760;
            case 0x233764u: goto label_233764;
            case 0x233768u: goto label_233768;
            case 0x23376Cu: goto label_23376c;
            case 0x233770u: goto label_233770;
            case 0x233774u: goto label_233774;
            case 0x233778u: goto label_233778;
            case 0x23377Cu: goto label_23377c;
            case 0x233780u: goto label_233780;
            case 0x233784u: goto label_233784;
            case 0x233788u: goto label_233788;
            case 0x23378Cu: goto label_23378c;
            case 0x233790u: goto label_233790;
            case 0x233794u: goto label_233794;
            case 0x233798u: goto label_233798;
            case 0x23379Cu: goto label_23379c;
            case 0x2337A0u: goto label_2337a0;
            case 0x2337A4u: goto label_2337a4;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337ACu: goto label_2337ac;
            case 0x2337B0u: goto label_2337b0;
            case 0x2337B4u: goto label_2337b4;
            case 0x2337B8u: goto label_2337b8;
            case 0x2337BCu: goto label_2337bc;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337C4u: goto label_2337c4;
            case 0x2337C8u: goto label_2337c8;
            case 0x2337CCu: goto label_2337cc;
            case 0x2337D0u: goto label_2337d0;
            case 0x2337D4u: goto label_2337d4;
            case 0x2337D8u: goto label_2337d8;
            case 0x2337DCu: goto label_2337dc;
            case 0x2337E0u: goto label_2337e0;
            case 0x2337E4u: goto label_2337e4;
            case 0x2337E8u: goto label_2337e8;
            case 0x2337ECu: goto label_2337ec;
            case 0x2337F0u: goto label_2337f0;
            case 0x2337F4u: goto label_2337f4;
            case 0x2337F8u: goto label_2337f8;
            case 0x2337FCu: goto label_2337fc;
            case 0x233800u: goto label_233800;
            case 0x233804u: goto label_233804;
            case 0x233808u: goto label_233808;
            case 0x23380Cu: goto label_23380c;
            case 0x233810u: goto label_233810;
            case 0x233814u: goto label_233814;
            case 0x233818u: goto label_233818;
            case 0x23381Cu: goto label_23381c;
            case 0x233820u: goto label_233820;
            case 0x233824u: goto label_233824;
            case 0x233828u: goto label_233828;
            case 0x23382Cu: goto label_23382c;
            case 0x233830u: goto label_233830;
            case 0x233834u: goto label_233834;
            case 0x233838u: goto label_233838;
            case 0x23383Cu: goto label_23383c;
            case 0x233840u: goto label_233840;
            case 0x233844u: goto label_233844;
            case 0x233848u: goto label_233848;
            case 0x23384Cu: goto label_23384c;
            case 0x233850u: goto label_233850;
            case 0x233854u: goto label_233854;
            case 0x233858u: goto label_233858;
            case 0x23385Cu: goto label_23385c;
            case 0x233860u: goto label_233860;
            case 0x233864u: goto label_233864;
            case 0x233868u: goto label_233868;
            case 0x23386Cu: goto label_23386c;
            case 0x233870u: goto label_233870;
            case 0x233874u: goto label_233874;
            case 0x233878u: goto label_233878;
            case 0x23387Cu: goto label_23387c;
            case 0x233880u: goto label_233880;
            case 0x233884u: goto label_233884;
            case 0x233888u: goto label_233888;
            case 0x23388Cu: goto label_23388c;
            case 0x233890u: goto label_233890;
            case 0x233894u: goto label_233894;
            case 0x233898u: goto label_233898;
            case 0x23389Cu: goto label_23389c;
            case 0x2338A0u: goto label_2338a0;
            case 0x2338A4u: goto label_2338a4;
            case 0x2338A8u: goto label_2338a8;
            case 0x2338ACu: goto label_2338ac;
            case 0x2338B0u: goto label_2338b0;
            case 0x2338B4u: goto label_2338b4;
            case 0x2338B8u: goto label_2338b8;
            case 0x2338BCu: goto label_2338bc;
            case 0x2338C0u: goto label_2338c0;
            case 0x2338C4u: goto label_2338c4;
            case 0x2338C8u: goto label_2338c8;
            case 0x2338CCu: goto label_2338cc;
            case 0x2338D0u: goto label_2338d0;
            case 0x2338D4u: goto label_2338d4;
            case 0x2338D8u: goto label_2338d8;
            case 0x2338DCu: goto label_2338dc;
            case 0x2338E0u: goto label_2338e0;
            case 0x2338E4u: goto label_2338e4;
            case 0x2338E8u: goto label_2338e8;
            case 0x2338ECu: goto label_2338ec;
            case 0x2338F0u: goto label_2338f0;
            case 0x2338F4u: goto label_2338f4;
            case 0x2338F8u: goto label_2338f8;
            case 0x2338FCu: goto label_2338fc;
            case 0x233900u: goto label_233900;
            case 0x233904u: goto label_233904;
            case 0x233908u: goto label_233908;
            case 0x23390Cu: goto label_23390c;
            case 0x233910u: goto label_233910;
            case 0x233914u: goto label_233914;
            case 0x233918u: goto label_233918;
            case 0x23391Cu: goto label_23391c;
            case 0x233920u: goto label_233920;
            case 0x233924u: goto label_233924;
            case 0x233928u: goto label_233928;
            case 0x23392Cu: goto label_23392c;
            case 0x233930u: goto label_233930;
            case 0x233934u: goto label_233934;
            case 0x233938u: goto label_233938;
            case 0x23393Cu: goto label_23393c;
            case 0x233940u: goto label_233940;
            case 0x233944u: goto label_233944;
            case 0x233948u: goto label_233948;
            case 0x23394Cu: goto label_23394c;
            case 0x233950u: goto label_233950;
            case 0x233954u: goto label_233954;
            case 0x233958u: goto label_233958;
            case 0x23395Cu: goto label_23395c;
            case 0x233960u: goto label_233960;
            case 0x233964u: goto label_233964;
            case 0x233968u: goto label_233968;
            case 0x23396Cu: goto label_23396c;
            case 0x233970u: goto label_233970;
            case 0x233974u: goto label_233974;
            case 0x233978u: goto label_233978;
            case 0x23397Cu: goto label_23397c;
            case 0x233980u: goto label_233980;
            case 0x233984u: goto label_233984;
            case 0x233988u: goto label_233988;
            case 0x23398Cu: goto label_23398c;
            case 0x233990u: goto label_233990;
            case 0x233994u: goto label_233994;
            case 0x233998u: goto label_233998;
            case 0x23399Cu: goto label_23399c;
            case 0x2339A0u: goto label_2339a0;
            case 0x2339A4u: goto label_2339a4;
            case 0x2339A8u: goto label_2339a8;
            case 0x2339ACu: goto label_2339ac;
            case 0x2339B0u: goto label_2339b0;
            case 0x2339B4u: goto label_2339b4;
            case 0x2339B8u: goto label_2339b8;
            case 0x2339BCu: goto label_2339bc;
            case 0x2339C0u: goto label_2339c0;
            case 0x2339C4u: goto label_2339c4;
            case 0x2339C8u: goto label_2339c8;
            case 0x2339CCu: goto label_2339cc;
            case 0x2339D0u: goto label_2339d0;
            case 0x2339D4u: goto label_2339d4;
            case 0x2339D8u: goto label_2339d8;
            case 0x2339DCu: goto label_2339dc;
            case 0x2339E0u: goto label_2339e0;
            case 0x2339E4u: goto label_2339e4;
            case 0x2339E8u: goto label_2339e8;
            case 0x2339ECu: goto label_2339ec;
            case 0x2339F0u: goto label_2339f0;
            case 0x2339F4u: goto label_2339f4;
            case 0x2339F8u: goto label_2339f8;
            case 0x2339FCu: goto label_2339fc;
            case 0x233A00u: goto label_233a00;
            case 0x233A04u: goto label_233a04;
            case 0x233A08u: goto label_233a08;
            case 0x233A0Cu: goto label_233a0c;
            case 0x233A10u: goto label_233a10;
            case 0x233A14u: goto label_233a14;
            case 0x233A18u: goto label_233a18;
            case 0x233A1Cu: goto label_233a1c;
            case 0x233A20u: goto label_233a20;
            case 0x233A24u: goto label_233a24;
            case 0x233A28u: goto label_233a28;
            case 0x233A2Cu: goto label_233a2c;
            case 0x233A30u: goto label_233a30;
            case 0x233A34u: goto label_233a34;
            case 0x233A38u: goto label_233a38;
            case 0x233A3Cu: goto label_233a3c;
            case 0x233A40u: goto label_233a40;
            case 0x233A44u: goto label_233a44;
            case 0x233A48u: goto label_233a48;
            case 0x233A4Cu: goto label_233a4c;
            case 0x233A50u: goto label_233a50;
            case 0x233A54u: goto label_233a54;
            case 0x233A58u: goto label_233a58;
            case 0x233A5Cu: goto label_233a5c;
            case 0x233A60u: goto label_233a60;
            case 0x233A64u: goto label_233a64;
            case 0x233A68u: goto label_233a68;
            case 0x233A6Cu: goto label_233a6c;
            case 0x233A70u: goto label_233a70;
            case 0x233A74u: goto label_233a74;
            case 0x233A78u: goto label_233a78;
            case 0x233A7Cu: goto label_233a7c;
            case 0x233A80u: goto label_233a80;
            case 0x233A84u: goto label_233a84;
            case 0x233A88u: goto label_233a88;
            case 0x233A8Cu: goto label_233a8c;
            case 0x233A90u: goto label_233a90;
            case 0x233A94u: goto label_233a94;
            case 0x233A98u: goto label_233a98;
            case 0x233A9Cu: goto label_233a9c;
            case 0x233AA0u: goto label_233aa0;
            case 0x233AA4u: goto label_233aa4;
            case 0x233AA8u: goto label_233aa8;
            case 0x233AACu: goto label_233aac;
            case 0x233AB0u: goto label_233ab0;
            case 0x233AB4u: goto label_233ab4;
            case 0x233AB8u: goto label_233ab8;
            case 0x233ABCu: goto label_233abc;
            case 0x233AC0u: goto label_233ac0;
            case 0x233AC4u: goto label_233ac4;
            case 0x233AC8u: goto label_233ac8;
            case 0x233ACCu: goto label_233acc;
            case 0x233AD0u: goto label_233ad0;
            case 0x233AD4u: goto label_233ad4;
            case 0x233AD8u: goto label_233ad8;
            case 0x233ADCu: goto label_233adc;
            case 0x233AE0u: goto label_233ae0;
            case 0x233AE4u: goto label_233ae4;
            case 0x233AE8u: goto label_233ae8;
            case 0x233AECu: goto label_233aec;
            case 0x233AF0u: goto label_233af0;
            case 0x233AF4u: goto label_233af4;
            case 0x233AF8u: goto label_233af8;
            case 0x233AFCu: goto label_233afc;
            case 0x233B00u: goto label_233b00;
            case 0x233B04u: goto label_233b04;
            case 0x233B08u: goto label_233b08;
            case 0x233B0Cu: goto label_233b0c;
            case 0x233B10u: goto label_233b10;
            case 0x233B14u: goto label_233b14;
            case 0x233B18u: goto label_233b18;
            case 0x233B1Cu: goto label_233b1c;
            case 0x233B20u: goto label_233b20;
            case 0x233B24u: goto label_233b24;
            case 0x233B28u: goto label_233b28;
            case 0x233B2Cu: goto label_233b2c;
            case 0x233B30u: goto label_233b30;
            case 0x233B34u: goto label_233b34;
            case 0x233B38u: goto label_233b38;
            case 0x233B3Cu: goto label_233b3c;
            case 0x233B40u: goto label_233b40;
            case 0x233B44u: goto label_233b44;
            case 0x233B48u: goto label_233b48;
            case 0x233B4Cu: goto label_233b4c;
            case 0x233B50u: goto label_233b50;
            case 0x233B54u: goto label_233b54;
            case 0x233B58u: goto label_233b58;
            case 0x233B5Cu: goto label_233b5c;
            case 0x233B60u: goto label_233b60;
            case 0x233B64u: goto label_233b64;
            case 0x233B68u: goto label_233b68;
            case 0x233B6Cu: goto label_233b6c;
            case 0x233B70u: goto label_233b70;
            case 0x233B74u: goto label_233b74;
            case 0x233B78u: goto label_233b78;
            case 0x233B7Cu: goto label_233b7c;
            case 0x233B80u: goto label_233b80;
            case 0x233B84u: goto label_233b84;
            case 0x233B88u: goto label_233b88;
            case 0x233B8Cu: goto label_233b8c;
            case 0x233B90u: goto label_233b90;
            case 0x233B94u: goto label_233b94;
            case 0x233B98u: goto label_233b98;
            case 0x233B9Cu: goto label_233b9c;
            case 0x233BA0u: goto label_233ba0;
            case 0x233BA4u: goto label_233ba4;
            case 0x233BA8u: goto label_233ba8;
            case 0x233BACu: goto label_233bac;
            case 0x233BB0u: goto label_233bb0;
            case 0x233BB4u: goto label_233bb4;
            case 0x233BB8u: goto label_233bb8;
            case 0x233BBCu: goto label_233bbc;
            case 0x233BC0u: goto label_233bc0;
            case 0x233BC4u: goto label_233bc4;
            case 0x233BC8u: goto label_233bc8;
            case 0x233BCCu: goto label_233bcc;
            case 0x233BD0u: goto label_233bd0;
            case 0x233BD4u: goto label_233bd4;
            case 0x233BD8u: goto label_233bd8;
            case 0x233BDCu: goto label_233bdc;
            case 0x233BE0u: goto label_233be0;
            case 0x233BE4u: goto label_233be4;
            case 0x233BE8u: goto label_233be8;
            case 0x233BECu: goto label_233bec;
            case 0x233BF0u: goto label_233bf0;
            case 0x233BF4u: goto label_233bf4;
            case 0x233BF8u: goto label_233bf8;
            case 0x233BFCu: goto label_233bfc;
            case 0x233C00u: goto label_233c00;
            case 0x233C04u: goto label_233c04;
            case 0x233C08u: goto label_233c08;
            case 0x233C0Cu: goto label_233c0c;
            case 0x233C10u: goto label_233c10;
            case 0x233C14u: goto label_233c14;
            case 0x233C18u: goto label_233c18;
            case 0x233C1Cu: goto label_233c1c;
            case 0x233C20u: goto label_233c20;
            case 0x233C24u: goto label_233c24;
            case 0x233C28u: goto label_233c28;
            case 0x233C2Cu: goto label_233c2c;
            case 0x233C30u: goto label_233c30;
            case 0x233C34u: goto label_233c34;
            case 0x233C38u: goto label_233c38;
            case 0x233C3Cu: goto label_233c3c;
            case 0x233C40u: goto label_233c40;
            case 0x233C44u: goto label_233c44;
            case 0x233C48u: goto label_233c48;
            case 0x233C4Cu: goto label_233c4c;
            case 0x233C50u: goto label_233c50;
            case 0x233C54u: goto label_233c54;
            case 0x233C58u: goto label_233c58;
            case 0x233C5Cu: goto label_233c5c;
            case 0x233C60u: goto label_233c60;
            case 0x233C64u: goto label_233c64;
            case 0x233C68u: goto label_233c68;
            case 0x233C6Cu: goto label_233c6c;
            case 0x233C70u: goto label_233c70;
            case 0x233C74u: goto label_233c74;
            case 0x233C78u: goto label_233c78;
            case 0x233C7Cu: goto label_233c7c;
            case 0x233C80u: goto label_233c80;
            case 0x233C84u: goto label_233c84;
            case 0x233C88u: goto label_233c88;
            case 0x233C8Cu: goto label_233c8c;
            case 0x233C90u: goto label_233c90;
            case 0x233C94u: goto label_233c94;
            case 0x233C98u: goto label_233c98;
            case 0x233C9Cu: goto label_233c9c;
            case 0x233CA0u: goto label_233ca0;
            case 0x233CA4u: goto label_233ca4;
            case 0x233CA8u: goto label_233ca8;
            case 0x233CACu: goto label_233cac;
            case 0x233CB0u: goto label_233cb0;
            case 0x233CB4u: goto label_233cb4;
            case 0x233CB8u: goto label_233cb8;
            case 0x233CBCu: goto label_233cbc;
            case 0x233CC0u: goto label_233cc0;
            case 0x233CC4u: goto label_233cc4;
            case 0x233CC8u: goto label_233cc8;
            case 0x233CCCu: goto label_233ccc;
            case 0x233CD0u: goto label_233cd0;
            case 0x233CD4u: goto label_233cd4;
            case 0x233CD8u: goto label_233cd8;
            case 0x233CDCu: goto label_233cdc;
            case 0x233CE0u: goto label_233ce0;
            case 0x233CE4u: goto label_233ce4;
            case 0x233CE8u: goto label_233ce8;
            case 0x233CECu: goto label_233cec;
            case 0x233CF0u: goto label_233cf0;
            case 0x233CF4u: goto label_233cf4;
            case 0x233CF8u: goto label_233cf8;
            case 0x233CFCu: goto label_233cfc;
            case 0x233D00u: goto label_233d00;
            case 0x233D04u: goto label_233d04;
            case 0x233D08u: goto label_233d08;
            case 0x233D0Cu: goto label_233d0c;
            case 0x233D10u: goto label_233d10;
            case 0x233D14u: goto label_233d14;
            case 0x233D18u: goto label_233d18;
            case 0x233D1Cu: goto label_233d1c;
            case 0x233D20u: goto label_233d20;
            case 0x233D24u: goto label_233d24;
            case 0x233D28u: goto label_233d28;
            case 0x233D2Cu: goto label_233d2c;
            case 0x233D30u: goto label_233d30;
            case 0x233D34u: goto label_233d34;
            case 0x233D38u: goto label_233d38;
            case 0x233D3Cu: goto label_233d3c;
            case 0x233D40u: goto label_233d40;
            case 0x233D44u: goto label_233d44;
            case 0x233D48u: goto label_233d48;
            case 0x233D4Cu: goto label_233d4c;
            case 0x233D50u: goto label_233d50;
            case 0x233D54u: goto label_233d54;
            case 0x233D58u: goto label_233d58;
            case 0x233D5Cu: goto label_233d5c;
            case 0x233D60u: goto label_233d60;
            case 0x233D64u: goto label_233d64;
            case 0x233D68u: goto label_233d68;
            case 0x233D6Cu: goto label_233d6c;
            case 0x233D70u: goto label_233d70;
            case 0x233D74u: goto label_233d74;
            case 0x233D78u: goto label_233d78;
            case 0x233D7Cu: goto label_233d7c;
            case 0x233D80u: goto label_233d80;
            case 0x233D84u: goto label_233d84;
            case 0x233D88u: goto label_233d88;
            case 0x233D8Cu: goto label_233d8c;
            case 0x233D90u: goto label_233d90;
            case 0x233D94u: goto label_233d94;
            case 0x233D98u: goto label_233d98;
            case 0x233D9Cu: goto label_233d9c;
            case 0x233DA0u: goto label_233da0;
            case 0x233DA4u: goto label_233da4;
            case 0x233DA8u: goto label_233da8;
            case 0x233DACu: goto label_233dac;
            case 0x233DB0u: goto label_233db0;
            case 0x233DB4u: goto label_233db4;
            case 0x233DB8u: goto label_233db8;
            case 0x233DBCu: goto label_233dbc;
            case 0x233DC0u: goto label_233dc0;
            case 0x233DC4u: goto label_233dc4;
            case 0x233DC8u: goto label_233dc8;
            case 0x233DCCu: goto label_233dcc;
            case 0x233DD0u: goto label_233dd0;
            case 0x233DD4u: goto label_233dd4;
            case 0x233DD8u: goto label_233dd8;
            case 0x233DDCu: goto label_233ddc;
            case 0x233DE0u: goto label_233de0;
            case 0x233DE4u: goto label_233de4;
            case 0x233DE8u: goto label_233de8;
            case 0x233DECu: goto label_233dec;
            case 0x233DF0u: goto label_233df0;
            case 0x233DF4u: goto label_233df4;
            case 0x233DF8u: goto label_233df8;
            case 0x233DFCu: goto label_233dfc;
            case 0x233E00u: goto label_233e00;
            case 0x233E04u: goto label_233e04;
            case 0x233E08u: goto label_233e08;
            case 0x233E0Cu: goto label_233e0c;
            case 0x233E10u: goto label_233e10;
            case 0x233E14u: goto label_233e14;
            case 0x233E18u: goto label_233e18;
            case 0x233E1Cu: goto label_233e1c;
            case 0x233E20u: goto label_233e20;
            case 0x233E24u: goto label_233e24;
            case 0x233E28u: goto label_233e28;
            case 0x233E2Cu: goto label_233e2c;
            case 0x233E30u: goto label_233e30;
            case 0x233E34u: goto label_233e34;
            case 0x233E38u: goto label_233e38;
            case 0x233E3Cu: goto label_233e3c;
            case 0x233E40u: goto label_233e40;
            case 0x233E44u: goto label_233e44;
            case 0x233E48u: goto label_233e48;
            case 0x233E4Cu: goto label_233e4c;
            case 0x233E50u: goto label_233e50;
            case 0x233E54u: goto label_233e54;
            case 0x233E58u: goto label_233e58;
            case 0x233E5Cu: goto label_233e5c;
            case 0x233E60u: goto label_233e60;
            case 0x233E64u: goto label_233e64;
            case 0x233E68u: goto label_233e68;
            case 0x233E6Cu: goto label_233e6c;
            case 0x233E70u: goto label_233e70;
            case 0x233E74u: goto label_233e74;
            case 0x233E78u: goto label_233e78;
            case 0x233E7Cu: goto label_233e7c;
            case 0x233E80u: goto label_233e80;
            case 0x233E84u: goto label_233e84;
            case 0x233E88u: goto label_233e88;
            case 0x233E8Cu: goto label_233e8c;
            case 0x233E90u: goto label_233e90;
            case 0x233E94u: goto label_233e94;
            case 0x233E98u: goto label_233e98;
            case 0x233E9Cu: goto label_233e9c;
            case 0x233EA0u: goto label_233ea0;
            case 0x233EA4u: goto label_233ea4;
            case 0x233EA8u: goto label_233ea8;
            case 0x233EACu: goto label_233eac;
            case 0x233EB0u: goto label_233eb0;
            case 0x233EB4u: goto label_233eb4;
            case 0x233EB8u: goto label_233eb8;
            case 0x233EBCu: goto label_233ebc;
            case 0x233EC0u: goto label_233ec0;
            case 0x233EC4u: goto label_233ec4;
            case 0x233EC8u: goto label_233ec8;
            case 0x233ECCu: goto label_233ecc;
            case 0x233ED0u: goto label_233ed0;
            case 0x233ED4u: goto label_233ed4;
            case 0x233ED8u: goto label_233ed8;
            case 0x233EDCu: goto label_233edc;
            case 0x233EE0u: goto label_233ee0;
            case 0x233EE4u: goto label_233ee4;
            case 0x233EE8u: goto label_233ee8;
            case 0x233EECu: goto label_233eec;
            case 0x233EF0u: goto label_233ef0;
            case 0x233EF4u: goto label_233ef4;
            case 0x233EF8u: goto label_233ef8;
            case 0x233EFCu: goto label_233efc;
            case 0x233F00u: goto label_233f00;
            case 0x233F04u: goto label_233f04;
            case 0x233F08u: goto label_233f08;
            case 0x233F0Cu: goto label_233f0c;
            case 0x233F10u: goto label_233f10;
            case 0x233F14u: goto label_233f14;
            case 0x233F18u: goto label_233f18;
            case 0x233F1Cu: goto label_233f1c;
            case 0x233F20u: goto label_233f20;
            case 0x233F24u: goto label_233f24;
            case 0x233F28u: goto label_233f28;
            case 0x233F2Cu: goto label_233f2c;
            case 0x233F30u: goto label_233f30;
            case 0x233F34u: goto label_233f34;
            case 0x233F38u: goto label_233f38;
            case 0x233F3Cu: goto label_233f3c;
            case 0x233F40u: goto label_233f40;
            case 0x233F44u: goto label_233f44;
            case 0x233F48u: goto label_233f48;
            case 0x233F4Cu: goto label_233f4c;
            case 0x233F50u: goto label_233f50;
            case 0x233F54u: goto label_233f54;
            case 0x233F58u: goto label_233f58;
            case 0x233F5Cu: goto label_233f5c;
            case 0x233F60u: goto label_233f60;
            case 0x233F64u: goto label_233f64;
            case 0x233F68u: goto label_233f68;
            case 0x233F6Cu: goto label_233f6c;
            case 0x233F70u: goto label_233f70;
            case 0x233F74u: goto label_233f74;
            case 0x233F78u: goto label_233f78;
            case 0x233F7Cu: goto label_233f7c;
            case 0x233F80u: goto label_233f80;
            case 0x233F84u: goto label_233f84;
            case 0x233F88u: goto label_233f88;
            case 0x233F8Cu: goto label_233f8c;
            case 0x233F90u: goto label_233f90;
            case 0x233F94u: goto label_233f94;
            case 0x233F98u: goto label_233f98;
            case 0x233F9Cu: goto label_233f9c;
            case 0x233FA0u: goto label_233fa0;
            case 0x233FA4u: goto label_233fa4;
            case 0x233FA8u: goto label_233fa8;
            case 0x233FACu: goto label_233fac;
            case 0x233FB0u: goto label_233fb0;
            case 0x233FB4u: goto label_233fb4;
            case 0x233FB8u: goto label_233fb8;
            case 0x233FBCu: goto label_233fbc;
            case 0x233FC0u: goto label_233fc0;
            case 0x233FC4u: goto label_233fc4;
            case 0x233FC8u: goto label_233fc8;
            case 0x233FCCu: goto label_233fcc;
            case 0x233FD0u: goto label_233fd0;
            case 0x233FD4u: goto label_233fd4;
            case 0x233FD8u: goto label_233fd8;
            case 0x233FDCu: goto label_233fdc;
            case 0x233FE0u: goto label_233fe0;
            case 0x233FE4u: goto label_233fe4;
            case 0x233FE8u: goto label_233fe8;
            case 0x233FECu: goto label_233fec;
            case 0x233FF0u: goto label_233ff0;
            case 0x233FF4u: goto label_233ff4;
            case 0x233FF8u: goto label_233ff8;
            case 0x233FFCu: goto label_233ffc;
            case 0x234000u: goto label_234000;
            case 0x234004u: goto label_234004;
            case 0x234008u: goto label_234008;
            case 0x23400Cu: goto label_23400c;
            case 0x234010u: goto label_234010;
            case 0x234014u: goto label_234014;
            case 0x234018u: goto label_234018;
            case 0x23401Cu: goto label_23401c;
            case 0x234020u: goto label_234020;
            case 0x234024u: goto label_234024;
            case 0x234028u: goto label_234028;
            case 0x23402Cu: goto label_23402c;
            case 0x234030u: goto label_234030;
            case 0x234034u: goto label_234034;
            case 0x234038u: goto label_234038;
            case 0x23403Cu: goto label_23403c;
            case 0x234040u: goto label_234040;
            case 0x234044u: goto label_234044;
            case 0x234048u: goto label_234048;
            case 0x23404Cu: goto label_23404c;
            case 0x234050u: goto label_234050;
            case 0x234054u: goto label_234054;
            case 0x234058u: goto label_234058;
            case 0x23405Cu: goto label_23405c;
            case 0x234060u: goto label_234060;
            case 0x234064u: goto label_234064;
            case 0x234068u: goto label_234068;
            case 0x23406Cu: goto label_23406c;
            case 0x234070u: goto label_234070;
            case 0x234074u: goto label_234074;
            case 0x234078u: goto label_234078;
            case 0x23407Cu: goto label_23407c;
            case 0x234080u: goto label_234080;
            case 0x234084u: goto label_234084;
            case 0x234088u: goto label_234088;
            case 0x23408Cu: goto label_23408c;
            case 0x234090u: goto label_234090;
            case 0x234094u: goto label_234094;
            case 0x234098u: goto label_234098;
            case 0x23409Cu: goto label_23409c;
            case 0x2340A0u: goto label_2340a0;
            case 0x2340A4u: goto label_2340a4;
            case 0x2340A8u: goto label_2340a8;
            case 0x2340ACu: goto label_2340ac;
            case 0x2340B0u: goto label_2340b0;
            case 0x2340B4u: goto label_2340b4;
            case 0x2340B8u: goto label_2340b8;
            case 0x2340BCu: goto label_2340bc;
            case 0x2340C0u: goto label_2340c0;
            case 0x2340C4u: goto label_2340c4;
            case 0x2340C8u: goto label_2340c8;
            case 0x2340CCu: goto label_2340cc;
            case 0x2340D0u: goto label_2340d0;
            case 0x2340D4u: goto label_2340d4;
            case 0x2340D8u: goto label_2340d8;
            case 0x2340DCu: goto label_2340dc;
            case 0x2340E0u: goto label_2340e0;
            case 0x2340E4u: goto label_2340e4;
            case 0x2340E8u: goto label_2340e8;
            case 0x2340ECu: goto label_2340ec;
            case 0x2340F0u: goto label_2340f0;
            case 0x2340F4u: goto label_2340f4;
            case 0x2340F8u: goto label_2340f8;
            case 0x2340FCu: goto label_2340fc;
            case 0x234100u: goto label_234100;
            case 0x234104u: goto label_234104;
            case 0x234108u: goto label_234108;
            case 0x23410Cu: goto label_23410c;
            case 0x234110u: goto label_234110;
            case 0x234114u: goto label_234114;
            case 0x234118u: goto label_234118;
            case 0x23411Cu: goto label_23411c;
            case 0x234120u: goto label_234120;
            case 0x234124u: goto label_234124;
            case 0x234128u: goto label_234128;
            case 0x23412Cu: goto label_23412c;
            case 0x234130u: goto label_234130;
            case 0x234134u: goto label_234134;
            case 0x234138u: goto label_234138;
            case 0x23413Cu: goto label_23413c;
            case 0x234140u: goto label_234140;
            case 0x234144u: goto label_234144;
            case 0x234148u: goto label_234148;
            case 0x23414Cu: goto label_23414c;
            case 0x234150u: goto label_234150;
            case 0x234154u: goto label_234154;
            case 0x234158u: goto label_234158;
            case 0x23415Cu: goto label_23415c;
            case 0x234160u: goto label_234160;
            case 0x234164u: goto label_234164;
            case 0x234168u: goto label_234168;
            case 0x23416Cu: goto label_23416c;
            case 0x234170u: goto label_234170;
            case 0x234174u: goto label_234174;
            case 0x234178u: goto label_234178;
            case 0x23417Cu: goto label_23417c;
            case 0x234180u: goto label_234180;
            case 0x234184u: goto label_234184;
            case 0x234188u: goto label_234188;
            case 0x23418Cu: goto label_23418c;
            case 0x234190u: goto label_234190;
            case 0x234194u: goto label_234194;
            case 0x234198u: goto label_234198;
            case 0x23419Cu: goto label_23419c;
            case 0x2341A0u: goto label_2341a0;
            case 0x2341A4u: goto label_2341a4;
            case 0x2341A8u: goto label_2341a8;
            case 0x2341ACu: goto label_2341ac;
            case 0x2341B0u: goto label_2341b0;
            case 0x2341B4u: goto label_2341b4;
            case 0x2341B8u: goto label_2341b8;
            case 0x2341BCu: goto label_2341bc;
            case 0x2341C0u: goto label_2341c0;
            case 0x2341C4u: goto label_2341c4;
            case 0x2341C8u: goto label_2341c8;
            case 0x2341CCu: goto label_2341cc;
            case 0x2341D0u: goto label_2341d0;
            case 0x2341D4u: goto label_2341d4;
            case 0x2341D8u: goto label_2341d8;
            case 0x2341DCu: goto label_2341dc;
            case 0x2341E0u: goto label_2341e0;
            case 0x2341E4u: goto label_2341e4;
            case 0x2341E8u: goto label_2341e8;
            case 0x2341ECu: goto label_2341ec;
            case 0x2341F0u: goto label_2341f0;
            case 0x2341F4u: goto label_2341f4;
            case 0x2341F8u: goto label_2341f8;
            case 0x2341FCu: goto label_2341fc;
            case 0x234200u: goto label_234200;
            case 0x234204u: goto label_234204;
            case 0x234208u: goto label_234208;
            case 0x23420Cu: goto label_23420c;
            case 0x234210u: goto label_234210;
            case 0x234214u: goto label_234214;
            case 0x234218u: goto label_234218;
            case 0x23421Cu: goto label_23421c;
            case 0x234220u: goto label_234220;
            case 0x234224u: goto label_234224;
            case 0x234228u: goto label_234228;
            case 0x23422Cu: goto label_23422c;
            case 0x234230u: goto label_234230;
            case 0x234234u: goto label_234234;
            case 0x234238u: goto label_234238;
            case 0x23423Cu: goto label_23423c;
            case 0x234240u: goto label_234240;
            case 0x234244u: goto label_234244;
            case 0x234248u: goto label_234248;
            case 0x23424Cu: goto label_23424c;
            case 0x234250u: goto label_234250;
            case 0x234254u: goto label_234254;
            case 0x234258u: goto label_234258;
            case 0x23425Cu: goto label_23425c;
            case 0x234260u: goto label_234260;
            case 0x234264u: goto label_234264;
            case 0x234268u: goto label_234268;
            case 0x23426Cu: goto label_23426c;
            case 0x234270u: goto label_234270;
            case 0x234274u: goto label_234274;
            case 0x234278u: goto label_234278;
            case 0x23427Cu: goto label_23427c;
            case 0x234280u: goto label_234280;
            case 0x234284u: goto label_234284;
            case 0x234288u: goto label_234288;
            case 0x23428Cu: goto label_23428c;
            case 0x234290u: goto label_234290;
            case 0x234294u: goto label_234294;
            case 0x234298u: goto label_234298;
            case 0x23429Cu: goto label_23429c;
            case 0x2342A0u: goto label_2342a0;
            case 0x2342A4u: goto label_2342a4;
            case 0x2342A8u: goto label_2342a8;
            case 0x2342ACu: goto label_2342ac;
            case 0x2342B0u: goto label_2342b0;
            case 0x2342B4u: goto label_2342b4;
            case 0x2342B8u: goto label_2342b8;
            case 0x2342BCu: goto label_2342bc;
            case 0x2342C0u: goto label_2342c0;
            case 0x2342C4u: goto label_2342c4;
            case 0x2342C8u: goto label_2342c8;
            case 0x2342CCu: goto label_2342cc;
            case 0x2342D0u: goto label_2342d0;
            case 0x2342D4u: goto label_2342d4;
            case 0x2342D8u: goto label_2342d8;
            case 0x2342DCu: goto label_2342dc;
            case 0x2342E0u: goto label_2342e0;
            case 0x2342E4u: goto label_2342e4;
            case 0x2342E8u: goto label_2342e8;
            case 0x2342ECu: goto label_2342ec;
            case 0x2342F0u: goto label_2342f0;
            case 0x2342F4u: goto label_2342f4;
            case 0x2342F8u: goto label_2342f8;
            case 0x2342FCu: goto label_2342fc;
            case 0x234300u: goto label_234300;
            case 0x234304u: goto label_234304;
            case 0x234308u: goto label_234308;
            case 0x23430Cu: goto label_23430c;
            case 0x234310u: goto label_234310;
            case 0x234314u: goto label_234314;
            case 0x234318u: goto label_234318;
            case 0x23431Cu: goto label_23431c;
            case 0x234320u: goto label_234320;
            case 0x234324u: goto label_234324;
            case 0x234328u: goto label_234328;
            case 0x23432Cu: goto label_23432c;
            case 0x234330u: goto label_234330;
            case 0x234334u: goto label_234334;
            case 0x234338u: goto label_234338;
            case 0x23433Cu: goto label_23433c;
            case 0x234340u: goto label_234340;
            case 0x234344u: goto label_234344;
            case 0x234348u: goto label_234348;
            case 0x23434Cu: goto label_23434c;
            case 0x234350u: goto label_234350;
            case 0x234354u: goto label_234354;
            case 0x234358u: goto label_234358;
            case 0x23435Cu: goto label_23435c;
            case 0x234360u: goto label_234360;
            case 0x234364u: goto label_234364;
            case 0x234368u: goto label_234368;
            case 0x23436Cu: goto label_23436c;
            case 0x234370u: goto label_234370;
            case 0x234374u: goto label_234374;
            case 0x234378u: goto label_234378;
            case 0x23437Cu: goto label_23437c;
            case 0x234380u: goto label_234380;
            case 0x234384u: goto label_234384;
            case 0x234388u: goto label_234388;
            case 0x23438Cu: goto label_23438c;
            case 0x234390u: goto label_234390;
            case 0x234394u: goto label_234394;
            case 0x234398u: goto label_234398;
            case 0x23439Cu: goto label_23439c;
            case 0x2343A0u: goto label_2343a0;
            case 0x2343A4u: goto label_2343a4;
            case 0x2343A8u: goto label_2343a8;
            case 0x2343ACu: goto label_2343ac;
            case 0x2343B0u: goto label_2343b0;
            case 0x2343B4u: goto label_2343b4;
            case 0x2343B8u: goto label_2343b8;
            case 0x2343BCu: goto label_2343bc;
            case 0x2343C0u: goto label_2343c0;
            case 0x2343C4u: goto label_2343c4;
            case 0x2343C8u: goto label_2343c8;
            case 0x2343CCu: goto label_2343cc;
            case 0x2343D0u: goto label_2343d0;
            case 0x2343D4u: goto label_2343d4;
            case 0x2343D8u: goto label_2343d8;
            case 0x2343DCu: goto label_2343dc;
            case 0x2343E0u: goto label_2343e0;
            case 0x2343E4u: goto label_2343e4;
            case 0x2343E8u: goto label_2343e8;
            case 0x2343ECu: goto label_2343ec;
            case 0x2343F0u: goto label_2343f0;
            case 0x2343F4u: goto label_2343f4;
            case 0x2343F8u: goto label_2343f8;
            case 0x2343FCu: goto label_2343fc;
            case 0x234400u: goto label_234400;
            case 0x234404u: goto label_234404;
            case 0x234408u: goto label_234408;
            case 0x23440Cu: goto label_23440c;
            case 0x234410u: goto label_234410;
            case 0x234414u: goto label_234414;
            case 0x234418u: goto label_234418;
            case 0x23441Cu: goto label_23441c;
            case 0x234420u: goto label_234420;
            case 0x234424u: goto label_234424;
            case 0x234428u: goto label_234428;
            case 0x23442Cu: goto label_23442c;
            case 0x234430u: goto label_234430;
            case 0x234434u: goto label_234434;
            case 0x234438u: goto label_234438;
            case 0x23443Cu: goto label_23443c;
            case 0x234440u: goto label_234440;
            case 0x234444u: goto label_234444;
            case 0x234448u: goto label_234448;
            case 0x23444Cu: goto label_23444c;
            case 0x234450u: goto label_234450;
            case 0x234454u: goto label_234454;
            case 0x234458u: goto label_234458;
            case 0x23445Cu: goto label_23445c;
            case 0x234460u: goto label_234460;
            case 0x234464u: goto label_234464;
            case 0x234468u: goto label_234468;
            case 0x23446Cu: goto label_23446c;
            case 0x234470u: goto label_234470;
            case 0x234474u: goto label_234474;
            case 0x234478u: goto label_234478;
            default: break;
        }
        return;
    }
label_fallthrough_0x234474:
    ctx->pc = 0x23447Cu;
}
