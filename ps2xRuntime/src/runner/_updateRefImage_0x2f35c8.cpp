#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _updateRefImage
// Address: 0x2f35c8 - 0x2f39a4
void _updateRefImage_0x2f35c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f35c8u;

    // 0x2f35c8: 0x27bdffb0
    ctx->pc = 0x2f35c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f35cc: 0x3c02003a
    ctx->pc = 0x2f35ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f35d0: 0xffb20020
    ctx->pc = 0x2f35d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f35d4: 0x240b0004
    ctx->pc = 0x2f35d4u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f35d8: 0x3c12003a
    ctx->pc = 0x2f35d8u;
    SET_GPR_U32(ctx, 18, ((uint32_t)58 << 16));
    // 0x2f35dc: 0xffb30030
    ctx->pc = 0x2f35dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f35e0: 0x8e4a31ec
    ctx->pc = 0x2f35e0u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 18), 12780)));
    // 0x2f35e4: 0x3c13003a
    ctx->pc = 0x2f35e4u;
    SET_GPR_U32(ctx, 19, ((uint32_t)58 << 16));
    // 0x2f35e8: 0xffb10010
    ctx->pc = 0x2f35e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f35ec: 0x80702d
    ctx->pc = 0x2f35ecu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f35f0: 0xffb00000
    ctx->pc = 0x2f35f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f35f4: 0x24110002
    ctx->pc = 0x2f35f4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f35f8: 0x8c433024
    ctx->pc = 0x2f35f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12324)));
    // 0x2f35fc: 0x140782d
    ctx->pc = 0x2f35fcu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3600: 0xffb40040
    ctx->pc = 0x2f3600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2f3604: 0x39420003
    ctx->pc = 0x2f3604u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 10), 3));
    // 0x2f3608: 0x8e6d31bc
    ctx->pc = 0x2f3608u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 19), 12732)));
    // 0x2f360c: 0x222580a
    ctx->pc = 0x2f360cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 11, GPR_U32(ctx, 17));
    // 0x2f3610: 0x8c690040
    ctx->pc = 0x2f3610u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2f3614: 0xc02d
    ctx->pc = 0x2f3614u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3618: 0x24100003
    ctx->pc = 0x2f3618u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f361c: 0x15b0005b
    ctx->pc = 0x2F361Cu;
    {
        const bool branch_taken_0x2f361c = (GPR_U32(ctx, 13) != GPR_U32(ctx, 16));
        ctx->pc = 0x2F3620u;
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2f361c) {
            ctx->pc = 0x2F378Cu;
            goto label_2f378c;
        }
    }
    ctx->pc = 0x2F3624u;
    // 0x2f3624: 0x3c04003a
    ctx->pc = 0x2f3624u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2f3628: 0x3c08003a
    ctx->pc = 0x2f3628u;
    SET_GPR_U32(ctx, 8, ((uint32_t)58 << 16));
    // 0x2f362c: 0x8c873048
    ctx->pc = 0x2f362cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 12360)));
    // 0x2f3630: 0x3c06003a
    ctx->pc = 0x2f3630u;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
    // 0x2f3634: 0x8d2200a0
    ctx->pc = 0x2f3634u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 160)));
    // 0x2f3638: 0x3c14003a
    ctx->pc = 0x2f3638u;
    SET_GPR_U32(ctx, 20, ((uint32_t)58 << 16));
    // 0x2f363c: 0x8d2300a4
    ctx->pc = 0x2f363cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 164)));
    // 0x2f3640: 0x3c0c003a
    ctx->pc = 0x2f3640u;
    SET_GPR_U32(ctx, 12, ((uint32_t)58 << 16));
    // 0x2f3644: 0x8d043060
    ctx->pc = 0x2f3644u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 8), 12384)));
    // 0x2f3648: 0x8cc53054
    ctx->pc = 0x2f3648u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 12372)));
    // 0x2f364c: 0x431021
    ctx->pc = 0x2f364cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f3650: 0x3c08003a
    ctx->pc = 0x2f3650u;
    SET_GPR_U32(ctx, 8, ((uint32_t)58 << 16));
    // 0x2f3654: 0x4b102a
    ctx->pc = 0x2f3654u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 11)));
    // 0x2f3658: 0xae873284
    ctx->pc = 0x2f3658u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12932), GPR_U32(ctx, 7));
    // 0x2f365c: 0xad853288
    ctx->pc = 0x2f365cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12936), GPR_U32(ctx, 5));
    // 0x2f3660: 0x14400007
    ctx->pc = 0x2F3660u;
    {
        const bool branch_taken_0x2f3660 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F3664u;
        WRITE32(ADD32(GPR_U32(ctx, 8), 12940), GPR_U32(ctx, 4));
        if (branch_taken_0x2f3660) {
            ctx->pc = 0x2F3680u;
            goto label_2f3680;
        }
    }
    ctx->pc = 0x2F3668u;
    // 0x2f3668: 0xad2000e8
    ctx->pc = 0x2f3668u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 232), GPR_U32(ctx, 0));
    // 0x2f366c: 0x3c07003a
    ctx->pc = 0x2f366cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)58 << 16));
    // 0x2f3670: 0x3c02003a
    ctx->pc = 0x2f3670u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f3674: 0xace03274
    ctx->pc = 0x2f3674u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12916), GPR_U32(ctx, 0));
    // 0x2f3678: 0x10000002
    ctx->pc = 0x2F3678u;
    {
        const bool branch_taken_0x2f3678 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F367Cu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 12912), GPR_U32(ctx, 0));
        if (branch_taken_0x2f3678) {
            ctx->pc = 0x2F3684u;
            goto label_2f3684;
        }
    }
    ctx->pc = 0x2F3680u;
