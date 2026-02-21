#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _dtoa_r
// Address: 0x300200 - 0x3013cc
void _dtoa_r_0x300200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x300200u;

label_300200:
    // 0x300200: 0x27bdff00
    ctx->pc = 0x300200u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967040));
label_300204:
    // 0x300204: 0xffbe00e0
    ctx->pc = 0x300204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 30));
label_300208:
    // 0x300208: 0xffb600c0
    ctx->pc = 0x300208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
label_30020c:
    // 0x30020c: 0x80f02d
    ctx->pc = 0x30020cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_300210:
    // 0x300210: 0xffb00060
    ctx->pc = 0x300210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_300214:
    // 0x300214: 0xa0b02d
    ctx->pc = 0x300214u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_300218:
    // 0x300218: 0xffbf00f0
    ctx->pc = 0x300218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
label_30021c:
    // 0x30021c: 0x120802d
    ctx->pc = 0x30021cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_300220:
    // 0x300220: 0xffb700d0
    ctx->pc = 0x300220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 23));
label_300224:
    // 0x300224: 0xffb500b0
    ctx->pc = 0x300224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
label_300228:
    // 0x300228: 0xffb400a0
    ctx->pc = 0x300228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
label_30022c:
    // 0x30022c: 0xffb30090
    ctx->pc = 0x30022cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
label_300230:
    // 0x300230: 0xffb20080
    ctx->pc = 0x300230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
label_300234:
    // 0x300234: 0xffb10070
    ctx->pc = 0x300234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
label_300238:
    // 0x300238: 0xafa60008
    ctx->pc = 0x300238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
label_30023c:
    // 0x30023c: 0x8fcb0040
    ctx->pc = 0x30023cu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 30), 64)));
label_300240:
    // 0x300240: 0xafa7000c
    ctx->pc = 0x300240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
label_300244:
    // 0x300244: 0xafa80010
    ctx->pc = 0x300244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
label_300248:
    // 0x300248: 0x1160000a
label_30024c:
    if (ctx->pc == 0x30024Cu) {
        ctx->pc = 0x30024Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
        ctx->pc = 0x300250u;
        goto label_300250;
    }
    ctx->pc = 0x300248u;
    {
        const bool branch_taken_0x300248 = (GPR_U32(ctx, 11) == GPR_U32(ctx, 0));
        ctx->pc = 0x30024Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
        if (branch_taken_0x300248) {
            ctx->pc = 0x300274u;
            goto label_300274;
        }
    }
    ctx->pc = 0x300250u;
label_300250:
    // 0x300250: 0x8fc60044
    ctx->pc = 0x300250u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 30), 68)));
label_300254:
    // 0x300254: 0x24030001
    ctx->pc = 0x300254u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_300258:
    // 0x300258: 0x160282d
    ctx->pc = 0x300258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_30025c:
    // 0x30025c: 0xad660004
    ctx->pc = 0x30025cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 6));
label_300260:
    // 0x300260: 0x8fc20044
    ctx->pc = 0x300260u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 68)));
label_300264:
    // 0x300264: 0x431804
    ctx->pc = 0x300264u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_300268:
    // 0x300268: 0xc0c0832
label_30026c:
    if (ctx->pc == 0x30026Cu) {
        ctx->pc = 0x30026Cu;
        WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x300270u;
        goto label_300270;
    }
    ctx->pc = 0x300268u;
    SET_GPR_U32(ctx, 31, 0x300270u);
    ctx->pc = 0x30026Cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x3020C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x3020c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300270u; }
    }
    if (ctx->pc != 0x300270u) { return; }
    ctx->pc = 0x300270u;
label_300270:
    // 0x300270: 0xafc00040
    ctx->pc = 0x300270u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 0));
label_300274:
    // 0x300274: 0x16103e
    ctx->pc = 0x300274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) >> (32 + 0));
label_300278:
    // 0x300278: 0x2203c
    ctx->pc = 0x300278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
label_30027c:
    // 0x30027c: 0x4203f
    ctx->pc = 0x30027cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_300280:
    // 0x300280: 0x483000c
label_300284:
    if (ctx->pc == 0x300284u) {
        ctx->pc = 0x300284u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x300288u;
        goto label_300288;
    }
    ctx->pc = 0x300280u;
    {
        const bool branch_taken_0x300280 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x300280) {
            ctx->pc = 0x300284u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x3002B4u;
            goto label_3002b4;
        }
    }
    ctx->pc = 0x300288u;
label_300288:
    // 0x300288: 0x3c027fff
    ctx->pc = 0x300288u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
label_30028c:
    // 0x30028c: 0x3c03ffff
    ctx->pc = 0x30028cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)65535 << 16));
label_300290:
    // 0x300290: 0x3183e
    ctx->pc = 0x300290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_300294:
    // 0x300294: 0x3442ffff
    ctx->pc = 0x300294u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_300298:
    // 0x300298: 0x2c3b024
    ctx->pc = 0x300298u;
    SET_GPR_U32(ctx, 22, AND32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
label_30029c:
    // 0x30029c: 0x821024
    ctx->pc = 0x30029cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3002a0:
    // 0x3002a0: 0x24030001
    ctx->pc = 0x3002a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_3002a4:
    // 0x3002a4: 0x2103c
    ctx->pc = 0x3002a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3002a8:
    // 0x3002a8: 0xae030000
    ctx->pc = 0x3002a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3002ac:
    // 0x3002ac: 0x2c2b025
    ctx->pc = 0x3002acu;
    SET_GPR_U32(ctx, 22, OR32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_3002b0:
    // 0x3002b0: 0x16103e
    ctx->pc = 0x3002b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) >> (32 + 0));
label_3002b4:
    // 0x3002b4: 0x2803c
    ctx->pc = 0x3002b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
label_3002b8:
    // 0x3002b8: 0x10803f
    ctx->pc = 0x3002b8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_3002bc:
    // 0x3002bc: 0x3c037ff0
    ctx->pc = 0x3002bcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)32752 << 16));
label_3002c0:
    // 0x3002c0: 0x2031024
    ctx->pc = 0x3002c0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_3002c4:
    // 0x3002c4: 0x14430016
label_3002c8:
    if (ctx->pc == 0x3002C8u) {
        ctx->pc = 0x3002C8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3002CCu;
        goto label_3002cc;
    }
    ctx->pc = 0x3002C4u;
    {
        const bool branch_taken_0x3002c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x3002C8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x3002c4) {
            ctx->pc = 0x300320u;
            goto label_300320;
        }
    }
    ctx->pc = 0x3002CCu;
label_3002cc:
    // 0x3002cc: 0x8fa40010
    ctx->pc = 0x3002ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3002d0:
    // 0x3002d0: 0x2403270f
    ctx->pc = 0x3002d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9999));
label_3002d4:
    // 0x3002d4: 0x2402ffff
    ctx->pc = 0x3002d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_3002d8:
    // 0x3002d8: 0x2133a
    ctx->pc = 0x3002d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
label_3002dc:
    // 0x3002dc: 0x2c21024
    ctx->pc = 0x3002dcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_3002e0:
    // 0x3002e0: 0x14400004
label_3002e4:
    if (ctx->pc == 0x3002E4u) {
        ctx->pc = 0x3002E4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x3002E8u;
        goto label_3002e8;
    }
    ctx->pc = 0x3002E0u;
    {
        const bool branch_taken_0x3002e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x3002E4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x3002e0) {
            ctx->pc = 0x3002F4u;
            goto label_3002f4;
        }
    }
    ctx->pc = 0x3002E8u;
label_3002e8:
    // 0x3002e8: 0x3c02003c
    ctx->pc = 0x3002e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_3002ec:
    // 0x3002ec: 0x10000003
label_3002f0:
    if (ctx->pc == 0x3002F0u) {
        ctx->pc = 0x3002F0u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294945648));
        ctx->pc = 0x3002F4u;
        goto label_3002f4;
    }
    ctx->pc = 0x3002ECu;
    {
        const bool branch_taken_0x3002ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3002F0u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294945648));
        if (branch_taken_0x3002ec) {
            ctx->pc = 0x3002FCu;
            goto label_3002fc;
        }
    }
    ctx->pc = 0x3002F4u;
label_3002f4:
    // 0x3002f4: 0x3c02003c
    ctx->pc = 0x3002f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_3002f8:
    // 0x3002f8: 0x2455ab80
    ctx->pc = 0x3002f8u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294945664));
label_3002fc:
    // 0x3002fc: 0x8fa20014
    ctx->pc = 0x3002fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_300300:
    // 0x300300: 0x10400015
label_300304:
    if (ctx->pc == 0x300304u) {
        ctx->pc = 0x300304u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 8));
        ctx->pc = 0x300308u;
        goto label_300308;
    }
    ctx->pc = 0x300300u;
    {
        const bool branch_taken_0x300300 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x300304u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 21), 8));
        if (branch_taken_0x300300) {
            ctx->pc = 0x300358u;
            goto label_300358;
        }
    }
    ctx->pc = 0x300308u;
label_300308:
    // 0x300308: 0x82a20003
    ctx->pc = 0x300308u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 3)));
label_30030c:
    // 0x30030c: 0x26a30003
    ctx->pc = 0x30030cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 21), 3));
label_300310:
    // 0x300310: 0x82180b
    ctx->pc = 0x300310u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
label_300314:
    // 0x300314: 0x8fa40014
    ctx->pc = 0x300314u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_300318:
    // 0x300318: 0x1000000f
label_30031c:
    if (ctx->pc == 0x30031Cu) {
        ctx->pc = 0x30031Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x300320u;
        goto label_300320;
    }
    ctx->pc = 0x300318u;
    {
        const bool branch_taken_0x300318 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x30031Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x300318) {
            ctx->pc = 0x300358u;
            goto label_300358;
        }
    }
    ctx->pc = 0x300320u;
label_300320:
    // 0x300320: 0xc0be4ba
label_300324:
    if (ctx->pc == 0x300324u) {
        ctx->pc = 0x300324u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300328u;
        goto label_300328;
    }
    ctx->pc = 0x300320u;
    SET_GPR_U32(ctx, 31, 0x300328u);
    ctx->pc = 0x300324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300328u; }
    }
    if (ctx->pc != 0x300328u) { return; }
    ctx->pc = 0x300328u;
label_300328:
    // 0x300328: 0x1440000d
label_30032c:
    if (ctx->pc == 0x30032Cu) {
        ctx->pc = 0x30032Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300330u;
        goto label_300330;
    }
    ctx->pc = 0x300328u;
    {
        const bool branch_taken_0x300328 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x30032Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x300328) {
            ctx->pc = 0x300360u;
            goto label_300360;
        }
    }
    ctx->pc = 0x300330u;
label_300330:
    // 0x300330: 0x8fa40010
    ctx->pc = 0x300330u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_300334:
    // 0x300334: 0x24020001
    ctx->pc = 0x300334u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_300338:
    // 0x300338: 0x3c03003c
    ctx->pc = 0x300338u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_30033c:
    // 0x30033c: 0xac820000
    ctx->pc = 0x30033cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_300340:
    // 0x300340: 0x8fa20014
    ctx->pc = 0x300340u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_300344:
    // 0x300344: 0x10400004
label_300348:
    if (ctx->pc == 0x300348u) {
        ctx->pc = 0x300348u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 3), 4294945672));
        ctx->pc = 0x30034Cu;
        goto label_30034c;
    }
    ctx->pc = 0x300344u;
    {
        const bool branch_taken_0x300344 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x300348u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 3), 4294945672));
        if (branch_taken_0x300344) {
            ctx->pc = 0x300358u;
            goto label_300358;
        }
    }
    ctx->pc = 0x30034Cu;
label_30034c:
    // 0x30034c: 0x8fa30014
    ctx->pc = 0x30034cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_300350:
    // 0x300350: 0x26a20001
    ctx->pc = 0x300350u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 21), 1));
label_300354:
    // 0x300354: 0xac620000
    ctx->pc = 0x300354u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_300358:
    // 0x300358: 0x10000410
label_30035c:
    if (ctx->pc == 0x30035Cu) {
        ctx->pc = 0x30035Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300360u;
        goto label_300360;
    }
    ctx->pc = 0x300358u;
    {
        const bool branch_taken_0x300358 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x30035Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x300358) {
            ctx->pc = 0x30139Cu;
            goto label_30139c;
        }
    }
    ctx->pc = 0x300360u;
label_300360:
    // 0x300360: 0x2c0282d
    ctx->pc = 0x300360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_300364:
    // 0x300364: 0x3a0302d
    ctx->pc = 0x300364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_300368:
    // 0x300368: 0xc0c0b64
label_30036c:
    if (ctx->pc == 0x30036Cu) {
        ctx->pc = 0x30036Cu;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 29), 4));
        ctx->pc = 0x300370u;
        goto label_300370;
    }
    ctx->pc = 0x300368u;
    SET_GPR_U32(ctx, 31, 0x300370u);
    ctx->pc = 0x30036Cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 29), 4));
    ctx->pc = 0x302D90u;
    {
        const uint32_t __entryPc = ctx->pc;
        _d2b_0x302d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300370u; }
    }
    if (ctx->pc != 0x300370u) { return; }
    ctx->pc = 0x300370u;
label_300370:
    // 0x300370: 0x101d02
    ctx->pc = 0x300370u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 16), 20));
label_300374:
    // 0x300374: 0x307407ff
    ctx->pc = 0x300374u;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 3), 2047));
label_300378:
    // 0x300378: 0x12800015
label_30037c:
    if (ctx->pc == 0x30037Cu) {
        ctx->pc = 0x30037Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x300380u;
        goto label_300380;
    }
    ctx->pc = 0x300378u;
    {
        const bool branch_taken_0x300378 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x30037Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        if (branch_taken_0x300378) {
            ctx->pc = 0x3003D0u;
            goto label_3003d0;
        }
    }
    ctx->pc = 0x300380u;
label_300380:
    // 0x300380: 0x2c0b82d
    ctx->pc = 0x300380u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_300384:
    // 0x300384: 0x3c02000f
    ctx->pc = 0x300384u;
    SET_GPR_U32(ctx, 2, ((uint32_t)15 << 16));
label_300388:
    // 0x300388: 0x17183f
    ctx->pc = 0x300388u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 23) >> (32 + 0));
label_30038c:
    // 0x30038c: 0x3442ffff
    ctx->pc = 0x30038cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
label_300390:
    // 0x300390: 0x621824
    ctx->pc = 0x300390u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_300394:
    // 0x300394: 0x3c05ffff
    ctx->pc = 0x300394u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65535 << 16));
label_300398:
    // 0x300398: 0x5283e
    ctx->pc = 0x300398u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
label_30039c:
    // 0x30039c: 0x3183c
    ctx->pc = 0x30039cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_3003a0:
    // 0x3003a0: 0x2e5b824
    ctx->pc = 0x3003a0u;
    SET_GPR_U32(ctx, 23, AND32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
label_3003a4:
    // 0x3003a4: 0x2e3b825
    ctx->pc = 0x3003a4u;
    SET_GPR_U32(ctx, 23, OR32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_3003a8:
    // 0x3003a8: 0x3c043ff0
    ctx->pc = 0x3003a8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)16368 << 16));
label_3003ac:
    // 0x3003ac: 0x17103f
    ctx->pc = 0x3003acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 23) >> (32 + 0));
label_3003b0:
    // 0x3003b0: 0x2694fc01
    ctx->pc = 0x3003b0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294966273));
label_3003b4:
    // 0x3003b4: 0x441025
    ctx->pc = 0x3003b4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3003b8:
    // 0x3003b8: 0x2e5b824
    ctx->pc = 0x3003b8u;
    SET_GPR_U32(ctx, 23, AND32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
label_3003bc:
    // 0x3003bc: 0x2103c
    ctx->pc = 0x3003bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3003c0:
    // 0x3003c0: 0xafa00044
    ctx->pc = 0x3003c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_3003c4:
    // 0x3003c4: 0x2e2b825
    ctx->pc = 0x3003c4u;
    SET_GPR_U32(ctx, 23, OR32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_3003c8:
    // 0x3003c8: 0x10000027
label_3003cc:
    if (ctx->pc == 0x3003CCu) {
        ctx->pc = 0x3003CCu;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x3003D0u;
        goto label_3003d0;
    }
    ctx->pc = 0x3003C8u;
    {
        const bool branch_taken_0x3003c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3003CCu;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x3003c8) {
            ctx->pc = 0x300468u;
            goto label_300468;
        }
    }
    ctx->pc = 0x3003D0u;
label_3003d0:
    // 0x3003d0: 0x8fa20000
    ctx->pc = 0x3003d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3003d4:
    // 0x3003d4: 0x8fb10004
    ctx->pc = 0x3003d4u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3003d8:
    // 0x3003d8: 0x2222021
    ctx->pc = 0x3003d8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3003dc:
    // 0x3003dc: 0x24940432
    ctx->pc = 0x3003dcu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 4), 1074));
label_3003e0:
    // 0x3003e0: 0x2a820021
    ctx->pc = 0x3003e0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 33));
label_3003e4:
    // 0x3003e4: 0x14400009
label_3003e8:
    if (ctx->pc == 0x3003E8u) {
        ctx->pc = 0x3003E8u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
        ctx->pc = 0x3003ECu;
        goto label_3003ec;
    }
    ctx->pc = 0x3003E4u;
    {
        const bool branch_taken_0x3003e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x3003E8u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
        if (branch_taken_0x3003e4) {
            ctx->pc = 0x30040Cu;
            goto label_30040c;
        }
    }
    ctx->pc = 0x3003ECu;
label_3003ec:
    // 0x3003ec: 0x24840412
    ctx->pc = 0x3003ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1042));
label_3003f0:
    // 0x3003f0: 0x141823
    ctx->pc = 0x3003f0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
label_3003f4:
    // 0x3003f4: 0x16103c
    ctx->pc = 0x3003f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
label_3003f8:
    // 0x3003f8: 0x2103f
    ctx->pc = 0x3003f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3003fc:
    // 0x3003fc: 0x701804
    ctx->pc = 0x3003fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 3) & 0x1F));
label_300400:
    // 0x300400: 0x821006
    ctx->pc = 0x300400u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_300404:
    // 0x300404: 0x10000004
label_300408:
    if (ctx->pc == 0x300408u) {
        ctx->pc = 0x300408u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x30040Cu;
        goto label_30040c;
    }
    ctx->pc = 0x300404u;
    {
        const bool branch_taken_0x300404 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x300408u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x300404) {
            ctx->pc = 0x300418u;
            goto label_300418;
        }
    }
    ctx->pc = 0x30040Cu;
label_30040c:
    // 0x30040c: 0x16183c
    ctx->pc = 0x30040cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << (32 + 0));
label_300410:
    // 0x300410: 0x3183f
    ctx->pc = 0x300410u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_300414:
    // 0x300414: 0x438004
    ctx->pc = 0x300414u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_300418:
    // 0x300418: 0xc0be4ce
label_30041c:
    if (ctx->pc == 0x30041Cu) {
        ctx->pc = 0x30041Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300420u;
        goto label_300420;
    }
    ctx->pc = 0x300418u;
    SET_GPR_U32(ctx, 31, 0x300420u);
    ctx->pc = 0x30041Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F9338u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x2f9338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300420u; }
    }
    if (ctx->pc != 0x300420u) { return; }
    ctx->pc = 0x300420u;
label_300420:
    // 0x300420: 0x6010006
label_300424:
    if (ctx->pc == 0x300424u) {
        ctx->pc = 0x300424u;
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300428u;
        goto label_300428;
    }
    ctx->pc = 0x300420u;
    {
        const bool branch_taken_0x300420 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x300424u;
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x300420) {
            ctx->pc = 0x30043Cu;
            goto label_30043c;
        }
    }
    ctx->pc = 0x300428u;
label_300428:
    // 0x300428: 0x340583e0
    ctx->pc = 0x300428u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 33760));
label_30042c:
    // 0x30042c: 0x52bfc
    ctx->pc = 0x30042cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_300430:
    // 0x300430: 0xc0be340
label_300434:
    if (ctx->pc == 0x300434u) {
        ctx->pc = 0x300434u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300438u;
        goto label_300438;
    }
    ctx->pc = 0x300430u;
    SET_GPR_U32(ctx, 31, 0x300438u);
    ctx->pc = 0x300434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x2f8d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300438u; }
    }
    if (ctx->pc != 0x300438u) { return; }
    ctx->pc = 0x300438u;
label_300438:
    // 0x300438: 0x40b82d
    ctx->pc = 0x300438u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30043c:
    // 0x30043c: 0x3c04ffff
    ctx->pc = 0x30043cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
label_300440:
    // 0x300440: 0x4203e
    ctx->pc = 0x300440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_300444:
    // 0x300444: 0x17183f
    ctx->pc = 0x300444u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 23) >> (32 + 0));
label_300448:
    // 0x300448: 0x3c02fe10
    ctx->pc = 0x300448u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65040 << 16));
label_30044c:
    // 0x30044c: 0x2e4b824
    ctx->pc = 0x30044cu;
    SET_GPR_U32(ctx, 23, AND32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
label_300450:
    // 0x300450: 0x621821
    ctx->pc = 0x300450u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_300454:
    // 0x300454: 0x24040001
    ctx->pc = 0x300454u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_300458:
    // 0x300458: 0x3183c
    ctx->pc = 0x300458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_30045c:
    // 0x30045c: 0xafa40044
    ctx->pc = 0x30045cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
label_300460:
    // 0x300460: 0x2694fbcd
    ctx->pc = 0x300460u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294966221));
label_300464:
    // 0x300464: 0x2e3b825
    ctx->pc = 0x300464u;
    SET_GPR_U32(ctx, 23, OR32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_300468:
    // 0x300468: 0x3405ffe0
    ctx->pc = 0x300468u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65504));
label_30046c:
    // 0x30046c: 0x52bbc
    ctx->pc = 0x30046cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_300470:
    // 0x300470: 0xc0be356
label_300474:
    if (ctx->pc == 0x300474u) {
        ctx->pc = 0x300474u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300478u;
        goto label_300478;
    }
    ctx->pc = 0x300470u;
    SET_GPR_U32(ctx, 31, 0x300478u);
    ctx->pc = 0x300474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x2f8d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300478u; }
    }
    if (ctx->pc != 0x300478u) { return; }
    ctx->pc = 0x300478u;
label_300478:
    // 0x300478: 0x3c01003c
    ctx->pc = 0x300478u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
label_30047c:
    // 0x30047c: 0xdc25ab90
    ctx->pc = 0x30047cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294945680)));
label_300480:
    // 0x300480: 0xc0be370
label_300484:
    if (ctx->pc == 0x300484u) {
        ctx->pc = 0x300484u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300488u;
        goto label_300488;
    }
    ctx->pc = 0x300480u;
    SET_GPR_U32(ctx, 31, 0x300488u);
    ctx->pc = 0x300484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x2f8dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300488u; }
    }
    if (ctx->pc != 0x300488u) { return; }
    ctx->pc = 0x300488u;
label_300488:
    // 0x300488: 0x3c01003c
    ctx->pc = 0x300488u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
label_30048c:
    // 0x30048c: 0xdc25ab98
    ctx->pc = 0x30048cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294945688)));
label_300490:
    // 0x300490: 0xc0be340
label_300494:
    if (ctx->pc == 0x300494u) {
        ctx->pc = 0x300494u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300498u;
        goto label_300498;
    }
    ctx->pc = 0x300490u;
    SET_GPR_U32(ctx, 31, 0x300498u);
    ctx->pc = 0x300494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x2f8d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300498u; }
    }
    if (ctx->pc != 0x300498u) { return; }
    ctx->pc = 0x300498u;
label_300498:
    // 0x300498: 0x40802d
    ctx->pc = 0x300498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30049c:
    // 0x30049c: 0xc0be4ce
label_3004a0:
    if (ctx->pc == 0x3004A0u) {
        ctx->pc = 0x3004A0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3004A4u;
        goto label_3004a4;
    }
    ctx->pc = 0x30049Cu;
    SET_GPR_U32(ctx, 31, 0x3004A4u);
    ctx->pc = 0x3004A0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F9338u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x2f9338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3004A4u; }
    }
    if (ctx->pc != 0x3004A4u) { return; }
    ctx->pc = 0x3004A4u;
label_3004a4:
    // 0x3004a4: 0x3c01003c
    ctx->pc = 0x3004a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)60 << 16));
label_3004a8:
    // 0x3004a8: 0xdc25aba0
    ctx->pc = 0x3004a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 4294945696)));
label_3004ac:
    // 0x3004ac: 0xc0be370
label_3004b0:
    if (ctx->pc == 0x3004B0u) {
        ctx->pc = 0x3004B0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3004B4u;
        goto label_3004b4;
    }
    ctx->pc = 0x3004ACu;
    SET_GPR_U32(ctx, 31, 0x3004B4u);
    ctx->pc = 0x3004B0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x2f8dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3004B4u; }
    }
    if (ctx->pc != 0x3004B4u) { return; }
    ctx->pc = 0x3004B4u;
label_3004b4:
    // 0x3004b4: 0x200202d
    ctx->pc = 0x3004b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3004b8:
    // 0x3004b8: 0xc0be340
label_3004bc:
    if (ctx->pc == 0x3004BCu) {
        ctx->pc = 0x3004BCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3004C0u;
        goto label_3004c0;
    }
    ctx->pc = 0x3004B8u;
    SET_GPR_U32(ctx, 31, 0x3004C0u);
    ctx->pc = 0x3004BCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x2f8d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3004C0u; }
    }
    if (ctx->pc != 0x3004C0u) { return; }
    ctx->pc = 0x3004C0u;
label_3004c0:
    // 0x3004c0: 0x40902d
    ctx->pc = 0x3004c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3004c4:
    // 0x3004c4: 0xc0be4fc
label_3004c8:
    if (ctx->pc == 0x3004C8u) {
        ctx->pc = 0x3004C8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3004CCu;
        goto label_3004cc;
    }
    ctx->pc = 0x3004C4u;
    SET_GPR_U32(ctx, 31, 0x3004CCu);
    ctx->pc = 0x3004C8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F93F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x2f93f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3004CCu; }
    }
    if (ctx->pc != 0x3004CCu) { return; }
    ctx->pc = 0x3004CCu;
label_3004cc:
    // 0x3004cc: 0x40982d
    ctx->pc = 0x3004ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3004d0:
    // 0x3004d0: 0x240202d
    ctx->pc = 0x3004d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3004d4:
    // 0x3004d4: 0xc0be4ba
label_3004d8:
    if (ctx->pc == 0x3004D8u) {
        ctx->pc = 0x3004D8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3004DCu;
        goto label_3004dc;
    }
    ctx->pc = 0x3004D4u;
    SET_GPR_U32(ctx, 31, 0x3004DCu);
    ctx->pc = 0x3004D8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3004DCu; }
    }
    if (ctx->pc != 0x3004DCu) { return; }
    ctx->pc = 0x3004DCu;
label_3004dc:
    // 0x3004dc: 0x4410009
label_3004e0:
    if (ctx->pc == 0x3004E0u) {
        ctx->pc = 0x3004E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3004E4u;
        goto label_3004e4;
    }
    ctx->pc = 0x3004DCu;
    {
        const bool branch_taken_0x3004dc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3004E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x3004dc) {
            ctx->pc = 0x300504u;
            goto label_300504;
        }
    }
    ctx->pc = 0x3004E4u;
label_3004e4:
    // 0x3004e4: 0xc0be4ce
label_3004e8:
    if (ctx->pc == 0x3004E8u) {
        ctx->pc = 0x3004E8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3004ECu;
        goto label_3004ec;
    }
    ctx->pc = 0x3004E4u;
    SET_GPR_U32(ctx, 31, 0x3004ECu);
    ctx->pc = 0x3004E8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F9338u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x2f9338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3004ECu; }
    }
    if (ctx->pc != 0x3004ECu) { return; }
    ctx->pc = 0x3004ECu;
label_3004ec:
    // 0x3004ec: 0x240202d
    ctx->pc = 0x3004ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3004f0:
    // 0x3004f0: 0xc0be4ba
label_3004f4:
    if (ctx->pc == 0x3004F4u) {
        ctx->pc = 0x3004F4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3004F8u;
        goto label_3004f8;
    }
    ctx->pc = 0x3004F0u;
    SET_GPR_U32(ctx, 31, 0x3004F8u);
    ctx->pc = 0x3004F4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3004F8u; }
    }
    if (ctx->pc != 0x3004F8u) { return; }
    ctx->pc = 0x3004F8u;
label_3004f8:
    // 0x3004f8: 0x2663ffff
    ctx->pc = 0x3004f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 19), 4294967295));
label_3004fc:
    // 0x3004fc: 0x62980b
    ctx->pc = 0x3004fcu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 3));
label_300500:
    // 0x300500: 0x24020001
    ctx->pc = 0x300500u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_300504:
    // 0x300504: 0xafa20030
    ctx->pc = 0x300504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_300508:
    // 0x300508: 0x2e620017
    ctx->pc = 0x300508u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 19), 23));
label_30050c:
    // 0x30050c: 0x1040000c
label_300510:
    if (ctx->pc == 0x300510u) {
        ctx->pc = 0x300510u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x300514u;
        goto label_300514;
    }
    ctx->pc = 0x30050Cu;
    {
        const bool branch_taken_0x30050c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x300510u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x30050c) {
            ctx->pc = 0x300540u;
            goto label_300540;
        }
    }
    ctx->pc = 0x300514u;
label_300514:
    // 0x300514: 0x1318c0
    ctx->pc = 0x300514u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 3));
label_300518:
    // 0x300518: 0x2442ac20
    ctx->pc = 0x300518u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294945824));
label_30051c:
    // 0x30051c: 0x2c0202d
    ctx->pc = 0x30051cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_300520:
    // 0x300520: 0x621821
    ctx->pc = 0x300520u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_300524:
    // 0x300524: 0xafa00030
    ctx->pc = 0x300524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_300528:
    // 0x300528: 0xc0be4ba
label_30052c:
    if (ctx->pc == 0x30052Cu) {
        ctx->pc = 0x30052Cu;
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x300530u;
        goto label_300530;
    }
    ctx->pc = 0x300528u;
    SET_GPR_U32(ctx, 31, 0x300530u);
    ctx->pc = 0x30052Cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300530u; }
    }
    if (ctx->pc != 0x300530u) { return; }
    ctx->pc = 0x300530u;
label_300530:
    // 0x300530: 0x2403ffff
    ctx->pc = 0x300530u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_300534:
    // 0x300534: 0x2664ffff
    ctx->pc = 0x300534u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 4294967295));
label_300538:
    // 0x300538: 0x62182a
    ctx->pc = 0x300538u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
label_30053c:
    // 0x30053c: 0x83980a
    ctx->pc = 0x30053cu;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 19, GPR_U32(ctx, 4));
label_300540:
    // 0x300540: 0x2341023
    ctx->pc = 0x300540u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_300544:
    // 0x300544: 0x2450ffff
    ctx->pc = 0x300544u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294967295));
label_300548:
    // 0x300548: 0x6020004
label_30054c:
    if (ctx->pc == 0x30054Cu) {
        ctx->pc = 0x30054Cu;
        SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
        ctx->pc = 0x300550u;
        goto label_300550;
    }
    ctx->pc = 0x300548u;
    {
        const bool branch_taken_0x300548 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x300548) {
            ctx->pc = 0x30054Cu;
            SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
            ctx->pc = 0x30055Cu;
            goto label_30055c;
        }
    }
    ctx->pc = 0x300550u;
label_300550:
    // 0x300550: 0xafb00038
    ctx->pc = 0x300550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 16));
label_300554:
    // 0x300554: 0x10000003
label_300558:
    if (ctx->pc == 0x300558u) {
        ctx->pc = 0x300558u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->pc = 0x30055Cu;
        goto label_30055c;
    }
    ctx->pc = 0x300554u;
    {
        const bool branch_taken_0x300554 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x300558u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        if (branch_taken_0x300554) {
            ctx->pc = 0x300564u;
            goto label_300564;
        }
    }
    ctx->pc = 0x30055Cu;
label_30055c:
    // 0x30055c: 0xafa00038
    ctx->pc = 0x30055cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_300560:
    // 0x300560: 0xafb00018
    ctx->pc = 0x300560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
label_300564:
    // 0x300564: 0x6600006
label_300568:
    if (ctx->pc == 0x300568u) {
        ctx->pc = 0x300568u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->pc = 0x30056Cu;
        goto label_30056c;
    }
    ctx->pc = 0x300564u;
    {
        const bool branch_taken_0x300564 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x300568u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 56)));
        if (branch_taken_0x300564) {
            ctx->pc = 0x300580u;
            goto label_300580;
        }
    }
    ctx->pc = 0x30056Cu;
label_30056c:
    // 0x30056c: 0xafa0001c
    ctx->pc = 0x30056cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_300570:
    // 0x300570: 0x731821
    ctx->pc = 0x300570u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_300574:
    // 0x300574: 0xafb3003c
    ctx->pc = 0x300574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 19));
label_300578:
    // 0x300578: 0x10000007
label_30057c:
    if (ctx->pc == 0x30057Cu) {
        ctx->pc = 0x30057Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
        ctx->pc = 0x300580u;
        goto label_300580;
    }
    ctx->pc = 0x300578u;
    {
        const bool branch_taken_0x300578 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x30057Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
        if (branch_taken_0x300578) {
            ctx->pc = 0x300598u;
            goto label_300598;
        }
    }
    ctx->pc = 0x300580u;
label_300580:
    // 0x300580: 0x8fa40018
    ctx->pc = 0x300580u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_300584:
    // 0x300584: 0x131023
    ctx->pc = 0x300584u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
label_300588:
    // 0x300588: 0xafa2001c
    ctx->pc = 0x300588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_30058c:
    // 0x30058c: 0x932023
    ctx->pc = 0x30058cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_300590:
    // 0x300590: 0xafa0003c
    ctx->pc = 0x300590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_300594:
    // 0x300594: 0xafa40018
    ctx->pc = 0x300594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_300598:
    // 0x300598: 0x8fa40008
    ctx->pc = 0x300598u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_30059c:
    // 0x30059c: 0x24120001
    ctx->pc = 0x30059cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
label_3005a0:
    // 0x3005a0: 0x2c83000a
    ctx->pc = 0x3005a0u;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 4), 10));
label_3005a4:
    // 0x3005a4: 0x3200a
    ctx->pc = 0x3005a4u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 0));
label_3005a8:
    // 0x3005a8: 0x28820006
    ctx->pc = 0x3005a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 6));
label_3005ac:
    // 0x3005ac: 0x14400004
label_3005b0:
    if (ctx->pc == 0x3005B0u) {
        ctx->pc = 0x3005B0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->pc = 0x3005B4u;
        goto label_3005b4;
    }
    ctx->pc = 0x3005ACu;
    {
        const bool branch_taken_0x3005ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x3005B0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        if (branch_taken_0x3005ac) {
            ctx->pc = 0x3005C0u;
            goto label_3005c0;
        }
    }
    ctx->pc = 0x3005B4u;
label_3005b4:
    // 0x3005b4: 0x2484fffc
    ctx->pc = 0x3005b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967292));
label_3005b8:
    // 0x3005b8: 0x902d
    ctx->pc = 0x3005b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3005bc:
    // 0x3005bc: 0xafa40008
    ctx->pc = 0x3005bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_3005c0:
    // 0x3005c0: 0x24020001
    ctx->pc = 0x3005c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_3005c4:
    // 0x3005c4: 0x8fa30008
    ctx->pc = 0x3005c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3005c8:
    // 0x3005c8: 0xafa20034
    ctx->pc = 0x3005c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_3005cc:
    // 0x3005cc: 0x2c620006
    ctx->pc = 0x3005ccu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 6));
label_3005d0:
    // 0x3005d0: 0x10400020
label_3005d4:
    if (ctx->pc == 0x3005D4u) {
        ctx->pc = 0x3005D4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x3005D8u;
        goto label_3005d8;
    }
    ctx->pc = 0x3005D0u;
    {
        const bool branch_taken_0x3005d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x3005D4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x3005d0) {
            ctx->pc = 0x300654u;
            goto label_300654;
        }
    }
    ctx->pc = 0x3005D8u;
label_3005d8:
    // 0x3005d8: 0x31880
    ctx->pc = 0x3005d8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_3005dc:
    // 0x3005dc: 0x2442abb0
    ctx->pc = 0x3005dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294945712));
label_3005e0:
    // 0x3005e0: 0x621821
    ctx->pc = 0x3005e0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3005e4:
    // 0x3005e4: 0x8c640000
    ctx->pc = 0x3005e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3005e8:
    // 0x3005e8: 0x800008
