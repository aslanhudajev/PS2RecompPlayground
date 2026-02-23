#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvhdec_DecShc
// Address: 0x186778 - 0x186ee4
void mpvhdec_DecShc_0x186778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvhdec_DecShc");


    ctx->pc = 0x186778u;

    // 0x186778: 0x27bdff60
    ctx->pc = 0x186778u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x18677c: 0xffbe0080
    ctx->pc = 0x18677cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x186780: 0xffb70070
    ctx->pc = 0x186780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x186784: 0xc0f02d
    ctx->pc = 0x186784u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186788: 0xffb60060
    ctx->pc = 0x186788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x18678c: 0xe0b82d
    ctx->pc = 0x18678cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186790: 0xffb50050
    ctx->pc = 0x186790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x186794: 0xa0b02d
    ctx->pc = 0x186794u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186798: 0xffb40040
    ctx->pc = 0x186798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x18679c: 0x2405fffc
    ctx->pc = 0x18679cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1867a0: 0xffb30030
    ctx->pc = 0x1867a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1867a4: 0x80a02d
    ctx->pc = 0x1867a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1867a8: 0xffb10010
    ctx->pc = 0x1867a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1867ac: 0x26950188
    ctx->pc = 0x1867acu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 20), 392));
    // 0x1867b0: 0xffbf0090
    ctx->pc = 0x1867b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1867b4: 0xffb20020
    ctx->pc = 0x1867b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1867b8: 0xffb00000
    ctx->pc = 0x1867b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1867bc: 0x8ec30000
    ctx->pc = 0x1867bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1867c0: 0x24620004
    ctx->pc = 0x1867c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4));
    // 0x1867c4: 0x458824
    ctx->pc = 0x1867c4u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1867c8: 0x2624fffc
    ctx->pc = 0x1867c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x1867cc: 0x82320000
    ctx->pc = 0x1867ccu;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1867d0: 0x26310001
    ctx->pc = 0x1867d0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1867d4: 0x641823
    ctx->pc = 0x1867d4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1867d8: 0x92220000
    ctx->pc = 0x1867d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1867dc: 0x129200
    ctx->pc = 0x1867dcu;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 18), 8));
    // 0x1867e0: 0x26310001
    ctx->pc = 0x1867e0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1867e4: 0x398c0
    ctx->pc = 0x1867e4u;
    SET_GPR_U32(ctx, 19, SLL32(GPR_U32(ctx, 3), 3));
    // 0x1867e8: 0x92240000
    ctx->pc = 0x1867e8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1867ec: 0x2429025
    ctx->pc = 0x1867ecu;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1867f0: 0x26310001
    ctx->pc = 0x1867f0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1867f4: 0x129200
    ctx->pc = 0x1867f4u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 18), 8));
    // 0x1867f8: 0x92220000
    ctx->pc = 0x1867f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1867fc: 0x2449025
    ctx->pc = 0x1867fcu;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x186800: 0x26310001
    ctx->pc = 0x186800u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186804: 0x129200
    ctx->pc = 0x186804u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 18), 8));
    // 0x186808: 0x82300000
    ctx->pc = 0x186808u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18680c: 0x2429025
    ctx->pc = 0x18680cu;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x186810: 0x26310001
    ctx->pc = 0x186810u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186814: 0x2729004
    ctx->pc = 0x186814u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 19) & 0x1F));
    // 0x186818: 0x92230000
    ctx->pc = 0x186818u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18681c: 0x108200
    ctx->pc = 0x18681cu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x186820: 0x26310001
    ctx->pc = 0x186820u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186824: 0x2a640014
    ctx->pc = 0x186824u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 19), 20));
    // 0x186828: 0x2038025
    ctx->pc = 0x186828u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x18682c: 0x92220000
    ctx->pc = 0x18682cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186830: 0x26310001
    ctx->pc = 0x186830u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186834: 0x108200
    ctx->pc = 0x186834u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x186838: 0x92230000
    ctx->pc = 0x186838u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18683c: 0x2028025
    ctx->pc = 0x18683cu;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x186840: 0x108200
    ctx->pc = 0x186840u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x186844: 0x26310001
    ctx->pc = 0x186844u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186848: 0x1480001d
    ctx->pc = 0x186848u;
    {
        const bool branch_taken_0x186848 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x18684Cu;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        if (branch_taken_0x186848) {
            ctx->pc = 0x1868C0u;
            goto label_1868c0;
        }
    }
    ctx->pc = 0x186850u;
    // 0x186850: 0x2673ffec
    ctx->pc = 0x186850u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967276));
    // 0x186854: 0x12600008
    ctx->pc = 0x186854u;
    {
        const bool branch_taken_0x186854 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x186858u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x186854) {
            ctx->pc = 0x186878u;
            goto label_186878;
        }
    }
    ctx->pc = 0x18685Cu;
    // 0x18685c: 0x531023
    ctx->pc = 0x18685cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x186860: 0x501006
    ctx->pc = 0x186860u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x186864: 0x2429025
    ctx->pc = 0x186864u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x186868: 0x121d02
    ctx->pc = 0x186868u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 18), 20));
    // 0x18686c: 0xae830188
    ctx->pc = 0x18686cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 392), GPR_U32(ctx, 3));
    // 0x186870: 0x10000004
    ctx->pc = 0x186870u;
    {
        const bool branch_taken_0x186870 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186874u;
        SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
        if (branch_taken_0x186870) {
            ctx->pc = 0x186884u;
            goto label_186884;
        }
    }
    ctx->pc = 0x186878u;