label_2f3680:
    // 0x2f3680: 0x3c07003a
    ctx->pc = 0x2f3680u;
    SET_GPR_U32(ctx, 7, ((uint32_t)58 << 16));
label_2f3684:
    // 0x2f3684: 0x8d2200e8
    ctx->pc = 0x2f3684u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 232)));
    // 0x2f3688: 0x14400004
    ctx->pc = 0x2F3688u;
    {
        const bool branch_taken_0x2f3688 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F368Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f3688) {
            ctx->pc = 0x2F369Cu;
            goto label_2f369c;
        }
    }
    ctx->pc = 0x2F3690u;
    // 0x2f3690: 0x8ce23274
    ctx->pc = 0x2f3690u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 12916)));
    // 0x2f3694: 0x1040000d
    ctx->pc = 0x2F3694u;
    {
        const bool branch_taken_0x2f3694 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F3698u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f3694) {
            ctx->pc = 0x2F36CCu;
            goto label_2f36cc;
        }
    }
    ctx->pc = 0x2F369Cu;
label_2f369c:
    // 0x2f369c: 0x8c433270
    ctx->pc = 0x2f369cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12912)));
    // 0x2f36a0: 0x5460000b
    ctx->pc = 0x2F36A0u;
    {
        const bool branch_taken_0x2f36a0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2f36a0) {
            ctx->pc = 0x2F36A4u;
            WRITE32(ADD32(GPR_U32(ctx, 9), 232), GPR_U32(ctx, 0));
            ctx->pc = 0x2F36D0u;
            goto label_2f36d0;
        }
    }
    ctx->pc = 0x2F36A8u;
    // 0x2f36a8: 0x3c02003a
    ctx->pc = 0x2f36a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f36ac: 0x3c03003a
    ctx->pc = 0x2f36acu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2f36b0: 0x8c443040
    ctx->pc = 0x2f36b0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12352)));
    // 0x2f36b4: 0x3c05003a
    ctx->pc = 0x2f36b4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2f36b8: 0x8c66304c
    ctx->pc = 0x2f36b8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 12364)));
    // 0x2f36bc: 0xac800028
    ctx->pc = 0x2f36bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x2f36c0: 0x8ca23058
    ctx->pc = 0x2f36c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12376)));
    // 0x2f36c4: 0xacc00028
    ctx->pc = 0x2f36c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 0));
    // 0x2f36c8: 0xac400028
    ctx->pc = 0x2f36c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_2f36cc:
    // 0x2f36cc: 0xad2000e8
    ctx->pc = 0x2f36ccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 232), GPR_U32(ctx, 0));
