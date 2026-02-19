#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GetEnemyTypes
// Address: 0x2627d8 - 0x262abc
void GetEnemyTypes_0x2627d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2627d8u;

    // 0x2627d8: 0x27bdff60
    ctx->pc = 0x2627d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2627dc: 0xffbf0090
    ctx->pc = 0x2627dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2627e0: 0xffbe0080
    ctx->pc = 0x2627e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2627e4: 0xffb70070
    ctx->pc = 0x2627e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2627e8: 0xffb60060
    ctx->pc = 0x2627e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2627ec: 0xffb50050
    ctx->pc = 0x2627ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2627f0: 0xffb40040
    ctx->pc = 0x2627f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2627f4: 0xffb30030
    ctx->pc = 0x2627f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2627f8: 0xffb20020
    ctx->pc = 0x2627f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2627fc: 0xffb10010
    ctx->pc = 0x2627fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x262800: 0xffb00000
    ctx->pc = 0x262800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x262804: 0xb02d
    ctx->pc = 0x262804u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262808: 0x3c020034
    ctx->pc = 0x262808u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26280c: 0x8c42e7c0
    ctx->pc = 0x26280cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961088)));
    // 0x262810: 0xc097c3a
    ctx->pc = 0x262810u;
    SET_GPR_U32(ctx, 31, 0x262818u);
    ctx->pc = 0x262814u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->pc = 0x25F0E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitEnemyAudio_0x25f0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262818u; }
    }
    if (ctx->pc != 0x262818u) { return; }
    ctx->pc = 0x262818u;
    // 0x262818: 0x882d
    ctx->pc = 0x262818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26281c: 0x3c1e0034
    ctx->pc = 0x26281cu;
    SET_GPR_U32(ctx, 30, ((uint32_t)52 << 16));
    // 0x262820: 0x3c020034
    ctx->pc = 0x262820u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x262824: 0x2453e820
    ctx->pc = 0x262824u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294961184));
    // 0x262828: 0x24170018
    ctx->pc = 0x262828u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 24));
    // 0x26282c: 0x3c020034
    ctx->pc = 0x26282cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x262830: 0x2452e860
    ctx->pc = 0x262830u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294961248));
    // 0x262834: 0x3c020034
    ctx->pc = 0x262834u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x262838: 0x2455e8a8
    ctx->pc = 0x262838u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294961320));
    // 0x26283c: 0x2a220006
    ctx->pc = 0x26283cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 6));
label_262840:
    // 0x262840: 0x10400005
    ctx->pc = 0x262840u;
    {
        const bool branch_taken_0x262840 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x262844u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4294961096)));
        if (branch_taken_0x262840) {
            ctx->pc = 0x262858u;
            goto label_262858;
        }
    }
    ctx->pc = 0x262848u;
    // 0x262848: 0x111840
    ctx->pc = 0x262848u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 1));
    // 0x26284c: 0x431021
    ctx->pc = 0x26284cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x262850: 0x10000002
    ctx->pc = 0x262850u;
    {
        const bool branch_taken_0x262850 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x262854u;
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 76)));
        if (branch_taken_0x262850) {
            ctx->pc = 0x26285Cu;
            goto label_26285c;
        }
    }
    ctx->pc = 0x262858u;
label_262858:
    // 0x262858: 0x2410ffff
    ctx->pc = 0x262858u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 4294967295));