label_186878:
    // 0x186878: 0x121502
    ctx->pc = 0x186878u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 18), 20));
    // 0x18687c: 0xae820188
    ctx->pc = 0x18687cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 392), GPR_U32(ctx, 2));
    // 0x186880: 0x200902d
    ctx->pc = 0x186880u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186884:
    // 0x186884: 0x82300000
    ctx->pc = 0x186884u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186888: 0x26310001
    ctx->pc = 0x186888u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x18688c: 0x92220000
    ctx->pc = 0x18688cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186890: 0x108200
    ctx->pc = 0x186890u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x186894: 0x26310001
    ctx->pc = 0x186894u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186898: 0x2028025
    ctx->pc = 0x186898u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x18689c: 0x92230000
    ctx->pc = 0x18689cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1868a0: 0x26310001
    ctx->pc = 0x1868a0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1868a4: 0x108200
    ctx->pc = 0x1868a4u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x1868a8: 0x92220000
    ctx->pc = 0x1868a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1868ac: 0x2038025
    ctx->pc = 0x1868acu;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1868b0: 0x108200
    ctx->pc = 0x1868b0u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x1868b4: 0x26310001
    ctx->pc = 0x1868b4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1868b8: 0x10000005
    ctx->pc = 0x1868B8u;
    {
        const bool branch_taken_0x1868b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1868BCu;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        if (branch_taken_0x1868b8) {
            ctx->pc = 0x1868D0u;
            goto label_1868d0;
        }
    }
    ctx->pc = 0x1868C0u;
label_1868c0:
    // 0x1868c0: 0x121502
    ctx->pc = 0x1868c0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 18), 20));
    // 0x1868c4: 0x2673000c
    ctx->pc = 0x1868c4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 12));
    // 0x1868c8: 0xae820188
    ctx->pc = 0x1868c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 392), GPR_U32(ctx, 2));
    // 0x1868cc: 0x129300
    ctx->pc = 0x1868ccu;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 18), 12));
label_1868d0:
    // 0x1868d0: 0x2a620014
    ctx->pc = 0x1868d0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 20));
    // 0x1868d4: 0x1440001d
    ctx->pc = 0x1868D4u;
    {
        const bool branch_taken_0x1868d4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1868D8u;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 18), 20));
        if (branch_taken_0x1868d4) {
            ctx->pc = 0x18694Cu;
            goto label_18694c;
        }
    }
    ctx->pc = 0x1868DCu;
    // 0x1868dc: 0x2673ffec
    ctx->pc = 0x1868dcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967276));
    // 0x1868e0: 0x12600008
    ctx->pc = 0x1868E0u;
    {
        const bool branch_taken_0x1868e0 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x1868E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 12));
        if (branch_taken_0x1868e0) {
            ctx->pc = 0x186904u;
            goto label_186904;
        }
    }
    ctx->pc = 0x1868E8u;
    // 0x1868e8: 0x531023
    ctx->pc = 0x1868e8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1868ec: 0x501006
    ctx->pc = 0x1868ecu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x1868f0: 0x2429025
    ctx->pc = 0x1868f0u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1868f4: 0x121d02
    ctx->pc = 0x1868f4u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 18), 20));
    // 0x1868f8: 0xaea30004
    ctx->pc = 0x1868f8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 3));
    // 0x1868fc: 0x10000004
    ctx->pc = 0x1868FCu;
    {
        const bool branch_taken_0x1868fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186900u;
        SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
        if (branch_taken_0x1868fc) {
            ctx->pc = 0x186910u;
            goto label_186910;
        }
    }
    ctx->pc = 0x186904u;
label_186904:
    // 0x186904: 0x121502
    ctx->pc = 0x186904u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 18), 20));
    // 0x186908: 0xaea20004
    ctx->pc = 0x186908u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x18690c: 0x200902d
    ctx->pc = 0x18690cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186910:
    // 0x186910: 0x82300000
    ctx->pc = 0x186910u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186914: 0x26310001
    ctx->pc = 0x186914u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186918: 0x92220000
    ctx->pc = 0x186918u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18691c: 0x108200
    ctx->pc = 0x18691cu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x186920: 0x26310001
    ctx->pc = 0x186920u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186924: 0x2028025
    ctx->pc = 0x186924u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x186928: 0x92230000
    ctx->pc = 0x186928u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18692c: 0x26310001
    ctx->pc = 0x18692cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186930: 0x108200
    ctx->pc = 0x186930u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x186934: 0x92220000
    ctx->pc = 0x186934u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186938: 0x2038025
    ctx->pc = 0x186938u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x18693c: 0x108200
    ctx->pc = 0x18693cu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x186940: 0x26310001
    ctx->pc = 0x186940u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186944: 0x10000004
    ctx->pc = 0x186944u;
    {
        const bool branch_taken_0x186944 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186948u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        if (branch_taken_0x186944) {
            ctx->pc = 0x186958u;
            goto label_186958;
        }
    }
    ctx->pc = 0x18694Cu;
label_18694c:
    // 0x18694c: 0x2673000c
    ctx->pc = 0x18694cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 12));
    // 0x186950: 0xaea20004
    ctx->pc = 0x186950u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x186954: 0x129300
    ctx->pc = 0x186954u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 18), 12));
label_186958:
    // 0x186958: 0x2a62001c
    ctx->pc = 0x186958u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 28));
    // 0x18695c: 0x1440001d
    ctx->pc = 0x18695Cu;
    {
        const bool branch_taken_0x18695c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x186960u;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 18), 28));
        if (branch_taken_0x18695c) {
            ctx->pc = 0x1869D4u;
            goto label_1869d4;
        }
    }
    ctx->pc = 0x186964u;
    // 0x186964: 0x2673ffe4
    ctx->pc = 0x186964u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967268));
    // 0x186968: 0x12600008
    ctx->pc = 0x186968u;
    {
        const bool branch_taken_0x186968 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x18696Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x186968) {
            ctx->pc = 0x18698Cu;
            goto label_18698c;
        }
    }
    ctx->pc = 0x186970u;
    // 0x186970: 0x531023
    ctx->pc = 0x186970u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x186974: 0x501006
    ctx->pc = 0x186974u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x186978: 0x2429025
    ctx->pc = 0x186978u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x18697c: 0x121f02
    ctx->pc = 0x18697cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 18), 28));
    // 0x186980: 0xae830210
    ctx->pc = 0x186980u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 528), GPR_U32(ctx, 3));
    // 0x186984: 0x10000004
    ctx->pc = 0x186984u;
    {
        const bool branch_taken_0x186984 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186988u;
        SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
        if (branch_taken_0x186984) {
            ctx->pc = 0x186998u;
            goto label_186998;
        }
    }
    ctx->pc = 0x18698Cu;