label_2f36d0:
    // 0x2f36d0: 0x24030003
    ctx->pc = 0x2f36d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f36d4: 0x8e4231ec
    ctx->pc = 0x2f36d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 12780)));
    // 0x2f36d8: 0x14430011
    ctx->pc = 0x2F36D8u;
    {
        const bool branch_taken_0x2f36d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x2F36DCu;
        WRITE32(ADD32(GPR_U32(ctx, 7), 12916), GPR_U32(ctx, 0));
        if (branch_taken_0x2f36d8) {
            ctx->pc = 0x2F3720u;
            goto label_2f3720;
        }
    }
    ctx->pc = 0x2F36E0u;
    // 0x2f36e0: 0x3c02003a
    ctx->pc = 0x2f36e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f36e4: 0x24050001
    ctx->pc = 0x2f36e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f36e8: 0x8c433040
    ctx->pc = 0x2f36e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12352)));
    // 0x2f36ec: 0x8c640028
    ctx->pc = 0x2f36ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2f36f0: 0x10850004
    ctx->pc = 0x2F36F0u;
    {
        const bool branch_taken_0x2f36f0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 5));
        ctx->pc = 0x2F36F4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f36f0) {
            ctx->pc = 0x2F3704u;
            goto label_2f3704;
        }
    }
    ctx->pc = 0x2F36F8u;
    // 0x2f36f8: 0x8c433270
    ctx->pc = 0x2f36f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12912)));
    // 0x2f36fc: 0x10600063
    ctx->pc = 0x2F36FCu;
    {
        const bool branch_taken_0x2f36fc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F3700u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12780)));
        if (branch_taken_0x2f36fc) {
            ctx->pc = 0x2F388Cu;
            goto label_2f388c;
        }
    }
    ctx->pc = 0x2F3704u;
label_2f3704:
    // 0x2f3704: 0x3c04003a
    ctx->pc = 0x2f3704u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2f3708: 0xa0c82d
    ctx->pc = 0x2f3708u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f370c: 0x8c833044
    ctx->pc = 0x2f370cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12356)));
    // 0x2f3710: 0x8c620028
    ctx->pc = 0x2f3710u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2f3714: 0x38420001
    ctx->pc = 0x2f3714u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x2f3718: 0x1000005b
    ctx->pc = 0x2F3718u;
    {
        const bool branch_taken_0x2f3718 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F371Cu;
        if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 25, GPR_U32(ctx, 0));
        if (branch_taken_0x2f3718) {
            ctx->pc = 0x2F3888u;
            goto label_2f3888;
        }
    }
    ctx->pc = 0x2F3720u;
label_2f3720:
    // 0x2f3720: 0x3c02003a
    ctx->pc = 0x2f3720u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f3724: 0x24040001
    ctx->pc = 0x2f3724u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3728: 0x8c43304c
    ctx->pc = 0x2f3728u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12364)));
    // 0x2f372c: 0x8c650028
    ctx->pc = 0x2f372cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2f3730: 0x14a40006
    ctx->pc = 0x2F3730u;
    {
        const bool branch_taken_0x2f3730 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 4));
        ctx->pc = 0x2F3734u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f3730) {
            ctx->pc = 0x2F374Cu;
            goto label_2f374c;
        }
    }
    ctx->pc = 0x2F3738u;
    // 0x2f3738: 0x3c02003a
    ctx->pc = 0x2f3738u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f373c: 0x8c433058
    ctx->pc = 0x2f373cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12376)));
    // 0x2f3740: 0x8c640028
    ctx->pc = 0x2f3740u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2f3744: 0x10850004
    ctx->pc = 0x2F3744u;
    {
        const bool branch_taken_0x2f3744 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 5));
        ctx->pc = 0x2F3748u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f3744) {
            ctx->pc = 0x2F3758u;
            goto label_2f3758;
        }
    }
    ctx->pc = 0x2F374Cu;
label_2f374c:
    // 0x2f374c: 0x8c433270
    ctx->pc = 0x2f374cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12912)));
    // 0x2f3750: 0x1060004e
    ctx->pc = 0x2F3750u;
    {
        const bool branch_taken_0x2f3750 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F3754u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12780)));
        if (branch_taken_0x2f3750) {
            ctx->pc = 0x2F388Cu;
            goto label_2f388c;
        }
    }
    ctx->pc = 0x2F3758u;