label_26285c:
    // 0x26285c: 0x6000017
    ctx->pc = 0x26285Cu;
    {
        const bool branch_taken_0x26285c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x262860u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x26285c) {
            ctx->pc = 0x2628BCu;
            goto label_2628bc;
        }
    }
    ctx->pc = 0x262864u;
    // 0x262864: 0x732021
    ctx->pc = 0x262864u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x262868: 0x2171018
    ctx->pc = 0x262868u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x26286c: 0x542821
    ctx->pc = 0x26286cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x262870: 0x8ca20000
    ctx->pc = 0x262870u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x262874: 0xac820000
    ctx->pc = 0x262874u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x262878: 0x721821
    ctx->pc = 0x262878u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x26287c: 0x8ca20004
    ctx->pc = 0x26287cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x262880: 0xac620000
    ctx->pc = 0x262880u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x262884: 0x8ca30004
    ctx->pc = 0x262884u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x262888: 0x24020009
    ctx->pc = 0x262888u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x26288c: 0x10620005
    ctx->pc = 0x26288Cu;
    {
        const bool branch_taken_0x26288c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x262890u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x26288c) {
            ctx->pc = 0x2628A4u;
            goto label_2628a4;
        }
    }
    ctx->pc = 0x262894u;
    // 0x262894: 0x10620003
    ctx->pc = 0x262894u;
    {
        const bool branch_taken_0x262894 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x262898u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x262894) {
            ctx->pc = 0x2628A4u;
            goto label_2628a4;
        }
    }
    ctx->pc = 0x26289Cu;
    // 0x26289c: 0xc097c66
    ctx->pc = 0x26289Cu;
    SET_GPR_U32(ctx, 31, 0x2628A4u);
    ctx->pc = 0x2628A0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
    ctx->pc = 0x25F198u;
    {
        const uint32_t __entryPc = ctx->pc;
        SetEnemyAudio_0x25f198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2628A4u; }
    }
    if (ctx->pc != 0x2628A4u) { return; }
    ctx->pc = 0x2628A4u;
label_2628a4:
    // 0x2628a4: 0x111080
    ctx->pc = 0x2628a4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x2628a8: 0x551021
    ctx->pc = 0x2628a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2628ac: 0x2172018
    ctx->pc = 0x2628acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2628b0: 0x941821
    ctx->pc = 0x2628b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2628b4: 0x10000018
    ctx->pc = 0x2628B4u;
    {
        const bool branch_taken_0x2628b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2628B8u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x2628b4) {
            ctx->pc = 0x262918u;
            goto label_262918;
        }
    }
    ctx->pc = 0x2628BCu;
label_2628bc:
    // 0x2628bc: 0x8fc2e7c8
    ctx->pc = 0x2628bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4294961096)));
    // 0x2628c0: 0x8c420044
    ctx->pc = 0x2628c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2628c4: 0x441000e
    ctx->pc = 0x2628C4u;
    {
        const bool branch_taken_0x2628c4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2628C8u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        if (branch_taken_0x2628c4) {
            ctx->pc = 0x262900u;
            goto label_262900;
        }
    }
    ctx->pc = 0x2628CCu;
    // 0x2628cc: 0x3c020034
    ctx->pc = 0x2628ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2628d0: 0x8c42e7c0
    ctx->pc = 0x2628d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961088)));
    // 0x2628d4: 0x8c430000
    ctx->pc = 0x2628d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2628d8: 0x2402000d
    ctx->pc = 0x2628d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
    // 0x2628dc: 0x10620007
    ctx->pc = 0x2628DCu;
    {
        const bool branch_taken_0x2628dc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2628E0u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x2628dc) {
            ctx->pc = 0x2628FCu;
            goto label_2628fc;
        }
    }
    ctx->pc = 0x2628E4u;
    // 0x2628e4: 0x16c00006
    ctx->pc = 0x2628E4u;
    {
        const bool branch_taken_0x2628e4 = (GPR_U32(ctx, 22) != GPR_U32(ctx, 0));
        ctx->pc = 0x2628E8u;
        SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
        if (branch_taken_0x2628e4) {
            ctx->pc = 0x262900u;
            goto label_262900;
        }
    }
    ctx->pc = 0x2628ECu;
    // 0x2628ec: 0x111880
    ctx->pc = 0x2628ecu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x2628f0: 0x732021
    ctx->pc = 0x2628f0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2628f4: 0x10000003
    ctx->pc = 0x2628F4u;
    {
        const bool branch_taken_0x2628f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2628F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
        if (branch_taken_0x2628f4) {
            ctx->pc = 0x262904u;
            goto label_262904;
        }
    }
    ctx->pc = 0x2628FCu;
