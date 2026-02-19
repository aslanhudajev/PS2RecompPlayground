#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StartExplosion
// Address: 0x27e3e0 - 0x27e788
void StartExplosion_0x27e3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27e3e0u;

label_27e3e0:
    // 0x27e3e0: 0x27bdff50
    ctx->pc = 0x27e3e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
label_27e3e4:
    // 0x27e3e4: 0xffbf0060
    ctx->pc = 0x27e3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_27e3e8:
    // 0x27e3e8: 0xffb40050
    ctx->pc = 0x27e3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_27e3ec:
    // 0x27e3ec: 0xffb30040
    ctx->pc = 0x27e3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_27e3f0:
    // 0x27e3f0: 0xffb20030
    ctx->pc = 0x27e3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_27e3f4:
    // 0x27e3f4: 0xffb10020
    ctx->pc = 0x27e3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_27e3f8:
    // 0x27e3f8: 0xffb00010
    ctx->pc = 0x27e3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_27e3fc:
    // 0x27e3fc: 0xe7bb00a8
    ctx->pc = 0x27e3fcu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_27e400:
    // 0x27e400: 0xe7ba00a0
    ctx->pc = 0x27e400u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_27e404:
    // 0x27e404: 0xe7b90098
    ctx->pc = 0x27e404u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_27e408:
    // 0x27e408: 0xe7b80090
    ctx->pc = 0x27e408u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_27e40c:
    // 0x27e40c: 0xe7b70088
    ctx->pc = 0x27e40cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_27e410:
    // 0x27e410: 0xe7b60080
    ctx->pc = 0x27e410u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_27e414:
    // 0x27e414: 0xe7b50078
    ctx->pc = 0x27e414u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_27e418:
    // 0x27e418: 0xe7b40070
    ctx->pc = 0x27e418u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_27e41c:
    // 0x27e41c: 0x80982d
    ctx->pc = 0x27e41cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27e420:
    // 0x27e420: 0x46006546
    ctx->pc = 0x27e420u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_27e424:
    // 0x27e424: 0xa0902d
    ctx->pc = 0x27e424u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27e428:
    // 0x27e428: 0x24040016
    ctx->pc = 0x27e428u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 22));
label_27e42c:
    // 0x27e42c: 0x3a42001d
    ctx->pc = 0x27e42cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 18), 29));
label_27e430:
    // 0x27e430: 0x242200b
    ctx->pc = 0x27e430u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 18));
label_27e434:
    // 0x27e434: 0x26650030
    ctx->pc = 0x27e434u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 19), 48));
label_27e438:
    // 0x27e438: 0x302d
    ctx->pc = 0x27e438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27e43c:
    // 0x27e43c: 0x44806000
    ctx->pc = 0x27e43cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_27e440:
    // 0x27e440: 0x2407002b
    ctx->pc = 0x27e440u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 43));
label_27e444:
    // 0x27e444: 0x402d
    ctx->pc = 0x27e444u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27e448:
    // 0x27e448: 0x24090004
    ctx->pc = 0x27e448u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 4));
label_27e44c:
    // 0x27e44c: 0xc09f832
label_27e450:
    if (ctx->pc == 0x27E450u) {
        ctx->pc = 0x27E450u;
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E454u;
        goto label_27e454;
    }
    ctx->pc = 0x27E44Cu;
    SET_GPR_U32(ctx, 31, 0x27E454u);
    ctx->pc = 0x27E450u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27E0C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXMissile_0x27e0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E454u; }
    }
    if (ctx->pc != 0x27E454u) { return; }
    ctx->pc = 0x27E454u;
label_27e454:
    // 0x27e454: 0x40882d
    ctx->pc = 0x27e454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e458:
    // 0x27e458: 0x2643ffea
    ctx->pc = 0x27e458u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 4294967274));
label_27e45c:
    // 0x27e45c: 0x2c620008
    ctx->pc = 0x27e45cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), 8));
label_27e460:
    // 0x27e460: 0x1040003f
label_27e464:
    if (ctx->pc == 0x27E464u) {
        ctx->pc = 0x27E464u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        ctx->pc = 0x27E468u;
        goto label_27e468;
    }
    ctx->pc = 0x27E460u;
    {
        const bool branch_taken_0x27e460 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27E464u;
        SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
        if (branch_taken_0x27e460) {
            ctx->pc = 0x27E560u;
            goto label_27e560;
        }
    }
    ctx->pc = 0x27E468u;
label_27e468:
    // 0x27e468: 0x2442bf20
    ctx->pc = 0x27e468u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294950688));
label_27e46c:
    // 0x27e46c: 0x31880
    ctx->pc = 0x27e46cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
label_27e470:
    // 0x27e470: 0x621821
    ctx->pc = 0x27e470u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_27e474:
    // 0x27e474: 0x8c620000
    ctx->pc = 0x27e474u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_27e478:
    // 0x27e478: 0x400008
