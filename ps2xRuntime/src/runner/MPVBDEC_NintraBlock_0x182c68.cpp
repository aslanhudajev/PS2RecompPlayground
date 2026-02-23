#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVBDEC_NintraBlock
// Address: 0x182c68 - 0x182fb8
void MPVBDEC_NintraBlock_0x182c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVBDEC_NintraBlock");


    ctx->pc = 0x182c68u;

    // 0x182c68: 0x27bdffb0
    ctx->pc = 0x182c68u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x182c6c: 0xa0402d
    ctx->pc = 0x182c6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182c70: 0xffbf0040
    ctx->pc = 0x182c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x182c74: 0x80602d
    ctx->pc = 0x182c74u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182c78: 0xffb30030
    ctx->pc = 0x182c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x182c7c: 0xffb20020
    ctx->pc = 0x182c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x182c80: 0xffb10010
    ctx->pc = 0x182c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x182c84: 0xffb00000
    ctx->pc = 0x182c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x182c88: 0x8d0f001c
    ctx->pc = 0x182c88u;
    SET_GPR_U32(ctx, 15, READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x182c8c: 0x8d090024
    ctx->pc = 0x182c8cu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x182c90: 0x25e2007e
    ctx->pc = 0x182c90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 15), 126));
    // 0x182c94: 0x8d130020
    ctx->pc = 0x182c94u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x182c98: 0x8d980000
    ctx->pc = 0x182c98u;
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x182c9c: 0x25e40080
    ctx->pc = 0x182c9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 15), 128));
    // 0x182ca0: 0x8d990004
    ctx->pc = 0x182ca0u;
    SET_GPR_U32(ctx, 25, READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x182ca4: 0x40182d
    ctx->pc = 0x182ca4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182ca8: 0x8d8a0008
    ctx->pc = 0x182ca8u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x182cac: 0x8d87000c
    ctx->pc = 0x182cacu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x182cb0: 0x8d91002c
    ctx->pc = 0x182cb0u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 12), 44)));
    // 0x182cb4: 0x8d920034
    ctx->pc = 0x182cb4u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 12), 52)));
label_182cb8:
    // 0x182cb8: 0xa440fff6
    ctx->pc = 0x182cb8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967286), (uint16_t)GPR_U32(ctx, 0));
    // 0x182cbc: 0x2484fff0
    ctx->pc = 0x182cbcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x182cc0: 0xa4400000
    ctx->pc = 0x182cc0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x182cc4: 0xa440fffe
    ctx->pc = 0x182cc4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967294), (uint16_t)GPR_U32(ctx, 0));
    // 0x182cc8: 0xa440fffc
    ctx->pc = 0x182cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967292), (uint16_t)GPR_U32(ctx, 0));
    // 0x182ccc: 0xa440fffa
    ctx->pc = 0x182cccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967290), (uint16_t)GPR_U32(ctx, 0));
    // 0x182cd0: 0xa440fff8
    ctx->pc = 0x182cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294967288), (uint16_t)GPR_U32(ctx, 0));
    // 0x182cd4: 0xa460fff4
    ctx->pc = 0x182cd4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294967284), (uint16_t)GPR_U32(ctx, 0));
    // 0x182cd8: 0x2463fff0
    ctx->pc = 0x182cd8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x182cdc: 0x60102d
    ctx->pc = 0x182cdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182ce0: 0x148ffff5
    ctx->pc = 0x182CE0u;
    {
        const bool branch_taken_0x182ce0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 15));
        ctx->pc = 0x182CE4u;
        WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x182ce0) {
            ctx->pc = 0x182CB8u;
            goto label_182cb8;
        }
    }
    ctx->pc = 0x182CE8u;
    // 0x182ce8: 0x300702d
    ctx->pc = 0x182ce8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182cec: 0x320682d
    ctx->pc = 0x182cecu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182cf0: 0x140582d
    ctx->pc = 0x182cf0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182cf4: 0xe0802d
    ctx->pc = 0x182cf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182cf8: 0x11600004
    ctx->pc = 0x182CF8u;
    {
        const bool branch_taken_0x182cf8 = (GPR_U32(ctx, 11) == GPR_U32(ctx, 0));
        ctx->pc = 0x182CFCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x182cf8) {
            ctx->pc = 0x182D0Cu;
            goto label_182d0c;
        }
    }
    ctx->pc = 0x182D00u;
    // 0x182d00: 0xb1023
    ctx->pc = 0x182d00u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 11)));
    // 0x182d04: 0x4d1006
    ctx->pc = 0x182d04u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 2) & 0x1F));
    // 0x182d08: 0x1c21025
    ctx->pc = 0x182d08u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
