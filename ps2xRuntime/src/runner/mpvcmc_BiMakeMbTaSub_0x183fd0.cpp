#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvcmc_BiMakeMbTaSub
// Address: 0x183fd0 - 0x184324
void mpvcmc_BiMakeMbTaSub_0x183fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvcmc_BiMakeMbTaSub");


    ctx->pc = 0x183fd0u;

    // 0x183fd0: 0x27bdffa0
    ctx->pc = 0x183fd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x183fd4: 0x80782d
    ctx->pc = 0x183fd4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183fd8: 0xffb50050
    ctx->pc = 0x183fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x183fdc: 0x382d
    ctx->pc = 0x183fdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183fe0: 0xffb40040
    ctx->pc = 0x183fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x183fe4: 0xffb30030
    ctx->pc = 0x183fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x183fe8: 0xffb20020
    ctx->pc = 0x183fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x183fec: 0xffb10010
    ctx->pc = 0x183fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x183ff0: 0xffb00000
    ctx->pc = 0x183ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x183ff4: 0x8cb80000
    ctx->pc = 0x183ff4u;
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x183ff8: 0x8cb10004
    ctx->pc = 0x183ff8u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x183ffc: 0x8cab0008
    ctx->pc = 0x183ffcu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x184000: 0x8cae000c
    ctx->pc = 0x184000u;
    SET_GPR_U32(ctx, 14, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x184004: 0x0
    ctx->pc = 0x184004u;
    // NOP
label_184008:
    // 0x184008: 0x4c00043
    ctx->pc = 0x184008u;
    {
        const bool branch_taken_0x184008 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x18400Cu;
        SET_GPR_U32(ctx, 20, SLL32(GPR_U32(ctx, 6), 1));
        if (branch_taken_0x184008) {
            ctx->pc = 0x184118u;
            goto label_184118;
        }
    }
    ctx->pc = 0x184010u;
    // 0x184010: 0x24f30001
    ctx->pc = 0x184010u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 7), 1));
    // 0x184014: 0x26310080
    ctx->pc = 0x184014u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 128));
    // 0x184018: 0x25f50020
    ctx->pc = 0x184018u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 15), 32));
    // 0x18401c: 0x24120007
    ctx->pc = 0x18401cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 7));
    // 0x184020: 0x256a0007
    ctx->pc = 0x184020u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 11), 7));
    // 0x184024: 0x25680001
    ctx->pc = 0x184024u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 11), 1));
    // 0x184028: 0x25cc0007
    ctx->pc = 0x184028u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 14), 7));
    // 0x18402c: 0x25c90001
    ctx->pc = 0x18402cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 14), 1));
