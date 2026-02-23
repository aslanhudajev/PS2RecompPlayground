#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvhdec_DecGsc
// Address: 0x186f70 - 0x187174
void mpvhdec_DecGsc_0x186f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvhdec_DecGsc");


    ctx->pc = 0x186f70u;

    // 0x186f70: 0x27bdfff0
    ctx->pc = 0x186f70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x186f74: 0x80602d
    ctx->pc = 0x186f74u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186f78: 0xffbf0000
    ctx->pc = 0x186f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x186f7c: 0x258b0188
    ctx->pc = 0x186f7cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 12), 392));
    // 0x186f80: 0xa0782d
    ctx->pc = 0x186f80u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186f84: 0x2404fffc
    ctx->pc = 0x186f84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x186f88: 0x8dee0000
    ctx->pc = 0x186f88u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x186f8c: 0xc0c02d
    ctx->pc = 0x186f8cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186f90: 0x8d630030
    ctx->pc = 0x186f90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 11), 48)));
    // 0x186f94: 0xe0682d
    ctx->pc = 0x186f94u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186f98: 0x25c20004
    ctx->pc = 0x186f98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 14), 4));
    // 0x186f9c: 0x24630001
    ctx->pc = 0x186f9cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x186fa0: 0x443024
    ctx->pc = 0x186fa0u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x186fa4: 0xad630030
    ctx->pc = 0x186fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 48), GPR_U32(ctx, 3));
    // 0x186fa8: 0x24c2fffc
    ctx->pc = 0x186fa8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x186fac: 0x1c21023
    ctx->pc = 0x186facu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x186fb0: 0x80c80000
    ctx->pc = 0x186fb0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x186fb4: 0x250c0
    ctx->pc = 0x186fb4u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 2), 3));
    // 0x186fb8: 0x24c60001
    ctx->pc = 0x186fb8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x186fbc: 0x29440007
    ctx->pc = 0x186fbcu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 10), 7));
    // 0x186fc0: 0x90c20000
    ctx->pc = 0x186fc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x186fc4: 0x84200
    ctx->pc = 0x186fc4u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x186fc8: 0x24c60001
    ctx->pc = 0x186fc8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x186fcc: 0x90c30000
    ctx->pc = 0x186fccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x186fd0: 0x1024025
    ctx->pc = 0x186fd0u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x186fd4: 0x24c60001
    ctx->pc = 0x186fd4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x186fd8: 0x84200
    ctx->pc = 0x186fd8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x186fdc: 0x90c20000
    ctx->pc = 0x186fdcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x186fe0: 0x1034025
    ctx->pc = 0x186fe0u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x186fe4: 0x24c60001
    ctx->pc = 0x186fe4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x186fe8: 0x84200
    ctx->pc = 0x186fe8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 8));
    // 0x186fec: 0x80c70000
    ctx->pc = 0x186fecu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x186ff0: 0x1024025
    ctx->pc = 0x186ff0u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x186ff4: 0x24c60001
    ctx->pc = 0x186ff4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x186ff8: 0x1484004
    ctx->pc = 0x186ff8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 10) & 0x1F));
    // 0x186ffc: 0x90c20000
    ctx->pc = 0x186ffcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x187000: 0x73a00
    ctx->pc = 0x187000u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x187004: 0x24c60001
    ctx->pc = 0x187004u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x187008: 0xe23825
    ctx->pc = 0x187008u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x18700c: 0x90c30000
    ctx->pc = 0x18700cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x187010: 0x24c60001
    ctx->pc = 0x187010u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x187014: 0x73a00
    ctx->pc = 0x187014u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x187018: 0x90c20000
    ctx->pc = 0x187018u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18701c: 0xe33825
    ctx->pc = 0x18701cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x187020: 0x73a00
    ctx->pc = 0x187020u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x187024: 0x24c60001
    ctx->pc = 0x187024u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x187028: 0x1480001b
    ctx->pc = 0x187028u;
    {
        const bool branch_taken_0x187028 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x18702Cu;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        if (branch_taken_0x187028) {
            ctx->pc = 0x187098u;
            goto label_187098;
        }
    }
    ctx->pc = 0x187030u;
    // 0x187030: 0x254afff9
    ctx->pc = 0x187030u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 4294967289));
    // 0x187034: 0x11400007
    ctx->pc = 0x187034u;
    {
        const bool branch_taken_0x187034 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        ctx->pc = 0x187038u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 25));
        if (branch_taken_0x187034) {
            ctx->pc = 0x187054u;
            goto label_187054;
        }
    }
    ctx->pc = 0x18703Cu;
    // 0x18703c: 0x4a1023
    ctx->pc = 0x18703cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x187040: 0x471006
    ctx->pc = 0x187040u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x187044: 0x1024025
    ctx->pc = 0x187044u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x187048: 0x849c2
    ctx->pc = 0x187048u;
    SET_GPR_U32(ctx, 9, SRL32(GPR_U32(ctx, 8), 7));
    // 0x18704c: 0x10000003
    ctx->pc = 0x18704Cu;
    {
        const bool branch_taken_0x18704c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x187050u;
        SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 10) & 0x1F));
        if (branch_taken_0x18704c) {
            ctx->pc = 0x18705Cu;
            goto label_18705c;
        }
    }
    ctx->pc = 0x187054u;
