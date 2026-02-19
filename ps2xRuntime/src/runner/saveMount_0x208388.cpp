#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: saveMount
// Address: 0x208388 - 0x2088e4
void saveMount_0x208388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x208388u;

label_208388:
    // 0x208388: 0x27bdffb0
    ctx->pc = 0x208388u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_20838c:
    // 0x20838c: 0xffbf0040
    ctx->pc = 0x20838cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_208390:
    // 0x208390: 0xffbe0030
    ctx->pc = 0x208390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
label_208394:
    // 0x208394: 0xffb00020
    ctx->pc = 0x208394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_208398:
    // 0x208398: 0x3a0f02d
    ctx->pc = 0x208398u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20839c:
    // 0x20839c: 0xafc40000
    ctx->pc = 0x20839cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_2083a0:
    // 0x2083a0: 0xafc50004
    ctx->pc = 0x2083a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_2083a4:
    // 0x2083a4: 0xafc60008
    ctx->pc = 0x2083a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
label_2083a8:
    // 0x2083a8: 0x27c20004
    ctx->pc = 0x2083a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 4));
label_2083ac:
    // 0x2083ac: 0x3c0202d
    ctx->pc = 0x2083acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2083b0:
    // 0x2083b0: 0x40282d
    ctx->pc = 0x2083b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2083b4:
    // 0x2083b4: 0xc081e72
label_2083b8:
    if (ctx->pc == 0x2083B8u) {
        ctx->pc = 0x2083BCu;
        goto label_2083bc;
    }
    ctx->pc = 0x2083B4u;
    SET_GPR_U32(ctx, 31, 0x2083BCu);
    ctx->pc = 0x2079C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        translatePortAndSlot_0x2079c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2083BCu; }
    }
    if (ctx->pc != 0x2083BCu) { return; }
    ctx->pc = 0x2083BCu;
label_2083bc:
    // 0x2083bc: 0x14400004
label_2083c0:
    if (ctx->pc == 0x2083C0u) {
        ctx->pc = 0x2083C4u;
        goto label_2083c4;
    }
    ctx->pc = 0x2083BCu;
    {
        const bool branch_taken_0x2083bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2083bc) {
            ctx->pc = 0x2083D0u;
            goto label_2083d0;
        }
    }
    ctx->pc = 0x2083C4u;
label_2083c4:
    // 0x2083c4: 0x102d
    ctx->pc = 0x2083c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2083c8:
    // 0x2083c8: 0x1000013f
label_2083cc:
    if (ctx->pc == 0x2083CCu) {
        ctx->pc = 0x2083D0u;
        goto label_2083d0;
    }
    ctx->pc = 0x2083C8u;
    {
        const bool branch_taken_0x2083c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2083c8) {
            ctx->pc = 0x2088C8u;
            goto label_2088c8;
        }
    }
    ctx->pc = 0x2083D0u;
label_2083d0:
    // 0x2083d0: 0xc081e52
label_2083d4:
    if (ctx->pc == 0x2083D4u) {
        ctx->pc = 0x2083D8u;
        goto label_2083d8;
    }
    ctx->pc = 0x2083D0u;
    SET_GPR_U32(ctx, 31, 0x2083D8u);
    ctx->pc = 0x207948u;
    {
        const uint32_t __entryPc = ctx->pc;
        backpollWait_0x207948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2083D8u; }
    }
    if (ctx->pc != 0x2083D8u) { return; }
    ctx->pc = 0x2083D8u;
label_2083d8:
    // 0x2083d8: 0x27c3000c
    ctx->pc = 0x2083d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 12));
label_2083dc:
    // 0x2083dc: 0x27c20010
    ctx->pc = 0x2083dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 16));
label_2083e0:
    // 0x2083e0: 0x8fc40000
    ctx->pc = 0x2083e0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2083e4:
    // 0x2083e4: 0x8fc50004
    ctx->pc = 0x2083e4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_2083e8:
    // 0x2083e8: 0x60302d
    ctx->pc = 0x2083e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2083ec:
    // 0x2083ec: 0x382d
    ctx->pc = 0x2083ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2083f0:
    // 0x2083f0: 0x40402d
    ctx->pc = 0x2083f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2083f4:
    // 0x2083f4: 0xc0b9a64
label_2083f8:
    if (ctx->pc == 0x2083F8u) {
        ctx->pc = 0x2083FCu;
        goto label_2083fc;
    }
    ctx->pc = 0x2083F4u;
    SET_GPR_U32(ctx, 31, 0x2083FCu);
    ctx->pc = 0x2E6990u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcGetInfo_0x2e6990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2083FCu; }
    }
    if (ctx->pc != 0x2083FCu) { return; }
    ctx->pc = 0x2083FCu;
label_2083fc:
    // 0x2083fc: 0x10400005
label_208400:
    if (ctx->pc == 0x208400u) {
        ctx->pc = 0x208404u;
        goto label_208404;
    }
    ctx->pc = 0x2083FCu;
    {
        const bool branch_taken_0x2083fc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2083fc) {
            ctx->pc = 0x208414u;
            goto label_208414;
        }
    }
    ctx->pc = 0x208404u;
label_208404:
    // 0x208404: 0x3c04003a
    ctx->pc = 0x208404u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_208408:
    // 0x208408: 0x24844dd8
    ctx->pc = 0x208408u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19928));
label_20840c:
    // 0x20840c: 0xc0b4a34
label_208410:
    if (ctx->pc == 0x208410u) {
        ctx->pc = 0x208414u;
        goto label_208414;
    }
    ctx->pc = 0x20840Cu;
    SET_GPR_U32(ctx, 31, 0x208414u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208414u; }
    }
    if (ctx->pc != 0x208414u) { return; }
    ctx->pc = 0x208414u;
label_208414:
    // 0x208414: 0x0
    ctx->pc = 0x208414u;
    // NOP
label_208418:
    // 0x208418: 0x27c20014
    ctx->pc = 0x208418u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 20));
label_20841c:
    // 0x20841c: 0x27c30018
    ctx->pc = 0x20841cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 24));
label_208420:
    // 0x208420: 0x24040001
    ctx->pc = 0x208420u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_208424:
    // 0x208424: 0x40282d
    ctx->pc = 0x208424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_208428:
    // 0x208428: 0x60302d
    ctx->pc = 0x208428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_20842c:
    // 0x20842c: 0xc0b9a14
label_208430:
    if (ctx->pc == 0x208430u) {
        ctx->pc = 0x208434u;
        goto label_208434;
    }
    ctx->pc = 0x20842Cu;
    SET_GPR_U32(ctx, 31, 0x208434u);
    ctx->pc = 0x2E6850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x2e6850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x208434u; }
    }
    if (ctx->pc != 0x208434u) { return; }
    ctx->pc = 0x208434u;
label_208434:
    // 0x208434: 0x10400003
label_208438:
    if (ctx->pc == 0x208438u) {
        ctx->pc = 0x20843Cu;
        goto label_20843c;
    }
    ctx->pc = 0x208434u;
    {
        const bool branch_taken_0x208434 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x208434) {
            ctx->pc = 0x208444u;
            goto label_208444;
        }
    }
    ctx->pc = 0x20843Cu;
label_20843c:
    // 0x20843c: 0x1000000b
label_208440:
    if (ctx->pc == 0x208440u) {
        ctx->pc = 0x208444u;
        goto label_208444;
    }
    ctx->pc = 0x20843Cu;
    {
        const bool branch_taken_0x20843c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20843c) {
            ctx->pc = 0x20846Cu;
            goto label_20846c;
        }
    }
    ctx->pc = 0x208444u;
label_208444:
    // 0x208444: 0x3c02003c
    ctx->pc = 0x208444u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_208448:
    // 0x208448: 0x8c42c4e4
    ctx->pc = 0x208448u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952164)));
label_20844c:
    // 0x20844c: 0x10400005
label_208450:
    if (ctx->pc == 0x208450u) {
        ctx->pc = 0x208454u;
        goto label_208454;
    }
    ctx->pc = 0x20844Cu;
    {
        const bool branch_taken_0x20844c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20844c) {
            ctx->pc = 0x208464u;
            goto label_208464;
        }
    }
    ctx->pc = 0x208454u;
label_208454:
    // 0x208454: 0x3c10003c
    ctx->pc = 0x208454u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_208458:
    // 0x208458: 0x8e10c4e4
    ctx->pc = 0x208458u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 4294952164)));
label_20845c:
    // 0x20845c: 0x200f809