label_18698c:
    // 0x18698c: 0x121702
    ctx->pc = 0x18698cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 18), 28));
    // 0x186990: 0xae820210
    ctx->pc = 0x186990u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 528), GPR_U32(ctx, 2));
    // 0x186994: 0x200902d
    ctx->pc = 0x186994u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186998:
    // 0x186998: 0x82300000
    ctx->pc = 0x186998u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18699c: 0x26310001
    ctx->pc = 0x18699cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1869a0: 0x92220000
    ctx->pc = 0x1869a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1869a4: 0x108200
    ctx->pc = 0x1869a4u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x1869a8: 0x26310001
    ctx->pc = 0x1869a8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1869ac: 0x2028025
    ctx->pc = 0x1869acu;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1869b0: 0x92230000
    ctx->pc = 0x1869b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1869b4: 0x26310001
    ctx->pc = 0x1869b4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1869b8: 0x108200
    ctx->pc = 0x1869b8u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x1869bc: 0x92220000
    ctx->pc = 0x1869bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1869c0: 0x2038025
    ctx->pc = 0x1869c0u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1869c4: 0x108200
    ctx->pc = 0x1869c4u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x1869c8: 0x26310001
    ctx->pc = 0x1869c8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1869cc: 0x10000004
    ctx->pc = 0x1869CCu;
    {
        const bool branch_taken_0x1869cc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1869D0u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        if (branch_taken_0x1869cc) {
            ctx->pc = 0x1869E0u;
            goto label_1869e0;
        }
    }
    ctx->pc = 0x1869D4u;
label_1869d4:
    // 0x1869d4: 0x26730004
    ctx->pc = 0x1869d4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4));
    // 0x1869d8: 0xae820210
    ctx->pc = 0x1869d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 528), GPR_U32(ctx, 2));
    // 0x1869dc: 0x129100
    ctx->pc = 0x1869dcu;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 18), 4));
label_1869e0:
    // 0x1869e0: 0x2a62001c
    ctx->pc = 0x1869e0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 28));
    // 0x1869e4: 0x1440001a
    ctx->pc = 0x1869E4u;
    {
        const bool branch_taken_0x1869e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1869E8u;
        SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 18), 28));
        if (branch_taken_0x1869e4) {
            ctx->pc = 0x186A50u;
            goto label_186a50;
        }
    }
    ctx->pc = 0x1869ECu;
    // 0x1869ec: 0x2673ffe4
    ctx->pc = 0x1869ecu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967268));
    // 0x1869f0: 0x12600007
    ctx->pc = 0x1869F0u;
    {
        const bool branch_taken_0x1869f0 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x1869F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1869f0) {
            ctx->pc = 0x186A10u;
            goto label_186a10;
        }
    }
    ctx->pc = 0x1869F8u;
    // 0x1869f8: 0x531023
    ctx->pc = 0x1869f8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1869fc: 0x501006
    ctx->pc = 0x1869fcu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x186a00: 0x2429025
    ctx->pc = 0x186a00u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x186a04: 0x122702
    ctx->pc = 0x186a04u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 18), 28));
    // 0x186a08: 0x10000002
    ctx->pc = 0x186A08u;
    {
        const bool branch_taken_0x186a08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186A0Cu;
        SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
        if (branch_taken_0x186a08) {
            ctx->pc = 0x186A14u;
            goto label_186a14;
        }
    }
    ctx->pc = 0x186A10u;
label_186a10:
    // 0x186a10: 0x200902d
    ctx->pc = 0x186a10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186a14:
    // 0x186a14: 0x82300000
    ctx->pc = 0x186a14u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186a18: 0x26310001
    ctx->pc = 0x186a18u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186a1c: 0x92220000
    ctx->pc = 0x186a1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186a20: 0x108200
    ctx->pc = 0x186a20u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x186a24: 0x26310001
    ctx->pc = 0x186a24u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186a28: 0x2028025
    ctx->pc = 0x186a28u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x186a2c: 0x92230000
    ctx->pc = 0x186a2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186a30: 0x26310001
    ctx->pc = 0x186a30u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186a34: 0x108200
    ctx->pc = 0x186a34u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x186a38: 0x92220000
    ctx->pc = 0x186a38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186a3c: 0x2038025
    ctx->pc = 0x186a3cu;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x186a40: 0x108200
    ctx->pc = 0x186a40u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x186a44: 0x26310001
    ctx->pc = 0x186a44u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186a48: 0x10000003
    ctx->pc = 0x186A48u;
    {
        const bool branch_taken_0x186a48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186A4Cu;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        if (branch_taken_0x186a48) {
            ctx->pc = 0x186A58u;
            goto label_186a58;
        }
    }
    ctx->pc = 0x186A50u;
label_186a50:
    // 0x186a50: 0x26730004
    ctx->pc = 0x186a50u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4));
    // 0x186a54: 0x129100
    ctx->pc = 0x186a54u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 18), 4));
label_186a58:
    // 0x186a58: 0x2a62000e
    ctx->pc = 0x186a58u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 14));
    // 0x186a5c: 0x1440001d
    ctx->pc = 0x186A5Cu;
    {
        const bool branch_taken_0x186a5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x186A60u;
        WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 4));
        if (branch_taken_0x186a5c) {
            ctx->pc = 0x186AD4u;
            goto label_186ad4;
        }
    }
    ctx->pc = 0x186A64u;
    // 0x186a64: 0x2673fff2
    ctx->pc = 0x186a64u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967282));
    // 0x186a68: 0x12600008
    ctx->pc = 0x186A68u;
    {
        const bool branch_taken_0x186a68 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x186A6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 18));
        if (branch_taken_0x186a68) {
            ctx->pc = 0x186A8Cu;
            goto label_186a8c;
        }
    }
    ctx->pc = 0x186A70u;
    // 0x186a70: 0x531023
    ctx->pc = 0x186a70u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x186a74: 0x501006
    ctx->pc = 0x186a74u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x186a78: 0x2429025
    ctx->pc = 0x186a78u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x186a7c: 0x121b82
    ctx->pc = 0x186a7cu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 18), 14));
    // 0x186a80: 0xae830214
    ctx->pc = 0x186a80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 532), GPR_U32(ctx, 3));
    // 0x186a84: 0x10000004
    ctx->pc = 0x186A84u;
    {
        const bool branch_taken_0x186a84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186A88u;
        SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
        if (branch_taken_0x186a84) {
            ctx->pc = 0x186A98u;
            goto label_186a98;
        }
    }
    ctx->pc = 0x186A8Cu;