label_3005ec:
    if (ctx->pc == 0x3005ECu) {
        ctx->pc = 0x3005F0u;
        goto label_3005f0;
    }
    ctx->pc = 0x3005E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x300200u: goto label_300200;
            case 0x300204u: goto label_300204;
            case 0x300208u: goto label_300208;
            case 0x30020Cu: goto label_30020c;
            case 0x300210u: goto label_300210;
            case 0x300214u: goto label_300214;
            case 0x300218u: goto label_300218;
            case 0x30021Cu: goto label_30021c;
            case 0x300220u: goto label_300220;
            case 0x300224u: goto label_300224;
            case 0x300228u: goto label_300228;
            case 0x30022Cu: goto label_30022c;
            case 0x300230u: goto label_300230;
            case 0x300234u: goto label_300234;
            case 0x300238u: goto label_300238;
            case 0x30023Cu: goto label_30023c;
            case 0x300240u: goto label_300240;
            case 0x300244u: goto label_300244;
            case 0x300248u: goto label_300248;
            case 0x30024Cu: goto label_30024c;
            case 0x300250u: goto label_300250;
            case 0x300254u: goto label_300254;
            case 0x300258u: goto label_300258;
            case 0x30025Cu: goto label_30025c;
            case 0x300260u: goto label_300260;
            case 0x300264u: goto label_300264;
            case 0x300268u: goto label_300268;
            case 0x30026Cu: goto label_30026c;
            case 0x300270u: goto label_300270;
            case 0x300274u: goto label_300274;
            case 0x300278u: goto label_300278;
            case 0x30027Cu: goto label_30027c;
            case 0x300280u: goto label_300280;
            case 0x300284u: goto label_300284;
            case 0x300288u: goto label_300288;
            case 0x30028Cu: goto label_30028c;
            case 0x300290u: goto label_300290;
            case 0x300294u: goto label_300294;
            case 0x300298u: goto label_300298;
            case 0x30029Cu: goto label_30029c;
            case 0x3002A0u: goto label_3002a0;
            case 0x3002A4u: goto label_3002a4;
            case 0x3002A8u: goto label_3002a8;
            case 0x3002ACu: goto label_3002ac;
            case 0x3002B0u: goto label_3002b0;
            case 0x3002B4u: goto label_3002b4;
            case 0x3002B8u: goto label_3002b8;
            case 0x3002BCu: goto label_3002bc;
            case 0x3002C0u: goto label_3002c0;
            case 0x3002C4u: goto label_3002c4;
            case 0x3002C8u: goto label_3002c8;
            case 0x3002CCu: goto label_3002cc;
            case 0x3002D0u: goto label_3002d0;
            case 0x3002D4u: goto label_3002d4;
            case 0x3002D8u: goto label_3002d8;
            case 0x3002DCu: goto label_3002dc;
            case 0x3002E0u: goto label_3002e0;
            case 0x3002E4u: goto label_3002e4;
            case 0x3002E8u: goto label_3002e8;
            case 0x3002ECu: goto label_3002ec;
            case 0x3002F0u: goto label_3002f0;
            case 0x3002F4u: goto label_3002f4;
            case 0x3002F8u: goto label_3002f8;
            case 0x3002FCu: goto label_3002fc;
            case 0x300300u: goto label_300300;
            case 0x300304u: goto label_300304;
            case 0x300308u: goto label_300308;
            case 0x30030Cu: goto label_30030c;
            case 0x300310u: goto label_300310;
            case 0x300314u: goto label_300314;
            case 0x300318u: goto label_300318;
            case 0x30031Cu: goto label_30031c;
            case 0x300320u: goto label_300320;
            case 0x300324u: goto label_300324;
            case 0x300328u: goto label_300328;
            case 0x30032Cu: goto label_30032c;
            case 0x300330u: goto label_300330;
            case 0x300334u: goto label_300334;
            case 0x300338u: goto label_300338;
            case 0x30033Cu: goto label_30033c;
            case 0x300340u: goto label_300340;
            case 0x300344u: goto label_300344;
            case 0x300348u: goto label_300348;
            case 0x30034Cu: goto label_30034c;
            case 0x300350u: goto label_300350;
            case 0x300354u: goto label_300354;
            case 0x300358u: goto label_300358;
            case 0x30035Cu: goto label_30035c;
            case 0x300360u: goto label_300360;
            case 0x300364u: goto label_300364;
            case 0x300368u: goto label_300368;
            case 0x30036Cu: goto label_30036c;
            case 0x300370u: goto label_300370;
            case 0x300374u: goto label_300374;
            case 0x300378u: goto label_300378;
            case 0x30037Cu: goto label_30037c;
            case 0x300380u: goto label_300380;
            case 0x300384u: goto label_300384;
            case 0x300388u: goto label_300388;
            case 0x30038Cu: goto label_30038c;
            case 0x300390u: goto label_300390;
            case 0x300394u: goto label_300394;
            case 0x300398u: goto label_300398;
            case 0x30039Cu: goto label_30039c;
            case 0x3003A0u: goto label_3003a0;
            case 0x3003A4u: goto label_3003a4;
            case 0x3003A8u: goto label_3003a8;
            case 0x3003ACu: goto label_3003ac;
            case 0x3003B0u: goto label_3003b0;
            case 0x3003B4u: goto label_3003b4;
            case 0x3003B8u: goto label_3003b8;
            case 0x3003BCu: goto label_3003bc;
            case 0x3003C0u: goto label_3003c0;
            case 0x3003C4u: goto label_3003c4;
            case 0x3003C8u: goto label_3003c8;
            case 0x3003CCu: goto label_3003cc;
            case 0x3003D0u: goto label_3003d0;
            case 0x3003D4u: goto label_3003d4;
            case 0x3003D8u: goto label_3003d8;
            case 0x3003DCu: goto label_3003dc;
            case 0x3003E0u: goto label_3003e0;
            case 0x3003E4u: goto label_3003e4;
            case 0x3003E8u: goto label_3003e8;
            case 0x3003ECu: goto label_3003ec;
            case 0x3003F0u: goto label_3003f0;
            case 0x3003F4u: goto label_3003f4;
            case 0x3003F8u: goto label_3003f8;
            case 0x3003FCu: goto label_3003fc;
            case 0x300400u: goto label_300400;
            case 0x300404u: goto label_300404;
            case 0x300408u: goto label_300408;
            case 0x30040Cu: goto label_30040c;
            case 0x300410u: goto label_300410;
            case 0x300414u: goto label_300414;
            case 0x300418u: goto label_300418;
            case 0x30041Cu: goto label_30041c;
            case 0x300420u: goto label_300420;
            case 0x300424u: goto label_300424;
            case 0x300428u: goto label_300428;
            case 0x30042Cu: goto label_30042c;
            case 0x300430u: goto label_300430;
            case 0x300434u: goto label_300434;
            case 0x300438u: goto label_300438;
            case 0x30043Cu: goto label_30043c;
            case 0x300440u: goto label_300440;
            case 0x300444u: goto label_300444;
            case 0x300448u: goto label_300448;
            case 0x30044Cu: goto label_30044c;
            case 0x300450u: goto label_300450;
            case 0x300454u: goto label_300454;
            case 0x300458u: goto label_300458;
            case 0x30045Cu: goto label_30045c;
            case 0x300460u: goto label_300460;
            case 0x300464u: goto label_300464;
            case 0x300468u: goto label_300468;
            case 0x30046Cu: goto label_30046c;
            case 0x300470u: goto label_300470;
            case 0x300474u: goto label_300474;
            case 0x300478u: goto label_300478;
            case 0x30047Cu: goto label_30047c;
            case 0x300480u: goto label_300480;
            case 0x300484u: goto label_300484;
            case 0x300488u: goto label_300488;
            case 0x30048Cu: goto label_30048c;
            case 0x300490u: goto label_300490;
            case 0x300494u: goto label_300494;
            case 0x300498u: goto label_300498;
            case 0x30049Cu: goto label_30049c;
            case 0x3004A0u: goto label_3004a0;
            case 0x3004A4u: goto label_3004a4;
            case 0x3004A8u: goto label_3004a8;
            case 0x3004ACu: goto label_3004ac;
            case 0x3004B0u: goto label_3004b0;
            case 0x3004B4u: goto label_3004b4;
            case 0x3004B8u: goto label_3004b8;
            case 0x3004BCu: goto label_3004bc;
            case 0x3004C0u: goto label_3004c0;
            case 0x3004C4u: goto label_3004c4;
            case 0x3004C8u: goto label_3004c8;
            case 0x3004CCu: goto label_3004cc;
            case 0x3004D0u: goto label_3004d0;
            case 0x3004D4u: goto label_3004d4;
            case 0x3004D8u: goto label_3004d8;
            case 0x3004DCu: goto label_3004dc;
            case 0x3004E0u: goto label_3004e0;
            case 0x3004E4u: goto label_3004e4;
            case 0x3004E8u: goto label_3004e8;
            case 0x3004ECu: goto label_3004ec;
            case 0x3004F0u: goto label_3004f0;
            case 0x3004F4u: goto label_3004f4;
            case 0x3004F8u: goto label_3004f8;
            case 0x3004FCu: goto label_3004fc;
            case 0x300500u: goto label_300500;
            case 0x300504u: goto label_300504;
            case 0x300508u: goto label_300508;
            case 0x30050Cu: goto label_30050c;
            case 0x300510u: goto label_300510;
            case 0x300514u: goto label_300514;
            case 0x300518u: goto label_300518;
            case 0x30051Cu: goto label_30051c;
            case 0x300520u: goto label_300520;
            case 0x300524u: goto label_300524;
            case 0x300528u: goto label_300528;
            case 0x30052Cu: goto label_30052c;
            case 0x300530u: goto label_300530;
            case 0x300534u: goto label_300534;
            case 0x300538u: goto label_300538;
            case 0x30053Cu: goto label_30053c;
            case 0x300540u: goto label_300540;
            case 0x300544u: goto label_300544;
            case 0x300548u: goto label_300548;
            case 0x30054Cu: goto label_30054c;
            case 0x300550u: goto label_300550;
            case 0x300554u: goto label_300554;
            case 0x300558u: goto label_300558;
            case 0x30055Cu: goto label_30055c;
            case 0x300560u: goto label_300560;
            case 0x300564u: goto label_300564;
            case 0x300568u: goto label_300568;
            case 0x30056Cu: goto label_30056c;
            case 0x300570u: goto label_300570;
            case 0x300574u: goto label_300574;
            case 0x300578u: goto label_300578;
            case 0x30057Cu: goto label_30057c;
            case 0x300580u: goto label_300580;
            case 0x300584u: goto label_300584;
            case 0x300588u: goto label_300588;
            case 0x30058Cu: goto label_30058c;
            case 0x300590u: goto label_300590;
            case 0x300594u: goto label_300594;
            case 0x300598u: goto label_300598;
            case 0x30059Cu: goto label_30059c;
            case 0x3005A0u: goto label_3005a0;
            case 0x3005A4u: goto label_3005a4;
            case 0x3005A8u: goto label_3005a8;
            case 0x3005ACu: goto label_3005ac;
            case 0x3005B0u: goto label_3005b0;
            case 0x3005B4u: goto label_3005b4;
            case 0x3005B8u: goto label_3005b8;
            case 0x3005BCu: goto label_3005bc;
            case 0x3005C0u: goto label_3005c0;
            case 0x3005C4u: goto label_3005c4;
            case 0x3005C8u: goto label_3005c8;
            case 0x3005CCu: goto label_3005cc;
            case 0x3005D0u: goto label_3005d0;
            case 0x3005D4u: goto label_3005d4;
            case 0x3005D8u: goto label_3005d8;
            case 0x3005DCu: goto label_3005dc;
            case 0x3005E0u: goto label_3005e0;
            case 0x3005E4u: goto label_3005e4;
            case 0x3005E8u: goto label_3005e8;
            case 0x3005ECu: goto label_3005ec;
            case 0x3005F0u: goto label_3005f0;
            case 0x3005F4u: goto label_3005f4;
            case 0x3005F8u: goto label_3005f8;
            case 0x3005FCu: goto label_3005fc;
            case 0x300600u: goto label_300600;
            case 0x300604u: goto label_300604;
            case 0x300608u: goto label_300608;
            case 0x30060Cu: goto label_30060c;
            case 0x300610u: goto label_300610;
            case 0x300614u: goto label_300614;
            case 0x300618u: goto label_300618;
            case 0x30061Cu: goto label_30061c;
            case 0x300620u: goto label_300620;
            case 0x300624u: goto label_300624;
            case 0x300628u: goto label_300628;
            case 0x30062Cu: goto label_30062c;
            case 0x300630u: goto label_300630;
            case 0x300634u: goto label_300634;
            case 0x300638u: goto label_300638;
            case 0x30063Cu: goto label_30063c;
            case 0x300640u: goto label_300640;
            case 0x300644u: goto label_300644;
            case 0x300648u: goto label_300648;
            case 0x30064Cu: goto label_30064c;
            case 0x300650u: goto label_300650;
            case 0x300654u: goto label_300654;
            case 0x300658u: goto label_300658;
            case 0x30065Cu: goto label_30065c;
            case 0x300660u: goto label_300660;
            case 0x300664u: goto label_300664;
            case 0x300668u: goto label_300668;
            case 0x30066Cu: goto label_30066c;
            case 0x300670u: goto label_300670;
            case 0x300674u: goto label_300674;
            case 0x300678u: goto label_300678;
            case 0x30067Cu: goto label_30067c;
            case 0x300680u: goto label_300680;
            case 0x300684u: goto label_300684;
            case 0x300688u: goto label_300688;
            case 0x30068Cu: goto label_30068c;
            case 0x300690u: goto label_300690;
            case 0x300694u: goto label_300694;
            case 0x300698u: goto label_300698;
            case 0x30069Cu: goto label_30069c;
            case 0x3006A0u: goto label_3006a0;
            case 0x3006A4u: goto label_3006a4;
            case 0x3006A8u: goto label_3006a8;
            case 0x3006ACu: goto label_3006ac;
            case 0x3006B0u: goto label_3006b0;
            case 0x3006B4u: goto label_3006b4;
            case 0x3006B8u: goto label_3006b8;
            case 0x3006BCu: goto label_3006bc;
            case 0x3006C0u: goto label_3006c0;
            case 0x3006C4u: goto label_3006c4;
            case 0x3006C8u: goto label_3006c8;
            case 0x3006CCu: goto label_3006cc;
            case 0x3006D0u: goto label_3006d0;
            case 0x3006D4u: goto label_3006d4;
            case 0x3006D8u: goto label_3006d8;
            case 0x3006DCu: goto label_3006dc;
            case 0x3006E0u: goto label_3006e0;
            case 0x3006E4u: goto label_3006e4;
            case 0x3006E8u: goto label_3006e8;
            case 0x3006ECu: goto label_3006ec;
            case 0x3006F0u: goto label_3006f0;
            case 0x3006F4u: goto label_3006f4;
            case 0x3006F8u: goto label_3006f8;
            case 0x3006FCu: goto label_3006fc;
            case 0x300700u: goto label_300700;
            case 0x300704u: goto label_300704;
            case 0x300708u: goto label_300708;
            case 0x30070Cu: goto label_30070c;
            case 0x300710u: goto label_300710;
            case 0x300714u: goto label_300714;
            case 0x300718u: goto label_300718;
            case 0x30071Cu: goto label_30071c;
            case 0x300720u: goto label_300720;
            case 0x300724u: goto label_300724;
            case 0x300728u: goto label_300728;
            case 0x30072Cu: goto label_30072c;
            case 0x300730u: goto label_300730;
            case 0x300734u: goto label_300734;
            case 0x300738u: goto label_300738;
            case 0x30073Cu: goto label_30073c;
            case 0x300740u: goto label_300740;
            case 0x300744u: goto label_300744;
            case 0x300748u: goto label_300748;
            case 0x30074Cu: goto label_30074c;
            case 0x300750u: goto label_300750;
            case 0x300754u: goto label_300754;
            case 0x300758u: goto label_300758;
            case 0x30075Cu: goto label_30075c;
            case 0x300760u: goto label_300760;
            case 0x300764u: goto label_300764;
            case 0x300768u: goto label_300768;
            case 0x30076Cu: goto label_30076c;
            case 0x300770u: goto label_300770;
            case 0x300774u: goto label_300774;
            case 0x300778u: goto label_300778;
            case 0x30077Cu: goto label_30077c;
            case 0x300780u: goto label_300780;
            case 0x300784u: goto label_300784;
            case 0x300788u: goto label_300788;
            case 0x30078Cu: goto label_30078c;
            case 0x300790u: goto label_300790;
            case 0x300794u: goto label_300794;
            case 0x300798u: goto label_300798;
            case 0x30079Cu: goto label_30079c;
            case 0x3007A0u: goto label_3007a0;
            case 0x3007A4u: goto label_3007a4;
            case 0x3007A8u: goto label_3007a8;
            case 0x3007ACu: goto label_3007ac;
            case 0x3007B0u: goto label_3007b0;
            case 0x3007B4u: goto label_3007b4;
            case 0x3007B8u: goto label_3007b8;
            case 0x3007BCu: goto label_3007bc;
            case 0x3007C0u: goto label_3007c0;
            case 0x3007C4u: goto label_3007c4;
            case 0x3007C8u: goto label_3007c8;
            case 0x3007CCu: goto label_3007cc;
            case 0x3007D0u: goto label_3007d0;
            case 0x3007D4u: goto label_3007d4;
            case 0x3007D8u: goto label_3007d8;
            case 0x3007DCu: goto label_3007dc;
            case 0x3007E0u: goto label_3007e0;
            case 0x3007E4u: goto label_3007e4;
            case 0x3007E8u: goto label_3007e8;
            case 0x3007ECu: goto label_3007ec;
            case 0x3007F0u: goto label_3007f0;
            case 0x3007F4u: goto label_3007f4;
            case 0x3007F8u: goto label_3007f8;
            case 0x3007FCu: goto label_3007fc;
            case 0x300800u: goto label_300800;
            case 0x300804u: goto label_300804;
            case 0x300808u: goto label_300808;
            case 0x30080Cu: goto label_30080c;
            case 0x300810u: goto label_300810;
            case 0x300814u: goto label_300814;
            case 0x300818u: goto label_300818;
            case 0x30081Cu: goto label_30081c;
            case 0x300820u: goto label_300820;
            case 0x300824u: goto label_300824;
            case 0x300828u: goto label_300828;
            case 0x30082Cu: goto label_30082c;
            case 0x300830u: goto label_300830;
            case 0x300834u: goto label_300834;
            case 0x300838u: goto label_300838;
            case 0x30083Cu: goto label_30083c;
            case 0x300840u: goto label_300840;
            case 0x300844u: goto label_300844;
            case 0x300848u: goto label_300848;
            case 0x30084Cu: goto label_30084c;
            case 0x300850u: goto label_300850;
            case 0x300854u: goto label_300854;
            case 0x300858u: goto label_300858;
            case 0x30085Cu: goto label_30085c;
            case 0x300860u: goto label_300860;
            case 0x300864u: goto label_300864;
            case 0x300868u: goto label_300868;
            case 0x30086Cu: goto label_30086c;
            case 0x300870u: goto label_300870;
            case 0x300874u: goto label_300874;
            case 0x300878u: goto label_300878;
            case 0x30087Cu: goto label_30087c;
            case 0x300880u: goto label_300880;
            case 0x300884u: goto label_300884;
            case 0x300888u: goto label_300888;
            case 0x30088Cu: goto label_30088c;
            case 0x300890u: goto label_300890;
            case 0x300894u: goto label_300894;
            case 0x300898u: goto label_300898;
            case 0x30089Cu: goto label_30089c;
            case 0x3008A0u: goto label_3008a0;
            case 0x3008A4u: goto label_3008a4;
            case 0x3008A8u: goto label_3008a8;
            case 0x3008ACu: goto label_3008ac;
            case 0x3008B0u: goto label_3008b0;
            case 0x3008B4u: goto label_3008b4;
            case 0x3008B8u: goto label_3008b8;
            case 0x3008BCu: goto label_3008bc;
            case 0x3008C0u: goto label_3008c0;
            case 0x3008C4u: goto label_3008c4;
            case 0x3008C8u: goto label_3008c8;
            case 0x3008CCu: goto label_3008cc;
            case 0x3008D0u: goto label_3008d0;
            case 0x3008D4u: goto label_3008d4;
            case 0x3008D8u: goto label_3008d8;
            case 0x3008DCu: goto label_3008dc;
            case 0x3008E0u: goto label_3008e0;
            case 0x3008E4u: goto label_3008e4;
            case 0x3008E8u: goto label_3008e8;
            case 0x3008ECu: goto label_3008ec;
            case 0x3008F0u: goto label_3008f0;
            case 0x3008F4u: goto label_3008f4;
            case 0x3008F8u: goto label_3008f8;
            case 0x3008FCu: goto label_3008fc;
            case 0x300900u: goto label_300900;
            case 0x300904u: goto label_300904;
            case 0x300908u: goto label_300908;
            case 0x30090Cu: goto label_30090c;
            case 0x300910u: goto label_300910;
            case 0x300914u: goto label_300914;
            case 0x300918u: goto label_300918;
            case 0x30091Cu: goto label_30091c;
            case 0x300920u: goto label_300920;
            case 0x300924u: goto label_300924;
            case 0x300928u: goto label_300928;
            case 0x30092Cu: goto label_30092c;
            case 0x300930u: goto label_300930;
            case 0x300934u: goto label_300934;
            case 0x300938u: goto label_300938;
            case 0x30093Cu: goto label_30093c;
            case 0x300940u: goto label_300940;
            case 0x300944u: goto label_300944;
            case 0x300948u: goto label_300948;
            case 0x30094Cu: goto label_30094c;
            case 0x300950u: goto label_300950;
            case 0x300954u: goto label_300954;
            case 0x300958u: goto label_300958;
            case 0x30095Cu: goto label_30095c;
            case 0x300960u: goto label_300960;
            case 0x300964u: goto label_300964;
            case 0x300968u: goto label_300968;
            case 0x30096Cu: goto label_30096c;
            case 0x300970u: goto label_300970;
            case 0x300974u: goto label_300974;
            case 0x300978u: goto label_300978;
            case 0x30097Cu: goto label_30097c;
            case 0x300980u: goto label_300980;
            case 0x300984u: goto label_300984;
            case 0x300988u: goto label_300988;
            case 0x30098Cu: goto label_30098c;
            case 0x300990u: goto label_300990;
            case 0x300994u: goto label_300994;
            case 0x300998u: goto label_300998;
            case 0x30099Cu: goto label_30099c;
            case 0x3009A0u: goto label_3009a0;
            case 0x3009A4u: goto label_3009a4;
            case 0x3009A8u: goto label_3009a8;
            case 0x3009ACu: goto label_3009ac;
            case 0x3009B0u: goto label_3009b0;
            case 0x3009B4u: goto label_3009b4;
            case 0x3009B8u: goto label_3009b8;
            case 0x3009BCu: goto label_3009bc;
            case 0x3009C0u: goto label_3009c0;
            case 0x3009C4u: goto label_3009c4;
            case 0x3009C8u: goto label_3009c8;
            case 0x3009CCu: goto label_3009cc;
            case 0x3009D0u: goto label_3009d0;
            case 0x3009D4u: goto label_3009d4;
            case 0x3009D8u: goto label_3009d8;
            case 0x3009DCu: goto label_3009dc;
            case 0x3009E0u: goto label_3009e0;
            case 0x3009E4u: goto label_3009e4;
            case 0x3009E8u: goto label_3009e8;
            case 0x3009ECu: goto label_3009ec;
            case 0x3009F0u: goto label_3009f0;
            case 0x3009F4u: goto label_3009f4;
            case 0x3009F8u: goto label_3009f8;
            case 0x3009FCu: goto label_3009fc;
            case 0x300A00u: goto label_300a00;
            case 0x300A04u: goto label_300a04;
            case 0x300A08u: goto label_300a08;
            case 0x300A0Cu: goto label_300a0c;
            case 0x300A10u: goto label_300a10;
            case 0x300A14u: goto label_300a14;
            case 0x300A18u: goto label_300a18;
            case 0x300A1Cu: goto label_300a1c;
            case 0x300A20u: goto label_300a20;
            case 0x300A24u: goto label_300a24;
            case 0x300A28u: goto label_300a28;
            case 0x300A2Cu: goto label_300a2c;
            case 0x300A30u: goto label_300a30;
            case 0x300A34u: goto label_300a34;
            case 0x300A38u: goto label_300a38;
            case 0x300A3Cu: goto label_300a3c;
            case 0x300A40u: goto label_300a40;
            case 0x300A44u: goto label_300a44;
            case 0x300A48u: goto label_300a48;
            case 0x300A4Cu: goto label_300a4c;
            case 0x300A50u: goto label_300a50;
            case 0x300A54u: goto label_300a54;
            case 0x300A58u: goto label_300a58;
            case 0x300A5Cu: goto label_300a5c;
            case 0x300A60u: goto label_300a60;
            case 0x300A64u: goto label_300a64;
            case 0x300A68u: goto label_300a68;
            case 0x300A6Cu: goto label_300a6c;
            case 0x300A70u: goto label_300a70;
            case 0x300A74u: goto label_300a74;
            case 0x300A78u: goto label_300a78;
            case 0x300A7Cu: goto label_300a7c;
            case 0x300A80u: goto label_300a80;
            case 0x300A84u: goto label_300a84;
            case 0x300A88u: goto label_300a88;
            case 0x300A8Cu: goto label_300a8c;
            case 0x300A90u: goto label_300a90;
            case 0x300A94u: goto label_300a94;
            case 0x300A98u: goto label_300a98;
            case 0x300A9Cu: goto label_300a9c;
            case 0x300AA0u: goto label_300aa0;
            case 0x300AA4u: goto label_300aa4;
            case 0x300AA8u: goto label_300aa8;
            case 0x300AACu: goto label_300aac;
            case 0x300AB0u: goto label_300ab0;
            case 0x300AB4u: goto label_300ab4;
            case 0x300AB8u: goto label_300ab8;
            case 0x300ABCu: goto label_300abc;
            case 0x300AC0u: goto label_300ac0;
            case 0x300AC4u: goto label_300ac4;
            case 0x300AC8u: goto label_300ac8;
            case 0x300ACCu: goto label_300acc;
            case 0x300AD0u: goto label_300ad0;
            case 0x300AD4u: goto label_300ad4;
            case 0x300AD8u: goto label_300ad8;
            case 0x300ADCu: goto label_300adc;
            case 0x300AE0u: goto label_300ae0;
            case 0x300AE4u: goto label_300ae4;
            case 0x300AE8u: goto label_300ae8;
            case 0x300AECu: goto label_300aec;
            case 0x300AF0u: goto label_300af0;
            case 0x300AF4u: goto label_300af4;
            case 0x300AF8u: goto label_300af8;
            case 0x300AFCu: goto label_300afc;
            case 0x300B00u: goto label_300b00;
            case 0x300B04u: goto label_300b04;
            case 0x300B08u: goto label_300b08;
            case 0x300B0Cu: goto label_300b0c;
            case 0x300B10u: goto label_300b10;
            case 0x300B14u: goto label_300b14;
            case 0x300B18u: goto label_300b18;
            case 0x300B1Cu: goto label_300b1c;
            case 0x300B20u: goto label_300b20;
            case 0x300B24u: goto label_300b24;
            case 0x300B28u: goto label_300b28;
            case 0x300B2Cu: goto label_300b2c;
            case 0x300B30u: goto label_300b30;
            case 0x300B34u: goto label_300b34;
            case 0x300B38u: goto label_300b38;
            case 0x300B3Cu: goto label_300b3c;
            case 0x300B40u: goto label_300b40;
            case 0x300B44u: goto label_300b44;
            case 0x300B48u: goto label_300b48;
            case 0x300B4Cu: goto label_300b4c;
            case 0x300B50u: goto label_300b50;
            case 0x300B54u: goto label_300b54;
            case 0x300B58u: goto label_300b58;
            case 0x300B5Cu: goto label_300b5c;
            case 0x300B60u: goto label_300b60;
            case 0x300B64u: goto label_300b64;
            case 0x300B68u: goto label_300b68;
            case 0x300B6Cu: goto label_300b6c;
            case 0x300B70u: goto label_300b70;
            case 0x300B74u: goto label_300b74;
            case 0x300B78u: goto label_300b78;
            case 0x300B7Cu: goto label_300b7c;
            case 0x300B80u: goto label_300b80;
            case 0x300B84u: goto label_300b84;
            case 0x300B88u: goto label_300b88;
            case 0x300B8Cu: goto label_300b8c;
            case 0x300B90u: goto label_300b90;
            case 0x300B94u: goto label_300b94;
            case 0x300B98u: goto label_300b98;
            case 0x300B9Cu: goto label_300b9c;
            case 0x300BA0u: goto label_300ba0;
            case 0x300BA4u: goto label_300ba4;
            case 0x300BA8u: goto label_300ba8;
            case 0x300BACu: goto label_300bac;
            case 0x300BB0u: goto label_300bb0;
            case 0x300BB4u: goto label_300bb4;
            case 0x300BB8u: goto label_300bb8;
            case 0x300BBCu: goto label_300bbc;
            case 0x300BC0u: goto label_300bc0;
            case 0x300BC4u: goto label_300bc4;
            case 0x300BC8u: goto label_300bc8;
            case 0x300BCCu: goto label_300bcc;
            case 0x300BD0u: goto label_300bd0;
            case 0x300BD4u: goto label_300bd4;
            case 0x300BD8u: goto label_300bd8;
            case 0x300BDCu: goto label_300bdc;
            case 0x300BE0u: goto label_300be0;
            case 0x300BE4u: goto label_300be4;
            case 0x300BE8u: goto label_300be8;
            case 0x300BECu: goto label_300bec;
            case 0x300BF0u: goto label_300bf0;
            case 0x300BF4u: goto label_300bf4;
            case 0x300BF8u: goto label_300bf8;
            case 0x300BFCu: goto label_300bfc;
            case 0x300C00u: goto label_300c00;
            case 0x300C04u: goto label_300c04;
            case 0x300C08u: goto label_300c08;
            case 0x300C0Cu: goto label_300c0c;
            case 0x300C10u: goto label_300c10;
            case 0x300C14u: goto label_300c14;
            case 0x300C18u: goto label_300c18;
            case 0x300C1Cu: goto label_300c1c;
            case 0x300C20u: goto label_300c20;
            case 0x300C24u: goto label_300c24;
            case 0x300C28u: goto label_300c28;
            case 0x300C2Cu: goto label_300c2c;
            case 0x300C30u: goto label_300c30;
            case 0x300C34u: goto label_300c34;
            case 0x300C38u: goto label_300c38;
            case 0x300C3Cu: goto label_300c3c;
            case 0x300C40u: goto label_300c40;
            case 0x300C44u: goto label_300c44;
            case 0x300C48u: goto label_300c48;
            case 0x300C4Cu: goto label_300c4c;
            case 0x300C50u: goto label_300c50;
            case 0x300C54u: goto label_300c54;
            case 0x300C58u: goto label_300c58;
            case 0x300C5Cu: goto label_300c5c;
            case 0x300C60u: goto label_300c60;
            case 0x300C64u: goto label_300c64;
            case 0x300C68u: goto label_300c68;
            case 0x300C6Cu: goto label_300c6c;
            case 0x300C70u: goto label_300c70;
            case 0x300C74u: goto label_300c74;
            case 0x300C78u: goto label_300c78;
            case 0x300C7Cu: goto label_300c7c;
            case 0x300C80u: goto label_300c80;
            case 0x300C84u: goto label_300c84;
            case 0x300C88u: goto label_300c88;
            case 0x300C8Cu: goto label_300c8c;
            case 0x300C90u: goto label_300c90;
            case 0x300C94u: goto label_300c94;
            case 0x300C98u: goto label_300c98;
            case 0x300C9Cu: goto label_300c9c;
            case 0x300CA0u: goto label_300ca0;
            case 0x300CA4u: goto label_300ca4;
            case 0x300CA8u: goto label_300ca8;
            case 0x300CACu: goto label_300cac;
            case 0x300CB0u: goto label_300cb0;
            case 0x300CB4u: goto label_300cb4;
            case 0x300CB8u: goto label_300cb8;
            case 0x300CBCu: goto label_300cbc;
            case 0x300CC0u: goto label_300cc0;
            case 0x300CC4u: goto label_300cc4;
            case 0x300CC8u: goto label_300cc8;
            case 0x300CCCu: goto label_300ccc;
            case 0x300CD0u: goto label_300cd0;
            case 0x300CD4u: goto label_300cd4;
            case 0x300CD8u: goto label_300cd8;
            case 0x300CDCu: goto label_300cdc;
            case 0x300CE0u: goto label_300ce0;
            case 0x300CE4u: goto label_300ce4;
            case 0x300CE8u: goto label_300ce8;
            case 0x300CECu: goto label_300cec;
            case 0x300CF0u: goto label_300cf0;
            case 0x300CF4u: goto label_300cf4;
            case 0x300CF8u: goto label_300cf8;
            case 0x300CFCu: goto label_300cfc;
            case 0x300D00u: goto label_300d00;
            case 0x300D04u: goto label_300d04;
            case 0x300D08u: goto label_300d08;
            case 0x300D0Cu: goto label_300d0c;
            case 0x300D10u: goto label_300d10;
            case 0x300D14u: goto label_300d14;
            case 0x300D18u: goto label_300d18;
            case 0x300D1Cu: goto label_300d1c;
            case 0x300D20u: goto label_300d20;
            case 0x300D24u: goto label_300d24;
            case 0x300D28u: goto label_300d28;
            case 0x300D2Cu: goto label_300d2c;
            case 0x300D30u: goto label_300d30;
            case 0x300D34u: goto label_300d34;
            case 0x300D38u: goto label_300d38;
            case 0x300D3Cu: goto label_300d3c;
            case 0x300D40u: goto label_300d40;
            case 0x300D44u: goto label_300d44;
            case 0x300D48u: goto label_300d48;
            case 0x300D4Cu: goto label_300d4c;
            case 0x300D50u: goto label_300d50;
            case 0x300D54u: goto label_300d54;
            case 0x300D58u: goto label_300d58;
            case 0x300D5Cu: goto label_300d5c;
            case 0x300D60u: goto label_300d60;
            case 0x300D64u: goto label_300d64;
            case 0x300D68u: goto label_300d68;
            case 0x300D6Cu: goto label_300d6c;
            case 0x300D70u: goto label_300d70;
            case 0x300D74u: goto label_300d74;
            case 0x300D78u: goto label_300d78;
            case 0x300D7Cu: goto label_300d7c;
            case 0x300D80u: goto label_300d80;
            case 0x300D84u: goto label_300d84;
            case 0x300D88u: goto label_300d88;
            case 0x300D8Cu: goto label_300d8c;
            case 0x300D90u: goto label_300d90;
            case 0x300D94u: goto label_300d94;
            case 0x300D98u: goto label_300d98;
            case 0x300D9Cu: goto label_300d9c;
            case 0x300DA0u: goto label_300da0;
            case 0x300DA4u: goto label_300da4;
            case 0x300DA8u: goto label_300da8;
            case 0x300DACu: goto label_300dac;
            case 0x300DB0u: goto label_300db0;
            case 0x300DB4u: goto label_300db4;
            case 0x300DB8u: goto label_300db8;
            case 0x300DBCu: goto label_300dbc;
            case 0x300DC0u: goto label_300dc0;
            case 0x300DC4u: goto label_300dc4;
            case 0x300DC8u: goto label_300dc8;
            case 0x300DCCu: goto label_300dcc;
            case 0x300DD0u: goto label_300dd0;
            case 0x300DD4u: goto label_300dd4;
            case 0x300DD8u: goto label_300dd8;
            case 0x300DDCu: goto label_300ddc;
            case 0x300DE0u: goto label_300de0;
            case 0x300DE4u: goto label_300de4;
            case 0x300DE8u: goto label_300de8;
            case 0x300DECu: goto label_300dec;
            case 0x300DF0u: goto label_300df0;
            case 0x300DF4u: goto label_300df4;
            case 0x300DF8u: goto label_300df8;
            case 0x300DFCu: goto label_300dfc;
            case 0x300E00u: goto label_300e00;
            case 0x300E04u: goto label_300e04;
            case 0x300E08u: goto label_300e08;
            case 0x300E0Cu: goto label_300e0c;
            case 0x300E10u: goto label_300e10;
            case 0x300E14u: goto label_300e14;
            case 0x300E18u: goto label_300e18;
            case 0x300E1Cu: goto label_300e1c;
            case 0x300E20u: goto label_300e20;
            case 0x300E24u: goto label_300e24;
            case 0x300E28u: goto label_300e28;
            case 0x300E2Cu: goto label_300e2c;
            case 0x300E30u: goto label_300e30;
            case 0x300E34u: goto label_300e34;
            case 0x300E38u: goto label_300e38;
            case 0x300E3Cu: goto label_300e3c;
            case 0x300E40u: goto label_300e40;
            case 0x300E44u: goto label_300e44;
            case 0x300E48u: goto label_300e48;
            case 0x300E4Cu: goto label_300e4c;
            case 0x300E50u: goto label_300e50;
            case 0x300E54u: goto label_300e54;
            case 0x300E58u: goto label_300e58;
            case 0x300E5Cu: goto label_300e5c;
            case 0x300E60u: goto label_300e60;
            case 0x300E64u: goto label_300e64;
            case 0x300E68u: goto label_300e68;
            case 0x300E6Cu: goto label_300e6c;
            case 0x300E70u: goto label_300e70;
            case 0x300E74u: goto label_300e74;
            case 0x300E78u: goto label_300e78;
            case 0x300E7Cu: goto label_300e7c;
            case 0x300E80u: goto label_300e80;
            case 0x300E84u: goto label_300e84;
            case 0x300E88u: goto label_300e88;
            case 0x300E8Cu: goto label_300e8c;
            case 0x300E90u: goto label_300e90;
            case 0x300E94u: goto label_300e94;
            case 0x300E98u: goto label_300e98;
            case 0x300E9Cu: goto label_300e9c;
            case 0x300EA0u: goto label_300ea0;
            case 0x300EA4u: goto label_300ea4;
            case 0x300EA8u: goto label_300ea8;
            case 0x300EACu: goto label_300eac;
            case 0x300EB0u: goto label_300eb0;
            case 0x300EB4u: goto label_300eb4;
            case 0x300EB8u: goto label_300eb8;
            case 0x300EBCu: goto label_300ebc;
            case 0x300EC0u: goto label_300ec0;
            case 0x300EC4u: goto label_300ec4;
            case 0x300EC8u: goto label_300ec8;
            case 0x300ECCu: goto label_300ecc;
            case 0x300ED0u: goto label_300ed0;
            case 0x300ED4u: goto label_300ed4;
            case 0x300ED8u: goto label_300ed8;
            case 0x300EDCu: goto label_300edc;
            case 0x300EE0u: goto label_300ee0;
            case 0x300EE4u: goto label_300ee4;
            case 0x300EE8u: goto label_300ee8;
            case 0x300EECu: goto label_300eec;
            case 0x300EF0u: goto label_300ef0;
            case 0x300EF4u: goto label_300ef4;
            case 0x300EF8u: goto label_300ef8;
            case 0x300EFCu: goto label_300efc;
            case 0x300F00u: goto label_300f00;
            case 0x300F04u: goto label_300f04;
            case 0x300F08u: goto label_300f08;
            case 0x300F0Cu: goto label_300f0c;
            case 0x300F10u: goto label_300f10;
            case 0x300F14u: goto label_300f14;
            case 0x300F18u: goto label_300f18;
            case 0x300F1Cu: goto label_300f1c;
            case 0x300F20u: goto label_300f20;
            case 0x300F24u: goto label_300f24;
            case 0x300F28u: goto label_300f28;
            case 0x300F2Cu: goto label_300f2c;
            case 0x300F30u: goto label_300f30;
            case 0x300F34u: goto label_300f34;
            case 0x300F38u: goto label_300f38;
            case 0x300F3Cu: goto label_300f3c;
            case 0x300F40u: goto label_300f40;
            case 0x300F44u: goto label_300f44;
            case 0x300F48u: goto label_300f48;
            case 0x300F4Cu: goto label_300f4c;
            case 0x300F50u: goto label_300f50;
            case 0x300F54u: goto label_300f54;
            case 0x300F58u: goto label_300f58;
            case 0x300F5Cu: goto label_300f5c;
            case 0x300F60u: goto label_300f60;
            case 0x300F64u: goto label_300f64;
            case 0x300F68u: goto label_300f68;
            case 0x300F6Cu: goto label_300f6c;
            case 0x300F70u: goto label_300f70;
            case 0x300F74u: goto label_300f74;
            case 0x300F78u: goto label_300f78;
            case 0x300F7Cu: goto label_300f7c;
            case 0x300F80u: goto label_300f80;
            case 0x300F84u: goto label_300f84;
            case 0x300F88u: goto label_300f88;
            case 0x300F8Cu: goto label_300f8c;
            case 0x300F90u: goto label_300f90;
            case 0x300F94u: goto label_300f94;
            case 0x300F98u: goto label_300f98;
            case 0x300F9Cu: goto label_300f9c;
            case 0x300FA0u: goto label_300fa0;
            case 0x300FA4u: goto label_300fa4;
            case 0x300FA8u: goto label_300fa8;
            case 0x300FACu: goto label_300fac;
            case 0x300FB0u: goto label_300fb0;
            case 0x300FB4u: goto label_300fb4;
            case 0x300FB8u: goto label_300fb8;
            case 0x300FBCu: goto label_300fbc;
            case 0x300FC0u: goto label_300fc0;
            case 0x300FC4u: goto label_300fc4;
            case 0x300FC8u: goto label_300fc8;
            case 0x300FCCu: goto label_300fcc;
            case 0x300FD0u: goto label_300fd0;
            case 0x300FD4u: goto label_300fd4;
            case 0x300FD8u: goto label_300fd8;
            case 0x300FDCu: goto label_300fdc;
            case 0x300FE0u: goto label_300fe0;
            case 0x300FE4u: goto label_300fe4;
            case 0x300FE8u: goto label_300fe8;
            case 0x300FECu: goto label_300fec;
            case 0x300FF0u: goto label_300ff0;
            case 0x300FF4u: goto label_300ff4;
            case 0x300FF8u: goto label_300ff8;
            case 0x300FFCu: goto label_300ffc;
            case 0x301000u: goto label_301000;
            case 0x301004u: goto label_301004;
            case 0x301008u: goto label_301008;
            case 0x30100Cu: goto label_30100c;
            case 0x301010u: goto label_301010;
            case 0x301014u: goto label_301014;
            case 0x301018u: goto label_301018;
            case 0x30101Cu: goto label_30101c;
            case 0x301020u: goto label_301020;
            case 0x301024u: goto label_301024;
            case 0x301028u: goto label_301028;
            case 0x30102Cu: goto label_30102c;
            case 0x301030u: goto label_301030;
            case 0x301034u: goto label_301034;
            case 0x301038u: goto label_301038;
            case 0x30103Cu: goto label_30103c;
            case 0x301040u: goto label_301040;
            case 0x301044u: goto label_301044;
            case 0x301048u: goto label_301048;
            case 0x30104Cu: goto label_30104c;
            case 0x301050u: goto label_301050;
            case 0x301054u: goto label_301054;
            case 0x301058u: goto label_301058;
            case 0x30105Cu: goto label_30105c;
            case 0x301060u: goto label_301060;
            case 0x301064u: goto label_301064;
            case 0x301068u: goto label_301068;
            case 0x30106Cu: goto label_30106c;
            case 0x301070u: goto label_301070;
            case 0x301074u: goto label_301074;
            case 0x301078u: goto label_301078;
            case 0x30107Cu: goto label_30107c;
            case 0x301080u: goto label_301080;
            case 0x301084u: goto label_301084;
            case 0x301088u: goto label_301088;
            case 0x30108Cu: goto label_30108c;
            case 0x301090u: goto label_301090;
            case 0x301094u: goto label_301094;
            case 0x301098u: goto label_301098;
            case 0x30109Cu: goto label_30109c;
            case 0x3010A0u: goto label_3010a0;
            case 0x3010A4u: goto label_3010a4;
            case 0x3010A8u: goto label_3010a8;
            case 0x3010ACu: goto label_3010ac;
            case 0x3010B0u: goto label_3010b0;
            case 0x3010B4u: goto label_3010b4;
            case 0x3010B8u: goto label_3010b8;
            case 0x3010BCu: goto label_3010bc;
            case 0x3010C0u: goto label_3010c0;
            case 0x3010C4u: goto label_3010c4;
            case 0x3010C8u: goto label_3010c8;
            case 0x3010CCu: goto label_3010cc;
            case 0x3010D0u: goto label_3010d0;
            case 0x3010D4u: goto label_3010d4;
            case 0x3010D8u: goto label_3010d8;
            case 0x3010DCu: goto label_3010dc;
            case 0x3010E0u: goto label_3010e0;
            case 0x3010E4u: goto label_3010e4;
            case 0x3010E8u: goto label_3010e8;
            case 0x3010ECu: goto label_3010ec;
            case 0x3010F0u: goto label_3010f0;
            case 0x3010F4u: goto label_3010f4;
            case 0x3010F8u: goto label_3010f8;
            case 0x3010FCu: goto label_3010fc;
            case 0x301100u: goto label_301100;
            case 0x301104u: goto label_301104;
            case 0x301108u: goto label_301108;
            case 0x30110Cu: goto label_30110c;
            case 0x301110u: goto label_301110;
            case 0x301114u: goto label_301114;
            case 0x301118u: goto label_301118;
            case 0x30111Cu: goto label_30111c;
            case 0x301120u: goto label_301120;
            case 0x301124u: goto label_301124;
            case 0x301128u: goto label_301128;
            case 0x30112Cu: goto label_30112c;
            case 0x301130u: goto label_301130;
            case 0x301134u: goto label_301134;
            case 0x301138u: goto label_301138;
            case 0x30113Cu: goto label_30113c;
            case 0x301140u: goto label_301140;
            case 0x301144u: goto label_301144;
            case 0x301148u: goto label_301148;
            case 0x30114Cu: goto label_30114c;
            case 0x301150u: goto label_301150;
            case 0x301154u: goto label_301154;
            case 0x301158u: goto label_301158;
            case 0x30115Cu: goto label_30115c;
            case 0x301160u: goto label_301160;
            case 0x301164u: goto label_301164;
            case 0x301168u: goto label_301168;
            case 0x30116Cu: goto label_30116c;
            case 0x301170u: goto label_301170;
            case 0x301174u: goto label_301174;
            case 0x301178u: goto label_301178;
            case 0x30117Cu: goto label_30117c;
            case 0x301180u: goto label_301180;
            case 0x301184u: goto label_301184;
            case 0x301188u: goto label_301188;
            case 0x30118Cu: goto label_30118c;
            case 0x301190u: goto label_301190;
            case 0x301194u: goto label_301194;
            case 0x301198u: goto label_301198;
            case 0x30119Cu: goto label_30119c;
            case 0x3011A0u: goto label_3011a0;
            case 0x3011A4u: goto label_3011a4;
            case 0x3011A8u: goto label_3011a8;
            case 0x3011ACu: goto label_3011ac;
            case 0x3011B0u: goto label_3011b0;
            case 0x3011B4u: goto label_3011b4;
            case 0x3011B8u: goto label_3011b8;
            case 0x3011BCu: goto label_3011bc;
            case 0x3011C0u: goto label_3011c0;
            case 0x3011C4u: goto label_3011c4;
            case 0x3011C8u: goto label_3011c8;
            case 0x3011CCu: goto label_3011cc;
            case 0x3011D0u: goto label_3011d0;
            case 0x3011D4u: goto label_3011d4;
            case 0x3011D8u: goto label_3011d8;
            case 0x3011DCu: goto label_3011dc;
            case 0x3011E0u: goto label_3011e0;
            case 0x3011E4u: goto label_3011e4;
            case 0x3011E8u: goto label_3011e8;
            case 0x3011ECu: goto label_3011ec;
            case 0x3011F0u: goto label_3011f0;
            case 0x3011F4u: goto label_3011f4;
            case 0x3011F8u: goto label_3011f8;
            case 0x3011FCu: goto label_3011fc;
            case 0x301200u: goto label_301200;
            case 0x301204u: goto label_301204;
            case 0x301208u: goto label_301208;
            case 0x30120Cu: goto label_30120c;
            case 0x301210u: goto label_301210;
            case 0x301214u: goto label_301214;
            case 0x301218u: goto label_301218;
            case 0x30121Cu: goto label_30121c;
            case 0x301220u: goto label_301220;
            case 0x301224u: goto label_301224;
            case 0x301228u: goto label_301228;
            case 0x30122Cu: goto label_30122c;
            case 0x301230u: goto label_301230;
            case 0x301234u: goto label_301234;
            case 0x301238u: goto label_301238;
            case 0x30123Cu: goto label_30123c;
            case 0x301240u: goto label_301240;
            case 0x301244u: goto label_301244;
            case 0x301248u: goto label_301248;
            case 0x30124Cu: goto label_30124c;
            case 0x301250u: goto label_301250;
            case 0x301254u: goto label_301254;
            case 0x301258u: goto label_301258;
            case 0x30125Cu: goto label_30125c;
            case 0x301260u: goto label_301260;
            case 0x301264u: goto label_301264;
            case 0x301268u: goto label_301268;
            case 0x30126Cu: goto label_30126c;
            case 0x301270u: goto label_301270;
            case 0x301274u: goto label_301274;
            case 0x301278u: goto label_301278;
            case 0x30127Cu: goto label_30127c;
            case 0x301280u: goto label_301280;
            case 0x301284u: goto label_301284;
            case 0x301288u: goto label_301288;
            case 0x30128Cu: goto label_30128c;
            case 0x301290u: goto label_301290;
            case 0x301294u: goto label_301294;
            case 0x301298u: goto label_301298;
            case 0x30129Cu: goto label_30129c;
            case 0x3012A0u: goto label_3012a0;
            case 0x3012A4u: goto label_3012a4;
            case 0x3012A8u: goto label_3012a8;
            case 0x3012ACu: goto label_3012ac;
            case 0x3012B0u: goto label_3012b0;
            case 0x3012B4u: goto label_3012b4;
            case 0x3012B8u: goto label_3012b8;
            case 0x3012BCu: goto label_3012bc;
            case 0x3012C0u: goto label_3012c0;
            case 0x3012C4u: goto label_3012c4;
            case 0x3012C8u: goto label_3012c8;
            case 0x3012CCu: goto label_3012cc;
            case 0x3012D0u: goto label_3012d0;
            case 0x3012D4u: goto label_3012d4;
            case 0x3012D8u: goto label_3012d8;
            case 0x3012DCu: goto label_3012dc;
            case 0x3012E0u: goto label_3012e0;
            case 0x3012E4u: goto label_3012e4;
            case 0x3012E8u: goto label_3012e8;
            case 0x3012ECu: goto label_3012ec;
            case 0x3012F0u: goto label_3012f0;
            case 0x3012F4u: goto label_3012f4;
            case 0x3012F8u: goto label_3012f8;
            case 0x3012FCu: goto label_3012fc;
            case 0x301300u: goto label_301300;
            case 0x301304u: goto label_301304;
            case 0x301308u: goto label_301308;
            case 0x30130Cu: goto label_30130c;
            case 0x301310u: goto label_301310;
            case 0x301314u: goto label_301314;
            case 0x301318u: goto label_301318;
            case 0x30131Cu: goto label_30131c;
            case 0x301320u: goto label_301320;
            case 0x301324u: goto label_301324;
            case 0x301328u: goto label_301328;
            case 0x30132Cu: goto label_30132c;
            case 0x301330u: goto label_301330;
            case 0x301334u: goto label_301334;
            case 0x301338u: goto label_301338;
            case 0x30133Cu: goto label_30133c;
            case 0x301340u: goto label_301340;
            case 0x301344u: goto label_301344;
            case 0x301348u: goto label_301348;
            case 0x30134Cu: goto label_30134c;
            case 0x301350u: goto label_301350;
            case 0x301354u: goto label_301354;
            case 0x301358u: goto label_301358;
            case 0x30135Cu: goto label_30135c;
            case 0x301360u: goto label_301360;
            case 0x301364u: goto label_301364;
            case 0x301368u: goto label_301368;
            case 0x30136Cu: goto label_30136c;
            case 0x301370u: goto label_301370;
            case 0x301374u: goto label_301374;
            case 0x301378u: goto label_301378;
            case 0x30137Cu: goto label_30137c;
            case 0x301380u: goto label_301380;
            case 0x301384u: goto label_301384;
            case 0x301388u: goto label_301388;
            case 0x30138Cu: goto label_30138c;
            case 0x301390u: goto label_301390;
            case 0x301394u: goto label_301394;
            case 0x301398u: goto label_301398;
            case 0x30139Cu: goto label_30139c;
            case 0x3013A0u: goto label_3013a0;
            case 0x3013A4u: goto label_3013a4;
            case 0x3013A8u: goto label_3013a8;
            case 0x3013ACu: goto label_3013ac;
            case 0x3013B0u: goto label_3013b0;
            case 0x3013B4u: goto label_3013b4;
            case 0x3013B8u: goto label_3013b8;
            case 0x3013BCu: goto label_3013bc;
            case 0x3013C0u: goto label_3013c0;
            case 0x3013C4u: goto label_3013c4;
            case 0x3013C8u: goto label_3013c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3005F0u;
