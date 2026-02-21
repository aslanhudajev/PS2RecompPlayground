#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: NextAttractWave
// Address: 0x262318 - 0x262500
void NextAttractWave_0x262318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x262318u;

    // 0x262318: 0x27bdff80
    ctx->pc = 0x262318u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x26231c: 0xffbf0070
    ctx->pc = 0x26231cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x262320: 0xffb60060
    ctx->pc = 0x262320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x262324: 0xffb50050
    ctx->pc = 0x262324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x262328: 0xffb40040
    ctx->pc = 0x262328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x26232c: 0xffb30030
    ctx->pc = 0x26232cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x262330: 0xffb20020
    ctx->pc = 0x262330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x262334: 0xffb10010
    ctx->pc = 0x262334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x262338: 0xffb00000
    ctx->pc = 0x262338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26233c: 0x49203
    ctx->pc = 0x26233cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 4), 8));
    // 0x262340: 0x3c020034
    ctx->pc = 0x262340u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x262344: 0x8c42e520
    ctx->pc = 0x262344u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294960416)));
    // 0x262348: 0x1052000c
    ctx->pc = 0x262348u;
    {
        const bool branch_taken_0x262348 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 18));
        ctx->pc = 0x26234Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x262348) {
            ctx->pc = 0x26237Cu;
            goto label_26237c;
        }
    }
    ctx->pc = 0x262350u;
    // 0x262350: 0x3c020034
    ctx->pc = 0x262350u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x262354: 0x2445e520
    ctx->pc = 0x262354u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294960416));
    // 0x262358: 0x2403002c
    ctx->pc = 0x262358u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 44));
    // 0x26235c: 0x26310001
    ctx->pc = 0x26235cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_262360:
    // 0x262360: 0x2e22000e
    ctx->pc = 0x262360u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 14));
    // 0x262364: 0x10400005
    ctx->pc = 0x262364u;
    {
        const bool branch_taken_0x262364 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x262368u;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x262364) {
            ctx->pc = 0x26237Cu;
            goto label_26237c;
        }
    }
    ctx->pc = 0x26236Cu;
    // 0x26236c: 0x851021
    ctx->pc = 0x26236cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x262370: 0x8c420000
    ctx->pc = 0x262370u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x262374: 0x5452fffa
    ctx->pc = 0x262374u;
    {
        const bool branch_taken_0x262374 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x262374) {
            ctx->pc = 0x262378u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x262360u;
            goto label_262360;
        }
    }
    ctx->pc = 0x26237Cu;
label_26237c:
    // 0x26237c: 0x3a22000e
    ctx->pc = 0x26237cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 17), 14));
    // 0x262380: 0x2880a
    ctx->pc = 0x262380u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 0));
    // 0x262384: 0x3c020034
    ctx->pc = 0x262384u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x262388: 0x2454e520
    ctx->pc = 0x262388u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294960416));
    // 0x26238c: 0x2413002c
    ctx->pc = 0x26238cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 44));
    // 0x262390: 0x3c020034
    ctx->pc = 0x262390u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x262394: 0x2455e530
    ctx->pc = 0x262394u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294960432));
    // 0x262398: 0x3c020034
    ctx->pc = 0x262398u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26239c: 0x2456e534
    ctx->pc = 0x26239cu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 4294960436));
    // 0x2623a0: 0x220182d
    ctx->pc = 0x2623a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2623a4: 0x0
    ctx->pc = 0x2623a4u;
    // NOP
