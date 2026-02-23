#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVDEC_DecBpicMb
// Address: 0x1852c0 - 0x185834
void MPVDEC_DecBpicMb_0x1852c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVDEC_DecBpicMb");


    ctx->pc = 0x1852c0u;

label_1852c0:
    // 0x1852c0: 0x27bdff50
    ctx->pc = 0x1852c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
label_1852c4:
    // 0x1852c4: 0x240e0001
    ctx->pc = 0x1852c4u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 0), 1));
label_1852c8:
    // 0x1852c8: 0xffbe0090
    ctx->pc = 0x1852c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_1852cc:
    // 0x1852cc: 0xffb70080
    ctx->pc = 0x1852ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_1852d0:
    // 0x1852d0: 0xe0f02d
    ctx->pc = 0x1852d0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1852d4:
    // 0x1852d4: 0xffb60070
    ctx->pc = 0x1852d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_1852d8:
    // 0x1852d8: 0xffb20030
    ctx->pc = 0x1852d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1852dc:
    // 0x1852dc: 0xffbf00a0
    ctx->pc = 0x1852dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1852e0:
    // 0x1852e0: 0x80902d
    ctx->pc = 0x1852e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1852e4:
    // 0x1852e4: 0xffb40050
    ctx->pc = 0x1852e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1852e8:
    // 0x1852e8: 0x26570254
    ctx->pc = 0x1852e8u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 18), 596));
label_1852ec:
    // 0x1852ec: 0xffb30040
    ctx->pc = 0x1852ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1852f0:
    // 0x1852f0: 0x26560278
    ctx->pc = 0x1852f0u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 18), 632));
label_1852f4:
    // 0x1852f4: 0xffb10020
    ctx->pc = 0x1852f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1852f8:
    // 0x1852f8: 0xffb00010
    ctx->pc = 0x1852f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1852fc:
    // 0x1852fc: 0xafa50000
    ctx->pc = 0x1852fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_185300:
    // 0x185300: 0xffb50060
    ctx->pc = 0x185300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_185304:
    // 0x185304: 0x8e550000
    ctx->pc = 0x185304u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_185308:
    // 0x185308: 0x10000120
label_18530c:
    if (ctx->pc == 0x18530Cu) {
        ctx->pc = 0x18530Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
        ctx->pc = 0x185310u;
        goto label_185310;
    }
    ctx->pc = 0x185308u;
    {
        const bool branch_taken_0x185308 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18530Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
        if (branch_taken_0x185308) {
            ctx->pc = 0x18578Cu;
            goto label_18578c;
        }
    }
    ctx->pc = 0x185310u;
label_185310:
    // 0x185310: 0x3c030024
    ctx->pc = 0x185310u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
label_185314:
    // 0x185314: 0x3c07ffff
    ctx->pc = 0x185314u;
    SET_GPR_U32(ctx, 7, ((uint32_t)65535 << 16));
label_185318:
    // 0x185318: 0x8c481a38
    ctx->pc = 0x185318u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 6712)));
label_18531c:
    // 0x18531c: 0x8c641a3c
    ctx->pc = 0x18531cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 6716)));
label_185320:
    // 0x185320: 0x240d0035
    ctx->pc = 0x185320u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 53));
label_185324:
    // 0x185324: 0x8e49029c
    ctx->pc = 0x185324u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 18), 668)));
label_185328:
    // 0x185328: 0x240c0022
    ctx->pc = 0x185328u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 34));
label_18532c:
    // 0x18532c: 0x240a0023
    ctx->pc = 0x18532cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 35));
label_185330:
    // 0x185330: 0x240b0024
    ctx->pc = 0x185330u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 36));
label_185334:
    // 0x185334: 0x1000000b
label_185338:
    if (ctx->pc == 0x185338u) {
        ctx->pc = 0x185338u;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65534));
        ctx->pc = 0x18533Cu;
        goto label_18533c;
    }
    ctx->pc = 0x185334u;
    {
        const bool branch_taken_0x185334 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185338u;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65534));
        if (branch_taken_0x185334) {
            ctx->pc = 0x185364u;
            goto label_185364;
        }
    }
    ctx->pc = 0x18533Cu;
label_18533c:
    // 0x18533c: 0x0
    ctx->pc = 0x18533cu;
    // NOP
label_185340:
    // 0x185340: 0x52282
    ctx->pc = 0x185340u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 5), 10));
label_185344:
    // 0x185344: 0x8e4302a0
    ctx->pc = 0x185344u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 672)));
label_185348:
    // 0x185348: 0x461021
    ctx->pc = 0x185348u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_18534c:
    // 0x18534c: 0xae4402a4
    ctx->pc = 0x18534cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 676), GPR_U32(ctx, 4));
label_185350:
    // 0x185350: 0x62182a
    ctx->pc = 0x185350u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
label_185354:
    // 0x185354: 0x492823
    ctx->pc = 0x185354u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_185358:
    // 0x185358: 0xe3280b
    ctx->pc = 0x185358u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 7));
label_18535c:
    // 0x18535c: 0x10000034
label_185360:
    if (ctx->pc == 0x185360u) {
        ctx->pc = 0x185360u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 668), GPR_U32(ctx, 2));
        ctx->pc = 0x185364u;
        goto label_185364;
    }
    ctx->pc = 0x18535Cu;
    {
        const bool branch_taken_0x18535c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185360u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 668), GPR_U32(ctx, 2));
        if (branch_taken_0x18535c) {
            ctx->pc = 0x185430u;
            goto label_185430;
        }
    }
    ctx->pc = 0x185364u;
label_185364:
    // 0x185364: 0x2a820016
    ctx->pc = 0x185364u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 22));
label_185368:
    // 0x185368: 0x14400004
label_18536c:
    if (ctx->pc == 0x18536Cu) {
        ctx->pc = 0x18536Cu;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 21), 21));
        ctx->pc = 0x185370u;
        goto label_185370;
    }
    ctx->pc = 0x185368u;
    {
        const bool branch_taken_0x185368 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18536Cu;
        SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 21), 21));
        if (branch_taken_0x185368) {
            ctx->pc = 0x18537Cu;
            goto label_18537c;
        }
    }
    ctx->pc = 0x185370u;
label_185370:
    // 0x185370: 0x1b41023
    ctx->pc = 0x185370u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 20)));
label_185374:
    // 0x185374: 0x511006
    ctx->pc = 0x185374u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
label_185378:
    // 0x185378: 0x621825
    ctx->pc = 0x185378u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_18537c:
    // 0x18537c: 0x311c2
    ctx->pc = 0x18537cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 7));
label_185380:
    // 0x185380: 0x54400004
label_185384:
    if (ctx->pc == 0x185384u) {
        ctx->pc = 0x185384u;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 6));
        ctx->pc = 0x185388u;
        goto label_185388;
    }
    ctx->pc = 0x185380u;
    {
        const bool branch_taken_0x185380 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x185380) {
            ctx->pc = 0x185384u;
            SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 3), 6));
            ctx->pc = 0x185394u;
            goto label_185394;
        }
    }
    ctx->pc = 0x185388u;
label_185388:
    // 0x185388: 0x31040
    ctx->pc = 0x185388u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 1));
label_18538c:
    // 0x18538c: 0x10000003
label_185390:
    if (ctx->pc == 0x185390u) {
        ctx->pc = 0x185390u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
        ctx->pc = 0x185394u;
        goto label_185394;
    }
    ctx->pc = 0x18538Cu;
    {
        const bool branch_taken_0x18538c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185390u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
        if (branch_taken_0x18538c) {
            ctx->pc = 0x18539Cu;
            goto label_18539c;
        }
    }
    ctx->pc = 0x185394u;
label_185394:
    // 0x185394: 0x21040
    ctx->pc = 0x185394u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
label_185398:
    // 0x185398: 0x441021
    ctx->pc = 0x185398u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_18539c:
    // 0x18539c: 0x84450000
    ctx->pc = 0x18539cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1853a0:
    // 0x1853a0: 0x30a6000f
    ctx->pc = 0x1853a0u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 5), 15));
label_1853a4:
    // 0x1853a4: 0x286a021
    ctx->pc = 0x1853a4u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
label_1853a8:
    // 0x1853a8: 0x2a820020
    ctx->pc = 0x1853a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 32));
label_1853ac:
    // 0x1853ac: 0x14400011
label_1853b0:
    if (ctx->pc == 0x1853B0u) {
        ctx->pc = 0x1853B0u;
        SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 6) & 0x1F));
        ctx->pc = 0x1853B4u;
        goto label_1853b4;
    }
    ctx->pc = 0x1853ACu;
    {
        const bool branch_taken_0x1853ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1853B0u;
        SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 6) & 0x1F));
        if (branch_taken_0x1853ac) {
            ctx->pc = 0x1853F4u;
            goto label_1853f4;
        }
    }
    ctx->pc = 0x1853B4u;
label_1853b4:
    // 0x1853b4: 0x2694ffe0
    ctx->pc = 0x1853b4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294967264));
label_1853b8:
    // 0x1853b8: 0x291a804
    ctx->pc = 0x1853b8u;
    SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 20) & 0x1F));
label_1853bc:
    // 0x1853bc: 0x82710000
    ctx->pc = 0x1853bcu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_1853c0:
    // 0x1853c0: 0x26730001
    ctx->pc = 0x1853c0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1853c4:
    // 0x1853c4: 0x92620000
    ctx->pc = 0x1853c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_1853c8:
    // 0x1853c8: 0x118a00
    ctx->pc = 0x1853c8u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 8));
label_1853cc:
    // 0x1853cc: 0x26730001
    ctx->pc = 0x1853ccu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1853d0:
    // 0x1853d0: 0x2228825
    ctx->pc = 0x1853d0u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1853d4:
    // 0x1853d4: 0x92630000
    ctx->pc = 0x1853d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_1853d8:
    // 0x1853d8: 0x26730001
    ctx->pc = 0x1853d8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1853dc:
    // 0x1853dc: 0x118a00
    ctx->pc = 0x1853dcu;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 8));
label_1853e0:
    // 0x1853e0: 0x92620000
    ctx->pc = 0x1853e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_1853e4:
    // 0x1853e4: 0x2238825
    ctx->pc = 0x1853e4u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1853e8:
    // 0x1853e8: 0x118a00
    ctx->pc = 0x1853e8u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 8));
label_1853ec:
    // 0x1853ec: 0x26730001
    ctx->pc = 0x1853ecu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1853f0:
    // 0x1853f0: 0x2228825
    ctx->pc = 0x1853f0u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1853f4:
    // 0x1853f4: 0x51082
    ctx->pc = 0x1853f4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 5), 2));
label_1853f8:
    // 0x1853f8: 0x304200ff
    ctx->pc = 0x1853f8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_1853fc:
    // 0x1853fc: 0x23082
    ctx->pc = 0x1853fcu;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 2), 2));
label_185400:
    // 0x185400: 0x10ccffd9
label_185404:
    if (ctx->pc == 0x185404u) {
        ctx->pc = 0x185404u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 22));
        ctx->pc = 0x185408u;
        goto label_185408;
    }
    ctx->pc = 0x185400u;
    {
        const bool branch_taken_0x185400 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 12));
        ctx->pc = 0x185404u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 22));
        if (branch_taken_0x185400) {
            ctx->pc = 0x185368u;
            goto label_185368;
        }
    }
    ctx->pc = 0x185408u;
label_185408:
    // 0x185408: 0x14ca0005
label_18540c:
    if (ctx->pc == 0x18540Cu) {
        ctx->pc = 0x185410u;
        goto label_185410;
    }
    ctx->pc = 0x185408u;
    {
        const bool branch_taken_0x185408 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 10));
        if (branch_taken_0x185408) {
            ctx->pc = 0x185420u;
            goto label_185420;
        }
    }
    ctx->pc = 0x185410u;
label_185410:
    // 0x185410: 0x8e42029c
    ctx->pc = 0x185410u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 668)));
label_185414:
    // 0x185414: 0x24420021
    ctx->pc = 0x185414u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 33));
label_185418:
    // 0x185418: 0x1000ffd2
label_18541c:
    if (ctx->pc == 0x18541Cu) {
        ctx->pc = 0x18541Cu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 668), GPR_U32(ctx, 2));
        ctx->pc = 0x185420u;
        goto label_185420;
    }
    ctx->pc = 0x185418u;
    {
        const bool branch_taken_0x185418 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18541Cu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 668), GPR_U32(ctx, 2));
        if (branch_taken_0x185418) {
            ctx->pc = 0x185364u;
            goto label_185364;
        }
    }
    ctx->pc = 0x185420u;
label_185420:
    // 0x185420: 0x54cbffc7
label_185424:
    if (ctx->pc == 0x185424u) {
        ctx->pc = 0x185424u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 668)));
        ctx->pc = 0x185428u;
        goto label_185428;
    }
    ctx->pc = 0x185420u;
    {
        const bool branch_taken_0x185420 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 11));
        if (branch_taken_0x185420) {
            ctx->pc = 0x185424u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 668)));
            ctx->pc = 0x185340u;
            goto label_185340;
        }
    }
    ctx->pc = 0x185428u;
label_185428:
    // 0x185428: 0x3c05ffff
    ctx->pc = 0x185428u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65535 << 16));
label_18542c:
    // 0x18542c: 0x34a5fffe
    ctx->pc = 0x18542cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65534));
label_185430:
    // 0x185430: 0x3c02ffff
    ctx->pc = 0x185430u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
label_185434:
    // 0x185434: 0x3442fffe
    ctx->pc = 0x185434u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65534));
label_185438:
    // 0x185438: 0x10a200e1
label_18543c:
    if (ctx->pc == 0x18543Cu) {
        ctx->pc = 0x18543Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x185440u;
        goto label_185440;
    }
    ctx->pc = 0x185438u;
    {
        const bool branch_taken_0x185438 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x18543Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x185438) {
            ctx->pc = 0x1857C0u;
            goto label_1857c0;
        }
    }
    ctx->pc = 0x185440u;
label_185440:
    // 0x185440: 0x55c0000a
label_185444:
    if (ctx->pc == 0x185444u) {
        ctx->pc = 0x185444u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 676)));
        ctx->pc = 0x185448u;
        goto label_185448;
    }
    ctx->pc = 0x185440u;
    {
        const bool branch_taken_0x185440 = (GPR_U32(ctx, 14) != GPR_U32(ctx, 0));
        if (branch_taken_0x185440) {
            ctx->pc = 0x185444u;
            SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 676)));
            ctx->pc = 0x18546Cu;
            goto label_18546c;
        }
    }
    ctx->pc = 0x185448u;
label_185448:
    // 0x185448: 0x2ca20002
    ctx->pc = 0x185448u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 5), 2));
label_18544c:
    // 0x18544c: 0x54400007
label_185450:
    if (ctx->pc == 0x185450u) {
        ctx->pc = 0x185450u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 676)));
        ctx->pc = 0x185454u;
        goto label_185454;
    }
    ctx->pc = 0x18544Cu;
    {
        const bool branch_taken_0x18544c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x18544c) {
            ctx->pc = 0x185450u;
            SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 676)));
            ctx->pc = 0x18546Cu;
            goto label_18546c;
        }
    }
    ctx->pc = 0x185454u;
label_185454:
    // 0x185454: 0x8e420230
    ctx->pc = 0x185454u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 560)));
label_185458:
    // 0x185458: 0x40f809