label_187054:
    // 0x187054: 0x849c2
    ctx->pc = 0x187054u;
    SET_GPR_U32(ctx, 9, SRL32(GPR_U32(ctx, 8), 7));
    // 0x187058: 0xe0402d
    ctx->pc = 0x187058u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_18705c:
    // 0x18705c: 0x80c70000
    ctx->pc = 0x18705cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x187060: 0x24c60001
    ctx->pc = 0x187060u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x187064: 0x90c20000
    ctx->pc = 0x187064u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x187068: 0x73a00
    ctx->pc = 0x187068u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x18706c: 0x24c60001
    ctx->pc = 0x18706cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x187070: 0xe23825
    ctx->pc = 0x187070u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x187074: 0x90c30000
    ctx->pc = 0x187074u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x187078: 0x24c60001
    ctx->pc = 0x187078u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x18707c: 0x73a00
    ctx->pc = 0x18707cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x187080: 0x90c20000
    ctx->pc = 0x187080u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x187084: 0xe33825
    ctx->pc = 0x187084u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x187088: 0x73a00
    ctx->pc = 0x187088u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x18708c: 0x24c60001
    ctx->pc = 0x18708cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x187090: 0x10000004
    ctx->pc = 0x187090u;
    {
        const bool branch_taken_0x187090 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x187094u;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        if (branch_taken_0x187090) {
            ctx->pc = 0x1870A4u;
            goto label_1870a4;
        }
    }
    ctx->pc = 0x187098u;
label_187098:
    // 0x187098: 0x849c2
    ctx->pc = 0x187098u;
    SET_GPR_U32(ctx, 9, SRL32(GPR_U32(ctx, 8), 7));
    // 0x18709c: 0x254a0019
    ctx->pc = 0x18709cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 25));
    // 0x1870a0: 0x84640
    ctx->pc = 0x1870a0u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 25));
label_1870a4:
    // 0x1870a4: 0x3122003f
    ctx->pc = 0x1870a4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 9), 63));
    // 0x1870a8: 0x82fc2
    ctx->pc = 0x1870a8u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 8), 31));
    // 0x1870ac: 0x94982
    ctx->pc = 0x1870acu;
    SET_GPR_U32(ctx, 9, SRL32(GPR_U32(ctx, 9), 6));
    // 0x1870b0: 0xad62002c
    ctx->pc = 0x1870b0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 44), GPR_U32(ctx, 2));
    // 0x1870b4: 0x3123003f
    ctx->pc = 0x1870b4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 9), 63));
    // 0x1870b8: 0x2404001f
    ctx->pc = 0x1870b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 31));
    // 0x1870bc: 0x949c2
    ctx->pc = 0x1870bcu;
    SET_GPR_U32(ctx, 9, SRL32(GPR_U32(ctx, 9), 7));
    // 0x1870c0: 0xad630028
    ctx->pc = 0x1870c0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 40), GPR_U32(ctx, 3));
    // 0x1870c4: 0x3122003f
    ctx->pc = 0x1870c4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 9), 63));
    // 0x1870c8: 0x94982
    ctx->pc = 0x1870c8u;
    SET_GPR_U32(ctx, 9, SRL32(GPR_U32(ctx, 9), 6));
    // 0x1870cc: 0xad620024
    ctx->pc = 0x1870ccu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 36), GPR_U32(ctx, 2));
    // 0x1870d0: 0x91942
    ctx->pc = 0x1870d0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 9), 5));
    // 0x1870d4: 0x3122001f
    ctx->pc = 0x1870d4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 9), 31));
    // 0x1870d8: 0xad63001c
    ctx->pc = 0x1870d8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 28), GPR_U32(ctx, 3));
    // 0x1870dc: 0xad620020
    ctx->pc = 0x1870dcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 32), GPR_U32(ctx, 2));
    // 0x1870e0: 0x15440005
    ctx->pc = 0x1870E0u;
    {
        const bool branch_taken_0x1870e0 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 4));
        ctx->pc = 0x1870E4u;
        WRITE32(ADD32(GPR_U32(ctx, 12), 544), GPR_U32(ctx, 5));
        if (branch_taken_0x1870e0) {
            ctx->pc = 0x1870F8u;
            goto label_1870f8;
        }
    }
    ctx->pc = 0x1870E8u;
    // 0x1870e8: 0xe0402d
    ctx->pc = 0x1870e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1870ec: 0x502d
    ctx->pc = 0x1870ecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1870f0: 0x10000003
    ctx->pc = 0x1870F0u;
    {
        const bool branch_taken_0x1870f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1870F4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
        if (branch_taken_0x1870f0) {
            ctx->pc = 0x187100u;
            goto label_187100;
        }
    }
    ctx->pc = 0x1870F8u;