label_2623a8:
    // 0x2623a8: 0x26310001
    ctx->pc = 0x2623a8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_2623ac:
    // 0x2623ac: 0x2e22000e
    ctx->pc = 0x2623acu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), 14));
    // 0x2623b0: 0x2880a
    ctx->pc = 0x2623b0u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 0));
    // 0x2623b4: 0x2332018
    ctx->pc = 0x2623b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2623b8: 0x951021
    ctx->pc = 0x2623b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 21)));
    // 0x2623bc: 0x8c420000
    ctx->pc = 0x2623bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2623c0: 0x54400004
    ctx->pc = 0x2623C0u;
    {
        const bool branch_taken_0x2623c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2623c0) {
            ctx->pc = 0x2623C4u;
            { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
            ctx->pc = 0x2623D4u;
            goto label_2623d4;
        }
    }
    ctx->pc = 0x2623C8u;
    // 0x2623c8: 0x5623fff8
    ctx->pc = 0x2623C8u;
    {
        const bool branch_taken_0x2623c8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 3));
        if (branch_taken_0x2623c8) {
            ctx->pc = 0x2623CCu;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x2623ACu;
            goto label_2623ac;
        }
    }
    ctx->pc = 0x2623D0u;
    // 0x2623d0: 0x2331818
    ctx->pc = 0x2623d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_2623d4:
    // 0x2623d4: 0x741021
    ctx->pc = 0x2623d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x2623d8: 0x8c520000
    ctx->pc = 0x2623d8u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2623dc: 0x2831021
    ctx->pc = 0x2623dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x2623e0: 0x8c500028
    ctx->pc = 0x2623e0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2623e4: 0x761821
    ctx->pc = 0x2623e4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x2623e8: 0x8c620000
    ctx->pc = 0x2623e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2623ec: 0x202102a
    ctx->pc = 0x2623ecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x2623f0: 0x2800a
    ctx->pc = 0x2623f0u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 0));
    // 0x2623f4: 0x121200
    ctx->pc = 0x2623f4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 18), 8));
    // 0x2623f8: 0x320400ff
    ctx->pc = 0x2623f8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 16), 255));
    // 0x2623fc: 0xc0986b4
    ctx->pc = 0x2623FCu;
    SET_GPR_U32(ctx, 31, 0x262404u);
    ctx->pc = 0x262400u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x261AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadWorldData_0x261ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262404u; }
    }
    if (ctx->pc != 0x262404u) { return; }
    ctx->pc = 0x262404u;
    // 0x262404: 0x3c020031
    ctx->pc = 0x262404u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x262408: 0xdc420e28
    ctx->pc = 0x262408u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x26240c: 0x30420010
    ctx->pc = 0x26240cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x262410: 0x14400020
    ctx->pc = 0x262410u;
    {
        const bool branch_taken_0x262410 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x262414u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x262410) {
            ctx->pc = 0x262494u;
            goto label_262494;
        }
    }
    ctx->pc = 0x262418u;
    // 0x262418: 0x3c020034
    ctx->pc = 0x262418u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26241c: 0x8c42e7c0
    ctx->pc = 0x26241cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961088)));
    // 0x262420: 0x8c47001c
    ctx->pc = 0x262420u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x262424: 0x2405010c
    ctx->pc = 0x262424u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 268));
    // 0x262428: 0x2403002c
    ctx->pc = 0x262428u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 44));
    // 0x26242c: 0x2231818
    ctx->pc = 0x26242cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x262430: 0x3c020034
    ctx->pc = 0x262430u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x262434: 0x2442e534
    ctx->pc = 0x262434u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294960436));
    // 0x262438: 0x621821
    ctx->pc = 0x262438u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26243c: 0x2053018
    ctx->pc = 0x26243cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_262440:
    // 0x262440: 0xc71021
    ctx->pc = 0x262440u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x262444: 0x94420004
    ctx->pc = 0x262444u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x262448: 0x30420002
    ctx->pc = 0x262448u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x26244c: 0x14400008
    ctx->pc = 0x26244Cu;
    {
        const bool branch_taken_0x26244c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x262450u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26244c) {
            ctx->pc = 0x262470u;
            goto label_262470;
        }
    }
    ctx->pc = 0x262454u;
    // 0x262454: 0x26100001
    ctx->pc = 0x262454u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x262458: 0x8c620000
    ctx->pc = 0x262458u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26245c: 0x202102a
    ctx->pc = 0x26245cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x262460: 0x2800a
    ctx->pc = 0x262460u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 0));
    // 0x262464: 0x1604fff6
    ctx->pc = 0x262464u;
    {
        const bool branch_taken_0x262464 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 4));
        ctx->pc = 0x262468u;
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x262464) {
            ctx->pc = 0x262440u;
            goto label_262440;
        }
    }
    ctx->pc = 0x26246Cu;
    // 0x26246c: 0x3c020034
    ctx->pc = 0x26246cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_262470:
    // 0x262470: 0x8c42e7c0
    ctx->pc = 0x262470u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961088)));
    // 0x262474: 0x8c43001c
    ctx->pc = 0x262474u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x262478: 0x2402010c
    ctx->pc = 0x262478u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 268));
    // 0x26247c: 0x2021018
    ctx->pc = 0x26247cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x262480: 0x431021
    ctx->pc = 0x262480u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x262484: 0x94420004
    ctx->pc = 0x262484u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x262488: 0x30420002
    ctx->pc = 0x262488u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x26248c: 0x1040ffc6
    ctx->pc = 0x26248Cu;
    {
        const bool branch_taken_0x26248c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x262490u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x26248c) {
            ctx->pc = 0x2623A8u;
            goto label_2623a8;
        }
    }
    ctx->pc = 0x262494u;