label_18545c:
    if (ctx->pc == 0x18545Cu) {
        ctx->pc = 0x18545Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185460u;
        goto label_185460;
    }
    ctx->pc = 0x185458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185460u);
        ctx->pc = 0x18545Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1852C0u: goto label_1852c0;
            case 0x1852C4u: goto label_1852c4;
            case 0x1852C8u: goto label_1852c8;
            case 0x1852CCu: goto label_1852cc;
            case 0x1852D0u: goto label_1852d0;
            case 0x1852D4u: goto label_1852d4;
            case 0x1852D8u: goto label_1852d8;
            case 0x1852DCu: goto label_1852dc;
            case 0x1852E0u: goto label_1852e0;
            case 0x1852E4u: goto label_1852e4;
            case 0x1852E8u: goto label_1852e8;
            case 0x1852ECu: goto label_1852ec;
            case 0x1852F0u: goto label_1852f0;
            case 0x1852F4u: goto label_1852f4;
            case 0x1852F8u: goto label_1852f8;
            case 0x1852FCu: goto label_1852fc;
            case 0x185300u: goto label_185300;
            case 0x185304u: goto label_185304;
            case 0x185308u: goto label_185308;
            case 0x18530Cu: goto label_18530c;
            case 0x185310u: goto label_185310;
            case 0x185314u: goto label_185314;
            case 0x185318u: goto label_185318;
            case 0x18531Cu: goto label_18531c;
            case 0x185320u: goto label_185320;
            case 0x185324u: goto label_185324;
            case 0x185328u: goto label_185328;
            case 0x18532Cu: goto label_18532c;
            case 0x185330u: goto label_185330;
            case 0x185334u: goto label_185334;
            case 0x185338u: goto label_185338;
            case 0x18533Cu: goto label_18533c;
            case 0x185340u: goto label_185340;
            case 0x185344u: goto label_185344;
            case 0x185348u: goto label_185348;
            case 0x18534Cu: goto label_18534c;
            case 0x185350u: goto label_185350;
            case 0x185354u: goto label_185354;
            case 0x185358u: goto label_185358;
            case 0x18535Cu: goto label_18535c;
            case 0x185360u: goto label_185360;
            case 0x185364u: goto label_185364;
            case 0x185368u: goto label_185368;
            case 0x18536Cu: goto label_18536c;
            case 0x185370u: goto label_185370;
            case 0x185374u: goto label_185374;
            case 0x185378u: goto label_185378;
            case 0x18537Cu: goto label_18537c;
            case 0x185380u: goto label_185380;
            case 0x185384u: goto label_185384;
            case 0x185388u: goto label_185388;
            case 0x18538Cu: goto label_18538c;
            case 0x185390u: goto label_185390;
            case 0x185394u: goto label_185394;
            case 0x185398u: goto label_185398;
            case 0x18539Cu: goto label_18539c;
            case 0x1853A0u: goto label_1853a0;
            case 0x1853A4u: goto label_1853a4;
            case 0x1853A8u: goto label_1853a8;
            case 0x1853ACu: goto label_1853ac;
            case 0x1853B0u: goto label_1853b0;
            case 0x1853B4u: goto label_1853b4;
            case 0x1853B8u: goto label_1853b8;
            case 0x1853BCu: goto label_1853bc;
            case 0x1853C0u: goto label_1853c0;
            case 0x1853C4u: goto label_1853c4;
            case 0x1853C8u: goto label_1853c8;
            case 0x1853CCu: goto label_1853cc;
            case 0x1853D0u: goto label_1853d0;
            case 0x1853D4u: goto label_1853d4;
            case 0x1853D8u: goto label_1853d8;
            case 0x1853DCu: goto label_1853dc;
            case 0x1853E0u: goto label_1853e0;
            case 0x1853E4u: goto label_1853e4;
            case 0x1853E8u: goto label_1853e8;
            case 0x1853ECu: goto label_1853ec;
            case 0x1853F0u: goto label_1853f0;
            case 0x1853F4u: goto label_1853f4;
            case 0x1853F8u: goto label_1853f8;
            case 0x1853FCu: goto label_1853fc;
            case 0x185400u: goto label_185400;
            case 0x185404u: goto label_185404;
            case 0x185408u: goto label_185408;
            case 0x18540Cu: goto label_18540c;
            case 0x185410u: goto label_185410;
            case 0x185414u: goto label_185414;
            case 0x185418u: goto label_185418;
            case 0x18541Cu: goto label_18541c;
            case 0x185420u: goto label_185420;
            case 0x185424u: goto label_185424;
            case 0x185428u: goto label_185428;
            case 0x18542Cu: goto label_18542c;
            case 0x185430u: goto label_185430;
            case 0x185434u: goto label_185434;
            case 0x185438u: goto label_185438;
            case 0x18543Cu: goto label_18543c;
            case 0x185440u: goto label_185440;
            case 0x185444u: goto label_185444;
            case 0x185448u: goto label_185448;
            case 0x18544Cu: goto label_18544c;
            case 0x185450u: goto label_185450;
            case 0x185454u: goto label_185454;
            case 0x185458u: goto label_185458;
            case 0x18545Cu: goto label_18545c;
            case 0x185460u: goto label_185460;
            case 0x185464u: goto label_185464;
            case 0x185468u: goto label_185468;
            case 0x18546Cu: goto label_18546c;
            case 0x185470u: goto label_185470;
            case 0x185474u: goto label_185474;
            case 0x185478u: goto label_185478;
            case 0x18547Cu: goto label_18547c;
            case 0x185480u: goto label_185480;
            case 0x185484u: goto label_185484;
            case 0x185488u: goto label_185488;
            case 0x18548Cu: goto label_18548c;
            case 0x185490u: goto label_185490;
            case 0x185494u: goto label_185494;
            case 0x185498u: goto label_185498;
            case 0x18549Cu: goto label_18549c;
            case 0x1854A0u: goto label_1854a0;
            case 0x1854A4u: goto label_1854a4;
            case 0x1854A8u: goto label_1854a8;
            case 0x1854ACu: goto label_1854ac;
            case 0x1854B0u: goto label_1854b0;
            case 0x1854B4u: goto label_1854b4;
            case 0x1854B8u: goto label_1854b8;
            case 0x1854BCu: goto label_1854bc;
            case 0x1854C0u: goto label_1854c0;
            case 0x1854C4u: goto label_1854c4;
            case 0x1854C8u: goto label_1854c8;
            case 0x1854CCu: goto label_1854cc;
            case 0x1854D0u: goto label_1854d0;
            case 0x1854D4u: goto label_1854d4;
            case 0x1854D8u: goto label_1854d8;
            case 0x1854DCu: goto label_1854dc;
            case 0x1854E0u: goto label_1854e0;
            case 0x1854E4u: goto label_1854e4;
            case 0x1854E8u: goto label_1854e8;
            case 0x1854ECu: goto label_1854ec;
            case 0x1854F0u: goto label_1854f0;
            case 0x1854F4u: goto label_1854f4;
            case 0x1854F8u: goto label_1854f8;
            case 0x1854FCu: goto label_1854fc;
            case 0x185500u: goto label_185500;
            case 0x185504u: goto label_185504;
            case 0x185508u: goto label_185508;
            case 0x18550Cu: goto label_18550c;
            case 0x185510u: goto label_185510;
            case 0x185514u: goto label_185514;
            case 0x185518u: goto label_185518;
            case 0x18551Cu: goto label_18551c;
            case 0x185520u: goto label_185520;
            case 0x185524u: goto label_185524;
            case 0x185528u: goto label_185528;
            case 0x18552Cu: goto label_18552c;
            case 0x185530u: goto label_185530;
            case 0x185534u: goto label_185534;
            case 0x185538u: goto label_185538;
            case 0x18553Cu: goto label_18553c;
            case 0x185540u: goto label_185540;
            case 0x185544u: goto label_185544;
            case 0x185548u: goto label_185548;
            case 0x18554Cu: goto label_18554c;
            case 0x185550u: goto label_185550;
            case 0x185554u: goto label_185554;
            case 0x185558u: goto label_185558;
            case 0x18555Cu: goto label_18555c;
            case 0x185560u: goto label_185560;
            case 0x185564u: goto label_185564;
            case 0x185568u: goto label_185568;
            case 0x18556Cu: goto label_18556c;
            case 0x185570u: goto label_185570;
            case 0x185574u: goto label_185574;
            case 0x185578u: goto label_185578;
            case 0x18557Cu: goto label_18557c;
            case 0x185580u: goto label_185580;
            case 0x185584u: goto label_185584;
            case 0x185588u: goto label_185588;
            case 0x18558Cu: goto label_18558c;
            case 0x185590u: goto label_185590;
            case 0x185594u: goto label_185594;
            case 0x185598u: goto label_185598;
            case 0x18559Cu: goto label_18559c;
            case 0x1855A0u: goto label_1855a0;
            case 0x1855A4u: goto label_1855a4;
            case 0x1855A8u: goto label_1855a8;
            case 0x1855ACu: goto label_1855ac;
            case 0x1855B0u: goto label_1855b0;
            case 0x1855B4u: goto label_1855b4;
            case 0x1855B8u: goto label_1855b8;
            case 0x1855BCu: goto label_1855bc;
            case 0x1855C0u: goto label_1855c0;
            case 0x1855C4u: goto label_1855c4;
            case 0x1855C8u: goto label_1855c8;
            case 0x1855CCu: goto label_1855cc;
            case 0x1855D0u: goto label_1855d0;
            case 0x1855D4u: goto label_1855d4;
            case 0x1855D8u: goto label_1855d8;
            case 0x1855DCu: goto label_1855dc;
            case 0x1855E0u: goto label_1855e0;
            case 0x1855E4u: goto label_1855e4;
            case 0x1855E8u: goto label_1855e8;
            case 0x1855ECu: goto label_1855ec;
            case 0x1855F0u: goto label_1855f0;
            case 0x1855F4u: goto label_1855f4;
            case 0x1855F8u: goto label_1855f8;
            case 0x1855FCu: goto label_1855fc;
            case 0x185600u: goto label_185600;
            case 0x185604u: goto label_185604;
            case 0x185608u: goto label_185608;
            case 0x18560Cu: goto label_18560c;
            case 0x185610u: goto label_185610;
            case 0x185614u: goto label_185614;
            case 0x185618u: goto label_185618;
            case 0x18561Cu: goto label_18561c;
            case 0x185620u: goto label_185620;
            case 0x185624u: goto label_185624;
            case 0x185628u: goto label_185628;
            case 0x18562Cu: goto label_18562c;
            case 0x185630u: goto label_185630;
            case 0x185634u: goto label_185634;
            case 0x185638u: goto label_185638;
            case 0x18563Cu: goto label_18563c;
            case 0x185640u: goto label_185640;
            case 0x185644u: goto label_185644;
            case 0x185648u: goto label_185648;
            case 0x18564Cu: goto label_18564c;
            case 0x185650u: goto label_185650;
            case 0x185654u: goto label_185654;
            case 0x185658u: goto label_185658;
            case 0x18565Cu: goto label_18565c;
            case 0x185660u: goto label_185660;
            case 0x185664u: goto label_185664;
            case 0x185668u: goto label_185668;
            case 0x18566Cu: goto label_18566c;
            case 0x185670u: goto label_185670;
            case 0x185674u: goto label_185674;
            case 0x185678u: goto label_185678;
            case 0x18567Cu: goto label_18567c;
            case 0x185680u: goto label_185680;
            case 0x185684u: goto label_185684;
            case 0x185688u: goto label_185688;
            case 0x18568Cu: goto label_18568c;
            case 0x185690u: goto label_185690;
            case 0x185694u: goto label_185694;
            case 0x185698u: goto label_185698;
            case 0x18569Cu: goto label_18569c;
            case 0x1856A0u: goto label_1856a0;
            case 0x1856A4u: goto label_1856a4;
            case 0x1856A8u: goto label_1856a8;
            case 0x1856ACu: goto label_1856ac;
            case 0x1856B0u: goto label_1856b0;
            case 0x1856B4u: goto label_1856b4;
            case 0x1856B8u: goto label_1856b8;
            case 0x1856BCu: goto label_1856bc;
            case 0x1856C0u: goto label_1856c0;
            case 0x1856C4u: goto label_1856c4;
            case 0x1856C8u: goto label_1856c8;
            case 0x1856CCu: goto label_1856cc;
            case 0x1856D0u: goto label_1856d0;
            case 0x1856D4u: goto label_1856d4;
            case 0x1856D8u: goto label_1856d8;
            case 0x1856DCu: goto label_1856dc;
            case 0x1856E0u: goto label_1856e0;
            case 0x1856E4u: goto label_1856e4;
            case 0x1856E8u: goto label_1856e8;
            case 0x1856ECu: goto label_1856ec;
            case 0x1856F0u: goto label_1856f0;
            case 0x1856F4u: goto label_1856f4;
            case 0x1856F8u: goto label_1856f8;
            case 0x1856FCu: goto label_1856fc;
            case 0x185700u: goto label_185700;
            case 0x185704u: goto label_185704;
            case 0x185708u: goto label_185708;
            case 0x18570Cu: goto label_18570c;
            case 0x185710u: goto label_185710;
            case 0x185714u: goto label_185714;
            case 0x185718u: goto label_185718;
            case 0x18571Cu: goto label_18571c;
            case 0x185720u: goto label_185720;
            case 0x185724u: goto label_185724;
            case 0x185728u: goto label_185728;
            case 0x18572Cu: goto label_18572c;
            case 0x185730u: goto label_185730;
            case 0x185734u: goto label_185734;
            case 0x185738u: goto label_185738;
            case 0x18573Cu: goto label_18573c;
            case 0x185740u: goto label_185740;
            case 0x185744u: goto label_185744;
            case 0x185748u: goto label_185748;
            case 0x18574Cu: goto label_18574c;
            case 0x185750u: goto label_185750;
            case 0x185754u: goto label_185754;
            case 0x185758u: goto label_185758;
            case 0x18575Cu: goto label_18575c;
            case 0x185760u: goto label_185760;
            case 0x185764u: goto label_185764;
            case 0x185768u: goto label_185768;
            case 0x18576Cu: goto label_18576c;
            case 0x185770u: goto label_185770;
            case 0x185774u: goto label_185774;
            case 0x185778u: goto label_185778;
            case 0x18577Cu: goto label_18577c;
            case 0x185780u: goto label_185780;
            case 0x185784u: goto label_185784;
            case 0x185788u: goto label_185788;
            case 0x18578Cu: goto label_18578c;
            case 0x185790u: goto label_185790;
            case 0x185794u: goto label_185794;
            case 0x185798u: goto label_185798;
            case 0x18579Cu: goto label_18579c;
            case 0x1857A0u: goto label_1857a0;
            case 0x1857A4u: goto label_1857a4;
            case 0x1857A8u: goto label_1857a8;
            case 0x1857ACu: goto label_1857ac;
            case 0x1857B0u: goto label_1857b0;
            case 0x1857B4u: goto label_1857b4;
            case 0x1857B8u: goto label_1857b8;
            case 0x1857BCu: goto label_1857bc;
            case 0x1857C0u: goto label_1857c0;
            case 0x1857C4u: goto label_1857c4;
            case 0x1857C8u: goto label_1857c8;
            case 0x1857CCu: goto label_1857cc;
            case 0x1857D0u: goto label_1857d0;
            case 0x1857D4u: goto label_1857d4;
            case 0x1857D8u: goto label_1857d8;
            case 0x1857DCu: goto label_1857dc;
            case 0x1857E0u: goto label_1857e0;
            case 0x1857E4u: goto label_1857e4;
            case 0x1857E8u: goto label_1857e8;
            case 0x1857ECu: goto label_1857ec;
            case 0x1857F0u: goto label_1857f0;
            case 0x1857F4u: goto label_1857f4;
            case 0x1857F8u: goto label_1857f8;
            case 0x1857FCu: goto label_1857fc;
            case 0x185800u: goto label_185800;
            case 0x185804u: goto label_185804;
            case 0x185808u: goto label_185808;
            case 0x18580Cu: goto label_18580c;
            case 0x185810u: goto label_185810;
            case 0x185814u: goto label_185814;
            case 0x185818u: goto label_185818;
            case 0x18581Cu: goto label_18581c;
            case 0x185820u: goto label_185820;
            case 0x185824u: goto label_185824;
            case 0x185828u: goto label_185828;
            case 0x18582Cu: goto label_18582c;
            case 0x185830u: goto label_185830;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x185460u; }
            if (ctx->pc != 0x185460u) { return; }
        }
    }
    ctx->pc = 0x185460u;
label_185460:
    // 0x185460: 0xc061430
label_185464:
    if (ctx->pc == 0x185464u) {
        ctx->pc = 0x185464u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185468u;
        goto label_185468;
    }
    ctx->pc = 0x185460u;
    SET_GPR_U32(ctx, 31, 0x185468u);
    ctx->pc = 0x185464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1850C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVDEC_ResetDc_0x1850c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185468u; }
        else if (ctx->pc != 0x185468u) { ctx->pc = 0x185468u; }
    }
    if (ctx->pc != 0x185468u) { return; }
    ctx->pc = 0x185468u;
label_185468:
    // 0x185468: 0x8e4602a4
    ctx->pc = 0x185468u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 676)));
label_18546c:
    // 0x18546c: 0x30c20020
    ctx->pc = 0x18546cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 32));
label_185470:
    // 0x185470: 0x14400028
label_185474:
    if (ctx->pc == 0x185474u) {
        ctx->pc = 0x185474u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 16));
        ctx->pc = 0x185478u;
        goto label_185478;
    }
    ctx->pc = 0x185470u;
    {
        const bool branch_taken_0x185470 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x185474u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 16));
        if (branch_taken_0x185470) {
            ctx->pc = 0x185514u;
            goto label_185514;
        }
    }
    ctx->pc = 0x185478u;
label_185478:
    // 0x185478: 0x2a82001b
    ctx->pc = 0x185478u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 27));
label_18547c:
    // 0x18547c: 0x14400005