label_186a8c:
    // 0x186a8c: 0x121382
    ctx->pc = 0x186a8cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 18), 14));
    // 0x186a90: 0xae820214
    ctx->pc = 0x186a90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 532), GPR_U32(ctx, 2));
    // 0x186a94: 0x200902d
    ctx->pc = 0x186a94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186a98:
    // 0x186a98: 0x82300000
    ctx->pc = 0x186a98u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186a9c: 0x26310001
    ctx->pc = 0x186a9cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186aa0: 0x92220000
    ctx->pc = 0x186aa0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186aa4: 0x108200
    ctx->pc = 0x186aa4u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x186aa8: 0x26310001
    ctx->pc = 0x186aa8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186aac: 0x2028025
    ctx->pc = 0x186aacu;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x186ab0: 0x92230000
    ctx->pc = 0x186ab0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186ab4: 0x26310001
    ctx->pc = 0x186ab4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186ab8: 0x108200
    ctx->pc = 0x186ab8u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x186abc: 0x92220000
    ctx->pc = 0x186abcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186ac0: 0x2038025
    ctx->pc = 0x186ac0u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x186ac4: 0x108200
    ctx->pc = 0x186ac4u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x186ac8: 0x26310001
    ctx->pc = 0x186ac8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186acc: 0x10000005
    ctx->pc = 0x186ACCu;
    {
        const bool branch_taken_0x186acc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186AD0u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        if (branch_taken_0x186acc) {
            ctx->pc = 0x186AE4u;
            goto label_186ae4;
        }
    }
    ctx->pc = 0x186AD4u;
label_186ad4:
    // 0x186ad4: 0x121382
    ctx->pc = 0x186ad4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 18), 14));
    // 0x186ad8: 0x26730012
    ctx->pc = 0x186ad8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 18));
    // 0x186adc: 0xae820214
    ctx->pc = 0x186adcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 532), GPR_U32(ctx, 2));
    // 0x186ae0: 0x129480
    ctx->pc = 0x186ae0u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 18), 18));
label_186ae4:
    // 0x186ae4: 0x26730001
    ctx->pc = 0x186ae4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x186ae8: 0x2a620020
    ctx->pc = 0x186ae8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 32));
    // 0x186aec: 0x14400011
    ctx->pc = 0x186AECu;
    {
        const bool branch_taken_0x186aec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x186AF0u;
        SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x186aec) {
            ctx->pc = 0x186B34u;
            goto label_186b34;
        }
    }
    ctx->pc = 0x186AF4u;
    // 0x186af4: 0x2673ffe0
    ctx->pc = 0x186af4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967264));
    // 0x186af8: 0x2709004
    ctx->pc = 0x186af8u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
    // 0x186afc: 0x82300000
    ctx->pc = 0x186afcu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186b00: 0x26310001
    ctx->pc = 0x186b00u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186b04: 0x92220000
    ctx->pc = 0x186b04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186b08: 0x108200
    ctx->pc = 0x186b08u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x186b0c: 0x26310001
    ctx->pc = 0x186b0cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186b10: 0x2028025
    ctx->pc = 0x186b10u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x186b14: 0x92230000
    ctx->pc = 0x186b14u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186b18: 0x26310001
    ctx->pc = 0x186b18u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186b1c: 0x108200
    ctx->pc = 0x186b1cu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x186b20: 0x92220000
    ctx->pc = 0x186b20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186b24: 0x2038025
    ctx->pc = 0x186b24u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x186b28: 0x108200
    ctx->pc = 0x186b28u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x186b2c: 0x26310001
    ctx->pc = 0x186b2cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186b30: 0x2028025
    ctx->pc = 0x186b30u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_186b34:
    // 0x186b34: 0x2a620016
    ctx->pc = 0x186b34u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 22));
    // 0x186b38: 0x1440001d
    ctx->pc = 0x186B38u;
    {
        const bool branch_taken_0x186b38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x186B3Cu;
        SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 18), 22));
        if (branch_taken_0x186b38) {
            ctx->pc = 0x186BB0u;
            goto label_186bb0;
        }
    }
    ctx->pc = 0x186B40u;
    // 0x186b40: 0x2673ffea
    ctx->pc = 0x186b40u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967274));
    // 0x186b44: 0x12600008
    ctx->pc = 0x186B44u;
    {
        const bool branch_taken_0x186b44 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x186B48u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x186b44) {
            ctx->pc = 0x186B68u;
            goto label_186b68;
        }
    }
    ctx->pc = 0x186B4Cu;
    // 0x186b4c: 0x531023
    ctx->pc = 0x186b4cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x186b50: 0x501006
    ctx->pc = 0x186b50u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x186b54: 0x2429025
    ctx->pc = 0x186b54u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x186b58: 0x121d82
    ctx->pc = 0x186b58u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 18), 22));
    // 0x186b5c: 0xae830218
    ctx->pc = 0x186b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 536), GPR_U32(ctx, 3));
    // 0x186b60: 0x10000004
    ctx->pc = 0x186B60u;
    {
        const bool branch_taken_0x186b60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186B64u;
        SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
        if (branch_taken_0x186b60) {
            ctx->pc = 0x186B74u;
            goto label_186b74;
        }
    }
    ctx->pc = 0x186B68u;
