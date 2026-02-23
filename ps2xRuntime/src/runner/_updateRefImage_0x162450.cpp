#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _updateRefImage
// Address: 0x162450 - 0x16282c
void _updateRefImage_0x162450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_updateRefImage");


    ctx->pc = 0x162450u;

    // 0x162450: 0x27bdffb0
    ctx->pc = 0x162450u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x162454: 0x3c020023
    ctx->pc = 0x162454u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x162458: 0xffb20020
    ctx->pc = 0x162458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16245c: 0x240b0004
    ctx->pc = 0x16245cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 4));
    // 0x162460: 0x3c120023
    ctx->pc = 0x162460u;
    SET_GPR_U32(ctx, 18, ((uint32_t)35 << 16));
    // 0x162464: 0xffb30030
    ctx->pc = 0x162464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x162468: 0x8e4aa3ec
    ctx->pc = 0x162468u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 18), 4294943724)));
    // 0x16246c: 0x3c130023
    ctx->pc = 0x16246cu;
    SET_GPR_U32(ctx, 19, ((uint32_t)35 << 16));
    // 0x162470: 0xffb10010
    ctx->pc = 0x162470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x162474: 0x80702d
    ctx->pc = 0x162474u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162478: 0xffb00000
    ctx->pc = 0x162478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16247c: 0x24110002
    ctx->pc = 0x16247cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 2));
    // 0x162480: 0x8c43a21c
    ctx->pc = 0x162480u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943260)));
    // 0x162484: 0x140782d
    ctx->pc = 0x162484u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162488: 0xffb40040
    ctx->pc = 0x162488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x16248c: 0x39420003
    ctx->pc = 0x16248cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 10), 3));
    // 0x162490: 0x8e6da3bc
    ctx->pc = 0x162490u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 19), 4294943676)));
    // 0x162494: 0x222580a
    ctx->pc = 0x162494u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 11, GPR_U32(ctx, 17));
    // 0x162498: 0x8c690040
    ctx->pc = 0x162498u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x16249c: 0xc02d
    ctx->pc = 0x16249cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1624a0: 0x24100003
    ctx->pc = 0x1624a0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1624a4: 0x15b0005b
    ctx->pc = 0x1624A4u;
    {
        const bool branch_taken_0x1624a4 = (GPR_U32(ctx, 13) != GPR_U32(ctx, 16));
        ctx->pc = 0x1624A8u;
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1624a4) {
            ctx->pc = 0x162614u;
            goto label_162614;
        }
    }
    ctx->pc = 0x1624ACu;
    // 0x1624ac: 0x3c040023
    ctx->pc = 0x1624acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x1624b0: 0x3c080023
    ctx->pc = 0x1624b0u;
    SET_GPR_U32(ctx, 8, ((uint32_t)35 << 16));
    // 0x1624b4: 0x8c87a248
    ctx->pc = 0x1624b4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 4294943304)));
    // 0x1624b8: 0x3c060023
    ctx->pc = 0x1624b8u;
    SET_GPR_U32(ctx, 6, ((uint32_t)35 << 16));
    // 0x1624bc: 0x8d2200a0
    ctx->pc = 0x1624bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 160)));
    // 0x1624c0: 0x3c140023
    ctx->pc = 0x1624c0u;
    SET_GPR_U32(ctx, 20, ((uint32_t)35 << 16));
    // 0x1624c4: 0x8d2300a4
    ctx->pc = 0x1624c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 164)));
    // 0x1624c8: 0x3c0c0023
    ctx->pc = 0x1624c8u;
    SET_GPR_U32(ctx, 12, ((uint32_t)35 << 16));
    // 0x1624cc: 0x8d04a260
    ctx->pc = 0x1624ccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 8), 4294943328)));
    // 0x1624d0: 0x8cc5a254
    ctx->pc = 0x1624d0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 4294943316)));
    // 0x1624d4: 0x431021
    ctx->pc = 0x1624d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1624d8: 0x3c080023
    ctx->pc = 0x1624d8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)35 << 16));
    // 0x1624dc: 0x4b102a
    ctx->pc = 0x1624dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 11)));
    // 0x1624e0: 0xae87a484
    ctx->pc = 0x1624e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294943876), GPR_U32(ctx, 7));
    // 0x1624e4: 0xad85a488
    ctx->pc = 0x1624e4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294943880), GPR_U32(ctx, 5));
    // 0x1624e8: 0x14400007
    ctx->pc = 0x1624E8u;
    {
        const bool branch_taken_0x1624e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1624ECu;
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294943884), GPR_U32(ctx, 4));
        if (branch_taken_0x1624e8) {
            ctx->pc = 0x162508u;
            goto label_162508;
        }
    }
    ctx->pc = 0x1624F0u;
    // 0x1624f0: 0xad2000e8
    ctx->pc = 0x1624f0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 232), GPR_U32(ctx, 0));
    // 0x1624f4: 0x3c070023
    ctx->pc = 0x1624f4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)35 << 16));
    // 0x1624f8: 0x3c020023
    ctx->pc = 0x1624f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1624fc: 0xace0a474
    ctx->pc = 0x1624fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294943860), GPR_U32(ctx, 0));
    // 0x162500: 0x10000002
    ctx->pc = 0x162500u;
    {
        const bool branch_taken_0x162500 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x162504u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294943856), GPR_U32(ctx, 0));
        if (branch_taken_0x162500) {
            ctx->pc = 0x16250Cu;
            goto label_16250c;
        }
    }
    ctx->pc = 0x162508u;