label_27e47c:
    if (ctx->pc == 0x27E47Cu) {
        ctx->pc = 0x27E480u;
        goto label_27e480;
    }
    ctx->pc = 0x27E478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27E3E0u: goto label_27e3e0;
            case 0x27E3E4u: goto label_27e3e4;
            case 0x27E3E8u: goto label_27e3e8;
            case 0x27E3ECu: goto label_27e3ec;
            case 0x27E3F0u: goto label_27e3f0;
            case 0x27E3F4u: goto label_27e3f4;
            case 0x27E3F8u: goto label_27e3f8;
            case 0x27E3FCu: goto label_27e3fc;
            case 0x27E400u: goto label_27e400;
            case 0x27E404u: goto label_27e404;
            case 0x27E408u: goto label_27e408;
            case 0x27E40Cu: goto label_27e40c;
            case 0x27E410u: goto label_27e410;
            case 0x27E414u: goto label_27e414;
            case 0x27E418u: goto label_27e418;
            case 0x27E41Cu: goto label_27e41c;
            case 0x27E420u: goto label_27e420;
            case 0x27E424u: goto label_27e424;
            case 0x27E428u: goto label_27e428;
            case 0x27E42Cu: goto label_27e42c;
            case 0x27E430u: goto label_27e430;
            case 0x27E434u: goto label_27e434;
            case 0x27E438u: goto label_27e438;
            case 0x27E43Cu: goto label_27e43c;
            case 0x27E440u: goto label_27e440;
            case 0x27E444u: goto label_27e444;
            case 0x27E448u: goto label_27e448;
            case 0x27E44Cu: goto label_27e44c;
            case 0x27E450u: goto label_27e450;
            case 0x27E454u: goto label_27e454;
            case 0x27E458u: goto label_27e458;
            case 0x27E45Cu: goto label_27e45c;
            case 0x27E460u: goto label_27e460;
            case 0x27E464u: goto label_27e464;
            case 0x27E468u: goto label_27e468;
            case 0x27E46Cu: goto label_27e46c;
            case 0x27E470u: goto label_27e470;
            case 0x27E474u: goto label_27e474;
            case 0x27E478u: goto label_27e478;
            case 0x27E47Cu: goto label_27e47c;
            case 0x27E480u: goto label_27e480;
            case 0x27E484u: goto label_27e484;
            case 0x27E488u: goto label_27e488;
            case 0x27E48Cu: goto label_27e48c;
            case 0x27E490u: goto label_27e490;
            case 0x27E494u: goto label_27e494;
            case 0x27E498u: goto label_27e498;
            case 0x27E49Cu: goto label_27e49c;
            case 0x27E4A0u: goto label_27e4a0;
            case 0x27E4A4u: goto label_27e4a4;
            case 0x27E4A8u: goto label_27e4a8;
            case 0x27E4ACu: goto label_27e4ac;
            case 0x27E4B0u: goto label_27e4b0;
            case 0x27E4B4u: goto label_27e4b4;
            case 0x27E4B8u: goto label_27e4b8;
            case 0x27E4BCu: goto label_27e4bc;
            case 0x27E4C0u: goto label_27e4c0;
            case 0x27E4C4u: goto label_27e4c4;
            case 0x27E4C8u: goto label_27e4c8;
            case 0x27E4CCu: goto label_27e4cc;
            case 0x27E4D0u: goto label_27e4d0;
            case 0x27E4D4u: goto label_27e4d4;
            case 0x27E4D8u: goto label_27e4d8;
            case 0x27E4DCu: goto label_27e4dc;
            case 0x27E4E0u: goto label_27e4e0;
            case 0x27E4E4u: goto label_27e4e4;
            case 0x27E4E8u: goto label_27e4e8;
            case 0x27E4ECu: goto label_27e4ec;
            case 0x27E4F0u: goto label_27e4f0;
            case 0x27E4F4u: goto label_27e4f4;
            case 0x27E4F8u: goto label_27e4f8;
            case 0x27E4FCu: goto label_27e4fc;
            case 0x27E500u: goto label_27e500;
            case 0x27E504u: goto label_27e504;
            case 0x27E508u: goto label_27e508;
            case 0x27E50Cu: goto label_27e50c;
            case 0x27E510u: goto label_27e510;
            case 0x27E514u: goto label_27e514;
            case 0x27E518u: goto label_27e518;
            case 0x27E51Cu: goto label_27e51c;
            case 0x27E520u: goto label_27e520;
            case 0x27E524u: goto label_27e524;
            case 0x27E528u: goto label_27e528;
            case 0x27E52Cu: goto label_27e52c;
            case 0x27E530u: goto label_27e530;
            case 0x27E534u: goto label_27e534;
            case 0x27E538u: goto label_27e538;
            case 0x27E53Cu: goto label_27e53c;
            case 0x27E540u: goto label_27e540;
            case 0x27E544u: goto label_27e544;
            case 0x27E548u: goto label_27e548;
            case 0x27E54Cu: goto label_27e54c;
            case 0x27E550u: goto label_27e550;
            case 0x27E554u: goto label_27e554;
            case 0x27E558u: goto label_27e558;
            case 0x27E55Cu: goto label_27e55c;
            case 0x27E560u: goto label_27e560;
            case 0x27E564u: goto label_27e564;
            case 0x27E568u: goto label_27e568;
            case 0x27E56Cu: goto label_27e56c;
            case 0x27E570u: goto label_27e570;
            case 0x27E574u: goto label_27e574;
            case 0x27E578u: goto label_27e578;
            case 0x27E57Cu: goto label_27e57c;
            case 0x27E580u: goto label_27e580;
            case 0x27E584u: goto label_27e584;
            case 0x27E588u: goto label_27e588;
            case 0x27E58Cu: goto label_27e58c;
            case 0x27E590u: goto label_27e590;
            case 0x27E594u: goto label_27e594;
            case 0x27E598u: goto label_27e598;
            case 0x27E59Cu: goto label_27e59c;
            case 0x27E5A0u: goto label_27e5a0;
            case 0x27E5A4u: goto label_27e5a4;
            case 0x27E5A8u: goto label_27e5a8;
            case 0x27E5ACu: goto label_27e5ac;
            case 0x27E5B0u: goto label_27e5b0;
            case 0x27E5B4u: goto label_27e5b4;
            case 0x27E5B8u: goto label_27e5b8;
            case 0x27E5BCu: goto label_27e5bc;
            case 0x27E5C0u: goto label_27e5c0;
            case 0x27E5C4u: goto label_27e5c4;
            case 0x27E5C8u: goto label_27e5c8;
            case 0x27E5CCu: goto label_27e5cc;
            case 0x27E5D0u: goto label_27e5d0;
            case 0x27E5D4u: goto label_27e5d4;
            case 0x27E5D8u: goto label_27e5d8;
            case 0x27E5DCu: goto label_27e5dc;
            case 0x27E5E0u: goto label_27e5e0;
            case 0x27E5E4u: goto label_27e5e4;
            case 0x27E5E8u: goto label_27e5e8;
            case 0x27E5ECu: goto label_27e5ec;
            case 0x27E5F0u: goto label_27e5f0;
            case 0x27E5F4u: goto label_27e5f4;
            case 0x27E5F8u: goto label_27e5f8;
            case 0x27E5FCu: goto label_27e5fc;
            case 0x27E600u: goto label_27e600;
            case 0x27E604u: goto label_27e604;
            case 0x27E608u: goto label_27e608;
            case 0x27E60Cu: goto label_27e60c;
            case 0x27E610u: goto label_27e610;
            case 0x27E614u: goto label_27e614;
            case 0x27E618u: goto label_27e618;
            case 0x27E61Cu: goto label_27e61c;
            case 0x27E620u: goto label_27e620;
            case 0x27E624u: goto label_27e624;
            case 0x27E628u: goto label_27e628;
            case 0x27E62Cu: goto label_27e62c;
            case 0x27E630u: goto label_27e630;
            case 0x27E634u: goto label_27e634;
            case 0x27E638u: goto label_27e638;
            case 0x27E63Cu: goto label_27e63c;
            case 0x27E640u: goto label_27e640;
            case 0x27E644u: goto label_27e644;
            case 0x27E648u: goto label_27e648;
            case 0x27E64Cu: goto label_27e64c;
            case 0x27E650u: goto label_27e650;
            case 0x27E654u: goto label_27e654;
            case 0x27E658u: goto label_27e658;
            case 0x27E65Cu: goto label_27e65c;
            case 0x27E660u: goto label_27e660;
            case 0x27E664u: goto label_27e664;
            case 0x27E668u: goto label_27e668;
            case 0x27E66Cu: goto label_27e66c;
            case 0x27E670u: goto label_27e670;
            case 0x27E674u: goto label_27e674;
            case 0x27E678u: goto label_27e678;
            case 0x27E67Cu: goto label_27e67c;
            case 0x27E680u: goto label_27e680;
            case 0x27E684u: goto label_27e684;
            case 0x27E688u: goto label_27e688;
            case 0x27E68Cu: goto label_27e68c;
            case 0x27E690u: goto label_27e690;
            case 0x27E694u: goto label_27e694;
            case 0x27E698u: goto label_27e698;
            case 0x27E69Cu: goto label_27e69c;
            case 0x27E6A0u: goto label_27e6a0;
            case 0x27E6A4u: goto label_27e6a4;
            case 0x27E6A8u: goto label_27e6a8;
            case 0x27E6ACu: goto label_27e6ac;
            case 0x27E6B0u: goto label_27e6b0;
            case 0x27E6B4u: goto label_27e6b4;
            case 0x27E6B8u: goto label_27e6b8;
            case 0x27E6BCu: goto label_27e6bc;
            case 0x27E6C0u: goto label_27e6c0;
            case 0x27E6C4u: goto label_27e6c4;
            case 0x27E6C8u: goto label_27e6c8;
            case 0x27E6CCu: goto label_27e6cc;
            case 0x27E6D0u: goto label_27e6d0;
            case 0x27E6D4u: goto label_27e6d4;
            case 0x27E6D8u: goto label_27e6d8;
            case 0x27E6DCu: goto label_27e6dc;
            case 0x27E6E0u: goto label_27e6e0;
            case 0x27E6E4u: goto label_27e6e4;
            case 0x27E6E8u: goto label_27e6e8;
            case 0x27E6ECu: goto label_27e6ec;
            case 0x27E6F0u: goto label_27e6f0;
            case 0x27E6F4u: goto label_27e6f4;
            case 0x27E6F8u: goto label_27e6f8;
            case 0x27E6FCu: goto label_27e6fc;
            case 0x27E700u: goto label_27e700;
            case 0x27E704u: goto label_27e704;
            case 0x27E708u: goto label_27e708;
            case 0x27E70Cu: goto label_27e70c;
            case 0x27E710u: goto label_27e710;
            case 0x27E714u: goto label_27e714;
            case 0x27E718u: goto label_27e718;
            case 0x27E71Cu: goto label_27e71c;
            case 0x27E720u: goto label_27e720;
            case 0x27E724u: goto label_27e724;
            case 0x27E728u: goto label_27e728;
            case 0x27E72Cu: goto label_27e72c;
            case 0x27E730u: goto label_27e730;
            case 0x27E734u: goto label_27e734;
            case 0x27E738u: goto label_27e738;
            case 0x27E73Cu: goto label_27e73c;
            case 0x27E740u: goto label_27e740;
            case 0x27E744u: goto label_27e744;
            case 0x27E748u: goto label_27e748;
            case 0x27E74Cu: goto label_27e74c;
            case 0x27E750u: goto label_27e750;
            case 0x27E754u: goto label_27e754;
            case 0x27E758u: goto label_27e758;
            case 0x27E75Cu: goto label_27e75c;
            case 0x27E760u: goto label_27e760;
            case 0x27E764u: goto label_27e764;
            case 0x27E768u: goto label_27e768;
            case 0x27E76Cu: goto label_27e76c;
            case 0x27E770u: goto label_27e770;
            case 0x27E774u: goto label_27e774;
            case 0x27E778u: goto label_27e778;
            case 0x27E77Cu: goto label_27e77c;
            case 0x27E780u: goto label_27e780;
            case 0x27E784u: goto label_27e784;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27E480u;