label_182d0c:
    // 0x182d0c: 0x40282d
    ctx->pc = 0x182d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182d10: 0x4a1000c
    ctx->pc = 0x182D10u;
    {
        const bool branch_taken_0x182d10 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x182D14u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x182d10) {
            ctx->pc = 0x182D44u;
            goto label_182d44;
        }
    }
    ctx->pc = 0x182D18u;
    // 0x182d18: 0x4a30004
    ctx->pc = 0x182D18u;
    {
        const bool branch_taken_0x182d18 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x182d18) {
            ctx->pc = 0x182D1Cu;
            WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
            ctx->pc = 0x182D2Cu;
            goto label_182d2c;
        }
    }
    ctx->pc = 0x182D20u;
    // 0x182d20: 0x24020001
    ctx->pc = 0x182d20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x182d24: 0x10000002
    ctx->pc = 0x182D24u;
    {
        const bool branch_taken_0x182d24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x182D28u;
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
        if (branch_taken_0x182d24) {
            ctx->pc = 0x182D30u;
            goto label_182d30;
        }
    }
    ctx->pc = 0x182D2Cu;
label_182d2c:
    // 0x182d2c: 0x24020001
    ctx->pc = 0x182d2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_182d30:
    // 0x182d30: 0x24030002
    ctx->pc = 0x182d30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x182d34: 0xad020004
    ctx->pc = 0x182d34u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x182d38: 0xad03000c
    ctx->pc = 0x182d38u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
    // 0x182d3c: 0x10000063
    ctx->pc = 0x182D3Cu;
    {
        const bool branch_taken_0x182d3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x182D40u;
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x182d3c) {
            ctx->pc = 0x182ECCu;
            goto label_182ecc;
        }
    }
    ctx->pc = 0x182D44u;
label_182d44:
    // 0x182d44: 0x53602
    ctx->pc = 0x182d44u;
    SET_GPR_U32(ctx, 6, SRL32(GPR_U32(ctx, 5), 24));
    // 0x182d48: 0x2cc20008
    ctx->pc = 0x182d48u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 8));
    // 0x182d4c: 0x1440002c
    ctx->pc = 0x182D4Cu;
    {
        const bool branch_taken_0x182d4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x182D50u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 4));
        if (branch_taken_0x182d4c) {
            ctx->pc = 0x182E00u;
            goto label_182e00;
        }
    }
    ctx->pc = 0x182D54u;
    // 0x182d54: 0x8d830010
    ctx->pc = 0x182d54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x182d58: 0x51642
    ctx->pc = 0x182d58u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 5), 25));
    // 0x182d5c: 0x21080
    ctx->pc = 0x182d5cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x182d60: 0x24040040
    ctx->pc = 0x182d60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 64));
    // 0x182d64: 0x431021
    ctx->pc = 0x182d64u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182d68: 0x8c460000
    ctx->pc = 0x182d68u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182d6c: 0x30c300ff
    ctx->pc = 0x182d6cu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), 255));
    // 0x182d70: 0x1064000c
    ctx->pc = 0x182D70u;
    {
        const bool branch_taken_0x182d70 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x182D74u;
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x182d70) {
            ctx->pc = 0x182DA4u;
            goto label_182da4;
        }
    }
    ctx->pc = 0x182D78u;
    // 0x182d78: 0x62402
    ctx->pc = 0x182d78u;
    SET_GPR_U32(ctx, 4, SRL32(GPR_U32(ctx, 6), 16));
    // 0x182d7c: 0x24020021
    ctx->pc = 0x182d7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 33));
    // 0x182d80: 0x441023
    ctx->pc = 0x182d80u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x182d84: 0x61c00
    ctx->pc = 0x182d84u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 16));
    // 0x182d88: 0x452806
    ctx->pc = 0x182d88u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    // 0x182d8c: 0x31e03
    ctx->pc = 0x182d8cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x182d90: 0x30a20001
    ctx->pc = 0x182d90u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), 1));
    // 0x182d94: 0xad030004
    ctx->pc = 0x182d94u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x182d98: 0xad020008
    ctx->pc = 0x182d98u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x182d9c: 0x1000004b
    ctx->pc = 0x182D9Cu;
    {
        const bool branch_taken_0x182d9c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x182DA0u;
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 4));
        if (branch_taken_0x182d9c) {
            ctx->pc = 0x182ECCu;
            goto label_182ecc;
        }
    }
    ctx->pc = 0x182DA4u;
