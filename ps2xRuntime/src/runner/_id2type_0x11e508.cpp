#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _id2type
// Address: 0x11e508 - 0x11e704
void _id2type_0x11e508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11e508u;

    // 0x11e508: 0x27bdff80
    ctx->pc = 0x11e508u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11e50c: 0x3c030017
    ctx->pc = 0x11e50cu;
    SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
    // 0x11e510: 0xffb70070
    ctx->pc = 0x11e510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x11e514: 0x30c2ffff
    ctx->pc = 0x11e514u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 65535));
    // 0x11e518: 0xffb60060
    ctx->pc = 0x11e518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x11e51c: 0x6763a
    ctx->pc = 0x11e51cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 6) >> 24);
    // 0x11e520: 0xffb50050
    ctx->pc = 0x11e520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x11e524: 0x6683e
    ctx->pc = 0x11e524u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x11e528: 0xffb40040
    ctx->pc = 0x11e528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11e52c: 0x2603c
    ctx->pc = 0x11e52cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11e530: 0xc603f
    ctx->pc = 0x11e530u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x11e534: 0xffb30030
    ctx->pc = 0x11e534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11e538: 0x246316f0
    ctx->pc = 0x11e538u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 5872));
    // 0x11e53c: 0xffb20020
    ctx->pc = 0x11e53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11e540: 0x502d
    ctx->pc = 0x11e540u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e544: 0xffb10010
    ctx->pc = 0x11e544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11e548: 0x482d
    ctx->pc = 0x11e548u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e54c: 0xffb00000
    ctx->pc = 0x11e54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11e550: 0x340bffff
    ctx->pc = 0x11e550u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)65535);
    // 0x11e554: 0xb5e38
    ctx->pc = 0x11e554u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 24);
    // 0x11e558: 0x3417ff00
    ctx->pc = 0x11e558u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)65280);
    // 0x11e55c: 0x17be38
    ctx->pc = 0x11e55cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << 24);
    // 0x11e560: 0x2416ffff
    ctx->pc = 0x11e560u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11e564: 0x16b63a
    ctx->pc = 0x11e564u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> 24);
    // 0x11e568: 0x2415ffff
    ctx->pc = 0x11e568u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11e56c: 0x15aa3c
    ctx->pc = 0x11e56cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 8));
    // 0x11e570: 0x15ae3a
    ctx->pc = 0x11e570u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> 24);
    // 0x11e574: 0x3414bd20
    ctx->pc = 0x11e574u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)48416);
    // 0x11e578: 0x14a638
    ctx->pc = 0x11e578u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << 24);
    // 0x11e57c: 0x3413bd80
    ctx->pc = 0x11e57cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)48512);
    // 0x11e580: 0x139e38
    ctx->pc = 0x11e580u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << 24);
    // 0x11e584: 0x3412bd90
    ctx->pc = 0x11e584u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)48528);
    // 0x11e588: 0x129638
    ctx->pc = 0x11e588u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 24);
    // 0x11e58c: 0x3411bda0
    ctx->pc = 0x11e58cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)48544);
    // 0x11e590: 0x118e38
    ctx->pc = 0x11e590u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 24);
    // 0x11e594: 0x3410ffe0
    ctx->pc = 0x11e594u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)65504);
    // 0x11e598: 0x108638
    ctx->pc = 0x11e598u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 24);
    // 0x11e59c: 0x3419fff8
    ctx->pc = 0x11e59cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) | (uint64_t)65528);
    // 0x11e5a0: 0x19ce38
    ctx->pc = 0x11e5a0u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << 24);
    // 0x11e5a4: 0x3418f000
    ctx->pc = 0x11e5a4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) | (uint64_t)61440);
    // 0x11e5a8: 0x18c638
    ctx->pc = 0x11e5a8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << 24);
    // 0x11e5ac: 0x340fc000
    ctx->pc = 0x11e5acu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)49152);
    // 0x11e5b0: 0xf7e38
    ctx->pc = 0x11e5b0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 24);
    // 0x11e5b4: 0xdc670008
    ctx->pc = 0x11e5b4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_11e5b8:
    // 0x11e5b8: 0x10eb0011
    ctx->pc = 0x11E5B8u;
    {
        const bool branch_taken_0x11e5b8 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 11));
        ctx->pc = 0x11E5BCu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
        if (branch_taken_0x11e5b8) {
            ctx->pc = 0x11E600u;
            goto label_11e600;
        }
    }
    ctx->pc = 0x11E5C0u;
    // 0x11e5c0: 0x14400005
    ctx->pc = 0x11E5C0u;
    {
        const bool branch_taken_0x11e5c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11e5c0) {
            ctx->pc = 0x11E5D8u;
            goto label_11e5d8;
        }
    }
    ctx->pc = 0x11E5C8u;
    // 0x11e5c8: 0x50f70028
    ctx->pc = 0x11E5C8u;
    {
        const bool branch_taken_0x11e5c8 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 23));
        if (branch_taken_0x11e5c8) {
            ctx->pc = 0x11E5CCu;
            SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->pc = 0x11E66Cu;
            goto label_11e66c;
        }
    }
    ctx->pc = 0x11E5D0u;
    // 0x11e5d0: 0x1000003c
    ctx->pc = 0x11E5D0u;
    {
        const bool branch_taken_0x11e5d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11E5D4u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
        if (branch_taken_0x11e5d0) {
            ctx->pc = 0x11E6C4u;
            goto label_11e6c4;
        }
    }
    ctx->pc = 0x11E5D8u;