label_2f3758:
    // 0x2f3758: 0x3c02003a
    ctx->pc = 0x2f3758u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f375c: 0x24040001
    ctx->pc = 0x2f375cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f3760: 0x8c433050
    ctx->pc = 0x2f3760u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12368)));
    // 0x2f3764: 0x8c650028
    ctx->pc = 0x2f3764u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2f3768: 0x14a40048
    ctx->pc = 0x2F3768u;
    {
        const bool branch_taken_0x2f3768 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 4));
        ctx->pc = 0x2F376Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12780)));
        if (branch_taken_0x2f3768) {
            ctx->pc = 0x2F388Cu;
            goto label_2f388c;
        }
    }
    ctx->pc = 0x2F3770u;
    // 0x2f3770: 0x3c02003a
    ctx->pc = 0x2f3770u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f3774: 0xa0c82d
    ctx->pc = 0x2f3774u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3778: 0x8c44305c
    ctx->pc = 0x2f3778u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12380)));
    // 0x2f377c: 0x8c830028
    ctx->pc = 0x2f377cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2f3780: 0x38630001
    ctx->pc = 0x2f3780u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 3), 1));
    // 0x2f3784: 0x10000040
    ctx->pc = 0x2F3784u;
    {
        const bool branch_taken_0x2f3784 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F3788u;
        if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 25, GPR_U32(ctx, 0));
        if (branch_taken_0x2f3784) {
            ctx->pc = 0x2F3888u;
            goto label_2f3888;
        }
    }
    ctx->pc = 0x2F378Cu;
label_2f378c:
    // 0x2f378c: 0x15c00013
    ctx->pc = 0x2F378Cu;
    {
        const bool branch_taken_0x2f378c = (GPR_U32(ctx, 14) != GPR_U32(ctx, 0));
        ctx->pc = 0x2F3790u;
        SET_GPR_U32(ctx, 12, ((uint32_t)58 << 16));
        if (branch_taken_0x2f378c) {
            ctx->pc = 0x2F37DCu;
            goto label_2f37dc;
        }
    }
    ctx->pc = 0x2F3794u;
    // 0x2f3794: 0x3c06003a
    ctx->pc = 0x2f3794u;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
    // 0x2f3798: 0x8cc83040
    ctx->pc = 0x2f3798u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 6), 12352)));
    // 0x2f379c: 0x3c05003a
    ctx->pc = 0x2f379cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2f37a0: 0x8d873044
    ctx->pc = 0x2f37a0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 12), 12356)));
    // 0x2f37a4: 0x3c0b003a
    ctx->pc = 0x2f37a4u;
    SET_GPR_U32(ctx, 11, ((uint32_t)58 << 16));
    // 0x2f37a8: 0xad883044
    ctx->pc = 0x2f37a8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12356), GPR_U32(ctx, 8));
    // 0x2f37ac: 0x3c04003a
    ctx->pc = 0x2f37acu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2f37b0: 0x8ca8304c
    ctx->pc = 0x2f37b0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 5), 12364)));
    // 0x2f37b4: 0x3c09003a
    ctx->pc = 0x2f37b4u;
    SET_GPR_U32(ctx, 9, ((uint32_t)58 << 16));
    // 0x2f37b8: 0x8d633050
    ctx->pc = 0x2f37b8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 11), 12368)));
    // 0x2f37bc: 0xad683050
    ctx->pc = 0x2f37bcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12368), GPR_U32(ctx, 8));
    // 0x2f37c0: 0x8c883058
    ctx->pc = 0x2f37c0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 12376)));
    // 0x2f37c4: 0x8d22305c
    ctx->pc = 0x2f37c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 12380)));
    // 0x2f37c8: 0xacc73040
    ctx->pc = 0x2f37c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12352), GPR_U32(ctx, 7));
    // 0x2f37cc: 0xaca3304c
    ctx->pc = 0x2f37ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12364), GPR_U32(ctx, 3));
    // 0x2f37d0: 0xac823058
    ctx->pc = 0x2f37d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12376), GPR_U32(ctx, 2));
    // 0x2f37d4: 0x10000003
    ctx->pc = 0x2F37D4u;
    {
        const bool branch_taken_0x2f37d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F37D8u;
        WRITE32(ADD32(GPR_U32(ctx, 9), 12380), GPR_U32(ctx, 8));
        if (branch_taken_0x2f37d4) {
            ctx->pc = 0x2F37E4u;
            goto label_2f37e4;
        }
    }
    ctx->pc = 0x2F37DCu;