label_208460:
    if (ctx->pc == 0x208460u) {
        ctx->pc = 0x208464u;
        goto label_208464;
    }
    ctx->pc = 0x20845Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x208464u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x208388u: goto label_208388;
            case 0x20838Cu: goto label_20838c;
            case 0x208390u: goto label_208390;
            case 0x208394u: goto label_208394;
            case 0x208398u: goto label_208398;
            case 0x20839Cu: goto label_20839c;
            case 0x2083A0u: goto label_2083a0;
            case 0x2083A4u: goto label_2083a4;
            case 0x2083A8u: goto label_2083a8;
            case 0x2083ACu: goto label_2083ac;
            case 0x2083B0u: goto label_2083b0;
            case 0x2083B4u: goto label_2083b4;
            case 0x2083B8u: goto label_2083b8;
            case 0x2083BCu: goto label_2083bc;
            case 0x2083C0u: goto label_2083c0;
            case 0x2083C4u: goto label_2083c4;
            case 0x2083C8u: goto label_2083c8;
            case 0x2083CCu: goto label_2083cc;
            case 0x2083D0u: goto label_2083d0;
            case 0x2083D4u: goto label_2083d4;
            case 0x2083D8u: goto label_2083d8;
            case 0x2083DCu: goto label_2083dc;
            case 0x2083E0u: goto label_2083e0;
            case 0x2083E4u: goto label_2083e4;
            case 0x2083E8u: goto label_2083e8;
            case 0x2083ECu: goto label_2083ec;
            case 0x2083F0u: goto label_2083f0;
            case 0x2083F4u: goto label_2083f4;
            case 0x2083F8u: goto label_2083f8;
            case 0x2083FCu: goto label_2083fc;
            case 0x208400u: goto label_208400;
            case 0x208404u: goto label_208404;
            case 0x208408u: goto label_208408;
            case 0x20840Cu: goto label_20840c;
            case 0x208410u: goto label_208410;
            case 0x208414u: goto label_208414;
            case 0x208418u: goto label_208418;
            case 0x20841Cu: goto label_20841c;
            case 0x208420u: goto label_208420;
            case 0x208424u: goto label_208424;
            case 0x208428u: goto label_208428;
            case 0x20842Cu: goto label_20842c;
            case 0x208430u: goto label_208430;
            case 0x208434u: goto label_208434;
            case 0x208438u: goto label_208438;
            case 0x20843Cu: goto label_20843c;
            case 0x208440u: goto label_208440;
            case 0x208444u: goto label_208444;
            case 0x208448u: goto label_208448;
            case 0x20844Cu: goto label_20844c;
            case 0x208450u: goto label_208450;
            case 0x208454u: goto label_208454;
            case 0x208458u: goto label_208458;
            case 0x20845Cu: goto label_20845c;
            case 0x208460u: goto label_208460;
            case 0x208464u: goto label_208464;
            case 0x208468u: goto label_208468;
            case 0x20846Cu: goto label_20846c;
            case 0x208470u: goto label_208470;
            case 0x208474u: goto label_208474;
            case 0x208478u: goto label_208478;
            case 0x20847Cu: goto label_20847c;
            case 0x208480u: goto label_208480;
            case 0x208484u: goto label_208484;
            case 0x208488u: goto label_208488;
            case 0x20848Cu: goto label_20848c;
            case 0x208490u: goto label_208490;
            case 0x208494u: goto label_208494;
            case 0x208498u: goto label_208498;
            case 0x20849Cu: goto label_20849c;
            case 0x2084A0u: goto label_2084a0;
            case 0x2084A4u: goto label_2084a4;
            case 0x2084A8u: goto label_2084a8;
            case 0x2084ACu: goto label_2084ac;
            case 0x2084B0u: goto label_2084b0;
            case 0x2084B4u: goto label_2084b4;
            case 0x2084B8u: goto label_2084b8;
            case 0x2084BCu: goto label_2084bc;
            case 0x2084C0u: goto label_2084c0;
            case 0x2084C4u: goto label_2084c4;
            case 0x2084C8u: goto label_2084c8;
            case 0x2084CCu: goto label_2084cc;
            case 0x2084D0u: goto label_2084d0;
            case 0x2084D4u: goto label_2084d4;
            case 0x2084D8u: goto label_2084d8;
            case 0x2084DCu: goto label_2084dc;
            case 0x2084E0u: goto label_2084e0;
            case 0x2084E4u: goto label_2084e4;
            case 0x2084E8u: goto label_2084e8;
            case 0x2084ECu: goto label_2084ec;
            case 0x2084F0u: goto label_2084f0;
            case 0x2084F4u: goto label_2084f4;
            case 0x2084F8u: goto label_2084f8;
            case 0x2084FCu: goto label_2084fc;
            case 0x208500u: goto label_208500;
            case 0x208504u: goto label_208504;
            case 0x208508u: goto label_208508;
            case 0x20850Cu: goto label_20850c;
            case 0x208510u: goto label_208510;
            case 0x208514u: goto label_208514;
            case 0x208518u: goto label_208518;
            case 0x20851Cu: goto label_20851c;
            case 0x208520u: goto label_208520;
            case 0x208524u: goto label_208524;
            case 0x208528u: goto label_208528;
            case 0x20852Cu: goto label_20852c;
            case 0x208530u: goto label_208530;
            case 0x208534u: goto label_208534;
            case 0x208538u: goto label_208538;
            case 0x20853Cu: goto label_20853c;
            case 0x208540u: goto label_208540;
            case 0x208544u: goto label_208544;
            case 0x208548u: goto label_208548;
            case 0x20854Cu: goto label_20854c;
            case 0x208550u: goto label_208550;
            case 0x208554u: goto label_208554;
            case 0x208558u: goto label_208558;
            case 0x20855Cu: goto label_20855c;
            case 0x208560u: goto label_208560;
            case 0x208564u: goto label_208564;
            case 0x208568u: goto label_208568;
            case 0x20856Cu: goto label_20856c;
            case 0x208570u: goto label_208570;
            case 0x208574u: goto label_208574;
            case 0x208578u: goto label_208578;
            case 0x20857Cu: goto label_20857c;
            case 0x208580u: goto label_208580;
            case 0x208584u: goto label_208584;
            case 0x208588u: goto label_208588;
            case 0x20858Cu: goto label_20858c;
            case 0x208590u: goto label_208590;
            case 0x208594u: goto label_208594;
            case 0x208598u: goto label_208598;
            case 0x20859Cu: goto label_20859c;
            case 0x2085A0u: goto label_2085a0;
            case 0x2085A4u: goto label_2085a4;
            case 0x2085A8u: goto label_2085a8;
            case 0x2085ACu: goto label_2085ac;
            case 0x2085B0u: goto label_2085b0;
            case 0x2085B4u: goto label_2085b4;
            case 0x2085B8u: goto label_2085b8;
            case 0x2085BCu: goto label_2085bc;
            case 0x2085C0u: goto label_2085c0;
            case 0x2085C4u: goto label_2085c4;
            case 0x2085C8u: goto label_2085c8;
            case 0x2085CCu: goto label_2085cc;
            case 0x2085D0u: goto label_2085d0;
            case 0x2085D4u: goto label_2085d4;
            case 0x2085D8u: goto label_2085d8;
            case 0x2085DCu: goto label_2085dc;
            case 0x2085E0u: goto label_2085e0;
            case 0x2085E4u: goto label_2085e4;
            case 0x2085E8u: goto label_2085e8;
            case 0x2085ECu: goto label_2085ec;
            case 0x2085F0u: goto label_2085f0;
            case 0x2085F4u: goto label_2085f4;
            case 0x2085F8u: goto label_2085f8;
            case 0x2085FCu: goto label_2085fc;
            case 0x208600u: goto label_208600;
            case 0x208604u: goto label_208604;
            case 0x208608u: goto label_208608;
            case 0x20860Cu: goto label_20860c;
            case 0x208610u: goto label_208610;
            case 0x208614u: goto label_208614;
            case 0x208618u: goto label_208618;
            case 0x20861Cu: goto label_20861c;
            case 0x208620u: goto label_208620;
            case 0x208624u: goto label_208624;
            case 0x208628u: goto label_208628;
            case 0x20862Cu: goto label_20862c;
            case 0x208630u: goto label_208630;
            case 0x208634u: goto label_208634;
            case 0x208638u: goto label_208638;
            case 0x20863Cu: goto label_20863c;
            case 0x208640u: goto label_208640;
            case 0x208644u: goto label_208644;
            case 0x208648u: goto label_208648;
            case 0x20864Cu: goto label_20864c;
            case 0x208650u: goto label_208650;
            case 0x208654u: goto label_208654;
            case 0x208658u: goto label_208658;
            case 0x20865Cu: goto label_20865c;
            case 0x208660u: goto label_208660;
            case 0x208664u: goto label_208664;
            case 0x208668u: goto label_208668;
            case 0x20866Cu: goto label_20866c;
            case 0x208670u: goto label_208670;
            case 0x208674u: goto label_208674;
            case 0x208678u: goto label_208678;
            case 0x20867Cu: goto label_20867c;
            case 0x208680u: goto label_208680;
            case 0x208684u: goto label_208684;
            case 0x208688u: goto label_208688;
            case 0x20868Cu: goto label_20868c;
            case 0x208690u: goto label_208690;
            case 0x208694u: goto label_208694;
            case 0x208698u: goto label_208698;
            case 0x20869Cu: goto label_20869c;
            case 0x2086A0u: goto label_2086a0;
            case 0x2086A4u: goto label_2086a4;
            case 0x2086A8u: goto label_2086a8;
            case 0x2086ACu: goto label_2086ac;
            case 0x2086B0u: goto label_2086b0;
            case 0x2086B4u: goto label_2086b4;
            case 0x2086B8u: goto label_2086b8;
            case 0x2086BCu: goto label_2086bc;
            case 0x2086C0u: goto label_2086c0;
            case 0x2086C4u: goto label_2086c4;
            case 0x2086C8u: goto label_2086c8;
            case 0x2086CCu: goto label_2086cc;
            case 0x2086D0u: goto label_2086d0;
            case 0x2086D4u: goto label_2086d4;
            case 0x2086D8u: goto label_2086d8;
            case 0x2086DCu: goto label_2086dc;
            case 0x2086E0u: goto label_2086e0;
            case 0x2086E4u: goto label_2086e4;
            case 0x2086E8u: goto label_2086e8;
            case 0x2086ECu: goto label_2086ec;
            case 0x2086F0u: goto label_2086f0;
            case 0x2086F4u: goto label_2086f4;
            case 0x2086F8u: goto label_2086f8;
            case 0x2086FCu: goto label_2086fc;
            case 0x208700u: goto label_208700;
            case 0x208704u: goto label_208704;
            case 0x208708u: goto label_208708;
            case 0x20870Cu: goto label_20870c;
            case 0x208710u: goto label_208710;
            case 0x208714u: goto label_208714;
            case 0x208718u: goto label_208718;
            case 0x20871Cu: goto label_20871c;
            case 0x208720u: goto label_208720;
            case 0x208724u: goto label_208724;
            case 0x208728u: goto label_208728;
            case 0x20872Cu: goto label_20872c;
            case 0x208730u: goto label_208730;
            case 0x208734u: goto label_208734;
            case 0x208738u: goto label_208738;
            case 0x20873Cu: goto label_20873c;
            case 0x208740u: goto label_208740;
            case 0x208744u: goto label_208744;
            case 0x208748u: goto label_208748;
            case 0x20874Cu: goto label_20874c;
            case 0x208750u: goto label_208750;
            case 0x208754u: goto label_208754;
            case 0x208758u: goto label_208758;
            case 0x20875Cu: goto label_20875c;
            case 0x208760u: goto label_208760;
            case 0x208764u: goto label_208764;
            case 0x208768u: goto label_208768;
            case 0x20876Cu: goto label_20876c;
            case 0x208770u: goto label_208770;
            case 0x208774u: goto label_208774;
            case 0x208778u: goto label_208778;
            case 0x20877Cu: goto label_20877c;
            case 0x208780u: goto label_208780;
            case 0x208784u: goto label_208784;
            case 0x208788u: goto label_208788;
            case 0x20878Cu: goto label_20878c;
            case 0x208790u: goto label_208790;
            case 0x208794u: goto label_208794;
            case 0x208798u: goto label_208798;
            case 0x20879Cu: goto label_20879c;
            case 0x2087A0u: goto label_2087a0;
            case 0x2087A4u: goto label_2087a4;
            case 0x2087A8u: goto label_2087a8;
            case 0x2087ACu: goto label_2087ac;
            case 0x2087B0u: goto label_2087b0;
            case 0x2087B4u: goto label_2087b4;
            case 0x2087B8u: goto label_2087b8;
            case 0x2087BCu: goto label_2087bc;
            case 0x2087C0u: goto label_2087c0;
            case 0x2087C4u: goto label_2087c4;
            case 0x2087C8u: goto label_2087c8;
            case 0x2087CCu: goto label_2087cc;
            case 0x2087D0u: goto label_2087d0;
            case 0x2087D4u: goto label_2087d4;
            case 0x2087D8u: goto label_2087d8;
            case 0x2087DCu: goto label_2087dc;
            case 0x2087E0u: goto label_2087e0;
            case 0x2087E4u: goto label_2087e4;
            case 0x2087E8u: goto label_2087e8;
            case 0x2087ECu: goto label_2087ec;
            case 0x2087F0u: goto label_2087f0;
            case 0x2087F4u: goto label_2087f4;
            case 0x2087F8u: goto label_2087f8;
            case 0x2087FCu: goto label_2087fc;
            case 0x208800u: goto label_208800;
            case 0x208804u: goto label_208804;
            case 0x208808u: goto label_208808;
            case 0x20880Cu: goto label_20880c;
            case 0x208810u: goto label_208810;
            case 0x208814u: goto label_208814;
            case 0x208818u: goto label_208818;
            case 0x20881Cu: goto label_20881c;
            case 0x208820u: goto label_208820;
            case 0x208824u: goto label_208824;
            case 0x208828u: goto label_208828;
            case 0x20882Cu: goto label_20882c;
            case 0x208830u: goto label_208830;
            case 0x208834u: goto label_208834;
            case 0x208838u: goto label_208838;
            case 0x20883Cu: goto label_20883c;
            case 0x208840u: goto label_208840;
            case 0x208844u: goto label_208844;
            case 0x208848u: goto label_208848;
            case 0x20884Cu: goto label_20884c;
            case 0x208850u: goto label_208850;
            case 0x208854u: goto label_208854;
            case 0x208858u: goto label_208858;
            case 0x20885Cu: goto label_20885c;
            case 0x208860u: goto label_208860;
            case 0x208864u: goto label_208864;
            case 0x208868u: goto label_208868;
            case 0x20886Cu: goto label_20886c;
            case 0x208870u: goto label_208870;
            case 0x208874u: goto label_208874;
            case 0x208878u: goto label_208878;
            case 0x20887Cu: goto label_20887c;
            case 0x208880u: goto label_208880;
            case 0x208884u: goto label_208884;
            case 0x208888u: goto label_208888;
            case 0x20888Cu: goto label_20888c;
            case 0x208890u: goto label_208890;
            case 0x208894u: goto label_208894;
            case 0x208898u: goto label_208898;
            case 0x20889Cu: goto label_20889c;
            case 0x2088A0u: goto label_2088a0;
            case 0x2088A4u: goto label_2088a4;
            case 0x2088A8u: goto label_2088a8;
            case 0x2088ACu: goto label_2088ac;
            case 0x2088B0u: goto label_2088b0;
            case 0x2088B4u: goto label_2088b4;
            case 0x2088B8u: goto label_2088b8;
            case 0x2088BCu: goto label_2088bc;
            case 0x2088C0u: goto label_2088c0;
            case 0x2088C4u: goto label_2088c4;
            case 0x2088C8u: goto label_2088c8;
            case 0x2088CCu: goto label_2088cc;
            case 0x2088D0u: goto label_2088d0;
            case 0x2088D4u: goto label_2088d4;
            case 0x2088D8u: goto label_2088d8;
            case 0x2088DCu: goto label_2088dc;
            case 0x2088E0u: goto label_2088e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x208464u; }
            if (ctx->pc != 0x208464u) { return; }
        }
    }
    ctx->pc = 0x208464u;