label_11e5d8:
    // 0x11e5d8: 0x54f6003a
    ctx->pc = 0x11E5D8u;
    {
        const bool branch_taken_0x11e5d8 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 22));
        if (branch_taken_0x11e5d8) {
            ctx->pc = 0x11E5DCu;
            SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
            ctx->pc = 0x11E6C4u;
            goto label_11e6c4;
        }
    }
    ctx->pc = 0x11E5E0u;
    // 0x11e5e0: 0xdc620000
    ctx->pc = 0x11e5e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11e5e4: 0xd53824
    ctx->pc = 0x11e5e4u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x11e5e8: 0x54e20036
    ctx->pc = 0x11E5E8u;
    {
        const bool branch_taken_0x11e5e8 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        if (branch_taken_0x11e5e8) {
            ctx->pc = 0x11E5ECu;
            SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
            ctx->pc = 0x11E6C4u;
            goto label_11e6c4;
        }
    }
    ctx->pc = 0x11E5F0u;
    // 0x11e5f0: 0xac890000
    ctx->pc = 0x11e5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x11e5f4: 0x240a0001
    ctx->pc = 0x11e5f4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e5f8: 0x10000031
    ctx->pc = 0x11E5F8u;
    {
        const bool branch_taken_0x11e5f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11E5FCu;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
        if (branch_taken_0x11e5f8) {
            ctx->pc = 0x11E6C0u;
            goto label_11e6c0;
        }
    }
    ctx->pc = 0x11E600u;
label_11e600:
    // 0x11e600: 0xdc680000
    ctx->pc = 0x11e600u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11e604: 0x3402bd88
    ctx->pc = 0x11e604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)48520);
    // 0x11e608: 0x21638
    ctx->pc = 0x11e608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11e60c: 0x11020011
    ctx->pc = 0x11E60Cu;
    {
        const bool branch_taken_0x11e60c = (GPR_U32(ctx, 8) == GPR_U32(ctx, 2));
        ctx->pc = 0x11E610u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
        if (branch_taken_0x11e60c) {
            ctx->pc = 0x11E654u;
            goto label_11e654;
        }
    }
    ctx->pc = 0x11E614u;
    // 0x11e614: 0x14400007
    ctx->pc = 0x11E614u;
    {
        const bool branch_taken_0x11e614 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x11e614) {
            ctx->pc = 0x11E634u;
            goto label_11e634;
        }
    }
    ctx->pc = 0x11E61Cu;
    // 0x11e61c: 0x1114000b
    ctx->pc = 0x11E61Cu;
    {
        const bool branch_taken_0x11e61c = (GPR_U32(ctx, 8) == GPR_U32(ctx, 20));
        ctx->pc = 0x11E620u;
        SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
        if (branch_taken_0x11e61c) {
            ctx->pc = 0x11E64Cu;
            goto label_11e64c;
        }
    }
    ctx->pc = 0x11E624u;
    // 0x11e624: 0x1113000b
    ctx->pc = 0x11E624u;
    {
        const bool branch_taken_0x11e624 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 19));
        ctx->pc = 0x11E628u;
        SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
        if (branch_taken_0x11e624) {
            ctx->pc = 0x11E654u;
            goto label_11e654;
        }
    }
    ctx->pc = 0x11E62Cu;
    // 0x11e62c: 0x1000000b
    ctx->pc = 0x11E62Cu;
    {
        const bool branch_taken_0x11e62c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11E630u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11e62c) {
            ctx->pc = 0x11E65Cu;
            goto label_11e65c;
        }
    }
    ctx->pc = 0x11E634u;