label_3005f0:
    // 0x3005f0: 0x2404ffff
    ctx->pc = 0x3005f0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_3005f4:
    // 0x3005f4: 0x2402ffff
    ctx->pc = 0x3005f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_3005f8:
    // 0x3005f8: 0xafa40028
    ctx->pc = 0x3005f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_3005fc:
    // 0x3005fc: 0x24140012
    ctx->pc = 0x3005fcu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 18));
label_300600:
    // 0x300600: 0xafa20020
    ctx->pc = 0x300600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_300604:
    // 0x300604: 0x10000013
label_300608:
    if (ctx->pc == 0x300608u) {
        ctx->pc = 0x300608u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x30060Cu;
        goto label_30060c;
    }
    ctx->pc = 0x300604u;
    {
        const bool branch_taken_0x300604 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x300608u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        if (branch_taken_0x300604) {
            ctx->pc = 0x300654u;
            goto label_300654;
        }
    }
    ctx->pc = 0x30060Cu;
label_30060c:
    // 0x30060c: 0xafa00034
    ctx->pc = 0x30060cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_300610:
    // 0x300610: 0x8fa3000c
    ctx->pc = 0x300610u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_300614:
    // 0x300614: 0x24140001
    ctx->pc = 0x300614u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
label_300618:
    // 0x300618: 0x3102a
    ctx->pc = 0x300618u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 3)));
label_30061c:
    // 0x30061c: 0x62a00b
    ctx->pc = 0x30061cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 3));
label_300620:
    // 0x300620: 0xafb4000c
    ctx->pc = 0x300620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 20));
label_300624:
    // 0x300624: 0xafb40028
    ctx->pc = 0x300624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 20));
label_300628:
    // 0x300628: 0x1000000a
label_30062c:
    if (ctx->pc == 0x30062Cu) {
        ctx->pc = 0x30062Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
        ctx->pc = 0x300630u;
        goto label_300630;
    }
    ctx->pc = 0x300628u;
    {
        const bool branch_taken_0x300628 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x30062Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
        if (branch_taken_0x300628) {
            ctx->pc = 0x300654u;
            goto label_300654;
        }
    }
    ctx->pc = 0x300630u;
label_300630:
    // 0x300630: 0xafa00034
    ctx->pc = 0x300630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_300634:
    // 0x300634: 0x8fa4000c
    ctx->pc = 0x300634u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_300638:
    // 0x300638: 0x24030001
    ctx->pc = 0x300638u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_30063c:
    // 0x30063c: 0x931021
    ctx->pc = 0x30063cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_300640:
    // 0x300640: 0x24540001
    ctx->pc = 0x300640u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 1));
label_300644:
    // 0x300644: 0xafa20028
    ctx->pc = 0x300644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_300648:
    // 0x300648: 0xafb40020
    ctx->pc = 0x300648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 20));
label_30064c:
    // 0x30064c: 0x14102a
    ctx->pc = 0x30064cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 20)));
label_300650:
    // 0x300650: 0x62a00a
    ctx->pc = 0x300650u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 3));
label_300654:
    // 0x300654: 0x24100004
    ctx->pc = 0x300654u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4));
label_300658:
    // 0x300658: 0x2e820018
    ctx->pc = 0x300658u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 20), 24));
label_30065c:
    // 0x30065c: 0x1440000e
label_300660:
    if (ctx->pc == 0x300660u) {
        ctx->pc = 0x300660u;
        WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 0));
        ctx->pc = 0x300664u;
        goto label_300664;
    }
    ctx->pc = 0x30065Cu;
    {
        const bool branch_taken_0x30065c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x300660u;
        WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 0));
        if (branch_taken_0x30065c) {
            ctx->pc = 0x300698u;
            goto label_300698;
        }
    }
    ctx->pc = 0x300664u;
label_300664:
    // 0x300664: 0x8fa20020
    ctx->pc = 0x300664u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_300668:
    // 0x300668: 0x2c51000f
    ctx->pc = 0x300668u;
    SET_GPR_U32(ctx, 17, SLTU32(GPR_U32(ctx, 2), 15));
label_30066c:
    // 0x30066c: 0x0
    ctx->pc = 0x30066cu;
    // NOP
label_300670:
    // 0x300670: 0x8fc30044
    ctx->pc = 0x300670u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 68)));
label_300674:
    // 0x300674: 0x108040
    ctx->pc = 0x300674u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 1));
label_300678:
    // 0x300678: 0x26020014
    ctx->pc = 0x300678u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 20));
label_30067c:
    // 0x30067c: 0x24630001
    ctx->pc = 0x30067cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
label_300680:
    // 0x300680: 0x282102b
    ctx->pc = 0x300680u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_300684:
    // 0x300684: 0xafc30044
    ctx->pc = 0x300684u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 3));
label_300688:
    // 0x300688: 0x1040fff9
label_30068c:
    if (ctx->pc == 0x30068Cu) {
        ctx->pc = 0x300690u;
        goto label_300690;
    }
    ctx->pc = 0x300688u;
    {
        const bool branch_taken_0x300688 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x300688) {
            ctx->pc = 0x300670u;
            goto label_300670;
        }
    }
    ctx->pc = 0x300690u;
label_300690:
    // 0x300690: 0x10000004
label_300694:
    if (ctx->pc == 0x300694u) {
        ctx->pc = 0x300694u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 68)));
        ctx->pc = 0x300698u;
        goto label_300698;
    }
    ctx->pc = 0x300690u;
    {
        const bool branch_taken_0x300690 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x300694u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 68)));
        if (branch_taken_0x300690) {
            ctx->pc = 0x3006A4u;
            goto label_3006a4;
        }
    }
    ctx->pc = 0x300698u;
label_300698:
    // 0x300698: 0x8fa30020
    ctx->pc = 0x300698u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_30069c:
    // 0x30069c: 0x2c71000f
    ctx->pc = 0x30069cu;
    SET_GPR_U32(ctx, 17, SLTU32(GPR_U32(ctx, 3), 15));
label_3006a0:
    // 0x3006a0: 0x8fc50044
    ctx->pc = 0x3006a0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 68)));
label_3006a4:
    // 0x3006a4: 0xc0c0808
label_3006a8:
    if (ctx->pc == 0x3006A8u) {
        ctx->pc = 0x3006A8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3006ACu;
        goto label_3006ac;
    }
    ctx->pc = 0x3006A4u;
    SET_GPR_U32(ctx, 31, 0x3006ACu);
    ctx->pc = 0x3006A8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x302020u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x302020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3006ACu; }
    }
    if (ctx->pc != 0x3006ACu) { return; }
    ctx->pc = 0x3006ACu;
label_3006ac:
    // 0x3006ac: 0xafa20058
    ctx->pc = 0x3006acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_3006b0:
    // 0x3006b0: 0xafc20040
    ctx->pc = 0x3006b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 2));
label_3006b4:
    // 0x3006b4: 0x12200102
label_3006b8:
    if (ctx->pc == 0x3006B8u) {
        ctx->pc = 0x3006B8u;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->pc = 0x3006BCu;
        goto label_3006bc;
    }
    ctx->pc = 0x3006B4u;
    {
        const bool branch_taken_0x3006b4 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x3006B8u;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 29), 88)));
        if (branch_taken_0x3006b4) {
            ctx->pc = 0x300AC0u;
            goto label_300ac0;
        }
    }
    ctx->pc = 0x3006BCu;
label_3006bc:
    // 0x3006bc: 0x12400100
label_3006c0:
    if (ctx->pc == 0x3006C0u) {
        ctx->pc = 0x3006C0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x3006C4u;
        goto label_3006c4;
    }
    ctx->pc = 0x3006BCu;
    {
        const bool branch_taken_0x3006bc = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x3006C0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x3006bc) {
            ctx->pc = 0x300AC0u;
            goto label_300ac0;
        }
    }
    ctx->pc = 0x3006C4u;
label_3006c4:
    // 0x3006c4: 0x2c0b82d
    ctx->pc = 0x3006c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3006c8:
    // 0x3006c8: 0xafb3002c
    ctx->pc = 0x3006c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 19));
label_3006cc:
    // 0x3006cc: 0x24140002
    ctx->pc = 0x3006ccu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 2));
label_3006d0:
    // 0x3006d0: 0x1a600024
label_3006d4:
    if (ctx->pc == 0x3006D4u) {
        ctx->pc = 0x3006D4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
        ctx->pc = 0x3006D8u;
        goto label_3006d8;
    }
    ctx->pc = 0x3006D0u;
    {
        const bool branch_taken_0x3006d0 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x3006D4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
        if (branch_taken_0x3006d0) {
            ctx->pc = 0x300764u;
            goto label_300764;
        }
    }
    ctx->pc = 0x3006D8u;
label_3006d8:
    // 0x3006d8: 0x3c02003c
    ctx->pc = 0x3006d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_3006dc:
    // 0x3006dc: 0x3263000f
    ctx->pc = 0x3006dcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 19), 15));
label_3006e0:
    // 0x3006e0: 0x2442ac20
    ctx->pc = 0x3006e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294945824));
label_3006e4:
    // 0x3006e4: 0x318c0
    ctx->pc = 0x3006e4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
label_3006e8:
    // 0x3006e8: 0x621821
    ctx->pc = 0x3006e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3006ec:
    // 0x3006ec: 0x138103
    ctx->pc = 0x3006ecu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 19), 4));
label_3006f0:
    // 0x3006f0: 0x32020010
    ctx->pc = 0x3006f0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 16));
label_3006f4:
    // 0x3006f4: 0x10400008
label_3006f8:
    if (ctx->pc == 0x3006F8u) {
        ctx->pc = 0x3006F8u;
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x3006FCu;
        goto label_3006fc;
    }
    ctx->pc = 0x3006F4u;
    {
        const bool branch_taken_0x3006f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x3006F8u;
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x3006f4) {
            ctx->pc = 0x300718u;
            goto label_300718;
        }
    }
    ctx->pc = 0x3006FCu;
label_3006fc:
    // 0x3006fc: 0x3c02003c
    ctx->pc = 0x3006fcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_300700:
    // 0x300700: 0x2c0202d
    ctx->pc = 0x300700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_300704:
    // 0x300704: 0xdc45ad08
    ctx->pc = 0x300704u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294946056)));
label_300708:
    // 0x300708: 0x3210000f
    ctx->pc = 0x300708u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), 15));
label_30070c:
    // 0x30070c: 0xc0be41a
label_300710:
    if (ctx->pc == 0x300710u) {
        ctx->pc = 0x300710u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x300714u;
        goto label_300714;
    }
    ctx->pc = 0x30070Cu;
    SET_GPR_U32(ctx, 31, 0x300714u);
    ctx->pc = 0x300710u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x2F9068u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x2f9068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300714u; }
    }
    if (ctx->pc != 0x300714u) { return; }
    ctx->pc = 0x300714u;
label_300714:
    // 0x300714: 0x40b02d
    ctx->pc = 0x300714u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300718:
    // 0x300718: 0x1200000d
label_30071c:
    if (ctx->pc == 0x30071Cu) {
        ctx->pc = 0x30071Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x300720u;
        goto label_300720;
    }
    ctx->pc = 0x300718u;
    {
        const bool branch_taken_0x300718 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x30071Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x300718) {
            ctx->pc = 0x300750u;
            goto label_300750;
        }
    }
    ctx->pc = 0x300720u;
label_300720:
    // 0x300720: 0x2451ace8
    ctx->pc = 0x300720u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294946024));
label_300724:
    // 0x300724: 0x0
    ctx->pc = 0x300724u;
    // NOP
label_300728:
    // 0x300728: 0x32020001
    ctx->pc = 0x300728u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 1));
label_30072c:
    // 0x30072c: 0x10400005
label_300730:
    if (ctx->pc == 0x300730u) {
        ctx->pc = 0x300730u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300734u;
        goto label_300734;
    }
    ctx->pc = 0x30072Cu;
    {
        const bool branch_taken_0x30072c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x300730u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x30072c) {
            ctx->pc = 0x300744u;
            goto label_300744;
        }
    }
    ctx->pc = 0x300734u;
label_300734:
    // 0x300734: 0xde250000
    ctx->pc = 0x300734u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_300738:
    // 0x300738: 0xc0be370
label_30073c:
    if (ctx->pc == 0x30073Cu) {
        ctx->pc = 0x30073Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x300740u;
        goto label_300740;
    }
    ctx->pc = 0x300738u;
    SET_GPR_U32(ctx, 31, 0x300740u);
    ctx->pc = 0x30073Cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x2F8DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x2f8dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300740u; }
    }
    if (ctx->pc != 0x300740u) { return; }
    ctx->pc = 0x300740u;
label_300740:
    // 0x300740: 0x40902d
    ctx->pc = 0x300740u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300744:
    // 0x300744: 0x108043
    ctx->pc = 0x300744u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
label_300748:
    // 0x300748: 0x1600fff7
label_30074c:
    if (ctx->pc == 0x30074Cu) {
        ctx->pc = 0x30074Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x300750u;
        goto label_300750;
    }
    ctx->pc = 0x300748u;
    {
        const bool branch_taken_0x300748 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x30074Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
        if (branch_taken_0x300748) {
            ctx->pc = 0x300728u;
            goto label_300728;
        }
    }
    ctx->pc = 0x300750u;
label_300750:
    // 0x300750: 0x2c0202d
    ctx->pc = 0x300750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_300754:
    // 0x300754: 0xc0be41a
label_300758:
    if (ctx->pc == 0x300758u) {
        ctx->pc = 0x300758u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30075Cu;
        goto label_30075c;
    }
    ctx->pc = 0x300754u;
    SET_GPR_U32(ctx, 31, 0x30075Cu);
    ctx->pc = 0x300758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F9068u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x2f9068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30075Cu; }
    }
    if (ctx->pc != 0x30075Cu) { return; }
    ctx->pc = 0x30075Cu;
label_30075c:
    // 0x30075c: 0x1000001a
label_300760:
    if (ctx->pc == 0x300760u) {
        ctx->pc = 0x300760u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300764u;
        goto label_300764;
    }
    ctx->pc = 0x30075Cu;
    {
        const bool branch_taken_0x30075c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x300760u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x30075c) {
            ctx->pc = 0x3007C8u;
            goto label_3007c8;
        }
    }
    ctx->pc = 0x300764u;
label_300764:
    // 0x300764: 0x138823
    ctx->pc = 0x300764u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
label_300768:
    // 0x300768: 0x12200017
label_30076c:
    if (ctx->pc == 0x30076Cu) {
        ctx->pc = 0x30076Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        ctx->pc = 0x300770u;
        goto label_300770;
    }
    ctx->pc = 0x300768u;
    {
        const bool branch_taken_0x300768 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x30076Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x300768) {
            ctx->pc = 0x3007C8u;
            goto label_3007c8;
        }
    }
    ctx->pc = 0x300770u;
label_300770:
    // 0x300770: 0x3222000f
    ctx->pc = 0x300770u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 15));
label_300774:
    // 0x300774: 0x2463ac20
    ctx->pc = 0x300774u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294945824));
label_300778:
    // 0x300778: 0x210c0
    ctx->pc = 0x300778u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
label_30077c:
    // 0x30077c: 0x431021
    ctx->pc = 0x30077cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_300780:
    // 0x300780: 0x2c0282d
    ctx->pc = 0x300780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_300784:
    // 0x300784: 0xdc440000
    ctx->pc = 0x300784u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_300788:
    // 0x300788: 0xc0be370
label_30078c:
    if (ctx->pc == 0x30078Cu) {
        ctx->pc = 0x30078Cu;
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 4));
        ctx->pc = 0x300790u;
        goto label_300790;
    }
    ctx->pc = 0x300788u;
    SET_GPR_U32(ctx, 31, 0x300790u);
    ctx->pc = 0x30078Cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 17), 4));
    ctx->pc = 0x2F8DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x2f8dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300790u; }
    }
    if (ctx->pc != 0x300790u) { return; }
    ctx->pc = 0x300790u;
label_300790:
    // 0x300790: 0x1200000d
label_300794:
    if (ctx->pc == 0x300794u) {
        ctx->pc = 0x300794u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300798u;
        goto label_300798;
    }
    ctx->pc = 0x300790u;
    {
        const bool branch_taken_0x300790 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x300794u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x300790) {
            ctx->pc = 0x3007C8u;
            goto label_3007c8;
        }
    }
    ctx->pc = 0x300798u;
label_300798:
    // 0x300798: 0x3c02003c
    ctx->pc = 0x300798u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_30079c:
    // 0x30079c: 0x2451ace8
    ctx->pc = 0x30079cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294946024));
label_3007a0:
    // 0x3007a0: 0x32020001
    ctx->pc = 0x3007a0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 1));
label_3007a4:
    // 0x3007a4: 0x10400005
label_3007a8:
    if (ctx->pc == 0x3007A8u) {
        ctx->pc = 0x3007A8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3007ACu;
        goto label_3007ac;
    }
    ctx->pc = 0x3007A4u;
    {
        const bool branch_taken_0x3007a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x3007A8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x3007a4) {
            ctx->pc = 0x3007BCu;
            goto label_3007bc;
        }
    }
    ctx->pc = 0x3007ACu;
label_3007ac:
    // 0x3007ac: 0xde240000
    ctx->pc = 0x3007acu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_3007b0:
    // 0x3007b0: 0xc0be370
label_3007b4:
    if (ctx->pc == 0x3007B4u) {
        ctx->pc = 0x3007B4u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x3007B8u;
        goto label_3007b8;
    }
    ctx->pc = 0x3007B0u;
    SET_GPR_U32(ctx, 31, 0x3007B8u);
    ctx->pc = 0x3007B4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x2F8DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x2f8dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3007B8u; }
    }
    if (ctx->pc != 0x3007B8u) { return; }
    ctx->pc = 0x3007B8u;
label_3007b8:
    // 0x3007b8: 0x40b02d
    ctx->pc = 0x3007b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3007bc:
    // 0x3007bc: 0x108043
    ctx->pc = 0x3007bcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
label_3007c0:
    // 0x3007c0: 0x1600fff7
label_3007c4:
    if (ctx->pc == 0x3007C4u) {
        ctx->pc = 0x3007C4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x3007C8u;
        goto label_3007c8;
    }
    ctx->pc = 0x3007C0u;
    {
        const bool branch_taken_0x3007c0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x3007C4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 8));
        if (branch_taken_0x3007c0) {
            ctx->pc = 0x3007A0u;
            goto label_3007a0;
        }
    }
    ctx->pc = 0x3007C8u;
label_3007c8:
    // 0x3007c8: 0x8fa20030
    ctx->pc = 0x3007c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3007cc:
    // 0x3007cc: 0x10400014
label_3007d0:
    if (ctx->pc == 0x3007D0u) {
        ctx->pc = 0x3007D4u;
        goto label_3007d4;
    }
    ctx->pc = 0x3007CCu;
    {
        const bool branch_taken_0x3007cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x3007cc) {
            ctx->pc = 0x300820u;
            goto label_300820;
        }
    }
    ctx->pc = 0x3007D4u;
label_3007d4:
    // 0x3007d4: 0x3405ffc0
    ctx->pc = 0x3007d4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65472));
label_3007d8:
    // 0x3007d8: 0x52bbc
    ctx->pc = 0x3007d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
label_3007dc:
    // 0x3007dc: 0xc0be4ba
label_3007e0:
    if (ctx->pc == 0x3007E0u) {
        ctx->pc = 0x3007E0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3007E4u;
        goto label_3007e4;
    }
    ctx->pc = 0x3007DCu;
    SET_GPR_U32(ctx, 31, 0x3007E4u);
    ctx->pc = 0x3007E0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3007E4u; }
    }
    if (ctx->pc != 0x3007E4u) { return; }
    ctx->pc = 0x3007E4u;
label_3007e4:
    // 0x3007e4: 0x441000e
label_3007e8:
    if (ctx->pc == 0x3007E8u) {
        ctx->pc = 0x3007E8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x3007ECu;
        goto label_3007ec;
    }
    ctx->pc = 0x3007E4u;
    {
        const bool branch_taken_0x3007e4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3007E8u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x3007e4) {
            ctx->pc = 0x300820u;
            goto label_300820;
        }
    }
    ctx->pc = 0x3007ECu;
label_3007ec:
    // 0x3007ec: 0x1860000c
label_3007f0:
    if (ctx->pc == 0x3007F0u) {
        ctx->pc = 0x3007F4u;
        goto label_3007f4;
    }
    ctx->pc = 0x3007ECu;
    {
        const bool branch_taken_0x3007ec = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x3007ec) {
            ctx->pc = 0x300820u;
            goto label_300820;
        }
    }
    ctx->pc = 0x3007F4u;
label_3007f4:
    // 0x3007f4: 0x8fa40028
    ctx->pc = 0x3007f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_3007f8:
    // 0x3007f8: 0x188000ac
label_3007fc:
    if (ctx->pc == 0x3007FCu) {
        ctx->pc = 0x3007FCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->pc = 0x300800u;
        goto label_300800;
    }
    ctx->pc = 0x3007F8u;
    {
        const bool branch_taken_0x3007f8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x3007FCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 40)));
        if (branch_taken_0x3007f8) {
            ctx->pc = 0x300AACu;
            goto label_300aac;
        }
    }
    ctx->pc = 0x300800u;
label_300800:
    // 0x300800: 0x2c0282d
    ctx->pc = 0x300800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_300804:
    // 0x300804: 0x34048048
    ctx->pc = 0x300804u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32840));