label_182da4:
    // 0x182da4: 0x51342
    ctx->pc = 0x182da4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 5), 13));
    // 0x182da8: 0x24030014
    ctx->pc = 0x182da8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 20));
    // 0x182dac: 0x30463fff
    ctx->pc = 0x182dacu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 2), 16383));
    // 0x182db0: 0xad03000c
    ctx->pc = 0x182db0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
    // 0x182db4: 0x61600
    ctx->pc = 0x182db4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 24));
    // 0x182db8: 0x61a02
    ctx->pc = 0x182db8u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 6), 8));
    // 0x182dbc: 0x23603
    ctx->pc = 0x182dbcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 24));
    // 0x182dc0: 0x30c2007f
    ctx->pc = 0x182dc0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 6), 127));
    // 0x182dc4: 0x14400007
    ctx->pc = 0x182DC4u;
    {
        const bool branch_taken_0x182dc4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x182DC8u;
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x182dc4) {
            ctx->pc = 0x182DE4u;
            goto label_182de4;
        }
    }
    ctx->pc = 0x182DCCu;
    // 0x182dcc: 0x51142
    ctx->pc = 0x182dccu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 5), 5));
    // 0x182dd0: 0x2403001c
    ctx->pc = 0x182dd0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
    // 0x182dd4: 0x62040
    ctx->pc = 0x182dd4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 6), 1));
    // 0x182dd8: 0x304200ff
    ctx->pc = 0x182dd8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x182ddc: 0xad03000c
    ctx->pc = 0x182ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
    // 0x182de0: 0x823025
    ctx->pc = 0x182de0u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_182de4:
    // 0x182de4: 0x4c30004
    ctx->pc = 0x182DE4u;
    {
        const bool branch_taken_0x182de4 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x182de4) {
            ctx->pc = 0x182DE8u;
            WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
            ctx->pc = 0x182DF8u;
            goto label_182df8;
        }
    }
    ctx->pc = 0x182DECu;
    // 0x182dec: 0x24020001
    ctx->pc = 0x182decu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x182df0: 0x63023
    ctx->pc = 0x182df0u;
    SET_GPR_U32(ctx, 6, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x182df4: 0xad020008
    ctx->pc = 0x182df4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
label_182df8:
    // 0x182df8: 0x10000034
    ctx->pc = 0x182DF8u;
    {
        const bool branch_taken_0x182df8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x182DFCu;
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 6));
        if (branch_taken_0x182df8) {
            ctx->pc = 0x182ECCu;
            goto label_182ecc;
        }
    }
    ctx->pc = 0x182E00u;
label_182e00:
    // 0x182e00: 0x14400007
    ctx->pc = 0x182E00u;
    {
        const bool branch_taken_0x182e00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x182E04u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), 2));
        if (branch_taken_0x182e00) {
            ctx->pc = 0x182E20u;
            goto label_182e20;
        }
    }
    ctx->pc = 0x182E08u;
    // 0x182e08: 0x52d82
    ctx->pc = 0x182e08u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 22));
    // 0x182e0c: 0x2402000b
    ctx->pc = 0x182e0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
    // 0x182e10: 0x8d840014
    ctx->pc = 0x182e10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 12), 20)));
    // 0x182e14: 0x30a303fe
    ctx->pc = 0x182e14u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 1022));
    // 0x182e18: 0x10000023
    ctx->pc = 0x182E18u;
    {
        const bool branch_taken_0x182e18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x182E1Cu;
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x182e18) {
            ctx->pc = 0x182EA8u;
            goto label_182ea8;
        }
    }
    ctx->pc = 0x182E20u;