label_208464:
    // 0x208464: 0x1000ffec
label_208468:
    if (ctx->pc == 0x208468u) {
        ctx->pc = 0x20846Cu;
        goto label_20846c;
    }
    ctx->pc = 0x208464u;
    {
        const bool branch_taken_0x208464 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208464) {
            ctx->pc = 0x208418u;
            goto label_208418;
        }
    }
    ctx->pc = 0x20846Cu;
label_20846c:
    // 0x20846c: 0x8fc20018
    ctx->pc = 0x20846cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_208470:
    // 0x208470: 0x10400078
label_208474:
    if (ctx->pc == 0x208474u) {
        ctx->pc = 0x208478u;
        goto label_208478;
    }
    ctx->pc = 0x208470u;
    {
        const bool branch_taken_0x208470 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x208470) {
            ctx->pc = 0x208654u;
            goto label_208654;
        }
    }
    ctx->pc = 0x208478u;
label_208478:
    // 0x208478: 0x8fc20018
    ctx->pc = 0x208478u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_20847c:
    // 0x20847c: 0x2403ffff
    ctx->pc = 0x20847cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_208480:
    // 0x208480: 0x1443000a
label_208484:
    if (ctx->pc == 0x208484u) {
        ctx->pc = 0x208488u;
        goto label_208488;
    }
    ctx->pc = 0x208480u;
    {
        const bool branch_taken_0x208480 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x208480) {
            ctx->pc = 0x2084ACu;
            goto label_2084ac;
        }
    }
    ctx->pc = 0x208488u;
label_208488:
    // 0x208488: 0x8fc40000
    ctx->pc = 0x208488u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_20848c:
    // 0x20848c: 0x8fc50004
    ctx->pc = 0x20848cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_208490:
    // 0x208490: 0x8fc60018
    ctx->pc = 0x208490u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_208494:
    // 0x208494: 0x8fc7000c
    ctx->pc = 0x208494u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_208498:
    // 0x208498: 0x8fc80010
    ctx->pc = 0x208498u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 30), 16)));
label_20849c:
    // 0x20849c: 0xc081d36
label_2084a0:
    if (ctx->pc == 0x2084A0u) {
        ctx->pc = 0x2084A4u;
        goto label_2084a4;
    }
    ctx->pc = 0x20849Cu;
    SET_GPR_U32(ctx, 31, 0x2084A4u);
    ctx->pc = 0x2074D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        updateCardState_0x2074d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2084A4u; }
    }
    if (ctx->pc != 0x2084A4u) { return; }
    ctx->pc = 0x2084A4u;
label_2084a4:
    // 0x2084a4: 0x1000006b
label_2084a8:
    if (ctx->pc == 0x2084A8u) {
        ctx->pc = 0x2084ACu;
        goto label_2084ac;
    }
    ctx->pc = 0x2084A4u;
    {
        const bool branch_taken_0x2084a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2084a4) {
            ctx->pc = 0x208654u;
            goto label_208654;
        }
    }
    ctx->pc = 0x2084ACu;
label_2084ac:
    // 0x2084ac: 0x8fc20018
    ctx->pc = 0x2084acu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_2084b0:
    // 0x2084b0: 0x2403fffe
    ctx->pc = 0x2084b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967294));
label_2084b4:
    // 0x2084b4: 0x14430045
label_2084b8:
    if (ctx->pc == 0x2084B8u) {
        ctx->pc = 0x2084BCu;
        goto label_2084bc;
    }
    ctx->pc = 0x2084B4u;
    {
        const bool branch_taken_0x2084b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x2084b4) {
            ctx->pc = 0x2085CCu;
            goto label_2085cc;
        }
    }
    ctx->pc = 0x2084BCu;
label_2084bc:
    // 0x2084bc: 0x8fc2000c
    ctx->pc = 0x2084bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_2084c0:
    // 0x2084c0: 0x24030002
    ctx->pc = 0x2084c0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_2084c4:
    // 0x2084c4: 0x1043001b
label_2084c8:
    if (ctx->pc == 0x2084C8u) {
        ctx->pc = 0x2084CCu;
        goto label_2084cc;
    }
    ctx->pc = 0x2084C4u;
    {
        const bool branch_taken_0x2084c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x2084c4) {
            ctx->pc = 0x208534u;
            goto label_208534;
        }
    }
    ctx->pc = 0x2084CCu;
label_2084cc:
    // 0x2084cc: 0x8fc20004
    ctx->pc = 0x2084ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_2084d0:
    // 0x2084d0: 0x40182d
    ctx->pc = 0x2084d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2084d4:
    // 0x2084d4: 0x31080
    ctx->pc = 0x2084d4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_2084d8:
    // 0x2084d8: 0x8fc30000
    ctx->pc = 0x2084d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2084dc:
    // 0x2084dc: 0x60202d
    ctx->pc = 0x2084dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2084e0:
    // 0x2084e0: 0x41900
    ctx->pc = 0x2084e0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
label_2084e4:
    // 0x2084e4: 0x431021
    ctx->pc = 0x2084e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2084e8:
    // 0x2084e8: 0x3c030031
    ctx->pc = 0x2084e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_2084ec:
    // 0x2084ec: 0x24632280
    ctx->pc = 0x2084ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8832));
label_2084f0:
    // 0x2084f0: 0x621021
    ctx->pc = 0x2084f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2084f4:
    // 0x2084f4: 0x24030001
    ctx->pc = 0x2084f4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_2084f8:
    // 0x2084f8: 0xac430000
    ctx->pc = 0x2084f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2084fc:
    // 0x2084fc: 0x8fc20004
    ctx->pc = 0x2084fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_208500:
    // 0x208500: 0x40182d
    ctx->pc = 0x208500u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_208504:
    // 0x208504: 0x31080
    ctx->pc = 0x208504u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_208508:
    // 0x208508: 0x8fc30000
    ctx->pc = 0x208508u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_20850c:
    // 0x20850c: 0x60202d
    ctx->pc = 0x20850cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_208510:
    // 0x208510: 0x41900
    ctx->pc = 0x208510u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
label_208514:
    // 0x208514: 0x431021
    ctx->pc = 0x208514u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_208518:
    // 0x208518: 0x3c030031
    ctx->pc = 0x208518u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_20851c:
    // 0x20851c: 0x246322a0
    ctx->pc = 0x20851cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8864));
label_208520:
    // 0x208520: 0x621021
    ctx->pc = 0x208520u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_208524:
    // 0x208524: 0x8fc3000c
    ctx->pc = 0x208524u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_208528:
    // 0x208528: 0xac430000
    ctx->pc = 0x208528u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_20852c:
    // 0x20852c: 0x10000019
label_208530:
    if (ctx->pc == 0x208530u) {
        ctx->pc = 0x208534u;
        goto label_208534;
    }
    ctx->pc = 0x20852Cu;
    {
        const bool branch_taken_0x20852c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20852c) {
            ctx->pc = 0x208594u;
            goto label_208594;
        }
    }
    ctx->pc = 0x208534u;
label_208534:
    // 0x208534: 0x8fc20004
    ctx->pc = 0x208534u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_208538:
    // 0x208538: 0x40182d
    ctx->pc = 0x208538u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20853c:
    // 0x20853c: 0x31080
    ctx->pc = 0x20853cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_208540:
    // 0x208540: 0x8fc30000
    ctx->pc = 0x208540u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_208544:
    // 0x208544: 0x60202d
    ctx->pc = 0x208544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_208548:
    // 0x208548: 0x41900
    ctx->pc = 0x208548u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
label_20854c:
    // 0x20854c: 0x431021
    ctx->pc = 0x20854cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_208550:
    // 0x208550: 0x3c030031
    ctx->pc = 0x208550u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_208554:
    // 0x208554: 0x24632280
    ctx->pc = 0x208554u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8832));
label_208558:
    // 0x208558: 0x621021
    ctx->pc = 0x208558u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20855c:
    // 0x20855c: 0x24030001
    ctx->pc = 0x20855cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_208560:
    // 0x208560: 0xac430000
    ctx->pc = 0x208560u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_208564:
    // 0x208564: 0x8fc20004
    ctx->pc = 0x208564u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_208568:
    // 0x208568: 0x40182d
    ctx->pc = 0x208568u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20856c:
    // 0x20856c: 0x31080
    ctx->pc = 0x20856cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_208570:
    // 0x208570: 0x8fc30000
    ctx->pc = 0x208570u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_208574:
    // 0x208574: 0x60202d
    ctx->pc = 0x208574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_208578:
    // 0x208578: 0x41900
    ctx->pc = 0x208578u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
label_20857c:
    // 0x20857c: 0x431021
    ctx->pc = 0x20857cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_208580:
    // 0x208580: 0x3c030031
    ctx->pc = 0x208580u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_208584:
    // 0x208584: 0x246322a0
    ctx->pc = 0x208584u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8864));
label_208588:
    // 0x208588: 0x621021
    ctx->pc = 0x208588u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20858c:
    // 0x20858c: 0x8fc3000c
    ctx->pc = 0x20858cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_208590:
    // 0x208590: 0xac430000
    ctx->pc = 0x208590u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_208594:
    // 0x208594: 0x8fc20004
    ctx->pc = 0x208594u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_208598:
    // 0x208598: 0x40182d
    ctx->pc = 0x208598u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20859c:
    // 0x20859c: 0x31080
    ctx->pc = 0x20859cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_2085a0:
    // 0x2085a0: 0x8fc30000
    ctx->pc = 0x2085a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2085a4:
    // 0x2085a4: 0x60202d
    ctx->pc = 0x2085a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2085a8:
    // 0x2085a8: 0x41900
    ctx->pc = 0x2085a8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