label_300808:
    // 0x300808: 0x423fc
    ctx->pc = 0x300808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
label_30080c:
    // 0x30080c: 0x2673ffff
    ctx->pc = 0x30080cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
label_300810:
    // 0x300810: 0xafa20020
    ctx->pc = 0x300810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_300814:
    // 0x300814: 0xc0be370
label_300818:
    if (ctx->pc == 0x300818u) {
        ctx->pc = 0x300818u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x30081Cu;
        goto label_30081c;
    }
    ctx->pc = 0x300814u;
    SET_GPR_U32(ctx, 31, 0x30081Cu);
    ctx->pc = 0x300818u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x2F8DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x2f8dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30081Cu; }
    }
    if (ctx->pc != 0x30081Cu) { return; }
    ctx->pc = 0x30081Cu;
label_30081c:
    // 0x30081c: 0x40b02d
    ctx->pc = 0x30081cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300820:
    // 0x300820: 0xc0be4ce
label_300824:
    if (ctx->pc == 0x300824u) {
        ctx->pc = 0x300824u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300828u;
        goto label_300828;
    }
    ctx->pc = 0x300820u;
    SET_GPR_U32(ctx, 31, 0x300828u);
    ctx->pc = 0x300824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F9338u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x2f9338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300828u; }
    }
    if (ctx->pc != 0x300828u) { return; }
    ctx->pc = 0x300828u;
label_300828:
    // 0x300828: 0x40202d
    ctx->pc = 0x300828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30082c:
    // 0x30082c: 0xc0be370
label_300830:
    if (ctx->pc == 0x300830u) {
        ctx->pc = 0x300830u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300834u;
        goto label_300834;
    }
    ctx->pc = 0x30082Cu;
    SET_GPR_U32(ctx, 31, 0x300834u);
    ctx->pc = 0x300830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x2f8dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300834u; }
    }
    if (ctx->pc != 0x300834u) { return; }
    ctx->pc = 0x300834u;
label_300834:
    // 0x300834: 0x34058038
    ctx->pc = 0x300834u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32824));
label_300838:
    // 0x300838: 0x52bfc
    ctx->pc = 0x300838u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_30083c:
    // 0x30083c: 0xc0be340
label_300840:
    if (ctx->pc == 0x300840u) {
        ctx->pc = 0x300840u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300844u;
        goto label_300844;
    }
    ctx->pc = 0x30083Cu;
    SET_GPR_U32(ctx, 31, 0x300844u);
    ctx->pc = 0x300840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x2f8d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300844u; }
    }
    if (ctx->pc != 0x300844u) { return; }
    ctx->pc = 0x300844u;
label_300844:
    // 0x300844: 0x40902d
    ctx->pc = 0x300844u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300848:
    // 0x300848: 0x3c04ffff
    ctx->pc = 0x300848u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
label_30084c:
    // 0x30084c: 0x4203e
    ctx->pc = 0x30084cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_300850:
    // 0x300850: 0x12183f
    ctx->pc = 0x300850u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 18) >> (32 + 0));
label_300854:
    // 0x300854: 0x3c02fcc0
    ctx->pc = 0x300854u;
    SET_GPR_U32(ctx, 2, ((uint32_t)64704 << 16));
label_300858:
    // 0x300858: 0x621821
    ctx->pc = 0x300858u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_30085c:
    // 0x30085c: 0x2449024
    ctx->pc = 0x30085cu;
    SET_GPR_U32(ctx, 18, AND32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_300860:
    // 0x300860: 0x3183c
    ctx->pc = 0x300860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_300864:
    // 0x300864: 0x2439025
    ctx->pc = 0x300864u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_300868:
    // 0x300868: 0x8fa30020
    ctx->pc = 0x300868u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_30086c:
    // 0x30086c: 0x54600017
label_300870:
    if (ctx->pc == 0x300870u) {
        ctx->pc = 0x300870u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->pc = 0x300874u;
        goto label_300874;
    }
    ctx->pc = 0x30086Cu;
    {
        const bool branch_taken_0x30086c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x30086c) {
            ctx->pc = 0x300870u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
            ctx->pc = 0x3008CCu;
            goto label_3008cc;
        }
    }
    ctx->pc = 0x300874u;
label_300874:
    // 0x300874: 0x34058028
    ctx->pc = 0x300874u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32808));
label_300878:
    // 0x300878: 0x52bfc
    ctx->pc = 0x300878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_30087c:
    // 0x30087c: 0x2c0202d
    ctx->pc = 0x30087cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_300880:
    // 0x300880: 0xafa00050
    ctx->pc = 0x300880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_300884:
    // 0x300884: 0xc0be356
label_300888:
    if (ctx->pc == 0x300888u) {
        ctx->pc = 0x300888u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->pc = 0x30088Cu;
        goto label_30088c;
    }
    ctx->pc = 0x300884u;
    SET_GPR_U32(ctx, 31, 0x30088Cu);
    ctx->pc = 0x300888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->pc = 0x2F8D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x2f8d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30088Cu; }
    }
    if (ctx->pc != 0x30088Cu) { return; }
    ctx->pc = 0x30088Cu;
label_30088c:
    // 0x30088c: 0x40802d
    ctx->pc = 0x30088cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300890:
    // 0x300890: 0x240282d
    ctx->pc = 0x300890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_300894:
    // 0x300894: 0xc0be4ba
label_300898:
    if (ctx->pc == 0x300898u) {
        ctx->pc = 0x300898u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30089Cu;
        goto label_30089c;
    }
    ctx->pc = 0x300894u;
    SET_GPR_U32(ctx, 31, 0x30089Cu);
    ctx->pc = 0x300898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30089Cu; }
    }
    if (ctx->pc != 0x30089Cu) { return; }
    ctx->pc = 0x30089Cu;
label_30089c:
    // 0x30089c: 0x1c4001ca
label_3008a0:
    if (ctx->pc == 0x3008A0u) {
        ctx->pc = 0x3008A0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->pc = 0x3008A4u;
        goto label_3008a4;
    }
    ctx->pc = 0x30089Cu;
    {
        const bool branch_taken_0x30089c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x3008A0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 88)));
        if (branch_taken_0x30089c) {
            ctx->pc = 0x300FC8u;
            goto label_300fc8;
        }
    }
    ctx->pc = 0x3008A4u;
label_3008a4:
    // 0x3008a4: 0x240282d
    ctx->pc = 0x3008a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3008a8:
    // 0x3008a8: 0xc0be356
label_3008ac:
    if (ctx->pc == 0x3008ACu) {
        ctx->pc = 0x3008ACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3008B0u;
        goto label_3008b0;
    }
    ctx->pc = 0x3008A8u;
    SET_GPR_U32(ctx, 31, 0x3008B0u);
    ctx->pc = 0x3008ACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x2f8d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3008B0u; }
    }
    if (ctx->pc != 0x3008B0u) { return; }
    ctx->pc = 0x3008B0u;
label_3008b0:
    // 0x3008b0: 0x200202d
    ctx->pc = 0x3008b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3008b4:
    // 0x3008b4: 0xc0be4ba
label_3008b8:
    if (ctx->pc == 0x3008B8u) {
        ctx->pc = 0x3008B8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3008BCu;
        goto label_3008bc;
    }
    ctx->pc = 0x3008B4u;
    SET_GPR_U32(ctx, 31, 0x3008BCu);
    ctx->pc = 0x3008B8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3008BCu; }
    }
    if (ctx->pc != 0x3008BCu) { return; }
    ctx->pc = 0x3008BCu;
label_3008bc:
    // 0x3008bc: 0x44001be
label_3008c0:
    if (ctx->pc == 0x3008C0u) {
        ctx->pc = 0x3008C0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->pc = 0x3008C4u;
        goto label_3008c4;
    }
    ctx->pc = 0x3008BCu;
    {
        const bool branch_taken_0x3008bc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3008C0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        if (branch_taken_0x3008bc) {
            ctx->pc = 0x300FB8u;
            goto label_300fb8;
        }
    }
    ctx->pc = 0x3008C4u;
label_3008c4:
    // 0x3008c4: 0x1000007b
label_3008c8:
    if (ctx->pc == 0x3008C8u) {
        ctx->pc = 0x3008C8u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3008CCu;
        goto label_3008cc;
    }
    ctx->pc = 0x3008C4u;
    {
        const bool branch_taken_0x3008c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3008C8u;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x3008c4) {
            ctx->pc = 0x300AB4u;
            goto label_300ab4;
        }
    }
    ctx->pc = 0x3008CCu;
label_3008cc:
    // 0x3008cc: 0x1080003a
label_3008d0:
    if (ctx->pc == 0x3008D0u) {
        ctx->pc = 0x3008D0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x3008D4u;
        goto label_3008d4;
    }
    ctx->pc = 0x3008CCu;
    {
        const bool branch_taken_0x3008cc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x3008D0u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x3008cc) {
            ctx->pc = 0x3009B8u;
            goto label_3009b8;
        }
    }
    ctx->pc = 0x3008D4u;
label_3008d4:
    // 0x3008d4: 0x3c03003c
    ctx->pc = 0x3008d4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_3008d8:
    // 0x3008d8: 0x2463ac20
    ctx->pc = 0x3008d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294945824));
label_3008dc:
    // 0x3008dc: 0xa02d
    ctx->pc = 0x3008dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3008e0:
    // 0x3008e0: 0x2482ffff
    ctx->pc = 0x3008e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967295));
label_3008e4:
    // 0x3008e4: 0x210c0
    ctx->pc = 0x3008e4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
label_3008e8:
    // 0x3008e8: 0x3404ff80
    ctx->pc = 0x3008e8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65408));
label_3008ec:
    // 0x3008ec: 0x423bc
    ctx->pc = 0x3008ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
label_3008f0:
    // 0x3008f0: 0x431021
    ctx->pc = 0x3008f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3008f4:
    // 0x3008f4: 0xc0be41a
label_3008f8:
    if (ctx->pc == 0x3008F8u) {
        ctx->pc = 0x3008F8u;
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x3008FCu;
        goto label_3008fc;
    }
    ctx->pc = 0x3008F4u;
    SET_GPR_U32(ctx, 31, 0x3008FCu);
    ctx->pc = 0x3008F8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2F9068u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x2f9068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3008FCu; }
    }
    if (ctx->pc != 0x3008FCu) { return; }
    ctx->pc = 0x3008FCu;
label_3008fc:
    // 0x3008fc: 0x240282d
    ctx->pc = 0x3008fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_300900:
    // 0x300900: 0xc0be356
label_300904:
    if (ctx->pc == 0x300904u) {
        ctx->pc = 0x300904u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300908u;
        goto label_300908;
    }
    ctx->pc = 0x300900u;
    SET_GPR_U32(ctx, 31, 0x300908u);
    ctx->pc = 0x300904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x2f8d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300908u; }
    }
    if (ctx->pc != 0x300908u) { return; }
    ctx->pc = 0x300908u;
label_300908:
    // 0x300908: 0x1000000b
label_30090c:
    if (ctx->pc == 0x30090Cu) {
        ctx->pc = 0x30090Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300910u;
        goto label_300910;
    }
    ctx->pc = 0x300908u;
    {
        const bool branch_taken_0x300908 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x30090Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x300908) {
            ctx->pc = 0x300938u;
            goto label_300938;
        }
    }
    ctx->pc = 0x300910u;
label_300910:
    // 0x300910: 0x34048048
    ctx->pc = 0x300910u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32840));
label_300914:
    // 0x300914: 0x423fc
    ctx->pc = 0x300914u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
label_300918:
    // 0x300918: 0xc0be370
label_30091c:
    if (ctx->pc == 0x30091Cu) {
        ctx->pc = 0x30091Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300920u;
        goto label_300920;
    }
    ctx->pc = 0x300918u;
    SET_GPR_U32(ctx, 31, 0x300920u);
    ctx->pc = 0x30091Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x2f8dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300920u; }
    }
    if (ctx->pc != 0x300920u) { return; }
    ctx->pc = 0x300920u;
label_300920:
    // 0x300920: 0x34048048
    ctx->pc = 0x300920u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32840));
label_300924:
    // 0x300924: 0x423fc
    ctx->pc = 0x300924u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
label_300928:
    // 0x300928: 0x40902d
    ctx->pc = 0x300928u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30092c:
    // 0x30092c: 0xc0be370
label_300930:
    if (ctx->pc == 0x300930u) {
        ctx->pc = 0x300930u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300934u;
        goto label_300934;
    }
    ctx->pc = 0x30092Cu;
    SET_GPR_U32(ctx, 31, 0x300934u);
    ctx->pc = 0x300930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x2f8dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300934u; }
    }
    if (ctx->pc != 0x300934u) { return; }
    ctx->pc = 0x300934u;
label_300934:
    // 0x300934: 0x40b02d
    ctx->pc = 0x300934u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300938:
    // 0x300938: 0xc0be4fc
label_30093c:
    if (ctx->pc == 0x30093Cu) {
        ctx->pc = 0x30093Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300940u;
        goto label_300940;
    }
    ctx->pc = 0x300938u;
    SET_GPR_U32(ctx, 31, 0x300940u);
    ctx->pc = 0x30093Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F93F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x2f93f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300940u; }
    }
    if (ctx->pc != 0x300940u) { return; }
    ctx->pc = 0x300940u;
label_300940:
    // 0x300940: 0x40882d
    ctx->pc = 0x300940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300944:
    // 0x300944: 0xc0be4ce
label_300948:
    if (ctx->pc == 0x300948u) {
        ctx->pc = 0x300948u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30094Cu;
        goto label_30094c;
    }
    ctx->pc = 0x300944u;
    SET_GPR_U32(ctx, 31, 0x30094Cu);
    ctx->pc = 0x300948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F9338u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x2f9338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30094Cu; }
    }
    if (ctx->pc != 0x30094Cu) { return; }
    ctx->pc = 0x30094Cu;
label_30094c:
    // 0x30094c: 0x2c0202d
    ctx->pc = 0x30094cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_300950:
    // 0x300950: 0xc0be356
label_300954:
    if (ctx->pc == 0x300954u) {
        ctx->pc = 0x300954u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300958u;
        goto label_300958;
    }
    ctx->pc = 0x300950u;
    SET_GPR_U32(ctx, 31, 0x300958u);
    ctx->pc = 0x300954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x2f8d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300958u; }
    }
    if (ctx->pc != 0x300958u) { return; }
    ctx->pc = 0x300958u;
label_300958:
    // 0x300958: 0x40802d
    ctx->pc = 0x300958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30095c:
    // 0x30095c: 0x240282d
    ctx->pc = 0x30095cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_300960:
    // 0x300960: 0x26220030
    ctx->pc = 0x300960u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 48));
label_300964:
    // 0x300964: 0x200202d
    ctx->pc = 0x300964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_300968:
    // 0x300968: 0xa2a20000
    ctx->pc = 0x300968u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_30096c:
    // 0x30096c: 0xc0be4ba
label_300970:
    if (ctx->pc == 0x300970u) {
        ctx->pc = 0x300970u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x300974u;
        goto label_300974;
    }
    ctx->pc = 0x30096Cu;
    SET_GPR_U32(ctx, 31, 0x300974u);
    ctx->pc = 0x300970u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300974u; }
    }
    if (ctx->pc != 0x300974u) { return; }
    ctx->pc = 0x300974u;
label_300974:
    // 0x300974: 0x442027f
label_300978:
    if (ctx->pc == 0x300978u) {
        ctx->pc = 0x300978u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x30097Cu;
        goto label_30097c;
    }
    ctx->pc = 0x300974u;
    {
        const bool branch_taken_0x300974 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x300974) {
            ctx->pc = 0x300978u;
            SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x301374u;
            goto label_301374;
        }
    }
    ctx->pc = 0x30097Cu;
label_30097c:
    // 0x30097c: 0x3404ffc0
    ctx->pc = 0x30097cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65472));
label_300980:
    // 0x300980: 0x423bc
    ctx->pc = 0x300980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
label_300984:
    // 0x300984: 0xc0be356
label_300988:
    if (ctx->pc == 0x300988u) {
        ctx->pc = 0x300988u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30098Cu;
        goto label_30098c;
    }
    ctx->pc = 0x300984u;
    SET_GPR_U32(ctx, 31, 0x30098Cu);
    ctx->pc = 0x300988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x2f8d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30098Cu; }
    }
    if (ctx->pc != 0x30098Cu) { return; }
    ctx->pc = 0x30098Cu;
label_30098c:
    // 0x30098c: 0x40202d
    ctx->pc = 0x30098cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300990:
    // 0x300990: 0xc0be4ba
label_300994:
    if (ctx->pc == 0x300994u) {
        ctx->pc = 0x300994u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300998u;
        goto label_300998;
    }
    ctx->pc = 0x300990u;
    SET_GPR_U32(ctx, 31, 0x300998u);
    ctx->pc = 0x300994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300998u; }
    }
    if (ctx->pc != 0x300998u) { return; }
    ctx->pc = 0x300998u;
label_300998:
    // 0x300998: 0x4400098
label_30099c:
    if (ctx->pc == 0x30099Cu) {
        ctx->pc = 0x30099Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x3009A0u;
        goto label_3009a0;
    }
    ctx->pc = 0x300998u;
    {
        const bool branch_taken_0x300998 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x30099Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x300998) {
            ctx->pc = 0x300BFCu;
            goto label_300bfc;
        }
    }
    ctx->pc = 0x3009A0u;
label_3009a0:
    // 0x3009a0: 0x26940001
    ctx->pc = 0x3009a0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_3009a4:
    // 0x3009a4: 0x283102a
    ctx->pc = 0x3009a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 3)));
label_3009a8:
    // 0x3009a8: 0x1440ffd9
label_3009ac:
    if (ctx->pc == 0x3009ACu) {
        ctx->pc = 0x3009B0u;
        goto label_3009b0;
    }
    ctx->pc = 0x3009A8u;
    {
        const bool branch_taken_0x3009a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x3009a8) {
            ctx->pc = 0x300910u;
            goto label_300910;
        }
    }
    ctx->pc = 0x3009B0u;
label_3009b0:
    // 0x3009b0: 0x1000003f
label_3009b4:
    if (ctx->pc == 0x3009B4u) {
        ctx->pc = 0x3009B4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->pc = 0x3009B8u;
        goto label_3009b8;
    }
    ctx->pc = 0x3009B0u;
    {
        const bool branch_taken_0x3009b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3009B4u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        if (branch_taken_0x3009b0) {
            ctx->pc = 0x300AB0u;
            goto label_300ab0;
        }
    }
    ctx->pc = 0x3009B8u;
label_3009b8:
    // 0x3009b8: 0x3c03003c
    ctx->pc = 0x3009b8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
label_3009bc:
    // 0x3009bc: 0x2463ac20
    ctx->pc = 0x3009bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294945824));
label_3009c0:
    // 0x3009c0: 0x240282d
    ctx->pc = 0x3009c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3009c4:
    // 0x3009c4: 0x2482ffff
    ctx->pc = 0x3009c4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967295));
label_3009c8:
    // 0x3009c8: 0x24140001
    ctx->pc = 0x3009c8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
label_3009cc:
    // 0x3009cc: 0x210c0
    ctx->pc = 0x3009ccu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
label_3009d0:
    // 0x3009d0: 0x431021
    ctx->pc = 0x3009d0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3009d4:
    // 0x3009d4: 0xc0be370
label_3009d8:
    if (ctx->pc == 0x3009D8u) {
        ctx->pc = 0x3009D8u;
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x3009DCu;
        goto label_3009dc;
    }
    ctx->pc = 0x3009D4u;
    SET_GPR_U32(ctx, 31, 0x3009DCu);
    ctx->pc = 0x3009D8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2F8DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x2f8dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3009DCu; }
    }
    if (ctx->pc != 0x3009DCu) { return; }
    ctx->pc = 0x3009DCu;
label_3009dc:
    // 0x3009dc: 0x10000008
label_3009e0:
    if (ctx->pc == 0x3009E0u) {
        ctx->pc = 0x3009E0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3009E4u;
        goto label_3009e4;
    }
    ctx->pc = 0x3009DCu;
    {
        const bool branch_taken_0x3009dc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3009E0u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x3009dc) {
            ctx->pc = 0x300A00u;
            goto label_300a00;
        }
    }
    ctx->pc = 0x3009E4u;
label_3009e4:
    // 0x3009e4: 0x0
    ctx->pc = 0x3009e4u;
    // NOP
label_3009e8:
    // 0x3009e8: 0x34048048
    ctx->pc = 0x3009e8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32840));
label_3009ec:
    // 0x3009ec: 0x423fc
    ctx->pc = 0x3009ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
label_3009f0:
    // 0x3009f0: 0x200282d
    ctx->pc = 0x3009f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3009f4:
    // 0x3009f4: 0xc0be370
label_3009f8:
    if (ctx->pc == 0x3009F8u) {
        ctx->pc = 0x3009F8u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x3009FCu;
        goto label_3009fc;
    }
    ctx->pc = 0x3009F4u;
    SET_GPR_U32(ctx, 31, 0x3009FCu);
    ctx->pc = 0x3009F8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
    ctx->pc = 0x2F8DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x2f8dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3009FCu; }
    }
    if (ctx->pc != 0x3009FCu) { return; }
    ctx->pc = 0x3009FCu;
label_3009fc:
    // 0x3009fc: 0x40b02d
    ctx->pc = 0x3009fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300a00:
    // 0x300a00: 0xc0be4fc
label_300a04:
    if (ctx->pc == 0x300A04u) {
        ctx->pc = 0x300A04u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300A08u;
        goto label_300a08;
    }
    ctx->pc = 0x300A00u;
    SET_GPR_U32(ctx, 31, 0x300A08u);
    ctx->pc = 0x300A04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F93F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x2f93f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300A08u; }
    }
    if (ctx->pc != 0x300A08u) { return; }
    ctx->pc = 0x300A08u;
label_300a08:
    // 0x300a08: 0x40882d
    ctx->pc = 0x300a08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300a0c:
    // 0x300a0c: 0xc0be4ce
label_300a10:
    if (ctx->pc == 0x300A10u) {
        ctx->pc = 0x300A10u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300A14u;
        goto label_300a14;
    }
    ctx->pc = 0x300A0Cu;
    SET_GPR_U32(ctx, 31, 0x300A14u);
    ctx->pc = 0x300A10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F9338u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x2f9338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300A14u; }
    }
    if (ctx->pc != 0x300A14u) { return; }
    ctx->pc = 0x300A14u;
label_300a14:
    // 0x300a14: 0x2c0202d
    ctx->pc = 0x300a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_300a18:
    // 0x300a18: 0xc0be356
label_300a1c:
    if (ctx->pc == 0x300A1Cu) {
        ctx->pc = 0x300A1Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300A20u;
        goto label_300a20;
    }
    ctx->pc = 0x300A18u;
    SET_GPR_U32(ctx, 31, 0x300A20u);
    ctx->pc = 0x300A1Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x2f8d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300A20u; }
    }
    if (ctx->pc != 0x300A20u) { return; }
    ctx->pc = 0x300A20u;
label_300a20:
    // 0x300a20: 0x40802d
    ctx->pc = 0x300a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300a24:
    // 0x300a24: 0x26220030
    ctx->pc = 0x300a24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 48));
label_300a28:
    // 0x300a28: 0xa2a20000
    ctx->pc = 0x300a28u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_300a2c:
    // 0x300a2c: 0x8fa20020
    ctx->pc = 0x300a2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_300a30:
    // 0x300a30: 0x1682ffed
label_300a34:
    if (ctx->pc == 0x300A34u) {
        ctx->pc = 0x300A34u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x300A38u;
        goto label_300a38;
    }
    ctx->pc = 0x300A30u;
    {
        const bool branch_taken_0x300a30 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 2));
        ctx->pc = 0x300A34u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x300a30) {
            ctx->pc = 0x3009E8u;
            goto label_3009e8;
        }
    }
    ctx->pc = 0x300A38u;
label_300a38:
    // 0x300a38: 0x3404ff80
    ctx->pc = 0x300a38u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65408));
label_300a3c:
    // 0x300a3c: 0x423bc
    ctx->pc = 0x300a3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
label_300a40:
    // 0x300a40: 0xc0be340
label_300a44:
    if (ctx->pc == 0x300A44u) {
        ctx->pc = 0x300A44u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300A48u;
        goto label_300a48;
    }
    ctx->pc = 0x300A40u;
    SET_GPR_U32(ctx, 31, 0x300A48u);
    ctx->pc = 0x300A44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x2f8d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300A48u; }
    }
    if (ctx->pc != 0x300A48u) { return; }
    ctx->pc = 0x300A48u;
label_300a48:
    // 0x300a48: 0x40282d
    ctx->pc = 0x300a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300a4c:
    // 0x300a4c: 0xc0be4ba
label_300a50:
    if (ctx->pc == 0x300A50u) {
        ctx->pc = 0x300A50u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300A54u;
        goto label_300a54;
    }
    ctx->pc = 0x300A4Cu;
    SET_GPR_U32(ctx, 31, 0x300A54u);
    ctx->pc = 0x300A50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300A54u; }
    }
    if (ctx->pc != 0x300A54u) { return; }
    ctx->pc = 0x300A54u;
label_300a54:
    // 0x300a54: 0x5c40006a
label_300a58:
    if (ctx->pc == 0x300A58u) {
        ctx->pc = 0x300A58u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x300A5Cu;
        goto label_300a5c;
    }
    ctx->pc = 0x300A54u;
    {
        const bool branch_taken_0x300a54 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x300a54) {
            ctx->pc = 0x300A58u;
            SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x300C00u;
            goto label_300c00;
        }
    }
    ctx->pc = 0x300A5Cu;
label_300a5c:
    // 0x300a5c: 0x3404ff80
    ctx->pc = 0x300a5cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65408));
label_300a60:
    // 0x300a60: 0x423bc
    ctx->pc = 0x300a60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
label_300a64:
    // 0x300a64: 0xc0be356
label_300a68:
    if (ctx->pc == 0x300A68u) {
        ctx->pc = 0x300A68u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300A6Cu;
        goto label_300a6c;
    }
    ctx->pc = 0x300A64u;
    SET_GPR_U32(ctx, 31, 0x300A6Cu);
    ctx->pc = 0x300A68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x2f8d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300A6Cu; }
    }
    if (ctx->pc != 0x300A6Cu) { return; }
    ctx->pc = 0x300A6Cu;
label_300a6c:
    // 0x300a6c: 0x200202d
    ctx->pc = 0x300a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_300a70:
    // 0x300a70: 0xc0be4ba
label_300a74:
    if (ctx->pc == 0x300A74u) {
        ctx->pc = 0x300A74u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300A78u;
        goto label_300a78;
    }
    ctx->pc = 0x300A70u;
    SET_GPR_U32(ctx, 31, 0x300A78u);
    ctx->pc = 0x300A74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300A78u; }
    }
    if (ctx->pc != 0x300A78u) { return; }
    ctx->pc = 0x300A78u;
label_300a78:
    // 0x300a78: 0x441000d
label_300a7c:
    if (ctx->pc == 0x300A7Cu) {
        ctx->pc = 0x300A7Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->pc = 0x300A80u;
        goto label_300a80;
    }
    ctx->pc = 0x300A78u;
    {
        const bool branch_taken_0x300a78 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x300A7Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
        if (branch_taken_0x300a78) {
            ctx->pc = 0x300AB0u;
            goto label_300ab0;
        }
    }
    ctx->pc = 0x300A80u;
label_300a80:
    // 0x300a80: 0x26770001
    ctx->pc = 0x300a80u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
label_300a84:
    // 0x300a84: 0x0
    ctx->pc = 0x300a84u;
    // NOP
label_300a88:
    // 0x300a88: 0x26b5ffff
    ctx->pc = 0x300a88u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
label_300a8c:
    // 0x300a8c: 0x24030030
    ctx->pc = 0x300a8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
label_300a90:
    // 0x300a90: 0x82a20000
    ctx->pc = 0x300a90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_300a94:
    // 0x300a94: 0x0
    ctx->pc = 0x300a94u;
    // NOP
label_300a98:
    // 0x300a98: 0x0
    ctx->pc = 0x300a98u;
    // NOP
label_300a9c:
    // 0x300a9c: 0x1043fffa
label_300aa0:
    if (ctx->pc == 0x300AA0u) {
        ctx->pc = 0x300AA4u;
        goto label_300aa4;
    }
    ctx->pc = 0x300A9Cu;
    {
        const bool branch_taken_0x300a9c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x300a9c) {
            ctx->pc = 0x300A88u;
            goto label_300a88;
        }
    }
    ctx->pc = 0x300AA4u;
label_300aa4:
    // 0x300aa4: 0x10000233
label_300aa8:
    if (ctx->pc == 0x300AA8u) {
        ctx->pc = 0x300AA8u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x300AACu;
        goto label_300aac;
    }
    ctx->pc = 0x300AA4u;
    {
        const bool branch_taken_0x300aa4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x300AA8u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x300aa4) {
            ctx->pc = 0x301374u;
            goto label_301374;
        }
    }
    ctx->pc = 0x300AACu;
label_300aac:
    // 0x300aac: 0x8fa40024
    ctx->pc = 0x300aacu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_300ab0:
    // 0x300ab0: 0x2e0b02d
    ctx->pc = 0x300ab0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_300ab4:
    // 0x300ab4: 0x8fb3002c
    ctx->pc = 0x300ab4u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_300ab8:
    // 0x300ab8: 0xafa40020
    ctx->pc = 0x300ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_300abc:
    // 0x300abc: 0x8fb50058
    ctx->pc = 0x300abcu;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_300ac0:
    // 0x300ac0: 0x8fa30000
    ctx->pc = 0x300ac0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_300ac4:
    // 0x300ac4: 0x460005e
label_300ac8:
    if (ctx->pc == 0x300AC8u) {
        ctx->pc = 0x300AC8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 15));
        ctx->pc = 0x300ACCu;
        goto label_300acc;
    }
    ctx->pc = 0x300AC4u;
    {
        const bool branch_taken_0x300ac4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x300AC8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 15));
        if (branch_taken_0x300ac4) {
            ctx->pc = 0x300C40u;
            goto label_300c40;
        }
    }
    ctx->pc = 0x300ACCu;
label_300acc:
    // 0x300acc: 0x1040005c
label_300ad0:
    if (ctx->pc == 0x300AD0u) {
        ctx->pc = 0x300AD0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        ctx->pc = 0x300AD4u;
        goto label_300ad4;
    }
    ctx->pc = 0x300ACCu;
    {
        const bool branch_taken_0x300acc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x300AD0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x300acc) {
            ctx->pc = 0x300C40u;
            goto label_300c40;
        }
    }
    ctx->pc = 0x300AD4u;
label_300ad4:
    // 0x300ad4: 0x1318c0
    ctx->pc = 0x300ad4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 19), 3));
label_300ad8:
    // 0x300ad8: 0x2442ac20
    ctx->pc = 0x300ad8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294945824));
label_300adc:
    // 0x300adc: 0x621821
    ctx->pc = 0x300adcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_300ae0:
    // 0x300ae0: 0x8fa2000c
    ctx->pc = 0x300ae0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_300ae4:
    // 0x300ae4: 0x4410012
label_300ae8:
    if (ctx->pc == 0x300AE8u) {
        ctx->pc = 0x300AE8u;
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x300AECu;
        goto label_300aec;
    }
    ctx->pc = 0x300AE4u;
    {
        const bool branch_taken_0x300ae4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x300AE8u;
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x300ae4) {
            ctx->pc = 0x300B30u;
            goto label_300b30;
        }
    }
    ctx->pc = 0x300AECu;
label_300aec:
    // 0x300aec: 0x8fa30020
    ctx->pc = 0x300aecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_300af0:
    // 0x300af0: 0x1c600011
label_300af4:
    if (ctx->pc == 0x300AF4u) {
        ctx->pc = 0x300AF4u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x300AF8u;
        goto label_300af8;
    }
    ctx->pc = 0x300AF0u;
    {
        const bool branch_taken_0x300af0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x300AF4u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x300af0) {
            ctx->pc = 0x300B38u;
            goto label_300b38;
        }
    }
    ctx->pc = 0x300AF8u;
label_300af8:
    // 0x300af8: 0xafa00050
    ctx->pc = 0x300af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_300afc:
    // 0x300afc: 0x460012e
label_300b00:
    if (ctx->pc == 0x300B00u) {
        ctx->pc = 0x300B00u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->pc = 0x300B04u;
        goto label_300b04;
    }
    ctx->pc = 0x300AFCu;
    {
        const bool branch_taken_0x300afc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x300B00u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        if (branch_taken_0x300afc) {
            ctx->pc = 0x300FB8u;
            goto label_300fb8;
        }
    }
    ctx->pc = 0x300B04u;
label_300b04:
    // 0x300b04: 0x34058028
    ctx->pc = 0x300b04u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32808));
label_300b08:
    // 0x300b08: 0x52bfc
    ctx->pc = 0x300b08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
label_300b0c:
    // 0x300b0c: 0xc0be370
label_300b10:
    if (ctx->pc == 0x300B10u) {
        ctx->pc = 0x300B10u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300B14u;
        goto label_300b14;
    }
    ctx->pc = 0x300B0Cu;
    SET_GPR_U32(ctx, 31, 0x300B14u);
    ctx->pc = 0x300B10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x2f8dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300B14u; }
    }
    if (ctx->pc != 0x300B14u) { return; }
    ctx->pc = 0x300B14u;
label_300b14:
    // 0x300b14: 0x2c0202d
    ctx->pc = 0x300b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_300b18:
    // 0x300b18: 0xc0be4ba
label_300b1c:
    if (ctx->pc == 0x300B1Cu) {
        ctx->pc = 0x300B1Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300B20u;
        goto label_300b20;
    }
    ctx->pc = 0x300B18u;
    SET_GPR_U32(ctx, 31, 0x300B20u);
    ctx->pc = 0x300B1Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300B20u; }
    }
    if (ctx->pc != 0x300B20u) { return; }
    ctx->pc = 0x300B20u;
label_300b20:
    // 0x300b20: 0x18400125
label_300b24:
    if (ctx->pc == 0x300B24u) {
        ctx->pc = 0x300B24u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->pc = 0x300B28u;
        goto label_300b28;
    }
    ctx->pc = 0x300B20u;
    {
        const bool branch_taken_0x300b20 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x300B24u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 88)));
        if (branch_taken_0x300b20) {
            ctx->pc = 0x300FB8u;
            goto label_300fb8;
        }
    }
    ctx->pc = 0x300B28u;
label_300b28:
    // 0x300b28: 0x10000128
label_300b2c:
    if (ctx->pc == 0x300B2Cu) {
        ctx->pc = 0x300B2Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 49));
        ctx->pc = 0x300B30u;
        goto label_300b30;
    }
    ctx->pc = 0x300B28u;
    {
        const bool branch_taken_0x300b28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x300B2Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 49));
        if (branch_taken_0x300b28) {
            ctx->pc = 0x300FCCu;
            goto label_300fcc;
        }
    }
    ctx->pc = 0x300B30u;
label_300b30:
    // 0x300b30: 0x24140001
    ctx->pc = 0x300b30u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
label_300b34:
    // 0x300b34: 0x0
    ctx->pc = 0x300b34u;
    // NOP
label_300b38:
    // 0x300b38: 0x1000000b
label_300b3c:
    if (ctx->pc == 0x300B3Cu) {
        ctx->pc = 0x300B3Cu;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x300B40u;
        goto label_300b40;
    }
    ctx->pc = 0x300B38u;
    {
        const bool branch_taken_0x300b38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x300B3Cu;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x300b38) {
            ctx->pc = 0x300B68u;
            goto label_300b68;
        }
    }
    ctx->pc = 0x300B40u;
label_300b40:
    // 0x300b40: 0x34048048
    ctx->pc = 0x300b40u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 32840));
label_300b44:
    // 0x300b44: 0x423fc
    ctx->pc = 0x300b44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
label_300b48:
    // 0x300b48: 0xc0be370
label_300b4c:
    if (ctx->pc == 0x300B4Cu) {
        ctx->pc = 0x300B50u;
        goto label_300b50;
    }
    ctx->pc = 0x300B48u;
    SET_GPR_U32(ctx, 31, 0x300B50u);
    ctx->pc = 0x2F8DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x2f8dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300B50u; }
    }
    if (ctx->pc != 0x300B50u) { return; }
    ctx->pc = 0x300B50u;
label_300b50:
    // 0x300b50: 0x282d
    ctx->pc = 0x300b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_300b54:
    // 0x300b54: 0x40202d
    ctx->pc = 0x300b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300b58:
    // 0x300b58: 0xc0be4ba
label_300b5c:
    if (ctx->pc == 0x300B5Cu) {
        ctx->pc = 0x300B5Cu;
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300B60u;
        goto label_300b60;
    }
    ctx->pc = 0x300B58u;
    SET_GPR_U32(ctx, 31, 0x300B60u);
    ctx->pc = 0x300B5Cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300B60u; }
    }
    if (ctx->pc != 0x300B60u) { return; }
    ctx->pc = 0x300B60u;
label_300b60:
    // 0x300b60: 0x10400204