label_185480:
    if (ctx->pc == 0x185480u) {
        ctx->pc = 0x185480u;
        SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 21), 26));
        ctx->pc = 0x185484u;
        goto label_185484;
    }
    ctx->pc = 0x18547Cu;
    {
        const bool branch_taken_0x18547c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x185480u;
        SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 21), 26));
        if (branch_taken_0x18547c) {
            ctx->pc = 0x185494u;
            goto label_185494;
        }
    }
    ctx->pc = 0x185484u;
label_185484:
    // 0x185484: 0x2402003a
    ctx->pc = 0x185484u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 58));
label_185488:
    // 0x185488: 0x541023
    ctx->pc = 0x185488u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_18548c:
    // 0x18548c: 0x511006
    ctx->pc = 0x18548cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
label_185490:
    // 0x185490: 0xa22825
    ctx->pc = 0x185490u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_185494:
    // 0x185494: 0x3c040024
    ctx->pc = 0x185494u;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_185498:
    // 0x185498: 0x51040
    ctx->pc = 0x185498u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
label_18549c:
    // 0x18549c: 0x8c831a44
    ctx->pc = 0x18549cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 6724)));
label_1854a0:
    // 0x1854a0: 0x431021
    ctx->pc = 0x1854a0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1854a4:
    // 0x1854a4: 0x84450000
    ctx->pc = 0x1854a4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1854a8:
    // 0x1854a8: 0x51a02
    ctx->pc = 0x1854a8u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 5), 8));
label_1854ac:
    // 0x1854ac: 0x30a500ff
    ctx->pc = 0x1854acu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 255));
label_1854b0:
    // 0x1854b0: 0x285a021
    ctx->pc = 0x1854b0u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_1854b4:
    // 0x1854b4: 0x2a820020
    ctx->pc = 0x1854b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 32));
label_1854b8:
    // 0x1854b8: 0x14400013
label_1854bc:
    if (ctx->pc == 0x1854BCu) {
        ctx->pc = 0x1854BCu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 676), GPR_U32(ctx, 3));
        ctx->pc = 0x1854C0u;
        goto label_1854c0;
    }
    ctx->pc = 0x1854B8u;
    {
        const bool branch_taken_0x1854b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1854BCu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 676), GPR_U32(ctx, 3));
        if (branch_taken_0x1854b8) {
            ctx->pc = 0x185508u;
            goto label_185508;
        }
    }
    ctx->pc = 0x1854C0u;
label_1854c0:
    // 0x1854c0: 0x2694ffe0
    ctx->pc = 0x1854c0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294967264));
label_1854c4:
    // 0x1854c4: 0x60302d
    ctx->pc = 0x1854c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1854c8:
    // 0x1854c8: 0x291a804
    ctx->pc = 0x1854c8u;
    SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 20) & 0x1F));
label_1854cc:
    // 0x1854cc: 0x82710000
    ctx->pc = 0x1854ccu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_1854d0:
    // 0x1854d0: 0x26730001
    ctx->pc = 0x1854d0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1854d4:
    // 0x1854d4: 0x92620000
    ctx->pc = 0x1854d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_1854d8:
    // 0x1854d8: 0x118a00
    ctx->pc = 0x1854d8u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 8));
label_1854dc:
    // 0x1854dc: 0x26730001
    ctx->pc = 0x1854dcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1854e0:
    // 0x1854e0: 0x2228825
    ctx->pc = 0x1854e0u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1854e4:
    // 0x1854e4: 0x92630000
    ctx->pc = 0x1854e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_1854e8:
    // 0x1854e8: 0x26730001
    ctx->pc = 0x1854e8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1854ec:
    // 0x1854ec: 0x118a00
    ctx->pc = 0x1854ecu;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 8));
label_1854f0:
    // 0x1854f0: 0x92620000
    ctx->pc = 0x1854f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_1854f4:
    // 0x1854f4: 0x2238825
    ctx->pc = 0x1854f4u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1854f8:
    // 0x1854f8: 0x118a00
    ctx->pc = 0x1854f8u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 8));
label_1854fc:
    // 0x1854fc: 0x26730001
    ctx->pc = 0x1854fcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_185500:
    // 0x185500: 0x10000003
label_185504:
    if (ctx->pc == 0x185504u) {
        ctx->pc = 0x185504u;
        SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->pc = 0x185508u;
        goto label_185508;
    }
    ctx->pc = 0x185500u;
    {
        const bool branch_taken_0x185500 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185504u;
        SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        if (branch_taken_0x185500) {
            ctx->pc = 0x185510u;
            goto label_185510;
        }
    }
    ctx->pc = 0x185508u;
label_185508:
    // 0x185508: 0xb5a804
    ctx->pc = 0x185508u;
    SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 5) & 0x1F));
label_18550c:
    // 0x18550c: 0x60302d
    ctx->pc = 0x18550cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_185510:
    // 0x185510: 0x30c20010
    ctx->pc = 0x185510u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 16));
label_185514:
    // 0x185514: 0x1040001f
label_185518:
    if (ctx->pc == 0x185518u) {
        ctx->pc = 0x185518u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 27));
        ctx->pc = 0x18551Cu;
        goto label_18551c;
    }
    ctx->pc = 0x185514u;
    {
        const bool branch_taken_0x185514 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x185518u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 27));
        if (branch_taken_0x185514) {
            ctx->pc = 0x185594u;
            goto label_185594;
        }
    }
    ctx->pc = 0x18551Cu;
label_18551c:
    // 0x18551c: 0x1440001a
label_185520:
    if (ctx->pc == 0x185520u) {
        ctx->pc = 0x185520u;
        SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 21), 27));
        ctx->pc = 0x185524u;
        goto label_185524;
    }
    ctx->pc = 0x18551Cu;
    {
        const bool branch_taken_0x18551c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x185520u;
        SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 21), 27));
        if (branch_taken_0x18551c) {
            ctx->pc = 0x185588u;
            goto label_185588;
        }
    }
    ctx->pc = 0x185524u;
label_185524:
    // 0x185524: 0x2694ffe5
    ctx->pc = 0x185524u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294967269));
label_185528:
    // 0x185528: 0x12800007
label_18552c:
    if (ctx->pc == 0x18552Cu) {
        ctx->pc = 0x18552Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x185530u;
        goto label_185530;
    }
    ctx->pc = 0x185528u;
    {
        const bool branch_taken_0x185528 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x18552Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x185528) {
            ctx->pc = 0x185548u;
            goto label_185548;
        }
    }
    ctx->pc = 0x185530u;
label_185530:
    // 0x185530: 0x541023
    ctx->pc = 0x185530u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_185534:
    // 0x185534: 0x511006
    ctx->pc = 0x185534u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
label_185538:
    // 0x185538: 0x2a2a825
    ctx->pc = 0x185538u;
    SET_GPR_U32(ctx, 21, OR32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_18553c:
    // 0x18553c: 0x152ec2
    ctx->pc = 0x18553cu;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 21), 27));
label_185540:
    // 0x185540: 0x10000002
label_185544:
    if (ctx->pc == 0x185544u) {
        ctx->pc = 0x185544u;
        SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 20) & 0x1F));
        ctx->pc = 0x185548u;
        goto label_185548;
    }
    ctx->pc = 0x185540u;
    {
        const bool branch_taken_0x185540 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185544u;
        SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 20) & 0x1F));
        if (branch_taken_0x185540) {
            ctx->pc = 0x18554Cu;
            goto label_18554c;
        }
    }
    ctx->pc = 0x185548u;
label_185548:
    // 0x185548: 0x220a82d
    ctx->pc = 0x185548u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18554c:
    // 0x18554c: 0x82710000
    ctx->pc = 0x18554cu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_185550:
    // 0x185550: 0x26730001
    ctx->pc = 0x185550u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_185554:
    // 0x185554: 0x92620000
    ctx->pc = 0x185554u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_185558:
    // 0x185558: 0x118a00
    ctx->pc = 0x185558u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 8));
label_18555c:
    // 0x18555c: 0x26730001
    ctx->pc = 0x18555cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_185560:
    // 0x185560: 0x2228825
    ctx->pc = 0x185560u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_185564:
    // 0x185564: 0x92630000
    ctx->pc = 0x185564u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_185568:
    // 0x185568: 0x26730001
    ctx->pc = 0x185568u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_18556c:
    // 0x18556c: 0x118a00
    ctx->pc = 0x18556cu;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 8));
label_185570:
    // 0x185570: 0x92620000
    ctx->pc = 0x185570u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_185574:
    // 0x185574: 0x2238825
    ctx->pc = 0x185574u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_185578:
    // 0x185578: 0x118a00
    ctx->pc = 0x185578u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 8));
label_18557c:
    // 0x18557c: 0x26730001
    ctx->pc = 0x18557cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_185580:
    // 0x185580: 0x10000003
label_185584:
    if (ctx->pc == 0x185584u) {
        ctx->pc = 0x185584u;
        SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->pc = 0x185588u;
        goto label_185588;
    }
    ctx->pc = 0x185580u;
    {
        const bool branch_taken_0x185580 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185584u;
        SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        if (branch_taken_0x185580) {
            ctx->pc = 0x185590u;
            goto label_185590;
        }
    }
    ctx->pc = 0x185588u;
label_185588:
    // 0x185588: 0x26940005
    ctx->pc = 0x185588u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 5));
label_18558c:
    // 0x18558c: 0x15a940
    ctx->pc = 0x18558cu;
    SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 21), 5));
label_185590:
    // 0x185590: 0xae450250
    ctx->pc = 0x185590u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 5));
label_185594:
    // 0x185594: 0x30c20008
    ctx->pc = 0x185594u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 8));
label_185598:
    // 0x185598: 0x10400016
label_18559c:
    if (ctx->pc == 0x18559Cu) {
        ctx->pc = 0x18559Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1855A0u;
        goto label_1855a0;
    }
    ctx->pc = 0x185598u;
    {
        const bool branch_taken_0x185598 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18559Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x185598) {
            ctx->pc = 0x1855F4u;
            goto label_1855f4;
        }
    }
    ctx->pc = 0x1855A0u;
label_1855a0:
    // 0x1855a0: 0xae550000
    ctx->pc = 0x1855a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 21));
label_1855a4:
    // 0x1855a4: 0xae510004
    ctx->pc = 0x1855a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
label_1855a8:
    // 0x1855a8: 0x2e0282d
    ctx->pc = 0x1855a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1855ac:
    // 0x1855ac: 0xae540008
    ctx->pc = 0x1855acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 20));
label_1855b0:
    // 0x1855b0: 0x2646026c
    ctx->pc = 0x1855b0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 620));
label_1855b4:
    // 0x1855b4: 0xae53000c
    ctx->pc = 0x1855b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 19));
label_1855b8:
    // 0x1855b8: 0xc061436
label_1855bc:
    if (ctx->pc == 0x1855BCu) {
        ctx->pc = 0x1855BCu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 18), 612));
        ctx->pc = 0x1855C0u;
        goto label_1855c0;
    }
    ctx->pc = 0x1855B8u;
    SET_GPR_U32(ctx, 31, 0x1855C0u);
    ctx->pc = 0x1855BCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 18), 612));
    ctx->pc = 0x1850D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvdec_MotionSub_0x1850d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1855C0u; }
        else if (ctx->pc != 0x1855C0u) { ctx->pc = 0x1855C0u; }
    }
    if (ctx->pc != 0x1855C0u) { return; }
    ctx->pc = 0x1855C0u;
label_1855c0:
    // 0x1855c0: 0x40802d
    ctx->pc = 0x1855c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1855c4:
    // 0x1855c4: 0x240202d
    ctx->pc = 0x1855c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1855c8:
    // 0x1855c8: 0x2e0282d
    ctx->pc = 0x1855c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1855cc:
    // 0x1855cc: 0x26460270
    ctx->pc = 0x1855ccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 624));
label_1855d0:
    // 0x1855d0: 0xc061436
label_1855d4:
    if (ctx->pc == 0x1855D4u) {
        ctx->pc = 0x1855D4u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 18), 616));
        ctx->pc = 0x1855D8u;
        goto label_1855d8;
    }
    ctx->pc = 0x1855D0u;
    SET_GPR_U32(ctx, 31, 0x1855D8u);
    ctx->pc = 0x1855D4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 18), 616));
    ctx->pc = 0x1850D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvdec_MotionSub_0x1850d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1855D8u; }
        else if (ctx->pc != 0x1855D8u) { ctx->pc = 0x1855D8u; }
    }
    if (ctx->pc != 0x1855D8u) { return; }
    ctx->pc = 0x1855D8u;
label_1855d8:
    // 0x1855d8: 0x2028025
    ctx->pc = 0x1855d8u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1855dc:
    // 0x1855dc: 0x8e550000
    ctx->pc = 0x1855dcu;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1855e0:
    // 0x1855e0: 0x8e510004
    ctx->pc = 0x1855e0u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1855e4:
    // 0x1855e4: 0x8e540008
    ctx->pc = 0x1855e4u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1855e8:
    // 0x1855e8: 0x16000074
label_1855ec:
    if (ctx->pc == 0x1855ECu) {
        ctx->pc = 0x1855ECu;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->pc = 0x1855F0u;
        goto label_1855f0;
    }
    ctx->pc = 0x1855E8u;
    {
        const bool branch_taken_0x1855e8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1855ECu;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 18), 12)));
        if (branch_taken_0x1855e8) {
            ctx->pc = 0x1857BCu;
            goto label_1857bc;
        }
    }
    ctx->pc = 0x1855F0u;
label_1855f0:
    // 0x1855f0: 0x8e4602a4
    ctx->pc = 0x1855f0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 676)));
label_1855f4:
    // 0x1855f4: 0x30c20004
    ctx->pc = 0x1855f4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 4));
label_1855f8:
    // 0x1855f8: 0x10400016
label_1855fc:
    if (ctx->pc == 0x1855FCu) {
        ctx->pc = 0x1855FCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185600u;
        goto label_185600;
    }
    ctx->pc = 0x1855F8u;
    {
        const bool branch_taken_0x1855f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1855FCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1855f8) {
            ctx->pc = 0x185654u;
            goto label_185654;
        }
    }
    ctx->pc = 0x185600u;
label_185600:
    // 0x185600: 0xae550000
    ctx->pc = 0x185600u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 21));
label_185604:
    // 0x185604: 0xae510004
    ctx->pc = 0x185604u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
label_185608:
    // 0x185608: 0x2c0282d
    ctx->pc = 0x185608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_18560c:
    // 0x18560c: 0xae540008
    ctx->pc = 0x18560cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 20));
label_185610:
    // 0x185610: 0x26460290
    ctx->pc = 0x185610u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 656));
label_185614:
    // 0x185614: 0xae53000c
    ctx->pc = 0x185614u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 19));
label_185618:
    // 0x185618: 0xc061436
label_18561c:
    if (ctx->pc == 0x18561Cu) {
        ctx->pc = 0x18561Cu;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 18), 648));
        ctx->pc = 0x185620u;
        goto label_185620;
    }
    ctx->pc = 0x185618u;
    SET_GPR_U32(ctx, 31, 0x185620u);
    ctx->pc = 0x18561Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 18), 648));
    ctx->pc = 0x1850D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvdec_MotionSub_0x1850d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185620u; }
        else if (ctx->pc != 0x185620u) { ctx->pc = 0x185620u; }
    }
    if (ctx->pc != 0x185620u) { return; }
    ctx->pc = 0x185620u;
label_185620:
    // 0x185620: 0x40802d
    ctx->pc = 0x185620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_185624:
    // 0x185624: 0x240202d
    ctx->pc = 0x185624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_185628:
    // 0x185628: 0x2c0282d
    ctx->pc = 0x185628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_18562c:
    // 0x18562c: 0x26460294
    ctx->pc = 0x18562cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 18), 660));
label_185630:
    // 0x185630: 0xc061436
label_185634:
    if (ctx->pc == 0x185634u) {
        ctx->pc = 0x185634u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 18), 652));
        ctx->pc = 0x185638u;
        goto label_185638;
    }
    ctx->pc = 0x185630u;
    SET_GPR_U32(ctx, 31, 0x185638u);
    ctx->pc = 0x185634u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 18), 652));
    ctx->pc = 0x1850D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvdec_MotionSub_0x1850d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185638u; }
        else if (ctx->pc != 0x185638u) { ctx->pc = 0x185638u; }
    }
    if (ctx->pc != 0x185638u) { return; }
    ctx->pc = 0x185638u;
label_185638:
    // 0x185638: 0x2028025
    ctx->pc = 0x185638u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_18563c:
    // 0x18563c: 0x8e550000
    ctx->pc = 0x18563cu;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_185640:
    // 0x185640: 0x8e510004
    ctx->pc = 0x185640u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_185644:
    // 0x185644: 0x8e540008
    ctx->pc = 0x185644u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_185648:
    // 0x185648: 0x1600005c