label_2628fc:
    // 0x2628fc: 0x732021
    ctx->pc = 0x2628fcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_262900:
    // 0x262900: 0x2402ffff
    ctx->pc = 0x262900u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_262904:
    // 0x262904: 0xac820000
    ctx->pc = 0x262904u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x262908: 0x721021
    ctx->pc = 0x262908u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x26290c: 0xac400000
    ctx->pc = 0x26290cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x262910: 0x751821
    ctx->pc = 0x262910u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x262914: 0xac600000
    ctx->pc = 0x262914u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_262918:
    // 0x262918: 0x112880
    ctx->pc = 0x262918u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 17), 2));
    // 0x26291c: 0xb31021
    ctx->pc = 0x26291cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x262920: 0x8c440000
    ctx->pc = 0x262920u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x262924: 0x24030001
    ctx->pc = 0x262924u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x262928: 0x3882001e
    ctx->pc = 0x262928u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 4), 30));
    // 0x26292c: 0x4800012
    ctx->pc = 0x26292Cu;
    {
        const bool branch_taken_0x26292c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x262930u;
        if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 22, GPR_U32(ctx, 3));
        if (branch_taken_0x26292c) {
            ctx->pc = 0x262978u;
            goto label_262978;
        }
    }
    ctx->pc = 0x262934u;
    // 0x262934: 0xb28021
    ctx->pc = 0x262934u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x262938: 0x8e020000
    ctx->pc = 0x262938u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26293c: 0x14400005
    ctx->pc = 0x26293Cu;
    {
        const bool branch_taken_0x26293c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x262940u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x26293c) {
            ctx->pc = 0x262954u;
            goto label_262954;
        }
    }
    ctx->pc = 0x262944u;
    // 0x262944: 0xc0989da
    ctx->pc = 0x262944u;
    SET_GPR_U32(ctx, 31, 0x26294Cu);
    ctx->pc = 0x262768u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetEnemySubtype_0x262768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26294Cu; }
    }
    if (ctx->pc != 0x26294Cu) { return; }
    ctx->pc = 0x26294Cu;
    // 0x26294c: 0xae020000
    ctx->pc = 0x26294cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x262950: 0x111880
    ctx->pc = 0x262950u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
label_262954:
    // 0x262954: 0x721021
    ctx->pc = 0x262954u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x262958: 0x8c460000
    ctx->pc = 0x262958u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26295c: 0x5cc00007
    ctx->pc = 0x26295Cu;
    {
        const bool branch_taken_0x26295c = (GPR_S32(ctx, 6) > 0);
        if (branch_taken_0x26295c) {
            ctx->pc = 0x262960u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x26297Cu;
            goto label_26297c;
        }
    }
    ctx->pc = 0x262964u;
    // 0x262964: 0x731021
    ctx->pc = 0x262964u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x262968: 0x3c04003b
    ctx->pc = 0x262968u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x26296c: 0x24849928
    ctx->pc = 0x26296cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294940968));
    // 0x262970: 0xc0b492e
    ctx->pc = 0x262970u;
    SET_GPR_U32(ctx, 31, 0x262978u);
    ctx->pc = 0x262974u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262978u; }
    }
    if (ctx->pc != 0x262978u) { return; }
    ctx->pc = 0x262978u;