label_184030:
    // 0x184030: 0x9183fff9
    ctx->pc = 0x184030u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 4294967289)));
    // 0x184034: 0x25ce0008
    ctx->pc = 0x184034u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 8));
    // 0x184038: 0x9142fff9
    ctx->pc = 0x184038u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 4294967289)));
    // 0x18403c: 0x256b0008
    ctx->pc = 0x18403cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 8));
    // 0x184040: 0x2652ffff
    ctx->pc = 0x184040u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x184044: 0x431021
    ctx->pc = 0x184044u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x184048: 0x24420001
    ctx->pc = 0x184048u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x18404c: 0x21043
    ctx->pc = 0x18404cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x184050: 0xa142fff9
    ctx->pc = 0x184050u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 4294967289), (uint8_t)GPR_U32(ctx, 2));
    // 0x184054: 0x91250000
    ctx->pc = 0x184054u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x184058: 0x91020000
    ctx->pc = 0x184058u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18405c: 0x91030001
    ctx->pc = 0x18405cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x184060: 0x451021
    ctx->pc = 0x184060u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x184064: 0x91040002
    ctx->pc = 0x184064u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x184068: 0x24420001
    ctx->pc = 0x184068u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x18406c: 0x91050003
    ctx->pc = 0x18406cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x184070: 0x21043
    ctx->pc = 0x184070u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x184074: 0x91060004
    ctx->pc = 0x184074u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x184078: 0xa1020000
    ctx->pc = 0x184078u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x18407c: 0x91070005
    ctx->pc = 0x18407cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
    // 0x184080: 0x91220001
    ctx->pc = 0x184080u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x184084: 0x621821
    ctx->pc = 0x184084u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x184088: 0x24630001
    ctx->pc = 0x184088u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x18408c: 0x31843
    ctx->pc = 0x18408cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x184090: 0xa1030001
    ctx->pc = 0x184090u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x184094: 0x91220002
    ctx->pc = 0x184094u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x184098: 0x822021
    ctx->pc = 0x184098u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x18409c: 0x24840001
    ctx->pc = 0x18409cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1840a0: 0x42043
    ctx->pc = 0x1840a0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x1840a4: 0xa1040002
    ctx->pc = 0x1840a4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1840a8: 0x91220003
    ctx->pc = 0x1840a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
    // 0x1840ac: 0xa22821
    ctx->pc = 0x1840acu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1840b0: 0x24a50001
    ctx->pc = 0x1840b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1840b4: 0x52843
    ctx->pc = 0x1840b4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x1840b8: 0xa1050003
    ctx->pc = 0x1840b8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x1840bc: 0x91220004
    ctx->pc = 0x1840bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1840c0: 0xc23021
    ctx->pc = 0x1840c0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1840c4: 0x24c60001
    ctx->pc = 0x1840c4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1840c8: 0x63043
    ctx->pc = 0x1840c8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x1840cc: 0xa1060004
    ctx->pc = 0x1840ccu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 4), (uint8_t)GPR_U32(ctx, 6));
    // 0x1840d0: 0x91220005
    ctx->pc = 0x1840d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 5)));
    // 0x1840d4: 0x25c90001
    ctx->pc = 0x1840d4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 14), 1));
    // 0x1840d8: 0xe23821
    ctx->pc = 0x1840d8u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1840dc: 0x24e70001
    ctx->pc = 0x1840dcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x1840e0: 0x73843
    ctx->pc = 0x1840e0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
    // 0x1840e4: 0xa1070005
    ctx->pc = 0x1840e4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 5), (uint8_t)GPR_U32(ctx, 7));
    // 0x1840e8: 0x25680001
    ctx->pc = 0x1840e8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 11), 1));
    // 0x1840ec: 0x91420000
    ctx->pc = 0x1840ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1840f0: 0x91830000
    ctx->pc = 0x1840f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1840f4: 0x258c0008
    ctx->pc = 0x1840f4u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 8));
    // 0x1840f8: 0x431021
    ctx->pc = 0x1840f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1840fc: 0x24420001
    ctx->pc = 0x1840fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x184100: 0x21043
    ctx->pc = 0x184100u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x184104: 0xa1420000
    ctx->pc = 0x184104u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x184108: 0x641ffc9
    ctx->pc = 0x184108u;
    {
        const bool branch_taken_0x184108 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x18410Cu;
        SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 8));
        if (branch_taken_0x184108) {
            ctx->pc = 0x184030u;
            goto label_184030;
        }
    }
    ctx->pc = 0x184110u;
    // 0x184110: 0x10000067
    ctx->pc = 0x184110u;
    {
        const bool branch_taken_0x184110 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x184114u;
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 11), 4294967232)));
        if (branch_taken_0x184110) {
            ctx->pc = 0x1842B0u;
            goto label_1842b0;
        }
    }
    ctx->pc = 0x184118u;
label_184118:
    // 0x184118: 0x24f30001
    ctx->pc = 0x184118u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 7), 1));
    // 0x18411c: 0x25f50020
    ctx->pc = 0x18411cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 15), 32));
    // 0x184120: 0x24120007
    ctx->pc = 0x184120u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 7));
    // 0x184124: 0x256d0007
    ctx->pc = 0x184124u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 11), 7));
    // 0x184128: 0x25690001
    ctx->pc = 0x184128u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 11), 1));
    // 0x18412c: 0x25d00007
    ctx->pc = 0x18412cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 14), 7));
    // 0x184130: 0x25cc0001
    ctx->pc = 0x184130u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 14), 1));
    // 0x184134: 0x2639000e
    ctx->pc = 0x184134u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 17), 14));
    // 0x184138: 0x262a0002
    ctx->pc = 0x184138u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 17), 2));
    // 0x18413c: 0x0
    ctx->pc = 0x18413cu;
    // NOP