label_18564c:
    if (ctx->pc == 0x18564Cu) {
        ctx->pc = 0x18564Cu;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->pc = 0x185650u;
        goto label_185650;
    }
    ctx->pc = 0x185648u;
    {
        const bool branch_taken_0x185648 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x18564Cu;
        SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 18), 12)));
        if (branch_taken_0x185648) {
            ctx->pc = 0x1857BCu;
            goto label_1857bc;
        }
    }
    ctx->pc = 0x185650u;
label_185650:
    // 0x185650: 0x8e4602a4
    ctx->pc = 0x185650u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 676)));
label_185654:
    // 0x185654: 0x30c20002
    ctx->pc = 0x185654u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 2));
label_185658:
    // 0x185658: 0x10400028
label_18565c:
    if (ctx->pc == 0x18565Cu) {
        ctx->pc = 0x18565Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 24));
        ctx->pc = 0x185660u;
        goto label_185660;
    }
    ctx->pc = 0x185658u;
    {
        const bool branch_taken_0x185658 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x18565Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 24));
        if (branch_taken_0x185658) {
            ctx->pc = 0x1856FCu;
            goto label_1856fc;
        }
    }
    ctx->pc = 0x185660u;
label_185660:
    // 0x185660: 0x14400005
label_185664:
    if (ctx->pc == 0x185664u) {
        ctx->pc = 0x185664u;
        SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 21), 23));
        ctx->pc = 0x185668u;
        goto label_185668;
    }
    ctx->pc = 0x185660u;
    {
        const bool branch_taken_0x185660 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x185664u;
        SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 21), 23));
        if (branch_taken_0x185660) {
            ctx->pc = 0x185678u;
            goto label_185678;
        }
    }
    ctx->pc = 0x185668u;
label_185668:
    // 0x185668: 0x24020037
    ctx->pc = 0x185668u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 55));
label_18566c:
    // 0x18566c: 0x541023
    ctx->pc = 0x18566cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_185670:
    // 0x185670: 0x511006
    ctx->pc = 0x185670u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
label_185674:
    // 0x185674: 0xa22825
    ctx->pc = 0x185674u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_185678:
    // 0x185678: 0x51840
    ctx->pc = 0x185678u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
label_18567c:
    // 0x18567c: 0x3c040024
    ctx->pc = 0x18567cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)36 << 16));
label_185680:
    // 0x185680: 0x8c851a50
    ctx->pc = 0x185680u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 6736)));
label_185684:
    // 0x185684: 0x3c02ffff
    ctx->pc = 0x185684u;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
label_185688:
    // 0x185688: 0x3442fff0
    ctx->pc = 0x185688u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65520));
label_18568c:
    // 0x18568c: 0x651821
    ctx->pc = 0x18568cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_185690:
    // 0x185690: 0x84650000
    ctx->pc = 0x185690u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_185694:
    // 0x185694: 0xa21024
    ctx->pc = 0x185694u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_185698:
    // 0x185698: 0x30a500ff
    ctx->pc = 0x185698u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 255));
label_18569c:
    // 0x18569c: 0x21400
    ctx->pc = 0x18569cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
label_1856a0:
    // 0x1856a0: 0x285a021
    ctx->pc = 0x1856a0u;
    SET_GPR_U32(ctx, 20, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_1856a4:
    // 0x1856a4: 0x2a830020
    ctx->pc = 0x1856a4u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), 32));
label_1856a8:
    // 0x1856a8: 0x14600012
label_1856ac:
    if (ctx->pc == 0x1856ACu) {
        ctx->pc = 0x1856ACu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 680), GPR_U32(ctx, 2));
        ctx->pc = 0x1856B0u;
        goto label_1856b0;
    }
    ctx->pc = 0x1856A8u;
    {
        const bool branch_taken_0x1856a8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1856ACu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 680), GPR_U32(ctx, 2));
        if (branch_taken_0x1856a8) {
            ctx->pc = 0x1856F4u;
            goto label_1856f4;
        }
    }
    ctx->pc = 0x1856B0u;
label_1856b0:
    // 0x1856b0: 0x2694ffe0
    ctx->pc = 0x1856b0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 4294967264));
label_1856b4:
    // 0x1856b4: 0x291a804
    ctx->pc = 0x1856b4u;
    SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 20) & 0x1F));
label_1856b8:
    // 0x1856b8: 0x82710000
    ctx->pc = 0x1856b8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_1856bc:
    // 0x1856bc: 0x26730001
    ctx->pc = 0x1856bcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1856c0:
    // 0x1856c0: 0x92620000
    ctx->pc = 0x1856c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_1856c4:
    // 0x1856c4: 0x118a00
    ctx->pc = 0x1856c4u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 8));
label_1856c8:
    // 0x1856c8: 0x26730001
    ctx->pc = 0x1856c8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1856cc:
    // 0x1856cc: 0x2228825
    ctx->pc = 0x1856ccu;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1856d0:
    // 0x1856d0: 0x92630000
    ctx->pc = 0x1856d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_1856d4:
    // 0x1856d4: 0x26730001
    ctx->pc = 0x1856d4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1856d8:
    // 0x1856d8: 0x118a00
    ctx->pc = 0x1856d8u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 8));
label_1856dc:
    // 0x1856dc: 0x92620000
    ctx->pc = 0x1856dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_1856e0:
    // 0x1856e0: 0x2238825
    ctx->pc = 0x1856e0u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1856e4:
    // 0x1856e4: 0x118a00
    ctx->pc = 0x1856e4u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 17), 8));
label_1856e8:
    // 0x1856e8: 0x26730001
    ctx->pc = 0x1856e8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_1856ec:
    // 0x1856ec: 0x10000004
label_1856f0:
    if (ctx->pc == 0x1856F0u) {
        ctx->pc = 0x1856F0u;
        SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->pc = 0x1856F4u;
        goto label_1856f4;
    }
    ctx->pc = 0x1856ECu;
    {
        const bool branch_taken_0x1856ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1856F0u;
        SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        if (branch_taken_0x1856ec) {
            ctx->pc = 0x185700u;
            goto label_185700;
        }
    }
    ctx->pc = 0x1856F4u;
label_1856f4:
    // 0x1856f4: 0x10000002
label_1856f8:
    if (ctx->pc == 0x1856F8u) {
        ctx->pc = 0x1856F8u;
        SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 5) & 0x1F));
        ctx->pc = 0x1856FCu;
        goto label_1856fc;
    }
    ctx->pc = 0x1856F4u;
    {
        const bool branch_taken_0x1856f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1856F8u;
        SET_GPR_U32(ctx, 21, SLL32(GPR_U32(ctx, 21), GPR_U32(ctx, 5) & 0x1F));
        if (branch_taken_0x1856f4) {
            ctx->pc = 0x185700u;
            goto label_185700;
        }
    }
    ctx->pc = 0x1856FCu;
label_1856fc:
    // 0x1856fc: 0xae4002a8
    ctx->pc = 0x1856fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 680), GPR_U32(ctx, 0));
label_185700:
    // 0x185700: 0xae550000
    ctx->pc = 0x185700u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 21));
label_185704:
    // 0x185704: 0x30c20001
    ctx->pc = 0x185704u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 1));
label_185708:
    // 0x185708: 0xae510004
    ctx->pc = 0x185708u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
label_18570c:
    // 0x18570c: 0xae540008
    ctx->pc = 0x18570cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 20));
label_185710:
    // 0x185710: 0x1040000d
label_185714:
    if (ctx->pc == 0x185714u) {
        ctx->pc = 0x185714u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 19));
        ctx->pc = 0x185718u;
        goto label_185718;
    }
    ctx->pc = 0x185710u;
    {
        const bool branch_taken_0x185710 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x185714u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 19));
        if (branch_taken_0x185710) {
            ctx->pc = 0x185748u;
            goto label_185748;
        }
    }
    ctx->pc = 0x185718u;
label_185718:
    // 0x185718: 0x8e420234
    ctx->pc = 0x185718u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 564)));
label_18571c:
    // 0x18571c: 0x40f809
label_185720:
    if (ctx->pc == 0x185720u) {
        ctx->pc = 0x185720u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185724u;
        goto label_185724;
    }
    ctx->pc = 0x18571Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185724u);
        ctx->pc = 0x185720u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1852C0u: goto label_1852c0;
            case 0x1852C4u: goto label_1852c4;
            case 0x1852C8u: goto label_1852c8;
            case 0x1852CCu: goto label_1852cc;
            case 0x1852D0u: goto label_1852d0;
            case 0x1852D4u: goto label_1852d4;
            case 0x1852D8u: goto label_1852d8;
            case 0x1852DCu: goto label_1852dc;
            case 0x1852E0u: goto label_1852e0;
            case 0x1852E4u: goto label_1852e4;
            case 0x1852E8u: goto label_1852e8;
            case 0x1852ECu: goto label_1852ec;
            case 0x1852F0u: goto label_1852f0;
            case 0x1852F4u: goto label_1852f4;
            case 0x1852F8u: goto label_1852f8;
            case 0x1852FCu: goto label_1852fc;
            case 0x185300u: goto label_185300;
            case 0x185304u: goto label_185304;
            case 0x185308u: goto label_185308;
            case 0x18530Cu: goto label_18530c;
            case 0x185310u: goto label_185310;
            case 0x185314u: goto label_185314;
            case 0x185318u: goto label_185318;
            case 0x18531Cu: goto label_18531c;
            case 0x185320u: goto label_185320;
            case 0x185324u: goto label_185324;
            case 0x185328u: goto label_185328;
            case 0x18532Cu: goto label_18532c;
            case 0x185330u: goto label_185330;
            case 0x185334u: goto label_185334;
            case 0x185338u: goto label_185338;
            case 0x18533Cu: goto label_18533c;
            case 0x185340u: goto label_185340;
            case 0x185344u: goto label_185344;
            case 0x185348u: goto label_185348;
            case 0x18534Cu: goto label_18534c;
            case 0x185350u: goto label_185350;
            case 0x185354u: goto label_185354;
            case 0x185358u: goto label_185358;
            case 0x18535Cu: goto label_18535c;
            case 0x185360u: goto label_185360;
            case 0x185364u: goto label_185364;
            case 0x185368u: goto label_185368;
            case 0x18536Cu: goto label_18536c;
            case 0x185370u: goto label_185370;
            case 0x185374u: goto label_185374;
            case 0x185378u: goto label_185378;
            case 0x18537Cu: goto label_18537c;
            case 0x185380u: goto label_185380;
            case 0x185384u: goto label_185384;
            case 0x185388u: goto label_185388;
            case 0x18538Cu: goto label_18538c;
            case 0x185390u: goto label_185390;
            case 0x185394u: goto label_185394;
            case 0x185398u: goto label_185398;
            case 0x18539Cu: goto label_18539c;
            case 0x1853A0u: goto label_1853a0;
            case 0x1853A4u: goto label_1853a4;
            case 0x1853A8u: goto label_1853a8;
            case 0x1853ACu: goto label_1853ac;
            case 0x1853B0u: goto label_1853b0;
            case 0x1853B4u: goto label_1853b4;
            case 0x1853B8u: goto label_1853b8;
            case 0x1853BCu: goto label_1853bc;
            case 0x1853C0u: goto label_1853c0;
            case 0x1853C4u: goto label_1853c4;
            case 0x1853C8u: goto label_1853c8;
            case 0x1853CCu: goto label_1853cc;
            case 0x1853D0u: goto label_1853d0;
            case 0x1853D4u: goto label_1853d4;
            case 0x1853D8u: goto label_1853d8;
            case 0x1853DCu: goto label_1853dc;
            case 0x1853E0u: goto label_1853e0;
            case 0x1853E4u: goto label_1853e4;
            case 0x1853E8u: goto label_1853e8;
            case 0x1853ECu: goto label_1853ec;
            case 0x1853F0u: goto label_1853f0;
            case 0x1853F4u: goto label_1853f4;
            case 0x1853F8u: goto label_1853f8;
            case 0x1853FCu: goto label_1853fc;
            case 0x185400u: goto label_185400;
            case 0x185404u: goto label_185404;
            case 0x185408u: goto label_185408;
            case 0x18540Cu: goto label_18540c;
            case 0x185410u: goto label_185410;
            case 0x185414u: goto label_185414;
            case 0x185418u: goto label_185418;
            case 0x18541Cu: goto label_18541c;
            case 0x185420u: goto label_185420;
            case 0x185424u: goto label_185424;
            case 0x185428u: goto label_185428;
            case 0x18542Cu: goto label_18542c;
            case 0x185430u: goto label_185430;
            case 0x185434u: goto label_185434;
            case 0x185438u: goto label_185438;
            case 0x18543Cu: goto label_18543c;
            case 0x185440u: goto label_185440;
            case 0x185444u: goto label_185444;
            case 0x185448u: goto label_185448;
            case 0x18544Cu: goto label_18544c;
            case 0x185450u: goto label_185450;
            case 0x185454u: goto label_185454;
            case 0x185458u: goto label_185458;
            case 0x18545Cu: goto label_18545c;
            case 0x185460u: goto label_185460;
            case 0x185464u: goto label_185464;
            case 0x185468u: goto label_185468;
            case 0x18546Cu: goto label_18546c;
            case 0x185470u: goto label_185470;
            case 0x185474u: goto label_185474;
            case 0x185478u: goto label_185478;
            case 0x18547Cu: goto label_18547c;
            case 0x185480u: goto label_185480;
            case 0x185484u: goto label_185484;
            case 0x185488u: goto label_185488;
            case 0x18548Cu: goto label_18548c;
            case 0x185490u: goto label_185490;
            case 0x185494u: goto label_185494;
            case 0x185498u: goto label_185498;
            case 0x18549Cu: goto label_18549c;
            case 0x1854A0u: goto label_1854a0;
            case 0x1854A4u: goto label_1854a4;
            case 0x1854A8u: goto label_1854a8;
            case 0x1854ACu: goto label_1854ac;
            case 0x1854B0u: goto label_1854b0;
            case 0x1854B4u: goto label_1854b4;
            case 0x1854B8u: goto label_1854b8;
            case 0x1854BCu: goto label_1854bc;
            case 0x1854C0u: goto label_1854c0;
            case 0x1854C4u: goto label_1854c4;
            case 0x1854C8u: goto label_1854c8;
            case 0x1854CCu: goto label_1854cc;
            case 0x1854D0u: goto label_1854d0;
            case 0x1854D4u: goto label_1854d4;
            case 0x1854D8u: goto label_1854d8;
            case 0x1854DCu: goto label_1854dc;
            case 0x1854E0u: goto label_1854e0;
            case 0x1854E4u: goto label_1854e4;
            case 0x1854E8u: goto label_1854e8;
            case 0x1854ECu: goto label_1854ec;
            case 0x1854F0u: goto label_1854f0;
            case 0x1854F4u: goto label_1854f4;
            case 0x1854F8u: goto label_1854f8;
            case 0x1854FCu: goto label_1854fc;
            case 0x185500u: goto label_185500;
            case 0x185504u: goto label_185504;
            case 0x185508u: goto label_185508;
            case 0x18550Cu: goto label_18550c;
            case 0x185510u: goto label_185510;
            case 0x185514u: goto label_185514;
            case 0x185518u: goto label_185518;
            case 0x18551Cu: goto label_18551c;
            case 0x185520u: goto label_185520;
            case 0x185524u: goto label_185524;
            case 0x185528u: goto label_185528;
            case 0x18552Cu: goto label_18552c;
            case 0x185530u: goto label_185530;
            case 0x185534u: goto label_185534;
            case 0x185538u: goto label_185538;
            case 0x18553Cu: goto label_18553c;
            case 0x185540u: goto label_185540;
            case 0x185544u: goto label_185544;
            case 0x185548u: goto label_185548;
            case 0x18554Cu: goto label_18554c;
            case 0x185550u: goto label_185550;
            case 0x185554u: goto label_185554;
            case 0x185558u: goto label_185558;
            case 0x18555Cu: goto label_18555c;
            case 0x185560u: goto label_185560;
            case 0x185564u: goto label_185564;
            case 0x185568u: goto label_185568;
            case 0x18556Cu: goto label_18556c;
            case 0x185570u: goto label_185570;
            case 0x185574u: goto label_185574;
            case 0x185578u: goto label_185578;
            case 0x18557Cu: goto label_18557c;
            case 0x185580u: goto label_185580;
            case 0x185584u: goto label_185584;
            case 0x185588u: goto label_185588;
            case 0x18558Cu: goto label_18558c;
            case 0x185590u: goto label_185590;
            case 0x185594u: goto label_185594;
            case 0x185598u: goto label_185598;
            case 0x18559Cu: goto label_18559c;
            case 0x1855A0u: goto label_1855a0;
            case 0x1855A4u: goto label_1855a4;
            case 0x1855A8u: goto label_1855a8;
            case 0x1855ACu: goto label_1855ac;
            case 0x1855B0u: goto label_1855b0;
            case 0x1855B4u: goto label_1855b4;
            case 0x1855B8u: goto label_1855b8;
            case 0x1855BCu: goto label_1855bc;
            case 0x1855C0u: goto label_1855c0;
            case 0x1855C4u: goto label_1855c4;
            case 0x1855C8u: goto label_1855c8;
            case 0x1855CCu: goto label_1855cc;
            case 0x1855D0u: goto label_1855d0;
            case 0x1855D4u: goto label_1855d4;
            case 0x1855D8u: goto label_1855d8;
            case 0x1855DCu: goto label_1855dc;
            case 0x1855E0u: goto label_1855e0;
            case 0x1855E4u: goto label_1855e4;
            case 0x1855E8u: goto label_1855e8;
            case 0x1855ECu: goto label_1855ec;
            case 0x1855F0u: goto label_1855f0;
            case 0x1855F4u: goto label_1855f4;
            case 0x1855F8u: goto label_1855f8;
            case 0x1855FCu: goto label_1855fc;
            case 0x185600u: goto label_185600;
            case 0x185604u: goto label_185604;
            case 0x185608u: goto label_185608;
            case 0x18560Cu: goto label_18560c;
            case 0x185610u: goto label_185610;
            case 0x185614u: goto label_185614;
            case 0x185618u: goto label_185618;
            case 0x18561Cu: goto label_18561c;
            case 0x185620u: goto label_185620;
            case 0x185624u: goto label_185624;
            case 0x185628u: goto label_185628;
            case 0x18562Cu: goto label_18562c;
            case 0x185630u: goto label_185630;
            case 0x185634u: goto label_185634;
            case 0x185638u: goto label_185638;
            case 0x18563Cu: goto label_18563c;
            case 0x185640u: goto label_185640;
            case 0x185644u: goto label_185644;
            case 0x185648u: goto label_185648;
            case 0x18564Cu: goto label_18564c;
            case 0x185650u: goto label_185650;
            case 0x185654u: goto label_185654;
            case 0x185658u: goto label_185658;
            case 0x18565Cu: goto label_18565c;
            case 0x185660u: goto label_185660;
            case 0x185664u: goto label_185664;
            case 0x185668u: goto label_185668;
            case 0x18566Cu: goto label_18566c;
            case 0x185670u: goto label_185670;
            case 0x185674u: goto label_185674;
            case 0x185678u: goto label_185678;
            case 0x18567Cu: goto label_18567c;
            case 0x185680u: goto label_185680;
            case 0x185684u: goto label_185684;
            case 0x185688u: goto label_185688;
            case 0x18568Cu: goto label_18568c;
            case 0x185690u: goto label_185690;
            case 0x185694u: goto label_185694;
            case 0x185698u: goto label_185698;
            case 0x18569Cu: goto label_18569c;
            case 0x1856A0u: goto label_1856a0;
            case 0x1856A4u: goto label_1856a4;
            case 0x1856A8u: goto label_1856a8;
            case 0x1856ACu: goto label_1856ac;
            case 0x1856B0u: goto label_1856b0;
            case 0x1856B4u: goto label_1856b4;
            case 0x1856B8u: goto label_1856b8;
            case 0x1856BCu: goto label_1856bc;
            case 0x1856C0u: goto label_1856c0;
            case 0x1856C4u: goto label_1856c4;
            case 0x1856C8u: goto label_1856c8;
            case 0x1856CCu: goto label_1856cc;
            case 0x1856D0u: goto label_1856d0;
            case 0x1856D4u: goto label_1856d4;
            case 0x1856D8u: goto label_1856d8;
            case 0x1856DCu: goto label_1856dc;
            case 0x1856E0u: goto label_1856e0;
            case 0x1856E4u: goto label_1856e4;
            case 0x1856E8u: goto label_1856e8;
            case 0x1856ECu: goto label_1856ec;
            case 0x1856F0u: goto label_1856f0;
            case 0x1856F4u: goto label_1856f4;
            case 0x1856F8u: goto label_1856f8;
            case 0x1856FCu: goto label_1856fc;
            case 0x185700u: goto label_185700;
            case 0x185704u: goto label_185704;
            case 0x185708u: goto label_185708;
            case 0x18570Cu: goto label_18570c;
            case 0x185710u: goto label_185710;
            case 0x185714u: goto label_185714;
            case 0x185718u: goto label_185718;
            case 0x18571Cu: goto label_18571c;
            case 0x185720u: goto label_185720;
            case 0x185724u: goto label_185724;
            case 0x185728u: goto label_185728;
            case 0x18572Cu: goto label_18572c;
            case 0x185730u: goto label_185730;
            case 0x185734u: goto label_185734;
            case 0x185738u: goto label_185738;
            case 0x18573Cu: goto label_18573c;
            case 0x185740u: goto label_185740;
            case 0x185744u: goto label_185744;
            case 0x185748u: goto label_185748;
            case 0x18574Cu: goto label_18574c;
            case 0x185750u: goto label_185750;
            case 0x185754u: goto label_185754;
            case 0x185758u: goto label_185758;
            case 0x18575Cu: goto label_18575c;
            case 0x185760u: goto label_185760;
            case 0x185764u: goto label_185764;
            case 0x185768u: goto label_185768;
            case 0x18576Cu: goto label_18576c;
            case 0x185770u: goto label_185770;
            case 0x185774u: goto label_185774;
            case 0x185778u: goto label_185778;
            case 0x18577Cu: goto label_18577c;
            case 0x185780u: goto label_185780;
            case 0x185784u: goto label_185784;
            case 0x185788u: goto label_185788;
            case 0x18578Cu: goto label_18578c;
            case 0x185790u: goto label_185790;
            case 0x185794u: goto label_185794;
            case 0x185798u: goto label_185798;
            case 0x18579Cu: goto label_18579c;
            case 0x1857A0u: goto label_1857a0;
            case 0x1857A4u: goto label_1857a4;
            case 0x1857A8u: goto label_1857a8;
            case 0x1857ACu: goto label_1857ac;
            case 0x1857B0u: goto label_1857b0;
            case 0x1857B4u: goto label_1857b4;
            case 0x1857B8u: goto label_1857b8;
            case 0x1857BCu: goto label_1857bc;
            case 0x1857C0u: goto label_1857c0;
            case 0x1857C4u: goto label_1857c4;
            case 0x1857C8u: goto label_1857c8;
            case 0x1857CCu: goto label_1857cc;
            case 0x1857D0u: goto label_1857d0;
            case 0x1857D4u: goto label_1857d4;
            case 0x1857D8u: goto label_1857d8;
            case 0x1857DCu: goto label_1857dc;
            case 0x1857E0u: goto label_1857e0;
            case 0x1857E4u: goto label_1857e4;
            case 0x1857E8u: goto label_1857e8;
            case 0x1857ECu: goto label_1857ec;
            case 0x1857F0u: goto label_1857f0;
            case 0x1857F4u: goto label_1857f4;
            case 0x1857F8u: goto label_1857f8;
            case 0x1857FCu: goto label_1857fc;
            case 0x185800u: goto label_185800;
            case 0x185804u: goto label_185804;
            case 0x185808u: goto label_185808;
            case 0x18580Cu: goto label_18580c;
            case 0x185810u: goto label_185810;
            case 0x185814u: goto label_185814;
            case 0x185818u: goto label_185818;
            case 0x18581Cu: goto label_18581c;
            case 0x185820u: goto label_185820;
            case 0x185824u: goto label_185824;
            case 0x185828u: goto label_185828;
            case 0x18582Cu: goto label_18582c;
            case 0x185830u: goto label_185830;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x185724u; }
            if (ctx->pc != 0x185724u) { return; }
        }
    }
    ctx->pc = 0x185724u;
