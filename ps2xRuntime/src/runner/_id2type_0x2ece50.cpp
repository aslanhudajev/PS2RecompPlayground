#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _id2type
// Address: 0x2ece50 - 0x2ed04c
void _id2type_0x2ece50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ece50u;

    // 0x2ece50: 0x27bdff80
    ctx->pc = 0x2ece50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2ece54: 0x3c03003a
    ctx->pc = 0x2ece54u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2ece58: 0xffb70070
    ctx->pc = 0x2ece58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2ece5c: 0x30c2ffff
    ctx->pc = 0x2ece5cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 65535));
    // 0x2ece60: 0xffb60060
    ctx->pc = 0x2ece60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2ece64: 0x6763a
    ctx->pc = 0x2ece64u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 6) >> 24);
    // 0x2ece68: 0xffb50050
    ctx->pc = 0x2ece68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2ece6c: 0x6683e
    ctx->pc = 0x2ece6cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x2ece70: 0xffb40040
    ctx->pc = 0x2ece70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2ece74: 0x2603c
    ctx->pc = 0x2ece74u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ece78: 0xc603f
    ctx->pc = 0x2ece78u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x2ece7c: 0xffb30030
    ctx->pc = 0x2ece7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2ece80: 0x24632f58
    ctx->pc = 0x2ece80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 12120));
    // 0x2ece84: 0xffb20020
    ctx->pc = 0x2ece84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2ece88: 0x502d
    ctx->pc = 0x2ece88u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ece8c: 0xffb10010
    ctx->pc = 0x2ece8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2ece90: 0x482d
    ctx->pc = 0x2ece90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ece94: 0xffb00000
    ctx->pc = 0x2ece94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ece98: 0x340bffff
    ctx->pc = 0x2ece98u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 0), 65535));
    // 0x2ece9c: 0xb5e38
    ctx->pc = 0x2ece9cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 24);
    // 0x2ecea0: 0x3417ff00
    ctx->pc = 0x2ecea0u;
    SET_GPR_U32(ctx, 23, OR32(GPR_U32(ctx, 0), 65280));
    // 0x2ecea4: 0x17be38
    ctx->pc = 0x2ecea4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << 24);
    // 0x2ecea8: 0x2416ffff
    ctx->pc = 0x2ecea8u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2eceac: 0x16b63a
    ctx->pc = 0x2eceacu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> 24);
    // 0x2eceb0: 0x2415ffff
    ctx->pc = 0x2eceb0u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2eceb4: 0x15aa3c
    ctx->pc = 0x2eceb4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 8));
    // 0x2eceb8: 0x15ae3a
    ctx->pc = 0x2eceb8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> 24);
    // 0x2ecebc: 0x3414bd20
    ctx->pc = 0x2ecebcu;
    SET_GPR_U32(ctx, 20, OR32(GPR_U32(ctx, 0), 48416));
    // 0x2ecec0: 0x14a638
    ctx->pc = 0x2ecec0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << 24);
    // 0x2ecec4: 0x3413bd80
    ctx->pc = 0x2ecec4u;
    SET_GPR_U32(ctx, 19, OR32(GPR_U32(ctx, 0), 48512));
    // 0x2ecec8: 0x139e38
    ctx->pc = 0x2ecec8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << 24);
    // 0x2ececc: 0x3412bd90
    ctx->pc = 0x2ececcu;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 0), 48528));
    // 0x2eced0: 0x129638
    ctx->pc = 0x2eced0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 24);
    // 0x2eced4: 0x3411bda0
    ctx->pc = 0x2eced4u;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 0), 48544));
    // 0x2eced8: 0x118e38
    ctx->pc = 0x2eced8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 24);
    // 0x2ecedc: 0x3410ffe0
    ctx->pc = 0x2ecedcu;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 0), 65504));
    // 0x2ecee0: 0x108638
    ctx->pc = 0x2ecee0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 24);
    // 0x2ecee4: 0x3419fff8
    ctx->pc = 0x2ecee4u;
    SET_GPR_U32(ctx, 25, OR32(GPR_U32(ctx, 0), 65528));
    // 0x2ecee8: 0x19ce38
    ctx->pc = 0x2ecee8u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << 24);
    // 0x2eceec: 0x3418f000
    ctx->pc = 0x2eceecu;
    SET_GPR_U32(ctx, 24, OR32(GPR_U32(ctx, 0), 61440));
    // 0x2ecef0: 0x18c638
    ctx->pc = 0x2ecef0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << 24);
    // 0x2ecef4: 0x340fc000
    ctx->pc = 0x2ecef4u;
    SET_GPR_U32(ctx, 15, OR32(GPR_U32(ctx, 0), 49152));
    // 0x2ecef8: 0xf7e38
    ctx->pc = 0x2ecef8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 24);
    // 0x2ecefc: 0xdc670008
    ctx->pc = 0x2ecefcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_2ecf00:
    // 0x2ecf00: 0x10eb0011
    ctx->pc = 0x2ECF00u;
    {
        const bool branch_taken_0x2ecf00 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 11));
        ctx->pc = 0x2ECF04u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
        if (branch_taken_0x2ecf00) {
            ctx->pc = 0x2ECF48u;
            goto label_2ecf48;
        }
    }
    ctx->pc = 0x2ECF08u;
    // 0x2ecf08: 0x14400005
    ctx->pc = 0x2ECF08u;
    {
        const bool branch_taken_0x2ecf08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ecf08) {
            ctx->pc = 0x2ECF20u;
            goto label_2ecf20;
        }
    }
    ctx->pc = 0x2ECF10u;
    // 0x2ecf10: 0x50f70028
    ctx->pc = 0x2ECF10u;
    {
        const bool branch_taken_0x2ecf10 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 23));
        if (branch_taken_0x2ecf10) {
            ctx->pc = 0x2ECF14u;
            SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->pc = 0x2ECFB4u;
            goto label_2ecfb4;
        }
    }
    ctx->pc = 0x2ECF18u;
    // 0x2ecf18: 0x1000003c
    ctx->pc = 0x2ECF18u;
    {
        const bool branch_taken_0x2ecf18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ECF1Cu;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
        if (branch_taken_0x2ecf18) {
            ctx->pc = 0x2ED00Cu;
            goto label_2ed00c;
        }
    }
    ctx->pc = 0x2ECF20u;