label_186b68:
    // 0x186b68: 0x121582
    ctx->pc = 0x186b68u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 18), 22));
    // 0x186b6c: 0xae820218
    ctx->pc = 0x186b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 536), GPR_U32(ctx, 2));
    // 0x186b70: 0x200902d
    ctx->pc = 0x186b70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186b74:
    // 0x186b74: 0x82300000
    ctx->pc = 0x186b74u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186b78: 0x26310001
    ctx->pc = 0x186b78u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186b7c: 0x92220000
    ctx->pc = 0x186b7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186b80: 0x108200
    ctx->pc = 0x186b80u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x186b84: 0x26310001
    ctx->pc = 0x186b84u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186b88: 0x2028025
    ctx->pc = 0x186b88u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x186b8c: 0x92230000
    ctx->pc = 0x186b8cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186b90: 0x26310001
    ctx->pc = 0x186b90u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186b94: 0x108200
    ctx->pc = 0x186b94u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x186b98: 0x92220000
    ctx->pc = 0x186b98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186b9c: 0x2038025
    ctx->pc = 0x186b9cu;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x186ba0: 0x108200
    ctx->pc = 0x186ba0u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x186ba4: 0x26310001
    ctx->pc = 0x186ba4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186ba8: 0x10000004
    ctx->pc = 0x186BA8u;
    {
        const bool branch_taken_0x186ba8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186BACu;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        if (branch_taken_0x186ba8) {
            ctx->pc = 0x186BBCu;
            goto label_186bbc;
        }
    }
    ctx->pc = 0x186BB0u;
label_186bb0:
    // 0x186bb0: 0x2673000a
    ctx->pc = 0x186bb0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 10));
    // 0x186bb4: 0xae820218
    ctx->pc = 0x186bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 536), GPR_U32(ctx, 2));
    // 0x186bb8: 0x129280
    ctx->pc = 0x186bb8u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 18), 10));
label_186bbc:
    // 0x186bbc: 0x1217c2
    ctx->pc = 0x186bbcu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 18), 31));
    // 0x186bc0: 0x2403001f
    ctx->pc = 0x186bc0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 31));
    // 0x186bc4: 0x16630012
    ctx->pc = 0x186BC4u;
    {
        const bool branch_taken_0x186bc4 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 3));
        ctx->pc = 0x186BC8u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 540), GPR_U32(ctx, 2));
        if (branch_taken_0x186bc4) {
            ctx->pc = 0x186C10u;
            goto label_186c10;
        }
    }
    ctx->pc = 0x186BCCu;
    // 0x186bcc: 0x200902d
    ctx->pc = 0x186bccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186bd0: 0x982d
    ctx->pc = 0x186bd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186bd4: 0x82300000
    ctx->pc = 0x186bd4u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186bd8: 0x26310001
    ctx->pc = 0x186bd8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186bdc: 0x92220000
    ctx->pc = 0x186bdcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186be0: 0x108200
    ctx->pc = 0x186be0u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x186be4: 0x26310001
    ctx->pc = 0x186be4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186be8: 0x2028025
    ctx->pc = 0x186be8u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x186bec: 0x92230000
    ctx->pc = 0x186becu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186bf0: 0x26310001
    ctx->pc = 0x186bf0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186bf4: 0x108200
    ctx->pc = 0x186bf4u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x186bf8: 0x92220000
    ctx->pc = 0x186bf8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186bfc: 0x2038025
    ctx->pc = 0x186bfcu;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x186c00: 0x108200
    ctx->pc = 0x186c00u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x186c04: 0x26310001
    ctx->pc = 0x186c04u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186c08: 0x10000003
    ctx->pc = 0x186C08u;
    {
        const bool branch_taken_0x186c08 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186C0Cu;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        if (branch_taken_0x186c08) {
            ctx->pc = 0x186C18u;
            goto label_186c18;
        }
    }
    ctx->pc = 0x186C10u;
label_186c10:
    // 0x186c10: 0x26730001
    ctx->pc = 0x186c10u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x186c14: 0x129040
    ctx->pc = 0x186c14u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 18), 1));
label_186c18:
    // 0x186c18: 0x2402001f
    ctx->pc = 0x186c18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
    // 0x186c1c: 0x16620012
    ctx->pc = 0x186C1Cu;
    {
        const bool branch_taken_0x186c1c = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x186C20u;
        SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 18), 31));
        if (branch_taken_0x186c1c) {
            ctx->pc = 0x186C68u;
            goto label_186c68;
        }
    }
    ctx->pc = 0x186C24u;
    // 0x186c24: 0x200902d
    ctx->pc = 0x186c24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186c28: 0x982d
    ctx->pc = 0x186c28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186c2c: 0x82300000
    ctx->pc = 0x186c2cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186c30: 0x26310001
    ctx->pc = 0x186c30u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186c34: 0x92220000
    ctx->pc = 0x186c34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186c38: 0x108200
    ctx->pc = 0x186c38u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x186c3c: 0x26310001
    ctx->pc = 0x186c3cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186c40: 0x2028025
    ctx->pc = 0x186c40u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x186c44: 0x92230000
    ctx->pc = 0x186c44u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186c48: 0x26310001
    ctx->pc = 0x186c48u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186c4c: 0x108200
    ctx->pc = 0x186c4cu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x186c50: 0x92220000
    ctx->pc = 0x186c50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186c54: 0x2038025
    ctx->pc = 0x186c54u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x186c58: 0x108200
    ctx->pc = 0x186c58u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x186c5c: 0x26310001
    ctx->pc = 0x186c5cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186c60: 0x10000003
    ctx->pc = 0x186C60u;
    {
        const bool branch_taken_0x186c60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186C64u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        if (branch_taken_0x186c60) {
            ctx->pc = 0x186C70u;
            goto label_186c70;
        }
    }
    ctx->pc = 0x186C68u;
label_186c68:
    // 0x186c68: 0x26730001
    ctx->pc = 0x186c68u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x186c6c: 0x129040
    ctx->pc = 0x186c6cu;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 18), 1));
label_186c70:
    // 0x186c70: 0x1080002a
    ctx->pc = 0x186C70u;
    {
        const bool branch_taken_0x186c70 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x186C74u;
        SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
        if (branch_taken_0x186c70) {
            ctx->pc = 0x186D1Cu;
            goto label_186d1c;
        }
    }
    ctx->pc = 0x186C78u;
    // 0x186c78: 0x24080008
    ctx->pc = 0x186c78u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8));
    // 0x186c7c: 0x24451540
    ctx->pc = 0x186c7cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 5440));
    // 0x186c80: 0x268605e0
    ctx->pc = 0x186c80u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 20), 1504));
    // 0x186c84: 0x24a70040
    ctx->pc = 0x186c84u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 5), 64));
