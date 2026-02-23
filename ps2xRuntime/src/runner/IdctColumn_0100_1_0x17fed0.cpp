#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: IdctColumn_0100_1
// Address: 0x17fed0 - 0x180028
void IdctColumn_0100_1_0x17fed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("IdctColumn_0100_1");


    ctx->pc = 0x17fed0u;

    // 0x17fed0: 0x27bdffd0
    ctx->pc = 0x17fed0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17fed4: 0x3c190002
    ctx->pc = 0x17fed4u;
    SET_GPR_U32(ctx, 25, ((uint32_t)2 << 16));
    // 0x17fed8: 0xffb10010
    ctx->pc = 0x17fed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17fedc: 0x3c180001
    ctx->pc = 0x17fedcu;
    SET_GPR_U32(ctx, 24, ((uint32_t)1 << 16));
    // 0x17fee0: 0xffb00000
    ctx->pc = 0x17fee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17fee4: 0x3c11fffe
    ctx->pc = 0x17fee4u;
    SET_GPR_U32(ctx, 17, ((uint32_t)65534 << 16));
    // 0x17fee8: 0xffb20020
    ctx->pc = 0x17fee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17feec: 0x3c10ffff
    ctx->pc = 0x17feecu;
    SET_GPR_U32(ctx, 16, ((uint32_t)65535 << 16));
    // 0x17fef0: 0x3c0ffffe
    ctx->pc = 0x17fef0u;
    SET_GPR_U32(ctx, 15, ((uint32_t)65534 << 16));
    // 0x17fef4: 0x80602d
    ctx->pc = 0x17fef4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17fef8: 0x24120008
    ctx->pc = 0x17fef8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 8));
    // 0x17fefc: 0x363195f6
    ctx->pc = 0x17fefcu;
    SET_GPR_U32(ctx, 17, OR32(GPR_U32(ctx, 17), 38390));
    // 0x17ff00: 0x36103c11
    ctx->pc = 0x17ff00u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), 15377));
    // 0x17ff04: 0x37399cf6
    ctx->pc = 0x17ff04u;
    SET_GPR_U32(ctx, 25, OR32(GPR_U32(ctx, 25), 40182));
    // 0x17ff08: 0x37186a0a
    ctx->pc = 0x17ff08u;
    SET_GPR_U32(ctx, 24, OR32(GPR_U32(ctx, 24), 27146));
    // 0x17ff0c: 0x35efeae8
    ctx->pc = 0x17ff0cu;
    SET_GPR_U32(ctx, 15, OR32(GPR_U32(ctx, 15), 60136));
    // 0x17ff10: 0x10000002
    ctx->pc = 0x17FF10u;
    {
        const bool branch_taken_0x17ff10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17FF14u;
        SET_GPR_U32(ctx, 14, ((uint32_t)32 << 16));
        if (branch_taken_0x17ff10) {
            ctx->pc = 0x17FF1Cu;
            goto label_17ff1c;
        }
    }
    ctx->pc = 0x17FF18u;
label_17ff18:
    // 0x17ff18: 0x258c0002
    ctx->pc = 0x17ff18u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 2));