label_184140:
    // 0x184140: 0x9203fff9
    ctx->pc = 0x184140u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967289)));
    // 0x184144: 0x26310010
    ctx->pc = 0x184144u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 16));
    // 0x184148: 0x91a2fff9
    ctx->pc = 0x184148u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 4294967289)));
    // 0x18414c: 0x25ce0008
    ctx->pc = 0x18414cu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 8));
    // 0x184150: 0x8724fff2
    ctx->pc = 0x184150u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 4294967282)));
    // 0x184154: 0x256b0008
    ctx->pc = 0x184154u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 8));
    // 0x184158: 0x431021
    ctx->pc = 0x184158u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18415c: 0x2652ffff
    ctx->pc = 0x18415cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x184160: 0x24420001
    ctx->pc = 0x184160u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x184164: 0x21043
    ctx->pc = 0x184164u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x184168: 0x441021
    ctx->pc = 0x184168u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18416c: 0x3021021
    ctx->pc = 0x18416cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x184170: 0x90430000
    ctx->pc = 0x184170u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x184174: 0xa1a3fff9
    ctx->pc = 0x184174u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 4294967289), (uint8_t)GPR_U32(ctx, 3));
    // 0x184178: 0x91850000
    ctx->pc = 0x184178u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x18417c: 0x91220000
    ctx->pc = 0x18417cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x184180: 0x85430000
    ctx->pc = 0x184180u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x184184: 0x451021
    ctx->pc = 0x184184u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x184188: 0x91240001
    ctx->pc = 0x184188u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x18418c: 0x24420001
    ctx->pc = 0x18418cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x184190: 0x91250002
    ctx->pc = 0x184190u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x184194: 0x21043
    ctx->pc = 0x184194u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x184198: 0x91260003
    ctx->pc = 0x184198u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
    // 0x18419c: 0x431021
    ctx->pc = 0x18419cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1841a0: 0x91270004
    ctx->pc = 0x1841a0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1841a4: 0x3021021
    ctx->pc = 0x1841a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x1841a8: 0x91280005
    ctx->pc = 0x1841a8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 5)));
    // 0x1841ac: 0x90430000
    ctx->pc = 0x1841acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1841b0: 0xa1230000
    ctx->pc = 0x1841b0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1841b4: 0x91820001
    ctx->pc = 0x1841b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x1841b8: 0x85430002
    ctx->pc = 0x1841b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x1841bc: 0x822021
    ctx->pc = 0x1841bcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1841c0: 0x24840001
    ctx->pc = 0x1841c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1841c4: 0x42043
    ctx->pc = 0x1841c4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x1841c8: 0x832021
    ctx->pc = 0x1841c8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1841cc: 0x3042021
    ctx->pc = 0x1841ccu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 4)));
    // 0x1841d0: 0x90820000
    ctx->pc = 0x1841d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1841d4: 0xa1220001
    ctx->pc = 0x1841d4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1841d8: 0x91830002
    ctx->pc = 0x1841d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x1841dc: 0x85420004
    ctx->pc = 0x1841dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x1841e0: 0xa32821
    ctx->pc = 0x1841e0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1841e4: 0x24a50001
    ctx->pc = 0x1841e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1841e8: 0x52843
    ctx->pc = 0x1841e8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x1841ec: 0xa22821
    ctx->pc = 0x1841ecu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1841f0: 0x3052821
    ctx->pc = 0x1841f0u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 5)));
    // 0x1841f4: 0x90a20000
    ctx->pc = 0x1841f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1841f8: 0xa1220002
    ctx->pc = 0x1841f8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1841fc: 0x91830003
    ctx->pc = 0x1841fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 3)));
    // 0x184200: 0x85420006
    ctx->pc = 0x184200u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 6)));
    // 0x184204: 0xc33021
    ctx->pc = 0x184204u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x184208: 0x24c60001
    ctx->pc = 0x184208u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x18420c: 0x63043
    ctx->pc = 0x18420cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x184210: 0xc23021
    ctx->pc = 0x184210u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x184214: 0x3063021
    ctx->pc = 0x184214u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 6)));
    // 0x184218: 0x90c20000
    ctx->pc = 0x184218u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18421c: 0xa1220003
    ctx->pc = 0x18421cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x184220: 0x91830004
    ctx->pc = 0x184220u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x184224: 0x85420008
    ctx->pc = 0x184224u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x184228: 0xe33821
    ctx->pc = 0x184228u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x18422c: 0x24e70001
    ctx->pc = 0x18422cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x184230: 0x73843
    ctx->pc = 0x184230u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
    // 0x184234: 0xe23821
    ctx->pc = 0x184234u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x184238: 0x3073821
    ctx->pc = 0x184238u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 7)));
    // 0x18423c: 0x90e20000
    ctx->pc = 0x18423cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x184240: 0xa1220004
    ctx->pc = 0x184240u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x184244: 0x91830005
    ctx->pc = 0x184244u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 5)));
    // 0x184248: 0x8542000a
    ctx->pc = 0x184248u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 10)));
    // 0x18424c: 0x25cc0001
    ctx->pc = 0x18424cu;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 14), 1));
    // 0x184250: 0x1034021
    ctx->pc = 0x184250u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x184254: 0x262a0002
    ctx->pc = 0x184254u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 17), 2));
    // 0x184258: 0x25080001
    ctx->pc = 0x184258u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x18425c: 0x84043
    ctx->pc = 0x18425cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
    // 0x184260: 0x1024021
    ctx->pc = 0x184260u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x184264: 0x3084021
    ctx->pc = 0x184264u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 8)));
    // 0x184268: 0x91030000
    ctx->pc = 0x184268u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18426c: 0xa1230005
    ctx->pc = 0x18426cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x184270: 0x92030000
    ctx->pc = 0x184270u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x184274: 0x25690001
    ctx->pc = 0x184274u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 11), 1));
    // 0x184278: 0x91a20000
    ctx->pc = 0x184278u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x18427c: 0x26100008
    ctx->pc = 0x18427cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 8));
    // 0x184280: 0x87240000
    ctx->pc = 0x184280u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x184284: 0x431021
    ctx->pc = 0x184284u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x184288: 0x27390010
    ctx->pc = 0x184288u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 25), 16));
    // 0x18428c: 0x24420001
    ctx->pc = 0x18428cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x184290: 0x21043
    ctx->pc = 0x184290u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x184294: 0x441021
    ctx->pc = 0x184294u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x184298: 0x3021021
    ctx->pc = 0x184298u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x18429c: 0x90430000
    ctx->pc = 0x18429cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1842a0: 0xa1a30000
    ctx->pc = 0x1842a0u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1842a4: 0x641ffa6
    ctx->pc = 0x1842A4u;
    {
        const bool branch_taken_0x1842a4 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1842A8u;
        SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 8));
        if (branch_taken_0x1842a4) {
            ctx->pc = 0x184140u;
            goto label_184140;
        }
    }
    ctx->pc = 0x1842ACu;
    // 0x1842ac: 0xdd63ffc0
    ctx->pc = 0x1842acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 11), 4294967232)));