label_2ecf20:
    // 0x2ecf20: 0x54f6003a
    ctx->pc = 0x2ECF20u;
    {
        const bool branch_taken_0x2ecf20 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 22));
        if (branch_taken_0x2ecf20) {
            ctx->pc = 0x2ECF24u;
            SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
            ctx->pc = 0x2ED00Cu;
            goto label_2ed00c;
        }
    }
    ctx->pc = 0x2ECF28u;
    // 0x2ecf28: 0xdc620000
    ctx->pc = 0x2ecf28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ecf2c: 0xd53824
    ctx->pc = 0x2ecf2cu;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x2ecf30: 0x54e20036
    ctx->pc = 0x2ECF30u;
    {
        const bool branch_taken_0x2ecf30 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 2));
        if (branch_taken_0x2ecf30) {
            ctx->pc = 0x2ECF34u;
            SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
            ctx->pc = 0x2ED00Cu;
            goto label_2ed00c;
        }
    }
    ctx->pc = 0x2ECF38u;
    // 0x2ecf38: 0xac890000
    ctx->pc = 0x2ecf38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x2ecf3c: 0x240a0001
    ctx->pc = 0x2ecf3cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ecf40: 0x10000031
    ctx->pc = 0x2ECF40u;
    {
        const bool branch_taken_0x2ecf40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ECF44u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
        if (branch_taken_0x2ecf40) {
            ctx->pc = 0x2ED008u;
            goto label_2ed008;
        }
    }
    ctx->pc = 0x2ECF48u;
label_2ecf48:
    // 0x2ecf48: 0xdc680000
    ctx->pc = 0x2ecf48u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ecf4c: 0x3402bd88
    ctx->pc = 0x2ecf4cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 48520));
    // 0x2ecf50: 0x21638
    ctx->pc = 0x2ecf50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2ecf54: 0x11020011
    ctx->pc = 0x2ECF54u;
    {
        const bool branch_taken_0x2ecf54 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 2));
        ctx->pc = 0x2ECF58u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
        if (branch_taken_0x2ecf54) {
            ctx->pc = 0x2ECF9Cu;
            goto label_2ecf9c;
        }
    }
    ctx->pc = 0x2ECF5Cu;
    // 0x2ecf5c: 0x14400007
    ctx->pc = 0x2ECF5Cu;
    {
        const bool branch_taken_0x2ecf5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ecf5c) {
            ctx->pc = 0x2ECF7Cu;
            goto label_2ecf7c;
        }
    }
    ctx->pc = 0x2ECF64u;
    // 0x2ecf64: 0x1114000b
    ctx->pc = 0x2ECF64u;
    {
        const bool branch_taken_0x2ecf64 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 20));
        ctx->pc = 0x2ECF68u;
        SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
        if (branch_taken_0x2ecf64) {
            ctx->pc = 0x2ECF94u;
            goto label_2ecf94;
        }
    }
    ctx->pc = 0x2ECF6Cu;
    // 0x2ecf6c: 0x1113000b
    ctx->pc = 0x2ECF6Cu;
    {
        const bool branch_taken_0x2ecf6c = (GPR_U32(ctx, 8) == GPR_U32(ctx, 19));
        ctx->pc = 0x2ECF70u;
        SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
        if (branch_taken_0x2ecf6c) {
            ctx->pc = 0x2ECF9Cu;
            goto label_2ecf9c;
        }
    }
    ctx->pc = 0x2ECF74u;
    // 0x2ecf74: 0x1000000b
    ctx->pc = 0x2ECF74u;
    {
        const bool branch_taken_0x2ecf74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ECF78u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ecf74) {
            ctx->pc = 0x2ECFA4u;
            goto label_2ecfa4;
        }
    }
    ctx->pc = 0x2ECF7Cu;