label_162508:
    // 0x162508: 0x3c070023
    ctx->pc = 0x162508u;
    SET_GPR_U32(ctx, 7, ((uint32_t)35 << 16));
label_16250c:
    // 0x16250c: 0x8d2200e8
    ctx->pc = 0x16250cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 232)));
    // 0x162510: 0x14400004
    ctx->pc = 0x162510u;
    {
        const bool branch_taken_0x162510 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x162514u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x162510) {
            ctx->pc = 0x162524u;
            goto label_162524;
        }
    }
    ctx->pc = 0x162518u;
    // 0x162518: 0x8ce2a474
    ctx->pc = 0x162518u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4294943860)));
    // 0x16251c: 0x1040000d
    ctx->pc = 0x16251Cu;
    {
        const bool branch_taken_0x16251c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x162520u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x16251c) {
            ctx->pc = 0x162554u;
            goto label_162554;
        }
    }
    ctx->pc = 0x162524u;
label_162524:
    // 0x162524: 0x8c43a470
    ctx->pc = 0x162524u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943856)));
    // 0x162528: 0x5460000b
    ctx->pc = 0x162528u;
    {
        const bool branch_taken_0x162528 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x162528) {
            ctx->pc = 0x16252Cu;
            WRITE32(ADD32(GPR_U32(ctx, 9), 232), GPR_U32(ctx, 0));
            ctx->pc = 0x162558u;
            goto label_162558;
        }
    }
    ctx->pc = 0x162530u;
    // 0x162530: 0x3c020023
    ctx->pc = 0x162530u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x162534: 0x3c030023
    ctx->pc = 0x162534u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x162538: 0x8c44a240
    ctx->pc = 0x162538u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294943296)));
    // 0x16253c: 0x3c050023
    ctx->pc = 0x16253cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x162540: 0x8c66a24c
    ctx->pc = 0x162540u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4294943308)));
    // 0x162544: 0xac800028
    ctx->pc = 0x162544u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x162548: 0x8ca2a258
    ctx->pc = 0x162548u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4294943320)));
    // 0x16254c: 0xacc00028
    ctx->pc = 0x16254cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x162550: 0xac400028
    ctx->pc = 0x162550u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_162554:
    // 0x162554: 0xad2000e8
    ctx->pc = 0x162554u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 232), GPR_U32(ctx, 0));