label_182e20:
    // 0x182e20: 0x14400007
    ctx->pc = 0x182E20u;
    {
        const bool branch_taken_0x182e20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x182E24u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x182e20) {
            ctx->pc = 0x182E40u;
            goto label_182e40;
        }
    }
    ctx->pc = 0x182E28u;
    // 0x182e28: 0x52d02
    ctx->pc = 0x182e28u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 20));
    // 0x182e2c: 0x2402000d
    ctx->pc = 0x182e2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
    // 0x182e30: 0x8d840018
    ctx->pc = 0x182e30u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 12), 24)));
    // 0x182e34: 0x30a30ffe
    ctx->pc = 0x182e34u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 4094));
    // 0x182e38: 0x1000001b
    ctx->pc = 0x182E38u;
    {
        const bool branch_taken_0x182e38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x182E3Cu;
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x182e38) {
            ctx->pc = 0x182EA8u;
            goto label_182ea8;
        }
    }
    ctx->pc = 0x182E40u;
label_182e40:
    // 0x182e40: 0x54c20007
    ctx->pc = 0x182E40u;
    {
        const bool branch_taken_0x182e40 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        if (branch_taken_0x182e40) {
            ctx->pc = 0x182E44u;
            SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 8));
            ctx->pc = 0x182E60u;
            goto label_182e60;
        }
    }
    ctx->pc = 0x182E48u;
    // 0x182e48: 0x52cc2
    ctx->pc = 0x182e48u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 19));
    // 0x182e4c: 0x2402000e
    ctx->pc = 0x182e4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 14));
    // 0x182e50: 0x8d84001c
    ctx->pc = 0x182e50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 12), 28)));
    // 0x182e54: 0x30a31ffe
    ctx->pc = 0x182e54u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 8190));
    // 0x182e58: 0x10000013
    ctx->pc = 0x182E58u;
    {
        const bool branch_taken_0x182e58 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x182E5Cu;
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
        if (branch_taken_0x182e58) {
            ctx->pc = 0x182EA8u;
            goto label_182ea8;
        }
    }
    ctx->pc = 0x182E60u;
label_182e60:
    // 0x182e60: 0x4a10005
    ctx->pc = 0x182E60u;
    {
        const bool branch_taken_0x182e60 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x182E64u;
        SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x182e60) {
            ctx->pc = 0x182E78u;
            goto label_182e78;
        }
    }
    ctx->pc = 0x182E68u;
    // 0x182e68: 0x2402000f
    ctx->pc = 0x182e68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 15));
    // 0x182e6c: 0x52ec2
    ctx->pc = 0x182e6cu;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 27));
    // 0x182e70: 0x1000000b
    ctx->pc = 0x182E70u;
    {
        const bool branch_taken_0x182e70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x182E74u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 12), 32)));
        if (branch_taken_0x182e70) {
            ctx->pc = 0x182EA0u;
            goto label_182ea0;
        }
    }
    ctx->pc = 0x182E78u;
label_182e78:
    // 0x182e78: 0x4a30006
    ctx->pc = 0x182E78u;
    {
        const bool branch_taken_0x182e78 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x182e78) {
            ctx->pc = 0x182E7Cu;
            SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
            ctx->pc = 0x182E94u;
            goto label_182e94;
        }
    }
    ctx->pc = 0x182E80u;
    // 0x182e80: 0x52840
    ctx->pc = 0x182e80u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 1));
    // 0x182e84: 0x24020010
    ctx->pc = 0x182e84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x182e88: 0x52ec2
    ctx->pc = 0x182e88u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 27));
    // 0x182e8c: 0x10000004
    ctx->pc = 0x182E8Cu;
    {
        const bool branch_taken_0x182e8c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x182E90u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 12), 36)));
        if (branch_taken_0x182e8c) {
            ctx->pc = 0x182EA0u;
            goto label_182ea0;
        }
    }
    ctx->pc = 0x182E94u;