label_2085ac:
    // 0x2085ac: 0x431021
    ctx->pc = 0x2085acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2085b0:
    // 0x2085b0: 0x3c030031
    ctx->pc = 0x2085b0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_2085b4:
    // 0x2085b4: 0x246322c0
    ctx->pc = 0x2085b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8896));
label_2085b8:
    // 0x2085b8: 0x621021
    ctx->pc = 0x2085b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2085bc:
    // 0x2085bc: 0x2403ffff
    ctx->pc = 0x2085bcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2085c0:
    // 0x2085c0: 0xac430000
    ctx->pc = 0x2085c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2085c4:
    // 0x2085c4: 0x10000023
label_2085c8:
    if (ctx->pc == 0x2085C8u) {
        ctx->pc = 0x2085CCu;
        goto label_2085cc;
    }
    ctx->pc = 0x2085C4u;
    {
        const bool branch_taken_0x2085c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2085c4) {
            ctx->pc = 0x208654u;
            goto label_208654;
        }
    }
    ctx->pc = 0x2085CCu;
label_2085cc:
    // 0x2085cc: 0x8fc20004
    ctx->pc = 0x2085ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_2085d0:
    // 0x2085d0: 0x40182d
    ctx->pc = 0x2085d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2085d4:
    // 0x2085d4: 0x31080
    ctx->pc = 0x2085d4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_2085d8:
    // 0x2085d8: 0x8fc30000
    ctx->pc = 0x2085d8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2085dc:
    // 0x2085dc: 0x60202d
    ctx->pc = 0x2085dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2085e0:
    // 0x2085e0: 0x41900
    ctx->pc = 0x2085e0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
label_2085e4:
    // 0x2085e4: 0x431021
    ctx->pc = 0x2085e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2085e8:
    // 0x2085e8: 0x3c030031
    ctx->pc = 0x2085e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_2085ec:
    // 0x2085ec: 0x24632280
    ctx->pc = 0x2085ecu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8832));
label_2085f0:
    // 0x2085f0: 0x621021
    ctx->pc = 0x2085f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2085f4:
    // 0x2085f4: 0xac400000
    ctx->pc = 0x2085f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2085f8:
    // 0x2085f8: 0x8fc20004
    ctx->pc = 0x2085f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_2085fc:
    // 0x2085fc: 0x40182d
    ctx->pc = 0x2085fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_208600:
    // 0x208600: 0x31080
    ctx->pc = 0x208600u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_208604:
    // 0x208604: 0x8fc30000
    ctx->pc = 0x208604u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_208608:
    // 0x208608: 0x60202d
    ctx->pc = 0x208608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_20860c:
    // 0x20860c: 0x41900
    ctx->pc = 0x20860cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
label_208610:
    // 0x208610: 0x431021
    ctx->pc = 0x208610u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_208614:
    // 0x208614: 0x3c030031
    ctx->pc = 0x208614u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_208618:
    // 0x208618: 0x246322a0
    ctx->pc = 0x208618u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8864));
label_20861c:
    // 0x20861c: 0x621021
    ctx->pc = 0x20861cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_208620:
    // 0x208620: 0xac400000
    ctx->pc = 0x208620u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_208624:
    // 0x208624: 0x8fc20004
    ctx->pc = 0x208624u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_208628:
    // 0x208628: 0x40182d
    ctx->pc = 0x208628u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20862c:
    // 0x20862c: 0x31080
    ctx->pc = 0x20862cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_208630:
    // 0x208630: 0x8fc30000
    ctx->pc = 0x208630u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_208634:
    // 0x208634: 0x60202d
    ctx->pc = 0x208634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_208638:
    // 0x208638: 0x41900
    ctx->pc = 0x208638u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
label_20863c:
    // 0x20863c: 0x431021
    ctx->pc = 0x20863cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_208640:
    // 0x208640: 0x3c030031
    ctx->pc = 0x208640u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_208644:
    // 0x208644: 0x246322c0
    ctx->pc = 0x208644u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8896));
label_208648:
    // 0x208648: 0x621021
    ctx->pc = 0x208648u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20864c:
    // 0x20864c: 0x2403ffff
    ctx->pc = 0x20864cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_208650:
    // 0x208650: 0xac430000
    ctx->pc = 0x208650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_208654:
    // 0x208654: 0x8fc20004
    ctx->pc = 0x208654u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_208658:
    // 0x208658: 0x40182d
    ctx->pc = 0x208658u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20865c:
    // 0x20865c: 0x31080
    ctx->pc = 0x20865cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_208660:
    // 0x208660: 0x8fc30000
    ctx->pc = 0x208660u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_208664:
    // 0x208664: 0x60202d
    ctx->pc = 0x208664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_208668:
    // 0x208668: 0x41900
    ctx->pc = 0x208668u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
label_20866c:
    // 0x20866c: 0x431021
    ctx->pc = 0x20866cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_208670:
    // 0x208670: 0x3c030031
    ctx->pc = 0x208670u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_208674:
    // 0x208674: 0x246322a0
    ctx->pc = 0x208674u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8864));
label_208678:
    // 0x208678: 0x621021
    ctx->pc = 0x208678u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_20867c:
    // 0x20867c: 0x8c430000
    ctx->pc = 0x20867cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_208680:
    // 0x208680: 0x24020002
    ctx->pc = 0x208680u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_208684:
    // 0x208684: 0x1462005a
label_208688:
    if (ctx->pc == 0x208688u) {
        ctx->pc = 0x20868Cu;
        goto label_20868c;
    }
    ctx->pc = 0x208684u;
    {
        const bool branch_taken_0x208684 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x208684) {
            ctx->pc = 0x2087F0u;
            goto label_2087f0;
        }
    }
    ctx->pc = 0x20868Cu;
label_20868c:
    // 0x20868c: 0x8fc20004
    ctx->pc = 0x20868cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_208690:
    // 0x208690: 0x40182d
    ctx->pc = 0x208690u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_208694:
    // 0x208694: 0x31080
    ctx->pc = 0x208694u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_208698:
    // 0x208698: 0x8fc30000
    ctx->pc = 0x208698u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_20869c:
    // 0x20869c: 0x60202d
    ctx->pc = 0x20869cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2086a0:
    // 0x2086a0: 0x41900
    ctx->pc = 0x2086a0u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
label_2086a4:
    // 0x2086a4: 0x431021
    ctx->pc = 0x2086a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2086a8:
    // 0x2086a8: 0x3c030031
    ctx->pc = 0x2086a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_2086ac:
    // 0x2086ac: 0x24632280
    ctx->pc = 0x2086acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8832));
label_2086b0:
    // 0x2086b0: 0x621021
    ctx->pc = 0x2086b0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2086b4:
    // 0x2086b4: 0x8c430000
    ctx->pc = 0x2086b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2086b8:
    // 0x2086b8: 0x24020001
    ctx->pc = 0x2086b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2086bc:
    // 0x2086bc: 0x1462004c
label_2086c0:
    if (ctx->pc == 0x2086C0u) {
        ctx->pc = 0x2086C4u;
        goto label_2086c4;
    }
    ctx->pc = 0x2086BCu;
    {
        const bool branch_taken_0x2086bc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2086bc) {
            ctx->pc = 0x2087F0u;
            goto label_2087f0;
        }
    }
    ctx->pc = 0x2086C4u;
label_2086c4:
    // 0x2086c4: 0x8fc20008
    ctx->pc = 0x2086c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_2086c8:
    // 0x2086c8: 0x10400049
label_2086cc:
    if (ctx->pc == 0x2086CCu) {
        ctx->pc = 0x2086D0u;
        goto label_2086d0;
    }
    ctx->pc = 0x2086C8u;
    {
        const bool branch_taken_0x2086c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2086c8) {
            ctx->pc = 0x2087F0u;
            goto label_2087f0;
        }
    }
    ctx->pc = 0x2086D0u;
label_2086d0:
    // 0x2086d0: 0x8fc40000
    ctx->pc = 0x2086d0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2086d4:
    // 0x2086d4: 0x8fc50004
    ctx->pc = 0x2086d4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_2086d8:
    // 0x2086d8: 0xc0b9b48
label_2086dc:
    if (ctx->pc == 0x2086DCu) {
        ctx->pc = 0x2086E0u;
        goto label_2086e0;
    }
    ctx->pc = 0x2086D8u;
    SET_GPR_U32(ctx, 31, 0x2086E0u);
    ctx->pc = 0x2E6D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcFormat_0x2e6d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2086E0u; }
    }
    if (ctx->pc != 0x2086E0u) { return; }
    ctx->pc = 0x2086E0u;
label_2086e0:
    // 0x2086e0: 0x10400005
label_2086e4:
    if (ctx->pc == 0x2086E4u) {
        ctx->pc = 0x2086E8u;
        goto label_2086e8;
    }
    ctx->pc = 0x2086E0u;
    {
        const bool branch_taken_0x2086e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2086e0) {
            ctx->pc = 0x2086F8u;
            goto label_2086f8;
        }
    }
    ctx->pc = 0x2086E8u;
label_2086e8:
    // 0x2086e8: 0x3c04003a
    ctx->pc = 0x2086e8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_2086ec:
    // 0x2086ec: 0x24844e00
    ctx->pc = 0x2086ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 19968));
label_2086f0:
    // 0x2086f0: 0xc0b4a34
label_2086f4:
    if (ctx->pc == 0x2086F4u) {
        ctx->pc = 0x2086F8u;
        goto label_2086f8;
    }
    ctx->pc = 0x2086F0u;
    SET_GPR_U32(ctx, 31, 0x2086F8u);
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2086F8u; }
    }
    if (ctx->pc != 0x2086F8u) { return; }
    ctx->pc = 0x2086F8u;
label_2086f8:
    // 0x2086f8: 0x0
    ctx->pc = 0x2086f8u;
    // NOP
label_2086fc:
    // 0x2086fc: 0x0
    ctx->pc = 0x2086fcu;
    // NOP
label_208700:
    // 0x208700: 0x27c20014
    ctx->pc = 0x208700u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 30), 20));
label_208704:
    // 0x208704: 0x27c30018
    ctx->pc = 0x208704u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 24));
label_208708:
    // 0x208708: 0x24040001
    ctx->pc = 0x208708u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_20870c:
    // 0x20870c: 0x40282d
    ctx->pc = 0x20870cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_208710:
    // 0x208710: 0x60302d
    ctx->pc = 0x208710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_208714:
    // 0x208714: 0xc0b9a14
label_208718:
    if (ctx->pc == 0x208718u) {
        ctx->pc = 0x20871Cu;
        goto label_20871c;
    }
    ctx->pc = 0x208714u;
    SET_GPR_U32(ctx, 31, 0x20871Cu);
    ctx->pc = 0x2E6850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceMcSync_0x2e6850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20871Cu; }
    }
    if (ctx->pc != 0x20871Cu) { return; }
    ctx->pc = 0x20871Cu;
label_20871c:
    // 0x20871c: 0x10400003
label_208720:
    if (ctx->pc == 0x208720u) {
        ctx->pc = 0x208724u;
        goto label_208724;
    }
    ctx->pc = 0x20871Cu;
    {
        const bool branch_taken_0x20871c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x20871c) {
            ctx->pc = 0x20872Cu;
            goto label_20872c;
        }
    }
    ctx->pc = 0x208724u;
label_208724:
    // 0x208724: 0x1000000b