label_17ff1c:
    // 0x17ff1c: 0x85890050
    ctx->pc = 0x17ff1cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 80)));
    // 0x17ff20: 0x2652ffff
    ctx->pc = 0x17ff20u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x17ff24: 0x858a0010
    ctx->pc = 0x17ff24u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x17ff28: 0x85830030
    ctx->pc = 0x17ff28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 48)));
    // 0x17ff2c: 0x85850070
    ctx->pc = 0x17ff2cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 112)));
    // 0x17ff30: 0x1234023
    ctx->pc = 0x17ff30u;
    SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x17ff34: 0x85860020
    ctx->pc = 0x17ff34u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 32)));
    // 0x17ff38: 0x1455821
    ctx->pc = 0x17ff38u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x17ff3c: 0x691821
    ctx->pc = 0x17ff3cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x17ff40: 0xaa2823
    ctx->pc = 0x17ff40u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x17ff44: 0xc0682d
    ctx->pc = 0x17ff44u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ff48: 0x1635023
    ctx->pc = 0x17ff48u;
    SET_GPR_U32(ctx, 10, SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x17ff4c: 0x1052021
    ctx->pc = 0x17ff4cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x17ff50: 0x6b1821
    ctx->pc = 0x17ff50u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x17ff54: 0x70d13018
    ctx->pc = 0x17ff54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 17); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x17ff58: 0x905818
    ctx->pc = 0x17ff58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 11, (int32_t)(uint32_t)result); }
    // 0x17ff5c: 0xd1400
    ctx->pc = 0x17ff5cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 13), 16));
    // 0x17ff60: 0xaf4818
    ctx->pc = 0x17ff60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)(uint32_t)result); }
    // 0x17ff64: 0x31c00
    ctx->pc = 0x17ff64u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 16));
    // 0x17ff68: 0x1194018
    ctx->pc = 0x17ff68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 25); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)(uint32_t)result); }
    // 0x17ff6c: 0x26823
    ctx->pc = 0x17ff6cu;
    SET_GPR_U32(ctx, 13, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x17ff70: 0x71585018
    ctx->pc = 0x17ff70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 24); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x17ff74: 0xc23021
    ctx->pc = 0x17ff74u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x17ff78: 0x432023
    ctx->pc = 0x17ff78u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17ff7c: 0x63823
    ctx->pc = 0x17ff7cu;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x17ff80: 0x431021
    ctx->pc = 0x17ff80u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17ff84: 0x12b2821
    ctx->pc = 0x17ff84u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x17ff88: 0x8e2021
    ctx->pc = 0x17ff88u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x17ff8c: 0xa32823
    ctx->pc = 0x17ff8cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x17ff90: 0x42583
    ctx->pc = 0x17ff90u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 22));
    // 0x17ff94: 0x4e1021
    ctx->pc = 0x17ff94u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x17ff98: 0x1455023
    ctx->pc = 0x17ff98u;
    SET_GPR_U32(ctx, 10, SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x17ff9c: 0x1684821
    ctx->pc = 0x17ff9cu;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x17ffa0: 0x21583
    ctx->pc = 0x17ffa0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x17ffa4: 0xa5840070
    ctx->pc = 0x17ffa4u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 112), (uint16_t)GPR_U32(ctx, 4));
    // 0x17ffa8: 0xe54023
    ctx->pc = 0x17ffa8u;
    SET_GPR_U32(ctx, 8, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x17ffac: 0x12a4823
    ctx->pc = 0x17ffacu;
    SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x17ffb0: 0xca2023
    ctx->pc = 0x17ffb0u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x17ffb4: 0xa5820000
    ctx->pc = 0x17ffb4u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x17ffb8: 0x1a91823
    ctx->pc = 0x17ffb8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
    // 0x17ffbc: 0xe53821
    ctx->pc = 0x17ffbcu;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x17ffc0: 0xca3021
    ctx->pc = 0x17ffc0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x17ffc4: 0x1a91021
    ctx->pc = 0x17ffc4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 9)));
    // 0x17ffc8: 0xee3821
    ctx->pc = 0x17ffc8u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 14)));
    // 0x17ffcc: 0xce3021
    ctx->pc = 0x17ffccu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 14)));
    // 0x17ffd0: 0x4e1021
    ctx->pc = 0x17ffd0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x17ffd4: 0x6e1821
    ctx->pc = 0x17ffd4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x17ffd8: 0x8e2021
    ctx->pc = 0x17ffd8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x17ffdc: 0x10e4021
    ctx->pc = 0x17ffdcu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 14)));
    // 0x17ffe0: 0x73d83
    ctx->pc = 0x17ffe0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 22));
    // 0x17ffe4: 0x63583
    ctx->pc = 0x17ffe4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 22));
    // 0x17ffe8: 0x21583
    ctx->pc = 0x17ffe8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x17ffec: 0x31d83
    ctx->pc = 0x17ffecu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 22));
    // 0x17fff0: 0x42583
    ctx->pc = 0x17fff0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 22));
    // 0x17fff4: 0x84583
    ctx->pc = 0x17fff4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 22));
    // 0x17fff8: 0xa5870010
    ctx->pc = 0x17fff8u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 16), (uint16_t)GPR_U32(ctx, 7));
    // 0x17fffc: 0xa5860020
    ctx->pc = 0x17fffcu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 32), (uint16_t)GPR_U32(ctx, 6));
    // 0x180000: 0xa5820030
    ctx->pc = 0x180000u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x180004: 0xa5830040
    ctx->pc = 0x180004u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 64), (uint16_t)GPR_U32(ctx, 3));
    // 0x180008: 0xa5840050
    ctx->pc = 0x180008u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 80), (uint16_t)GPR_U32(ctx, 4));
    // 0x18000c: 0x1640ffc2
    ctx->pc = 0x18000Cu;
    {
        const bool branch_taken_0x18000c = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x180010u;
        WRITE16(ADD32(GPR_U32(ctx, 12), 96), (uint16_t)GPR_U32(ctx, 8));
        if (branch_taken_0x18000c) {
            ctx->pc = 0x17FF18u;
            goto label_17ff18;
        }
    }
    ctx->pc = 0x180014u;
    // 0x180014: 0xdfb20020
    ctx->pc = 0x180014u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180018: 0xdfb10010
    ctx->pc = 0x180018u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18001c: 0xdfb00000
    ctx->pc = 0x18001cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180020: 0x3e00008
    ctx->pc = 0x180020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180024u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17FF18u: goto label_17ff18;
            case 0x17FF1Cu: goto label_17ff1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180028u;
}