label_27e480:
    // 0x27e480: 0x24140421
    ctx->pc = 0x27e480u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1057));
label_27e484:
    // 0x27e484: 0x3c014140
    ctx->pc = 0x27e484u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16704 << 16));
label_27e488:
    // 0x27e488: 0x4481a000
    ctx->pc = 0x27e488u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_27e48c:
    // 0x27e48c: 0x220202d
    ctx->pc = 0x27e48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27e490:
    // 0x27e490: 0x3c014020
    ctx->pc = 0x27e490u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16416 << 16));
label_27e494:
    // 0x27e494: 0x44816000
    ctx->pc = 0x27e494u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_27e498:
    // 0x27e498: 0x3c013f80
    ctx->pc = 0x27e498u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_27e49c:
    // 0x27e49c: 0x44816800
    ctx->pc = 0x27e49cu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
label_27e4a0:
    // 0x27e4a0: 0xc09f63e
label_27e4a4:
    if (ctx->pc == 0x27E4A4u) {
        ctx->pc = 0x27E4A4u;
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x27E4A8u;
        goto label_27e4a8;
    }
    ctx->pc = 0x27E4A0u;
    SET_GPR_U32(ctx, 31, 0x27E4A8u);
    ctx->pc = 0x27E4A4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x27D8F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScaleFX_0x27d8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E4A8u; }
    }
    if (ctx->pc != 0x27E4A8u) { return; }
    ctx->pc = 0x27E4A8u;
label_27e4a8:
    // 0x27e4a8: 0x3c030034
    ctx->pc = 0x27e4a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_27e4ac:
    // 0x27e4ac: 0x24630eb0
    ctx->pc = 0x27e4acu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
label_27e4b0:
    // 0x27e4b0: 0x240200f0
    ctx->pc = 0x27e4b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
label_27e4b4:
    // 0x27e4b4: 0x2221018
    ctx->pc = 0x27e4b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_27e4b8:
    // 0x27e4b8: 0x431021
    ctx->pc = 0x27e4b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27e4bc:
    // 0x27e4bc: 0x8c420014
    ctx->pc = 0x27e4bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_27e4c0:
    // 0x27e4c0: 0xc4400034
    ctx->pc = 0x27e4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27e4c4:
    // 0x27e4c4: 0x3c014040
    ctx->pc = 0x27e4c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
label_27e4c8:
    // 0x27e4c8: 0x44810800
    ctx->pc = 0x27e4c8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_27e4cc:
    // 0x27e4cc: 0x46010000
    ctx->pc = 0x27e4ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_27e4d0:
    // 0x27e4d0: 0xe4400034
    ctx->pc = 0x27e4d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_27e4d4:
    // 0x27e4d4: 0x26700030
    ctx->pc = 0x27e4d4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 48));
label_27e4d8:
    // 0x27e4d8: 0x2404001d
    ctx->pc = 0x27e4d8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 29));
label_27e4dc:
    // 0x27e4dc: 0x200282d
    ctx->pc = 0x27e4dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27e4e0:
    // 0x27e4e0: 0x44806000
    ctx->pc = 0x27e4e0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
label_27e4e4:
    // 0x27e4e4: 0x302d
    ctx->pc = 0x27e4e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27e4e8:
    // 0x27e4e8: 0xc09f5fa
label_27e4ec:
    if (ctx->pc == 0x27E4ECu) {
        ctx->pc = 0x27E4ECu;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E4F0u;
        goto label_27e4f0;
    }
    ctx->pc = 0x27E4E8u;
    SET_GPR_U32(ctx, 31, 0x27E4F0u);
    ctx->pc = 0x27E4ECu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E4F0u; }
    }
    if (ctx->pc != 0x27E4F0u) { return; }
    ctx->pc = 0x27E4F0u;
label_27e4f0:
    // 0x27e4f0: 0x40202d
    ctx->pc = 0x27e4f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27e4f4:
    // 0x27e4f4: 0x260282d
    ctx->pc = 0x27e4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27e4f8:
    // 0x27e4f8: 0xc09f748
label_27e4fc:
    if (ctx->pc == 0x27E4FCu) {
        ctx->pc = 0x27E4FCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E500u;
        goto label_27e500;
    }
    ctx->pc = 0x27E4F8u;
    SET_GPR_U32(ctx, 31, 0x27E500u);
    ctx->pc = 0x27E4FCu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27DD20u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetMat_0x27dd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E500u; }
    }
    if (ctx->pc != 0x27E500u) { return; }
    ctx->pc = 0x27E500u;
label_27e500:
    // 0x27e500: 0x10000042
label_27e504:
    if (ctx->pc == 0x27E504u) {
        ctx->pc = 0x27E504u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x27E508u;
        goto label_27e508;
    }
    ctx->pc = 0x27E500u;
    {
        const bool branch_taken_0x27e500 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27E504u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 1));
        if (branch_taken_0x27e500) {
            ctx->pc = 0x27E60Cu;
            goto label_27e60c;
        }
    }
    ctx->pc = 0x27E508u;