label_162558:
    // 0x162558: 0x24030003
    ctx->pc = 0x162558u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x16255c: 0x8e42a3ec
    ctx->pc = 0x16255cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294943724)));
    // 0x162560: 0x14430011
    ctx->pc = 0x162560u;
    {
        const bool branch_taken_0x162560 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x162564u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 4294943860), GPR_U32(ctx, 0));
        if (branch_taken_0x162560) {
            ctx->pc = 0x1625A8u;
            goto label_1625a8;
        }
    }
    ctx->pc = 0x162568u;
    // 0x162568: 0x3c020023
    ctx->pc = 0x162568u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x16256c: 0x24050001
    ctx->pc = 0x16256cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x162570: 0x8c43a240
    ctx->pc = 0x162570u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943296)));
    // 0x162574: 0x8c640028
    ctx->pc = 0x162574u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x162578: 0x10850004
    ctx->pc = 0x162578u;
    {
        const bool branch_taken_0x162578 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 5));
        ctx->pc = 0x16257Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x162578) {
            ctx->pc = 0x16258Cu;
            goto label_16258c;
        }
    }
    ctx->pc = 0x162580u;
    // 0x162580: 0x8c43a470
    ctx->pc = 0x162580u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943856)));
    // 0x162584: 0x10600063
    ctx->pc = 0x162584u;
    {
        const bool branch_taken_0x162584 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x162588u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4294943724)));
        if (branch_taken_0x162584) {
            ctx->pc = 0x162714u;
            goto label_162714;
        }
    }
    ctx->pc = 0x16258Cu;
label_16258c:
    // 0x16258c: 0x3c040023
    ctx->pc = 0x16258cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x162590: 0xa0c82d
    ctx->pc = 0x162590u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162594: 0x8c83a244
    ctx->pc = 0x162594u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294943300)));
    // 0x162598: 0x8c620028
    ctx->pc = 0x162598u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x16259c: 0x38420001
    ctx->pc = 0x16259cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x1625a0: 0x1000005b
    ctx->pc = 0x1625A0u;
    {
        const bool branch_taken_0x1625a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1625A4u;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 25, GPR_U32(ctx, 0));
        if (branch_taken_0x1625a0) {
            ctx->pc = 0x162710u;
            goto label_162710;
        }
    }
    ctx->pc = 0x1625A8u;
label_1625a8:
    // 0x1625a8: 0x3c020023
    ctx->pc = 0x1625a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1625ac: 0x24040001
    ctx->pc = 0x1625acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1625b0: 0x8c43a24c
    ctx->pc = 0x1625b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943308)));
    // 0x1625b4: 0x8c650028
    ctx->pc = 0x1625b4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1625b8: 0x14a40006
    ctx->pc = 0x1625B8u;
    {
        const bool branch_taken_0x1625b8 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 4));
        ctx->pc = 0x1625BCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x1625b8) {
            ctx->pc = 0x1625D4u;
            goto label_1625d4;
        }
    }
    ctx->pc = 0x1625C0u;
    // 0x1625c0: 0x3c020023
    ctx->pc = 0x1625c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1625c4: 0x8c43a258
    ctx->pc = 0x1625c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943320)));
    // 0x1625c8: 0x8c640028
    ctx->pc = 0x1625c8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1625cc: 0x10850004
    ctx->pc = 0x1625CCu;
    {
        const bool branch_taken_0x1625cc = (GPR_U32(ctx, 4) == GPR_U32(ctx, 5));
        ctx->pc = 0x1625D0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x1625cc) {
            ctx->pc = 0x1625E0u;
            goto label_1625e0;
        }
    }
    ctx->pc = 0x1625D4u;
label_1625d4:
    // 0x1625d4: 0x8c43a470
    ctx->pc = 0x1625d4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943856)));
    // 0x1625d8: 0x1060004e
    ctx->pc = 0x1625D8u;
    {
        const bool branch_taken_0x1625d8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1625DCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4294943724)));
        if (branch_taken_0x1625d8) {
            ctx->pc = 0x162714u;
            goto label_162714;
        }
    }
    ctx->pc = 0x1625E0u;