label_208728:
    if (ctx->pc == 0x208728u) {
        ctx->pc = 0x20872Cu;
        goto label_20872c;
    }
    ctx->pc = 0x208724u;
    {
        const bool branch_taken_0x208724 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208724) {
            ctx->pc = 0x208754u;
            goto label_208754;
        }
    }
    ctx->pc = 0x20872Cu;
label_20872c:
    // 0x20872c: 0x3c02003c
    ctx->pc = 0x20872cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_208730:
    // 0x208730: 0x8c42c4e4
    ctx->pc = 0x208730u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952164)));
label_208734:
    // 0x208734: 0x10400005
label_208738:
    if (ctx->pc == 0x208738u) {
        ctx->pc = 0x20873Cu;
        goto label_20873c;
    }
    ctx->pc = 0x208734u;
    {
        const bool branch_taken_0x208734 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x208734) {
            ctx->pc = 0x20874Cu;
            goto label_20874c;
        }
    }
    ctx->pc = 0x20873Cu;
label_20873c:
    // 0x20873c: 0x3c10003c
    ctx->pc = 0x20873cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_208740:
    // 0x208740: 0x8e10c4e4
    ctx->pc = 0x208740u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 4294952164)));
label_208744:
    // 0x208744: 0x200f809
label_208748:
    if (ctx->pc == 0x208748u) {
        ctx->pc = 0x20874Cu;
        goto label_20874c;
    }
    ctx->pc = 0x208744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x20874Cu);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x208388u: goto label_208388;
            case 0x20838Cu: goto label_20838c;
            case 0x208390u: goto label_208390;
            case 0x208394u: goto label_208394;
            case 0x208398u: goto label_208398;
            case 0x20839Cu: goto label_20839c;
            case 0x2083A0u: goto label_2083a0;
            case 0x2083A4u: goto label_2083a4;
            case 0x2083A8u: goto label_2083a8;
            case 0x2083ACu: goto label_2083ac;
            case 0x2083B0u: goto label_2083b0;
            case 0x2083B4u: goto label_2083b4;
            case 0x2083B8u: goto label_2083b8;
            case 0x2083BCu: goto label_2083bc;
            case 0x2083C0u: goto label_2083c0;
            case 0x2083C4u: goto label_2083c4;
            case 0x2083C8u: goto label_2083c8;
            case 0x2083CCu: goto label_2083cc;
            case 0x2083D0u: goto label_2083d0;
            case 0x2083D4u: goto label_2083d4;
            case 0x2083D8u: goto label_2083d8;
            case 0x2083DCu: goto label_2083dc;
            case 0x2083E0u: goto label_2083e0;
            case 0x2083E4u: goto label_2083e4;
            case 0x2083E8u: goto label_2083e8;
            case 0x2083ECu: goto label_2083ec;
            case 0x2083F0u: goto label_2083f0;
            case 0x2083F4u: goto label_2083f4;
            case 0x2083F8u: goto label_2083f8;
            case 0x2083FCu: goto label_2083fc;
            case 0x208400u: goto label_208400;
            case 0x208404u: goto label_208404;
            case 0x208408u: goto label_208408;
            case 0x20840Cu: goto label_20840c;
            case 0x208410u: goto label_208410;
            case 0x208414u: goto label_208414;
            case 0x208418u: goto label_208418;
            case 0x20841Cu: goto label_20841c;
            case 0x208420u: goto label_208420;
            case 0x208424u: goto label_208424;
            case 0x208428u: goto label_208428;
            case 0x20842Cu: goto label_20842c;
            case 0x208430u: goto label_208430;
            case 0x208434u: goto label_208434;
            case 0x208438u: goto label_208438;
            case 0x20843Cu: goto label_20843c;
            case 0x208440u: goto label_208440;
            case 0x208444u: goto label_208444;
            case 0x208448u: goto label_208448;
            case 0x20844Cu: goto label_20844c;
            case 0x208450u: goto label_208450;
            case 0x208454u: goto label_208454;
            case 0x208458u: goto label_208458;
            case 0x20845Cu: goto label_20845c;
            case 0x208460u: goto label_208460;
            case 0x208464u: goto label_208464;
            case 0x208468u: goto label_208468;
            case 0x20846Cu: goto label_20846c;
            case 0x208470u: goto label_208470;
            case 0x208474u: goto label_208474;
            case 0x208478u: goto label_208478;
            case 0x20847Cu: goto label_20847c;
            case 0x208480u: goto label_208480;
            case 0x208484u: goto label_208484;
            case 0x208488u: goto label_208488;
            case 0x20848Cu: goto label_20848c;
            case 0x208490u: goto label_208490;
            case 0x208494u: goto label_208494;
            case 0x208498u: goto label_208498;
            case 0x20849Cu: goto label_20849c;
            case 0x2084A0u: goto label_2084a0;
            case 0x2084A4u: goto label_2084a4;
            case 0x2084A8u: goto label_2084a8;
            case 0x2084ACu: goto label_2084ac;
            case 0x2084B0u: goto label_2084b0;
            case 0x2084B4u: goto label_2084b4;
            case 0x2084B8u: goto label_2084b8;
            case 0x2084BCu: goto label_2084bc;
            case 0x2084C0u: goto label_2084c0;
            case 0x2084C4u: goto label_2084c4;
            case 0x2084C8u: goto label_2084c8;
            case 0x2084CCu: goto label_2084cc;
            case 0x2084D0u: goto label_2084d0;
            case 0x2084D4u: goto label_2084d4;
            case 0x2084D8u: goto label_2084d8;
            case 0x2084DCu: goto label_2084dc;
            case 0x2084E0u: goto label_2084e0;
            case 0x2084E4u: goto label_2084e4;
            case 0x2084E8u: goto label_2084e8;
            case 0x2084ECu: goto label_2084ec;
            case 0x2084F0u: goto label_2084f0;
            case 0x2084F4u: goto label_2084f4;
            case 0x2084F8u: goto label_2084f8;
            case 0x2084FCu: goto label_2084fc;
            case 0x208500u: goto label_208500;
            case 0x208504u: goto label_208504;
            case 0x208508u: goto label_208508;
            case 0x20850Cu: goto label_20850c;
            case 0x208510u: goto label_208510;
            case 0x208514u: goto label_208514;
            case 0x208518u: goto label_208518;
            case 0x20851Cu: goto label_20851c;
            case 0x208520u: goto label_208520;
            case 0x208524u: goto label_208524;
            case 0x208528u: goto label_208528;
            case 0x20852Cu: goto label_20852c;
            case 0x208530u: goto label_208530;
            case 0x208534u: goto label_208534;
            case 0x208538u: goto label_208538;
            case 0x20853Cu: goto label_20853c;
            case 0x208540u: goto label_208540;
            case 0x208544u: goto label_208544;
            case 0x208548u: goto label_208548;
            case 0x20854Cu: goto label_20854c;
            case 0x208550u: goto label_208550;
            case 0x208554u: goto label_208554;
            case 0x208558u: goto label_208558;
            case 0x20855Cu: goto label_20855c;
            case 0x208560u: goto label_208560;
            case 0x208564u: goto label_208564;
            case 0x208568u: goto label_208568;
            case 0x20856Cu: goto label_20856c;
            case 0x208570u: goto label_208570;
            case 0x208574u: goto label_208574;
            case 0x208578u: goto label_208578;
            case 0x20857Cu: goto label_20857c;
            case 0x208580u: goto label_208580;
            case 0x208584u: goto label_208584;
            case 0x208588u: goto label_208588;
            case 0x20858Cu: goto label_20858c;
            case 0x208590u: goto label_208590;
            case 0x208594u: goto label_208594;
            case 0x208598u: goto label_208598;
            case 0x20859Cu: goto label_20859c;
            case 0x2085A0u: goto label_2085a0;
            case 0x2085A4u: goto label_2085a4;
            case 0x2085A8u: goto label_2085a8;
            case 0x2085ACu: goto label_2085ac;
            case 0x2085B0u: goto label_2085b0;
            case 0x2085B4u: goto label_2085b4;
            case 0x2085B8u: goto label_2085b8;
            case 0x2085BCu: goto label_2085bc;
            case 0x2085C0u: goto label_2085c0;
            case 0x2085C4u: goto label_2085c4;
            case 0x2085C8u: goto label_2085c8;
            case 0x2085CCu: goto label_2085cc;
            case 0x2085D0u: goto label_2085d0;
            case 0x2085D4u: goto label_2085d4;
            case 0x2085D8u: goto label_2085d8;
            case 0x2085DCu: goto label_2085dc;
            case 0x2085E0u: goto label_2085e0;
            case 0x2085E4u: goto label_2085e4;
            case 0x2085E8u: goto label_2085e8;
            case 0x2085ECu: goto label_2085ec;
            case 0x2085F0u: goto label_2085f0;
            case 0x2085F4u: goto label_2085f4;
            case 0x2085F8u: goto label_2085f8;
            case 0x2085FCu: goto label_2085fc;
            case 0x208600u: goto label_208600;
            case 0x208604u: goto label_208604;
            case 0x208608u: goto label_208608;
            case 0x20860Cu: goto label_20860c;
            case 0x208610u: goto label_208610;
            case 0x208614u: goto label_208614;
            case 0x208618u: goto label_208618;
            case 0x20861Cu: goto label_20861c;
            case 0x208620u: goto label_208620;
            case 0x208624u: goto label_208624;
            case 0x208628u: goto label_208628;
            case 0x20862Cu: goto label_20862c;
            case 0x208630u: goto label_208630;
            case 0x208634u: goto label_208634;
            case 0x208638u: goto label_208638;
            case 0x20863Cu: goto label_20863c;
            case 0x208640u: goto label_208640;
            case 0x208644u: goto label_208644;
            case 0x208648u: goto label_208648;
            case 0x20864Cu: goto label_20864c;
            case 0x208650u: goto label_208650;
            case 0x208654u: goto label_208654;
            case 0x208658u: goto label_208658;
            case 0x20865Cu: goto label_20865c;
            case 0x208660u: goto label_208660;
            case 0x208664u: goto label_208664;
            case 0x208668u: goto label_208668;
            case 0x20866Cu: goto label_20866c;
            case 0x208670u: goto label_208670;
            case 0x208674u: goto label_208674;
            case 0x208678u: goto label_208678;
            case 0x20867Cu: goto label_20867c;
            case 0x208680u: goto label_208680;
            case 0x208684u: goto label_208684;
            case 0x208688u: goto label_208688;
            case 0x20868Cu: goto label_20868c;
            case 0x208690u: goto label_208690;
            case 0x208694u: goto label_208694;
            case 0x208698u: goto label_208698;
            case 0x20869Cu: goto label_20869c;
            case 0x2086A0u: goto label_2086a0;
            case 0x2086A4u: goto label_2086a4;
            case 0x2086A8u: goto label_2086a8;
            case 0x2086ACu: goto label_2086ac;
            case 0x2086B0u: goto label_2086b0;
            case 0x2086B4u: goto label_2086b4;
            case 0x2086B8u: goto label_2086b8;
            case 0x2086BCu: goto label_2086bc;
            case 0x2086C0u: goto label_2086c0;
            case 0x2086C4u: goto label_2086c4;
            case 0x2086C8u: goto label_2086c8;
            case 0x2086CCu: goto label_2086cc;
            case 0x2086D0u: goto label_2086d0;
            case 0x2086D4u: goto label_2086d4;
            case 0x2086D8u: goto label_2086d8;
            case 0x2086DCu: goto label_2086dc;
            case 0x2086E0u: goto label_2086e0;
            case 0x2086E4u: goto label_2086e4;
            case 0x2086E8u: goto label_2086e8;
            case 0x2086ECu: goto label_2086ec;
            case 0x2086F0u: goto label_2086f0;
            case 0x2086F4u: goto label_2086f4;
            case 0x2086F8u: goto label_2086f8;
            case 0x2086FCu: goto label_2086fc;
            case 0x208700u: goto label_208700;
            case 0x208704u: goto label_208704;
            case 0x208708u: goto label_208708;
            case 0x20870Cu: goto label_20870c;
            case 0x208710u: goto label_208710;
            case 0x208714u: goto label_208714;
            case 0x208718u: goto label_208718;
            case 0x20871Cu: goto label_20871c;
            case 0x208720u: goto label_208720;
            case 0x208724u: goto label_208724;
            case 0x208728u: goto label_208728;
            case 0x20872Cu: goto label_20872c;
            case 0x208730u: goto label_208730;
            case 0x208734u: goto label_208734;
            case 0x208738u: goto label_208738;
            case 0x20873Cu: goto label_20873c;
            case 0x208740u: goto label_208740;
            case 0x208744u: goto label_208744;
            case 0x208748u: goto label_208748;
            case 0x20874Cu: goto label_20874c;
            case 0x208750u: goto label_208750;
            case 0x208754u: goto label_208754;
            case 0x208758u: goto label_208758;
            case 0x20875Cu: goto label_20875c;
            case 0x208760u: goto label_208760;
            case 0x208764u: goto label_208764;
            case 0x208768u: goto label_208768;
            case 0x20876Cu: goto label_20876c;
            case 0x208770u: goto label_208770;
            case 0x208774u: goto label_208774;
            case 0x208778u: goto label_208778;
            case 0x20877Cu: goto label_20877c;
            case 0x208780u: goto label_208780;
            case 0x208784u: goto label_208784;
            case 0x208788u: goto label_208788;
            case 0x20878Cu: goto label_20878c;
            case 0x208790u: goto label_208790;
            case 0x208794u: goto label_208794;
            case 0x208798u: goto label_208798;
            case 0x20879Cu: goto label_20879c;
            case 0x2087A0u: goto label_2087a0;
            case 0x2087A4u: goto label_2087a4;
            case 0x2087A8u: goto label_2087a8;
            case 0x2087ACu: goto label_2087ac;
            case 0x2087B0u: goto label_2087b0;
            case 0x2087B4u: goto label_2087b4;
            case 0x2087B8u: goto label_2087b8;
            case 0x2087BCu: goto label_2087bc;
            case 0x2087C0u: goto label_2087c0;
            case 0x2087C4u: goto label_2087c4;
            case 0x2087C8u: goto label_2087c8;
            case 0x2087CCu: goto label_2087cc;
            case 0x2087D0u: goto label_2087d0;
            case 0x2087D4u: goto label_2087d4;
            case 0x2087D8u: goto label_2087d8;
            case 0x2087DCu: goto label_2087dc;
            case 0x2087E0u: goto label_2087e0;
            case 0x2087E4u: goto label_2087e4;
            case 0x2087E8u: goto label_2087e8;
            case 0x2087ECu: goto label_2087ec;
            case 0x2087F0u: goto label_2087f0;
            case 0x2087F4u: goto label_2087f4;
            case 0x2087F8u: goto label_2087f8;
            case 0x2087FCu: goto label_2087fc;
            case 0x208800u: goto label_208800;
            case 0x208804u: goto label_208804;
            case 0x208808u: goto label_208808;
            case 0x20880Cu: goto label_20880c;
            case 0x208810u: goto label_208810;
            case 0x208814u: goto label_208814;
            case 0x208818u: goto label_208818;
            case 0x20881Cu: goto label_20881c;
            case 0x208820u: goto label_208820;
            case 0x208824u: goto label_208824;
            case 0x208828u: goto label_208828;
            case 0x20882Cu: goto label_20882c;
            case 0x208830u: goto label_208830;
            case 0x208834u: goto label_208834;
            case 0x208838u: goto label_208838;
            case 0x20883Cu: goto label_20883c;
            case 0x208840u: goto label_208840;
            case 0x208844u: goto label_208844;
            case 0x208848u: goto label_208848;
            case 0x20884Cu: goto label_20884c;
            case 0x208850u: goto label_208850;
            case 0x208854u: goto label_208854;
            case 0x208858u: goto label_208858;
            case 0x20885Cu: goto label_20885c;
            case 0x208860u: goto label_208860;
            case 0x208864u: goto label_208864;
            case 0x208868u: goto label_208868;
            case 0x20886Cu: goto label_20886c;
            case 0x208870u: goto label_208870;
            case 0x208874u: goto label_208874;
            case 0x208878u: goto label_208878;
            case 0x20887Cu: goto label_20887c;
            case 0x208880u: goto label_208880;
            case 0x208884u: goto label_208884;
            case 0x208888u: goto label_208888;
            case 0x20888Cu: goto label_20888c;
            case 0x208890u: goto label_208890;
            case 0x208894u: goto label_208894;
            case 0x208898u: goto label_208898;
            case 0x20889Cu: goto label_20889c;
            case 0x2088A0u: goto label_2088a0;
            case 0x2088A4u: goto label_2088a4;
            case 0x2088A8u: goto label_2088a8;
            case 0x2088ACu: goto label_2088ac;
            case 0x2088B0u: goto label_2088b0;
            case 0x2088B4u: goto label_2088b4;
            case 0x2088B8u: goto label_2088b8;
            case 0x2088BCu: goto label_2088bc;
            case 0x2088C0u: goto label_2088c0;
            case 0x2088C4u: goto label_2088c4;
            case 0x2088C8u: goto label_2088c8;
            case 0x2088CCu: goto label_2088cc;
            case 0x2088D0u: goto label_2088d0;
            case 0x2088D4u: goto label_2088d4;
            case 0x2088D8u: goto label_2088d8;
            case 0x2088DCu: goto label_2088dc;
            case 0x2088E0u: goto label_2088e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20874Cu; }
            if (ctx->pc != 0x20874Cu) { return; }
        }
    }
    ctx->pc = 0x20874Cu;