label_1842b0:
    // 0x1842b0: 0x260382d
    ctx->pc = 0x1842b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1842b4: 0x280302d
    ctx->pc = 0x1842b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1842b8: 0x28e40006
    ctx->pc = 0x1842b8u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 7), 6));
    // 0x1842bc: 0xfde30000
    ctx->pc = 0x1842bcu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 3));
    // 0x1842c0: 0xdd62ffc8
    ctx->pc = 0x1842c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 4294967240)));
    // 0x1842c4: 0xfde20008
    ctx->pc = 0x1842c4u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 8), GPR_U64(ctx, 2));
    // 0x1842c8: 0xdd63ffd0
    ctx->pc = 0x1842c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 11), 4294967248)));
    // 0x1842cc: 0xfde30010
    ctx->pc = 0x1842ccu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 16), GPR_U64(ctx, 3));
    // 0x1842d0: 0xdd62ffd8
    ctx->pc = 0x1842d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 4294967256)));
    // 0x1842d4: 0xfde20018
    ctx->pc = 0x1842d4u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 24), GPR_U64(ctx, 2));
    // 0x1842d8: 0x2a0782d
    ctx->pc = 0x1842d8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1842dc: 0xdd62ffe0
    ctx->pc = 0x1842dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 4294967264)));
    // 0x1842e0: 0xfde20000
    ctx->pc = 0x1842e0u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 2));
    // 0x1842e4: 0xdd63ffe8
    ctx->pc = 0x1842e4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 11), 4294967272)));
    // 0x1842e8: 0xfde30008
    ctx->pc = 0x1842e8u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 8), GPR_U64(ctx, 3));
    // 0x1842ec: 0xdd62fff0
    ctx->pc = 0x1842ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 11), 4294967280)));
    // 0x1842f0: 0xfde20010
    ctx->pc = 0x1842f0u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 16), GPR_U64(ctx, 2));
    // 0x1842f4: 0xdd63fff8
    ctx->pc = 0x1842f4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 11), 4294967288)));
    // 0x1842f8: 0xfde30018
    ctx->pc = 0x1842f8u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 24), GPR_U64(ctx, 3));
    // 0x1842fc: 0x1480ff42
    ctx->pc = 0x1842FCu;
    {
        const bool branch_taken_0x1842fc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x184300u;
        SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 15), 32));
        if (branch_taken_0x1842fc) {
            ctx->pc = 0x184008u;
            goto label_184008;
        }
    }
    ctx->pc = 0x184304u;
    // 0x184304: 0xdfb50050
    ctx->pc = 0x184304u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x184308: 0xdfb40040
    ctx->pc = 0x184308u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18430c: 0xdfb30030
    ctx->pc = 0x18430cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x184310: 0xdfb20020
    ctx->pc = 0x184310u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x184314: 0xdfb10010
    ctx->pc = 0x184314u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184318: 0xdfb00000
    ctx->pc = 0x184318u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18431c: 0x3e00008
    ctx->pc = 0x18431Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184320u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x184008u: goto label_184008;
            case 0x184030u: goto label_184030;
            case 0x184118u: goto label_184118;
            case 0x184140u: goto label_184140;
            case 0x1842B0u: goto label_1842b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x184324u;
}