label_185724:
    // 0x185724: 0x8e43023c
    ctx->pc = 0x185724u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 572)));
label_185728:
    // 0x185728: 0x60f809
label_18572c:
    if (ctx->pc == 0x18572Cu) {
        ctx->pc = 0x18572Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185730u;
        goto label_185730;
    }
    ctx->pc = 0x185728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x185730u);
        ctx->pc = 0x18572Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1852C0u: goto label_1852c0;
            case 0x1852C4u: goto label_1852c4;
            case 0x1852C8u: goto label_1852c8;
            case 0x1852CCu: goto label_1852cc;
            case 0x1852D0u: goto label_1852d0;
            case 0x1852D4u: goto label_1852d4;
            case 0x1852D8u: goto label_1852d8;
            case 0x1852DCu: goto label_1852dc;
            case 0x1852E0u: goto label_1852e0;
            case 0x1852E4u: goto label_1852e4;
            case 0x1852E8u: goto label_1852e8;
            case 0x1852ECu: goto label_1852ec;
            case 0x1852F0u: goto label_1852f0;
            case 0x1852F4u: goto label_1852f4;
            case 0x1852F8u: goto label_1852f8;
            case 0x1852FCu: goto label_1852fc;
            case 0x185300u: goto label_185300;
            case 0x185304u: goto label_185304;
            case 0x185308u: goto label_185308;
            case 0x18530Cu: goto label_18530c;
            case 0x185310u: goto label_185310;
            case 0x185314u: goto label_185314;
            case 0x185318u: goto label_185318;
            case 0x18531Cu: goto label_18531c;
            case 0x185320u: goto label_185320;
            case 0x185324u: goto label_185324;
            case 0x185328u: goto label_185328;
            case 0x18532Cu: goto label_18532c;
            case 0x185330u: goto label_185330;
            case 0x185334u: goto label_185334;
            case 0x185338u: goto label_185338;
            case 0x18533Cu: goto label_18533c;
            case 0x185340u: goto label_185340;
            case 0x185344u: goto label_185344;
            case 0x185348u: goto label_185348;
            case 0x18534Cu: goto label_18534c;
            case 0x185350u: goto label_185350;
            case 0x185354u: goto label_185354;
            case 0x185358u: goto label_185358;
            case 0x18535Cu: goto label_18535c;
            case 0x185360u: goto label_185360;
            case 0x185364u: goto label_185364;
            case 0x185368u: goto label_185368;
            case 0x18536Cu: goto label_18536c;
            case 0x185370u: goto label_185370;
            case 0x185374u: goto label_185374;
            case 0x185378u: goto label_185378;
            case 0x18537Cu: goto label_18537c;
            case 0x185380u: goto label_185380;
            case 0x185384u: goto label_185384;
            case 0x185388u: goto label_185388;
            case 0x18538Cu: goto label_18538c;
            case 0x185390u: goto label_185390;
            case 0x185394u: goto label_185394;
            case 0x185398u: goto label_185398;
            case 0x18539Cu: goto label_18539c;
            case 0x1853A0u: goto label_1853a0;
            case 0x1853A4u: goto label_1853a4;
            case 0x1853A8u: goto label_1853a8;
            case 0x1853ACu: goto label_1853ac;
            case 0x1853B0u: goto label_1853b0;
            case 0x1853B4u: goto label_1853b4;
            case 0x1853B8u: goto label_1853b8;
            case 0x1853BCu: goto label_1853bc;
            case 0x1853C0u: goto label_1853c0;
            case 0x1853C4u: goto label_1853c4;
            case 0x1853C8u: goto label_1853c8;
            case 0x1853CCu: goto label_1853cc;
            case 0x1853D0u: goto label_1853d0;
            case 0x1853D4u: goto label_1853d4;
            case 0x1853D8u: goto label_1853d8;
            case 0x1853DCu: goto label_1853dc;
            case 0x1853E0u: goto label_1853e0;
            case 0x1853E4u: goto label_1853e4;
            case 0x1853E8u: goto label_1853e8;
            case 0x1853ECu: goto label_1853ec;
            case 0x1853F0u: goto label_1853f0;
            case 0x1853F4u: goto label_1853f4;
            case 0x1853F8u: goto label_1853f8;
            case 0x1853FCu: goto label_1853fc;
            case 0x185400u: goto label_185400;
            case 0x185404u: goto label_185404;
            case 0x185408u: goto label_185408;
            case 0x18540Cu: goto label_18540c;
            case 0x185410u: goto label_185410;
            case 0x185414u: goto label_185414;
            case 0x185418u: goto label_185418;
            case 0x18541Cu: goto label_18541c;
            case 0x185420u: goto label_185420;
            case 0x185424u: goto label_185424;
            case 0x185428u: goto label_185428;
            case 0x18542Cu: goto label_18542c;
            case 0x185430u: goto label_185430;
            case 0x185434u: goto label_185434;
            case 0x185438u: goto label_185438;
            case 0x18543Cu: goto label_18543c;
            case 0x185440u: goto label_185440;
            case 0x185444u: goto label_185444;
            case 0x185448u: goto label_185448;
            case 0x18544Cu: goto label_18544c;
            case 0x185450u: goto label_185450;
            case 0x185454u: goto label_185454;
            case 0x185458u: goto label_185458;
            case 0x18545Cu: goto label_18545c;
            case 0x185460u: goto label_185460;
            case 0x185464u: goto label_185464;
            case 0x185468u: goto label_185468;
            case 0x18546Cu: goto label_18546c;
            case 0x185470u: goto label_185470;
            case 0x185474u: goto label_185474;
            case 0x185478u: goto label_185478;
            case 0x18547Cu: goto label_18547c;
            case 0x185480u: goto label_185480;
            case 0x185484u: goto label_185484;
            case 0x185488u: goto label_185488;
            case 0x18548Cu: goto label_18548c;
            case 0x185490u: goto label_185490;
            case 0x185494u: goto label_185494;
            case 0x185498u: goto label_185498;
            case 0x18549Cu: goto label_18549c;
            case 0x1854A0u: goto label_1854a0;
            case 0x1854A4u: goto label_1854a4;
            case 0x1854A8u: goto label_1854a8;
            case 0x1854ACu: goto label_1854ac;
            case 0x1854B0u: goto label_1854b0;
            case 0x1854B4u: goto label_1854b4;
            case 0x1854B8u: goto label_1854b8;
            case 0x1854BCu: goto label_1854bc;
            case 0x1854C0u: goto label_1854c0;
            case 0x1854C4u: goto label_1854c4;
            case 0x1854C8u: goto label_1854c8;
            case 0x1854CCu: goto label_1854cc;
            case 0x1854D0u: goto label_1854d0;
            case 0x1854D4u: goto label_1854d4;
            case 0x1854D8u: goto label_1854d8;
            case 0x1854DCu: goto label_1854dc;
            case 0x1854E0u: goto label_1854e0;
            case 0x1854E4u: goto label_1854e4;
            case 0x1854E8u: goto label_1854e8;
            case 0x1854ECu: goto label_1854ec;
            case 0x1854F0u: goto label_1854f0;
            case 0x1854F4u: goto label_1854f4;
            case 0x1854F8u: goto label_1854f8;
            case 0x1854FCu: goto label_1854fc;
            case 0x185500u: goto label_185500;
            case 0x185504u: goto label_185504;
            case 0x185508u: goto label_185508;
            case 0x18550Cu: goto label_18550c;
            case 0x185510u: goto label_185510;
            case 0x185514u: goto label_185514;
            case 0x185518u: goto label_185518;
            case 0x18551Cu: goto label_18551c;
            case 0x185520u: goto label_185520;
            case 0x185524u: goto label_185524;
            case 0x185528u: goto label_185528;
            case 0x18552Cu: goto label_18552c;
            case 0x185530u: goto label_185530;
            case 0x185534u: goto label_185534;
            case 0x185538u: goto label_185538;
            case 0x18553Cu: goto label_18553c;
            case 0x185540u: goto label_185540;
            case 0x185544u: goto label_185544;
            case 0x185548u: goto label_185548;
            case 0x18554Cu: goto label_18554c;
            case 0x185550u: goto label_185550;
            case 0x185554u: goto label_185554;
            case 0x185558u: goto label_185558;
            case 0x18555Cu: goto label_18555c;
            case 0x185560u: goto label_185560;
            case 0x185564u: goto label_185564;
            case 0x185568u: goto label_185568;
            case 0x18556Cu: goto label_18556c;
            case 0x185570u: goto label_185570;
            case 0x185574u: goto label_185574;
            case 0x185578u: goto label_185578;
            case 0x18557Cu: goto label_18557c;
            case 0x185580u: goto label_185580;
            case 0x185584u: goto label_185584;
            case 0x185588u: goto label_185588;
            case 0x18558Cu: goto label_18558c;
            case 0x185590u: goto label_185590;
            case 0x185594u: goto label_185594;
            case 0x185598u: goto label_185598;
            case 0x18559Cu: goto label_18559c;
            case 0x1855A0u: goto label_1855a0;
            case 0x1855A4u: goto label_1855a4;
            case 0x1855A8u: goto label_1855a8;
            case 0x1855ACu: goto label_1855ac;
            case 0x1855B0u: goto label_1855b0;
            case 0x1855B4u: goto label_1855b4;
            case 0x1855B8u: goto label_1855b8;
            case 0x1855BCu: goto label_1855bc;
            case 0x1855C0u: goto label_1855c0;
            case 0x1855C4u: goto label_1855c4;
            case 0x1855C8u: goto label_1855c8;
            case 0x1855CCu: goto label_1855cc;
            case 0x1855D0u: goto label_1855d0;
            case 0x1855D4u: goto label_1855d4;
            case 0x1855D8u: goto label_1855d8;
            case 0x1855DCu: goto label_1855dc;
            case 0x1855E0u: goto label_1855e0;
            case 0x1855E4u: goto label_1855e4;
            case 0x1855E8u: goto label_1855e8;
            case 0x1855ECu: goto label_1855ec;
            case 0x1855F0u: goto label_1855f0;
            case 0x1855F4u: goto label_1855f4;
            case 0x1855F8u: goto label_1855f8;
            case 0x1855FCu: goto label_1855fc;
            case 0x185600u: goto label_185600;
            case 0x185604u: goto label_185604;
            case 0x185608u: goto label_185608;
            case 0x18560Cu: goto label_18560c;
            case 0x185610u: goto label_185610;
            case 0x185614u: goto label_185614;
            case 0x185618u: goto label_185618;
            case 0x18561Cu: goto label_18561c;
            case 0x185620u: goto label_185620;
            case 0x185624u: goto label_185624;
            case 0x185628u: goto label_185628;
            case 0x18562Cu: goto label_18562c;
            case 0x185630u: goto label_185630;
            case 0x185634u: goto label_185634;
            case 0x185638u: goto label_185638;
            case 0x18563Cu: goto label_18563c;
            case 0x185640u: goto label_185640;
            case 0x185644u: goto label_185644;
            case 0x185648u: goto label_185648;
            case 0x18564Cu: goto label_18564c;
            case 0x185650u: goto label_185650;
            case 0x185654u: goto label_185654;
            case 0x185658u: goto label_185658;
            case 0x18565Cu: goto label_18565c;
            case 0x185660u: goto label_185660;
            case 0x185664u: goto label_185664;
            case 0x185668u: goto label_185668;
            case 0x18566Cu: goto label_18566c;
            case 0x185670u: goto label_185670;
            case 0x185674u: goto label_185674;
            case 0x185678u: goto label_185678;
            case 0x18567Cu: goto label_18567c;
            case 0x185680u: goto label_185680;
            case 0x185684u: goto label_185684;
            case 0x185688u: goto label_185688;
            case 0x18568Cu: goto label_18568c;
            case 0x185690u: goto label_185690;
            case 0x185694u: goto label_185694;
            case 0x185698u: goto label_185698;
            case 0x18569Cu: goto label_18569c;
            case 0x1856A0u: goto label_1856a0;
            case 0x1856A4u: goto label_1856a4;
            case 0x1856A8u: goto label_1856a8;
            case 0x1856ACu: goto label_1856ac;
            case 0x1856B0u: goto label_1856b0;
            case 0x1856B4u: goto label_1856b4;
            case 0x1856B8u: goto label_1856b8;
            case 0x1856BCu: goto label_1856bc;
            case 0x1856C0u: goto label_1856c0;
            case 0x1856C4u: goto label_1856c4;
            case 0x1856C8u: goto label_1856c8;
            case 0x1856CCu: goto label_1856cc;
            case 0x1856D0u: goto label_1856d0;
            case 0x1856D4u: goto label_1856d4;
            case 0x1856D8u: goto label_1856d8;
            case 0x1856DCu: goto label_1856dc;
            case 0x1856E0u: goto label_1856e0;
            case 0x1856E4u: goto label_1856e4;
            case 0x1856E8u: goto label_1856e8;
            case 0x1856ECu: goto label_1856ec;
            case 0x1856F0u: goto label_1856f0;
            case 0x1856F4u: goto label_1856f4;
            case 0x1856F8u: goto label_1856f8;
            case 0x1856FCu: goto label_1856fc;
            case 0x185700u: goto label_185700;
            case 0x185704u: goto label_185704;
            case 0x185708u: goto label_185708;
            case 0x18570Cu: goto label_18570c;
            case 0x185710u: goto label_185710;
            case 0x185714u: goto label_185714;
            case 0x185718u: goto label_185718;
            case 0x18571Cu: goto label_18571c;
            case 0x185720u: goto label_185720;
            case 0x185724u: goto label_185724;
            case 0x185728u: goto label_185728;
            case 0x18572Cu: goto label_18572c;
            case 0x185730u: goto label_185730;
            case 0x185734u: goto label_185734;
            case 0x185738u: goto label_185738;
            case 0x18573Cu: goto label_18573c;
            case 0x185740u: goto label_185740;
            case 0x185744u: goto label_185744;
            case 0x185748u: goto label_185748;
            case 0x18574Cu: goto label_18574c;
            case 0x185750u: goto label_185750;
            case 0x185754u: goto label_185754;
            case 0x185758u: goto label_185758;
            case 0x18575Cu: goto label_18575c;
            case 0x185760u: goto label_185760;
            case 0x185764u: goto label_185764;
            case 0x185768u: goto label_185768;
            case 0x18576Cu: goto label_18576c;
            case 0x185770u: goto label_185770;
            case 0x185774u: goto label_185774;
            case 0x185778u: goto label_185778;
            case 0x18577Cu: goto label_18577c;
            case 0x185780u: goto label_185780;
            case 0x185784u: goto label_185784;
            case 0x185788u: goto label_185788;
            case 0x18578Cu: goto label_18578c;
            case 0x185790u: goto label_185790;
            case 0x185794u: goto label_185794;
            case 0x185798u: goto label_185798;
            case 0x18579Cu: goto label_18579c;
            case 0x1857A0u: goto label_1857a0;
            case 0x1857A4u: goto label_1857a4;
            case 0x1857A8u: goto label_1857a8;
            case 0x1857ACu: goto label_1857ac;
            case 0x1857B0u: goto label_1857b0;
            case 0x1857B4u: goto label_1857b4;
            case 0x1857B8u: goto label_1857b8;
            case 0x1857BCu: goto label_1857bc;
            case 0x1857C0u: goto label_1857c0;
            case 0x1857C4u: goto label_1857c4;
            case 0x1857C8u: goto label_1857c8;
            case 0x1857CCu: goto label_1857cc;
            case 0x1857D0u: goto label_1857d0;
            case 0x1857D4u: goto label_1857d4;
            case 0x1857D8u: goto label_1857d8;
            case 0x1857DCu: goto label_1857dc;
            case 0x1857E0u: goto label_1857e0;
            case 0x1857E4u: goto label_1857e4;
            case 0x1857E8u: goto label_1857e8;
            case 0x1857ECu: goto label_1857ec;
            case 0x1857F0u: goto label_1857f0;
            case 0x1857F4u: goto label_1857f4;
            case 0x1857F8u: goto label_1857f8;
            case 0x1857FCu: goto label_1857fc;
            case 0x185800u: goto label_185800;
            case 0x185804u: goto label_185804;
            case 0x185808u: goto label_185808;
            case 0x18580Cu: goto label_18580c;
            case 0x185810u: goto label_185810;
            case 0x185814u: goto label_185814;
            case 0x185818u: goto label_185818;
            case 0x18581Cu: goto label_18581c;
            case 0x185820u: goto label_185820;
            case 0x185824u: goto label_185824;
            case 0x185828u: goto label_185828;
            case 0x18582Cu: goto label_18582c;
            case 0x185830u: goto label_185830;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x185730u; }
            if (ctx->pc != 0x185730u) { return; }
        }
    }
    ctx->pc = 0x185730u;