label_20874c:
    // 0x20874c: 0x1000ffec
label_208750:
    if (ctx->pc == 0x208750u) {
        ctx->pc = 0x208754u;
        goto label_208754;
    }
    ctx->pc = 0x20874Cu;
    {
        const bool branch_taken_0x20874c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x20874c) {
            ctx->pc = 0x208700u;
            goto label_208700;
        }
    }
    ctx->pc = 0x208754u;
label_208754:
    // 0x208754: 0x8fc20018
    ctx->pc = 0x208754u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_208758:
    // 0x208758: 0x14400025
label_20875c:
    if (ctx->pc == 0x20875Cu) {
        ctx->pc = 0x208760u;
        goto label_208760;
    }
    ctx->pc = 0x208758u;
    {
        const bool branch_taken_0x208758 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x208758) {
            ctx->pc = 0x2087F0u;
            goto label_2087f0;
        }
    }
    ctx->pc = 0x208760u;
label_208760:
    // 0x208760: 0x8fc20004
    ctx->pc = 0x208760u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_208764:
    // 0x208764: 0x40182d
    ctx->pc = 0x208764u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_208768:
    // 0x208768: 0x31080
    ctx->pc = 0x208768u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_20876c:
    // 0x20876c: 0x8fc30000
    ctx->pc = 0x20876cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_208770:
    // 0x208770: 0x60202d
    ctx->pc = 0x208770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_208774:
    // 0x208774: 0x41900
    ctx->pc = 0x208774u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
label_208778:
    // 0x208778: 0x431021
    ctx->pc = 0x208778u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20877c:
    // 0x20877c: 0x3c030031
    ctx->pc = 0x20877cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_208780:
    // 0x208780: 0x24632280
    ctx->pc = 0x208780u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8832));
label_208784:
    // 0x208784: 0x621021
    ctx->pc = 0x208784u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_208788:
    // 0x208788: 0x24030002
    ctx->pc = 0x208788u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
label_20878c:
    // 0x20878c: 0xac430000
    ctx->pc = 0x20878cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_208790:
    // 0x208790: 0x8fc20004
    ctx->pc = 0x208790u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_208794:
    // 0x208794: 0x40182d
    ctx->pc = 0x208794u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_208798:
    // 0x208798: 0x31080
    ctx->pc = 0x208798u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_20879c:
    // 0x20879c: 0x8fc30000
    ctx->pc = 0x20879cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2087a0:
    // 0x2087a0: 0x60202d
    ctx->pc = 0x2087a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2087a4:
    // 0x2087a4: 0x41900
    ctx->pc = 0x2087a4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
label_2087a8:
    // 0x2087a8: 0x431021
    ctx->pc = 0x2087a8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2087ac:
    // 0x2087ac: 0x3c030031
    ctx->pc = 0x2087acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_2087b0:
    // 0x2087b0: 0x246322a0
    ctx->pc = 0x2087b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8864));
label_2087b4:
    // 0x2087b4: 0x621021
    ctx->pc = 0x2087b4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2087b8:
    // 0x2087b8: 0x8fc3000c
    ctx->pc = 0x2087b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_2087bc:
    // 0x2087bc: 0xac430000
    ctx->pc = 0x2087bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2087c0:
    // 0x2087c0: 0x8fc20004
    ctx->pc = 0x2087c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_2087c4:
    // 0x2087c4: 0x40182d
    ctx->pc = 0x2087c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2087c8:
    // 0x2087c8: 0x31080
    ctx->pc = 0x2087c8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_2087cc:
    // 0x2087cc: 0x8fc30000
    ctx->pc = 0x2087ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2087d0:
    // 0x2087d0: 0x60202d
    ctx->pc = 0x2087d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2087d4:
    // 0x2087d4: 0x41900
    ctx->pc = 0x2087d4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
label_2087d8:
    // 0x2087d8: 0x431021
    ctx->pc = 0x2087d8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2087dc:
    // 0x2087dc: 0x3c030031
    ctx->pc = 0x2087dcu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_2087e0:
    // 0x2087e0: 0x246322c0
    ctx->pc = 0x2087e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8896));
label_2087e4:
    // 0x2087e4: 0x621021
    ctx->pc = 0x2087e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2087e8:
    // 0x2087e8: 0x2403ffff
    ctx->pc = 0x2087e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2087ec:
    // 0x2087ec: 0xac430000
    ctx->pc = 0x2087ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2087f0:
    // 0x2087f0: 0x8fc20004
    ctx->pc = 0x2087f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_2087f4:
    // 0x2087f4: 0x40182d
    ctx->pc = 0x2087f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2087f8:
    // 0x2087f8: 0x31080
    ctx->pc = 0x2087f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_2087fc:
    // 0x2087fc: 0x8fc30000
    ctx->pc = 0x2087fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_208800:
    // 0x208800: 0x60202d
    ctx->pc = 0x208800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_208804:
    // 0x208804: 0x41900
    ctx->pc = 0x208804u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
label_208808:
    // 0x208808: 0x431021
    ctx->pc = 0x208808u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20880c:
    // 0x20880c: 0x3c030031
    ctx->pc = 0x20880cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_208810:
    // 0x208810: 0x24632280
    ctx->pc = 0x208810u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8832));
label_208814:
    // 0x208814: 0x621021
    ctx->pc = 0x208814u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_208818:
    // 0x208818: 0x8c430000
    ctx->pc = 0x208818u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20881c:
    // 0x20881c: 0x14600006