label_27e508:
    // 0x27e508: 0x24140421
    ctx->pc = 0x27e508u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1057));
label_27e50c:
    // 0x27e50c: 0x3c014140
    ctx->pc = 0x27e50cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16704 << 16));
label_27e510:
    // 0x27e510: 0x4481a000
    ctx->pc = 0x27e510u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_27e514:
    // 0x27e514: 0x220202d
    ctx->pc = 0x27e514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27e518:
    // 0x27e518: 0x3c013fe0
    ctx->pc = 0x27e518u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16352 << 16));
label_27e51c:
    // 0x27e51c: 0x44816000
    ctx->pc = 0x27e51cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_27e520:
    // 0x27e520: 0x3c013f80
    ctx->pc = 0x27e520u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_27e524:
    // 0x27e524: 0x44816800
    ctx->pc = 0x27e524u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
label_27e528:
    // 0x27e528: 0xc09f63e
label_27e52c:
    if (ctx->pc == 0x27E52Cu) {
        ctx->pc = 0x27E52Cu;
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x27E530u;
        goto label_27e530;
    }
    ctx->pc = 0x27E528u;
    SET_GPR_U32(ctx, 31, 0x27E530u);
    ctx->pc = 0x27E52Cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x27D8F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScaleFX_0x27d8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E530u; }
    }
    if (ctx->pc != 0x27E530u) { return; }
    ctx->pc = 0x27E530u;
label_27e530:
    // 0x27e530: 0x3c030034
    ctx->pc = 0x27e530u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_27e534:
    // 0x27e534: 0x24630eb0
    ctx->pc = 0x27e534u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
label_27e538:
    // 0x27e538: 0x240200f0
    ctx->pc = 0x27e538u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
label_27e53c:
    // 0x27e53c: 0x2221018
    ctx->pc = 0x27e53cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_27e540:
    // 0x27e540: 0x431021
    ctx->pc = 0x27e540u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27e544:
    // 0x27e544: 0x8c420014
    ctx->pc = 0x27e544u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_27e548:
    // 0x27e548: 0xc4400034
    ctx->pc = 0x27e548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27e54c:
    // 0x27e54c: 0x3c014000
    ctx->pc = 0x27e54cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
label_27e550:
    // 0x27e550: 0x44810800
    ctx->pc = 0x27e550u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
label_27e554:
    // 0x27e554: 0x46010000
    ctx->pc = 0x27e554u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_27e558:
    // 0x27e558: 0x1000002b
label_27e55c:
    if (ctx->pc == 0x27E55Cu) {
        ctx->pc = 0x27E55Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
        ctx->pc = 0x27E560u;
        goto label_27e560;
    }
    ctx->pc = 0x27E558u;
    {
        const bool branch_taken_0x27e558 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27E55Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
        if (branch_taken_0x27e558) {
            ctx->pc = 0x27E608u;
            goto label_27e608;
        }
    }
    ctx->pc = 0x27E560u;
label_27e560:
    // 0x27e560: 0x24140421
    ctx->pc = 0x27e560u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1057));
label_27e564:
    // 0x27e564: 0x3c0140c0
    ctx->pc = 0x27e564u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16576 << 16));
label_27e568:
    // 0x27e568: 0x4481a000
    ctx->pc = 0x27e568u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_27e56c:
    // 0x27e56c: 0x220202d
    ctx->pc = 0x27e56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27e570:
    // 0x27e570: 0x3c013fc0
    ctx->pc = 0x27e570u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16320 << 16));
label_27e574:
    // 0x27e574: 0x44816000
    ctx->pc = 0x27e574u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_27e578:
    // 0x27e578: 0x3c013f80
    ctx->pc = 0x27e578u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_27e57c:
    // 0x27e57c: 0x44816800
    ctx->pc = 0x27e57cu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
label_27e580:
    // 0x27e580: 0xc09f63e
label_27e584:
    if (ctx->pc == 0x27E584u) {
        ctx->pc = 0x27E584u;
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x27E588u;
        goto label_27e588;
    }
    ctx->pc = 0x27E580u;
    SET_GPR_U32(ctx, 31, 0x27E588u);
    ctx->pc = 0x27E584u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x27D8F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScaleFX_0x27d8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E588u; }
    }
    if (ctx->pc != 0x27E588u) { return; }
    ctx->pc = 0x27E588u;
label_27e588:
    // 0x27e588: 0x10000020
label_27e58c:
    if (ctx->pc == 0x27E58Cu) {
        ctx->pc = 0x27E58Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x27E590u;
        goto label_27e590;
    }
    ctx->pc = 0x27E588u;
    {
        const bool branch_taken_0x27e588 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27E58Cu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 1));
        if (branch_taken_0x27e588) {
            ctx->pc = 0x27E60Cu;
            goto label_27e60c;
        }
    }
    ctx->pc = 0x27E590u;
label_27e590:
    // 0x27e590: 0x3c014080
    ctx->pc = 0x27e590u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16512 << 16));
label_27e594:
    // 0x27e594: 0x4481a000
    ctx->pc = 0x27e594u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_27e598:
    // 0x27e598: 0x1000001b
label_27e59c:
    if (ctx->pc == 0x27E59Cu) {
        ctx->pc = 0x27E59Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x27E5A0u;
        goto label_27e5a0;
    }
    ctx->pc = 0x27E598u;
    {
        const bool branch_taken_0x27e598 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27E59Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 17));
        if (branch_taken_0x27e598) {
            ctx->pc = 0x27E608u;
            goto label_27e608;
        }
    }
    ctx->pc = 0x27E5A0u;
label_27e5a0:
    // 0x27e5a0: 0x24140800
    ctx->pc = 0x27e5a0u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 2048));
label_27e5a4:
    // 0x27e5a4: 0x3c0140d0
    ctx->pc = 0x27e5a4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16592 << 16));
label_27e5a8:
    // 0x27e5a8: 0x4481a000
    ctx->pc = 0x27e5a8u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_27e5ac:
    // 0x27e5ac: 0x3c030034
    ctx->pc = 0x27e5acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
label_27e5b0:
    // 0x27e5b0: 0x24630eb0
    ctx->pc = 0x27e5b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 3760));
label_27e5b4:
    // 0x27e5b4: 0x240200f0
    ctx->pc = 0x27e5b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 240));
label_27e5b8:
    // 0x27e5b8: 0x2221018
    ctx->pc = 0x27e5b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_27e5bc:
    // 0x27e5bc: 0x431021
    ctx->pc = 0x27e5bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27e5c0:
    // 0x27e5c0: 0x8c420014
    ctx->pc = 0x27e5c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_27e5c4:
    // 0x27e5c4: 0xc4400034
    ctx->pc = 0x27e5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27e5c8:
    // 0x27e5c8: 0x44800800
    ctx->pc = 0x27e5c8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
label_27e5cc:
    // 0x27e5cc: 0x46010000
    ctx->pc = 0x27e5ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_27e5d0:
    // 0x27e5d0: 0xe4400034
    ctx->pc = 0x27e5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_27e5d4:
    // 0x27e5d4: 0x220202d
    ctx->pc = 0x27e5d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27e5d8:
    // 0x27e5d8: 0x2405001a
    ctx->pc = 0x27e5d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 26));
label_27e5dc:
    // 0x27e5dc: 0x3c014080
    ctx->pc = 0x27e5dcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16512 << 16));
label_27e5e0:
    // 0x27e5e0: 0x44816000
    ctx->pc = 0x27e5e0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_27e5e4:
    // 0x27e5e4: 0xc09f802