label_1625e0:
    // 0x1625e0: 0x3c020023
    ctx->pc = 0x1625e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1625e4: 0x24040001
    ctx->pc = 0x1625e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1625e8: 0x8c43a250
    ctx->pc = 0x1625e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943312)));
    // 0x1625ec: 0x8c650028
    ctx->pc = 0x1625ecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1625f0: 0x14a40048
    ctx->pc = 0x1625F0u;
    {
        const bool branch_taken_0x1625f0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 4));
        ctx->pc = 0x1625F4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4294943724)));
        if (branch_taken_0x1625f0) {
            ctx->pc = 0x162714u;
            goto label_162714;
        }
    }
    ctx->pc = 0x1625F8u;
    // 0x1625f8: 0x3c020023
    ctx->pc = 0x1625f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1625fc: 0xa0c82d
    ctx->pc = 0x1625fcu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162600: 0x8c44a25c
    ctx->pc = 0x162600u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294943324)));
    // 0x162604: 0x8c830028
    ctx->pc = 0x162604u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x162608: 0x38630001
    ctx->pc = 0x162608u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 1));
    // 0x16260c: 0x10000040
    ctx->pc = 0x16260Cu;
    {
        const bool branch_taken_0x16260c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x162610u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 25, GPR_U32(ctx, 0));
        if (branch_taken_0x16260c) {
            ctx->pc = 0x162710u;
            goto label_162710;
        }
    }
    ctx->pc = 0x162614u;
label_162614:
    // 0x162614: 0x15c00013
    ctx->pc = 0x162614u;
    {
        const bool branch_taken_0x162614 = (GPR_U32(ctx, 14) != GPR_U32(ctx, 0));
        ctx->pc = 0x162618u;
        SET_GPR_U32(ctx, 12, ((uint32_t)35 << 16));
        if (branch_taken_0x162614) {
            ctx->pc = 0x162664u;
            goto label_162664;
        }
    }
    ctx->pc = 0x16261Cu;
    // 0x16261c: 0x3c060023
    ctx->pc = 0x16261cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)35 << 16));
    // 0x162620: 0x8cc8a240
    ctx->pc = 0x162620u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 6), 4294943296)));
    // 0x162624: 0x3c050023
    ctx->pc = 0x162624u;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x162628: 0x8d87a244
    ctx->pc = 0x162628u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 12), 4294943300)));
    // 0x16262c: 0x3c0b0023
    ctx->pc = 0x16262cu;
    SET_GPR_U32(ctx, 11, ((uint32_t)35 << 16));
    // 0x162630: 0xad88a244
    ctx->pc = 0x162630u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294943300), GPR_U32(ctx, 8));
    // 0x162634: 0x3c040023
    ctx->pc = 0x162634u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x162638: 0x8ca8a24c
    ctx->pc = 0x162638u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 5), 4294943308)));
    // 0x16263c: 0x3c090023
    ctx->pc = 0x16263cu;
    SET_GPR_U32(ctx, 9, ((uint32_t)35 << 16));
    // 0x162640: 0x8d63a250
    ctx->pc = 0x162640u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 11), 4294943312)));
    // 0x162644: 0xad68a250
    ctx->pc = 0x162644u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4294943312), GPR_U32(ctx, 8));
    // 0x162648: 0x8c88a258
    ctx->pc = 0x162648u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 4294943320)));
    // 0x16264c: 0x8d22a25c
    ctx->pc = 0x16264cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 4294943324)));
    // 0x162650: 0xacc7a240
    ctx->pc = 0x162650u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294943296), GPR_U32(ctx, 7));
    // 0x162654: 0xaca3a24c
    ctx->pc = 0x162654u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294943308), GPR_U32(ctx, 3));
    // 0x162658: 0xac82a258
    ctx->pc = 0x162658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294943320), GPR_U32(ctx, 2));
    // 0x16265c: 0x10000003
    ctx->pc = 0x16265Cu;
    {
        const bool branch_taken_0x16265c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x162660u;
        WRITE32(ADD32(GPR_U32(ctx, 9), 4294943324), GPR_U32(ctx, 8));
        if (branch_taken_0x16265c) {
            ctx->pc = 0x16266Cu;
            goto label_16266c;
        }
    }
    ctx->pc = 0x162664u;