label_2f37dc:
    // 0x2f37dc: 0x3c0b003a
    ctx->pc = 0x2f37dcu;
    SET_GPR_U32(ctx, 11, ((uint32_t)58 << 16));
    // 0x2f37e0: 0x3c09003a
    ctx->pc = 0x2f37e0u;
    SET_GPR_U32(ctx, 9, ((uint32_t)58 << 16));
label_2f37e4:
    // 0x2f37e4: 0x8d823044
    ctx->pc = 0x2f37e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 12), 12356)));
    // 0x2f37e8: 0x3c14003a
    ctx->pc = 0x2f37e8u;
    SET_GPR_U32(ctx, 20, ((uint32_t)58 << 16));
    // 0x2f37ec: 0x8d653050
    ctx->pc = 0x2f37ecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 11), 12368)));
    // 0x2f37f0: 0x3c0c003a
    ctx->pc = 0x2f37f0u;
    SET_GPR_U32(ctx, 12, ((uint32_t)58 << 16));
    // 0x2f37f4: 0x8d24305c
    ctx->pc = 0x2f37f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 9), 12380)));
    // 0x2f37f8: 0x3c08003a
    ctx->pc = 0x2f37f8u;
    SET_GPR_U32(ctx, 8, ((uint32_t)58 << 16));
    // 0x2f37fc: 0xae823284
    ctx->pc = 0x2f37fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12932), GPR_U32(ctx, 2));
    // 0x2f3800: 0xad853288
    ctx->pc = 0x2f3800u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12936), GPR_U32(ctx, 5));
    // 0x2f3804: 0x15f0000b
    ctx->pc = 0x2F3804u;
    {
        const bool branch_taken_0x2f3804 = (GPR_U32(ctx, 15) != GPR_U32(ctx, 16));
        ctx->pc = 0x2F3808u;
        WRITE32(ADD32(GPR_U32(ctx, 8), 12940), GPR_U32(ctx, 4));
        if (branch_taken_0x2f3804) {
            ctx->pc = 0x2F3834u;
            goto label_2f3834;
        }
    }
    ctx->pc = 0x2F380Cu;
    // 0x2f380c: 0x55b1001e
    ctx->pc = 0x2F380Cu;
    {
        const bool branch_taken_0x2f380c = (GPR_U32(ctx, 13) != GPR_U32(ctx, 17));
        if (branch_taken_0x2f380c) {
            ctx->pc = 0x2F3810u;
            SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x2F3888u;
            goto label_2f3888;
        }
    }
    ctx->pc = 0x2F3814u;
    // 0x2f3814: 0x3c04003a
    ctx->pc = 0x2f3814u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2f3818: 0x24050001
    ctx->pc = 0x2f3818u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f381c: 0x8c823040
    ctx->pc = 0x2f381cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12352)));
    // 0x2f3820: 0x8c430028
    ctx->pc = 0x2f3820u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2f3824: 0x14650019
    ctx->pc = 0x2F3824u;
    {
        const bool branch_taken_0x2f3824 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 5));
        ctx->pc = 0x2F3828u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12780)));
        if (branch_taken_0x2f3824) {
            ctx->pc = 0x2F388Cu;
            goto label_2f388c;
        }
    }
    ctx->pc = 0x2F382Cu;
    // 0x2f382c: 0x10000017
    ctx->pc = 0x2F382Cu;
    {
        const bool branch_taken_0x2f382c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F3830u;
        SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2f382c) {
            ctx->pc = 0x2F388Cu;
            goto label_2f388c;
        }
    }
    ctx->pc = 0x2F3834u;