label_27e5e8:
    if (ctx->pc == 0x27E5E8u) {
        ctx->pc = 0x27E5E8u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 27));
        ctx->pc = 0x27E5ECu;
        goto label_27e5ec;
    }
    ctx->pc = 0x27E5E4u;
    SET_GPR_U32(ctx, 31, 0x27E5ECu);
    ctx->pc = 0x27E5E8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 27));
    ctx->pc = 0x27E008u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetMorph_0x27e008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E5ECu; }
    }
    if (ctx->pc != 0x27E5ECu) { return; }
    ctx->pc = 0x27E5ECu;
label_27e5ec:
    // 0x27e5ec: 0x220202d
    ctx->pc = 0x27e5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27e5f0:
    // 0x27e5f0: 0x3c014060
    ctx->pc = 0x27e5f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16480 << 16));
label_27e5f4:
    // 0x27e5f4: 0x44816000
    ctx->pc = 0x27e5f4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_27e5f8:
    // 0x27e5f8: 0x3c013f80
    ctx->pc = 0x27e5f8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
label_27e5fc:
    // 0x27e5fc: 0x44816800
    ctx->pc = 0x27e5fcu;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
label_27e600:
    // 0x27e600: 0xc09f63e
label_27e604:
    if (ctx->pc == 0x27E604u) {
        ctx->pc = 0x27E604u;
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x27E608u;
        goto label_27e608;
    }
    ctx->pc = 0x27E600u;
    SET_GPR_U32(ctx, 31, 0x27E608u);
    ctx->pc = 0x27E604u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x27D8F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScaleFX_0x27d8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E608u; }
    }
    if (ctx->pc != 0x27E608u) { return; }
    ctx->pc = 0x27E608u;
label_27e608:
    // 0x27e608: 0x32820001
    ctx->pc = 0x27e608u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 20), 1));
label_27e60c:
    // 0x27e60c: 0x10400005
label_27e610:
    if (ctx->pc == 0x27E610u) {
        ctx->pc = 0x27E610u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E614u;
        goto label_27e614;
    }
    ctx->pc = 0x27E60Cu;
    {
        const bool branch_taken_0x27e60c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x27E610u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27e60c) {
            ctx->pc = 0x27E624u;
            goto label_27e624;
        }
    }
    ctx->pc = 0x27E614u;
label_27e614:
    // 0x27e614: 0x4614a300
    ctx->pc = 0x27e614u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_27e618:
    // 0x27e618: 0x3c050034
    ctx->pc = 0x27e618u;
    SET_GPR_U32(ctx, 5, ((uint32_t)52 << 16));
label_27e61c:
    // 0x27e61c: 0xc09fdc2
label_27e620:
    if (ctx->pc == 0x27E620u) {
        ctx->pc = 0x27E620u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 104));
        ctx->pc = 0x27E624u;
        goto label_27e624;
    }
    ctx->pc = 0x27E61Cu;
    SET_GPR_U32(ctx, 31, 0x27E624u);
    ctx->pc = 0x27E620u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 104));
    ctx->pc = 0x27F708u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetLight_0x27f708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E624u; }
    }
    if (ctx->pc != 0x27E624u) { return; }
    ctx->pc = 0x27E624u;
label_27e624:
    // 0x27e624: 0x220202d
    ctx->pc = 0x27e624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27e628:
    // 0x27e628: 0x4600ab06
    ctx->pc = 0x27e628u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_27e62c:
    // 0x27e62c: 0x280282d
    ctx->pc = 0x27e62cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27e630:
    // 0x27e630: 0x4600a346
    ctx->pc = 0x27e630u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_27e634:
    // 0x27e634: 0x44807000
    ctx->pc = 0x27e634u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 0);
label_27e638:
    // 0x27e638: 0xc09f780
label_27e63c:
    if (ctx->pc == 0x27E63Cu) {
        ctx->pc = 0x27E63Cu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E640u;
        goto label_27e640;
    }
    ctx->pc = 0x27E638u;
    SET_GPR_U32(ctx, 31, 0x27E640u);
    ctx->pc = 0x27E63Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27DE00u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetDamage_0x27de00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E640u; }
    }
    if (ctx->pc != 0x27E640u) { return; }
    ctx->pc = 0x27E640u;
label_27e640:
    // 0x27e640: 0x3c020034
    ctx->pc = 0x27e640u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_27e644:
    // 0x27e644: 0x8c43e7f0
    ctx->pc = 0x27e644u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
label_27e648:
    // 0x27e648: 0x2402000a
    ctx->pc = 0x27e648u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
label_27e64c:
    // 0x27e64c: 0x1462003e
label_27e650:
    if (ctx->pc == 0x27E650u) {
        ctx->pc = 0x27E650u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E654u;
        goto label_27e654;
    }
    ctx->pc = 0x27E64Cu;
    {
        const bool branch_taken_0x27e64c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x27E650u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27e64c) {
            ctx->pc = 0x27E748u;
            goto label_27e748;
        }
    }
    ctx->pc = 0x27E654u;
label_27e654:
    // 0x27e654: 0x24020018
    ctx->pc = 0x27e654u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 24));
label_27e658:
    // 0x27e658: 0x1642003b
label_27e65c:
    if (ctx->pc == 0x27E65Cu) {
        ctx->pc = 0x27E65Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E660u;
        goto label_27e660;
    }
    ctx->pc = 0x27E658u;
    {
        const bool branch_taken_0x27e658 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 2));
        ctx->pc = 0x27E65Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27e658) {
            ctx->pc = 0x27E748u;
            goto label_27e748;
        }
    }
    ctx->pc = 0x27E660u;
label_27e660:
    // 0x27e660: 0x802d
    ctx->pc = 0x27e660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27e664:
    // 0x27e664: 0x3c013f19
    ctx->pc = 0x27e664u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16153 << 16));
label_27e668:
    // 0x27e668: 0x3421999a
    ctx->pc = 0x27e668u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 39322));
label_27e66c:
    // 0x27e66c: 0x4481d800
    ctx->pc = 0x27e66cu;
    *(uint32_t*)&ctx->f[27] = GPR_U32(ctx, 1);
label_27e670:
    // 0x27e670: 0x3c0140c0
    ctx->pc = 0x27e670u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16576 << 16));
label_27e674:
    // 0x27e674: 0x4481c000
    ctx->pc = 0x27e674u;
    *(uint32_t*)&ctx->f[24] = GPR_U32(ctx, 1);
label_27e678:
    // 0x27e678: 0x3c01c049
    ctx->pc = 0x27e678u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
label_27e67c:
    // 0x27e67c: 0x34210fdb
    ctx->pc = 0x27e67cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
label_27e680:
    // 0x27e680: 0x4481d000
    ctx->pc = 0x27e680u;
    *(uint32_t*)&ctx->f[26] = GPR_U32(ctx, 1);
label_27e684:
    // 0x27e684: 0x3c013f86
    ctx->pc = 0x27e684u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16262 << 16));
label_27e688:
    // 0x27e688: 0x34210a92
    ctx->pc = 0x27e688u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 2706));
label_27e68c:
    // 0x27e68c: 0x4481c800
    ctx->pc = 0x27e68cu;
    *(uint32_t*)&ctx->f[25] = GPR_U32(ctx, 1);
label_27e690:
    // 0x27e690: 0x3c013f00
    ctx->pc = 0x27e690u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