label_186c88:
    // 0x186c88: 0x2a620018
    ctx->pc = 0x186c88u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 24));
    // 0x186c8c: 0x14400019
    ctx->pc = 0x186C8Cu;
    {
        const bool branch_taken_0x186c8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x186C90u;
        SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 18), 24));
        if (branch_taken_0x186c8c) {
            ctx->pc = 0x186CF4u;
            goto label_186cf4;
        }
    }
    ctx->pc = 0x186C94u;
    // 0x186c94: 0x2673ffe8
    ctx->pc = 0x186c94u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967272));
    // 0x186c98: 0x12600006
    ctx->pc = 0x186C98u;
    {
        const bool branch_taken_0x186c98 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x186C9Cu;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 19)));
        if (branch_taken_0x186c98) {
            ctx->pc = 0x186CB4u;
            goto label_186cb4;
        }
    }
    ctx->pc = 0x186CA0u;
    // 0x186ca0: 0x501006
    ctx->pc = 0x186ca0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x186ca4: 0x2429025
    ctx->pc = 0x186ca4u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x186ca8: 0x122602
    ctx->pc = 0x186ca8u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 18), 24));
    // 0x186cac: 0x10000002
    ctx->pc = 0x186CACu;
    {
        const bool branch_taken_0x186cac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186CB0u;
        SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
        if (branch_taken_0x186cac) {
            ctx->pc = 0x186CB8u;
            goto label_186cb8;
        }
    }
    ctx->pc = 0x186CB4u;
label_186cb4:
    // 0x186cb4: 0x200902d
    ctx->pc = 0x186cb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186cb8:
    // 0x186cb8: 0x82300000
    ctx->pc = 0x186cb8u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186cbc: 0x26310001
    ctx->pc = 0x186cbcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186cc0: 0x92220000
    ctx->pc = 0x186cc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186cc4: 0x108200
    ctx->pc = 0x186cc4u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x186cc8: 0x26310001
    ctx->pc = 0x186cc8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186ccc: 0x2028025
    ctx->pc = 0x186cccu;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x186cd0: 0x92230000
    ctx->pc = 0x186cd0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186cd4: 0x26310001
    ctx->pc = 0x186cd4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186cd8: 0x108200
    ctx->pc = 0x186cd8u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x186cdc: 0x92220000
    ctx->pc = 0x186cdcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186ce0: 0x2038025
    ctx->pc = 0x186ce0u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x186ce4: 0x108200
    ctx->pc = 0x186ce4u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x186ce8: 0x26310001
    ctx->pc = 0x186ce8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186cec: 0x10000003
    ctx->pc = 0x186CECu;
    {
        const bool branch_taken_0x186cec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186CF0u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        if (branch_taken_0x186cec) {
            ctx->pc = 0x186CFCu;
            goto label_186cfc;
        }
    }
    ctx->pc = 0x186CF4u;
label_186cf4:
    // 0x186cf4: 0x26730008
    ctx->pc = 0x186cf4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 8));
    // 0x186cf8: 0x129200
    ctx->pc = 0x186cf8u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 18), 8));
label_186cfc:
    // 0x186cfc: 0x80a20000
    ctx->pc = 0x186cfcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x186d00: 0x24a50001
    ctx->pc = 0x186d00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x186d04: 0xc21021
    ctx->pc = 0x186d04u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x186d08: 0xa7182a
    ctx->pc = 0x186d08u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 7)));
    // 0x186d0c: 0x1460ffde
    ctx->pc = 0x186D0Cu;
    {
        const bool branch_taken_0x186d0c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x186D10u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
        if (branch_taken_0x186d0c) {
            ctx->pc = 0x186C88u;
            goto label_186c88;
        }
    }
    ctx->pc = 0x186D14u;
    // 0x186d14: 0x10000004
    ctx->pc = 0x186D14u;
    {
        const bool branch_taken_0x186d14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186D18u;
        SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 18), 31));
        if (branch_taken_0x186d14) {
            ctx->pc = 0x186D28u;
            goto label_186d28;
        }
    }
    ctx->pc = 0x186D1Cu;
label_186d1c:
    // 0x186d1c: 0xc061bba
    ctx->pc = 0x186D1Cu;
    SET_GPR_U32(ctx, 31, 0x186D24u);
    ctx->pc = 0x186D20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x186EE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvhdec_InitIqm_0x186ee8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186D24u; }
        else if (ctx->pc != 0x186D24u) { ctx->pc = 0x186D24u; }
    }
    if (ctx->pc != 0x186D24u) { return; }
    ctx->pc = 0x186D24u;
    // 0x186d24: 0x1227c2
    ctx->pc = 0x186d24u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 18), 31));
label_186d28:
    // 0x186d28: 0x2402001f
    ctx->pc = 0x186d28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
    // 0x186d2c: 0x16620012
    ctx->pc = 0x186D2Cu;
    {
        const bool branch_taken_0x186d2c = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x186D30u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
        if (branch_taken_0x186d2c) {
            ctx->pc = 0x186D78u;
            goto label_186d78;
        }
    }
    ctx->pc = 0x186D34u;
    // 0x186d34: 0x200902d
    ctx->pc = 0x186d34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186d38: 0x982d
    ctx->pc = 0x186d38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186d3c: 0x82300000
    ctx->pc = 0x186d3cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186d40: 0x26310001
    ctx->pc = 0x186d40u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186d44: 0x92220000
    ctx->pc = 0x186d44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186d48: 0x108200
    ctx->pc = 0x186d48u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x186d4c: 0x26310001
    ctx->pc = 0x186d4cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186d50: 0x2028025
    ctx->pc = 0x186d50u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x186d54: 0x92230000
    ctx->pc = 0x186d54u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186d58: 0x26310001
    ctx->pc = 0x186d58u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186d5c: 0x108200
    ctx->pc = 0x186d5cu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x186d60: 0x92220000
    ctx->pc = 0x186d60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186d64: 0x2038025
    ctx->pc = 0x186d64u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x186d68: 0x108200
    ctx->pc = 0x186d68u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x186d6c: 0x26310001
    ctx->pc = 0x186d6cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186d70: 0x10000002
    ctx->pc = 0x186D70u;
    {
        const bool branch_taken_0x186d70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186D74u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        if (branch_taken_0x186d70) {
            ctx->pc = 0x186D7Cu;
            goto label_186d7c;
        }
    }
    ctx->pc = 0x186D78u;