label_208820:
    if (ctx->pc == 0x208820u) {
        ctx->pc = 0x208824u;
        goto label_208824;
    }
    ctx->pc = 0x20881Cu;
    {
        const bool branch_taken_0x20881c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x20881c) {
            ctx->pc = 0x208838u;
            goto label_208838;
        }
    }
    ctx->pc = 0x208824u;
label_208824:
    // 0x208824: 0x102d
    ctx->pc = 0x208824u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_208828:
    // 0x208828: 0x10000027
label_20882c:
    if (ctx->pc == 0x20882Cu) {
        ctx->pc = 0x208830u;
        goto label_208830;
    }
    ctx->pc = 0x208828u;
    {
        const bool branch_taken_0x208828 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208828) {
            ctx->pc = 0x2088C8u;
            goto label_2088c8;
        }
    }
    ctx->pc = 0x208830u;
label_208830:
    // 0x208830: 0x10000025
label_208834:
    if (ctx->pc == 0x208834u) {
        ctx->pc = 0x208838u;
        goto label_208838;
    }
    ctx->pc = 0x208830u;
    {
        const bool branch_taken_0x208830 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x208830) {
            ctx->pc = 0x2088C8u;
            goto label_2088c8;
        }
    }
    ctx->pc = 0x208838u;
label_208838:
    // 0x208838: 0x8fc20004
    ctx->pc = 0x208838u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_20883c:
    // 0x20883c: 0x40182d
    ctx->pc = 0x20883cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_208840:
    // 0x208840: 0x31080
    ctx->pc = 0x208840u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_208844:
    // 0x208844: 0x8fc30000
    ctx->pc = 0x208844u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_208848:
    // 0x208848: 0x60202d
    ctx->pc = 0x208848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_20884c:
    // 0x20884c: 0x41900
    ctx->pc = 0x20884cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
label_208850:
    // 0x208850: 0x431021
    ctx->pc = 0x208850u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_208854:
    // 0x208854: 0x3c030031
    ctx->pc = 0x208854u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_208858:
    // 0x208858: 0x24632280
    ctx->pc = 0x208858u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8832));
label_20885c:
    // 0x20885c: 0x621021
    ctx->pc = 0x20885cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_208860:
    // 0x208860: 0x8c430000
    ctx->pc = 0x208860u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_208864:
    // 0x208864: 0x24020002
    ctx->pc = 0x208864u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_208868:
    // 0x208868: 0x14620014
label_20886c:
    if (ctx->pc == 0x20886Cu) {
        ctx->pc = 0x208870u;
        goto label_208870;
    }
    ctx->pc = 0x208868u;
    {
        const bool branch_taken_0x208868 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x208868) {
            ctx->pc = 0x2088BCu;
            goto label_2088bc;
        }
    }
    ctx->pc = 0x208870u;
label_208870:
    // 0x208870: 0x8fc20004
    ctx->pc = 0x208870u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_208874:
    // 0x208874: 0x40182d
    ctx->pc = 0x208874u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_208878:
    // 0x208878: 0x31080
    ctx->pc = 0x208878u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 2));
label_20887c:
    // 0x20887c: 0x8fc30000
    ctx->pc = 0x20887cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_208880:
    // 0x208880: 0x60202d
    ctx->pc = 0x208880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_208884:
    // 0x208884: 0x41900
    ctx->pc = 0x208884u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 4));
label_208888:
    // 0x208888: 0x431021
    ctx->pc = 0x208888u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20888c:
    // 0x20888c: 0x3c030031
    ctx->pc = 0x20888cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)49 << 16));
label_208890:
    // 0x208890: 0x246322a0
    ctx->pc = 0x208890u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8864));
label_208894:
    // 0x208894: 0x621021
    ctx->pc = 0x208894u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_208898:
    // 0x208898: 0x8c430000
    ctx->pc = 0x208898u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20889c:
    // 0x20889c: 0x24020002
    ctx->pc = 0x20889cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_2088a0:
    // 0x2088a0: 0x14620006
label_2088a4:
    if (ctx->pc == 0x2088A4u) {
        ctx->pc = 0x2088A8u;
        goto label_2088a8;
    }
    ctx->pc = 0x2088A0u;
    {
        const bool branch_taken_0x2088a0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2088a0) {
            ctx->pc = 0x2088BCu;
            goto label_2088bc;
        }
    }
    ctx->pc = 0x2088A8u;
label_2088a8:
    // 0x2088a8: 0x24020001
    ctx->pc = 0x2088a8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_2088ac:
    // 0x2088ac: 0x10000006
label_2088b0:
    if (ctx->pc == 0x2088B0u) {
        ctx->pc = 0x2088B4u;
        goto label_2088b4;
    }
    ctx->pc = 0x2088ACu;
    {
        const bool branch_taken_0x2088ac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2088ac) {
            ctx->pc = 0x2088C8u;
            goto label_2088c8;
        }
    }
    ctx->pc = 0x2088B4u;
label_2088b4:
    // 0x2088b4: 0x10000004
label_2088b8:
    if (ctx->pc == 0x2088B8u) {
        ctx->pc = 0x2088BCu;
        goto label_2088bc;
    }
    ctx->pc = 0x2088B4u;
    {
        const bool branch_taken_0x2088b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2088b4) {
            ctx->pc = 0x2088C8u;
            goto label_2088c8;
        }
    }
    ctx->pc = 0x2088BCu;
label_2088bc:
    // 0x2088bc: 0x2402ffff
    ctx->pc = 0x2088bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
label_2088c0:
    // 0x2088c0: 0x10000001
label_2088c4:
    if (ctx->pc == 0x2088C4u) {
        ctx->pc = 0x2088C8u;
        goto label_2088c8;
    }
    ctx->pc = 0x2088C0u;
    {
        const bool branch_taken_0x2088c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2088c0) {
            ctx->pc = 0x2088C8u;
            goto label_2088c8;
        }
    }
    ctx->pc = 0x2088C8u;
label_2088c8:
    // 0x2088c8: 0x3c0e82d
    ctx->pc = 0x2088c8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2088cc:
    // 0x2088cc: 0xdfbf0040
    ctx->pc = 0x2088ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2088d0:
    // 0x2088d0: 0xdfbe0030
    ctx->pc = 0x2088d0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2088d4:
    // 0x2088d4: 0xdfb00020
    ctx->pc = 0x2088d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2088d8:
    // 0x2088d8: 0x27bd0050
    ctx->pc = 0x2088d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
label_2088dc:
    // 0x2088dc: 0x3e00008