label_2f3834:
    // 0x2f3834: 0x39420001
    ctx->pc = 0x2f3834u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 10), 1));
    // 0x2f3838: 0x8e6331bc
    ctx->pc = 0x2f3838u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 12732)));
    // 0x2f383c: 0xa2200b
    ctx->pc = 0x2f383cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 5));
    // 0x2f3840: 0x24020002
    ctx->pc = 0x2f3840u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f3844: 0x1462000f
    ctx->pc = 0x2F3844u;
    {
        const bool branch_taken_0x2f3844 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2F3848u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2f3844) {
            ctx->pc = 0x2F3884u;
            goto label_2f3884;
        }
    }
    ctx->pc = 0x2F384Cu;
    // 0x2f384c: 0x11c00004
    ctx->pc = 0x2F384Cu;
    {
        const bool branch_taken_0x2f384c = (GPR_U32(ctx, 14) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F3850u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f384c) {
            ctx->pc = 0x2F3860u;
            goto label_2f3860;
        }
    }
    ctx->pc = 0x2F3854u;
    // 0x2f3854: 0x8c820028
    ctx->pc = 0x2f3854u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2f3858: 0x1046000a
    ctx->pc = 0x2F3858u;
    {
        const bool branch_taken_0x2f3858 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 6));
        ctx->pc = 0x2F385Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f3858) {
            ctx->pc = 0x2F3884u;
            goto label_2f3884;
        }
    }
    ctx->pc = 0x2F3860u;
label_2f3860:
    // 0x2f3860: 0x8c43304c
    ctx->pc = 0x2f3860u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12364)));
    // 0x2f3864: 0x8c650028
    ctx->pc = 0x2f3864u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2f3868: 0x14a60008
    ctx->pc = 0x2F3868u;
    {
        const bool branch_taken_0x2f3868 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 6));
        ctx->pc = 0x2F386Cu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12780)));
        if (branch_taken_0x2f3868) {
            ctx->pc = 0x2F388Cu;
            goto label_2f388c;
        }
    }
    ctx->pc = 0x2F3870u;
    // 0x2f3870: 0x3c02003a
    ctx->pc = 0x2f3870u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2f3874: 0x8c433058
    ctx->pc = 0x2f3874u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12376)));
    // 0x2f3878: 0x8c640028
    ctx->pc = 0x2f3878u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2f387c: 0x14850003
    ctx->pc = 0x2F387Cu;
    {
        const bool branch_taken_0x2f387c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 5));
        ctx->pc = 0x2F3880u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12780)));
        if (branch_taken_0x2f387c) {
            ctx->pc = 0x2F388Cu;
            goto label_2f388c;
        }
    }
    ctx->pc = 0x2F3884u;
label_2f3884:
    // 0x2f3884: 0x24190001
    ctx->pc = 0x2f3884u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 0), 1));
label_2f3888:
    // 0x2f3888: 0x8e4331ec
    ctx->pc = 0x2f3888u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 12780)));
label_2f388c:
    // 0x2f388c: 0x24020002
    ctx->pc = 0x2f388cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f3890: 0x1062000e
    ctx->pc = 0x2F3890u;
    {
        const bool branch_taken_0x2f3890 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2F3894u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
        if (branch_taken_0x2f3890) {
            ctx->pc = 0x2F38CCu;
            goto label_2f38cc;
        }
    }
    ctx->pc = 0x2F3898u;
    // 0x2f3898: 0x10400005
    ctx->pc = 0x2F3898u;
    {
        const bool branch_taken_0x2f3898 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F389Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2f3898) {
            ctx->pc = 0x2F38B0u;
            goto label_2f38b0;
        }
    }
    ctx->pc = 0x2F38A0u;
    // 0x2f38a0: 0x10620008
    ctx->pc = 0x2F38A0u;
    {
        const bool branch_taken_0x2f38a0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2F38A4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        if (branch_taken_0x2f38a0) {
            ctx->pc = 0x2F38C4u;
            goto label_2f38c4;
        }
    }
    ctx->pc = 0x2F38A8u;
    // 0x2f38a8: 0x1000000b
    ctx->pc = 0x2F38A8u;
    {
        const bool branch_taken_0x2f38a8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F38ACu;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2f38a8) {
            ctx->pc = 0x2F38D8u;
            goto label_2f38d8;
        }
    }
    ctx->pc = 0x2F38B0u;