label_27e694:
    // 0x27e694: 0x44816000
    ctx->pc = 0x27e694u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_27e698:
    // 0x27e698: 0xc0b5c06
label_27e69c:
    if (ctx->pc == 0x27E69Cu) {
        ctx->pc = 0x27E69Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x27E6A0u;
        goto label_27e6a0;
    }
    ctx->pc = 0x27E698u;
    SET_GPR_U32(ctx, 31, 0x27E6A0u);
    ctx->pc = 0x27E69Cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E6A0u; }
    }
    if (ctx->pc != 0x27E6A0u) { return; }
    ctx->pc = 0x27E6A0u;
label_27e6a0:
    // 0x27e6a0: 0x3c014040
    ctx->pc = 0x27e6a0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
label_27e6a4:
    // 0x27e6a4: 0x44816000
    ctx->pc = 0x27e6a4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_27e6a8:
    // 0x27e6a8: 0xc0b5c06
label_27e6ac:
    if (ctx->pc == 0x27E6ACu) {
        ctx->pc = 0x27E6ACu;
        ctx->f[23] = FPU_ADD_S(ctx->f[0], ctx->f[27]);
        ctx->pc = 0x27E6B0u;
        goto label_27e6b0;
    }
    ctx->pc = 0x27E6A8u;
    SET_GPR_U32(ctx, 31, 0x27E6B0u);
    ctx->pc = 0x27E6ACu;
    ctx->f[23] = FPU_ADD_S(ctx->f[0], ctx->f[27]);
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E6B0u; }
    }
    if (ctx->pc != 0x27E6B0u) { return; }
    ctx->pc = 0x27E6B0u;
label_27e6b0:
    // 0x27e6b0: 0x3c0140c9
    ctx->pc = 0x27e6b0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
label_27e6b4:
    // 0x27e6b4: 0x34210fdb
    ctx->pc = 0x27e6b4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
label_27e6b8:
    // 0x27e6b8: 0x44816000
    ctx->pc = 0x27e6b8u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_27e6bc:
    // 0x27e6bc: 0xc0b5c06
label_27e6c0:
    if (ctx->pc == 0x27E6C0u) {
        ctx->pc = 0x27E6C0u;
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
        ctx->pc = 0x27E6C4u;
        goto label_27e6c4;
    }
    ctx->pc = 0x27E6BCu;
    SET_GPR_U32(ctx, 31, 0x27E6C4u);
    ctx->pc = 0x27E6C0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E6C4u; }
    }
    if (ctx->pc != 0x27E6C4u) { return; }
    ctx->pc = 0x27E6C4u;
label_27e6c4:
    // 0x27e6c4: 0x3c013f06
    ctx->pc = 0x27e6c4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16134 << 16));
label_27e6c8:
    // 0x27e6c8: 0x34210a92
    ctx->pc = 0x27e6c8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 2706));
label_27e6cc:
    // 0x27e6cc: 0x44816000
    ctx->pc = 0x27e6ccu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
label_27e6d0:
    // 0x27e6d0: 0xc0b5c06
label_27e6d4:
    if (ctx->pc == 0x27E6D4u) {
        ctx->pc = 0x27E6D4u;
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[26]);
        ctx->pc = 0x27E6D8u;
        goto label_27e6d8;
    }
    ctx->pc = 0x27E6D0u;
    SET_GPR_U32(ctx, 31, 0x27E6D8u);
    ctx->pc = 0x27E6D4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[26]);
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E6D8u; }
    }
    if (ctx->pc != 0x27E6D8u) { return; }
    ctx->pc = 0x27E6D8u;
label_27e6d8:
    // 0x27e6d8: 0x46190580
    ctx->pc = 0x27e6d8u;
    ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[25]);
label_27e6dc:
    // 0x27e6dc: 0x3c04003a
    ctx->pc = 0x27e6dcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
label_27e6e0:
    // 0x27e6e0: 0x24842520
    ctx->pc = 0x27e6e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9504));
label_27e6e4:
    // 0x27e6e4: 0x3a0282d
    ctx->pc = 0x27e6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27e6e8:
    // 0x27e6e8: 0xc0b57e6
label_27e6ec:
    if (ctx->pc == 0x27E6ECu) {
        ctx->pc = 0x27E6ECu;
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x27E6F0u;
        goto label_27e6f0;
    }
    ctx->pc = 0x27E6E8u;
    SET_GPR_U32(ctx, 31, 0x27E6F0u);
    ctx->pc = 0x27E6ECu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x2D5F98u;
    {
        const uint32_t __entryPc = ctx->pc;
        YawVec3_0x2d5f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E6F0u; }
    }
    if (ctx->pc != 0x27E6F0u) { return; }
    ctx->pc = 0x27E6F0u;
label_27e6f0:
    // 0x27e6f0: 0x3a0202d
    ctx->pc = 0x27e6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27e6f4:
    // 0x27e6f4: 0x3a0282d
    ctx->pc = 0x27e6f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27e6f8:
    // 0x27e6f8: 0xc0b580a
label_27e6fc:
    if (ctx->pc == 0x27E6FCu) {
        ctx->pc = 0x27E6FCu;
        ctx->f[12] = FPU_NEG_S(ctx->f[22]);
        ctx->pc = 0x27E700u;
        goto label_27e700;
    }
    ctx->pc = 0x27E6F8u;
    SET_GPR_U32(ctx, 31, 0x27E700u);
    ctx->pc = 0x27E6FCu;
    ctx->f[12] = FPU_NEG_S(ctx->f[22]);
    ctx->pc = 0x2D6028u;
    {
        const uint32_t __entryPc = ctx->pc;
        PitchVec3_0x2d6028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E700u; }
    }
    if (ctx->pc != 0x27E700u) { return; }
    ctx->pc = 0x27E700u;
label_27e700:
    // 0x27e700: 0xc7a00000
    ctx->pc = 0x27e700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27e704:
    // 0x27e704: 0x4600a002
    ctx->pc = 0x27e704u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_27e708:
    // 0x27e708: 0xe7a00000
    ctx->pc = 0x27e708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_27e70c:
    // 0x27e70c: 0xc7a00004
    ctx->pc = 0x27e70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27e710:
    // 0x27e710: 0x4600a002
    ctx->pc = 0x27e710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_27e714:
    // 0x27e714: 0xe7a00004
    ctx->pc = 0x27e714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_27e718:
    // 0x27e718: 0xc7a00008
    ctx->pc = 0x27e718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27e71c:
    // 0x27e71c: 0x4600a502
    ctx->pc = 0x27e71cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_27e720:
    // 0x27e720: 0xe7b40008
    ctx->pc = 0x27e720u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_27e724:
    // 0x27e724: 0x26640030
    ctx->pc = 0x27e724u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 48));
label_27e728:
    // 0x27e728: 0x3a0282d
    ctx->pc = 0x27e728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_27e72c:
    // 0x27e72c: 0x4600bb06
    ctx->pc = 0x27e72cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_27e730:
    // 0x27e730: 0x4600c346
    ctx->pc = 0x27e730u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
label_27e734:
    // 0x27e734: 0xc09f8ca