label_300b64:
    if (ctx->pc == 0x300B64u) {
        ctx->pc = 0x300B64u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x300B68u;
        goto label_300b68;
    }
    ctx->pc = 0x300B60u;
    {
        const bool branch_taken_0x300b60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x300B64u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
        if (branch_taken_0x300b60) {
            ctx->pc = 0x301374u;
            goto label_301374;
        }
    }
    ctx->pc = 0x300B68u;
label_300b68:
    // 0x300b68: 0x2c0202d
    ctx->pc = 0x300b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_300b6c:
    // 0x300b6c: 0xc0be41a
label_300b70:
    if (ctx->pc == 0x300B70u) {
        ctx->pc = 0x300B70u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300B74u;
        goto label_300b74;
    }
    ctx->pc = 0x300B6Cu;
    SET_GPR_U32(ctx, 31, 0x300B74u);
    ctx->pc = 0x300B70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F9068u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpdiv_0x2f9068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300B74u; }
    }
    if (ctx->pc != 0x300B74u) { return; }
    ctx->pc = 0x300B74u;
label_300b74:
    // 0x300b74: 0xc0be4fc
label_300b78:
    if (ctx->pc == 0x300B78u) {
        ctx->pc = 0x300B78u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300B7Cu;
        goto label_300b7c;
    }
    ctx->pc = 0x300B74u;
    SET_GPR_U32(ctx, 31, 0x300B7Cu);
    ctx->pc = 0x300B78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F93F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x2f93f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300B7Cu; }
    }
    if (ctx->pc != 0x300B7Cu) { return; }
    ctx->pc = 0x300B7Cu;
label_300b7c:
    // 0x300b7c: 0x40882d
    ctx->pc = 0x300b7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300b80:
    // 0x300b80: 0xc0be4ce
label_300b84:
    if (ctx->pc == 0x300B84u) {
        ctx->pc = 0x300B84u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300B88u;
        goto label_300b88;
    }
    ctx->pc = 0x300B80u;
    SET_GPR_U32(ctx, 31, 0x300B88u);
    ctx->pc = 0x300B84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F9338u;
    {
        const uint32_t __entryPc = ctx->pc;
        litodp_0x2f9338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300B88u; }
    }
    if (ctx->pc != 0x300B88u) { return; }
    ctx->pc = 0x300B88u;
label_300b88:
    // 0x300b88: 0x40202d
    ctx->pc = 0x300b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300b8c:
    // 0x300b8c: 0xc0be370
label_300b90:
    if (ctx->pc == 0x300B90u) {
        ctx->pc = 0x300B90u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300B94u;
        goto label_300b94;
    }
    ctx->pc = 0x300B8Cu;
    SET_GPR_U32(ctx, 31, 0x300B94u);
    ctx->pc = 0x300B90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x2f8dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300B94u; }
    }
    if (ctx->pc != 0x300B94u) { return; }
    ctx->pc = 0x300B94u;
label_300b94:
    // 0x300b94: 0x2c0202d
    ctx->pc = 0x300b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_300b98:
    // 0x300b98: 0xc0be356
label_300b9c:
    if (ctx->pc == 0x300B9Cu) {
        ctx->pc = 0x300B9Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300BA0u;
        goto label_300ba0;
    }
    ctx->pc = 0x300B98u;
    SET_GPR_U32(ctx, 31, 0x300BA0u);
    ctx->pc = 0x300B9Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D58u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpsub_0x2f8d58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300BA0u; }
    }
    if (ctx->pc != 0x300BA0u) { return; }
    ctx->pc = 0x300BA0u;
label_300ba0:
    // 0x300ba0: 0x40282d
    ctx->pc = 0x300ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300ba4:
    // 0x300ba4: 0x26220030
    ctx->pc = 0x300ba4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 17), 48));
label_300ba8:
    // 0x300ba8: 0xa2a20000
    ctx->pc = 0x300ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_300bac:
    // 0x300bac: 0x8fa40020
    ctx->pc = 0x300bacu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_300bb0:
    // 0x300bb0: 0x1684ffe3
label_300bb4:
    if (ctx->pc == 0x300BB4u) {
        ctx->pc = 0x300BB4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x300BB8u;
        goto label_300bb8;
    }
    ctx->pc = 0x300BB0u;
    {
        const bool branch_taken_0x300bb0 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 4));
        ctx->pc = 0x300BB4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x300bb0) {
            ctx->pc = 0x300B40u;
            goto label_300b40;
        }
    }
    ctx->pc = 0x300BB8u;
label_300bb8:
    // 0x300bb8: 0xc0be340
label_300bbc:
    if (ctx->pc == 0x300BBCu) {
        ctx->pc = 0x300BBCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300BC0u;
        goto label_300bc0;
    }
    ctx->pc = 0x300BB8u;
    SET_GPR_U32(ctx, 31, 0x300BC0u);
    ctx->pc = 0x300BBCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x2f8d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300BC0u; }
    }
    if (ctx->pc != 0x300BC0u) { return; }
    ctx->pc = 0x300BC0u;
label_300bc0:
    // 0x300bc0: 0x40802d
    ctx->pc = 0x300bc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300bc4:
    // 0x300bc4: 0x240282d
    ctx->pc = 0x300bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_300bc8:
    // 0x300bc8: 0xc0be4ba
label_300bcc:
    if (ctx->pc == 0x300BCCu) {
        ctx->pc = 0x300BCCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300BD0u;
        goto label_300bd0;
    }
    ctx->pc = 0x300BC8u;
    SET_GPR_U32(ctx, 31, 0x300BD0u);
    ctx->pc = 0x300BCCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300BD0u; }
    }
    if (ctx->pc != 0x300BD0u) { return; }
    ctx->pc = 0x300BD0u;
label_300bd0:
    // 0x300bd0: 0x1c40000c
label_300bd4:
    if (ctx->pc == 0x300BD4u) {
        ctx->pc = 0x300BD4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 57));
        ctx->pc = 0x300BD8u;
        goto label_300bd8;
    }
    ctx->pc = 0x300BD0u;
    {
        const bool branch_taken_0x300bd0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x300BD4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 57));
        if (branch_taken_0x300bd0) {
            ctx->pc = 0x300C04u;
            goto label_300c04;
        }
    }
    ctx->pc = 0x300BD8u;
label_300bd8:
    // 0x300bd8: 0x200202d
    ctx->pc = 0x300bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_300bdc:
    // 0x300bdc: 0xc0be4ba
label_300be0:
    if (ctx->pc == 0x300BE0u) {
        ctx->pc = 0x300BE0u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300BE4u;
        goto label_300be4;
    }
    ctx->pc = 0x300BDCu;
    SET_GPR_U32(ctx, 31, 0x300BE4u);
    ctx->pc = 0x300BE0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F92E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpcmp_0x2f92e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300BE4u; }
    }
    if (ctx->pc != 0x300BE4u) { return; }
    ctx->pc = 0x300BE4u;
label_300be4:
    // 0x300be4: 0x144001e3
label_300be8:
    if (ctx->pc == 0x300BE8u) {
        ctx->pc = 0x300BE8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x300BECu;
        goto label_300bec;
    }
    ctx->pc = 0x300BE4u;
    {
        const bool branch_taken_0x300be4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x300BE8u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x300be4) {
            ctx->pc = 0x301374u;
            goto label_301374;
        }
    }
    ctx->pc = 0x300BECu;
label_300bec:
    // 0x300bec: 0x104001e1
label_300bf0:
    if (ctx->pc == 0x300BF0u) {
        ctx->pc = 0x300BF0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 57));
        ctx->pc = 0x300BF4u;
        goto label_300bf4;
    }
    ctx->pc = 0x300BECu;
    {
        const bool branch_taken_0x300bec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x300BF0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 57));
        if (branch_taken_0x300bec) {
            ctx->pc = 0x301374u;
            goto label_301374;
        }
    }
    ctx->pc = 0x300BF4u;
label_300bf4:
    // 0x300bf4: 0x10000004
label_300bf8:
    if (ctx->pc == 0x300BF8u) {
        ctx->pc = 0x300BF8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x300BFCu;
        goto label_300bfc;
    }
    ctx->pc = 0x300BF4u;
    {
        const bool branch_taken_0x300bf4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x300BF8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x300bf4) {
            ctx->pc = 0x300C08u;
            goto label_300c08;
        }
    }
    ctx->pc = 0x300BFCu;
label_300bfc:
    // 0x300bfc: 0x26770001
    ctx->pc = 0x300bfcu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
label_300c00:
    // 0x300c00: 0x24050039
    ctx->pc = 0x300c00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 57));
label_300c04:
    // 0x300c04: 0x24030030
    ctx->pc = 0x300c04u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
label_300c08:
    // 0x300c08: 0x26b5ffff
    ctx->pc = 0x300c08u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
label_300c0c:
    // 0x300c0c: 0x82a20000
    ctx->pc = 0x300c0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_300c10:
    // 0x300c10: 0x14450007
label_300c14:
    if (ctx->pc == 0x300C14u) {
        ctx->pc = 0x300C14u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x300C18u;
        goto label_300c18;
    }
    ctx->pc = 0x300C10u;
    {
        const bool branch_taken_0x300c10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        ctx->pc = 0x300C14u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        if (branch_taken_0x300c10) {
            ctx->pc = 0x300C30u;
            goto label_300c30;
        }
    }
    ctx->pc = 0x300C18u;
label_300c18:
    // 0x300c18: 0x8fa20058
    ctx->pc = 0x300c18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_300c1c:
    // 0x300c1c: 0x56a2fffb
label_300c20:
    if (ctx->pc == 0x300C20u) {
        ctx->pc = 0x300C20u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->pc = 0x300C24u;
        goto label_300c24;
    }
    ctx->pc = 0x300C1Cu;
    {
        const bool branch_taken_0x300c1c = (GPR_U32(ctx, 21) != GPR_U32(ctx, 2));
        if (branch_taken_0x300c1c) {
            ctx->pc = 0x300C20u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->pc = 0x300C0Cu;
            goto label_300c0c;
        }
    }
    ctx->pc = 0x300C24u;
label_300c24:
    // 0x300c24: 0xa0430000
    ctx->pc = 0x300c24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_300c28:
    // 0x300c28: 0x60202d
    ctx->pc = 0x300c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_300c2c:
    // 0x300c2c: 0x26f70001
    ctx->pc = 0x300c2cu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
label_300c30:
    // 0x300c30: 0x24820001
    ctx->pc = 0x300c30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
label_300c34:
    // 0x300c34: 0xa2a20000
    ctx->pc = 0x300c34u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_300c38:
    // 0x300c38: 0x100001ce
label_300c3c:
    if (ctx->pc == 0x300C3Cu) {
        ctx->pc = 0x300C3Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x300C40u;
        goto label_300c40;
    }
    ctx->pc = 0x300C38u;
    {
        const bool branch_taken_0x300c38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x300C3Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x300c38) {
            ctx->pc = 0x301374u;
            goto label_301374;
        }
    }
    ctx->pc = 0x300C40u;
label_300c40:
    // 0x300c40: 0x8fa40034
    ctx->pc = 0x300c40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_300c44:
    // 0x300c44: 0x8fb10018
    ctx->pc = 0x300c44u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_300c48:
    // 0x300c48: 0x8fb2001c
    ctx->pc = 0x300c48u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_300c4c:
    // 0x300c4c: 0xafa0004c
    ctx->pc = 0x300c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_300c50:
    // 0x300c50: 0x1080002b
label_300c54:
    if (ctx->pc == 0x300C54u) {
        ctx->pc = 0x300C54u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x300C58u;
        goto label_300c58;
    }
    ctx->pc = 0x300C50u;
    {
        const bool branch_taken_0x300c50 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x300C54u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
        if (branch_taken_0x300c50) {
            ctx->pc = 0x300D00u;
            goto label_300d00;
        }
    }
    ctx->pc = 0x300C58u;
label_300c58:
    // 0x300c58: 0x8fa20008
    ctx->pc = 0x300c58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_300c5c:
    // 0x300c5c: 0x28570002
    ctx->pc = 0x300c5cu;
    SET_GPR_U32(ctx, 23, SLT32(GPR_S32(ctx, 2), 2));
label_300c60:
    // 0x300c60: 0x12e00007
label_300c64:
    if (ctx->pc == 0x300C64u) {
        ctx->pc = 0x300C64u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->pc = 0x300C68u;
        goto label_300c68;
    }
    ctx->pc = 0x300C60u;
    {
        const bool branch_taken_0x300c60 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x300C64u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 68)));
        if (branch_taken_0x300c60) {
            ctx->pc = 0x300C80u;
            goto label_300c80;
        }
    }
    ctx->pc = 0x300C68u;
label_300c68:
    // 0x300c68: 0x1480001a
label_300c6c:
    if (ctx->pc == 0x300C6Cu) {
        ctx->pc = 0x300C6Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 3), 1075));
        ctx->pc = 0x300C70u;
        goto label_300c70;
    }
    ctx->pc = 0x300C68u;
    {
        const bool branch_taken_0x300c68 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x300C6Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 3), 1075));
        if (branch_taken_0x300c68) {
            ctx->pc = 0x300CD4u;
            goto label_300cd4;
        }
    }
    ctx->pc = 0x300C70u;
label_300c70:
    // 0x300c70: 0x8fa30004
    ctx->pc = 0x300c70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_300c74:
    // 0x300c74: 0x24020036
    ctx->pc = 0x300c74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 54));
label_300c78:
    // 0x300c78: 0x10000016
label_300c7c:
    if (ctx->pc == 0x300C7Cu) {
        ctx->pc = 0x300C7Cu;
        SET_GPR_U32(ctx, 20, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x300C80u;
        goto label_300c80;
    }
    ctx->pc = 0x300C78u;
    {
        const bool branch_taken_0x300c78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x300C7Cu;
        SET_GPR_U32(ctx, 20, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        if (branch_taken_0x300c78) {
            ctx->pc = 0x300CD4u;
            goto label_300cd4;
        }
    }
    ctx->pc = 0x300C80u;
label_300c80:
    // 0x300c80: 0x8fa20020
    ctx->pc = 0x300c80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_300c84:
    // 0x300c84: 0x8fa3001c
    ctx->pc = 0x300c84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_300c88:
    // 0x300c88: 0x2450ffff
    ctx->pc = 0x300c88u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294967295));
label_300c8c:
    // 0x300c8c: 0x70102a
    ctx->pc = 0x300c8cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 16)));
label_300c90:
    // 0x300c90: 0x14400003
label_300c94:
    if (ctx->pc == 0x300C94u) {
        ctx->pc = 0x300C94u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->pc = 0x300C98u;
        goto label_300c98;
    }
    ctx->pc = 0x300C90u;
    {
        const bool branch_taken_0x300c90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x300C94u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 28)));
        if (branch_taken_0x300c90) {
            ctx->pc = 0x300CA0u;
            goto label_300ca0;
        }
    }
    ctx->pc = 0x300C98u;
label_300c98:
    // 0x300c98: 0x10000008
label_300c9c:
    if (ctx->pc == 0x300C9Cu) {
        ctx->pc = 0x300C9Cu;
        SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->pc = 0x300CA0u;
        goto label_300ca0;
    }
    ctx->pc = 0x300C98u;
    {
        const bool branch_taken_0x300c98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x300C9Cu;
        SET_GPR_U32(ctx, 18, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        if (branch_taken_0x300c98) {
            ctx->pc = 0x300CBCu;
            goto label_300cbc;
        }
    }
    ctx->pc = 0x300CA0u;
label_300ca0:
    // 0x300ca0: 0x902d
    ctx->pc = 0x300ca0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_300ca4:
    // 0x300ca4: 0x8fa2003c
    ctx->pc = 0x300ca4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_300ca8:
    // 0x300ca8: 0x2048023
    ctx->pc = 0x300ca8u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_300cac:
    // 0x300cac: 0x902021
    ctx->pc = 0x300cacu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_300cb0:
    // 0x300cb0: 0x501021
    ctx->pc = 0x300cb0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_300cb4:
    // 0x300cb4: 0xafa4001c
    ctx->pc = 0x300cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
label_300cb8:
    // 0x300cb8: 0xafa2003c
    ctx->pc = 0x300cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_300cbc:
    // 0x300cbc: 0x8fb40020
    ctx->pc = 0x300cbcu;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_300cc0:
    // 0x300cc0: 0x6810005
label_300cc4:
    if (ctx->pc == 0x300CC4u) {
        ctx->pc = 0x300CC4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300CC8u;
        goto label_300cc8;
    }
    ctx->pc = 0x300CC0u;
    {
        const bool branch_taken_0x300cc0 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x300CC4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x300cc0) {
            ctx->pc = 0x300CD8u;
            goto label_300cd8;
        }
    }
    ctx->pc = 0x300CC8u;
label_300cc8:
    // 0x300cc8: 0x8fa30018
    ctx->pc = 0x300cc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_300ccc:
    // 0x300ccc: 0x748823
    ctx->pc = 0x300cccu;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_300cd0:
    // 0x300cd0: 0xa02d
    ctx->pc = 0x300cd0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_300cd4:
    // 0x300cd4: 0x3c0202d
    ctx->pc = 0x300cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_300cd8:
    // 0x300cd8: 0xc0c0928
label_300cdc:
    if (ctx->pc == 0x300CDCu) {
        ctx->pc = 0x300CDCu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x300CE0u;
        goto label_300ce0;
    }
    ctx->pc = 0x300CD8u;
    SET_GPR_U32(ctx, 31, 0x300CE0u);
    ctx->pc = 0x300CDCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x3024A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _i2b_0x3024a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300CE0u; }
    }
    if (ctx->pc != 0x300CE0u) { return; }
    ctx->pc = 0x300CE0u;
label_300ce0:
    // 0x300ce0: 0xafa20050
    ctx->pc = 0x300ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_300ce4:
    // 0x300ce4: 0x8fa40038
    ctx->pc = 0x300ce4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_300ce8:
    // 0x300ce8: 0x8fa20018
    ctx->pc = 0x300ce8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_300cec:
    // 0x300cec: 0x942021
    ctx->pc = 0x300cecu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_300cf0:
    // 0x300cf0: 0x541021
    ctx->pc = 0x300cf0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_300cf4:
    // 0x300cf4: 0xafa40038
    ctx->pc = 0x300cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_300cf8:
    // 0x300cf8: 0x10000003
label_300cfc:
    if (ctx->pc == 0x300CFCu) {
        ctx->pc = 0x300CFCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x300D00u;
        goto label_300d00;
    }
    ctx->pc = 0x300CF8u;
    {
        const bool branch_taken_0x300cf8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x300CFCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        if (branch_taken_0x300cf8) {
            ctx->pc = 0x300D08u;
            goto label_300d08;
        }
    }
    ctx->pc = 0x300D00u;
label_300d00:
    // 0x300d00: 0x8fa30008
    ctx->pc = 0x300d00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_300d04:
    // 0x300d04: 0x28770002
    ctx->pc = 0x300d04u;
    SET_GPR_U32(ctx, 23, SLT32(GPR_S32(ctx, 3), 2));
label_300d08:
    // 0x300d08: 0x1a20000b
label_300d0c:
    if (ctx->pc == 0x300D0Cu) {
        ctx->pc = 0x300D0Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->pc = 0x300D10u;
        goto label_300d10;
    }
    ctx->pc = 0x300D08u;
    {
        const bool branch_taken_0x300d08 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x300D0Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
        if (branch_taken_0x300d08) {
            ctx->pc = 0x300D38u;
            goto label_300d38;
        }
    }
    ctx->pc = 0x300D10u;
label_300d10:
    // 0x300d10: 0x18800009
label_300d14:
    if (ctx->pc == 0x300D14u) {
        ctx->pc = 0x300D14u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300D18u;
        goto label_300d18;
    }
    ctx->pc = 0x300D10u;
    {
        const bool branch_taken_0x300d10 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x300D14u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x300d10) {
            ctx->pc = 0x300D38u;
            goto label_300d38;
        }
    }
    ctx->pc = 0x300D18u;
label_300d18:
    // 0x300d18: 0x234102a
    ctx->pc = 0x300d18u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 20)));
label_300d1c:
    // 0x300d1c: 0x222a00b
    ctx->pc = 0x300d1cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 20, GPR_U32(ctx, 17));
label_300d20:
    // 0x300d20: 0x8fa20018
    ctx->pc = 0x300d20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_300d24:
    // 0x300d24: 0x942023
    ctx->pc = 0x300d24u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_300d28:
    // 0x300d28: 0xafa40038
    ctx->pc = 0x300d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_300d2c:
    // 0x300d2c: 0x2348823
    ctx->pc = 0x300d2cu;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_300d30:
    // 0x300d30: 0x541023
    ctx->pc = 0x300d30u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_300d34:
    // 0x300d34: 0xafa20018
    ctx->pc = 0x300d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_300d38:
    // 0x300d38: 0x8fa3001c
    ctx->pc = 0x300d38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_300d3c:
    // 0x300d3c: 0x1860001e
label_300d40:
    if (ctx->pc == 0x300D40u) {
        ctx->pc = 0x300D40u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->pc = 0x300D44u;
        goto label_300d44;
    }
    ctx->pc = 0x300D3Cu;
    {
        const bool branch_taken_0x300d3c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x300D40u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
        if (branch_taken_0x300d3c) {
            ctx->pc = 0x300DB8u;
            goto label_300db8;
        }
    }
    ctx->pc = 0x300D44u;
label_300d44:
    // 0x300d44: 0x10800018
label_300d48:
    if (ctx->pc == 0x300D48u) {
        ctx->pc = 0x300D48u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x300D4Cu;
        goto label_300d4c;
    }
    ctx->pc = 0x300D44u;
    {
        const bool branch_taken_0x300d44 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x300D48u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        if (branch_taken_0x300d44) {
            ctx->pc = 0x300DA8u;
            goto label_300da8;
        }
    }
    ctx->pc = 0x300D4Cu;
label_300d4c:
    // 0x300d4c: 0x1a40000d
label_300d50:
    if (ctx->pc == 0x300D50u) {
        ctx->pc = 0x300D50u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x300D54u;
        goto label_300d54;
    }
    ctx->pc = 0x300D4Cu;
    {
        const bool branch_taken_0x300d4c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x300D50u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x300d4c) {
            ctx->pc = 0x300D84u;
            goto label_300d84;
        }
    }
    ctx->pc = 0x300D54u;
label_300d54:
    // 0x300d54: 0x3c0202d
    ctx->pc = 0x300d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_300d58:
    // 0x300d58: 0xc0c09c2
label_300d5c:
    if (ctx->pc == 0x300D5Cu) {
        ctx->pc = 0x300D5Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300D60u;
        goto label_300d60;
    }
    ctx->pc = 0x300D58u;
    SET_GPR_U32(ctx, 31, 0x300D60u);
    ctx->pc = 0x300D5Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x302708u;
    {
        const uint32_t __entryPc = ctx->pc;
        _pow5mult_0x302708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300D60u; }
    }
    if (ctx->pc != 0x300D60u) { return; }
    ctx->pc = 0x300D60u;
label_300d60:
    // 0x300d60: 0xafa20050
    ctx->pc = 0x300d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_300d64:
    // 0x300d64: 0x3c0202d
    ctx->pc = 0x300d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_300d68:
    // 0x300d68: 0x8fa60048
    ctx->pc = 0x300d68u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_300d6c:
    // 0x300d6c: 0xc0c0936
label_300d70:
    if (ctx->pc == 0x300D70u) {
        ctx->pc = 0x300D70u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300D74u;
        goto label_300d74;
    }
    ctx->pc = 0x300D6Cu;
    SET_GPR_U32(ctx, 31, 0x300D74u);
    ctx->pc = 0x300D70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3024D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multiply_0x3024d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300D74u; }
    }
    if (ctx->pc != 0x300D74u) { return; }
    ctx->pc = 0x300D74u;
label_300d74:
    // 0x300d74: 0x8fa50048
    ctx->pc = 0x300d74u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_300d78:
    // 0x300d78: 0x3c0202d
    ctx->pc = 0x300d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_300d7c:
    // 0x300d7c: 0xc0c0832
label_300d80:
    if (ctx->pc == 0x300D80u) {
        ctx->pc = 0x300D80u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x300D84u;
        goto label_300d84;
    }
    ctx->pc = 0x300D7Cu;
    SET_GPR_U32(ctx, 31, 0x300D84u);
    ctx->pc = 0x300D80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    ctx->pc = 0x3020C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x3020c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300D84u; }
    }
    if (ctx->pc != 0x300D84u) { return; }
    ctx->pc = 0x300D84u;
label_300d84:
    // 0x300d84: 0x8fa2001c
    ctx->pc = 0x300d84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_300d88:
    // 0x300d88: 0x528023
    ctx->pc = 0x300d88u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_300d8c:
    // 0x300d8c: 0x1200000a
label_300d90:
    if (ctx->pc == 0x300D90u) {
        ctx->pc = 0x300D90u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x300D94u;
        goto label_300d94;
    }
    ctx->pc = 0x300D8Cu;
    {
        const bool branch_taken_0x300d8c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x300D90u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        if (branch_taken_0x300d8c) {
            ctx->pc = 0x300DB8u;
            goto label_300db8;
        }
    }
    ctx->pc = 0x300D94u;
label_300d94:
    // 0x300d94: 0x200302d
    ctx->pc = 0x300d94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_300d98:
    // 0x300d98: 0xc0c09c2
label_300d9c:
    if (ctx->pc == 0x300D9Cu) {
        ctx->pc = 0x300D9Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300DA0u;
        goto label_300da0;
    }
    ctx->pc = 0x300D98u;
    SET_GPR_U32(ctx, 31, 0x300DA0u);
    ctx->pc = 0x300D9Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x302708u;
    {
        const uint32_t __entryPc = ctx->pc;
        _pow5mult_0x302708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300DA0u; }
    }
    if (ctx->pc != 0x300DA0u) { return; }
    ctx->pc = 0x300DA0u;
label_300da0:
    // 0x300da0: 0x10000005
label_300da4:
    if (ctx->pc == 0x300DA4u) {
        ctx->pc = 0x300DA4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x300DA8u;
        goto label_300da8;
    }
    ctx->pc = 0x300DA0u;
    {
        const bool branch_taken_0x300da0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x300DA4u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        if (branch_taken_0x300da0) {
            ctx->pc = 0x300DB8u;
            goto label_300db8;
        }
    }
    ctx->pc = 0x300DA8u;
label_300da8:
    // 0x300da8: 0x3c0202d
    ctx->pc = 0x300da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_300dac:
    // 0x300dac: 0xc0c09c2
label_300db0:
    if (ctx->pc == 0x300DB0u) {
        ctx->pc = 0x300DB0u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->pc = 0x300DB4u;
        goto label_300db4;
    }
    ctx->pc = 0x300DACu;
    SET_GPR_U32(ctx, 31, 0x300DB4u);
    ctx->pc = 0x300DB0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 28)));
    ctx->pc = 0x302708u;
    {
        const uint32_t __entryPc = ctx->pc;
        _pow5mult_0x302708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300DB4u; }
    }
    if (ctx->pc != 0x300DB4u) { return; }
    ctx->pc = 0x300DB4u;
label_300db4:
    // 0x300db4: 0xafa20048
    ctx->pc = 0x300db4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_300db8:
    // 0x300db8: 0x3c0202d
    ctx->pc = 0x300db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_300dbc:
    // 0x300dbc: 0xc0c0928
label_300dc0:
    if (ctx->pc == 0x300DC0u) {
        ctx->pc = 0x300DC0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x300DC4u;
        goto label_300dc4;
    }
    ctx->pc = 0x300DBCu;
    SET_GPR_U32(ctx, 31, 0x300DC4u);
    ctx->pc = 0x300DC0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x3024A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _i2b_0x3024a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300DC4u; }
    }
    if (ctx->pc != 0x300DC4u) { return; }
    ctx->pc = 0x300DC4u;
label_300dc4:
    // 0x300dc4: 0x8fa3003c
    ctx->pc = 0x300dc4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_300dc8:
    // 0x300dc8: 0x18600006
label_300dcc:
    if (ctx->pc == 0x300DCCu) {
        ctx->pc = 0x300DCCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x300DD0u;
        goto label_300dd0;
    }
    ctx->pc = 0x300DC8u;
    {
        const bool branch_taken_0x300dc8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x300DCCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        if (branch_taken_0x300dc8) {
            ctx->pc = 0x300DE4u;
            goto label_300de4;
        }
    }
    ctx->pc = 0x300DD0u;
label_300dd0:
    // 0x300dd0: 0x40282d
    ctx->pc = 0x300dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300dd4:
    // 0x300dd4: 0x3c0202d
    ctx->pc = 0x300dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_300dd8:
    // 0x300dd8: 0xc0c09c2
label_300ddc:
    if (ctx->pc == 0x300DDCu) {
        ctx->pc = 0x300DDCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300DE0u;
        goto label_300de0;
    }
    ctx->pc = 0x300DD8u;
    SET_GPR_U32(ctx, 31, 0x300DE0u);
    ctx->pc = 0x300DDCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x302708u;
    {
        const uint32_t __entryPc = ctx->pc;
        _pow5mult_0x302708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300DE0u; }
    }
    if (ctx->pc != 0x300DE0u) { return; }
    ctx->pc = 0x300DE0u;
label_300de0:
    // 0x300de0: 0xafa20054
    ctx->pc = 0x300de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_300de4:
    // 0x300de4: 0x12e00015
label_300de8:
    if (ctx->pc == 0x300DE8u) {
        ctx->pc = 0x300DE8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x300DECu;
        goto label_300dec;
    }
    ctx->pc = 0x300DE4u;
    {
        const bool branch_taken_0x300de4 = (GPR_U32(ctx, 23) == GPR_U32(ctx, 0));
        ctx->pc = 0x300DE8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 60)));
        if (branch_taken_0x300de4) {
            ctx->pc = 0x300E3Cu;
            goto label_300e3c;
        }
    }
    ctx->pc = 0x300DECu;
label_300dec:
    // 0x300dec: 0x2402ffff
    ctx->pc = 0x300decu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_300df0:
    // 0x300df0: 0x2133a
    ctx->pc = 0x300df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
label_300df4:
    // 0x300df4: 0x2c21024
    ctx->pc = 0x300df4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_300df8:
    // 0x300df8: 0x5440000f
label_300dfc:
    if (ctx->pc == 0x300DFCu) {
        ctx->pc = 0x300DFCu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->pc = 0x300E00u;
        goto label_300e00;
    }
    ctx->pc = 0x300DF8u;
    {
        const bool branch_taken_0x300df8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x300df8) {
            ctx->pc = 0x300DFCu;
            WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
            ctx->pc = 0x300E38u;
            goto label_300e38;
        }
    }
    ctx->pc = 0x300E00u;
label_300e00:
    // 0x300e00: 0x16103f
    ctx->pc = 0x300e00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 22) >> (32 + 0));
label_300e04:
    // 0x300e04: 0x3c037ff0
    ctx->pc = 0x300e04u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32752 << 16));
label_300e08:
    // 0x300e08: 0x431024
    ctx->pc = 0x300e08u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_300e0c:
    // 0x300e0c: 0x10400009
label_300e10:
    if (ctx->pc == 0x300E10u) {
        ctx->pc = 0x300E10u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->pc = 0x300E14u;
        goto label_300e14;
    }
    ctx->pc = 0x300E0Cu;
    {
        const bool branch_taken_0x300e0c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x300E10u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 24)));
        if (branch_taken_0x300e0c) {
            ctx->pc = 0x300E34u;
            goto label_300e34;
        }
    }
    ctx->pc = 0x300E14u;
label_300e14:
    // 0x300e14: 0x24030001
    ctx->pc = 0x300e14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_300e18:
    // 0x300e18: 0x8fa20038
    ctx->pc = 0x300e18u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_300e1c:
    // 0x300e1c: 0x24840001
    ctx->pc = 0x300e1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_300e20:
    // 0x300e20: 0xafa30040
    ctx->pc = 0x300e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_300e24:
    // 0x300e24: 0x24420001
    ctx->pc = 0x300e24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
label_300e28:
    // 0x300e28: 0xafa40018
    ctx->pc = 0x300e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_300e2c:
    // 0x300e2c: 0x10000002
label_300e30:
    if (ctx->pc == 0x300E30u) {
        ctx->pc = 0x300E30u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->pc = 0x300E34u;
        goto label_300e34;
    }
    ctx->pc = 0x300E2Cu;
    {
        const bool branch_taken_0x300e2c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x300E30u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        if (branch_taken_0x300e2c) {
            ctx->pc = 0x300E38u;
            goto label_300e38;
        }
    }
    ctx->pc = 0x300E34u;
label_300e34:
    // 0x300e34: 0xafa00040
    ctx->pc = 0x300e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_300e38:
    // 0x300e38: 0x8fa4003c
    ctx->pc = 0x300e38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_300e3c:
    // 0x300e3c: 0x1080000a
label_300e40:
    if (ctx->pc == 0x300E40u) {
        ctx->pc = 0x300E40u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->pc = 0x300E44u;
        goto label_300e44;
    }
    ctx->pc = 0x300E3Cu;
    {
        const bool branch_taken_0x300e3c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x300E40u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        if (branch_taken_0x300e3c) {
            ctx->pc = 0x300E68u;
            goto label_300e68;
        }
    }
    ctx->pc = 0x300E44u;
label_300e44:
    // 0x300e44: 0x8c620010
    ctx->pc = 0x300e44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_300e48:
    // 0x300e48: 0x2442ffff
    ctx->pc = 0x300e48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_300e4c:
    // 0x300e4c: 0x21080
    ctx->pc = 0x300e4cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
label_300e50:
    // 0x300e50: 0x621021
    ctx->pc = 0x300e50u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_300e54:
    // 0x300e54: 0xc0c08d6
label_300e58:
    if (ctx->pc == 0x300E58u) {
        ctx->pc = 0x300E58u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->pc = 0x300E5Cu;
        goto label_300e5c;
    }
    ctx->pc = 0x300E54u;
    SET_GPR_U32(ctx, 31, 0x300E5Cu);
    ctx->pc = 0x300E58u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->pc = 0x302358u;
    {
        const uint32_t __entryPc = ctx->pc;
        _hi0bits_0x302358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300E5Cu; }
    }
    if (ctx->pc != 0x300E5Cu) { return; }
    ctx->pc = 0x300E5Cu;
label_300e5c:
    // 0x300e5c: 0x8fa40038
    ctx->pc = 0x300e5cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_300e60:
    // 0x300e60: 0x10000003
label_300e64:
    if (ctx->pc == 0x300E64u) {
        ctx->pc = 0x300E64u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->pc = 0x300E68u;
        goto label_300e68;
    }
    ctx->pc = 0x300E60u;
    {
        const bool branch_taken_0x300e60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x300E64u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        if (branch_taken_0x300e60) {
            ctx->pc = 0x300E70u;
            goto label_300e70;
        }
    }
    ctx->pc = 0x300E68u;
label_300e68:
    // 0x300e68: 0x8fa30038
    ctx->pc = 0x300e68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_300e6c:
    // 0x300e6c: 0x24620001
    ctx->pc = 0x300e6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 1));
label_300e70:
    // 0x300e70: 0x3054001f
    ctx->pc = 0x300e70u;
    SET_GPR_U32(ctx, 20, AND32(GPR_U32(ctx, 2), 31));
label_300e74:
    // 0x300e74: 0x12800002
label_300e78:
    if (ctx->pc == 0x300E78u) {
        ctx->pc = 0x300E78u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x300E7Cu;
        goto label_300e7c;
    }
    ctx->pc = 0x300E74u;
    {
        const bool branch_taken_0x300e74 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x300E78u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x300e74) {
            ctx->pc = 0x300E80u;
            goto label_300e80;
        }
    }
    ctx->pc = 0x300E7Cu;
label_300e7c:
    // 0x300e7c: 0x54a023
    ctx->pc = 0x300e7cu;
    SET_GPR_U32(ctx, 20, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_300e80:
    // 0x300e80: 0x2a820005
    ctx->pc = 0x300e80u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 5));
label_300e84:
    // 0x300e84: 0x1440000a
label_300e88:
    if (ctx->pc == 0x300E88u) {
        ctx->pc = 0x300E88u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 4));
        ctx->pc = 0x300E8Cu;
        goto label_300e8c;
    }
    ctx->pc = 0x300E84u;
    {
        const bool branch_taken_0x300e84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x300E88u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 4));
        if (branch_taken_0x300e84) {
            ctx->pc = 0x300EB0u;
            goto label_300eb0;
        }
    }
    ctx->pc = 0x300E8Cu;
label_300e8c:
    // 0x300e8c: 0x8fa40038
    ctx->pc = 0x300e8cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_300e90:
    // 0x300e90: 0x2694fffc
    ctx->pc = 0x300e90u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294967292));
label_300e94:
    // 0x300e94: 0x8fa20018
    ctx->pc = 0x300e94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_300e98:
    // 0x300e98: 0x2348821
    ctx->pc = 0x300e98u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_300e9c:
    // 0x300e9c: 0x942021
    ctx->pc = 0x300e9cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_300ea0:
    // 0x300ea0: 0x541021
    ctx->pc = 0x300ea0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_300ea4:
    // 0x300ea4: 0xafa40038
    ctx->pc = 0x300ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_300ea8:
    // 0x300ea8: 0x1000000a