label_186d78:
    // 0x186d78: 0x129040
    ctx->pc = 0x186d78u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 18), 1));
label_186d7c:
    // 0x186d7c: 0x1080002b
    ctx->pc = 0x186D7Cu;
    {
        const bool branch_taken_0x186d7c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x186D80u;
        SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
        if (branch_taken_0x186d7c) {
            ctx->pc = 0x186E2Cu;
            goto label_186e2c;
        }
    }
    ctx->pc = 0x186D84u;
    // 0x186d84: 0x24080008
    ctx->pc = 0x186d84u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8));
    // 0x186d88: 0x24451540
    ctx->pc = 0x186d88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 5440));
    // 0x186d8c: 0x26860620
    ctx->pc = 0x186d8cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 20), 1568));
    // 0x186d90: 0x24a70040
    ctx->pc = 0x186d90u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 5), 64));
    // 0x186d94: 0x0
    ctx->pc = 0x186d94u;
    // NOP
label_186d98:
    // 0x186d98: 0x2a620018
    ctx->pc = 0x186d98u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 24));
    // 0x186d9c: 0x14400019
    ctx->pc = 0x186D9Cu;
    {
        const bool branch_taken_0x186d9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x186DA0u;
        SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 18), 24));
        if (branch_taken_0x186d9c) {
            ctx->pc = 0x186E04u;
            goto label_186e04;
        }
    }
    ctx->pc = 0x186DA4u;
    // 0x186da4: 0x2673ffe8
    ctx->pc = 0x186da4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967272));
    // 0x186da8: 0x12600006
    ctx->pc = 0x186DA8u;
    {
        const bool branch_taken_0x186da8 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x186DACu;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 19)));
        if (branch_taken_0x186da8) {
            ctx->pc = 0x186DC4u;
            goto label_186dc4;
        }
    }
    ctx->pc = 0x186DB0u;
    // 0x186db0: 0x501006
    ctx->pc = 0x186db0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x186db4: 0x2429025
    ctx->pc = 0x186db4u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x186db8: 0x122602
    ctx->pc = 0x186db8u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 18), 24));
    // 0x186dbc: 0x10000002
    ctx->pc = 0x186DBCu;
    {
        const bool branch_taken_0x186dbc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186DC0u;
        SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
        if (branch_taken_0x186dbc) {
            ctx->pc = 0x186DC8u;
            goto label_186dc8;
        }
    }
    ctx->pc = 0x186DC4u;
label_186dc4:
    // 0x186dc4: 0x200902d
    ctx->pc = 0x186dc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186dc8:
    // 0x186dc8: 0x82300000
    ctx->pc = 0x186dc8u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186dcc: 0x26310001
    ctx->pc = 0x186dccu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186dd0: 0x92220000
    ctx->pc = 0x186dd0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186dd4: 0x108200
    ctx->pc = 0x186dd4u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x186dd8: 0x26310001
    ctx->pc = 0x186dd8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186ddc: 0x2028025
    ctx->pc = 0x186ddcu;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x186de0: 0x92230000
    ctx->pc = 0x186de0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186de4: 0x26310001
    ctx->pc = 0x186de4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186de8: 0x108200
    ctx->pc = 0x186de8u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x186dec: 0x92220000
    ctx->pc = 0x186decu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x186df0: 0x2038025
    ctx->pc = 0x186df0u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x186df4: 0x108200
    ctx->pc = 0x186df4u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
    // 0x186df8: 0x26310001
    ctx->pc = 0x186df8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x186dfc: 0x10000003
    ctx->pc = 0x186DFCu;
    {
        const bool branch_taken_0x186dfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186E00u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        if (branch_taken_0x186dfc) {
            ctx->pc = 0x186E0Cu;
            goto label_186e0c;
        }
    }
    ctx->pc = 0x186E04u;
label_186e04:
    // 0x186e04: 0x26730008
    ctx->pc = 0x186e04u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 8));
    // 0x186e08: 0x129200
    ctx->pc = 0x186e08u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 18), 8));
label_186e0c:
    // 0x186e0c: 0x80a20000
    ctx->pc = 0x186e0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x186e10: 0x24a50001
    ctx->pc = 0x186e10u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x186e14: 0xc21021
    ctx->pc = 0x186e14u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x186e18: 0xa7182a
    ctx->pc = 0x186e18u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 7)));
    // 0x186e1c: 0x1460ffde
    ctx->pc = 0x186E1Cu;
    {
        const bool branch_taken_0x186e1c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x186E20u;
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
        if (branch_taken_0x186e1c) {
            ctx->pc = 0x186D98u;
            goto label_186d98;
        }
    }
    ctx->pc = 0x186E24u;
    // 0x186e24: 0x10000004
    ctx->pc = 0x186E24u;
    {
        const bool branch_taken_0x186e24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x186E28u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 0)));
        if (branch_taken_0x186e24) {
            ctx->pc = 0x186E38u;
            goto label_186e38;
        }
    }
    ctx->pc = 0x186E2Cu;