label_162664:
    // 0x162664: 0x3c0b0023
    ctx->pc = 0x162664u;
    SET_GPR_U32(ctx, 11, ((uint32_t)35 << 16));
    // 0x162668: 0x3c090023
    ctx->pc = 0x162668u;
    SET_GPR_U32(ctx, 9, ((uint32_t)35 << 16));
label_16266c:
    // 0x16266c: 0x8d82a244
    ctx->pc = 0x16266cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 4294943300)));
    // 0x162670: 0x3c140023
    ctx->pc = 0x162670u;
    SET_GPR_U32(ctx, 20, ((uint32_t)35 << 16));
    // 0x162674: 0x8d65a250
    ctx->pc = 0x162674u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 11), 4294943312)));
    // 0x162678: 0x3c0c0023
    ctx->pc = 0x162678u;
    SET_GPR_U32(ctx, 12, ((uint32_t)35 << 16));
    // 0x16267c: 0x8d24a25c
    ctx->pc = 0x16267cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 4294943324)));
    // 0x162680: 0x3c080023
    ctx->pc = 0x162680u;
    SET_GPR_U32(ctx, 8, ((uint32_t)35 << 16));
    // 0x162684: 0xae82a484
    ctx->pc = 0x162684u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294943876), GPR_U32(ctx, 2));
    // 0x162688: 0xad85a488
    ctx->pc = 0x162688u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294943880), GPR_U32(ctx, 5));
    // 0x16268c: 0x15f0000b
    ctx->pc = 0x16268Cu;
    {
        const bool branch_taken_0x16268c = (GPR_U32(ctx, 15) != GPR_U32(ctx, 16));
        ctx->pc = 0x162690u;
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294943884), GPR_U32(ctx, 4));
        if (branch_taken_0x16268c) {
            ctx->pc = 0x1626BCu;
            goto label_1626bc;
        }
    }
    ctx->pc = 0x162694u;
    // 0x162694: 0x55b1001e
    ctx->pc = 0x162694u;
    {
        const bool branch_taken_0x162694 = (GPR_U32(ctx, 13) != GPR_U32(ctx, 17));
        if (branch_taken_0x162694) {
            ctx->pc = 0x162698u;
            SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x162710u;
            goto label_162710;
        }
    }
    ctx->pc = 0x16269Cu;
    // 0x16269c: 0x3c040023
    ctx->pc = 0x16269cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x1626a0: 0x24050001
    ctx->pc = 0x1626a0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1626a4: 0x8c82a240
    ctx->pc = 0x1626a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294943296)));
    // 0x1626a8: 0x8c430028
    ctx->pc = 0x1626a8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1626ac: 0x14650019
    ctx->pc = 0x1626ACu;
    {
        const bool branch_taken_0x1626ac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 5));
        ctx->pc = 0x1626B0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4294943724)));
        if (branch_taken_0x1626ac) {
            ctx->pc = 0x162714u;
            goto label_162714;
        }
    }
    ctx->pc = 0x1626B4u;
    // 0x1626b4: 0x10000017
    ctx->pc = 0x1626B4u;
    {
        const bool branch_taken_0x1626b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1626B8u;
        SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1626b4) {
            ctx->pc = 0x162714u;
            goto label_162714;
        }
    }
    ctx->pc = 0x1626BCu;