label_182e94:
    // 0x182e94: 0x24020011
    ctx->pc = 0x182e94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 17));
    // 0x182e98: 0x52ec2
    ctx->pc = 0x182e98u;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 5), 27));
    // 0x182e9c: 0x8d840028
    ctx->pc = 0x182e9cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 12), 40)));
label_182ea0:
    // 0x182ea0: 0xad02000c
    ctx->pc = 0x182ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
    // 0x182ea4: 0x30a3001e
    ctx->pc = 0x182ea4u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), 30));
label_182ea8:
    // 0x182ea8: 0x641821
    ctx->pc = 0x182ea8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x182eac: 0x84660000
    ctx->pc = 0x182eacu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x182eb0: 0x61400
    ctx->pc = 0x182eb0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 16));
    // 0x182eb4: 0x30a40001
    ctx->pc = 0x182eb4u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 5), 1));
    // 0x182eb8: 0x21603
    ctx->pc = 0x182eb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x182ebc: 0x30c300ff
    ctx->pc = 0x182ebcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), 255));
    // 0x182ec0: 0xad030000
    ctx->pc = 0x182ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x182ec4: 0xad020004
    ctx->pc = 0x182ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x182ec8: 0xad040008
    ctx->pc = 0x182ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
label_182ecc:
    // 0x182ecc: 0x8d03000c
    ctx->pc = 0x182eccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x182ed0: 0x1435821
    ctx->pc = 0x182ed0u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x182ed4: 0x29620020
    ctx->pc = 0x182ed4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 11), 32));
    // 0x182ed8: 0x1440000e
    ctx->pc = 0x182ED8u;
    {
        const bool branch_taken_0x182ed8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x182EDCu;
        SET_GPR_U32(ctx, 14, SLL32(GPR_U32(ctx, 24), GPR_U32(ctx, 3) & 0x1F));
        if (branch_taken_0x182ed8) {
            ctx->pc = 0x182F14u;
            goto label_182f14;
        }
    }
    ctx->pc = 0x182EE0u;
    // 0x182ee0: 0x80ed0000
    ctx->pc = 0x182ee0u;
    SET_GPR_S32(ctx, 13, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x182ee4: 0x256bffe0
    ctx->pc = 0x182ee4u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4294967264));
    // 0x182ee8: 0x90e20001
    ctx->pc = 0x182ee8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x182eec: 0x1797004
    ctx->pc = 0x182eecu;
    SET_GPR_U32(ctx, 14, SLL32(GPR_U32(ctx, 25), GPR_U32(ctx, 11) & 0x1F));
    // 0x182ef0: 0xd6a00
    ctx->pc = 0x182ef0u;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 8));
    // 0x182ef4: 0x90e30002
    ctx->pc = 0x182ef4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x182ef8: 0x1a26825
    ctx->pc = 0x182ef8u;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x182efc: 0x90e40003
    ctx->pc = 0x182efcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x182f00: 0xd6a00
    ctx->pc = 0x182f00u;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 8));
    // 0x182f04: 0x24f00004
    ctx->pc = 0x182f04u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 7), 4));
    // 0x182f08: 0x1a36825
    ctx->pc = 0x182f08u;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x182f0c: 0xd6a00
    ctx->pc = 0x182f0cu;
    SET_GPR_U32(ctx, 13, SLL32(GPR_U32(ctx, 13), 8));
    // 0x182f10: 0x1a46825
    ctx->pc = 0x182f10u;
    SET_GPR_U32(ctx, 13, OR32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
label_182f14:
    // 0x182f14: 0x8d020000
    ctx->pc = 0x182f14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x182f18: 0x100282d
    ctx->pc = 0x182f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f1c: 0x8d030004
    ctx->pc = 0x182f1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x182f20: 0x180202d
    ctx->pc = 0x182f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182f24: 0x2221021
    ctx->pc = 0x182f24u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x182f28: 0x8d0a0008
    ctx->pc = 0x182f28u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x182f2c: 0x31840
    ctx->pc = 0x182f2cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 1));
    // 0x182f30: 0xad020018
    ctx->pc = 0x182f30u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 2));
    // 0x182f34: 0x693018
    ctx->pc = 0x182f34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)(uint32_t)result); }
    // 0x182f38: 0x80470000
    ctx->pc = 0x182f38u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182f3c: 0xad070010
    ctx->pc = 0x182f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 7));
    // 0x182f40: 0xad070014
    ctx->pc = 0x182f40u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 7));
    // 0x182f44: 0xc91821
    ctx->pc = 0x182f44u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x182f48: 0x2674821
    ctx->pc = 0x182f48u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x182f4c: 0x91220000
    ctx->pc = 0x182f4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x182f50: 0x73840
    ctx->pc = 0x182f50u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 1));
    // 0x182f54: 0xf24021
    ctx->pc = 0x182f54u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x182f58: 0x621818
    ctx->pc = 0x182f58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x182f5c: 0x85060000
    ctx->pc = 0x182f5cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x182f60: 0xef3821
    ctx->pc = 0x182f60u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 15)));
    // 0x182f64: 0xad90000c
    ctx->pc = 0x182f64u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 16));
    // 0x182f68: 0xad8e0000
    ctx->pc = 0x182f68u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 14));
    // 0x182f6c: 0xad8d0004
    ctx->pc = 0x182f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 13));
    // 0x182f70: 0x31103
    ctx->pc = 0x182f70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x182f74: 0xad8b0008
    ctx->pc = 0x182f74u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 11));
    // 0x182f78: 0x2442ffff
    ctx->pc = 0x182f78u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x182f7c: 0x34420001
    ctx->pc = 0x182f7cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 1));
    // 0x182f80: 0x21823
    ctx->pc = 0x182f80u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x182f84: 0x6a100b
    ctx->pc = 0x182f84u;
    if (GPR_U32(ctx, 10) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 3));
    // 0x182f88: 0x463018
    ctx->pc = 0x182f88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)(uint32_t)result); }
    // 0x182f8c: 0x24c60400
    ctx->pc = 0x182f8cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1024));
    // 0x182f90: 0x632c3
    ctx->pc = 0x182f90u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 11));
    // 0x182f94: 0xc060bee
    ctx->pc = 0x182F94u;
    SET_GPR_U32(ctx, 31, 0x182F9Cu);
    ctx->pc = 0x182F98u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 6));
    ctx->pc = 0x182FB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpvbdec_IntraAc_0x182fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182F9Cu; }
        else if (ctx->pc != 0x182F9Cu) { ctx->pc = 0x182F9Cu; }
    }
    if (ctx->pc != 0x182F9Cu) { return; }
    ctx->pc = 0x182F9Cu;
    // 0x182f9c: 0xdfbf0040
    ctx->pc = 0x182f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x182fa0: 0xdfb30030
    ctx->pc = 0x182fa0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182fa4: 0xdfb20020
    ctx->pc = 0x182fa4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182fa8: 0xdfb10010
    ctx->pc = 0x182fa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182fac: 0xdfb00000
    ctx->pc = 0x182facu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182fb0: 0x3e00008
    ctx->pc = 0x182FB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182FB4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182CB8u: goto label_182cb8;
            case 0x182D0Cu: goto label_182d0c;
            case 0x182D2Cu: goto label_182d2c;
            case 0x182D30u: goto label_182d30;
            case 0x182D44u: goto label_182d44;
            case 0x182DA4u: goto label_182da4;
            case 0x182DE4u: goto label_182de4;
            case 0x182DF8u: goto label_182df8;
            case 0x182E00u: goto label_182e00;
            case 0x182E20u: goto label_182e20;
            case 0x182E40u: goto label_182e40;
            case 0x182E60u: goto label_182e60;
            case 0x182E78u: goto label_182e78;
            case 0x182E94u: goto label_182e94;
            case 0x182EA0u: goto label_182ea0;
            case 0x182EA8u: goto label_182ea8;
            case 0x182ECCu: goto label_182ecc;
            case 0x182F14u: goto label_182f14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182FB8u;
}