label_185730:
    // 0x185730: 0xc06142a
label_185734:
    if (ctx->pc == 0x185734u) {
        ctx->pc = 0x185734u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 596));
        ctx->pc = 0x185738u;
        goto label_185738;
    }
    ctx->pc = 0x185730u;
    SET_GPR_U32(ctx, 31, 0x185738u);
    ctx->pc = 0x185734u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 596));
    ctx->pc = 0x1850A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVDEC_ResetMv_0x1850a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185738u; }
        else if (ctx->pc != 0x185738u) { ctx->pc = 0x185738u; }
    }
    if (ctx->pc != 0x185738u) { return; }
    ctx->pc = 0x185738u;
label_185738:
    // 0x185738: 0xc06142a
label_18573c:
    if (ctx->pc == 0x18573Cu) {
        ctx->pc = 0x18573Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 632));
        ctx->pc = 0x185740u;
        goto label_185740;
    }
    ctx->pc = 0x185738u;
    SET_GPR_U32(ctx, 31, 0x185740u);
    ctx->pc = 0x18573Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 632));
    ctx->pc = 0x1850A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVDEC_ResetMv_0x1850a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185740u; }
        else if (ctx->pc != 0x185740u) { ctx->pc = 0x185740u; }
    }
    if (ctx->pc != 0x185740u) { return; }
    ctx->pc = 0x185740u;
label_185740:
    // 0x185740: 0x10000011
label_185744:
    if (ctx->pc == 0x185744u) {
        ctx->pc = 0x185744u;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x185748u;
        goto label_185748;
    }
    ctx->pc = 0x185740u;
    {
        const bool branch_taken_0x185740 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185744u;
        SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 18), 0)));
        if (branch_taken_0x185740) {
            ctx->pc = 0x185788u;
            goto label_185788;
        }
    }
    ctx->pc = 0x185748u;
label_185748:
    // 0x185748: 0x8e4202a8
    ctx->pc = 0x185748u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 680)));
label_18574c:
    // 0x18574c: 0x10400006
label_185750:
    if (ctx->pc == 0x185750u) {
        ctx->pc = 0x185750u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 12));
        ctx->pc = 0x185754u;
        goto label_185754;
    }
    ctx->pc = 0x18574Cu;
    {
        const bool branch_taken_0x18574c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x185750u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 12));
        if (branch_taken_0x18574c) {
            ctx->pc = 0x185768u;
            goto label_185768;
        }
    }
    ctx->pc = 0x185754u;
label_185754:
    // 0x185754: 0x8e420238
    ctx->pc = 0x185754u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 568)));
label_185758:
    // 0x185758: 0x40f809