label_11e634:
    // 0x11e634: 0x11120008
    ctx->pc = 0x11E634u;
    {
        const bool branch_taken_0x11e634 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 18));
        ctx->pc = 0x11E638u;
        SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 25)));
        if (branch_taken_0x11e634) {
            ctx->pc = 0x11E658u;
            goto label_11e658;
        }
    }
    ctx->pc = 0x11E63Cu;
    // 0x11e63c: 0x11110005
    ctx->pc = 0x11E63Cu;
    {
        const bool branch_taken_0x11e63c = (GPR_U32(ctx, 8) == GPR_U32(ctx, 17));
        ctx->pc = 0x11E640u;
        SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
        if (branch_taken_0x11e63c) {
            ctx->pc = 0x11E654u;
            goto label_11e654;
        }
    }
    ctx->pc = 0x11E644u;
    // 0x11e644: 0x10000005
    ctx->pc = 0x11E644u;
    {
        const bool branch_taken_0x11e644 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11E648u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x11e644) {
            ctx->pc = 0x11E65Cu;
            goto label_11e65c;
        }
    }
    ctx->pc = 0x11E64Cu;
label_11e64c:
    // 0x11e64c: 0x10000003
    ctx->pc = 0x11E64Cu;
    {
        const bool branch_taken_0x11e64c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11E650u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
        if (branch_taken_0x11e64c) {
            ctx->pc = 0x11E65Cu;
            goto label_11e65c;
        }
    }
    ctx->pc = 0x11E654u;
label_11e654:
    // 0x11e654: 0xd93824
    ctx->pc = 0x11e654u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 25)));
label_11e658:
    // 0x11e658: 0x24020007
    ctx->pc = 0x11e658u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
label_11e65c:
    // 0x11e65c: 0x54e80019
    ctx->pc = 0x11E65Cu;
    {
        const bool branch_taken_0x11e65c = (GPR_U32(ctx, 7) != GPR_U32(ctx, 8));
        if (branch_taken_0x11e65c) {
            ctx->pc = 0x11E660u;
            SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
            ctx->pc = 0x11E6C4u;
            goto label_11e6c4;
        }
    }
    ctx->pc = 0x11E664u;
    // 0x11e664: 0x10000011
    ctx->pc = 0x11E664u;
    {
        const bool branch_taken_0x11e664 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11E668u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        if (branch_taken_0x11e664) {
            ctx->pc = 0x11E6ACu;
            goto label_11e6ac;
        }
    }
    ctx->pc = 0x11E66Cu;
label_11e66c:
    // 0x11e66c: 0x3402e000
    ctx->pc = 0x11e66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)57344);
    // 0x11e670: 0x21638
    ctx->pc = 0x11e670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x11e674: 0x15020004
    ctx->pc = 0x11E674u;
    {
        const bool branch_taken_0x11e674 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 2));
        if (branch_taken_0x11e674) {
            ctx->pc = 0x11E688u;
            goto label_11e688;
        }
    }
    ctx->pc = 0x11E67Cu;
    // 0x11e67c: 0xd83824
    ctx->pc = 0x11e67cu;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x11e680: 0x10000007
    ctx->pc = 0x11E680u;
    {
        const bool branch_taken_0x11e680 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11E684u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x11e680) {
            ctx->pc = 0x11E6A0u;
            goto label_11e6a0;
        }
    }
    ctx->pc = 0x11E688u;