label_2ecf7c:
    // 0x2ecf7c: 0x11120008
    ctx->pc = 0x2ECF7Cu;
    {
        const bool branch_taken_0x2ecf7c = (GPR_U32(ctx, 8) == GPR_U32(ctx, 18));
        ctx->pc = 0x2ECF80u;
        SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 25)));
        if (branch_taken_0x2ecf7c) {
            ctx->pc = 0x2ECFA0u;
            goto label_2ecfa0;
        }
    }
    ctx->pc = 0x2ECF84u;
    // 0x2ecf84: 0x11110005
    ctx->pc = 0x2ECF84u;
    {
        const bool branch_taken_0x2ecf84 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 17));
        ctx->pc = 0x2ECF88u;
        SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
        if (branch_taken_0x2ecf84) {
            ctx->pc = 0x2ECF9Cu;
            goto label_2ecf9c;
        }
    }
    ctx->pc = 0x2ECF8Cu;
    // 0x2ecf8c: 0x10000005
    ctx->pc = 0x2ECF8Cu;
    {
        const bool branch_taken_0x2ecf8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ECF90u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ecf8c) {
            ctx->pc = 0x2ECFA4u;
            goto label_2ecfa4;
        }
    }
    ctx->pc = 0x2ECF94u;
label_2ecf94:
    // 0x2ecf94: 0x10000003
    ctx->pc = 0x2ECF94u;
    {
        const bool branch_taken_0x2ecf94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ECF98u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
        if (branch_taken_0x2ecf94) {
            ctx->pc = 0x2ECFA4u;
            goto label_2ecfa4;
        }
    }
    ctx->pc = 0x2ECF9Cu;
label_2ecf9c:
    // 0x2ecf9c: 0xd93824
    ctx->pc = 0x2ecf9cu;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 25)));
label_2ecfa0:
    // 0x2ecfa0: 0x24020007
    ctx->pc = 0x2ecfa0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
label_2ecfa4:
    // 0x2ecfa4: 0x54e80019
    ctx->pc = 0x2ECFA4u;
    {
        const bool branch_taken_0x2ecfa4 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 8));
        if (branch_taken_0x2ecfa4) {
            ctx->pc = 0x2ECFA8u;
            SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
            ctx->pc = 0x2ED00Cu;
            goto label_2ed00c;
        }
    }
    ctx->pc = 0x2ECFACu;
    // 0x2ecfac: 0x10000011
    ctx->pc = 0x2ECFACu;
    {
        const bool branch_taken_0x2ecfac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ECFB0u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
        if (branch_taken_0x2ecfac) {
            ctx->pc = 0x2ECFF4u;
            goto label_2ecff4;
        }
    }
    ctx->pc = 0x2ECFB4u;
label_2ecfb4:
    // 0x2ecfb4: 0x3402e000
    ctx->pc = 0x2ecfb4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 57344));
    // 0x2ecfb8: 0x21638
    ctx->pc = 0x2ecfb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2ecfbc: 0x15020004
    ctx->pc = 0x2ECFBCu;
    {
        const bool branch_taken_0x2ecfbc = (GPR_U32(ctx, 8) != GPR_U32(ctx, 2));
        if (branch_taken_0x2ecfbc) {
            ctx->pc = 0x2ECFD0u;
            goto label_2ecfd0;
        }
    }
    ctx->pc = 0x2ECFC4u;
    // 0x2ecfc4: 0xd83824
    ctx->pc = 0x2ecfc4u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x2ecfc8: 0x10000007
    ctx->pc = 0x2ECFC8u;
    {
        const bool branch_taken_0x2ecfc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ECFCCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
        if (branch_taken_0x2ecfc8) {
            ctx->pc = 0x2ECFE8u;
            goto label_2ecfe8;
        }
    }
    ctx->pc = 0x2ECFD0u;