label_186e2c:
    // 0x186e2c: 0xc061bc0
    ctx->pc = 0x186E2Cu;
    SET_GPR_U32(ctx, 31, 0x186E34u);
    ctx->pc = 0x186E30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x186F00u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvhdec_InitNqm_0x186f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186E34u; }
        else if (ctx->pc != 0x186E34u) { ctx->pc = 0x186E34u; }
    }
    if (ctx->pc != 0x186E34u) { return; }
    ctx->pc = 0x186E34u;
    // 0x186e34: 0x8ea20000
    ctx->pc = 0x186e34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_186e38:
    // 0x186e38: 0x280202d
    ctx->pc = 0x186e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186e3c: 0x8ea30004
    ctx->pc = 0x186e3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x186e40: 0x2442000f
    ctx->pc = 0x186e40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 15));
    // 0x186e44: 0x21103
    ctx->pc = 0x186e44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x186e48: 0x2463000f
    ctx->pc = 0x186e48u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 15));
    // 0x186e4c: 0xaea20008
    ctx->pc = 0x186e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
    // 0x186e50: 0x31903
    ctx->pc = 0x186e50u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x186e54: 0x621018
    ctx->pc = 0x186e54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x186e58: 0xaea3000c
    ctx->pc = 0x186e58u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 3));
    // 0x186e5c: 0x2442ffff
    ctx->pc = 0x186e5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x186e60: 0xc061bc6
    ctx->pc = 0x186E60u;
    SET_GPR_U32(ctx, 31, 0x186E68u);
    ctx->pc = 0x186E64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 672), GPR_U32(ctx, 2));
    ctx->pc = 0x186F18u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvhdec_InitMbAdr2Pos_0x186f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186E68u; }
        else if (ctx->pc != 0x186E68u) { ctx->pc = 0x186E68u; }
    }
    if (ctx->pc != 0x186E68u) { return; }
    ctx->pc = 0x186E68u;
    // 0x186e68: 0x26620007
    ctx->pc = 0x186e68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 7));
    // 0x186e6c: 0x8ec90000
    ctx->pc = 0x186e6cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x186e70: 0x210c3
    ctx->pc = 0x186e70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x186e74: 0x8ee30000
    ctx->pc = 0x186e74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x186e78: 0x2442fff8
    ctx->pc = 0x186e78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x186e7c: 0x280202d
    ctx->pc = 0x186e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186e80: 0x2221021
    ctx->pc = 0x186e80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x186e84: 0x2c0282d
    ctx->pc = 0x186e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186e88: 0x494823
    ctx->pc = 0x186e88u;
    SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x186e8c: 0xaec20000
    ctx->pc = 0x186e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x186e90: 0x691821
    ctx->pc = 0x186e90u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x186e94: 0x3c0302d
    ctx->pc = 0x186e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186e98: 0xaee30000
    ctx->pc = 0x186e98u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x186e9c: 0x2e0382d
    ctx->pc = 0x186e9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186ea0: 0x24080008
    ctx->pc = 0x186ea0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8));
    // 0x186ea4: 0x8fc20000
    ctx->pc = 0x186ea4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x186ea8: 0x491023
    ctx->pc = 0x186ea8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x186eac: 0xc061dee
    ctx->pc = 0x186EACu;
    SET_GPR_U32(ctx, 31, 0x186EB4u);
    ctx->pc = 0x186EB0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1877B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvhdec_GoNextLayer_0x1877b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x186EB4u; }
        else if (ctx->pc != 0x186EB4u) { ctx->pc = 0x186EB4u; }
    }
    if (ctx->pc != 0x186EB4u) { return; }
    ctx->pc = 0x186EB4u;
    // 0x186eb4: 0xdfbf0090
    ctx->pc = 0x186eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x186eb8: 0xdfbe0080
    ctx->pc = 0x186eb8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x186ebc: 0xdfb70070
    ctx->pc = 0x186ebcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x186ec0: 0xdfb60060
    ctx->pc = 0x186ec0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x186ec4: 0xdfb50050
    ctx->pc = 0x186ec4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x186ec8: 0xdfb40040
    ctx->pc = 0x186ec8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x186ecc: 0xdfb30030
    ctx->pc = 0x186eccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x186ed0: 0xdfb20020
    ctx->pc = 0x186ed0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x186ed4: 0xdfb10010
    ctx->pc = 0x186ed4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x186ed8: 0xdfb00000
    ctx->pc = 0x186ed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x186edc: 0x3e00008
    ctx->pc = 0x186EDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186EE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186878u: goto label_186878;
            case 0x186884u: goto label_186884;
            case 0x1868C0u: goto label_1868c0;
            case 0x1868D0u: goto label_1868d0;
            case 0x186904u: goto label_186904;
            case 0x186910u: goto label_186910;
            case 0x18694Cu: goto label_18694c;
            case 0x186958u: goto label_186958;
            case 0x18698Cu: goto label_18698c;
            case 0x186998u: goto label_186998;
            case 0x1869D4u: goto label_1869d4;
            case 0x1869E0u: goto label_1869e0;
            case 0x186A10u: goto label_186a10;
            case 0x186A14u: goto label_186a14;
            case 0x186A50u: goto label_186a50;
            case 0x186A58u: goto label_186a58;
            case 0x186A8Cu: goto label_186a8c;
            case 0x186A98u: goto label_186a98;
            case 0x186AD4u: goto label_186ad4;
            case 0x186AE4u: goto label_186ae4;
            case 0x186B34u: goto label_186b34;
            case 0x186B68u: goto label_186b68;
            case 0x186B74u: goto label_186b74;
            case 0x186BB0u: goto label_186bb0;
            case 0x186BBCu: goto label_186bbc;
            case 0x186C10u: goto label_186c10;
            case 0x186C18u: goto label_186c18;
            case 0x186C68u: goto label_186c68;
            case 0x186C70u: goto label_186c70;
            case 0x186C88u: goto label_186c88;
            case 0x186CB4u: goto label_186cb4;
            case 0x186CB8u: goto label_186cb8;
            case 0x186CF4u: goto label_186cf4;
            case 0x186CFCu: goto label_186cfc;
            case 0x186D1Cu: goto label_186d1c;
            case 0x186D28u: goto label_186d28;
            case 0x186D78u: goto label_186d78;
            case 0x186D7Cu: goto label_186d7c;
            case 0x186D98u: goto label_186d98;
            case 0x186DC4u: goto label_186dc4;
            case 0x186DC8u: goto label_186dc8;
            case 0x186E04u: goto label_186e04;
            case 0x186E0Cu: goto label_186e0c;
            case 0x186E2Cu: goto label_186e2c;
            case 0x186E38u: goto label_186e38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x186EE4u;
}