label_1626bc:
    // 0x1626bc: 0x39420001
    ctx->pc = 0x1626bcu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 10), 1));
    // 0x1626c0: 0x8e63a3bc
    ctx->pc = 0x1626c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 4294943676)));
    // 0x1626c4: 0xa2200b
    ctx->pc = 0x1626c4u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 5));
    // 0x1626c8: 0x24020002
    ctx->pc = 0x1626c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1626cc: 0x1462000f
    ctx->pc = 0x1626CCu;
    {
        const bool branch_taken_0x1626cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1626D0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1626cc) {
            ctx->pc = 0x16270Cu;
            goto label_16270c;
        }
    }
    ctx->pc = 0x1626D4u;
    // 0x1626d4: 0x11c00004
    ctx->pc = 0x1626D4u;
    {
        const bool branch_taken_0x1626d4 = (GPR_U32(ctx, 14) == GPR_U32(ctx, 0));
        ctx->pc = 0x1626D8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x1626d4) {
            ctx->pc = 0x1626E8u;
            goto label_1626e8;
        }
    }
    ctx->pc = 0x1626DCu;
    // 0x1626dc: 0x8c820028
    ctx->pc = 0x1626dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1626e0: 0x1046000a
    ctx->pc = 0x1626E0u;
    {
        const bool branch_taken_0x1626e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 6));
        ctx->pc = 0x1626E4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x1626e0) {
            ctx->pc = 0x16270Cu;
            goto label_16270c;
        }
    }
    ctx->pc = 0x1626E8u;
label_1626e8:
    // 0x1626e8: 0x8c43a24c
    ctx->pc = 0x1626e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943308)));
    // 0x1626ec: 0x8c650028
    ctx->pc = 0x1626ecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1626f0: 0x14a60008
    ctx->pc = 0x1626F0u;
    {
        const bool branch_taken_0x1626f0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 6));
        ctx->pc = 0x1626F4u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4294943724)));
        if (branch_taken_0x1626f0) {
            ctx->pc = 0x162714u;
            goto label_162714;
        }
    }
    ctx->pc = 0x1626F8u;
    // 0x1626f8: 0x3c020023
    ctx->pc = 0x1626f8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1626fc: 0x8c43a258
    ctx->pc = 0x1626fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294943320)));
    // 0x162700: 0x8c640028
    ctx->pc = 0x162700u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x162704: 0x14850003
    ctx->pc = 0x162704u;
    {
        const bool branch_taken_0x162704 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 5));
        ctx->pc = 0x162708u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4294943724)));
        if (branch_taken_0x162704) {
            ctx->pc = 0x162714u;
            goto label_162714;
        }
    }
    ctx->pc = 0x16270Cu;
label_16270c:
    // 0x16270c: 0x24190001
    ctx->pc = 0x16270cu;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 0), 1));
label_162710:
    // 0x162710: 0x8e43a3ec
    ctx->pc = 0x162710u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4294943724)));
label_162714:
    // 0x162714: 0x24020002
    ctx->pc = 0x162714u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x162718: 0x1062000e
    ctx->pc = 0x162718u;
    {
        const bool branch_taken_0x162718 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x16271Cu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
        if (branch_taken_0x162718) {
            ctx->pc = 0x162754u;
            goto label_162754;
        }
    }
    ctx->pc = 0x162720u;
    // 0x162720: 0x10400005
    ctx->pc = 0x162720u;
    {
        const bool branch_taken_0x162720 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x162724u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x162720) {
            ctx->pc = 0x162738u;
            goto label_162738;
        }
    }
    ctx->pc = 0x162728u;
    // 0x162728: 0x10620008
    ctx->pc = 0x162728u;
    {
        const bool branch_taken_0x162728 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x16272Cu;
        SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
        if (branch_taken_0x162728) {
            ctx->pc = 0x16274Cu;
            goto label_16274c;
        }
    }
    ctx->pc = 0x162730u;
    // 0x162730: 0x1000000b
    ctx->pc = 0x162730u;
    {
        const bool branch_taken_0x162730 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x162734u;
        SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
        if (branch_taken_0x162730) {
            ctx->pc = 0x162760u;
            goto label_162760;
        }
    }
    ctx->pc = 0x162738u;