label_2ecfd0:
    // 0x2ecfd0: 0x150f0004
    ctx->pc = 0x2ECFD0u;
    {
        const bool branch_taken_0x2ecfd0 = (GPR_U32(ctx, 8) != GPR_U32(ctx, 15));
        ctx->pc = 0x2ECFD4u;
        SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        if (branch_taken_0x2ecfd0) {
            ctx->pc = 0x2ECFE4u;
            goto label_2ecfe4;
        }
    }
    ctx->pc = 0x2ECFD8u;
    // 0x2ecfd8: 0xc23824
    ctx->pc = 0x2ecfd8u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2ecfdc: 0x10000002
    ctx->pc = 0x2ECFDCu;
    {
        const bool branch_taken_0x2ecfdc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ECFE0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
        if (branch_taken_0x2ecfdc) {
            ctx->pc = 0x2ECFE8u;
            goto label_2ecfe8;
        }
    }
    ctx->pc = 0x2ECFE4u;
label_2ecfe4:
    // 0x2ecfe4: 0x102d
    ctx->pc = 0x2ecfe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ecfe8:
    // 0x2ecfe8: 0x54e80008
    ctx->pc = 0x2ECFE8u;
    {
        const bool branch_taken_0x2ecfe8 = (GPR_U32(ctx, 7) != GPR_U32(ctx, 8));
        if (branch_taken_0x2ecfe8) {
            ctx->pc = 0x2ECFECu;
            SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
            ctx->pc = 0x2ED00Cu;
            goto label_2ed00c;
        }
    }
    ctx->pc = 0x2ECFF0u;
    // 0x2ecff0: 0x1a21024
    ctx->pc = 0x2ecff0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_2ecff4:
    // 0x2ecff4: 0xac890000
    ctx->pc = 0x2ecff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x2ecff8: 0x2103c
    ctx->pc = 0x2ecff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ecffc: 0x2103f
    ctx->pc = 0x2ecffcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ed000: 0x240a0001
    ctx->pc = 0x2ed000u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed004: 0xaca20000
    ctx->pc = 0x2ed004u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_2ed008:
    // 0x2ed008: 0x25290001
    ctx->pc = 0x2ed008u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
label_2ed00c:
    // 0x2ed00c: 0x2d22000a
    ctx->pc = 0x2ed00cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 9), 10));
    // 0x2ed010: 0x10400003
    ctx->pc = 0x2ED010u;
    {
        const bool branch_taken_0x2ed010 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ED014u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 16));
        if (branch_taken_0x2ed010) {
            ctx->pc = 0x2ED020u;
            goto label_2ed020;
        }
    }
    ctx->pc = 0x2ED018u;
    // 0x2ed018: 0x5140ffb9
    ctx->pc = 0x2ED018u;
    {
        const bool branch_taken_0x2ed018 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        if (branch_taken_0x2ed018) {
            ctx->pc = 0x2ED01Cu;
            SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->pc = 0x2ECF00u;
            goto label_2ecf00;
        }
    }
    ctx->pc = 0x2ED020u;
label_2ed020:
    // 0x2ed020: 0xdfb70070
    ctx->pc = 0x2ed020u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ed024: 0x140102d
    ctx->pc = 0x2ed024u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed028: 0xdfb60060
    ctx->pc = 0x2ed028u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ed02c: 0xdfb50050
    ctx->pc = 0x2ed02cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ed030: 0xdfb40040
    ctx->pc = 0x2ed030u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ed034: 0xdfb30030
    ctx->pc = 0x2ed034u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ed038: 0xdfb20020
    ctx->pc = 0x2ed038u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ed03c: 0xdfb10010
    ctx->pc = 0x2ed03cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ed040: 0xdfb00000
    ctx->pc = 0x2ed040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed044: 0x3e00008
    ctx->pc = 0x2ED044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED048u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2ECF00u: goto label_2ecf00;
            case 0x2ECF20u: goto label_2ecf20;
            case 0x2ECF48u: goto label_2ecf48;
            case 0x2ECF7Cu: goto label_2ecf7c;
            case 0x2ECF94u: goto label_2ecf94;
            case 0x2ECF9Cu: goto label_2ecf9c;
            case 0x2ECFA0u: goto label_2ecfa0;
            case 0x2ECFA4u: goto label_2ecfa4;
            case 0x2ECFB4u: goto label_2ecfb4;
            case 0x2ECFD0u: goto label_2ecfd0;
            case 0x2ECFE4u: goto label_2ecfe4;
            case 0x2ECFE8u: goto label_2ecfe8;
            case 0x2ECFF4u: goto label_2ecff4;
            case 0x2ED008u: goto label_2ed008;
            case 0x2ED00Cu: goto label_2ed00c;
            case 0x2ED020u: goto label_2ed020;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2ED04Cu;
}