label_27e738:
    if (ctx->pc == 0x27E738u) {
        ctx->pc = 0x27E738u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 180));
        ctx->pc = 0x27E73Cu;
        goto label_27e73c;
    }
    ctx->pc = 0x27E734u;
    SET_GPR_U32(ctx, 31, 0x27E73Cu);
    ctx->pc = 0x27E738u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 180));
    ctx->pc = 0x27E328u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFirework_0x27e328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27E73Cu; }
    }
    if (ctx->pc != 0x27E73Cu) { return; }
    ctx->pc = 0x27E73Cu;
label_27e73c:
    // 0x27e73c: 0x2a020003
    ctx->pc = 0x27e73cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 3));
label_27e740:
    // 0x27e740: 0x1440ffd3
label_27e744:
    if (ctx->pc == 0x27E744u) {
        ctx->pc = 0x27E744u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27E748u;
        goto label_27e748;
    }
    ctx->pc = 0x27E740u;
    {
        const bool branch_taken_0x27e740 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x27E744u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27e740) {
            ctx->pc = 0x27E690u;
            goto label_27e690;
        }
    }
    ctx->pc = 0x27E748u;
label_27e748:
    // 0x27e748: 0xdfbf0060
    ctx->pc = 0x27e748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_27e74c:
    // 0x27e74c: 0xdfb40050
    ctx->pc = 0x27e74cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_27e750:
    // 0x27e750: 0xdfb30040
    ctx->pc = 0x27e750u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_27e754:
    // 0x27e754: 0xdfb20030
    ctx->pc = 0x27e754u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_27e758:
    // 0x27e758: 0xdfb10020
    ctx->pc = 0x27e758u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_27e75c:
    // 0x27e75c: 0xdfb00010
    ctx->pc = 0x27e75cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_27e760:
    // 0x27e760: 0xc7bb00a8
    ctx->pc = 0x27e760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_27e764:
    // 0x27e764: 0xc7ba00a0
    ctx->pc = 0x27e764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_27e768:
    // 0x27e768: 0xc7b90098
    ctx->pc = 0x27e768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_27e76c:
    // 0x27e76c: 0xc7b80090
    ctx->pc = 0x27e76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_27e770:
    // 0x27e770: 0xc7b70088
    ctx->pc = 0x27e770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_27e774:
    // 0x27e774: 0xc7b60080
    ctx->pc = 0x27e774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_27e778:
    // 0x27e778: 0xc7b50078
    ctx->pc = 0x27e778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_27e77c:
    // 0x27e77c: 0xc7b40070
    ctx->pc = 0x27e77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_27e780:
    // 0x27e780: 0x3e00008