label_262978:
    // 0x262978: 0x26310001
    ctx->pc = 0x262978u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_26297c:
    // 0x26297c: 0x2a220008
    ctx->pc = 0x26297cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 8));
    // 0x262980: 0x1440ffaf
    ctx->pc = 0x262980u;
    {
        const bool branch_taken_0x262980 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x262984u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 6));
        if (branch_taken_0x262980) {
            ctx->pc = 0x262840u;
            goto label_262840;
        }
    }
    ctx->pc = 0x262988u;
    // 0x262988: 0x882d
    ctx->pc = 0x262988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26298c: 0x3c020034
    ctx->pc = 0x26298cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x262990: 0x2444e840
    ctx->pc = 0x262990u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294961216));
    // 0x262994: 0x2403ffff
    ctx->pc = 0x262994u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_262998:
    // 0x262998: 0x111080
    ctx->pc = 0x262998u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x26299c: 0x441021
    ctx->pc = 0x26299cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2629a0: 0xac430000
    ctx->pc = 0x2629a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2629a4: 0x26310001
    ctx->pc = 0x2629a4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x2629a8: 0x2a220008
    ctx->pc = 0x2629a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 8));
    // 0x2629ac: 0x1440fffa
    ctx->pc = 0x2629ACu;
    {
        const bool branch_taken_0x2629ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2629ac) {
            ctx->pc = 0x262998u;
            goto label_262998;
        }
    }
    ctx->pc = 0x2629B4u;
    // 0x2629b4: 0x882d
    ctx->pc = 0x2629b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2629b8: 0x3c020034
    ctx->pc = 0x2629b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2629bc: 0x2447e860
    ctx->pc = 0x2629bcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294961248));
    // 0x2629c0: 0x3c020034
    ctx->pc = 0x2629c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2629c4: 0x2446e840
    ctx->pc = 0x2629c4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 4294961216));
    // 0x2629c8: 0x3c020034
    ctx->pc = 0x2629c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2629cc: 0x2445e820
    ctx->pc = 0x2629ccu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294961184));
    // 0x2629d0: 0x111880
    ctx->pc = 0x2629d0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
    // 0x2629d4: 0x0
    ctx->pc = 0x2629d4u;
    // NOP
label_2629d8:
    // 0x2629d8: 0x671021
    ctx->pc = 0x2629d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2629dc: 0x8c440000
    ctx->pc = 0x2629dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2629e0: 0x28820006
    ctx->pc = 0x2629e0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 6));
    // 0x2629e4: 0x10400005
    ctx->pc = 0x2629E4u;
    {
        const bool branch_taken_0x2629e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2629E8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x2629e4) {
            ctx->pc = 0x2629FCu;
            goto label_2629fc;
        }
    }
    ctx->pc = 0x2629ECu;
    // 0x2629ec: 0x461021
    ctx->pc = 0x2629ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2629f0: 0x651821
    ctx->pc = 0x2629f0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2629f4: 0x8c630000
    ctx->pc = 0x2629f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2629f8: 0xac430000
    ctx->pc = 0x2629f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2629fc:
    // 0x2629fc: 0x26310001
    ctx->pc = 0x2629fcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x262a00: 0x2a220008
    ctx->pc = 0x262a00u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 8));
    // 0x262a04: 0x5440fff4
    ctx->pc = 0x262A04u;
    {
        const bool branch_taken_0x262a04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x262a04) {
            ctx->pc = 0x262A08u;
            SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 2));
            ctx->pc = 0x2629D8u;
            goto label_2629d8;
        }
    }
    ctx->pc = 0x262A0Cu;
    // 0x262a0c: 0x3c020031
    ctx->pc = 0x262a0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x262a10: 0x8c42fff0
    ctx->pc = 0x262a10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967280)));
    // 0x262a14: 0x28420002
    ctx->pc = 0x262a14u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x262a18: 0x1040001c
    ctx->pc = 0x262A18u;
    {
        const bool branch_taken_0x262a18 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x262A1Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x262a18) {
            ctx->pc = 0x262A8Cu;
            goto label_262a8c;
        }
    }
    ctx->pc = 0x262A20u;
    // 0x262a20: 0x3c020034
    ctx->pc = 0x262a20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x262a24: 0x2448e860
    ctx->pc = 0x262a24u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294961248));
    // 0x262a28: 0x24070002
    ctx->pc = 0x262a28u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    // 0x262a2c: 0x24060004
    ctx->pc = 0x262a2cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
    // 0x262a30: 0x3c020034
    ctx->pc = 0x262a30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x262a34: 0x2445e820
    ctx->pc = 0x262a34u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294961184));
    // 0x262a38: 0x2404ffff
    ctx->pc = 0x262a38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x262a3c: 0x111080
    ctx->pc = 0x262a3cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