label_18575c:
    if (ctx->pc == 0x18575Cu) {
        ctx->pc = 0x18575Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185760u;
        goto label_185760;
    }
    ctx->pc = 0x185758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x185760u);
        ctx->pc = 0x18575Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1852C0u: goto label_1852c0;
            case 0x1852C4u: goto label_1852c4;
            case 0x1852C8u: goto label_1852c8;
            case 0x1852CCu: goto label_1852cc;
            case 0x1852D0u: goto label_1852d0;
            case 0x1852D4u: goto label_1852d4;
            case 0x1852D8u: goto label_1852d8;
            case 0x1852DCu: goto label_1852dc;
            case 0x1852E0u: goto label_1852e0;
            case 0x1852E4u: goto label_1852e4;
            case 0x1852E8u: goto label_1852e8;
            case 0x1852ECu: goto label_1852ec;
            case 0x1852F0u: goto label_1852f0;
            case 0x1852F4u: goto label_1852f4;
            case 0x1852F8u: goto label_1852f8;
            case 0x1852FCu: goto label_1852fc;
            case 0x185300u: goto label_185300;
            case 0x185304u: goto label_185304;
            case 0x185308u: goto label_185308;
            case 0x18530Cu: goto label_18530c;
            case 0x185310u: goto label_185310;
            case 0x185314u: goto label_185314;
            case 0x185318u: goto label_185318;
            case 0x18531Cu: goto label_18531c;
            case 0x185320u: goto label_185320;
            case 0x185324u: goto label_185324;
            case 0x185328u: goto label_185328;
            case 0x18532Cu: goto label_18532c;
            case 0x185330u: goto label_185330;
            case 0x185334u: goto label_185334;
            case 0x185338u: goto label_185338;
            case 0x18533Cu: goto label_18533c;
            case 0x185340u: goto label_185340;
            case 0x185344u: goto label_185344;
            case 0x185348u: goto label_185348;
            case 0x18534Cu: goto label_18534c;
            case 0x185350u: goto label_185350;
            case 0x185354u: goto label_185354;
            case 0x185358u: goto label_185358;
            case 0x18535Cu: goto label_18535c;
            case 0x185360u: goto label_185360;
            case 0x185364u: goto label_185364;
            case 0x185368u: goto label_185368;
            case 0x18536Cu: goto label_18536c;
            case 0x185370u: goto label_185370;
            case 0x185374u: goto label_185374;
            case 0x185378u: goto label_185378;
            case 0x18537Cu: goto label_18537c;
            case 0x185380u: goto label_185380;
            case 0x185384u: goto label_185384;
            case 0x185388u: goto label_185388;
            case 0x18538Cu: goto label_18538c;
            case 0x185390u: goto label_185390;
            case 0x185394u: goto label_185394;
            case 0x185398u: goto label_185398;
            case 0x18539Cu: goto label_18539c;
            case 0x1853A0u: goto label_1853a0;
            case 0x1853A4u: goto label_1853a4;
            case 0x1853A8u: goto label_1853a8;
            case 0x1853ACu: goto label_1853ac;
            case 0x1853B0u: goto label_1853b0;
            case 0x1853B4u: goto label_1853b4;
            case 0x1853B8u: goto label_1853b8;
            case 0x1853BCu: goto label_1853bc;
            case 0x1853C0u: goto label_1853c0;
            case 0x1853C4u: goto label_1853c4;
            case 0x1853C8u: goto label_1853c8;
            case 0x1853CCu: goto label_1853cc;
            case 0x1853D0u: goto label_1853d0;
            case 0x1853D4u: goto label_1853d4;
            case 0x1853D8u: goto label_1853d8;
            case 0x1853DCu: goto label_1853dc;
            case 0x1853E0u: goto label_1853e0;
            case 0x1853E4u: goto label_1853e4;
            case 0x1853E8u: goto label_1853e8;
            case 0x1853ECu: goto label_1853ec;
            case 0x1853F0u: goto label_1853f0;
            case 0x1853F4u: goto label_1853f4;
            case 0x1853F8u: goto label_1853f8;
            case 0x1853FCu: goto label_1853fc;
            case 0x185400u: goto label_185400;
            case 0x185404u: goto label_185404;
            case 0x185408u: goto label_185408;
            case 0x18540Cu: goto label_18540c;
            case 0x185410u: goto label_185410;
            case 0x185414u: goto label_185414;
            case 0x185418u: goto label_185418;
            case 0x18541Cu: goto label_18541c;
            case 0x185420u: goto label_185420;
            case 0x185424u: goto label_185424;
            case 0x185428u: goto label_185428;
            case 0x18542Cu: goto label_18542c;
            case 0x185430u: goto label_185430;
            case 0x185434u: goto label_185434;
            case 0x185438u: goto label_185438;
            case 0x18543Cu: goto label_18543c;
            case 0x185440u: goto label_185440;
            case 0x185444u: goto label_185444;
            case 0x185448u: goto label_185448;
            case 0x18544Cu: goto label_18544c;
            case 0x185450u: goto label_185450;
            case 0x185454u: goto label_185454;
            case 0x185458u: goto label_185458;
            case 0x18545Cu: goto label_18545c;
            case 0x185460u: goto label_185460;
            case 0x185464u: goto label_185464;
            case 0x185468u: goto label_185468;
            case 0x18546Cu: goto label_18546c;
            case 0x185470u: goto label_185470;
            case 0x185474u: goto label_185474;
            case 0x185478u: goto label_185478;
            case 0x18547Cu: goto label_18547c;
            case 0x185480u: goto label_185480;
            case 0x185484u: goto label_185484;
            case 0x185488u: goto label_185488;
            case 0x18548Cu: goto label_18548c;
            case 0x185490u: goto label_185490;
            case 0x185494u: goto label_185494;
            case 0x185498u: goto label_185498;
            case 0x18549Cu: goto label_18549c;
            case 0x1854A0u: goto label_1854a0;
            case 0x1854A4u: goto label_1854a4;
            case 0x1854A8u: goto label_1854a8;
            case 0x1854ACu: goto label_1854ac;
            case 0x1854B0u: goto label_1854b0;
            case 0x1854B4u: goto label_1854b4;
            case 0x1854B8u: goto label_1854b8;
            case 0x1854BCu: goto label_1854bc;
            case 0x1854C0u: goto label_1854c0;
            case 0x1854C4u: goto label_1854c4;
            case 0x1854C8u: goto label_1854c8;
            case 0x1854CCu: goto label_1854cc;
            case 0x1854D0u: goto label_1854d0;
            case 0x1854D4u: goto label_1854d4;
            case 0x1854D8u: goto label_1854d8;
            case 0x1854DCu: goto label_1854dc;
            case 0x1854E0u: goto label_1854e0;
            case 0x1854E4u: goto label_1854e4;
            case 0x1854E8u: goto label_1854e8;
            case 0x1854ECu: goto label_1854ec;
            case 0x1854F0u: goto label_1854f0;
            case 0x1854F4u: goto label_1854f4;
            case 0x1854F8u: goto label_1854f8;
            case 0x1854FCu: goto label_1854fc;
            case 0x185500u: goto label_185500;
            case 0x185504u: goto label_185504;
            case 0x185508u: goto label_185508;
            case 0x18550Cu: goto label_18550c;
            case 0x185510u: goto label_185510;
            case 0x185514u: goto label_185514;
            case 0x185518u: goto label_185518;
            case 0x18551Cu: goto label_18551c;
            case 0x185520u: goto label_185520;
            case 0x185524u: goto label_185524;
            case 0x185528u: goto label_185528;
            case 0x18552Cu: goto label_18552c;
            case 0x185530u: goto label_185530;
            case 0x185534u: goto label_185534;
            case 0x185538u: goto label_185538;
            case 0x18553Cu: goto label_18553c;
            case 0x185540u: goto label_185540;
            case 0x185544u: goto label_185544;
            case 0x185548u: goto label_185548;
            case 0x18554Cu: goto label_18554c;
            case 0x185550u: goto label_185550;
            case 0x185554u: goto label_185554;
            case 0x185558u: goto label_185558;
            case 0x18555Cu: goto label_18555c;
            case 0x185560u: goto label_185560;
            case 0x185564u: goto label_185564;
            case 0x185568u: goto label_185568;
            case 0x18556Cu: goto label_18556c;
            case 0x185570u: goto label_185570;
            case 0x185574u: goto label_185574;
            case 0x185578u: goto label_185578;
            case 0x18557Cu: goto label_18557c;
            case 0x185580u: goto label_185580;
            case 0x185584u: goto label_185584;
            case 0x185588u: goto label_185588;
            case 0x18558Cu: goto label_18558c;
            case 0x185590u: goto label_185590;
            case 0x185594u: goto label_185594;
            case 0x185598u: goto label_185598;
            case 0x18559Cu: goto label_18559c;
            case 0x1855A0u: goto label_1855a0;
            case 0x1855A4u: goto label_1855a4;
            case 0x1855A8u: goto label_1855a8;
            case 0x1855ACu: goto label_1855ac;
            case 0x1855B0u: goto label_1855b0;
            case 0x1855B4u: goto label_1855b4;
            case 0x1855B8u: goto label_1855b8;
            case 0x1855BCu: goto label_1855bc;
            case 0x1855C0u: goto label_1855c0;
            case 0x1855C4u: goto label_1855c4;
            case 0x1855C8u: goto label_1855c8;
            case 0x1855CCu: goto label_1855cc;
            case 0x1855D0u: goto label_1855d0;
            case 0x1855D4u: goto label_1855d4;
            case 0x1855D8u: goto label_1855d8;
            case 0x1855DCu: goto label_1855dc;
            case 0x1855E0u: goto label_1855e0;
            case 0x1855E4u: goto label_1855e4;
            case 0x1855E8u: goto label_1855e8;
            case 0x1855ECu: goto label_1855ec;
            case 0x1855F0u: goto label_1855f0;
            case 0x1855F4u: goto label_1855f4;
            case 0x1855F8u: goto label_1855f8;
            case 0x1855FCu: goto label_1855fc;
            case 0x185600u: goto label_185600;
            case 0x185604u: goto label_185604;
            case 0x185608u: goto label_185608;
            case 0x18560Cu: goto label_18560c;
            case 0x185610u: goto label_185610;
            case 0x185614u: goto label_185614;
            case 0x185618u: goto label_185618;
            case 0x18561Cu: goto label_18561c;
            case 0x185620u: goto label_185620;
            case 0x185624u: goto label_185624;
            case 0x185628u: goto label_185628;
            case 0x18562Cu: goto label_18562c;
            case 0x185630u: goto label_185630;
            case 0x185634u: goto label_185634;
            case 0x185638u: goto label_185638;
            case 0x18563Cu: goto label_18563c;
            case 0x185640u: goto label_185640;
            case 0x185644u: goto label_185644;
            case 0x185648u: goto label_185648;
            case 0x18564Cu: goto label_18564c;
            case 0x185650u: goto label_185650;
            case 0x185654u: goto label_185654;
            case 0x185658u: goto label_185658;
            case 0x18565Cu: goto label_18565c;
            case 0x185660u: goto label_185660;
            case 0x185664u: goto label_185664;
            case 0x185668u: goto label_185668;
            case 0x18566Cu: goto label_18566c;
            case 0x185670u: goto label_185670;
            case 0x185674u: goto label_185674;
            case 0x185678u: goto label_185678;
            case 0x18567Cu: goto label_18567c;
            case 0x185680u: goto label_185680;
            case 0x185684u: goto label_185684;
            case 0x185688u: goto label_185688;
            case 0x18568Cu: goto label_18568c;
            case 0x185690u: goto label_185690;
            case 0x185694u: goto label_185694;
            case 0x185698u: goto label_185698;
            case 0x18569Cu: goto label_18569c;
            case 0x1856A0u: goto label_1856a0;
            case 0x1856A4u: goto label_1856a4;
            case 0x1856A8u: goto label_1856a8;
            case 0x1856ACu: goto label_1856ac;
            case 0x1856B0u: goto label_1856b0;
            case 0x1856B4u: goto label_1856b4;
            case 0x1856B8u: goto label_1856b8;
            case 0x1856BCu: goto label_1856bc;
            case 0x1856C0u: goto label_1856c0;
            case 0x1856C4u: goto label_1856c4;
            case 0x1856C8u: goto label_1856c8;
            case 0x1856CCu: goto label_1856cc;
            case 0x1856D0u: goto label_1856d0;
            case 0x1856D4u: goto label_1856d4;
            case 0x1856D8u: goto label_1856d8;
            case 0x1856DCu: goto label_1856dc;
            case 0x1856E0u: goto label_1856e0;
            case 0x1856E4u: goto label_1856e4;
            case 0x1856E8u: goto label_1856e8;
            case 0x1856ECu: goto label_1856ec;
            case 0x1856F0u: goto label_1856f0;
            case 0x1856F4u: goto label_1856f4;
            case 0x1856F8u: goto label_1856f8;
            case 0x1856FCu: goto label_1856fc;
            case 0x185700u: goto label_185700;
            case 0x185704u: goto label_185704;
            case 0x185708u: goto label_185708;
            case 0x18570Cu: goto label_18570c;
            case 0x185710u: goto label_185710;
            case 0x185714u: goto label_185714;
            case 0x185718u: goto label_185718;
            case 0x18571Cu: goto label_18571c;
            case 0x185720u: goto label_185720;
            case 0x185724u: goto label_185724;
            case 0x185728u: goto label_185728;
            case 0x18572Cu: goto label_18572c;
            case 0x185730u: goto label_185730;
            case 0x185734u: goto label_185734;
            case 0x185738u: goto label_185738;
            case 0x18573Cu: goto label_18573c;
            case 0x185740u: goto label_185740;
            case 0x185744u: goto label_185744;
            case 0x185748u: goto label_185748;
            case 0x18574Cu: goto label_18574c;
            case 0x185750u: goto label_185750;
            case 0x185754u: goto label_185754;
            case 0x185758u: goto label_185758;
            case 0x18575Cu: goto label_18575c;
            case 0x185760u: goto label_185760;
            case 0x185764u: goto label_185764;
            case 0x185768u: goto label_185768;
            case 0x18576Cu: goto label_18576c;
            case 0x185770u: goto label_185770;
            case 0x185774u: goto label_185774;
            case 0x185778u: goto label_185778;
            case 0x18577Cu: goto label_18577c;
            case 0x185780u: goto label_185780;
            case 0x185784u: goto label_185784;
            case 0x185788u: goto label_185788;
            case 0x18578Cu: goto label_18578c;
            case 0x185790u: goto label_185790;
            case 0x185794u: goto label_185794;
            case 0x185798u: goto label_185798;
            case 0x18579Cu: goto label_18579c;
            case 0x1857A0u: goto label_1857a0;
            case 0x1857A4u: goto label_1857a4;
            case 0x1857A8u: goto label_1857a8;
            case 0x1857ACu: goto label_1857ac;
            case 0x1857B0u: goto label_1857b0;
            case 0x1857B4u: goto label_1857b4;
            case 0x1857B8u: goto label_1857b8;
            case 0x1857BCu: goto label_1857bc;
            case 0x1857C0u: goto label_1857c0;
            case 0x1857C4u: goto label_1857c4;
            case 0x1857C8u: goto label_1857c8;
            case 0x1857CCu: goto label_1857cc;
            case 0x1857D0u: goto label_1857d0;
            case 0x1857D4u: goto label_1857d4;
            case 0x1857D8u: goto label_1857d8;
            case 0x1857DCu: goto label_1857dc;
            case 0x1857E0u: goto label_1857e0;
            case 0x1857E4u: goto label_1857e4;
            case 0x1857E8u: goto label_1857e8;
            case 0x1857ECu: goto label_1857ec;
            case 0x1857F0u: goto label_1857f0;
            case 0x1857F4u: goto label_1857f4;
            case 0x1857F8u: goto label_1857f8;
            case 0x1857FCu: goto label_1857fc;
            case 0x185800u: goto label_185800;
            case 0x185804u: goto label_185804;
            case 0x185808u: goto label_185808;
            case 0x18580Cu: goto label_18580c;
            case 0x185810u: goto label_185810;
            case 0x185814u: goto label_185814;
            case 0x185818u: goto label_185818;
            case 0x18581Cu: goto label_18581c;
            case 0x185820u: goto label_185820;
            case 0x185824u: goto label_185824;
            case 0x185828u: goto label_185828;
            case 0x18582Cu: goto label_18582c;
            case 0x185830u: goto label_185830;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x185760u; }
            if (ctx->pc != 0x185760u) { return; }
        }
    }
    ctx->pc = 0x185760u;
label_185760:
    // 0x185760: 0x8e4602a4
    ctx->pc = 0x185760u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 676)));
label_185764:
    // 0x185764: 0x30c2000c
    ctx->pc = 0x185764u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 12));
label_185768:
    // 0x185768: 0x240202d
    ctx->pc = 0x185768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18576c:
    // 0x18576c: 0x2421021
    ctx->pc = 0x18576cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_185770:
    // 0x185770: 0x8c430240
    ctx->pc = 0x185770u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 576)));
label_185774:
    // 0x185774: 0x60f809