label_27e784:
    if (ctx->pc == 0x27E784u) {
        ctx->pc = 0x27E784u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x27E788u;
        goto label_fallthrough_0x27e780;
    }
    ctx->pc = 0x27E780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E784u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27E3E0u: goto label_27e3e0;
            case 0x27E3E4u: goto label_27e3e4;
            case 0x27E3E8u: goto label_27e3e8;
            case 0x27E3ECu: goto label_27e3ec;
            case 0x27E3F0u: goto label_27e3f0;
            case 0x27E3F4u: goto label_27e3f4;
            case 0x27E3F8u: goto label_27e3f8;
            case 0x27E3FCu: goto label_27e3fc;
            case 0x27E400u: goto label_27e400;
            case 0x27E404u: goto label_27e404;
            case 0x27E408u: goto label_27e408;
            case 0x27E40Cu: goto label_27e40c;
            case 0x27E410u: goto label_27e410;
            case 0x27E414u: goto label_27e414;
            case 0x27E418u: goto label_27e418;
            case 0x27E41Cu: goto label_27e41c;
            case 0x27E420u: goto label_27e420;
            case 0x27E424u: goto label_27e424;
            case 0x27E428u: goto label_27e428;
            case 0x27E42Cu: goto label_27e42c;
            case 0x27E430u: goto label_27e430;
            case 0x27E434u: goto label_27e434;
            case 0x27E438u: goto label_27e438;
            case 0x27E43Cu: goto label_27e43c;
            case 0x27E440u: goto label_27e440;
            case 0x27E444u: goto label_27e444;
            case 0x27E448u: goto label_27e448;
            case 0x27E44Cu: goto label_27e44c;
            case 0x27E450u: goto label_27e450;
            case 0x27E454u: goto label_27e454;
            case 0x27E458u: goto label_27e458;
            case 0x27E45Cu: goto label_27e45c;
            case 0x27E460u: goto label_27e460;
            case 0x27E464u: goto label_27e464;
            case 0x27E468u: goto label_27e468;
            case 0x27E46Cu: goto label_27e46c;
            case 0x27E470u: goto label_27e470;
            case 0x27E474u: goto label_27e474;
            case 0x27E478u: goto label_27e478;
            case 0x27E47Cu: goto label_27e47c;
            case 0x27E480u: goto label_27e480;
            case 0x27E484u: goto label_27e484;
            case 0x27E488u: goto label_27e488;
            case 0x27E48Cu: goto label_27e48c;
            case 0x27E490u: goto label_27e490;
            case 0x27E494u: goto label_27e494;
            case 0x27E498u: goto label_27e498;
            case 0x27E49Cu: goto label_27e49c;
            case 0x27E4A0u: goto label_27e4a0;
            case 0x27E4A4u: goto label_27e4a4;
            case 0x27E4A8u: goto label_27e4a8;
            case 0x27E4ACu: goto label_27e4ac;
            case 0x27E4B0u: goto label_27e4b0;
            case 0x27E4B4u: goto label_27e4b4;
            case 0x27E4B8u: goto label_27e4b8;
            case 0x27E4BCu: goto label_27e4bc;
            case 0x27E4C0u: goto label_27e4c0;
            case 0x27E4C4u: goto label_27e4c4;
            case 0x27E4C8u: goto label_27e4c8;
            case 0x27E4CCu: goto label_27e4cc;
            case 0x27E4D0u: goto label_27e4d0;
            case 0x27E4D4u: goto label_27e4d4;
            case 0x27E4D8u: goto label_27e4d8;
            case 0x27E4DCu: goto label_27e4dc;
            case 0x27E4E0u: goto label_27e4e0;
            case 0x27E4E4u: goto label_27e4e4;
            case 0x27E4E8u: goto label_27e4e8;
            case 0x27E4ECu: goto label_27e4ec;
            case 0x27E4F0u: goto label_27e4f0;
            case 0x27E4F4u: goto label_27e4f4;
            case 0x27E4F8u: goto label_27e4f8;
            case 0x27E4FCu: goto label_27e4fc;
            case 0x27E500u: goto label_27e500;
            case 0x27E504u: goto label_27e504;
            case 0x27E508u: goto label_27e508;
            case 0x27E50Cu: goto label_27e50c;
            case 0x27E510u: goto label_27e510;
            case 0x27E514u: goto label_27e514;
            case 0x27E518u: goto label_27e518;
            case 0x27E51Cu: goto label_27e51c;
            case 0x27E520u: goto label_27e520;
            case 0x27E524u: goto label_27e524;
            case 0x27E528u: goto label_27e528;
            case 0x27E52Cu: goto label_27e52c;
            case 0x27E530u: goto label_27e530;
            case 0x27E534u: goto label_27e534;
            case 0x27E538u: goto label_27e538;
            case 0x27E53Cu: goto label_27e53c;
            case 0x27E540u: goto label_27e540;
            case 0x27E544u: goto label_27e544;
            case 0x27E548u: goto label_27e548;
            case 0x27E54Cu: goto label_27e54c;
            case 0x27E550u: goto label_27e550;
            case 0x27E554u: goto label_27e554;
            case 0x27E558u: goto label_27e558;
            case 0x27E55Cu: goto label_27e55c;
            case 0x27E560u: goto label_27e560;
            case 0x27E564u: goto label_27e564;
            case 0x27E568u: goto label_27e568;
            case 0x27E56Cu: goto label_27e56c;
            case 0x27E570u: goto label_27e570;
            case 0x27E574u: goto label_27e574;
            case 0x27E578u: goto label_27e578;
            case 0x27E57Cu: goto label_27e57c;
            case 0x27E580u: goto label_27e580;
            case 0x27E584u: goto label_27e584;
            case 0x27E588u: goto label_27e588;
            case 0x27E58Cu: goto label_27e58c;
            case 0x27E590u: goto label_27e590;
            case 0x27E594u: goto label_27e594;
            case 0x27E598u: goto label_27e598;
            case 0x27E59Cu: goto label_27e59c;
            case 0x27E5A0u: goto label_27e5a0;
            case 0x27E5A4u: goto label_27e5a4;
            case 0x27E5A8u: goto label_27e5a8;
            case 0x27E5ACu: goto label_27e5ac;
            case 0x27E5B0u: goto label_27e5b0;
            case 0x27E5B4u: goto label_27e5b4;
            case 0x27E5B8u: goto label_27e5b8;
            case 0x27E5BCu: goto label_27e5bc;
            case 0x27E5C0u: goto label_27e5c0;
            case 0x27E5C4u: goto label_27e5c4;
            case 0x27E5C8u: goto label_27e5c8;
            case 0x27E5CCu: goto label_27e5cc;
            case 0x27E5D0u: goto label_27e5d0;
            case 0x27E5D4u: goto label_27e5d4;
            case 0x27E5D8u: goto label_27e5d8;
            case 0x27E5DCu: goto label_27e5dc;
            case 0x27E5E0u: goto label_27e5e0;
            case 0x27E5E4u: goto label_27e5e4;
            case 0x27E5E8u: goto label_27e5e8;
            case 0x27E5ECu: goto label_27e5ec;
            case 0x27E5F0u: goto label_27e5f0;
            case 0x27E5F4u: goto label_27e5f4;
            case 0x27E5F8u: goto label_27e5f8;
            case 0x27E5FCu: goto label_27e5fc;
            case 0x27E600u: goto label_27e600;
            case 0x27E604u: goto label_27e604;
            case 0x27E608u: goto label_27e608;
            case 0x27E60Cu: goto label_27e60c;
            case 0x27E610u: goto label_27e610;
            case 0x27E614u: goto label_27e614;
            case 0x27E618u: goto label_27e618;
            case 0x27E61Cu: goto label_27e61c;
            case 0x27E620u: goto label_27e620;
            case 0x27E624u: goto label_27e624;
            case 0x27E628u: goto label_27e628;
            case 0x27E62Cu: goto label_27e62c;
            case 0x27E630u: goto label_27e630;
            case 0x27E634u: goto label_27e634;
            case 0x27E638u: goto label_27e638;
            case 0x27E63Cu: goto label_27e63c;
            case 0x27E640u: goto label_27e640;
            case 0x27E644u: goto label_27e644;
            case 0x27E648u: goto label_27e648;
            case 0x27E64Cu: goto label_27e64c;
            case 0x27E650u: goto label_27e650;
            case 0x27E654u: goto label_27e654;
            case 0x27E658u: goto label_27e658;
            case 0x27E65Cu: goto label_27e65c;
            case 0x27E660u: goto label_27e660;
            case 0x27E664u: goto label_27e664;
            case 0x27E668u: goto label_27e668;
            case 0x27E66Cu: goto label_27e66c;
            case 0x27E670u: goto label_27e670;
            case 0x27E674u: goto label_27e674;
            case 0x27E678u: goto label_27e678;
            case 0x27E67Cu: goto label_27e67c;
            case 0x27E680u: goto label_27e680;
            case 0x27E684u: goto label_27e684;
            case 0x27E688u: goto label_27e688;
            case 0x27E68Cu: goto label_27e68c;
            case 0x27E690u: goto label_27e690;
            case 0x27E694u: goto label_27e694;
            case 0x27E698u: goto label_27e698;
            case 0x27E69Cu: goto label_27e69c;
            case 0x27E6A0u: goto label_27e6a0;
            case 0x27E6A4u: goto label_27e6a4;
            case 0x27E6A8u: goto label_27e6a8;
            case 0x27E6ACu: goto label_27e6ac;
            case 0x27E6B0u: goto label_27e6b0;
            case 0x27E6B4u: goto label_27e6b4;
            case 0x27E6B8u: goto label_27e6b8;
            case 0x27E6BCu: goto label_27e6bc;
            case 0x27E6C0u: goto label_27e6c0;
            case 0x27E6C4u: goto label_27e6c4;
            case 0x27E6C8u: goto label_27e6c8;
            case 0x27E6CCu: goto label_27e6cc;
            case 0x27E6D0u: goto label_27e6d0;
            case 0x27E6D4u: goto label_27e6d4;
            case 0x27E6D8u: goto label_27e6d8;
            case 0x27E6DCu: goto label_27e6dc;
            case 0x27E6E0u: goto label_27e6e0;
            case 0x27E6E4u: goto label_27e6e4;
            case 0x27E6E8u: goto label_27e6e8;
            case 0x27E6ECu: goto label_27e6ec;
            case 0x27E6F0u: goto label_27e6f0;
            case 0x27E6F4u: goto label_27e6f4;
            case 0x27E6F8u: goto label_27e6f8;
            case 0x27E6FCu: goto label_27e6fc;
            case 0x27E700u: goto label_27e700;
            case 0x27E704u: goto label_27e704;
            case 0x27E708u: goto label_27e708;
            case 0x27E70Cu: goto label_27e70c;
            case 0x27E710u: goto label_27e710;
            case 0x27E714u: goto label_27e714;
            case 0x27E718u: goto label_27e718;
            case 0x27E71Cu: goto label_27e71c;
            case 0x27E720u: goto label_27e720;
            case 0x27E724u: goto label_27e724;
            case 0x27E728u: goto label_27e728;
            case 0x27E72Cu: goto label_27e72c;
            case 0x27E730u: goto label_27e730;
            case 0x27E734u: goto label_27e734;
            case 0x27E738u: goto label_27e738;
            case 0x27E73Cu: goto label_27e73c;
            case 0x27E740u: goto label_27e740;
            case 0x27E744u: goto label_27e744;
            case 0x27E748u: goto label_27e748;
            case 0x27E74Cu: goto label_27e74c;
            case 0x27E750u: goto label_27e750;
            case 0x27E754u: goto label_27e754;
            case 0x27E758u: goto label_27e758;
            case 0x27E75Cu: goto label_27e75c;
            case 0x27E760u: goto label_27e760;
            case 0x27E764u: goto label_27e764;
            case 0x27E768u: goto label_27e768;
            case 0x27E76Cu: goto label_27e76c;
            case 0x27E770u: goto label_27e770;
            case 0x27E774u: goto label_27e774;
            case 0x27E778u: goto label_27e778;
            case 0x27E77Cu: goto label_27e77c;
            case 0x27E780u: goto label_27e780;
            case 0x27E784u: goto label_27e784;
            default: break;
        }
        return;
    }
label_fallthrough_0x27e780:
    ctx->pc = 0x27E788u;
}