label_2f38b0:
    // 0x2f38b0: 0x24020003
    ctx->pc = 0x2f38b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f38b4: 0x50620006
    ctx->pc = 0x2F38B4u;
    {
        const bool branch_taken_0x2f38b4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2f38b4) {
            ctx->pc = 0x2F38B8u;
            SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 20), 12932)));
            ctx->pc = 0x2F38D0u;
            goto label_2f38d0;
        }
    }
    ctx->pc = 0x2F38BCu;
    // 0x2f38bc: 0x10000005
    ctx->pc = 0x2F38BCu;
    {
        const bool branch_taken_0x2f38bc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F38C0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
        if (branch_taken_0x2f38bc) {
            ctx->pc = 0x2F38D4u;
            goto label_2f38d4;
        }
    }
    ctx->pc = 0x2F38C4u;
label_2f38c4:
    // 0x2f38c4: 0x10000002
    ctx->pc = 0x2F38C4u;
    {
        const bool branch_taken_0x2f38c4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F38C8u;
        SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 12), 12936)));
        if (branch_taken_0x2f38c4) {
            ctx->pc = 0x2F38D0u;
            goto label_2f38d0;
        }
    }
    ctx->pc = 0x2F38CCu;
label_2f38cc:
    // 0x2f38cc: 0x8d18328c
    ctx->pc = 0x2f38ccu;
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 8), 12940)));
label_2f38d0:
    // 0x2f38d0: 0x3c03003a
    ctx->pc = 0x2f38d0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
label_2f38d4:
    // 0x2f38d4: 0x3c02003a
    ctx->pc = 0x2f38d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