label_300eac:
    if (ctx->pc == 0x300EACu) {
        ctx->pc = 0x300EACu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x300EB0u;
        goto label_300eb0;
    }
    ctx->pc = 0x300EA8u;
    {
        const bool branch_taken_0x300ea8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x300EACu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        if (branch_taken_0x300ea8) {
            ctx->pc = 0x300ED4u;
            goto label_300ed4;
        }
    }
    ctx->pc = 0x300EB0u;
label_300eb0:
    // 0x300eb0: 0x10400008
label_300eb4:
    if (ctx->pc == 0x300EB4u) {
        ctx->pc = 0x300EB4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->pc = 0x300EB8u;
        goto label_300eb8;
    }
    ctx->pc = 0x300EB0u;
    {
        const bool branch_taken_0x300eb0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x300EB4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 56)));
        if (branch_taken_0x300eb0) {
            ctx->pc = 0x300ED4u;
            goto label_300ed4;
        }
    }
    ctx->pc = 0x300EB8u;
label_300eb8:
    // 0x300eb8: 0x2694001c
    ctx->pc = 0x300eb8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 28));
label_300ebc:
    // 0x300ebc: 0x8fa40018
    ctx->pc = 0x300ebcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_300ec0:
    // 0x300ec0: 0x2348821
    ctx->pc = 0x300ec0u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_300ec4:
    // 0x300ec4: 0x741821
    ctx->pc = 0x300ec4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_300ec8:
    // 0x300ec8: 0x942021
    ctx->pc = 0x300ec8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_300ecc:
    // 0x300ecc: 0xafa30038
    ctx->pc = 0x300eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
label_300ed0:
    // 0x300ed0: 0xafa40018
    ctx->pc = 0x300ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_300ed4:
    // 0x300ed4: 0x8fa20018
    ctx->pc = 0x300ed4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_300ed8:
    // 0x300ed8: 0x18400005
label_300edc:
    if (ctx->pc == 0x300EDCu) {
        ctx->pc = 0x300EDCu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x300EE0u;
        goto label_300ee0;
    }
    ctx->pc = 0x300ED8u;
    {
        const bool branch_taken_0x300ed8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x300EDCu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        if (branch_taken_0x300ed8) {
            ctx->pc = 0x300EF0u;
            goto label_300ef0;
        }
    }
    ctx->pc = 0x300EE0u;
label_300ee0:
    // 0x300ee0: 0x40302d
    ctx->pc = 0x300ee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_300ee4:
    // 0x300ee4: 0xc0c0a02
label_300ee8:
    if (ctx->pc == 0x300EE8u) {
        ctx->pc = 0x300EE8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300EECu;
        goto label_300eec;
    }
    ctx->pc = 0x300EE4u;
    SET_GPR_U32(ctx, 31, 0x300EECu);
    ctx->pc = 0x300EE8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x302808u;
    {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x302808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300EECu; }
    }
    if (ctx->pc != 0x300EECu) { return; }
    ctx->pc = 0x300EECu;
label_300eec:
    // 0x300eec: 0xafa20048
    ctx->pc = 0x300eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_300ef0:
    // 0x300ef0: 0x8fa30038
    ctx->pc = 0x300ef0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_300ef4:
    // 0x300ef4: 0x18600005
label_300ef8:
    if (ctx->pc == 0x300EF8u) {
        ctx->pc = 0x300EF8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->pc = 0x300EFCu;
        goto label_300efc;
    }
    ctx->pc = 0x300EF4u;
    {
        const bool branch_taken_0x300ef4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x300EF8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        if (branch_taken_0x300ef4) {
            ctx->pc = 0x300F0Cu;
            goto label_300f0c;
        }
    }
    ctx->pc = 0x300EFCu;
label_300efc:
    // 0x300efc: 0x60302d
    ctx->pc = 0x300efcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_300f00:
    // 0x300f00: 0xc0c0a02
label_300f04:
    if (ctx->pc == 0x300F04u) {
        ctx->pc = 0x300F04u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300F08u;
        goto label_300f08;
    }
    ctx->pc = 0x300F00u;
    SET_GPR_U32(ctx, 31, 0x300F08u);
    ctx->pc = 0x300F04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x302808u;
    {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x302808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300F08u; }
    }
    if (ctx->pc != 0x300F08u) { return; }
    ctx->pc = 0x300F08u;
label_300f08:
    // 0x300f08: 0xafa20054
    ctx->pc = 0x300f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_300f0c:
    // 0x300f0c: 0x8fa40030
    ctx->pc = 0x300f0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_300f10:
    // 0x300f10: 0x10800016
label_300f14:
    if (ctx->pc == 0x300F14u) {
        ctx->pc = 0x300F14u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x300F18u;
        goto label_300f18;
    }
    ctx->pc = 0x300F10u;
    {
        const bool branch_taken_0x300f10 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x300F14u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        if (branch_taken_0x300f10) {
            ctx->pc = 0x300F6Cu;
            goto label_300f6c;
        }
    }
    ctx->pc = 0x300F18u;
label_300f18:
    // 0x300f18: 0xc0c0a60
label_300f1c:
    if (ctx->pc == 0x300F1Cu) {
        ctx->pc = 0x300F1Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->pc = 0x300F20u;
        goto label_300f20;
    }
    ctx->pc = 0x300F18u;
    SET_GPR_U32(ctx, 31, 0x300F20u);
    ctx->pc = 0x300F1Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
    ctx->pc = 0x302980u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x302980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300F20u; }
    }
    if (ctx->pc != 0x300F20u) { return; }
    ctx->pc = 0x300F20u;
label_300f20:
    // 0x300f20: 0x4410013
label_300f24:
    if (ctx->pc == 0x300F24u) {
        ctx->pc = 0x300F24u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x300F28u;
        goto label_300f28;
    }
    ctx->pc = 0x300F20u;
    {
        const bool branch_taken_0x300f20 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x300F24u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x300f20) {
            ctx->pc = 0x300F70u;
            goto label_300f70;
        }
    }
    ctx->pc = 0x300F28u;
label_300f28:
    // 0x300f28: 0x8fa50048
    ctx->pc = 0x300f28u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_300f2c:
    // 0x300f2c: 0x3c0202d
    ctx->pc = 0x300f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_300f30:
    // 0x300f30: 0x2406000a
    ctx->pc = 0x300f30u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
label_300f34:
    // 0x300f34: 0xc0c083e
label_300f38:
    if (ctx->pc == 0x300F38u) {
        ctx->pc = 0x300F38u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300F3Cu;
        goto label_300f3c;
    }
    ctx->pc = 0x300F34u;
    SET_GPR_U32(ctx, 31, 0x300F3Cu);
    ctx->pc = 0x300F38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3020F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x3020f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300F3Cu; }
    }
    if (ctx->pc != 0x300F3Cu) { return; }
    ctx->pc = 0x300F3Cu;
label_300f3c:
    // 0x300f3c: 0xafa20048
    ctx->pc = 0x300f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_300f40:
    // 0x300f40: 0x8fa20034
    ctx->pc = 0x300f40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_300f44:
    // 0x300f44: 0x10400007
label_300f48:
    if (ctx->pc == 0x300F48u) {
        ctx->pc = 0x300F48u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->pc = 0x300F4Cu;
        goto label_300f4c;
    }
    ctx->pc = 0x300F44u;
    {
        const bool branch_taken_0x300f44 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x300F48u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967295));
        if (branch_taken_0x300f44) {
            ctx->pc = 0x300F64u;
            goto label_300f64;
        }
    }
    ctx->pc = 0x300F4Cu;
label_300f4c:
    // 0x300f4c: 0x8fa50050
    ctx->pc = 0x300f4cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_300f50:
    // 0x300f50: 0x3c0202d
    ctx->pc = 0x300f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_300f54:
    // 0x300f54: 0x2406000a
    ctx->pc = 0x300f54u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
label_300f58:
    // 0x300f58: 0xc0c083e
label_300f5c:
    if (ctx->pc == 0x300F5Cu) {
        ctx->pc = 0x300F5Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300F60u;
        goto label_300f60;
    }
    ctx->pc = 0x300F58u;
    SET_GPR_U32(ctx, 31, 0x300F60u);
    ctx->pc = 0x300F5Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3020F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x3020f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300F60u; }
    }
    if (ctx->pc != 0x300F60u) { return; }
    ctx->pc = 0x300F60u;
label_300f60:
    // 0x300f60: 0xafa20050
    ctx->pc = 0x300f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_300f64:
    // 0x300f64: 0x8fa30028
    ctx->pc = 0x300f64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_300f68:
    // 0x300f68: 0xafa30020
    ctx->pc = 0x300f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_300f6c:
    // 0x300f6c: 0x8fa40020
    ctx->pc = 0x300f6cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_300f70:
    // 0x300f70: 0x5c80001a
label_300f74:
    if (ctx->pc == 0x300F74u) {
        ctx->pc = 0x300F74u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->pc = 0x300F78u;
        goto label_300f78;
    }
    ctx->pc = 0x300F70u;
    {
        const bool branch_taken_0x300f70 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x300f70) {
            ctx->pc = 0x300F74u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
            ctx->pc = 0x300FDCu;
            goto label_300fdc;
        }
    }
    ctx->pc = 0x300F78u;
label_300f78:
    // 0x300f78: 0x8fa30008
    ctx->pc = 0x300f78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_300f7c:
    // 0x300f7c: 0x28620003
    ctx->pc = 0x300f7cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
label_300f80:
    // 0x300f80: 0x54400016
label_300f84:
    if (ctx->pc == 0x300F84u) {
        ctx->pc = 0x300F84u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->pc = 0x300F88u;
        goto label_300f88;
    }
    ctx->pc = 0x300F80u;
    {
        const bool branch_taken_0x300f80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x300f80) {
            ctx->pc = 0x300F84u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 52)));
            ctx->pc = 0x300FDCu;
            goto label_300fdc;
        }
    }
    ctx->pc = 0x300F88u;
label_300f88:
    // 0x300f88: 0x480000b
label_300f8c:
    if (ctx->pc == 0x300F8Cu) {
        ctx->pc = 0x300F8Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->pc = 0x300F90u;
        goto label_300f90;
    }
    ctx->pc = 0x300F88u;
    {
        const bool branch_taken_0x300f88 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x300F8Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        if (branch_taken_0x300f88) {
            ctx->pc = 0x300FB8u;
            goto label_300fb8;
        }
    }
    ctx->pc = 0x300F90u;
label_300f90:
    // 0x300f90: 0x3c0202d
    ctx->pc = 0x300f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_300f94:
    // 0x300f94: 0x24060005
    ctx->pc = 0x300f94u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 5));
label_300f98:
    // 0x300f98: 0xc0c083e
label_300f9c:
    if (ctx->pc == 0x300F9Cu) {
        ctx->pc = 0x300F9Cu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300FA0u;
        goto label_300fa0;
    }
    ctx->pc = 0x300F98u;
    SET_GPR_U32(ctx, 31, 0x300FA0u);
    ctx->pc = 0x300F9Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3020F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x3020f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300FA0u; }
    }
    if (ctx->pc != 0x300FA0u) { return; }
    ctx->pc = 0x300FA0u;
label_300fa0:
    // 0x300fa0: 0xafa20054
    ctx->pc = 0x300fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_300fa4:
    // 0x300fa4: 0x8fa40048
    ctx->pc = 0x300fa4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_300fa8:
    // 0x300fa8: 0xc0c0a60
label_300fac:
    if (ctx->pc == 0x300FACu) {
        ctx->pc = 0x300FACu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300FB0u;
        goto label_300fb0;
    }
    ctx->pc = 0x300FA8u;
    SET_GPR_U32(ctx, 31, 0x300FB0u);
    ctx->pc = 0x300FACu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x302980u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x302980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300FB0u; }
    }
    if (ctx->pc != 0x300FB0u) { return; }
    ctx->pc = 0x300FB0u;
label_300fb0:
    // 0x300fb0: 0x1c400005
label_300fb4:
    if (ctx->pc == 0x300FB4u) {
        ctx->pc = 0x300FB4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->pc = 0x300FB8u;
        goto label_300fb8;
    }
    ctx->pc = 0x300FB0u;
    {
        const bool branch_taken_0x300fb0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x300FB4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 88)));
        if (branch_taken_0x300fb0) {
            ctx->pc = 0x300FC8u;
            goto label_300fc8;
        }
    }
    ctx->pc = 0x300FB8u;
label_300fb8:
    // 0x300fb8: 0x8fa4000c
    ctx->pc = 0x300fb8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_300fbc:
    // 0x300fbc: 0x49827
    ctx->pc = 0x300fbcu;
    SET_GPR_U32(ctx, 19, NOR32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_300fc0:
    // 0x300fc0: 0x100000db
label_300fc4:
    if (ctx->pc == 0x300FC4u) {
        ctx->pc = 0x300FC4u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x300FC8u;
        goto label_300fc8;
    }
    ctx->pc = 0x300FC0u;
    {
        const bool branch_taken_0x300fc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x300FC4u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x300fc0) {
            ctx->pc = 0x301330u;
            goto label_301330;
        }
    }
    ctx->pc = 0x300FC8u;
label_300fc8:
    // 0x300fc8: 0x24020031
    ctx->pc = 0x300fc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 49));
label_300fcc:
    // 0x300fcc: 0x26770002
    ctx->pc = 0x300fccu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 2));
label_300fd0:
    // 0x300fd0: 0xa0620000
    ctx->pc = 0x300fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_300fd4:
    // 0x300fd4: 0x100000d6
label_300fd8:
    if (ctx->pc == 0x300FD8u) {
        ctx->pc = 0x300FD8u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x300FDCu;
        goto label_300fdc;
    }
    ctx->pc = 0x300FD4u;
    {
        const bool branch_taken_0x300fd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x300FD8u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 3), 1));
        if (branch_taken_0x300fd4) {
            ctx->pc = 0x301330u;
            goto label_301330;
        }
    }
    ctx->pc = 0x300FDCu;
label_300fdc:
    // 0x300fdc: 0x10800095
label_300fe0:
    if (ctx->pc == 0x300FE0u) {
        ctx->pc = 0x300FE0u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x300FE4u;
        goto label_300fe4;
    }
    ctx->pc = 0x300FDCu;
    {
        const bool branch_taken_0x300fdc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x300FE0u;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x300fdc) {
            ctx->pc = 0x301234u;
            goto label_301234;
        }
    }
    ctx->pc = 0x300FE4u;
label_300fe4:
    // 0x300fe4: 0x1a200005
label_300fe8:
    if (ctx->pc == 0x300FE8u) {
        ctx->pc = 0x300FE8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x300FECu;
        goto label_300fec;
    }
    ctx->pc = 0x300FE4u;
    {
        const bool branch_taken_0x300fe4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x300FE8u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x300fe4) {
            ctx->pc = 0x300FFCu;
            goto label_300ffc;
        }
    }
    ctx->pc = 0x300FECu;
label_300fec:
    // 0x300fec: 0x220302d
    ctx->pc = 0x300fecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_300ff0:
    // 0x300ff0: 0xc0c0a02
label_300ff4:
    if (ctx->pc == 0x300FF4u) {
        ctx->pc = 0x300FF4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x300FF8u;
        goto label_300ff8;
    }
    ctx->pc = 0x300FF0u;
    SET_GPR_U32(ctx, 31, 0x300FF8u);
    ctx->pc = 0x300FF4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x302808u;
    {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x302808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300FF8u; }
    }
    if (ctx->pc != 0x300FF8u) { return; }
    ctx->pc = 0x300FF8u;
label_300ff8:
    // 0x300ff8: 0xafa20050
    ctx->pc = 0x300ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_300ffc:
    // 0x300ffc: 0x8fa20050
    ctx->pc = 0x300ffcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_301000:
    // 0x301000: 0x8fa30040
    ctx->pc = 0x301000u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_301004:
    // 0x301004: 0x10600012
label_301008:
    if (ctx->pc == 0x301008u) {
        ctx->pc = 0x301008u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x30100Cu;
        goto label_30100c;
    }
    ctx->pc = 0x301004u;
    {
        const bool branch_taken_0x301004 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x301008u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        if (branch_taken_0x301004) {
            ctx->pc = 0x301050u;
            goto label_301050;
        }
    }
    ctx->pc = 0x30100Cu;
label_30100c:
    // 0x30100c: 0x8c450004
    ctx->pc = 0x30100cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_301010:
    // 0x301010: 0xc0c0808
label_301014:
    if (ctx->pc == 0x301014u) {
        ctx->pc = 0x301014u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301018u;
        goto label_301018;
    }
    ctx->pc = 0x301010u;
    SET_GPR_U32(ctx, 31, 0x301018u);
    ctx->pc = 0x301014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x302020u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x302020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301018u; }
    }
    if (ctx->pc != 0x301018u) { return; }
    ctx->pc = 0x301018u;
label_301018:
    // 0x301018: 0x8fa4004c
    ctx->pc = 0x301018u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_30101c:
    // 0x30101c: 0x8c860010
    ctx->pc = 0x30101cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_301020:
    // 0x301020: 0xafa20050
    ctx->pc = 0x301020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_301024:
    // 0x301024: 0x63080
    ctx->pc = 0x301024u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
label_301028:
    // 0x301028: 0x2444000c
    ctx->pc = 0x301028u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 12));
label_30102c:
    // 0x30102c: 0x24c60008
    ctx->pc = 0x30102cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
label_301030:
    // 0x301030: 0x8fa2004c
    ctx->pc = 0x301030u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_301034:
    // 0x301034: 0xc0bec59
label_301038:
    if (ctx->pc == 0x301038u) {
        ctx->pc = 0x301038u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x30103Cu;
        goto label_30103c;
    }
    ctx->pc = 0x301034u;
    SET_GPR_U32(ctx, 31, 0x30103Cu);
    ctx->pc = 0x301038u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 12));
    ctx->pc = 0x2FB164u;
    {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x2fb164(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30103Cu; }
    }
    if (ctx->pc != 0x30103Cu) { return; }
    ctx->pc = 0x30103Cu;
label_30103c:
    // 0x30103c: 0x8fa50050
    ctx->pc = 0x30103cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_301040:
    // 0x301040: 0x3c0202d
    ctx->pc = 0x301040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_301044:
    // 0x301044: 0xc0c0a02
label_301048:
    if (ctx->pc == 0x301048u) {
        ctx->pc = 0x301048u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x30104Cu;
        goto label_30104c;
    }
    ctx->pc = 0x301044u;
    SET_GPR_U32(ctx, 31, 0x30104Cu);
    ctx->pc = 0x301048u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x302808u;
    {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x302808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30104Cu; }
    }
    if (ctx->pc != 0x30104Cu) { return; }
    ctx->pc = 0x30104Cu;
label_30104c:
    // 0x30104c: 0xafa20050
    ctx->pc = 0x30104cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_301050:
    // 0x301050: 0x24140001
    ctx->pc = 0x301050u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
label_301054:
    // 0x301054: 0x10000020
label_301058:
    if (ctx->pc == 0x301058u) {
        ctx->pc = 0x301058u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x30105Cu;
        goto label_30105c;
    }
    ctx->pc = 0x301054u;
    {
        const bool branch_taken_0x301054 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x301058u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x301054) {
            ctx->pc = 0x3010D8u;
            goto label_3010d8;
        }
    }
    ctx->pc = 0x30105Cu;
label_30105c:
    // 0x30105c: 0x0
    ctx->pc = 0x30105cu;
    // NOP
label_301060:
    // 0x301060: 0x8fa50048
    ctx->pc = 0x301060u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_301064:
    // 0x301064: 0x3c0202d
    ctx->pc = 0x301064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_301068:
    // 0x301068: 0x2406000a
    ctx->pc = 0x301068u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
label_30106c:
    // 0x30106c: 0xc0c083e
label_301070:
    if (ctx->pc == 0x301070u) {
        ctx->pc = 0x301070u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301074u;
        goto label_301074;
    }
    ctx->pc = 0x30106Cu;
    SET_GPR_U32(ctx, 31, 0x301074u);
    ctx->pc = 0x301070u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3020F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x3020f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301074u; }
    }
    if (ctx->pc != 0x301074u) { return; }
    ctx->pc = 0x301074u;
label_301074:
    // 0x301074: 0x8fa3004c
    ctx->pc = 0x301074u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_301078:
    // 0x301078: 0x8fa40050
    ctx->pc = 0x301078u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_30107c:
    // 0x30107c: 0x14640009
label_301080:
    if (ctx->pc == 0x301080u) {
        ctx->pc = 0x301080u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x301084u;
        goto label_301084;
    }
    ctx->pc = 0x30107Cu;
    {
        const bool branch_taken_0x30107c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x301080u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        if (branch_taken_0x30107c) {
            ctx->pc = 0x3010A4u;
            goto label_3010a4;
        }
    }
    ctx->pc = 0x301084u;
label_301084:
    // 0x301084: 0x80282d
    ctx->pc = 0x301084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_301088:
    // 0x301088: 0x2406000a
    ctx->pc = 0x301088u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
label_30108c:
    // 0x30108c: 0x3c0202d
    ctx->pc = 0x30108cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_301090:
    // 0x301090: 0xc0c083e
label_301094:
    if (ctx->pc == 0x301094u) {
        ctx->pc = 0x301094u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301098u;
        goto label_301098;
    }
    ctx->pc = 0x301090u;
    SET_GPR_U32(ctx, 31, 0x301098u);
    ctx->pc = 0x301094u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3020F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x3020f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301098u; }
    }
    if (ctx->pc != 0x301098u) { return; }
    ctx->pc = 0x301098u;
label_301098:
    // 0x301098: 0xafa20050
    ctx->pc = 0x301098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_30109c:
    // 0x30109c: 0x1000000d
label_3010a0:
    if (ctx->pc == 0x3010A0u) {
        ctx->pc = 0x3010A0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x3010A4u;
        goto label_3010a4;
    }
    ctx->pc = 0x30109Cu;
    {
        const bool branch_taken_0x30109c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3010A0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        if (branch_taken_0x30109c) {
            ctx->pc = 0x3010D4u;
            goto label_3010d4;
        }
    }
    ctx->pc = 0x3010A4u;
label_3010a4:
    // 0x3010a4: 0x8fa5004c
    ctx->pc = 0x3010a4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_3010a8:
    // 0x3010a8: 0x3c0202d
    ctx->pc = 0x3010a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3010ac:
    // 0x3010ac: 0x2406000a
    ctx->pc = 0x3010acu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
label_3010b0:
    // 0x3010b0: 0xc0c083e
label_3010b4:
    if (ctx->pc == 0x3010B4u) {
        ctx->pc = 0x3010B4u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3010B8u;
        goto label_3010b8;
    }
    ctx->pc = 0x3010B0u;
    SET_GPR_U32(ctx, 31, 0x3010B8u);
    ctx->pc = 0x3010B4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3020F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x3020f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3010B8u; }
    }
    if (ctx->pc != 0x3010B8u) { return; }
    ctx->pc = 0x3010B8u;
label_3010b8:
    // 0x3010b8: 0x8fa50050
    ctx->pc = 0x3010b8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3010bc:
    // 0x3010bc: 0x3c0202d
    ctx->pc = 0x3010bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3010c0:
    // 0x3010c0: 0xafa2004c
    ctx->pc = 0x3010c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_3010c4:
    // 0x3010c4: 0x2406000a
    ctx->pc = 0x3010c4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
label_3010c8:
    // 0x3010c8: 0xc0c083e
label_3010cc:
    if (ctx->pc == 0x3010CCu) {
        ctx->pc = 0x3010CCu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3010D0u;
        goto label_3010d0;
    }
    ctx->pc = 0x3010C8u;
    SET_GPR_U32(ctx, 31, 0x3010D0u);
    ctx->pc = 0x3010CCu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3020F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x3020f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3010D0u; }
    }
    if (ctx->pc != 0x3010D0u) { return; }
    ctx->pc = 0x3010D0u;
label_3010d0:
    // 0x3010d0: 0xafa20050
    ctx->pc = 0x3010d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_3010d4:
    // 0x3010d4: 0x26940001
    ctx->pc = 0x3010d4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_3010d8:
    // 0x3010d8: 0x8fa40048
    ctx->pc = 0x3010d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3010dc:
    // 0x3010dc: 0xc0bfffa
label_3010e0:
    if (ctx->pc == 0x3010E0u) {
        ctx->pc = 0x3010E0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->pc = 0x3010E4u;
        goto label_3010e4;
    }
    ctx->pc = 0x3010DCu;
    SET_GPR_U32(ctx, 31, 0x3010E4u);
    ctx->pc = 0x3010E0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
    ctx->pc = 0x2FFFE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        quorem_0x2fffe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3010E4u; }
    }
    if (ctx->pc != 0x3010E4u) { return; }
    ctx->pc = 0x3010E4u;
label_3010e4:
    // 0x3010e4: 0x8fa40048
    ctx->pc = 0x3010e4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3010e8:
    // 0x3010e8: 0x24530030
    ctx->pc = 0x3010e8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 48));
label_3010ec:
    // 0x3010ec: 0xc0c0a60
label_3010f0:
    if (ctx->pc == 0x3010F0u) {
        ctx->pc = 0x3010F0u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x3010F4u;
        goto label_3010f4;
    }
    ctx->pc = 0x3010ECu;
    SET_GPR_U32(ctx, 31, 0x3010F4u);
    ctx->pc = 0x3010F0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 76)));
    ctx->pc = 0x302980u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x302980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3010F4u; }
    }
    if (ctx->pc != 0x3010F4u) { return; }
    ctx->pc = 0x3010F4u;
label_3010f4:
    // 0x3010f4: 0x8fa50054
    ctx->pc = 0x3010f4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_3010f8:
    // 0x3010f8: 0x40802d
    ctx->pc = 0x3010f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3010fc:
    // 0x3010fc: 0x8fa60050
    ctx->pc = 0x3010fcu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_301100:
    // 0x301100: 0xc0c0a7a
label_301104:
    if (ctx->pc == 0x301104u) {
        ctx->pc = 0x301104u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301108u;
        goto label_301108;
    }
    ctx->pc = 0x301100u;
    SET_GPR_U32(ctx, 31, 0x301108u);
    ctx->pc = 0x301104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3029E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___mdiff_0x3029e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301108u; }
    }
    if (ctx->pc != 0x301108u) { return; }
    ctx->pc = 0x301108u;
label_301108:
    // 0x301108: 0x40902d
    ctx->pc = 0x301108u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_30110c:
    // 0x30110c: 0x8e42000c
    ctx->pc = 0x30110cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_301110:
    // 0x301110: 0x14400005
label_301114:
    if (ctx->pc == 0x301114u) {
        ctx->pc = 0x301114u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x301118u;
        goto label_301118;
    }
    ctx->pc = 0x301110u;
    {
        const bool branch_taken_0x301110 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x301114u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x301110) {
            ctx->pc = 0x301128u;
            goto label_301128;
        }
    }
    ctx->pc = 0x301118u;
label_301118:
    // 0x301118: 0x8fa40048
    ctx->pc = 0x301118u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_30111c:
    // 0x30111c: 0xc0c0a60
label_301120:
    if (ctx->pc == 0x301120u) {
        ctx->pc = 0x301120u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301124u;
        goto label_301124;
    }
    ctx->pc = 0x30111Cu;
    SET_GPR_U32(ctx, 31, 0x301124u);
    ctx->pc = 0x301120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x302980u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x302980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301124u; }
    }
    if (ctx->pc != 0x301124u) { return; }
    ctx->pc = 0x301124u;
label_301124:
    // 0x301124: 0x40882d
    ctx->pc = 0x301124u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_301128:
    // 0x301128: 0x240282d
    ctx->pc = 0x301128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30112c:
    // 0x30112c: 0xc0c0832
label_301130:
    if (ctx->pc == 0x301130u) {
        ctx->pc = 0x301130u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301134u;
        goto label_301134;
    }
    ctx->pc = 0x30112Cu;
    SET_GPR_U32(ctx, 31, 0x301134u);
    ctx->pc = 0x301130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3020C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x3020c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301134u; }
    }
    if (ctx->pc != 0x301134u) { return; }
    ctx->pc = 0x301134u;
label_301134:
    // 0x301134: 0x1620000d
label_301138:
    if (ctx->pc == 0x301138u) {
        ctx->pc = 0x301138u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->pc = 0x30113Cu;
        goto label_30113c;
    }
    ctx->pc = 0x301134u;
    {
        const bool branch_taken_0x301134 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x301138u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x301134) {
            ctx->pc = 0x30116Cu;
            goto label_30116c;
        }
    }
    ctx->pc = 0x30113Cu;
label_30113c:
    // 0x30113c: 0x1440000b
label_301140:
    if (ctx->pc == 0x301140u) {
        ctx->pc = 0x301144u;
        goto label_301144;
    }
    ctx->pc = 0x30113Cu;
    {
        const bool branch_taken_0x30113c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x30113c) {
            ctx->pc = 0x30116Cu;
            goto label_30116c;
        }
    }
    ctx->pc = 0x301144u;
label_301144:
    // 0x301144: 0x16103c
    ctx->pc = 0x301144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
label_301148:
    // 0x301148: 0x2103f
    ctx->pc = 0x301148u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_30114c:
    // 0x30114c: 0x30420001
    ctx->pc = 0x30114cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_301150:
    // 0x301150: 0x14400006
label_301154:
    if (ctx->pc == 0x301154u) {
        ctx->pc = 0x301154u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 57));
        ctx->pc = 0x301158u;
        goto label_301158;
    }
    ctx->pc = 0x301150u;
    {
        const bool branch_taken_0x301150 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x301154u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 57));
        if (branch_taken_0x301150) {
            ctx->pc = 0x30116Cu;
            goto label_30116c;
        }
    }
    ctx->pc = 0x301158u;
label_301158:
    // 0x301158: 0x1262002a
label_30115c:
    if (ctx->pc == 0x30115Cu) {
        ctx->pc = 0x30115Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 16)));
        ctx->pc = 0x301160u;
        goto label_301160;
    }
    ctx->pc = 0x301158u;
    {
        const bool branch_taken_0x301158 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x30115Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 16)));
        if (branch_taken_0x301158) {
            ctx->pc = 0x301204u;
            goto label_301204;
        }
    }
    ctx->pc = 0x301160u;
label_301160:
    // 0x301160: 0x539821
    ctx->pc = 0x301160u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_301164:
    // 0x301164: 0x10000071
label_301168:
    if (ctx->pc == 0x301168u) {
        ctx->pc = 0x301168u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->pc = 0x30116Cu;
        goto label_30116c;
    }
    ctx->pc = 0x301164u;
    {
        const bool branch_taken_0x301164 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x301168u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        if (branch_taken_0x301164) {
            ctx->pc = 0x30132Cu;
            goto label_30132c;
        }
    }
    ctx->pc = 0x30116Cu;
label_30116c:
    // 0x30116c: 0x600000a
label_301170:
    if (ctx->pc == 0x301170u) {
        ctx->pc = 0x301174u;
        goto label_301174;
    }
    ctx->pc = 0x30116Cu;
    {
        const bool branch_taken_0x30116c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x30116c) {
            ctx->pc = 0x301198u;
            goto label_301198;
        }
    }
    ctx->pc = 0x301174u;
label_301174:
    // 0x301174: 0x1600001f
label_301178:
    if (ctx->pc == 0x301178u) {
        ctx->pc = 0x301178u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->pc = 0x30117Cu;
        goto label_30117c;
    }
    ctx->pc = 0x301174u;
    {
        const bool branch_taken_0x301174 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x301178u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 8)));
        if (branch_taken_0x301174) {
            ctx->pc = 0x3011F4u;
            goto label_3011f4;
        }
    }
    ctx->pc = 0x30117Cu;
label_30117c:
    // 0x30117c: 0x1460001d
label_301180:
    if (ctx->pc == 0x301180u) {
        ctx->pc = 0x301184u;
        goto label_301184;
    }
    ctx->pc = 0x30117Cu;
    {
        const bool branch_taken_0x30117c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x30117c) {
            ctx->pc = 0x3011F4u;
            goto label_3011f4;
        }
    }
    ctx->pc = 0x301184u;
label_301184:
    // 0x301184: 0x16103c
    ctx->pc = 0x301184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
label_301188:
    // 0x301188: 0x2103f
    ctx->pc = 0x301188u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_30118c:
    // 0x30118c: 0x30420001
    ctx->pc = 0x30118cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
label_301190:
    // 0x301190: 0x14400018
label_301194:
    if (ctx->pc == 0x301194u) {
        ctx->pc = 0x301198u;
        goto label_301198;
    }
    ctx->pc = 0x301190u;
    {
        const bool branch_taken_0x301190 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x301190) {
            ctx->pc = 0x3011F4u;
            goto label_3011f4;
        }
    }
    ctx->pc = 0x301198u;
label_301198:
    // 0x301198: 0x1a200014
label_30119c:
    if (ctx->pc == 0x30119Cu) {
        ctx->pc = 0x30119Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x3011A0u;
        goto label_3011a0;
    }
    ctx->pc = 0x301198u;
    {
        const bool branch_taken_0x301198 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x30119Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        if (branch_taken_0x301198) {
            ctx->pc = 0x3011ECu;
            goto label_3011ec;
        }
    }
    ctx->pc = 0x3011A0u;
label_3011a0:
    // 0x3011a0: 0x3c0202d
    ctx->pc = 0x3011a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3011a4:
    // 0x3011a4: 0xc0c0a02
label_3011a8:
    if (ctx->pc == 0x3011A8u) {
        ctx->pc = 0x3011A8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3011ACu;
        goto label_3011ac;
    }
    ctx->pc = 0x3011A4u;
    SET_GPR_U32(ctx, 31, 0x3011ACu);
    ctx->pc = 0x3011A8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x302808u;
    {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x302808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3011ACu; }
    }
    if (ctx->pc != 0x3011ACu) { return; }
    ctx->pc = 0x3011ACu;
label_3011ac:
    // 0x3011ac: 0xafa20048
    ctx->pc = 0x3011acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_3011b0:
    // 0x3011b0: 0x8fa50054
    ctx->pc = 0x3011b0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_3011b4:
    // 0x3011b4: 0xc0c0a60
label_3011b8:
    if (ctx->pc == 0x3011B8u) {
        ctx->pc = 0x3011B8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3011BCu;
        goto label_3011bc;
    }
    ctx->pc = 0x3011B4u;
    SET_GPR_U32(ctx, 31, 0x3011BCu);
    ctx->pc = 0x3011B8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x302980u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x302980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3011BCu; }
    }
    if (ctx->pc != 0x3011BCu) { return; }
    ctx->pc = 0x3011BCu;
label_3011bc:
    // 0x3011bc: 0x40882d
    ctx->pc = 0x3011bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3011c0:
    // 0x3011c0: 0x5e200007
label_3011c4:
    if (ctx->pc == 0x3011C4u) {
        ctx->pc = 0x3011C4u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x3011C8u;
        goto label_3011c8;
    }
    ctx->pc = 0x3011C0u;
    {
        const bool branch_taken_0x3011c0 = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x3011c0) {
            ctx->pc = 0x3011C4u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x3011E0u;
            goto label_3011e0;
        }
    }
    ctx->pc = 0x3011C8u;
label_3011c8:
    // 0x3011c8: 0x56200058
label_3011cc:
    if (ctx->pc == 0x3011CCu) {
        ctx->pc = 0x3011CCu;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->pc = 0x3011D0u;
        goto label_3011d0;
    }
    ctx->pc = 0x3011C8u;
    {
        const bool branch_taken_0x3011c8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x3011c8) {
            ctx->pc = 0x3011CCu;
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
            ctx->pc = 0x30132Cu;
            goto label_30132c;
        }
    }
    ctx->pc = 0x3011D0u;
label_3011d0:
    // 0x3011d0: 0x32620001
    ctx->pc = 0x3011d0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 1));
label_3011d4:
    // 0x3011d4: 0x50400055
label_3011d8:
    if (ctx->pc == 0x3011D8u) {
        ctx->pc = 0x3011D8u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->pc = 0x3011DCu;
        goto label_3011dc;
    }
    ctx->pc = 0x3011D4u;
    {
        const bool branch_taken_0x3011d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x3011d4) {
            ctx->pc = 0x3011D8u;
            WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
            ctx->pc = 0x30132Cu;
            goto label_30132c;
        }
    }
    ctx->pc = 0x3011DCu;
label_3011dc:
    // 0x3011dc: 0x26730001
    ctx->pc = 0x3011dcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_3011e0:
    // 0x3011e0: 0x2402003a
    ctx->pc = 0x3011e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 58));
label_3011e4:
    // 0x3011e4: 0x12620008
label_3011e8:
    if (ctx->pc == 0x3011E8u) {
        ctx->pc = 0x3011E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 57));
        ctx->pc = 0x3011ECu;
        goto label_3011ec;
    }
    ctx->pc = 0x3011E4u;
    {
        const bool branch_taken_0x3011e4 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x3011E8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 57));
        if (branch_taken_0x3011e4) {
            ctx->pc = 0x301208u;
            goto label_301208;
        }
    }
    ctx->pc = 0x3011ECu;
label_3011ec:
    // 0x3011ec: 0x1000004f