label_162738:
    // 0x162738: 0x24020003
    ctx->pc = 0x162738u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x16273c: 0x50620006
    ctx->pc = 0x16273Cu;
    {
        const bool branch_taken_0x16273c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x16273c) {
            ctx->pc = 0x162740u;
            SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 20), 4294943876)));
            ctx->pc = 0x162758u;
            goto label_162758;
        }
    }
    ctx->pc = 0x162744u;
    // 0x162744: 0x10000005
    ctx->pc = 0x162744u;
    {
        const bool branch_taken_0x162744 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x162748u;
        SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
        if (branch_taken_0x162744) {
            ctx->pc = 0x16275Cu;
            goto label_16275c;
        }
    }
    ctx->pc = 0x16274Cu;
label_16274c:
    // 0x16274c: 0x10000002
    ctx->pc = 0x16274Cu;
    {
        const bool branch_taken_0x16274c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x162750u;
        SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 12), 4294943880)));
        if (branch_taken_0x16274c) {
            ctx->pc = 0x162758u;
            goto label_162758;
        }
    }
    ctx->pc = 0x162754u;
label_162754:
    // 0x162754: 0x8d18a48c
    ctx->pc = 0x162754u;
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 8), 4294943884)));
label_162758:
    // 0x162758: 0x3c030023
    ctx->pc = 0x162758u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
label_16275c:
    // 0x16275c: 0x3c020023
    ctx->pc = 0x16275cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