label_262a40:
    // 0x262a40: 0x481821
    ctx->pc = 0x262a40u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x262a44: 0x8c620000
    ctx->pc = 0x262a44u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x262a48: 0x14470003
    ctx->pc = 0x262A48u;
    {
        const bool branch_taken_0x262a48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 7));
        ctx->pc = 0x262A4Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x262a48) {
            ctx->pc = 0x262A58u;
            goto label_262a58;
        }
    }
    ctx->pc = 0x262A50u;
    // 0x262a50: 0x1000000a
    ctx->pc = 0x262A50u;
    {
        const bool branch_taken_0x262a50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x262A54u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        if (branch_taken_0x262a50) {
            ctx->pc = 0x262A7Cu;
            goto label_262a7c;
        }
    }
    ctx->pc = 0x262A58u;
label_262a58:
    // 0x262a58: 0x451821
    ctx->pc = 0x262a58u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x262a5c: 0x8c620000
    ctx->pc = 0x262a5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x262a60: 0x2c42001c
    ctx->pc = 0x262a60u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 28));
    // 0x262a64: 0x10400003
    ctx->pc = 0x262A64u;
    {
        const bool branch_taken_0x262a64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x262A68u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x262a64) {
            ctx->pc = 0x262A74u;
            goto label_262a74;
        }
    }
    ctx->pc = 0x262A6Cu;
    // 0x262a6c: 0x10000003
    ctx->pc = 0x262A6Cu;
    {
        const bool branch_taken_0x262a6c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x262A70u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        if (branch_taken_0x262a6c) {
            ctx->pc = 0x262A7Cu;
            goto label_262a7c;
        }
    }
    ctx->pc = 0x262A74u;
label_262a74:
    // 0x262a74: 0x451021
    ctx->pc = 0x262a74u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x262a78: 0xac440000
    ctx->pc = 0x262a78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_262a7c:
    // 0x262a7c: 0x26310001
    ctx->pc = 0x262a7cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x262a80: 0x2a220008
    ctx->pc = 0x262a80u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 8));
    // 0x262a84: 0x1440ffee
    ctx->pc = 0x262A84u;
    {
        const bool branch_taken_0x262a84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x262A88u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x262a84) {
            ctx->pc = 0x262A40u;
            goto label_262a40;
        }
    }
    ctx->pc = 0x262A8Cu;
label_262a8c:
    // 0x262a8c: 0xdfbf0090
    ctx->pc = 0x262a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x262a90: 0xdfbe0080
    ctx->pc = 0x262a90u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x262a94: 0xdfb70070
    ctx->pc = 0x262a94u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x262a98: 0xdfb60060
    ctx->pc = 0x262a98u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x262a9c: 0xdfb50050
    ctx->pc = 0x262a9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x262aa0: 0xdfb40040
    ctx->pc = 0x262aa0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x262aa4: 0xdfb30030
    ctx->pc = 0x262aa4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x262aa8: 0xdfb20020
    ctx->pc = 0x262aa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262aac: 0xdfb10010
    ctx->pc = 0x262aacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262ab0: 0xdfb00000
    ctx->pc = 0x262ab0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262ab4: 0x3e00008
    ctx->pc = 0x262AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262AB8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x262840u: goto label_262840;
            case 0x262858u: goto label_262858;
            case 0x26285Cu: goto label_26285c;
            case 0x2628A4u: goto label_2628a4;
            case 0x2628BCu: goto label_2628bc;
            case 0x2628FCu: goto label_2628fc;
            case 0x262900u: goto label_262900;
            case 0x262904u: goto label_262904;
            case 0x262918u: goto label_262918;
            case 0x262954u: goto label_262954;
            case 0x262978u: goto label_262978;
            case 0x26297Cu: goto label_26297c;
            case 0x262998u: goto label_262998;
            case 0x2629D8u: goto label_2629d8;
            case 0x2629FCu: goto label_2629fc;
            case 0x262A40u: goto label_262a40;
            case 0x262A58u: goto label_262a58;
            case 0x262A74u: goto label_262a74;
            case 0x262A7Cu: goto label_262a7c;
            case 0x262A8Cu: goto label_262a8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x262ABCu;
}