label_2088e0:
    if (ctx->pc == 0x2088E0u) {
        ctx->pc = 0x2088E4u;
        goto label_fallthrough_0x2088dc;
    }
    ctx->pc = 0x2088DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x208388u: goto label_208388;
            case 0x20838Cu: goto label_20838c;
            case 0x208390u: goto label_208390;
            case 0x208394u: goto label_208394;
            case 0x208398u: goto label_208398;
            case 0x20839Cu: goto label_20839c;
            case 0x2083A0u: goto label_2083a0;
            case 0x2083A4u: goto label_2083a4;
            case 0x2083A8u: goto label_2083a8;
            case 0x2083ACu: goto label_2083ac;
            case 0x2083B0u: goto label_2083b0;
            case 0x2083B4u: goto label_2083b4;
            case 0x2083B8u: goto label_2083b8;
            case 0x2083BCu: goto label_2083bc;
            case 0x2083C0u: goto label_2083c0;
            case 0x2083C4u: goto label_2083c4;
            case 0x2083C8u: goto label_2083c8;
            case 0x2083CCu: goto label_2083cc;
            case 0x2083D0u: goto label_2083d0;
            case 0x2083D4u: goto label_2083d4;
            case 0x2083D8u: goto label_2083d8;
            case 0x2083DCu: goto label_2083dc;
            case 0x2083E0u: goto label_2083e0;
            case 0x2083E4u: goto label_2083e4;
            case 0x2083E8u: goto label_2083e8;
            case 0x2083ECu: goto label_2083ec;
            case 0x2083F0u: goto label_2083f0;
            case 0x2083F4u: goto label_2083f4;
            case 0x2083F8u: goto label_2083f8;
            case 0x2083FCu: goto label_2083fc;
            case 0x208400u: goto label_208400;
            case 0x208404u: goto label_208404;
            case 0x208408u: goto label_208408;
            case 0x20840Cu: goto label_20840c;
            case 0x208410u: goto label_208410;
            case 0x208414u: goto label_208414;
            case 0x208418u: goto label_208418;
            case 0x20841Cu: goto label_20841c;
            case 0x208420u: goto label_208420;
            case 0x208424u: goto label_208424;
            case 0x208428u: goto label_208428;
            case 0x20842Cu: goto label_20842c;
            case 0x208430u: goto label_208430;
            case 0x208434u: goto label_208434;
            case 0x208438u: goto label_208438;
            case 0x20843Cu: goto label_20843c;
            case 0x208440u: goto label_208440;
            case 0x208444u: goto label_208444;
            case 0x208448u: goto label_208448;
            case 0x20844Cu: goto label_20844c;
            case 0x208450u: goto label_208450;
            case 0x208454u: goto label_208454;
            case 0x208458u: goto label_208458;
            case 0x20845Cu: goto label_20845c;
            case 0x208460u: goto label_208460;
            case 0x208464u: goto label_208464;
            case 0x208468u: goto label_208468;
            case 0x20846Cu: goto label_20846c;
            case 0x208470u: goto label_208470;
            case 0x208474u: goto label_208474;
            case 0x208478u: goto label_208478;
            case 0x20847Cu: goto label_20847c;
            case 0x208480u: goto label_208480;
            case 0x208484u: goto label_208484;
            case 0x208488u: goto label_208488;
            case 0x20848Cu: goto label_20848c;
            case 0x208490u: goto label_208490;
            case 0x208494u: goto label_208494;
            case 0x208498u: goto label_208498;
            case 0x20849Cu: goto label_20849c;
            case 0x2084A0u: goto label_2084a0;
            case 0x2084A4u: goto label_2084a4;
            case 0x2084A8u: goto label_2084a8;
            case 0x2084ACu: goto label_2084ac;
            case 0x2084B0u: goto label_2084b0;
            case 0x2084B4u: goto label_2084b4;
            case 0x2084B8u: goto label_2084b8;
            case 0x2084BCu: goto label_2084bc;
            case 0x2084C0u: goto label_2084c0;
            case 0x2084C4u: goto label_2084c4;
            case 0x2084C8u: goto label_2084c8;
            case 0x2084CCu: goto label_2084cc;
            case 0x2084D0u: goto label_2084d0;
            case 0x2084D4u: goto label_2084d4;
            case 0x2084D8u: goto label_2084d8;
            case 0x2084DCu: goto label_2084dc;
            case 0x2084E0u: goto label_2084e0;
            case 0x2084E4u: goto label_2084e4;
            case 0x2084E8u: goto label_2084e8;
            case 0x2084ECu: goto label_2084ec;
            case 0x2084F0u: goto label_2084f0;
            case 0x2084F4u: goto label_2084f4;
            case 0x2084F8u: goto label_2084f8;
            case 0x2084FCu: goto label_2084fc;
            case 0x208500u: goto label_208500;
            case 0x208504u: goto label_208504;
            case 0x208508u: goto label_208508;
            case 0x20850Cu: goto label_20850c;
            case 0x208510u: goto label_208510;
            case 0x208514u: goto label_208514;
            case 0x208518u: goto label_208518;
            case 0x20851Cu: goto label_20851c;
            case 0x208520u: goto label_208520;
            case 0x208524u: goto label_208524;
            case 0x208528u: goto label_208528;
            case 0x20852Cu: goto label_20852c;
            case 0x208530u: goto label_208530;
            case 0x208534u: goto label_208534;
            case 0x208538u: goto label_208538;
            case 0x20853Cu: goto label_20853c;
            case 0x208540u: goto label_208540;
            case 0x208544u: goto label_208544;
            case 0x208548u: goto label_208548;
            case 0x20854Cu: goto label_20854c;
            case 0x208550u: goto label_208550;
            case 0x208554u: goto label_208554;
            case 0x208558u: goto label_208558;
            case 0x20855Cu: goto label_20855c;
            case 0x208560u: goto label_208560;
            case 0x208564u: goto label_208564;
            case 0x208568u: goto label_208568;
            case 0x20856Cu: goto label_20856c;
            case 0x208570u: goto label_208570;
            case 0x208574u: goto label_208574;
            case 0x208578u: goto label_208578;
            case 0x20857Cu: goto label_20857c;
            case 0x208580u: goto label_208580;
            case 0x208584u: goto label_208584;
            case 0x208588u: goto label_208588;
            case 0x20858Cu: goto label_20858c;
            case 0x208590u: goto label_208590;
            case 0x208594u: goto label_208594;
            case 0x208598u: goto label_208598;
            case 0x20859Cu: goto label_20859c;
            case 0x2085A0u: goto label_2085a0;
            case 0x2085A4u: goto label_2085a4;
            case 0x2085A8u: goto label_2085a8;
            case 0x2085ACu: goto label_2085ac;
            case 0x2085B0u: goto label_2085b0;
            case 0x2085B4u: goto label_2085b4;
            case 0x2085B8u: goto label_2085b8;
            case 0x2085BCu: goto label_2085bc;
            case 0x2085C0u: goto label_2085c0;
            case 0x2085C4u: goto label_2085c4;
            case 0x2085C8u: goto label_2085c8;
            case 0x2085CCu: goto label_2085cc;
            case 0x2085D0u: goto label_2085d0;
            case 0x2085D4u: goto label_2085d4;
            case 0x2085D8u: goto label_2085d8;
            case 0x2085DCu: goto label_2085dc;
            case 0x2085E0u: goto label_2085e0;
            case 0x2085E4u: goto label_2085e4;
            case 0x2085E8u: goto label_2085e8;
            case 0x2085ECu: goto label_2085ec;
            case 0x2085F0u: goto label_2085f0;
            case 0x2085F4u: goto label_2085f4;
            case 0x2085F8u: goto label_2085f8;
            case 0x2085FCu: goto label_2085fc;
            case 0x208600u: goto label_208600;
            case 0x208604u: goto label_208604;
            case 0x208608u: goto label_208608;
            case 0x20860Cu: goto label_20860c;
            case 0x208610u: goto label_208610;
            case 0x208614u: goto label_208614;
            case 0x208618u: goto label_208618;
            case 0x20861Cu: goto label_20861c;
            case 0x208620u: goto label_208620;
            case 0x208624u: goto label_208624;
            case 0x208628u: goto label_208628;
            case 0x20862Cu: goto label_20862c;
            case 0x208630u: goto label_208630;
            case 0x208634u: goto label_208634;
            case 0x208638u: goto label_208638;
            case 0x20863Cu: goto label_20863c;
            case 0x208640u: goto label_208640;
            case 0x208644u: goto label_208644;
            case 0x208648u: goto label_208648;
            case 0x20864Cu: goto label_20864c;
            case 0x208650u: goto label_208650;
            case 0x208654u: goto label_208654;
            case 0x208658u: goto label_208658;
            case 0x20865Cu: goto label_20865c;
            case 0x208660u: goto label_208660;
            case 0x208664u: goto label_208664;
            case 0x208668u: goto label_208668;
            case 0x20866Cu: goto label_20866c;
            case 0x208670u: goto label_208670;
            case 0x208674u: goto label_208674;
            case 0x208678u: goto label_208678;
            case 0x20867Cu: goto label_20867c;
            case 0x208680u: goto label_208680;
            case 0x208684u: goto label_208684;
            case 0x208688u: goto label_208688;
            case 0x20868Cu: goto label_20868c;
            case 0x208690u: goto label_208690;
            case 0x208694u: goto label_208694;
            case 0x208698u: goto label_208698;
            case 0x20869Cu: goto label_20869c;
            case 0x2086A0u: goto label_2086a0;
            case 0x2086A4u: goto label_2086a4;
            case 0x2086A8u: goto label_2086a8;
            case 0x2086ACu: goto label_2086ac;
            case 0x2086B0u: goto label_2086b0;
            case 0x2086B4u: goto label_2086b4;
            case 0x2086B8u: goto label_2086b8;
            case 0x2086BCu: goto label_2086bc;
            case 0x2086C0u: goto label_2086c0;
            case 0x2086C4u: goto label_2086c4;
            case 0x2086C8u: goto label_2086c8;
            case 0x2086CCu: goto label_2086cc;
            case 0x2086D0u: goto label_2086d0;
            case 0x2086D4u: goto label_2086d4;
            case 0x2086D8u: goto label_2086d8;
            case 0x2086DCu: goto label_2086dc;
            case 0x2086E0u: goto label_2086e0;
            case 0x2086E4u: goto label_2086e4;
            case 0x2086E8u: goto label_2086e8;
            case 0x2086ECu: goto label_2086ec;
            case 0x2086F0u: goto label_2086f0;
            case 0x2086F4u: goto label_2086f4;
            case 0x2086F8u: goto label_2086f8;
            case 0x2086FCu: goto label_2086fc;
            case 0x208700u: goto label_208700;
            case 0x208704u: goto label_208704;
            case 0x208708u: goto label_208708;
            case 0x20870Cu: goto label_20870c;
            case 0x208710u: goto label_208710;
            case 0x208714u: goto label_208714;
            case 0x208718u: goto label_208718;
            case 0x20871Cu: goto label_20871c;
            case 0x208720u: goto label_208720;
            case 0x208724u: goto label_208724;
            case 0x208728u: goto label_208728;
            case 0x20872Cu: goto label_20872c;
            case 0x208730u: goto label_208730;
            case 0x208734u: goto label_208734;
            case 0x208738u: goto label_208738;
            case 0x20873Cu: goto label_20873c;
            case 0x208740u: goto label_208740;
            case 0x208744u: goto label_208744;
            case 0x208748u: goto label_208748;
            case 0x20874Cu: goto label_20874c;
            case 0x208750u: goto label_208750;
            case 0x208754u: goto label_208754;
            case 0x208758u: goto label_208758;
            case 0x20875Cu: goto label_20875c;
            case 0x208760u: goto label_208760;
            case 0x208764u: goto label_208764;
            case 0x208768u: goto label_208768;
            case 0x20876Cu: goto label_20876c;
            case 0x208770u: goto label_208770;
            case 0x208774u: goto label_208774;
            case 0x208778u: goto label_208778;
            case 0x20877Cu: goto label_20877c;
            case 0x208780u: goto label_208780;
            case 0x208784u: goto label_208784;
            case 0x208788u: goto label_208788;
            case 0x20878Cu: goto label_20878c;
            case 0x208790u: goto label_208790;
            case 0x208794u: goto label_208794;
            case 0x208798u: goto label_208798;
            case 0x20879Cu: goto label_20879c;
            case 0x2087A0u: goto label_2087a0;
            case 0x2087A4u: goto label_2087a4;
            case 0x2087A8u: goto label_2087a8;
            case 0x2087ACu: goto label_2087ac;
            case 0x2087B0u: goto label_2087b0;
            case 0x2087B4u: goto label_2087b4;
            case 0x2087B8u: goto label_2087b8;
            case 0x2087BCu: goto label_2087bc;
            case 0x2087C0u: goto label_2087c0;
            case 0x2087C4u: goto label_2087c4;
            case 0x2087C8u: goto label_2087c8;
            case 0x2087CCu: goto label_2087cc;
            case 0x2087D0u: goto label_2087d0;
            case 0x2087D4u: goto label_2087d4;
            case 0x2087D8u: goto label_2087d8;
            case 0x2087DCu: goto label_2087dc;
            case 0x2087E0u: goto label_2087e0;
            case 0x2087E4u: goto label_2087e4;
            case 0x2087E8u: goto label_2087e8;
            case 0x2087ECu: goto label_2087ec;
            case 0x2087F0u: goto label_2087f0;
            case 0x2087F4u: goto label_2087f4;
            case 0x2087F8u: goto label_2087f8;
            case 0x2087FCu: goto label_2087fc;
            case 0x208800u: goto label_208800;
            case 0x208804u: goto label_208804;
            case 0x208808u: goto label_208808;
            case 0x20880Cu: goto label_20880c;
            case 0x208810u: goto label_208810;
            case 0x208814u: goto label_208814;
            case 0x208818u: goto label_208818;
            case 0x20881Cu: goto label_20881c;
            case 0x208820u: goto label_208820;
            case 0x208824u: goto label_208824;
            case 0x208828u: goto label_208828;
            case 0x20882Cu: goto label_20882c;
            case 0x208830u: goto label_208830;
            case 0x208834u: goto label_208834;
            case 0x208838u: goto label_208838;
            case 0x20883Cu: goto label_20883c;
            case 0x208840u: goto label_208840;
            case 0x208844u: goto label_208844;
            case 0x208848u: goto label_208848;
            case 0x20884Cu: goto label_20884c;
            case 0x208850u: goto label_208850;
            case 0x208854u: goto label_208854;
            case 0x208858u: goto label_208858;
            case 0x20885Cu: goto label_20885c;
            case 0x208860u: goto label_208860;
            case 0x208864u: goto label_208864;
            case 0x208868u: goto label_208868;
            case 0x20886Cu: goto label_20886c;
            case 0x208870u: goto label_208870;
            case 0x208874u: goto label_208874;
            case 0x208878u: goto label_208878;
            case 0x20887Cu: goto label_20887c;
            case 0x208880u: goto label_208880;
            case 0x208884u: goto label_208884;
            case 0x208888u: goto label_208888;
            case 0x20888Cu: goto label_20888c;
            case 0x208890u: goto label_208890;
            case 0x208894u: goto label_208894;
            case 0x208898u: goto label_208898;
            case 0x20889Cu: goto label_20889c;
            case 0x2088A0u: goto label_2088a0;
            case 0x2088A4u: goto label_2088a4;
            case 0x2088A8u: goto label_2088a8;
            case 0x2088ACu: goto label_2088ac;
            case 0x2088B0u: goto label_2088b0;
            case 0x2088B4u: goto label_2088b4;
            case 0x2088B8u: goto label_2088b8;
            case 0x2088BCu: goto label_2088bc;
            case 0x2088C0u: goto label_2088c0;
            case 0x2088C4u: goto label_2088c4;
            case 0x2088C8u: goto label_2088c8;
            case 0x2088CCu: goto label_2088cc;
            case 0x2088D0u: goto label_2088d0;
            case 0x2088D4u: goto label_2088d4;
            case 0x2088D8u: goto label_2088d8;
            case 0x2088DCu: goto label_2088dc;
            case 0x2088E0u: goto label_2088e0;
            default: break;
        }
        return;
    }
label_fallthrough_0x2088dc:
    ctx->pc = 0x2088E4u;
}
