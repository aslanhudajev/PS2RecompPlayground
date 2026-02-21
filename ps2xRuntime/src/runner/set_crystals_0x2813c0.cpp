#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: set_crystals
// Address: 0x2813c0 - 0x28156c
void set_crystals_0x2813c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2813c0u;

    // 0x2813c0: 0x27bdff70
    ctx->pc = 0x2813c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2813c4: 0xffbf0080
    ctx->pc = 0x2813c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2813c8: 0xffb60070
    ctx->pc = 0x2813c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2813cc: 0xffb50060
    ctx->pc = 0x2813ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2813d0: 0xffb40050
    ctx->pc = 0x2813d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2813d4: 0xffb30040
    ctx->pc = 0x2813d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2813d8: 0xffb20030
    ctx->pc = 0x2813d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2813dc: 0xffb10020
    ctx->pc = 0x2813dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2813e0: 0xffb00010
    ctx->pc = 0x2813e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2813e4: 0x80902d
    ctx->pc = 0x2813e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2813e8: 0xa0802d
    ctx->pc = 0x2813e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2813ec: 0xc0a02c4
    ctx->pc = 0x2813ECu;
    SET_GPR_U32(ctx, 31, 0x2813F4u);
    ctx->pc = 0x2813F0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x280B10u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_int_0x280b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2813F4u; }
    }
    if (ctx->pc != 0x2813F4u) { return; }
    ctx->pc = 0x2813F4u;
    // 0x2813f4: 0x16000054
    ctx->pc = 0x2813F4u;
    {
        const bool branch_taken_0x2813f4 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x2813F8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        if (branch_taken_0x2813f4) {
            ctx->pc = 0x281548u;
            goto label_281548;
        }
    }
    ctx->pc = 0x2813FCu;
    // 0x2813fc: 0x12200052
    ctx->pc = 0x2813FCu;
    {
        const bool branch_taken_0x2813fc = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x281400u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2813fc) {
            ctx->pc = 0x281548u;
            goto label_281548;
        }
    }
    ctx->pc = 0x281404u;
    // 0x281404: 0x3c020032
    ctx->pc = 0x281404u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x281408: 0x24561bc0
    ctx->pc = 0x281408u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x28140c: 0x3c020031
    ctx->pc = 0x28140cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x281410: 0x24531b50
    ctx->pc = 0x281410u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 6992));
    // 0x281414: 0x241100b4
    ctx->pc = 0x281414u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 180));
    // 0x281418: 0x3c020034
    ctx->pc = 0x281418u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x28141c: 0x2455fa90
    ctx->pc = 0x28141cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 4294965904));
    // 0x281420: 0x3c020032
    ctx->pc = 0x281420u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x281424: 0x245415d8
    ctx->pc = 0x281424u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 5592));
    // 0x281428: 0x24022b00
    ctx->pc = 0x281428u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x28142c: 0x0
    ctx->pc = 0x28142cu;
    // NOP
label_281430:
    // 0x281430: 0x2021818
    ctx->pc = 0x281430u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x281434: 0x762021
    ctx->pc = 0x281434u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x281438: 0x8c8300fc
    ctx->pc = 0x281438u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 252)));
    // 0x28143c: 0x24020001
    ctx->pc = 0x28143cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x281440: 0x5462003d
    ctx->pc = 0x281440u;
    {
        const bool branch_taken_0x281440 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x281440) {
            ctx->pc = 0x281444u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x281538u;
            goto label_281538;
        }
    }
    ctx->pc = 0x281448u;
    // 0x281448: 0x101080
    ctx->pc = 0x281448u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x28144c: 0x531021
    ctx->pc = 0x28144cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x281450: 0x8c420000
    ctx->pc = 0x281450u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x281454: 0x3c030c00
    ctx->pc = 0x281454u;
    SET_GPR_U32(ctx, 3, ((uint32_t)3072 << 16));
    // 0x281458: 0x431024
    ctx->pc = 0x281458u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28145c: 0x10400003
    ctx->pc = 0x28145Cu;
    {
        const bool branch_taken_0x28145c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x281460u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x28145c) {
            ctx->pc = 0x28146Cu;
            goto label_28146c;
        }
    }
    ctx->pc = 0x281464u;
    // 0x281464: 0x10000008
    ctx->pc = 0x281464u;
    {
        const bool branch_taken_0x281464 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x281468u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x281464) {
            ctx->pc = 0x281488u;
            goto label_281488;
        }
    }
    ctx->pc = 0x28146Cu;
label_28146c:
    // 0x28146c: 0x101080
    ctx->pc = 0x28146cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x281470: 0x531021
    ctx->pc = 0x281470u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x281474: 0x8c430000
    ctx->pc = 0x281474u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x281478: 0x3c020300
    ctx->pc = 0x281478u;
    SET_GPR_U32(ctx, 2, ((uint32_t)768 << 16));
    // 0x28147c: 0x621824
    ctx->pc = 0x28147cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x281480: 0x2402ffff
    ctx->pc = 0x281480u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x281484: 0x43380b
    ctx->pc = 0x281484u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 2));