label_262494:
    // 0x262494: 0x129200
    ctx->pc = 0x262494u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 18), 8));
    // 0x262498: 0x320200ff
    ctx->pc = 0x262498u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 16), 255));
    // 0x26249c: 0x2429025
    ctx->pc = 0x26249cu;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2624a0: 0xc0986b4
    ctx->pc = 0x2624A0u;
    SET_GPR_U32(ctx, 31, 0x2624A8u);
    ctx->pc = 0x2624A4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x261AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadWorldData_0x261ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2624A8u; }
    }
    if (ctx->pc != 0x2624A8u) { return; }
    ctx->pc = 0x2624A8u;
    // 0x2624a8: 0x26100001
    ctx->pc = 0x2624a8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x2624ac: 0x3c040034
    ctx->pc = 0x2624acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)52 << 16));
    // 0x2624b0: 0x2484e520
    ctx->pc = 0x2624b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294960416));
    // 0x2624b4: 0x2403002c
    ctx->pc = 0x2624b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 44));
    // 0x2624b8: 0x2231818
    ctx->pc = 0x2624b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2624bc: 0x831021
    ctx->pc = 0x2624bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2624c0: 0x8c420014
    ctx->pc = 0x2624c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2624c4: 0x202102a
    ctx->pc = 0x2624c4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x2624c8: 0x2800a
    ctx->pc = 0x2624c8u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 0));
    // 0x2624cc: 0x832021
    ctx->pc = 0x2624ccu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2624d0: 0xac900028
    ctx->pc = 0x2624d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 16));
    // 0x2624d4: 0x240102d
    ctx->pc = 0x2624d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2624d8: 0xdfbf0070
    ctx->pc = 0x2624d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2624dc: 0xdfb60060
    ctx->pc = 0x2624dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2624e0: 0xdfb50050
    ctx->pc = 0x2624e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2624e4: 0xdfb40040
    ctx->pc = 0x2624e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2624e8: 0xdfb30030
    ctx->pc = 0x2624e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2624ec: 0xdfb20020
    ctx->pc = 0x2624ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2624f0: 0xdfb10010
    ctx->pc = 0x2624f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2624f4: 0xdfb00000
    ctx->pc = 0x2624f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2624f8: 0x3e00008
    ctx->pc = 0x2624F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2624FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x262360u: goto label_262360;
            case 0x26237Cu: goto label_26237c;
            case 0x2623A8u: goto label_2623a8;
            case 0x2623ACu: goto label_2623ac;
            case 0x2623D4u: goto label_2623d4;
            case 0x262440u: goto label_262440;
            case 0x262470u: goto label_262470;
            case 0x262494u: goto label_262494;
            default: break;
        }
        return;
    }
    ctx->pc = 0x262500u;
}