label_2f38d8:
    // 0x2f38d8: 0x8c6a3208
    ctx->pc = 0x2f38d8u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 3), 12808)));
    // 0x2f38dc: 0x3c04003a
    ctx->pc = 0x2f38dcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2f38e0: 0x3c05003a
    ctx->pc = 0x2f38e0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2f38e4: 0x8e6c31bc
    ctx->pc = 0x2f38e4u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 19), 12732)));
    // 0x2f38e8: 0x8ca33200
    ctx->pc = 0x2f38e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 12800)));
    // 0x2f38ec: 0x3c06003a
    ctx->pc = 0x2f38ecu;
    SET_GPR_U32(ctx, 6, ((uint32_t)58 << 16));
    // 0x2f38f0: 0x8e4d31ec
    ctx->pc = 0x2f38f0u;
    SET_GPR_U32(ctx, 13, READ32(ADD32(GPR_U32(ctx, 18), 12780)));
    // 0x2f38f4: 0x3c07003a
    ctx->pc = 0x2f38f4u;
    SET_GPR_U32(ctx, 7, ((uint32_t)58 << 16));
    // 0x2f38f8: 0x8c4b3188
    ctx->pc = 0x2f38f8u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 2), 12680)));
    // 0x2f38fc: 0x3c09003a
    ctx->pc = 0x2f38fcu;
    SET_GPR_U32(ctx, 9, ((uint32_t)58 << 16));
    // 0x2f3900: 0x8c8831f0
    ctx->pc = 0x2f3900u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 4), 12784)));
    // 0x2f3904: 0x3c05003a
    ctx->pc = 0x2f3904u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2f3908: 0xdcce38c8
    ctx->pc = 0x2f3908u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 6), 14536)));
    // 0x2f390c: 0x3c04003a
    ctx->pc = 0x2f390cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2f3910: 0xdcef38d0
    ctx->pc = 0x2f3910u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 7), 14544)));
    // 0x2f3914: 0x25303228
    ctx->pc = 0x2f3914u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 9), 12840));
    // 0x2f3918: 0xaf0c002c
    ctx->pc = 0x2f3918u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 44), GPR_U32(ctx, 12));
    // 0x2f391c: 0x3c11003a
    ctx->pc = 0x2f391cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)58 << 16));
    // 0x2f3920: 0xaf0d0030
    ctx->pc = 0x2f3920u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 48), GPR_U32(ctx, 13));
    // 0x2f3924: 0x26323238
    ctx->pc = 0x2f3924u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 17), 12856));
    // 0x2f3928: 0xaf0b0034
    ctx->pc = 0x2f3928u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 52), GPR_U32(ctx, 11));
    // 0x2f392c: 0x320102d
    ctx->pc = 0x2f392cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3930: 0xaf0a0038
    ctx->pc = 0x2f3930u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 56), GPR_U32(ctx, 10));
    // 0x2f3934: 0xaf08003c
    ctx->pc = 0x2f3934u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 60), GPR_U32(ctx, 8));
    // 0x2f3938: 0xaf030040
    ctx->pc = 0x2f3938u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 64), GPR_U32(ctx, 3));
    // 0x2f393c: 0xaf000028
    ctx->pc = 0x2f393cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 40), GPR_U32(ctx, 0));
    // 0x2f3940: 0x8c8731b0
    ctx->pc = 0x2f3940u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 12720)));
    // 0x2f3944: 0x8d233228
    ctx->pc = 0x2f3944u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 12840)));
    // 0x2f3948: 0x8ca631b4
    ctx->pc = 0x2f3948u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 12724)));
    // 0x2f394c: 0xaf030044
    ctx->pc = 0x2f394cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 68), GPR_U32(ctx, 3));
    // 0x2f3950: 0xdfb40040
    ctx->pc = 0x2f3950u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f3954: 0x8e040004
    ctx->pc = 0x2f3954u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f3958: 0xdfb30030
    ctx->pc = 0x2f3958u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f395c: 0xaf040048
    ctx->pc = 0x2f395cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 72), GPR_U32(ctx, 4));
    // 0x2f3960: 0xff0e0018
    ctx->pc = 0x2f3960u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 24), GPR_U64(ctx, 14));
    // 0x2f3964: 0x8e030008
    ctx->pc = 0x2f3964u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2f3968: 0xdfb00000
    ctx->pc = 0x2f3968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f396c: 0xaf03004c
    ctx->pc = 0x2f396cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 76), GPR_U32(ctx, 3));
    // 0x2f3970: 0xff0f0020
    ctx->pc = 0x2f3970u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 32), GPR_U64(ctx, 15));
    // 0x2f3974: 0x8e243238
    ctx->pc = 0x2f3974u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 12856)));
    // 0x2f3978: 0xdfb10010
    ctx->pc = 0x2f3978u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f397c: 0xaf040050
    ctx->pc = 0x2f397cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 80), GPR_U32(ctx, 4));
    // 0x2f3980: 0x8e430004
    ctx->pc = 0x2f3980u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2f3984: 0xaf030054
    ctx->pc = 0x2f3984u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 84), GPR_U32(ctx, 3));
    // 0x2f3988: 0x8e440008
    ctx->pc = 0x2f3988u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2f398c: 0xdfb20020
    ctx->pc = 0x2f398cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f3990: 0xaf060060
    ctx->pc = 0x2f3990u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 96), GPR_U32(ctx, 6));
    // 0x2f3994: 0xaf040058
    ctx->pc = 0x2f3994u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 88), GPR_U32(ctx, 4));
    // 0x2f3998: 0xaf07005c
    ctx->pc = 0x2f3998u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 92), GPR_U32(ctx, 7));
    // 0x2f399c: 0x3e00008
    ctx->pc = 0x2F399Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F39A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F3680u: goto label_2f3680;
            case 0x2F3684u: goto label_2f3684;
            case 0x2F369Cu: goto label_2f369c;
            case 0x2F36CCu: goto label_2f36cc;
            case 0x2F36D0u: goto label_2f36d0;
            case 0x2F3704u: goto label_2f3704;
            case 0x2F3720u: goto label_2f3720;
            case 0x2F374Cu: goto label_2f374c;
            case 0x2F3758u: goto label_2f3758;
            case 0x2F378Cu: goto label_2f378c;
            case 0x2F37DCu: goto label_2f37dc;
            case 0x2F37E4u: goto label_2f37e4;
            case 0x2F3834u: goto label_2f3834;
            case 0x2F3860u: goto label_2f3860;
            case 0x2F3884u: goto label_2f3884;
            case 0x2F3888u: goto label_2f3888;
            case 0x2F388Cu: goto label_2f388c;
            case 0x2F38B0u: goto label_2f38b0;
            case 0x2F38C4u: goto label_2f38c4;
            case 0x2F38CCu: goto label_2f38cc;
            case 0x2F38D0u: goto label_2f38d0;
            case 0x2F38D4u: goto label_2f38d4;
            case 0x2F38D8u: goto label_2f38d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F39A4u;
}