label_185778:
    if (ctx->pc == 0x185778u) {
        ctx->pc = 0x185778u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 576), GPR_U32(ctx, 3));
        ctx->pc = 0x18577Cu;
        goto label_18577c;
    }
    ctx->pc = 0x185774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x18577Cu);
        ctx->pc = 0x185778u;
        WRITE32(ADD32(GPR_U32(ctx, 18), 576), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1852C0u: goto label_1852c0;
            case 0x1852C4u: goto label_1852c4;
            case 0x1852C8u: goto label_1852c8;
            case 0x1852CCu: goto label_1852cc;
            case 0x1852D0u: goto label_1852d0;
            case 0x1852D4u: goto label_1852d4;
            case 0x1852D8u: goto label_1852d8;
            case 0x1852DCu: goto label_1852dc;
            case 0x1852E0u: goto label_1852e0;
            case 0x1852E4u: goto label_1852e4;
            case 0x1852E8u: goto label_1852e8;
            case 0x1852ECu: goto label_1852ec;
            case 0x1852F0u: goto label_1852f0;
            case 0x1852F4u: goto label_1852f4;
            case 0x1852F8u: goto label_1852f8;
            case 0x1852FCu: goto label_1852fc;
            case 0x185300u: goto label_185300;
            case 0x185304u: goto label_185304;
            case 0x185308u: goto label_185308;
            case 0x18530Cu: goto label_18530c;
            case 0x185310u: goto label_185310;
            case 0x185314u: goto label_185314;
            case 0x185318u: goto label_185318;
            case 0x18531Cu: goto label_18531c;
            case 0x185320u: goto label_185320;
            case 0x185324u: goto label_185324;
            case 0x185328u: goto label_185328;
            case 0x18532Cu: goto label_18532c;
            case 0x185330u: goto label_185330;
            case 0x185334u: goto label_185334;
            case 0x185338u: goto label_185338;
            case 0x18533Cu: goto label_18533c;
            case 0x185340u: goto label_185340;
            case 0x185344u: goto label_185344;
            case 0x185348u: goto label_185348;
            case 0x18534Cu: goto label_18534c;
            case 0x185350u: goto label_185350;
            case 0x185354u: goto label_185354;
            case 0x185358u: goto label_185358;
            case 0x18535Cu: goto label_18535c;
            case 0x185360u: goto label_185360;
            case 0x185364u: goto label_185364;
            case 0x185368u: goto label_185368;
            case 0x18536Cu: goto label_18536c;
            case 0x185370u: goto label_185370;
            case 0x185374u: goto label_185374;
            case 0x185378u: goto label_185378;
            case 0x18537Cu: goto label_18537c;
            case 0x185380u: goto label_185380;
            case 0x185384u: goto label_185384;
            case 0x185388u: goto label_185388;
            case 0x18538Cu: goto label_18538c;
            case 0x185390u: goto label_185390;
            case 0x185394u: goto label_185394;
            case 0x185398u: goto label_185398;
            case 0x18539Cu: goto label_18539c;
            case 0x1853A0u: goto label_1853a0;
            case 0x1853A4u: goto label_1853a4;
            case 0x1853A8u: goto label_1853a8;
            case 0x1853ACu: goto label_1853ac;
            case 0x1853B0u: goto label_1853b0;
            case 0x1853B4u: goto label_1853b4;
            case 0x1853B8u: goto label_1853b8;
            case 0x1853BCu: goto label_1853bc;
            case 0x1853C0u: goto label_1853c0;
            case 0x1853C4u: goto label_1853c4;
            case 0x1853C8u: goto label_1853c8;
            case 0x1853CCu: goto label_1853cc;
            case 0x1853D0u: goto label_1853d0;
            case 0x1853D4u: goto label_1853d4;
            case 0x1853D8u: goto label_1853d8;
            case 0x1853DCu: goto label_1853dc;
            case 0x1853E0u: goto label_1853e0;
            case 0x1853E4u: goto label_1853e4;
            case 0x1853E8u: goto label_1853e8;
            case 0x1853ECu: goto label_1853ec;
            case 0x1853F0u: goto label_1853f0;
            case 0x1853F4u: goto label_1853f4;
            case 0x1853F8u: goto label_1853f8;
            case 0x1853FCu: goto label_1853fc;
            case 0x185400u: goto label_185400;
            case 0x185404u: goto label_185404;
            case 0x185408u: goto label_185408;
            case 0x18540Cu: goto label_18540c;
            case 0x185410u: goto label_185410;
            case 0x185414u: goto label_185414;
            case 0x185418u: goto label_185418;
            case 0x18541Cu: goto label_18541c;
            case 0x185420u: goto label_185420;
            case 0x185424u: goto label_185424;
            case 0x185428u: goto label_185428;
            case 0x18542Cu: goto label_18542c;
            case 0x185430u: goto label_185430;
            case 0x185434u: goto label_185434;
            case 0x185438u: goto label_185438;
            case 0x18543Cu: goto label_18543c;
            case 0x185440u: goto label_185440;
            case 0x185444u: goto label_185444;
            case 0x185448u: goto label_185448;
            case 0x18544Cu: goto label_18544c;
            case 0x185450u: goto label_185450;
            case 0x185454u: goto label_185454;
            case 0x185458u: goto label_185458;
            case 0x18545Cu: goto label_18545c;
            case 0x185460u: goto label_185460;
            case 0x185464u: goto label_185464;
            case 0x185468u: goto label_185468;
            case 0x18546Cu: goto label_18546c;
            case 0x185470u: goto label_185470;
            case 0x185474u: goto label_185474;
            case 0x185478u: goto label_185478;
            case 0x18547Cu: goto label_18547c;
            case 0x185480u: goto label_185480;
            case 0x185484u: goto label_185484;
            case 0x185488u: goto label_185488;
            case 0x18548Cu: goto label_18548c;
            case 0x185490u: goto label_185490;
            case 0x185494u: goto label_185494;
            case 0x185498u: goto label_185498;
            case 0x18549Cu: goto label_18549c;
            case 0x1854A0u: goto label_1854a0;
            case 0x1854A4u: goto label_1854a4;
            case 0x1854A8u: goto label_1854a8;
            case 0x1854ACu: goto label_1854ac;
            case 0x1854B0u: goto label_1854b0;
            case 0x1854B4u: goto label_1854b4;
            case 0x1854B8u: goto label_1854b8;
            case 0x1854BCu: goto label_1854bc;
            case 0x1854C0u: goto label_1854c0;
            case 0x1854C4u: goto label_1854c4;
            case 0x1854C8u: goto label_1854c8;
            case 0x1854CCu: goto label_1854cc;
            case 0x1854D0u: goto label_1854d0;
            case 0x1854D4u: goto label_1854d4;
            case 0x1854D8u: goto label_1854d8;
            case 0x1854DCu: goto label_1854dc;
            case 0x1854E0u: goto label_1854e0;
            case 0x1854E4u: goto label_1854e4;
            case 0x1854E8u: goto label_1854e8;
            case 0x1854ECu: goto label_1854ec;
            case 0x1854F0u: goto label_1854f0;
            case 0x1854F4u: goto label_1854f4;
            case 0x1854F8u: goto label_1854f8;
            case 0x1854FCu: goto label_1854fc;
            case 0x185500u: goto label_185500;
            case 0x185504u: goto label_185504;
            case 0x185508u: goto label_185508;
            case 0x18550Cu: goto label_18550c;
            case 0x185510u: goto label_185510;
            case 0x185514u: goto label_185514;
            case 0x185518u: goto label_185518;
            case 0x18551Cu: goto label_18551c;
            case 0x185520u: goto label_185520;
            case 0x185524u: goto label_185524;
            case 0x185528u: goto label_185528;
            case 0x18552Cu: goto label_18552c;
            case 0x185530u: goto label_185530;
            case 0x185534u: goto label_185534;
            case 0x185538u: goto label_185538;
            case 0x18553Cu: goto label_18553c;
            case 0x185540u: goto label_185540;
            case 0x185544u: goto label_185544;
            case 0x185548u: goto label_185548;
            case 0x18554Cu: goto label_18554c;
            case 0x185550u: goto label_185550;
            case 0x185554u: goto label_185554;
            case 0x185558u: goto label_185558;
            case 0x18555Cu: goto label_18555c;
            case 0x185560u: goto label_185560;
            case 0x185564u: goto label_185564;
            case 0x185568u: goto label_185568;
            case 0x18556Cu: goto label_18556c;
            case 0x185570u: goto label_185570;
            case 0x185574u: goto label_185574;
            case 0x185578u: goto label_185578;
            case 0x18557Cu: goto label_18557c;
            case 0x185580u: goto label_185580;
            case 0x185584u: goto label_185584;
            case 0x185588u: goto label_185588;
            case 0x18558Cu: goto label_18558c;
            case 0x185590u: goto label_185590;
            case 0x185594u: goto label_185594;
            case 0x185598u: goto label_185598;
            case 0x18559Cu: goto label_18559c;
            case 0x1855A0u: goto label_1855a0;
            case 0x1855A4u: goto label_1855a4;
            case 0x1855A8u: goto label_1855a8;
            case 0x1855ACu: goto label_1855ac;
            case 0x1855B0u: goto label_1855b0;
            case 0x1855B4u: goto label_1855b4;
            case 0x1855B8u: goto label_1855b8;
            case 0x1855BCu: goto label_1855bc;
            case 0x1855C0u: goto label_1855c0;
            case 0x1855C4u: goto label_1855c4;
            case 0x1855C8u: goto label_1855c8;
            case 0x1855CCu: goto label_1855cc;
            case 0x1855D0u: goto label_1855d0;
            case 0x1855D4u: goto label_1855d4;
            case 0x1855D8u: goto label_1855d8;
            case 0x1855DCu: goto label_1855dc;
            case 0x1855E0u: goto label_1855e0;
            case 0x1855E4u: goto label_1855e4;
            case 0x1855E8u: goto label_1855e8;
            case 0x1855ECu: goto label_1855ec;
            case 0x1855F0u: goto label_1855f0;
            case 0x1855F4u: goto label_1855f4;
            case 0x1855F8u: goto label_1855f8;
            case 0x1855FCu: goto label_1855fc;
            case 0x185600u: goto label_185600;
            case 0x185604u: goto label_185604;
            case 0x185608u: goto label_185608;
            case 0x18560Cu: goto label_18560c;
            case 0x185610u: goto label_185610;
            case 0x185614u: goto label_185614;
            case 0x185618u: goto label_185618;
            case 0x18561Cu: goto label_18561c;
            case 0x185620u: goto label_185620;
            case 0x185624u: goto label_185624;
            case 0x185628u: goto label_185628;
            case 0x18562Cu: goto label_18562c;
            case 0x185630u: goto label_185630;
            case 0x185634u: goto label_185634;
            case 0x185638u: goto label_185638;
            case 0x18563Cu: goto label_18563c;
            case 0x185640u: goto label_185640;
            case 0x185644u: goto label_185644;
            case 0x185648u: goto label_185648;
            case 0x18564Cu: goto label_18564c;
            case 0x185650u: goto label_185650;
            case 0x185654u: goto label_185654;
            case 0x185658u: goto label_185658;
            case 0x18565Cu: goto label_18565c;
            case 0x185660u: goto label_185660;
            case 0x185664u: goto label_185664;
            case 0x185668u: goto label_185668;
            case 0x18566Cu: goto label_18566c;
            case 0x185670u: goto label_185670;
            case 0x185674u: goto label_185674;
            case 0x185678u: goto label_185678;
            case 0x18567Cu: goto label_18567c;
            case 0x185680u: goto label_185680;
            case 0x185684u: goto label_185684;
            case 0x185688u: goto label_185688;
            case 0x18568Cu: goto label_18568c;
            case 0x185690u: goto label_185690;
            case 0x185694u: goto label_185694;
            case 0x185698u: goto label_185698;
            case 0x18569Cu: goto label_18569c;
            case 0x1856A0u: goto label_1856a0;
            case 0x1856A4u: goto label_1856a4;
            case 0x1856A8u: goto label_1856a8;
            case 0x1856ACu: goto label_1856ac;
            case 0x1856B0u: goto label_1856b0;
            case 0x1856B4u: goto label_1856b4;
            case 0x1856B8u: goto label_1856b8;
            case 0x1856BCu: goto label_1856bc;
            case 0x1856C0u: goto label_1856c0;
            case 0x1856C4u: goto label_1856c4;
            case 0x1856C8u: goto label_1856c8;
            case 0x1856CCu: goto label_1856cc;
            case 0x1856D0u: goto label_1856d0;
            case 0x1856D4u: goto label_1856d4;
            case 0x1856D8u: goto label_1856d8;
            case 0x1856DCu: goto label_1856dc;
            case 0x1856E0u: goto label_1856e0;
            case 0x1856E4u: goto label_1856e4;
            case 0x1856E8u: goto label_1856e8;
            case 0x1856ECu: goto label_1856ec;
            case 0x1856F0u: goto label_1856f0;
            case 0x1856F4u: goto label_1856f4;
            case 0x1856F8u: goto label_1856f8;
            case 0x1856FCu: goto label_1856fc;
            case 0x185700u: goto label_185700;
            case 0x185704u: goto label_185704;
            case 0x185708u: goto label_185708;
            case 0x18570Cu: goto label_18570c;
            case 0x185710u: goto label_185710;
            case 0x185714u: goto label_185714;
            case 0x185718u: goto label_185718;
            case 0x18571Cu: goto label_18571c;
            case 0x185720u: goto label_185720;
            case 0x185724u: goto label_185724;
            case 0x185728u: goto label_185728;
            case 0x18572Cu: goto label_18572c;
            case 0x185730u: goto label_185730;
            case 0x185734u: goto label_185734;
            case 0x185738u: goto label_185738;
            case 0x18573Cu: goto label_18573c;
            case 0x185740u: goto label_185740;
            case 0x185744u: goto label_185744;
            case 0x185748u: goto label_185748;
            case 0x18574Cu: goto label_18574c;
            case 0x185750u: goto label_185750;
            case 0x185754u: goto label_185754;
            case 0x185758u: goto label_185758;
            case 0x18575Cu: goto label_18575c;
            case 0x185760u: goto label_185760;
            case 0x185764u: goto label_185764;
            case 0x185768u: goto label_185768;
            case 0x18576Cu: goto label_18576c;
            case 0x185770u: goto label_185770;
            case 0x185774u: goto label_185774;
            case 0x185778u: goto label_185778;
            case 0x18577Cu: goto label_18577c;
            case 0x185780u: goto label_185780;
            case 0x185784u: goto label_185784;
            case 0x185788u: goto label_185788;
            case 0x18578Cu: goto label_18578c;
            case 0x185790u: goto label_185790;
            case 0x185794u: goto label_185794;
            case 0x185798u: goto label_185798;
            case 0x18579Cu: goto label_18579c;
            case 0x1857A0u: goto label_1857a0;
            case 0x1857A4u: goto label_1857a4;
            case 0x1857A8u: goto label_1857a8;
            case 0x1857ACu: goto label_1857ac;
            case 0x1857B0u: goto label_1857b0;
            case 0x1857B4u: goto label_1857b4;
            case 0x1857B8u: goto label_1857b8;
            case 0x1857BCu: goto label_1857bc;
            case 0x1857C0u: goto label_1857c0;
            case 0x1857C4u: goto label_1857c4;
            case 0x1857C8u: goto label_1857c8;
            case 0x1857CCu: goto label_1857cc;
            case 0x1857D0u: goto label_1857d0;
            case 0x1857D4u: goto label_1857d4;
            case 0x1857D8u: goto label_1857d8;
            case 0x1857DCu: goto label_1857dc;
            case 0x1857E0u: goto label_1857e0;
            case 0x1857E4u: goto label_1857e4;
            case 0x1857E8u: goto label_1857e8;
            case 0x1857ECu: goto label_1857ec;
            case 0x1857F0u: goto label_1857f0;
            case 0x1857F4u: goto label_1857f4;
            case 0x1857F8u: goto label_1857f8;
            case 0x1857FCu: goto label_1857fc;
            case 0x185800u: goto label_185800;
            case 0x185804u: goto label_185804;
            case 0x185808u: goto label_185808;
            case 0x18580Cu: goto label_18580c;
            case 0x185810u: goto label_185810;
            case 0x185814u: goto label_185814;
            case 0x185818u: goto label_185818;
            case 0x18581Cu: goto label_18581c;
            case 0x185820u: goto label_185820;
            case 0x185824u: goto label_185824;
            case 0x185828u: goto label_185828;
            case 0x18582Cu: goto label_18582c;
            case 0x185830u: goto label_185830;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18577Cu; }
            if (ctx->pc != 0x18577Cu) { return; }
        }
    }
    ctx->pc = 0x18577Cu;
label_18577c:
    // 0x18577c: 0xc061430
label_185780:
    if (ctx->pc == 0x185780u) {
        ctx->pc = 0x185780u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x185784u;
        goto label_185784;
    }
    ctx->pc = 0x18577Cu;
    SET_GPR_U32(ctx, 31, 0x185784u);
    ctx->pc = 0x185780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1850C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVDEC_ResetDc_0x1850c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185784u; }
        else if (ctx->pc != 0x185784u) { ctx->pc = 0x185784u; }
    }
    if (ctx->pc != 0x185784u) { return; }
    ctx->pc = 0x185784u;
label_185784:
    // 0x185784: 0x8e550000
    ctx->pc = 0x185784u;
    SET_GPR_U32(ctx, 21, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_185788:
    // 0x185788: 0x702d
    ctx->pc = 0x185788u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18578c:
    // 0x18578c: 0x8e510004
    ctx->pc = 0x18578cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_185790:
    // 0x185790: 0x8e540008
    ctx->pc = 0x185790u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_185794:
    // 0x185794: 0x8e53000c
    ctx->pc = 0x185794u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_185798:
    // 0x185798: 0x2a82000a
    ctx->pc = 0x185798u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 20), 10));
label_18579c:
    // 0x18579c: 0x14400005
label_1857a0:
    if (ctx->pc == 0x1857A0u) {
        ctx->pc = 0x1857A0u;
        SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 21), 9));
        ctx->pc = 0x1857A4u;
        goto label_1857a4;
    }
    ctx->pc = 0x18579Cu;
    {
        const bool branch_taken_0x18579c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1857A0u;
        SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 21), 9));
        if (branch_taken_0x18579c) {
            ctx->pc = 0x1857B4u;
            goto label_1857b4;
        }
    }
    ctx->pc = 0x1857A4u;
label_1857a4:
    // 0x1857a4: 0x24020029
    ctx->pc = 0x1857a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 41));
label_1857a8:
    // 0x1857a8: 0x541023
    ctx->pc = 0x1857a8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_1857ac:
    // 0x1857ac: 0x511006
    ctx->pc = 0x1857acu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
label_1857b0:
    // 0x1857b0: 0xa22825
    ctx->pc = 0x1857b0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1857b4:
    // 0x1857b4: 0x14a0fed6
label_1857b8:
    if (ctx->pc == 0x1857B8u) {
        ctx->pc = 0x1857B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
        ctx->pc = 0x1857BCu;
        goto label_1857bc;
    }
    ctx->pc = 0x1857B4u;
    {
        const bool branch_taken_0x1857b4 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1857B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
        if (branch_taken_0x1857b4) {
            ctx->pc = 0x185310u;
            goto label_185310;
        }
    }
    ctx->pc = 0x1857BCu;
label_1857bc:
    // 0x1857bc: 0x8fa30000
    ctx->pc = 0x1857bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1857c0:
    // 0x1857c0: 0x26820007
    ctx->pc = 0x1857c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 20), 7));
label_1857c4:
    // 0x1857c4: 0x210c3
    ctx->pc = 0x1857c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_1857c8:
    // 0x1857c8: 0x8fa40000
    ctx->pc = 0x1857c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1857cc:
    // 0x1857cc: 0x8c670000
    ctx->pc = 0x1857ccu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1857d0:
    // 0x1857d0: 0x2442fff8
    ctx->pc = 0x1857d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967288));
label_1857d4:
    // 0x1857d4: 0x8fc30000
    ctx->pc = 0x1857d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_1857d8:
    // 0x1857d8: 0x2621021
    ctx->pc = 0x1857d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1857dc:
    // 0x1857dc: 0x8fa50004
    ctx->pc = 0x1857dcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1857e0:
    // 0x1857e0: 0x473823
    ctx->pc = 0x1857e0u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1857e4:
    // 0x1857e4: 0xac820000
    ctx->pc = 0x1857e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1857e8:
    // 0x1857e8: 0x671821
    ctx->pc = 0x1857e8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1857ec:
    // 0x1857ec: 0xafc30000
    ctx->pc = 0x1857ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
label_1857f0:
    // 0x1857f0: 0x3c0302d
    ctx->pc = 0x1857f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1857f4:
    // 0x1857f4: 0x8fa30004
    ctx->pc = 0x1857f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1857f8:
    // 0x1857f8: 0xdfbf00a0
    ctx->pc = 0x1857f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1857fc:
    // 0x1857fc: 0x8c620000
    ctx->pc = 0x1857fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_185800:
    // 0x185800: 0xdfbe0090
    ctx->pc = 0x185800u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_185804:
    // 0x185804: 0x471023
    ctx->pc = 0x185804u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_185808:
    // 0x185808: 0xdfb70080
    ctx->pc = 0x185808u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_18580c:
    // 0x18580c: 0xdfb60070
    ctx->pc = 0x18580cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_185810:
    // 0x185810: 0xdfb50060
    ctx->pc = 0x185810u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_185814:
    // 0x185814: 0xdfb40050
    ctx->pc = 0x185814u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_185818:
    // 0x185818: 0xdfb30040
    ctx->pc = 0x185818u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_18581c:
    // 0x18581c: 0xdfb20030
    ctx->pc = 0x18581cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_185820:
    // 0x185820: 0xdfb10020
    ctx->pc = 0x185820u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_185824:
    // 0x185824: 0xdfb00010
    ctx->pc = 0x185824u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_185828:
    // 0x185828: 0xac620000
    ctx->pc = 0x185828u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_18582c:
    // 0x18582c: 0x8061e32
label_185830:
    if (ctx->pc == 0x185830u) {
        ctx->pc = 0x185830u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x185834u;
        goto label_fallthrough_0x18582c;
    }
    ctx->pc = 0x18582Cu;
    ctx->pc = 0x185830u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
    ctx->pc = 0x1878C8u;
    MPVHDEC_GoNextDelim_0x1878c8(rdram, ctx, runtime); return;
label_fallthrough_0x18582c:
    ctx->pc = 0x185834u;
}