label_1870f8:
    // 0x1870f8: 0x254a0001
    ctx->pc = 0x1870f8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
    // 0x1870fc: 0x84040
    ctx->pc = 0x1870fcu;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 8), 1));
label_187100:
    // 0x187100: 0x817c2
    ctx->pc = 0x187100u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 8), 31));
    // 0x187104: 0x2403001f
    ctx->pc = 0x187104u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 31));
    // 0x187108: 0x15430004
    ctx->pc = 0x187108u;
    {
        const bool branch_taken_0x187108 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 3));
        ctx->pc = 0x18710Cu;
        WRITE32(ADD32(GPR_U32(ctx, 12), 548), GPR_U32(ctx, 2));
        if (branch_taken_0x187108) {
            ctx->pc = 0x18711Cu;
            goto label_18711c;
        }
    }
    ctx->pc = 0x187110u;
    // 0x187110: 0x502d
    ctx->pc = 0x187110u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187114: 0x10000002
    ctx->pc = 0x187114u;
    {
        const bool branch_taken_0x187114 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x187118u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
        if (branch_taken_0x187114) {
            ctx->pc = 0x187120u;
            goto label_187120;
        }
    }
    ctx->pc = 0x18711Cu;
label_18711c:
    // 0x18711c: 0x254a0001
    ctx->pc = 0x18711cu;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 1));
label_187120:
    // 0x187120: 0x25420007
    ctx->pc = 0x187120u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 10), 7));
    // 0x187124: 0x8da30000
    ctx->pc = 0x187124u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x187128: 0x210c3
    ctx->pc = 0x187128u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x18712c: 0x180202d
    ctx->pc = 0x18712cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187130: 0x2442fff8
    ctx->pc = 0x187130u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x187134: 0x1e0282d
    ctx->pc = 0x187134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187138: 0xc21021
    ctx->pc = 0x187138u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x18713c: 0x1a0382d
    ctx->pc = 0x18713cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187140: 0x4e4823
    ctx->pc = 0x187140u;
    SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x187144: 0xade20000
    ctx->pc = 0x187144u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
    // 0x187148: 0x691821
    ctx->pc = 0x187148u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x18714c: 0x300302d
    ctx->pc = 0x18714cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187150: 0xada30000
    ctx->pc = 0x187150u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x187154: 0x24080004
    ctx->pc = 0x187154u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4));
    // 0x187158: 0x8f020000
    ctx->pc = 0x187158u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x18715c: 0x491023
    ctx->pc = 0x18715cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x187160: 0xc061dee
    ctx->pc = 0x187160u;
    SET_GPR_U32(ctx, 31, 0x187168u);
    ctx->pc = 0x187164u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1877B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvhdec_GoNextLayer_0x1877b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187168u; }
        else if (ctx->pc != 0x187168u) { ctx->pc = 0x187168u; }
    }
    if (ctx->pc != 0x187168u) { return; }
    ctx->pc = 0x187168u;
    // 0x187168: 0xdfbf0000
    ctx->pc = 0x187168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18716c: 0x3e00008
    ctx->pc = 0x18716Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187170u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187054u: goto label_187054;
            case 0x18705Cu: goto label_18705c;
            case 0x187098u: goto label_187098;
            case 0x1870A4u: goto label_1870a4;
            case 0x1870F8u: goto label_1870f8;
            case 0x187100u: goto label_187100;
            case 0x18711Cu: goto label_18711c;
            case 0x187120u: goto label_187120;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187174u;
}