label_162760:
    // 0x162760: 0x8c6aa408
    ctx->pc = 0x162760u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 3), 4294943752)));
    // 0x162764: 0x3c040023
    ctx->pc = 0x162764u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x162768: 0x3c050023
    ctx->pc = 0x162768u;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x16276c: 0x8e6ca3bc
    ctx->pc = 0x16276cu;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 19), 4294943676)));
    // 0x162770: 0x8ca3a400
    ctx->pc = 0x162770u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4294943744)));
    // 0x162774: 0x3c060023
    ctx->pc = 0x162774u;
    SET_GPR_U32(ctx, 6, ((uint32_t)35 << 16));
    // 0x162778: 0x8e4da3ec
    ctx->pc = 0x162778u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 18), 4294943724)));
    // 0x16277c: 0x3c070023
    ctx->pc = 0x16277cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)35 << 16));
    // 0x162780: 0x8c4ba388
    ctx->pc = 0x162780u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 2), 4294943624)));
    // 0x162784: 0x3c090023
    ctx->pc = 0x162784u;
    SET_GPR_U32(ctx, 9, ((uint32_t)35 << 16));
    // 0x162788: 0x8c88a3f0
    ctx->pc = 0x162788u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 4294943728)));
    // 0x16278c: 0x3c050023
    ctx->pc = 0x16278cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)35 << 16));
    // 0x162790: 0xdcceaac8
    ctx->pc = 0x162790u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 6), 4294945480)));
    // 0x162794: 0x3c040023
    ctx->pc = 0x162794u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x162798: 0xdcefaad0
    ctx->pc = 0x162798u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 7), 4294945488)));
    // 0x16279c: 0x2530a428
    ctx->pc = 0x16279cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 9), 4294943784));
    // 0x1627a0: 0xaf0c002c
    ctx->pc = 0x1627a0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 44), GPR_U32(ctx, 12));
    // 0x1627a4: 0x3c110023
    ctx->pc = 0x1627a4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)35 << 16));
    // 0x1627a8: 0xaf0d0030
    ctx->pc = 0x1627a8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 48), GPR_U32(ctx, 13));
    // 0x1627ac: 0x2632a438
    ctx->pc = 0x1627acu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 4294943800));
    // 0x1627b0: 0xaf0b0034
    ctx->pc = 0x1627b0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 52), GPR_U32(ctx, 11));
    // 0x1627b4: 0x320102d
    ctx->pc = 0x1627b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1627b8: 0xaf0a0038
    ctx->pc = 0x1627b8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 56), GPR_U32(ctx, 10));
    // 0x1627bc: 0xaf08003c
    ctx->pc = 0x1627bcu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 60), GPR_U32(ctx, 8));
    // 0x1627c0: 0xaf030040
    ctx->pc = 0x1627c0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 64), GPR_U32(ctx, 3));
    // 0x1627c4: 0xaf000028
    ctx->pc = 0x1627c4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 40), GPR_U32(ctx, 0));
    // 0x1627c8: 0x8c87a3b0
    ctx->pc = 0x1627c8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 4294943664)));
    // 0x1627cc: 0x8d23a428
    ctx->pc = 0x1627ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 4294943784)));
    // 0x1627d0: 0x8ca6a3b4
    ctx->pc = 0x1627d0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 4294943668)));
    // 0x1627d4: 0xaf030044
    ctx->pc = 0x1627d4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 68), GPR_U32(ctx, 3));
    // 0x1627d8: 0xdfb40040
    ctx->pc = 0x1627d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1627dc: 0x8e040004
    ctx->pc = 0x1627dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1627e0: 0xdfb30030
    ctx->pc = 0x1627e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1627e4: 0xaf040048
    ctx->pc = 0x1627e4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 72), GPR_U32(ctx, 4));
    // 0x1627e8: 0xff0e0018
    ctx->pc = 0x1627e8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 24), GPR_U64(ctx, 14));
    // 0x1627ec: 0x8e030008
    ctx->pc = 0x1627ecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1627f0: 0xdfb00000
    ctx->pc = 0x1627f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1627f4: 0xaf03004c
    ctx->pc = 0x1627f4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 76), GPR_U32(ctx, 3));
    // 0x1627f8: 0xff0f0020
    ctx->pc = 0x1627f8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 32), GPR_U64(ctx, 15));
    // 0x1627fc: 0x8e24a438
    ctx->pc = 0x1627fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294943800)));
    // 0x162800: 0xdfb10010
    ctx->pc = 0x162800u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162804: 0xaf040050
    ctx->pc = 0x162804u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 80), GPR_U32(ctx, 4));
    // 0x162808: 0x8e430004
    ctx->pc = 0x162808u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x16280c: 0xaf030054
    ctx->pc = 0x16280cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 84), GPR_U32(ctx, 3));
    // 0x162810: 0x8e440008
    ctx->pc = 0x162810u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x162814: 0xdfb20020
    ctx->pc = 0x162814u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162818: 0xaf060060
    ctx->pc = 0x162818u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 96), GPR_U32(ctx, 6));
    // 0x16281c: 0xaf040058
    ctx->pc = 0x16281cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 88), GPR_U32(ctx, 4));
    // 0x162820: 0xaf07005c
    ctx->pc = 0x162820u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 92), GPR_U32(ctx, 7));
    // 0x162824: 0x3e00008
    ctx->pc = 0x162824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162828u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162508u: goto label_162508;
            case 0x16250Cu: goto label_16250c;
            case 0x162524u: goto label_162524;
            case 0x162554u: goto label_162554;
            case 0x162558u: goto label_162558;
            case 0x16258Cu: goto label_16258c;
            case 0x1625A8u: goto label_1625a8;
            case 0x1625D4u: goto label_1625d4;
            case 0x1625E0u: goto label_1625e0;
            case 0x162614u: goto label_162614;
            case 0x162664u: goto label_162664;
            case 0x16266Cu: goto label_16266c;
            case 0x1626BCu: goto label_1626bc;
            case 0x1626E8u: goto label_1626e8;
            case 0x16270Cu: goto label_16270c;
            case 0x162710u: goto label_162710;
            case 0x162714u: goto label_162714;
            case 0x162738u: goto label_162738;
            case 0x16274Cu: goto label_16274c;
            case 0x162754u: goto label_162754;
            case 0x162758u: goto label_162758;
            case 0x16275Cu: goto label_16275c;
            case 0x162760u: goto label_162760;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16282Cu;
}