label_3011f0:
    if (ctx->pc == 0x3011F0u) {
        ctx->pc = 0x3011F0u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        ctx->pc = 0x3011F4u;
        goto label_3011f4;
    }
    ctx->pc = 0x3011ECu;
    {
        const bool branch_taken_0x3011ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3011F0u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
        if (branch_taken_0x3011ec) {
            ctx->pc = 0x30132Cu;
            goto label_30132c;
        }
    }
    ctx->pc = 0x3011F4u;
label_3011f4:
    // 0x3011f4: 0x1a200009
label_3011f8:
    if (ctx->pc == 0x3011F8u) {
        ctx->pc = 0x3011F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 57));
        ctx->pc = 0x3011FCu;
        goto label_3011fc;
    }
    ctx->pc = 0x3011F4u;
    {
        const bool branch_taken_0x3011f4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3011F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 57));
        if (branch_taken_0x3011f4) {
            ctx->pc = 0x30121Cu;
            goto label_30121c;
        }
    }
    ctx->pc = 0x3011FCu;
label_3011fc:
    // 0x3011fc: 0x16620005
label_301200:
    if (ctx->pc == 0x301200u) {
        ctx->pc = 0x301200u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x301204u;
        goto label_301204;
    }
    ctx->pc = 0x3011FCu;
    {
        const bool branch_taken_0x3011fc = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x301200u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x3011fc) {
            ctx->pc = 0x301214u;
            goto label_301214;
        }
    }
    ctx->pc = 0x301204u;
label_301204:
    // 0x301204: 0x24020039
    ctx->pc = 0x301204u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 57));
label_301208:
    // 0x301208: 0xa2a20000
    ctx->pc = 0x301208u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_30120c:
    // 0x30120c: 0x1000002c
label_301210:
    if (ctx->pc == 0x301210u) {
        ctx->pc = 0x301210u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x301214u;
        goto label_301214;
    }
    ctx->pc = 0x30120Cu;
    {
        const bool branch_taken_0x30120c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x301210u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x30120c) {
            ctx->pc = 0x3012C0u;
            goto label_3012c0;
        }
    }
    ctx->pc = 0x301214u;
label_301214:
    // 0x301214: 0x10000045
label_301218:
    if (ctx->pc == 0x301218u) {
        ctx->pc = 0x301218u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x30121Cu;
        goto label_30121c;
    }
    ctx->pc = 0x301214u;
    {
        const bool branch_taken_0x301214 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x301218u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x301214) {
            ctx->pc = 0x30132Cu;
            goto label_30132c;
        }
    }
    ctx->pc = 0x30121Cu;
label_30121c:
    // 0x30121c: 0xa2b30000
    ctx->pc = 0x30121cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
label_301220:
    // 0x301220: 0x8fa40020
    ctx->pc = 0x301220u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_301224:
    // 0x301224: 0x1684ff8e
label_301228:
    if (ctx->pc == 0x301228u) {
        ctx->pc = 0x301228u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x30122Cu;
        goto label_30122c;
    }
    ctx->pc = 0x301224u;
    {
        const bool branch_taken_0x301224 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 4));
        ctx->pc = 0x301228u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x301224) {
            ctx->pc = 0x301060u;
            goto label_301060;
        }
    }
    ctx->pc = 0x30122Cu;
label_30122c:
    // 0x30122c: 0x10000015
label_301230:
    if (ctx->pc == 0x301230u) {
        ctx->pc = 0x301230u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x301234u;
        goto label_301234;
    }
    ctx->pc = 0x30122Cu;
    {
        const bool branch_taken_0x30122c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x301230u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        if (branch_taken_0x30122c) {
            ctx->pc = 0x301284u;
            goto label_301284;
        }
    }
    ctx->pc = 0x301234u;
label_301234:
    // 0x301234: 0x10000009
label_301238:
    if (ctx->pc == 0x301238u) {
        ctx->pc = 0x301238u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x30123Cu;
        goto label_30123c;
    }
    ctx->pc = 0x301234u;
    {
        const bool branch_taken_0x301234 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x301238u;
        SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x301234) {
            ctx->pc = 0x30125Cu;
            goto label_30125c;
        }
    }
    ctx->pc = 0x30123Cu;
label_30123c:
    // 0x30123c: 0x0
    ctx->pc = 0x30123cu;
    // NOP
label_301240:
    // 0x301240: 0x8fa50048
    ctx->pc = 0x301240u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_301244:
    // 0x301244: 0x3c0202d
    ctx->pc = 0x301244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_301248:
    // 0x301248: 0x2406000a
    ctx->pc = 0x301248u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
label_30124c:
    // 0x30124c: 0xc0c083e
label_301250:
    if (ctx->pc == 0x301250u) {
        ctx->pc = 0x301250u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301254u;
        goto label_301254;
    }
    ctx->pc = 0x30124Cu;
    SET_GPR_U32(ctx, 31, 0x301254u);
    ctx->pc = 0x301250u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3020F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x3020f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301254u; }
    }
    if (ctx->pc != 0x301254u) { return; }
    ctx->pc = 0x301254u;
label_301254:
    // 0x301254: 0x26940001
    ctx->pc = 0x301254u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_301258:
    // 0x301258: 0xafa20048
    ctx->pc = 0x301258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_30125c:
    // 0x30125c: 0x8fa40048
    ctx->pc = 0x30125cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_301260:
    // 0x301260: 0xc0bfffa
label_301264:
    if (ctx->pc == 0x301264u) {
        ctx->pc = 0x301264u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->pc = 0x301268u;
        goto label_301268;
    }
    ctx->pc = 0x301260u;
    SET_GPR_U32(ctx, 31, 0x301268u);
    ctx->pc = 0x301264u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
    ctx->pc = 0x2FFFE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        quorem_0x2fffe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301268u; }
    }
    if (ctx->pc != 0x301268u) { return; }
    ctx->pc = 0x301268u;
label_301268:
    // 0x301268: 0x24530030
    ctx->pc = 0x301268u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 48));
label_30126c:
    // 0x30126c: 0x8fa30020
    ctx->pc = 0x30126cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_301270:
    // 0x301270: 0xa2b30000
    ctx->pc = 0x301270u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 19));
label_301274:
    // 0x301274: 0x283102a
    ctx->pc = 0x301274u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 3)));
label_301278:
    // 0x301278: 0x1440fff1
label_30127c:
    if (ctx->pc == 0x30127Cu) {
        ctx->pc = 0x30127Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x301280u;
        goto label_301280;
    }
    ctx->pc = 0x301278u;
    {
        const bool branch_taken_0x301278 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x30127Cu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
        if (branch_taken_0x301278) {
            ctx->pc = 0x301240u;
            goto label_301240;
        }
    }
    ctx->pc = 0x301280u;
label_301280:
    // 0x301280: 0x8fa50048
    ctx->pc = 0x301280u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_301284:
    // 0x301284: 0x3c0202d
    ctx->pc = 0x301284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_301288:
    // 0x301288: 0xc0c0a02
label_30128c:
    if (ctx->pc == 0x30128Cu) {
        ctx->pc = 0x30128Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x301290u;
        goto label_301290;
    }
    ctx->pc = 0x301288u;
    SET_GPR_U32(ctx, 31, 0x301290u);
    ctx->pc = 0x30128Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x302808u;
    {
        const uint32_t __entryPc = ctx->pc;
        _lshift_0x302808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301290u; }
    }
    if (ctx->pc != 0x301290u) { return; }
    ctx->pc = 0x301290u;
label_301290:
    // 0x301290: 0xafa20048
    ctx->pc = 0x301290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_301294:
    // 0x301294: 0x8fa50054
    ctx->pc = 0x301294u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_301298:
    // 0x301298: 0xc0c0a60
label_30129c:
    if (ctx->pc == 0x30129Cu) {
        ctx->pc = 0x30129Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3012A0u;
        goto label_3012a0;
    }
    ctx->pc = 0x301298u;
    SET_GPR_U32(ctx, 31, 0x3012A0u);
    ctx->pc = 0x30129Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x302980u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___mcmp_0x302980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3012A0u; }
    }
    if (ctx->pc != 0x3012A0u) { return; }
    ctx->pc = 0x3012A0u;
label_3012a0:
    // 0x3012a0: 0x40802d
    ctx->pc = 0x3012a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3012a4:
    // 0x3012a4: 0x5e000007
label_3012a8:
    if (ctx->pc == 0x3012A8u) {
        ctx->pc = 0x3012A8u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->pc = 0x3012ACu;
        goto label_3012ac;
    }
    ctx->pc = 0x3012A4u;
    {
        const bool branch_taken_0x3012a4 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x3012a4) {
            ctx->pc = 0x3012A8u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->pc = 0x3012C4u;
            goto label_3012c4;
        }
    }
    ctx->pc = 0x3012ACu;
label_3012ac:
    // 0x3012ac: 0x16000018
label_3012b0:
    if (ctx->pc == 0x3012B0u) {
        ctx->pc = 0x3012B0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x3012B4u;
        goto label_3012b4;
    }
    ctx->pc = 0x3012ACu;
    {
        const bool branch_taken_0x3012ac = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x3012B0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x3012ac) {
            ctx->pc = 0x301310u;
            goto label_301310;
        }
    }
    ctx->pc = 0x3012B4u;
label_3012b4:
    // 0x3012b4: 0x32620001
    ctx->pc = 0x3012b4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 19), 1));
label_3012b8:
    // 0x3012b8: 0x50400016
label_3012bc:
    if (ctx->pc == 0x3012BCu) {
        ctx->pc = 0x3012BCu;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->pc = 0x3012C0u;
        goto label_3012c0;
    }
    ctx->pc = 0x3012B8u;
    {
        const bool branch_taken_0x3012b8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x3012b8) {
            ctx->pc = 0x3012BCu;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
            ctx->pc = 0x301314u;
            goto label_301314;
        }
    }
    ctx->pc = 0x3012C0u;
label_3012c0:
    // 0x3012c0: 0x26b5ffff
    ctx->pc = 0x3012c0u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
label_3012c4:
    // 0x3012c4: 0x10000005
label_3012c8:
    if (ctx->pc == 0x3012C8u) {
        ctx->pc = 0x3012C8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 57));
        ctx->pc = 0x3012CCu;
        goto label_3012cc;
    }
    ctx->pc = 0x3012C4u;
    {
        const bool branch_taken_0x3012c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3012C8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 57));
        if (branch_taken_0x3012c4) {
            ctx->pc = 0x3012DCu;
            goto label_3012dc;
        }
    }
    ctx->pc = 0x3012CCu;
label_3012cc:
    // 0x3012cc: 0x0
    ctx->pc = 0x3012ccu;
    // NOP
label_3012d0:
    // 0x3012d0: 0x8fa40058
    ctx->pc = 0x3012d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3012d4:
    // 0x3012d4: 0x12a40007
label_3012d8:
    if (ctx->pc == 0x3012D8u) {
        ctx->pc = 0x3012D8u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->pc = 0x3012DCu;
        goto label_3012dc;
    }
    ctx->pc = 0x3012D4u;
    {
        const bool branch_taken_0x3012d4 = (GPR_U32(ctx, 21) == GPR_U32(ctx, 4));
        ctx->pc = 0x3012D8u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
        if (branch_taken_0x3012d4) {
            ctx->pc = 0x3012F4u;
            goto label_3012f4;
        }
    }
    ctx->pc = 0x3012DCu;
label_3012dc:
    // 0x3012dc: 0x82a20000
    ctx->pc = 0x3012dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_3012e0:
    // 0x3012e0: 0x1043fffb
label_3012e4:
    if (ctx->pc == 0x3012E4u) {
        ctx->pc = 0x3012E4u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x3012E8u;
        goto label_3012e8;
    }
    ctx->pc = 0x3012E0u;
    {
        const bool branch_taken_0x3012e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x3012E4u;
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        if (branch_taken_0x3012e0) {
            ctx->pc = 0x3012D0u;
            goto label_3012d0;
        }
    }
    ctx->pc = 0x3012E8u;
label_3012e8:
    // 0x3012e8: 0x24820001
    ctx->pc = 0x3012e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 1));
label_3012ec:
    // 0x3012ec: 0x1000000f
label_3012f0:
    if (ctx->pc == 0x3012F0u) {
        ctx->pc = 0x3012F0u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3012F4u;
        goto label_3012f4;
    }
    ctx->pc = 0x3012ECu;
    {
        const bool branch_taken_0x3012ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x3012F0u;
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x3012ec) {
            ctx->pc = 0x30132Cu;
            goto label_30132c;
        }
    }
    ctx->pc = 0x3012F4u;
label_3012f4:
    // 0x3012f4: 0x8fa30058
    ctx->pc = 0x3012f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3012f8:
    // 0x3012f8: 0x24020031
    ctx->pc = 0x3012f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 49));
label_3012fc:
    // 0x3012fc: 0x26f70001
    ctx->pc = 0x3012fcu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
label_301300:
    // 0x301300: 0x24750001
    ctx->pc = 0x301300u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 3), 1));
label_301304:
    // 0x301304: 0x1000000a
label_301308:
    if (ctx->pc == 0x301308u) {
        ctx->pc = 0x301308u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x30130Cu;
        goto label_30130c;
    }
    ctx->pc = 0x301304u;
    {
        const bool branch_taken_0x301304 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x301308u;
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        if (branch_taken_0x301304) {
            ctx->pc = 0x301330u;
            goto label_301330;
        }
    }
    ctx->pc = 0x30130Cu;
label_30130c:
    // 0x30130c: 0x0
    ctx->pc = 0x30130cu;
    // NOP
label_301310:
    // 0x301310: 0x26b5ffff
    ctx->pc = 0x301310u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 4294967295));
label_301314:
    // 0x301314: 0x82a20000
    ctx->pc = 0x301314u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_301318:
    // 0x301318: 0x0
    ctx->pc = 0x301318u;
    // NOP
label_30131c:
    // 0x30131c: 0x0
    ctx->pc = 0x30131cu;
    // NOP
label_301320:
    // 0x301320: 0x0
    ctx->pc = 0x301320u;
    // NOP
label_301324:
    // 0x301324: 0x1043fffa
label_301328:
    if (ctx->pc == 0x301328u) {
        ctx->pc = 0x30132Cu;
        goto label_30132c;
    }
    ctx->pc = 0x301324u;
    {
        const bool branch_taken_0x301324 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x301324) {
            ctx->pc = 0x301310u;
            goto label_301310;
        }
    }
    ctx->pc = 0x30132Cu;
label_30132c:
    // 0x30132c: 0x26b50001
    ctx->pc = 0x30132cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
label_301330:
    // 0x301330: 0x8fa50054
    ctx->pc = 0x301330u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_301334:
    // 0x301334: 0xc0c0832
label_301338:
    if (ctx->pc == 0x301338u) {
        ctx->pc = 0x301338u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30133Cu;
        goto label_30133c;
    }
    ctx->pc = 0x301334u;
    SET_GPR_U32(ctx, 31, 0x30133Cu);
    ctx->pc = 0x301338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3020C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x3020c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30133Cu; }
    }
    if (ctx->pc != 0x30133Cu) { return; }
    ctx->pc = 0x30133Cu;
label_30133c:
    // 0x30133c: 0x8fa40050
    ctx->pc = 0x30133cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_301340:
    // 0x301340: 0x1080000c
label_301344:
    if (ctx->pc == 0x301344u) {
        ctx->pc = 0x301344u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->pc = 0x301348u;
        goto label_301348;
    }
    ctx->pc = 0x301340u;
    {
        const bool branch_taken_0x301340 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x301344u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 76)));
        if (branch_taken_0x301340) {
            ctx->pc = 0x301374u;
            goto label_301374;
        }
    }
    ctx->pc = 0x301348u;
label_301348:
    // 0x301348: 0x10400006
label_30134c:
    if (ctx->pc == 0x30134Cu) {
        ctx->pc = 0x30134Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x301350u;
        goto label_301350;
    }
    ctx->pc = 0x301348u;
    {
        const bool branch_taken_0x301348 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x30134Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x301348) {
            ctx->pc = 0x301364u;
            goto label_301364;
        }
    }
    ctx->pc = 0x301350u;
label_301350:
    // 0x301350: 0x10440003
label_301354:
    if (ctx->pc == 0x301354u) {
        ctx->pc = 0x301354u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301358u;
        goto label_301358;
    }
    ctx->pc = 0x301350u;
    {
        const bool branch_taken_0x301350 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x301354u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x301350) {
            ctx->pc = 0x301360u;
            goto label_301360;
        }
    }
    ctx->pc = 0x301358u;
label_301358:
    // 0x301358: 0xc0c0832
label_30135c:
    if (ctx->pc == 0x30135Cu) {
        ctx->pc = 0x30135Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301360u;
        goto label_301360;
    }
    ctx->pc = 0x301358u;
    SET_GPR_U32(ctx, 31, 0x301360u);
    ctx->pc = 0x30135Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3020C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x3020c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301360u; }
    }
    if (ctx->pc != 0x301360u) { return; }
    ctx->pc = 0x301360u;
label_301360:
    // 0x301360: 0x8fa50050
    ctx->pc = 0x301360u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_301364:
    // 0x301364: 0xc0c0832
label_301368:
    if (ctx->pc == 0x301368u) {
        ctx->pc = 0x301368u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x30136Cu;
        goto label_30136c;
    }
    ctx->pc = 0x301364u;
    SET_GPR_U32(ctx, 31, 0x30136Cu);
    ctx->pc = 0x301368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3020C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x3020c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30136Cu; }
    }
    if (ctx->pc != 0x30136Cu) { return; }
    ctx->pc = 0x30136Cu;
label_30136c:
    // 0x30136c: 0x10000002
label_301370:
    if (ctx->pc == 0x301370u) {
        ctx->pc = 0x301370u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->pc = 0x301374u;
        goto label_301374;
    }
    ctx->pc = 0x30136Cu;
    {
        const bool branch_taken_0x30136c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x301370u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
        if (branch_taken_0x30136c) {
            ctx->pc = 0x301378u;
            goto label_301378;
        }
    }
    ctx->pc = 0x301374u;
label_301374:
    // 0x301374: 0x8fa50048
    ctx->pc = 0x301374u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_301378:
    // 0x301378: 0xc0c0832
label_30137c:
    if (ctx->pc == 0x30137Cu) {
        ctx->pc = 0x30137Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x301380u;
        goto label_301380;
    }
    ctx->pc = 0x301378u;
    SET_GPR_U32(ctx, 31, 0x301380u);
    ctx->pc = 0x30137Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x3020C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Bfree_0x3020c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x301380u; }
    }
    if (ctx->pc != 0x301380u) { return; }
    ctx->pc = 0x301380u;
label_301380:
    // 0x301380: 0xa2a00000
    ctx->pc = 0x301380u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
label_301384:
    // 0x301384: 0x8fa30010
    ctx->pc = 0x301384u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_301388:
    // 0x301388: 0xac770000
    ctx->pc = 0x301388u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 23));
label_30138c:
    // 0x30138c: 0x8fa40014
    ctx->pc = 0x30138cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_301390:
    // 0x301390: 0x54800001
label_301394:
    if (ctx->pc == 0x301394u) {
        ctx->pc = 0x301394u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
        ctx->pc = 0x301398u;
        goto label_301398;
    }
    ctx->pc = 0x301390u;
    {
        const bool branch_taken_0x301390 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x301390) {
            ctx->pc = 0x301394u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
            ctx->pc = 0x301398u;
            goto label_301398;
        }
    }
    ctx->pc = 0x301398u;
label_301398:
    // 0x301398: 0x8fa20058
    ctx->pc = 0x301398u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_30139c:
    // 0x30139c: 0xdfbf00f0
    ctx->pc = 0x30139cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_3013a0:
    // 0x3013a0: 0xdfbe00e0
    ctx->pc = 0x3013a0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_3013a4:
    // 0x3013a4: 0xdfb700d0
    ctx->pc = 0x3013a4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_3013a8:
    // 0x3013a8: 0xdfb600c0
    ctx->pc = 0x3013a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_3013ac:
    // 0x3013ac: 0xdfb500b0
    ctx->pc = 0x3013acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_3013b0:
    // 0x3013b0: 0xdfb400a0
    ctx->pc = 0x3013b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3013b4:
    // 0x3013b4: 0xdfb30090
    ctx->pc = 0x3013b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3013b8:
    // 0x3013b8: 0xdfb20080
    ctx->pc = 0x3013b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3013bc:
    // 0x3013bc: 0xdfb10070
    ctx->pc = 0x3013bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3013c0:
    // 0x3013c0: 0xdfb00060
    ctx->pc = 0x3013c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3013c4:
    // 0x3013c4: 0x3e00008