label_11e688:
    // 0x11e688: 0x150f0004
    ctx->pc = 0x11E688u;
    {
        const bool branch_taken_0x11e688 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 15));
        ctx->pc = 0x11E68Cu;
        SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        if (branch_taken_0x11e688) {
            ctx->pc = 0x11E69Cu;
            goto label_11e69c;
        }
    }
    ctx->pc = 0x11E690u;
    // 0x11e690: 0xc23824
    ctx->pc = 0x11e690u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x11e694: 0x10000002
    ctx->pc = 0x11E694u;
    {
        const bool branch_taken_0x11e694 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x11E698u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
        if (branch_taken_0x11e694) {
            ctx->pc = 0x11E6A0u;
            goto label_11e6a0;
        }
    }
    ctx->pc = 0x11E69Cu;
label_11e69c:
    // 0x11e69c: 0x102d
    ctx->pc = 0x11e69cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11e6a0:
    // 0x11e6a0: 0x54e80008
    ctx->pc = 0x11E6A0u;
    {
        const bool branch_taken_0x11e6a0 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 8));
        if (branch_taken_0x11e6a0) {
            ctx->pc = 0x11E6A4u;
            SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
            ctx->pc = 0x11E6C4u;
            goto label_11e6c4;
        }
    }
    ctx->pc = 0x11E6A8u;
    // 0x11e6a8: 0x1a21024
    ctx->pc = 0x11e6a8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_11e6ac:
    // 0x11e6ac: 0xac890000
    ctx->pc = 0x11e6acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x11e6b0: 0x2103c
    ctx->pc = 0x11e6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11e6b4: 0x2103f
    ctx->pc = 0x11e6b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11e6b8: 0x240a0001
    ctx->pc = 0x11e6b8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e6bc: 0xaca20000
    ctx->pc = 0x11e6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_11e6c0:
    // 0x11e6c0: 0x25290001
    ctx->pc = 0x11e6c0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
label_11e6c4:
    // 0x11e6c4: 0x2d22000a
    ctx->pc = 0x11e6c4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 9), 10));
    // 0x11e6c8: 0x10400003
    ctx->pc = 0x11E6C8u;
    {
        const bool branch_taken_0x11e6c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x11E6CCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
        if (branch_taken_0x11e6c8) {
            ctx->pc = 0x11E6D8u;
            goto label_11e6d8;
        }
    }
    ctx->pc = 0x11E6D0u;
    // 0x11e6d0: 0x5140ffb9
    ctx->pc = 0x11E6D0u;
    {
        const bool branch_taken_0x11e6d0 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        if (branch_taken_0x11e6d0) {
            ctx->pc = 0x11E6D4u;
            SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->pc = 0x11E5B8u;
            goto label_11e5b8;
        }
    }
    ctx->pc = 0x11E6D8u;
label_11e6d8:
    // 0x11e6d8: 0xdfb70070
    ctx->pc = 0x11e6d8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11e6dc: 0x140102d
    ctx->pc = 0x11e6dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e6e0: 0xdfb60060
    ctx->pc = 0x11e6e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11e6e4: 0xdfb50050
    ctx->pc = 0x11e6e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11e6e8: 0xdfb40040
    ctx->pc = 0x11e6e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11e6ec: 0xdfb30030
    ctx->pc = 0x11e6ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11e6f0: 0xdfb20020
    ctx->pc = 0x11e6f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e6f4: 0xdfb10010
    ctx->pc = 0x11e6f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11e6f8: 0xdfb00000
    ctx->pc = 0x11e6f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11e6fc: 0x3e00008
    ctx->pc = 0x11E6FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E700u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E5B8u: goto label_11e5b8;
            case 0x11E5D8u: goto label_11e5d8;
            case 0x11E600u: goto label_11e600;
            case 0x11E634u: goto label_11e634;
            case 0x11E64Cu: goto label_11e64c;
            case 0x11E654u: goto label_11e654;
            case 0x11E658u: goto label_11e658;
            case 0x11E65Cu: goto label_11e65c;
            case 0x11E66Cu: goto label_11e66c;
            case 0x11E688u: goto label_11e688;
            case 0x11E69Cu: goto label_11e69c;
            case 0x11E6A0u: goto label_11e6a0;
            case 0x11E6ACu: goto label_11e6ac;
            case 0x11E6C0u: goto label_11e6c0;
            case 0x11E6C4u: goto label_11e6c4;
            case 0x11E6D8u: goto label_11e6d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11E704u;
}