label_281488:
    // 0x281488: 0x8e420000
    ctx->pc = 0x281488u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28148c: 0x24450001
    ctx->pc = 0x28148cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 1));
    // 0x281490: 0x51840
    ctx->pc = 0x281490u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x281494: 0x8c82000c
    ctx->pc = 0x281494u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x281498: 0x511018
    ctx->pc = 0x281498u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x28149c: 0x621821
    ctx->pc = 0x28149cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2814a0: 0x831821
    ctx->pc = 0x2814a0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2814a4: 0x10e00015
    ctx->pc = 0x2814A4u;
    {
        const bool branch_taken_0x2814a4 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x2814A8u;
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 3338)));
        if (branch_taken_0x2814a4) {
            ctx->pc = 0x2814FCu;
            goto label_2814fc;
        }
    }
    ctx->pc = 0x2814ACu;
    // 0x2814ac: 0xc73021
    ctx->pc = 0x2814acu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2814b0: 0x28c2ffff
    ctx->pc = 0x2814b0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 4294967295));
    // 0x2814b4: 0x54400006
    ctx->pc = 0x2814B4u;
    {
        const bool branch_taken_0x2814b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2814b4) {
            ctx->pc = 0x2814B8u;
            SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->pc = 0x2814D0u;
            goto label_2814d0;
        }
    }
    ctx->pc = 0x2814BCu;
    // 0x2814bc: 0x51080
    ctx->pc = 0x2814bcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x2814c0: 0x551021
    ctx->pc = 0x2814c0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x2814c4: 0x8c430000
    ctx->pc = 0x2814c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2814c8: 0x66102a
    ctx->pc = 0x2814c8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 6)));
    // 0x2814cc: 0x62300b
    ctx->pc = 0x2814ccu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
label_2814d0:
    // 0x2814d0: 0x51840
    ctx->pc = 0x2814d0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 1));
    // 0x2814d4: 0x8c82000c
    ctx->pc = 0x2814d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2814d8: 0x511018
    ctx->pc = 0x2814d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2814dc: 0x621021
    ctx->pc = 0x2814dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2814e0: 0x821021
    ctx->pc = 0x2814e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2814e4: 0xa4460d0a
    ctx->pc = 0x2814e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 3338), (uint16_t)GPR_U32(ctx, 6));
    // 0x2814e8: 0x8c82000c
    ctx->pc = 0x2814e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2814ec: 0x512818
    ctx->pc = 0x2814ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2814f0: 0xa31021
    ctx->pc = 0x2814f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2814f4: 0x821021
    ctx->pc = 0x2814f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2814f8: 0xa4461d96
    ctx->pc = 0x2814f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 7574), (uint16_t)GPR_U32(ctx, 6));
label_2814fc:
    // 0x2814fc: 0x3c05003b
    ctx->pc = 0x2814fcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x281500: 0x3a0202d
    ctx->pc = 0x281500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281504: 0xc0b6252
    ctx->pc = 0x281504u;
    SET_GPR_U32(ctx, 31, 0x28150Cu);
    ctx->pc = 0x281508u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294950792));
    ctx->pc = 0x2D8948u;
    {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x2d8948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28150Cu; }
    }
    if (ctx->pc != 0x28150Cu) { return; }
    ctx->pc = 0x28150Cu;
    // 0x28150c: 0x101040
    ctx->pc = 0x28150cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 1));
    // 0x281510: 0x541021
    ctx->pc = 0x281510u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x281514: 0x94440000
    ctx->pc = 0x281514u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x281518: 0x42023
    ctx->pc = 0x281518u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x28151c: 0x24050152
    ctx->pc = 0x28151cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 338));
    // 0x281520: 0x24060001
    ctx->pc = 0x281520u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x281524: 0x3c0700ff
    ctx->pc = 0x281524u;
    SET_GPR_U32(ctx, 7, ((uint32_t)255 << 16));
    // 0x281528: 0x34e7ffff
    ctx->pc = 0x281528u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), 65535));
    // 0x28152c: 0xc0804c8
    ctx->pc = 0x28152Cu;
    SET_GPR_U32(ctx, 31, 0x281534u);
    ctx->pc = 0x281530u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x201320u;
    {
        const uint32_t __entryPc = ctx->pc;
        DrawText_0x201320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281534u; }
    }
    if (ctx->pc != 0x281534u) { return; }
    ctx->pc = 0x281534u;
    // 0x281534: 0x26100001
    ctx->pc = 0x281534u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_281538:
    // 0x281538: 0x2a020004
    ctx->pc = 0x281538u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 4));
    // 0x28153c: 0x1440ffbc
    ctx->pc = 0x28153Cu;
    {
        const bool branch_taken_0x28153c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x281540u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
        if (branch_taken_0x28153c) {
            ctx->pc = 0x281430u;
            goto label_281430;
        }
    }
    ctx->pc = 0x281544u;
    // 0x281544: 0xdfbf0080
    ctx->pc = 0x281544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_281548:
    // 0x281548: 0xdfb60070
    ctx->pc = 0x281548u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28154c: 0xdfb50060
    ctx->pc = 0x28154cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x281550: 0xdfb40050
    ctx->pc = 0x281550u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x281554: 0xdfb30040
    ctx->pc = 0x281554u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x281558: 0xdfb20030
    ctx->pc = 0x281558u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28155c: 0xdfb10020
    ctx->pc = 0x28155cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281560: 0xdfb00010
    ctx->pc = 0x281560u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281564: 0x3e00008
    ctx->pc = 0x281564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281568u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x281430u: goto label_281430;
            case 0x28146Cu: goto label_28146c;
            case 0x281488u: goto label_281488;
            case 0x2814D0u: goto label_2814d0;
            case 0x2814FCu: goto label_2814fc;
            case 0x281538u: goto label_281538;
            case 0x281548u: goto label_281548;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28156Cu;
}