label_3013c8:
    if (ctx->pc == 0x3013C8u) {
        ctx->pc = 0x3013C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x3013CCu;
        goto label_fallthrough_0x3013c4;
    }
    ctx->pc = 0x3013C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3013C8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x300200u: goto label_300200;
            case 0x300204u: goto label_300204;
            case 0x300208u: goto label_300208;
            case 0x30020Cu: goto label_30020c;
            case 0x300210u: goto label_300210;
            case 0x300214u: goto label_300214;
            case 0x300218u: goto label_300218;
            case 0x30021Cu: goto label_30021c;
            case 0x300220u: goto label_300220;
            case 0x300224u: goto label_300224;
            case 0x300228u: goto label_300228;
            case 0x30022Cu: goto label_30022c;
            case 0x300230u: goto label_300230;
            case 0x300234u: goto label_300234;
            case 0x300238u: goto label_300238;
            case 0x30023Cu: goto label_30023c;
            case 0x300240u: goto label_300240;
            case 0x300244u: goto label_300244;
            case 0x300248u: goto label_300248;
            case 0x30024Cu: goto label_30024c;
            case 0x300250u: goto label_300250;
            case 0x300254u: goto label_300254;
            case 0x300258u: goto label_300258;
            case 0x30025Cu: goto label_30025c;
            case 0x300260u: goto label_300260;
            case 0x300264u: goto label_300264;
            case 0x300268u: goto label_300268;
            case 0x30026Cu: goto label_30026c;
            case 0x300270u: goto label_300270;
            case 0x300274u: goto label_300274;
            case 0x300278u: goto label_300278;
            case 0x30027Cu: goto label_30027c;
            case 0x300280u: goto label_300280;
            case 0x300284u: goto label_300284;
            case 0x300288u: goto label_300288;
            case 0x30028Cu: goto label_30028c;
            case 0x300290u: goto label_300290;
            case 0x300294u: goto label_300294;
            case 0x300298u: goto label_300298;
            case 0x30029Cu: goto label_30029c;
            case 0x3002A0u: goto label_3002a0;
            case 0x3002A4u: goto label_3002a4;
            case 0x3002A8u: goto label_3002a8;
            case 0x3002ACu: goto label_3002ac;
            case 0x3002B0u: goto label_3002b0;
            case 0x3002B4u: goto label_3002b4;
            case 0x3002B8u: goto label_3002b8;
            case 0x3002BCu: goto label_3002bc;
            case 0x3002C0u: goto label_3002c0;
            case 0x3002C4u: goto label_3002c4;
            case 0x3002C8u: goto label_3002c8;
            case 0x3002CCu: goto label_3002cc;
            case 0x3002D0u: goto label_3002d0;
            case 0x3002D4u: goto label_3002d4;
            case 0x3002D8u: goto label_3002d8;
            case 0x3002DCu: goto label_3002dc;
            case 0x3002E0u: goto label_3002e0;
            case 0x3002E4u: goto label_3002e4;
            case 0x3002E8u: goto label_3002e8;
            case 0x3002ECu: goto label_3002ec;
            case 0x3002F0u: goto label_3002f0;
            case 0x3002F4u: goto label_3002f4;
            case 0x3002F8u: goto label_3002f8;
            case 0x3002FCu: goto label_3002fc;
            case 0x300300u: goto label_300300;
            case 0x300304u: goto label_300304;
            case 0x300308u: goto label_300308;
            case 0x30030Cu: goto label_30030c;
            case 0x300310u: goto label_300310;
            case 0x300314u: goto label_300314;
            case 0x300318u: goto label_300318;
            case 0x30031Cu: goto label_30031c;
            case 0x300320u: goto label_300320;
            case 0x300324u: goto label_300324;
            case 0x300328u: goto label_300328;
            case 0x30032Cu: goto label_30032c;
            case 0x300330u: goto label_300330;
            case 0x300334u: goto label_300334;
            case 0x300338u: goto label_300338;
            case 0x30033Cu: goto label_30033c;
            case 0x300340u: goto label_300340;
            case 0x300344u: goto label_300344;
            case 0x300348u: goto label_300348;
            case 0x30034Cu: goto label_30034c;
            case 0x300350u: goto label_300350;
            case 0x300354u: goto label_300354;
            case 0x300358u: goto label_300358;
            case 0x30035Cu: goto label_30035c;
            case 0x300360u: goto label_300360;
            case 0x300364u: goto label_300364;
            case 0x300368u: goto label_300368;
            case 0x30036Cu: goto label_30036c;
            case 0x300370u: goto label_300370;
            case 0x300374u: goto label_300374;
            case 0x300378u: goto label_300378;
            case 0x30037Cu: goto label_30037c;
            case 0x300380u: goto label_300380;
            case 0x300384u: goto label_300384;
            case 0x300388u: goto label_300388;
            case 0x30038Cu: goto label_30038c;
            case 0x300390u: goto label_300390;
            case 0x300394u: goto label_300394;
            case 0x300398u: goto label_300398;
            case 0x30039Cu: goto label_30039c;
            case 0x3003A0u: goto label_3003a0;
            case 0x3003A4u: goto label_3003a4;
            case 0x3003A8u: goto label_3003a8;
            case 0x3003ACu: goto label_3003ac;
            case 0x3003B0u: goto label_3003b0;
            case 0x3003B4u: goto label_3003b4;
            case 0x3003B8u: goto label_3003b8;
            case 0x3003BCu: goto label_3003bc;
            case 0x3003C0u: goto label_3003c0;
            case 0x3003C4u: goto label_3003c4;
            case 0x3003C8u: goto label_3003c8;
            case 0x3003CCu: goto label_3003cc;
            case 0x3003D0u: goto label_3003d0;
            case 0x3003D4u: goto label_3003d4;
            case 0x3003D8u: goto label_3003d8;
            case 0x3003DCu: goto label_3003dc;
            case 0x3003E0u: goto label_3003e0;
            case 0x3003E4u: goto label_3003e4;
            case 0x3003E8u: goto label_3003e8;
            case 0x3003ECu: goto label_3003ec;
            case 0x3003F0u: goto label_3003f0;
            case 0x3003F4u: goto label_3003f4;
            case 0x3003F8u: goto label_3003f8;
            case 0x3003FCu: goto label_3003fc;
            case 0x300400u: goto label_300400;
            case 0x300404u: goto label_300404;
            case 0x300408u: goto label_300408;
            case 0x30040Cu: goto label_30040c;
            case 0x300410u: goto label_300410;
            case 0x300414u: goto label_300414;
            case 0x300418u: goto label_300418;
            case 0x30041Cu: goto label_30041c;
            case 0x300420u: goto label_300420;
            case 0x300424u: goto label_300424;
            case 0x300428u: goto label_300428;
            case 0x30042Cu: goto label_30042c;
            case 0x300430u: goto label_300430;
            case 0x300434u: goto label_300434;
            case 0x300438u: goto label_300438;
            case 0x30043Cu: goto label_30043c;
            case 0x300440u: goto label_300440;
            case 0x300444u: goto label_300444;
            case 0x300448u: goto label_300448;
            case 0x30044Cu: goto label_30044c;
            case 0x300450u: goto label_300450;
            case 0x300454u: goto label_300454;
            case 0x300458u: goto label_300458;
            case 0x30045Cu: goto label_30045c;
            case 0x300460u: goto label_300460;
            case 0x300464u: goto label_300464;
            case 0x300468u: goto label_300468;
            case 0x30046Cu: goto label_30046c;
            case 0x300470u: goto label_300470;
            case 0x300474u: goto label_300474;
            case 0x300478u: goto label_300478;
            case 0x30047Cu: goto label_30047c;
            case 0x300480u: goto label_300480;
            case 0x300484u: goto label_300484;
            case 0x300488u: goto label_300488;
            case 0x30048Cu: goto label_30048c;
            case 0x300490u: goto label_300490;
            case 0x300494u: goto label_300494;
            case 0x300498u: goto label_300498;
            case 0x30049Cu: goto label_30049c;
            case 0x3004A0u: goto label_3004a0;
            case 0x3004A4u: goto label_3004a4;
            case 0x3004A8u: goto label_3004a8;
            case 0x3004ACu: goto label_3004ac;
            case 0x3004B0u: goto label_3004b0;
            case 0x3004B4u: goto label_3004b4;
            case 0x3004B8u: goto label_3004b8;
            case 0x3004BCu: goto label_3004bc;
            case 0x3004C0u: goto label_3004c0;
            case 0x3004C4u: goto label_3004c4;
            case 0x3004C8u: goto label_3004c8;
            case 0x3004CCu: goto label_3004cc;
            case 0x3004D0u: goto label_3004d0;
            case 0x3004D4u: goto label_3004d4;
            case 0x3004D8u: goto label_3004d8;
            case 0x3004DCu: goto label_3004dc;
            case 0x3004E0u: goto label_3004e0;
            case 0x3004E4u: goto label_3004e4;
            case 0x3004E8u: goto label_3004e8;
            case 0x3004ECu: goto label_3004ec;
            case 0x3004F0u: goto label_3004f0;
            case 0x3004F4u: goto label_3004f4;
            case 0x3004F8u: goto label_3004f8;
            case 0x3004FCu: goto label_3004fc;
            case 0x300500u: goto label_300500;
            case 0x300504u: goto label_300504;
            case 0x300508u: goto label_300508;
            case 0x30050Cu: goto label_30050c;
            case 0x300510u: goto label_300510;
            case 0x300514u: goto label_300514;
            case 0x300518u: goto label_300518;
            case 0x30051Cu: goto label_30051c;
            case 0x300520u: goto label_300520;
            case 0x300524u: goto label_300524;
            case 0x300528u: goto label_300528;
            case 0x30052Cu: goto label_30052c;
            case 0x300530u: goto label_300530;
            case 0x300534u: goto label_300534;
            case 0x300538u: goto label_300538;
            case 0x30053Cu: goto label_30053c;
            case 0x300540u: goto label_300540;
            case 0x300544u: goto label_300544;
            case 0x300548u: goto label_300548;
            case 0x30054Cu: goto label_30054c;
            case 0x300550u: goto label_300550;
            case 0x300554u: goto label_300554;
            case 0x300558u: goto label_300558;
            case 0x30055Cu: goto label_30055c;
            case 0x300560u: goto label_300560;
            case 0x300564u: goto label_300564;
            case 0x300568u: goto label_300568;
            case 0x30056Cu: goto label_30056c;
            case 0x300570u: goto label_300570;
            case 0x300574u: goto label_300574;
            case 0x300578u: goto label_300578;
            case 0x30057Cu: goto label_30057c;
            case 0x300580u: goto label_300580;
            case 0x300584u: goto label_300584;
            case 0x300588u: goto label_300588;
            case 0x30058Cu: goto label_30058c;
            case 0x300590u: goto label_300590;
            case 0x300594u: goto label_300594;
            case 0x300598u: goto label_300598;
            case 0x30059Cu: goto label_30059c;
            case 0x3005A0u: goto label_3005a0;
            case 0x3005A4u: goto label_3005a4;
            case 0x3005A8u: goto label_3005a8;
            case 0x3005ACu: goto label_3005ac;
            case 0x3005B0u: goto label_3005b0;
            case 0x3005B4u: goto label_3005b4;
            case 0x3005B8u: goto label_3005b8;
            case 0x3005BCu: goto label_3005bc;
            case 0x3005C0u: goto label_3005c0;
            case 0x3005C4u: goto label_3005c4;
            case 0x3005C8u: goto label_3005c8;
            case 0x3005CCu: goto label_3005cc;
            case 0x3005D0u: goto label_3005d0;
            case 0x3005D4u: goto label_3005d4;
            case 0x3005D8u: goto label_3005d8;
            case 0x3005DCu: goto label_3005dc;
            case 0x3005E0u: goto label_3005e0;
            case 0x3005E4u: goto label_3005e4;
            case 0x3005E8u: goto label_3005e8;
            case 0x3005ECu: goto label_3005ec;
            case 0x3005F0u: goto label_3005f0;
            case 0x3005F4u: goto label_3005f4;
            case 0x3005F8u: goto label_3005f8;
            case 0x3005FCu: goto label_3005fc;
            case 0x300600u: goto label_300600;
            case 0x300604u: goto label_300604;
            case 0x300608u: goto label_300608;
            case 0x30060Cu: goto label_30060c;
            case 0x300610u: goto label_300610;
            case 0x300614u: goto label_300614;
            case 0x300618u: goto label_300618;
            case 0x30061Cu: goto label_30061c;
            case 0x300620u: goto label_300620;
            case 0x300624u: goto label_300624;
            case 0x300628u: goto label_300628;
            case 0x30062Cu: goto label_30062c;
            case 0x300630u: goto label_300630;
            case 0x300634u: goto label_300634;
            case 0x300638u: goto label_300638;
            case 0x30063Cu: goto label_30063c;
            case 0x300640u: goto label_300640;
            case 0x300644u: goto label_300644;
            case 0x300648u: goto label_300648;
            case 0x30064Cu: goto label_30064c;
            case 0x300650u: goto label_300650;
            case 0x300654u: goto label_300654;
            case 0x300658u: goto label_300658;
            case 0x30065Cu: goto label_30065c;
            case 0x300660u: goto label_300660;
            case 0x300664u: goto label_300664;
            case 0x300668u: goto label_300668;
            case 0x30066Cu: goto label_30066c;
            case 0x300670u: goto label_300670;
            case 0x300674u: goto label_300674;
            case 0x300678u: goto label_300678;
            case 0x30067Cu: goto label_30067c;
            case 0x300680u: goto label_300680;
            case 0x300684u: goto label_300684;
            case 0x300688u: goto label_300688;
            case 0x30068Cu: goto label_30068c;
            case 0x300690u: goto label_300690;
            case 0x300694u: goto label_300694;
            case 0x300698u: goto label_300698;
            case 0x30069Cu: goto label_30069c;
            case 0x3006A0u: goto label_3006a0;
            case 0x3006A4u: goto label_3006a4;
            case 0x3006A8u: goto label_3006a8;
            case 0x3006ACu: goto label_3006ac;
            case 0x3006B0u: goto label_3006b0;
            case 0x3006B4u: goto label_3006b4;
            case 0x3006B8u: goto label_3006b8;
            case 0x3006BCu: goto label_3006bc;
            case 0x3006C0u: goto label_3006c0;
            case 0x3006C4u: goto label_3006c4;
            case 0x3006C8u: goto label_3006c8;
            case 0x3006CCu: goto label_3006cc;
            case 0x3006D0u: goto label_3006d0;
            case 0x3006D4u: goto label_3006d4;
            case 0x3006D8u: goto label_3006d8;
            case 0x3006DCu: goto label_3006dc;
            case 0x3006E0u: goto label_3006e0;
            case 0x3006E4u: goto label_3006e4;
            case 0x3006E8u: goto label_3006e8;
            case 0x3006ECu: goto label_3006ec;
            case 0x3006F0u: goto label_3006f0;
            case 0x3006F4u: goto label_3006f4;
            case 0x3006F8u: goto label_3006f8;
            case 0x3006FCu: goto label_3006fc;
            case 0x300700u: goto label_300700;
            case 0x300704u: goto label_300704;
            case 0x300708u: goto label_300708;
            case 0x30070Cu: goto label_30070c;
            case 0x300710u: goto label_300710;
            case 0x300714u: goto label_300714;
            case 0x300718u: goto label_300718;
            case 0x30071Cu: goto label_30071c;
            case 0x300720u: goto label_300720;
            case 0x300724u: goto label_300724;
            case 0x300728u: goto label_300728;
            case 0x30072Cu: goto label_30072c;
            case 0x300730u: goto label_300730;
            case 0x300734u: goto label_300734;
            case 0x300738u: goto label_300738;
            case 0x30073Cu: goto label_30073c;
            case 0x300740u: goto label_300740;
            case 0x300744u: goto label_300744;
            case 0x300748u: goto label_300748;
            case 0x30074Cu: goto label_30074c;
            case 0x300750u: goto label_300750;
            case 0x300754u: goto label_300754;
            case 0x300758u: goto label_300758;
            case 0x30075Cu: goto label_30075c;
            case 0x300760u: goto label_300760;
            case 0x300764u: goto label_300764;
            case 0x300768u: goto label_300768;
            case 0x30076Cu: goto label_30076c;
            case 0x300770u: goto label_300770;
            case 0x300774u: goto label_300774;
            case 0x300778u: goto label_300778;
            case 0x30077Cu: goto label_30077c;
            case 0x300780u: goto label_300780;
            case 0x300784u: goto label_300784;
            case 0x300788u: goto label_300788;
            case 0x30078Cu: goto label_30078c;
            case 0x300790u: goto label_300790;
            case 0x300794u: goto label_300794;
            case 0x300798u: goto label_300798;
            case 0x30079Cu: goto label_30079c;
            case 0x3007A0u: goto label_3007a0;
            case 0x3007A4u: goto label_3007a4;
            case 0x3007A8u: goto label_3007a8;
            case 0x3007ACu: goto label_3007ac;
            case 0x3007B0u: goto label_3007b0;
            case 0x3007B4u: goto label_3007b4;
            case 0x3007B8u: goto label_3007b8;
            case 0x3007BCu: goto label_3007bc;
            case 0x3007C0u: goto label_3007c0;
            case 0x3007C4u: goto label_3007c4;
            case 0x3007C8u: goto label_3007c8;
            case 0x3007CCu: goto label_3007cc;
            case 0x3007D0u: goto label_3007d0;
            case 0x3007D4u: goto label_3007d4;
            case 0x3007D8u: goto label_3007d8;
            case 0x3007DCu: goto label_3007dc;
            case 0x3007E0u: goto label_3007e0;
            case 0x3007E4u: goto label_3007e4;
            case 0x3007E8u: goto label_3007e8;
            case 0x3007ECu: goto label_3007ec;
            case 0x3007F0u: goto label_3007f0;
            case 0x3007F4u: goto label_3007f4;
            case 0x3007F8u: goto label_3007f8;
            case 0x3007FCu: goto label_3007fc;
            case 0x300800u: goto label_300800;
            case 0x300804u: goto label_300804;
            case 0x300808u: goto label_300808;
            case 0x30080Cu: goto label_30080c;
            case 0x300810u: goto label_300810;
            case 0x300814u: goto label_300814;
            case 0x300818u: goto label_300818;
            case 0x30081Cu: goto label_30081c;
            case 0x300820u: goto label_300820;
            case 0x300824u: goto label_300824;
            case 0x300828u: goto label_300828;
            case 0x30082Cu: goto label_30082c;
            case 0x300830u: goto label_300830;
            case 0x300834u: goto label_300834;
            case 0x300838u: goto label_300838;
            case 0x30083Cu: goto label_30083c;
            case 0x300840u: goto label_300840;
            case 0x300844u: goto label_300844;
            case 0x300848u: goto label_300848;
            case 0x30084Cu: goto label_30084c;
            case 0x300850u: goto label_300850;
            case 0x300854u: goto label_300854;
            case 0x300858u: goto label_300858;
            case 0x30085Cu: goto label_30085c;
            case 0x300860u: goto label_300860;
            case 0x300864u: goto label_300864;
            case 0x300868u: goto label_300868;
            case 0x30086Cu: goto label_30086c;
            case 0x300870u: goto label_300870;
            case 0x300874u: goto label_300874;
            case 0x300878u: goto label_300878;
            case 0x30087Cu: goto label_30087c;
            case 0x300880u: goto label_300880;
            case 0x300884u: goto label_300884;
            case 0x300888u: goto label_300888;
            case 0x30088Cu: goto label_30088c;
            case 0x300890u: goto label_300890;
            case 0x300894u: goto label_300894;
            case 0x300898u: goto label_300898;
            case 0x30089Cu: goto label_30089c;
            case 0x3008A0u: goto label_3008a0;
            case 0x3008A4u: goto label_3008a4;
            case 0x3008A8u: goto label_3008a8;
            case 0x3008ACu: goto label_3008ac;
            case 0x3008B0u: goto label_3008b0;
            case 0x3008B4u: goto label_3008b4;
            case 0x3008B8u: goto label_3008b8;
            case 0x3008BCu: goto label_3008bc;
            case 0x3008C0u: goto label_3008c0;
            case 0x3008C4u: goto label_3008c4;
            case 0x3008C8u: goto label_3008c8;
            case 0x3008CCu: goto label_3008cc;
            case 0x3008D0u: goto label_3008d0;
            case 0x3008D4u: goto label_3008d4;
            case 0x3008D8u: goto label_3008d8;
            case 0x3008DCu: goto label_3008dc;
            case 0x3008E0u: goto label_3008e0;
            case 0x3008E4u: goto label_3008e4;
            case 0x3008E8u: goto label_3008e8;
            case 0x3008ECu: goto label_3008ec;
            case 0x3008F0u: goto label_3008f0;
            case 0x3008F4u: goto label_3008f4;
            case 0x3008F8u: goto label_3008f8;
            case 0x3008FCu: goto label_3008fc;
            case 0x300900u: goto label_300900;
            case 0x300904u: goto label_300904;
            case 0x300908u: goto label_300908;
            case 0x30090Cu: goto label_30090c;
            case 0x300910u: goto label_300910;
            case 0x300914u: goto label_300914;
            case 0x300918u: goto label_300918;
            case 0x30091Cu: goto label_30091c;
            case 0x300920u: goto label_300920;
            case 0x300924u: goto label_300924;
            case 0x300928u: goto label_300928;
            case 0x30092Cu: goto label_30092c;
            case 0x300930u: goto label_300930;
            case 0x300934u: goto label_300934;
            case 0x300938u: goto label_300938;
            case 0x30093Cu: goto label_30093c;
            case 0x300940u: goto label_300940;
            case 0x300944u: goto label_300944;
            case 0x300948u: goto label_300948;
            case 0x30094Cu: goto label_30094c;
            case 0x300950u: goto label_300950;
            case 0x300954u: goto label_300954;
            case 0x300958u: goto label_300958;
            case 0x30095Cu: goto label_30095c;
            case 0x300960u: goto label_300960;
            case 0x300964u: goto label_300964;
            case 0x300968u: goto label_300968;
            case 0x30096Cu: goto label_30096c;
            case 0x300970u: goto label_300970;
            case 0x300974u: goto label_300974;
            case 0x300978u: goto label_300978;
            case 0x30097Cu: goto label_30097c;
            case 0x300980u: goto label_300980;
            case 0x300984u: goto label_300984;
            case 0x300988u: goto label_300988;
            case 0x30098Cu: goto label_30098c;
            case 0x300990u: goto label_300990;
            case 0x300994u: goto label_300994;
            case 0x300998u: goto label_300998;
            case 0x30099Cu: goto label_30099c;
            case 0x3009A0u: goto label_3009a0;
            case 0x3009A4u: goto label_3009a4;
            case 0x3009A8u: goto label_3009a8;
            case 0x3009ACu: goto label_3009ac;
            case 0x3009B0u: goto label_3009b0;
            case 0x3009B4u: goto label_3009b4;
            case 0x3009B8u: goto label_3009b8;
            case 0x3009BCu: goto label_3009bc;
            case 0x3009C0u: goto label_3009c0;
            case 0x3009C4u: goto label_3009c4;
            case 0x3009C8u: goto label_3009c8;
            case 0x3009CCu: goto label_3009cc;
            case 0x3009D0u: goto label_3009d0;
            case 0x3009D4u: goto label_3009d4;
            case 0x3009D8u: goto label_3009d8;
            case 0x3009DCu: goto label_3009dc;
            case 0x3009E0u: goto label_3009e0;
            case 0x3009E4u: goto label_3009e4;
            case 0x3009E8u: goto label_3009e8;
            case 0x3009ECu: goto label_3009ec;
            case 0x3009F0u: goto label_3009f0;
            case 0x3009F4u: goto label_3009f4;
            case 0x3009F8u: goto label_3009f8;
            case 0x3009FCu: goto label_3009fc;
            case 0x300A00u: goto label_300a00;
            case 0x300A04u: goto label_300a04;
            case 0x300A08u: goto label_300a08;
            case 0x300A0Cu: goto label_300a0c;
            case 0x300A10u: goto label_300a10;
            case 0x300A14u: goto label_300a14;
            case 0x300A18u: goto label_300a18;
            case 0x300A1Cu: goto label_300a1c;
            case 0x300A20u: goto label_300a20;
            case 0x300A24u: goto label_300a24;
            case 0x300A28u: goto label_300a28;
            case 0x300A2Cu: goto label_300a2c;
            case 0x300A30u: goto label_300a30;
            case 0x300A34u: goto label_300a34;
            case 0x300A38u: goto label_300a38;
            case 0x300A3Cu: goto label_300a3c;
            case 0x300A40u: goto label_300a40;
            case 0x300A44u: goto label_300a44;
            case 0x300A48u: goto label_300a48;
            case 0x300A4Cu: goto label_300a4c;
            case 0x300A50u: goto label_300a50;
            case 0x300A54u: goto label_300a54;
            case 0x300A58u: goto label_300a58;
            case 0x300A5Cu: goto label_300a5c;
            case 0x300A60u: goto label_300a60;
            case 0x300A64u: goto label_300a64;
            case 0x300A68u: goto label_300a68;
            case 0x300A6Cu: goto label_300a6c;
            case 0x300A70u: goto label_300a70;
            case 0x300A74u: goto label_300a74;
            case 0x300A78u: goto label_300a78;
            case 0x300A7Cu: goto label_300a7c;
            case 0x300A80u: goto label_300a80;
            case 0x300A84u: goto label_300a84;
            case 0x300A88u: goto label_300a88;
            case 0x300A8Cu: goto label_300a8c;
            case 0x300A90u: goto label_300a90;
            case 0x300A94u: goto label_300a94;
            case 0x300A98u: goto label_300a98;
            case 0x300A9Cu: goto label_300a9c;
            case 0x300AA0u: goto label_300aa0;
            case 0x300AA4u: goto label_300aa4;
            case 0x300AA8u: goto label_300aa8;
            case 0x300AACu: goto label_300aac;
            case 0x300AB0u: goto label_300ab0;
            case 0x300AB4u: goto label_300ab4;
            case 0x300AB8u: goto label_300ab8;
            case 0x300ABCu: goto label_300abc;
            case 0x300AC0u: goto label_300ac0;
            case 0x300AC4u: goto label_300ac4;
            case 0x300AC8u: goto label_300ac8;
            case 0x300ACCu: goto label_300acc;
            case 0x300AD0u: goto label_300ad0;
            case 0x300AD4u: goto label_300ad4;
            case 0x300AD8u: goto label_300ad8;
            case 0x300ADCu: goto label_300adc;
            case 0x300AE0u: goto label_300ae0;
            case 0x300AE4u: goto label_300ae4;
            case 0x300AE8u: goto label_300ae8;
            case 0x300AECu: goto label_300aec;
            case 0x300AF0u: goto label_300af0;
            case 0x300AF4u: goto label_300af4;
            case 0x300AF8u: goto label_300af8;
            case 0x300AFCu: goto label_300afc;
            case 0x300B00u: goto label_300b00;
            case 0x300B04u: goto label_300b04;
            case 0x300B08u: goto label_300b08;
            case 0x300B0Cu: goto label_300b0c;
            case 0x300B10u: goto label_300b10;
            case 0x300B14u: goto label_300b14;
            case 0x300B18u: goto label_300b18;
            case 0x300B1Cu: goto label_300b1c;
            case 0x300B20u: goto label_300b20;
            case 0x300B24u: goto label_300b24;
            case 0x300B28u: goto label_300b28;
            case 0x300B2Cu: goto label_300b2c;
            case 0x300B30u: goto label_300b30;
            case 0x300B34u: goto label_300b34;
            case 0x300B38u: goto label_300b38;
            case 0x300B3Cu: goto label_300b3c;
            case 0x300B40u: goto label_300b40;
            case 0x300B44u: goto label_300b44;
            case 0x300B48u: goto label_300b48;
            case 0x300B4Cu: goto label_300b4c;
            case 0x300B50u: goto label_300b50;
            case 0x300B54u: goto label_300b54;
            case 0x300B58u: goto label_300b58;
            case 0x300B5Cu: goto label_300b5c;
            case 0x300B60u: goto label_300b60;
            case 0x300B64u: goto label_300b64;
            case 0x300B68u: goto label_300b68;
            case 0x300B6Cu: goto label_300b6c;
            case 0x300B70u: goto label_300b70;
            case 0x300B74u: goto label_300b74;
            case 0x300B78u: goto label_300b78;
            case 0x300B7Cu: goto label_300b7c;
            case 0x300B80u: goto label_300b80;
            case 0x300B84u: goto label_300b84;
            case 0x300B88u: goto label_300b88;
            case 0x300B8Cu: goto label_300b8c;
            case 0x300B90u: goto label_300b90;
            case 0x300B94u: goto label_300b94;
            case 0x300B98u: goto label_300b98;
            case 0x300B9Cu: goto label_300b9c;
            case 0x300BA0u: goto label_300ba0;
            case 0x300BA4u: goto label_300ba4;
            case 0x300BA8u: goto label_300ba8;
            case 0x300BACu: goto label_300bac;
            case 0x300BB0u: goto label_300bb0;
            case 0x300BB4u: goto label_300bb4;
            case 0x300BB8u: goto label_300bb8;
            case 0x300BBCu: goto label_300bbc;
            case 0x300BC0u: goto label_300bc0;
            case 0x300BC4u: goto label_300bc4;
            case 0x300BC8u: goto label_300bc8;
            case 0x300BCCu: goto label_300bcc;
            case 0x300BD0u: goto label_300bd0;
            case 0x300BD4u: goto label_300bd4;
            case 0x300BD8u: goto label_300bd8;
            case 0x300BDCu: goto label_300bdc;
            case 0x300BE0u: goto label_300be0;
            case 0x300BE4u: goto label_300be4;
            case 0x300BE8u: goto label_300be8;
            case 0x300BECu: goto label_300bec;
            case 0x300BF0u: goto label_300bf0;
            case 0x300BF4u: goto label_300bf4;
            case 0x300BF8u: goto label_300bf8;
            case 0x300BFCu: goto label_300bfc;
            case 0x300C00u: goto label_300c00;
            case 0x300C04u: goto label_300c04;
            case 0x300C08u: goto label_300c08;
            case 0x300C0Cu: goto label_300c0c;
            case 0x300C10u: goto label_300c10;
            case 0x300C14u: goto label_300c14;
            case 0x300C18u: goto label_300c18;
            case 0x300C1Cu: goto label_300c1c;
            case 0x300C20u: goto label_300c20;
            case 0x300C24u: goto label_300c24;
            case 0x300C28u: goto label_300c28;
            case 0x300C2Cu: goto label_300c2c;
            case 0x300C30u: goto label_300c30;
            case 0x300C34u: goto label_300c34;
            case 0x300C38u: goto label_300c38;
            case 0x300C3Cu: goto label_300c3c;
            case 0x300C40u: goto label_300c40;
            case 0x300C44u: goto label_300c44;
            case 0x300C48u: goto label_300c48;
            case 0x300C4Cu: goto label_300c4c;
            case 0x300C50u: goto label_300c50;
            case 0x300C54u: goto label_300c54;
            case 0x300C58u: goto label_300c58;
            case 0x300C5Cu: goto label_300c5c;
            case 0x300C60u: goto label_300c60;
            case 0x300C64u: goto label_300c64;
            case 0x300C68u: goto label_300c68;
            case 0x300C6Cu: goto label_300c6c;
            case 0x300C70u: goto label_300c70;
            case 0x300C74u: goto label_300c74;
            case 0x300C78u: goto label_300c78;
            case 0x300C7Cu: goto label_300c7c;
            case 0x300C80u: goto label_300c80;
            case 0x300C84u: goto label_300c84;
            case 0x300C88u: goto label_300c88;
            case 0x300C8Cu: goto label_300c8c;
            case 0x300C90u: goto label_300c90;
            case 0x300C94u: goto label_300c94;
            case 0x300C98u: goto label_300c98;
            case 0x300C9Cu: goto label_300c9c;
            case 0x300CA0u: goto label_300ca0;
            case 0x300CA4u: goto label_300ca4;
            case 0x300CA8u: goto label_300ca8;
            case 0x300CACu: goto label_300cac;
            case 0x300CB0u: goto label_300cb0;
            case 0x300CB4u: goto label_300cb4;
            case 0x300CB8u: goto label_300cb8;
            case 0x300CBCu: goto label_300cbc;
            case 0x300CC0u: goto label_300cc0;
            case 0x300CC4u: goto label_300cc4;
            case 0x300CC8u: goto label_300cc8;
            case 0x300CCCu: goto label_300ccc;
            case 0x300CD0u: goto label_300cd0;
            case 0x300CD4u: goto label_300cd4;
            case 0x300CD8u: goto label_300cd8;
            case 0x300CDCu: goto label_300cdc;
            case 0x300CE0u: goto label_300ce0;
            case 0x300CE4u: goto label_300ce4;
            case 0x300CE8u: goto label_300ce8;
            case 0x300CECu: goto label_300cec;
            case 0x300CF0u: goto label_300cf0;
            case 0x300CF4u: goto label_300cf4;
            case 0x300CF8u: goto label_300cf8;
            case 0x300CFCu: goto label_300cfc;
            case 0x300D00u: goto label_300d00;
            case 0x300D04u: goto label_300d04;
            case 0x300D08u: goto label_300d08;
            case 0x300D0Cu: goto label_300d0c;
            case 0x300D10u: goto label_300d10;
            case 0x300D14u: goto label_300d14;
            case 0x300D18u: goto label_300d18;
            case 0x300D1Cu: goto label_300d1c;
            case 0x300D20u: goto label_300d20;
            case 0x300D24u: goto label_300d24;
            case 0x300D28u: goto label_300d28;
            case 0x300D2Cu: goto label_300d2c;
            case 0x300D30u: goto label_300d30;
            case 0x300D34u: goto label_300d34;
            case 0x300D38u: goto label_300d38;
            case 0x300D3Cu: goto label_300d3c;
            case 0x300D40u: goto label_300d40;
            case 0x300D44u: goto label_300d44;
            case 0x300D48u: goto label_300d48;
            case 0x300D4Cu: goto label_300d4c;
            case 0x300D50u: goto label_300d50;
            case 0x300D54u: goto label_300d54;
            case 0x300D58u: goto label_300d58;
            case 0x300D5Cu: goto label_300d5c;
            case 0x300D60u: goto label_300d60;
            case 0x300D64u: goto label_300d64;
            case 0x300D68u: goto label_300d68;
            case 0x300D6Cu: goto label_300d6c;
            case 0x300D70u: goto label_300d70;
            case 0x300D74u: goto label_300d74;
            case 0x300D78u: goto label_300d78;
            case 0x300D7Cu: goto label_300d7c;
            case 0x300D80u: goto label_300d80;
            case 0x300D84u: goto label_300d84;
            case 0x300D88u: goto label_300d88;
            case 0x300D8Cu: goto label_300d8c;
            case 0x300D90u: goto label_300d90;
            case 0x300D94u: goto label_300d94;
            case 0x300D98u: goto label_300d98;
            case 0x300D9Cu: goto label_300d9c;
            case 0x300DA0u: goto label_300da0;
            case 0x300DA4u: goto label_300da4;
            case 0x300DA8u: goto label_300da8;
            case 0x300DACu: goto label_300dac;
            case 0x300DB0u: goto label_300db0;
            case 0x300DB4u: goto label_300db4;
            case 0x300DB8u: goto label_300db8;
            case 0x300DBCu: goto label_300dbc;
            case 0x300DC0u: goto label_300dc0;
            case 0x300DC4u: goto label_300dc4;
            case 0x300DC8u: goto label_300dc8;
            case 0x300DCCu: goto label_300dcc;
            case 0x300DD0u: goto label_300dd0;
            case 0x300DD4u: goto label_300dd4;
            case 0x300DD8u: goto label_300dd8;
            case 0x300DDCu: goto label_300ddc;
            case 0x300DE0u: goto label_300de0;
            case 0x300DE4u: goto label_300de4;
            case 0x300DE8u: goto label_300de8;
            case 0x300DECu: goto label_300dec;
            case 0x300DF0u: goto label_300df0;
            case 0x300DF4u: goto label_300df4;
            case 0x300DF8u: goto label_300df8;
            case 0x300DFCu: goto label_300dfc;
            case 0x300E00u: goto label_300e00;
            case 0x300E04u: goto label_300e04;
            case 0x300E08u: goto label_300e08;
            case 0x300E0Cu: goto label_300e0c;
            case 0x300E10u: goto label_300e10;
            case 0x300E14u: goto label_300e14;
            case 0x300E18u: goto label_300e18;
            case 0x300E1Cu: goto label_300e1c;
            case 0x300E20u: goto label_300e20;
            case 0x300E24u: goto label_300e24;
            case 0x300E28u: goto label_300e28;
            case 0x300E2Cu: goto label_300e2c;
            case 0x300E30u: goto label_300e30;
            case 0x300E34u: goto label_300e34;
            case 0x300E38u: goto label_300e38;
            case 0x300E3Cu: goto label_300e3c;
            case 0x300E40u: goto label_300e40;
            case 0x300E44u: goto label_300e44;
            case 0x300E48u: goto label_300e48;
            case 0x300E4Cu: goto label_300e4c;
            case 0x300E50u: goto label_300e50;
            case 0x300E54u: goto label_300e54;
            case 0x300E58u: goto label_300e58;
            case 0x300E5Cu: goto label_300e5c;
            case 0x300E60u: goto label_300e60;
            case 0x300E64u: goto label_300e64;
            case 0x300E68u: goto label_300e68;
            case 0x300E6Cu: goto label_300e6c;
            case 0x300E70u: goto label_300e70;
            case 0x300E74u: goto label_300e74;
            case 0x300E78u: goto label_300e78;
            case 0x300E7Cu: goto label_300e7c;
            case 0x300E80u: goto label_300e80;
            case 0x300E84u: goto label_300e84;
            case 0x300E88u: goto label_300e88;
            case 0x300E8Cu: goto label_300e8c;
            case 0x300E90u: goto label_300e90;
            case 0x300E94u: goto label_300e94;
            case 0x300E98u: goto label_300e98;
            case 0x300E9Cu: goto label_300e9c;
            case 0x300EA0u: goto label_300ea0;
            case 0x300EA4u: goto label_300ea4;
            case 0x300EA8u: goto label_300ea8;
            case 0x300EACu: goto label_300eac;
            case 0x300EB0u: goto label_300eb0;
            case 0x300EB4u: goto label_300eb4;
            case 0x300EB8u: goto label_300eb8;
            case 0x300EBCu: goto label_300ebc;
            case 0x300EC0u: goto label_300ec0;
            case 0x300EC4u: goto label_300ec4;
            case 0x300EC8u: goto label_300ec8;
            case 0x300ECCu: goto label_300ecc;
            case 0x300ED0u: goto label_300ed0;
            case 0x300ED4u: goto label_300ed4;
            case 0x300ED8u: goto label_300ed8;
            case 0x300EDCu: goto label_300edc;
            case 0x300EE0u: goto label_300ee0;
            case 0x300EE4u: goto label_300ee4;
            case 0x300EE8u: goto label_300ee8;
            case 0x300EECu: goto label_300eec;
            case 0x300EF0u: goto label_300ef0;
            case 0x300EF4u: goto label_300ef4;
            case 0x300EF8u: goto label_300ef8;
            case 0x300EFCu: goto label_300efc;
            case 0x300F00u: goto label_300f00;
            case 0x300F04u: goto label_300f04;
            case 0x300F08u: goto label_300f08;
            case 0x300F0Cu: goto label_300f0c;
            case 0x300F10u: goto label_300f10;
            case 0x300F14u: goto label_300f14;
            case 0x300F18u: goto label_300f18;
            case 0x300F1Cu: goto label_300f1c;
            case 0x300F20u: goto label_300f20;
            case 0x300F24u: goto label_300f24;
            case 0x300F28u: goto label_300f28;
            case 0x300F2Cu: goto label_300f2c;
            case 0x300F30u: goto label_300f30;
            case 0x300F34u: goto label_300f34;
            case 0x300F38u: goto label_300f38;
            case 0x300F3Cu: goto label_300f3c;
            case 0x300F40u: goto label_300f40;
            case 0x300F44u: goto label_300f44;
            case 0x300F48u: goto label_300f48;
            case 0x300F4Cu: goto label_300f4c;
            case 0x300F50u: goto label_300f50;
            case 0x300F54u: goto label_300f54;
            case 0x300F58u: goto label_300f58;
            case 0x300F5Cu: goto label_300f5c;
            case 0x300F60u: goto label_300f60;
            case 0x300F64u: goto label_300f64;
            case 0x300F68u: goto label_300f68;
            case 0x300F6Cu: goto label_300f6c;
            case 0x300F70u: goto label_300f70;
            case 0x300F74u: goto label_300f74;
            case 0x300F78u: goto label_300f78;
            case 0x300F7Cu: goto label_300f7c;
            case 0x300F80u: goto label_300f80;
            case 0x300F84u: goto label_300f84;
            case 0x300F88u: goto label_300f88;
            case 0x300F8Cu: goto label_300f8c;
            case 0x300F90u: goto label_300f90;
            case 0x300F94u: goto label_300f94;
            case 0x300F98u: goto label_300f98;
            case 0x300F9Cu: goto label_300f9c;
            case 0x300FA0u: goto label_300fa0;
            case 0x300FA4u: goto label_300fa4;
            case 0x300FA8u: goto label_300fa8;
            case 0x300FACu: goto label_300fac;
            case 0x300FB0u: goto label_300fb0;
            case 0x300FB4u: goto label_300fb4;
            case 0x300FB8u: goto label_300fb8;
            case 0x300FBCu: goto label_300fbc;
            case 0x300FC0u: goto label_300fc0;
            case 0x300FC4u: goto label_300fc4;
            case 0x300FC8u: goto label_300fc8;
            case 0x300FCCu: goto label_300fcc;
            case 0x300FD0u: goto label_300fd0;
            case 0x300FD4u: goto label_300fd4;
            case 0x300FD8u: goto label_300fd8;
            case 0x300FDCu: goto label_300fdc;
            case 0x300FE0u: goto label_300fe0;
            case 0x300FE4u: goto label_300fe4;
            case 0x300FE8u: goto label_300fe8;
            case 0x300FECu: goto label_300fec;
            case 0x300FF0u: goto label_300ff0;
            case 0x300FF4u: goto label_300ff4;
            case 0x300FF8u: goto label_300ff8;
            case 0x300FFCu: goto label_300ffc;
            case 0x301000u: goto label_301000;
            case 0x301004u: goto label_301004;
            case 0x301008u: goto label_301008;
            case 0x30100Cu: goto label_30100c;
            case 0x301010u: goto label_301010;
            case 0x301014u: goto label_301014;
            case 0x301018u: goto label_301018;
            case 0x30101Cu: goto label_30101c;
            case 0x301020u: goto label_301020;
            case 0x301024u: goto label_301024;
            case 0x301028u: goto label_301028;
            case 0x30102Cu: goto label_30102c;
            case 0x301030u: goto label_301030;
            case 0x301034u: goto label_301034;
            case 0x301038u: goto label_301038;
            case 0x30103Cu: goto label_30103c;
            case 0x301040u: goto label_301040;
            case 0x301044u: goto label_301044;
            case 0x301048u: goto label_301048;
            case 0x30104Cu: goto label_30104c;
            case 0x301050u: goto label_301050;
            case 0x301054u: goto label_301054;
            case 0x301058u: goto label_301058;
            case 0x30105Cu: goto label_30105c;
            case 0x301060u: goto label_301060;
            case 0x301064u: goto label_301064;
            case 0x301068u: goto label_301068;
            case 0x30106Cu: goto label_30106c;
            case 0x301070u: goto label_301070;
            case 0x301074u: goto label_301074;
            case 0x301078u: goto label_301078;
            case 0x30107Cu: goto label_30107c;
            case 0x301080u: goto label_301080;
            case 0x301084u: goto label_301084;
            case 0x301088u: goto label_301088;
            case 0x30108Cu: goto label_30108c;
            case 0x301090u: goto label_301090;
            case 0x301094u: goto label_301094;
            case 0x301098u: goto label_301098;
            case 0x30109Cu: goto label_30109c;
            case 0x3010A0u: goto label_3010a0;
            case 0x3010A4u: goto label_3010a4;
            case 0x3010A8u: goto label_3010a8;
            case 0x3010ACu: goto label_3010ac;
            case 0x3010B0u: goto label_3010b0;
            case 0x3010B4u: goto label_3010b4;
            case 0x3010B8u: goto label_3010b8;
            case 0x3010BCu: goto label_3010bc;
            case 0x3010C0u: goto label_3010c0;
            case 0x3010C4u: goto label_3010c4;
            case 0x3010C8u: goto label_3010c8;
            case 0x3010CCu: goto label_3010cc;
            case 0x3010D0u: goto label_3010d0;
            case 0x3010D4u: goto label_3010d4;
            case 0x3010D8u: goto label_3010d8;
            case 0x3010DCu: goto label_3010dc;
            case 0x3010E0u: goto label_3010e0;
            case 0x3010E4u: goto label_3010e4;
            case 0x3010E8u: goto label_3010e8;
            case 0x3010ECu: goto label_3010ec;
            case 0x3010F0u: goto label_3010f0;
            case 0x3010F4u: goto label_3010f4;
            case 0x3010F8u: goto label_3010f8;
            case 0x3010FCu: goto label_3010fc;
            case 0x301100u: goto label_301100;
            case 0x301104u: goto label_301104;
            case 0x301108u: goto label_301108;
            case 0x30110Cu: goto label_30110c;
            case 0x301110u: goto label_301110;
            case 0x301114u: goto label_301114;
            case 0x301118u: goto label_301118;
            case 0x30111Cu: goto label_30111c;
            case 0x301120u: goto label_301120;
            case 0x301124u: goto label_301124;
            case 0x301128u: goto label_301128;
            case 0x30112Cu: goto label_30112c;
            case 0x301130u: goto label_301130;
            case 0x301134u: goto label_301134;
            case 0x301138u: goto label_301138;
            case 0x30113Cu: goto label_30113c;
            case 0x301140u: goto label_301140;
            case 0x301144u: goto label_301144;
            case 0x301148u: goto label_301148;
            case 0x30114Cu: goto label_30114c;
            case 0x301150u: goto label_301150;
            case 0x301154u: goto label_301154;
            case 0x301158u: goto label_301158;
            case 0x30115Cu: goto label_30115c;
            case 0x301160u: goto label_301160;
            case 0x301164u: goto label_301164;
            case 0x301168u: goto label_301168;
            case 0x30116Cu: goto label_30116c;
            case 0x301170u: goto label_301170;
            case 0x301174u: goto label_301174;
            case 0x301178u: goto label_301178;
            case 0x30117Cu: goto label_30117c;
            case 0x301180u: goto label_301180;
            case 0x301184u: goto label_301184;
            case 0x301188u: goto label_301188;
            case 0x30118Cu: goto label_30118c;
            case 0x301190u: goto label_301190;
            case 0x301194u: goto label_301194;
            case 0x301198u: goto label_301198;
            case 0x30119Cu: goto label_30119c;
            case 0x3011A0u: goto label_3011a0;
            case 0x3011A4u: goto label_3011a4;
            case 0x3011A8u: goto label_3011a8;
            case 0x3011ACu: goto label_3011ac;
            case 0x3011B0u: goto label_3011b0;
            case 0x3011B4u: goto label_3011b4;
            case 0x3011B8u: goto label_3011b8;
            case 0x3011BCu: goto label_3011bc;
            case 0x3011C0u: goto label_3011c0;
            case 0x3011C4u: goto label_3011c4;
            case 0x3011C8u: goto label_3011c8;
            case 0x3011CCu: goto label_3011cc;
            case 0x3011D0u: goto label_3011d0;
            case 0x3011D4u: goto label_3011d4;
            case 0x3011D8u: goto label_3011d8;
            case 0x3011DCu: goto label_3011dc;
            case 0x3011E0u: goto label_3011e0;
            case 0x3011E4u: goto label_3011e4;
            case 0x3011E8u: goto label_3011e8;
            case 0x3011ECu: goto label_3011ec;
            case 0x3011F0u: goto label_3011f0;
            case 0x3011F4u: goto label_3011f4;
            case 0x3011F8u: goto label_3011f8;
            case 0x3011FCu: goto label_3011fc;
            case 0x301200u: goto label_301200;
            case 0x301204u: goto label_301204;
            case 0x301208u: goto label_301208;
            case 0x30120Cu: goto label_30120c;
            case 0x301210u: goto label_301210;
            case 0x301214u: goto label_301214;
            case 0x301218u: goto label_301218;
            case 0x30121Cu: goto label_30121c;
            case 0x301220u: goto label_301220;
            case 0x301224u: goto label_301224;
            case 0x301228u: goto label_301228;
            case 0x30122Cu: goto label_30122c;
            case 0x301230u: goto label_301230;
            case 0x301234u: goto label_301234;
            case 0x301238u: goto label_301238;
            case 0x30123Cu: goto label_30123c;
            case 0x301240u: goto label_301240;
            case 0x301244u: goto label_301244;
            case 0x301248u: goto label_301248;
            case 0x30124Cu: goto label_30124c;
            case 0x301250u: goto label_301250;
            case 0x301254u: goto label_301254;
            case 0x301258u: goto label_301258;
            case 0x30125Cu: goto label_30125c;
            case 0x301260u: goto label_301260;
            case 0x301264u: goto label_301264;
            case 0x301268u: goto label_301268;
            case 0x30126Cu: goto label_30126c;
            case 0x301270u: goto label_301270;
            case 0x301274u: goto label_301274;
            case 0x301278u: goto label_301278;
            case 0x30127Cu: goto label_30127c;
            case 0x301280u: goto label_301280;
            case 0x301284u: goto label_301284;
            case 0x301288u: goto label_301288;
            case 0x30128Cu: goto label_30128c;
            case 0x301290u: goto label_301290;
            case 0x301294u: goto label_301294;
            case 0x301298u: goto label_301298;
            case 0x30129Cu: goto label_30129c;
            case 0x3012A0u: goto label_3012a0;
            case 0x3012A4u: goto label_3012a4;
            case 0x3012A8u: goto label_3012a8;
            case 0x3012ACu: goto label_3012ac;
            case 0x3012B0u: goto label_3012b0;
            case 0x3012B4u: goto label_3012b4;
            case 0x3012B8u: goto label_3012b8;
            case 0x3012BCu: goto label_3012bc;
            case 0x3012C0u: goto label_3012c0;
            case 0x3012C4u: goto label_3012c4;
            case 0x3012C8u: goto label_3012c8;
            case 0x3012CCu: goto label_3012cc;
            case 0x3012D0u: goto label_3012d0;
            case 0x3012D4u: goto label_3012d4;
            case 0x3012D8u: goto label_3012d8;
            case 0x3012DCu: goto label_3012dc;
            case 0x3012E0u: goto label_3012e0;
            case 0x3012E4u: goto label_3012e4;
            case 0x3012E8u: goto label_3012e8;
            case 0x3012ECu: goto label_3012ec;
            case 0x3012F0u: goto label_3012f0;
            case 0x3012F4u: goto label_3012f4;
            case 0x3012F8u: goto label_3012f8;
            case 0x3012FCu: goto label_3012fc;
            case 0x301300u: goto label_301300;
            case 0x301304u: goto label_301304;
            case 0x301308u: goto label_301308;
            case 0x30130Cu: goto label_30130c;
            case 0x301310u: goto label_301310;
            case 0x301314u: goto label_301314;
            case 0x301318u: goto label_301318;
            case 0x30131Cu: goto label_30131c;
            case 0x301320u: goto label_301320;
            case 0x301324u: goto label_301324;
            case 0x301328u: goto label_301328;
            case 0x30132Cu: goto label_30132c;
            case 0x301330u: goto label_301330;
            case 0x301334u: goto label_301334;
            case 0x301338u: goto label_301338;
            case 0x30133Cu: goto label_30133c;
            case 0x301340u: goto label_301340;
            case 0x301344u: goto label_301344;
            case 0x301348u: goto label_301348;
            case 0x30134Cu: goto label_30134c;
            case 0x301350u: goto label_301350;
            case 0x301354u: goto label_301354;
            case 0x301358u: goto label_301358;
            case 0x30135Cu: goto label_30135c;
            case 0x301360u: goto label_301360;
            case 0x301364u: goto label_301364;
            case 0x301368u: goto label_301368;
            case 0x30136Cu: goto label_30136c;
            case 0x301370u: goto label_301370;
            case 0x301374u: goto label_301374;
            case 0x301378u: goto label_301378;
            case 0x30137Cu: goto label_30137c;
            case 0x301380u: goto label_301380;
            case 0x301384u: goto label_301384;
            case 0x301388u: goto label_301388;
            case 0x30138Cu: goto label_30138c;
            case 0x301390u: goto label_301390;
            case 0x301394u: goto label_301394;
            case 0x301398u: goto label_301398;
            case 0x30139Cu: goto label_30139c;
            case 0x3013A0u: goto label_3013a0;
            case 0x3013A4u: goto label_3013a4;
            case 0x3013A8u: goto label_3013a8;
            case 0x3013ACu: goto label_3013ac;
            case 0x3013B0u: goto label_3013b0;
            case 0x3013B4u: goto label_3013b4;
            case 0x3013B8u: goto label_3013b8;
            case 0x3013BCu: goto label_3013bc;
            case 0x3013C0u: goto label_3013c0;
            case 0x3013C4u: goto label_3013c4;
            case 0x3013C8u: goto label_3013c8;
            default: break;
        }
        return;
    }
label_fallthrough_0x3013c4:
    ctx->pc = 0x3013CCu;
}
