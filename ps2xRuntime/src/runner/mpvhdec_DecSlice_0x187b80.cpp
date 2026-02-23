#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvhdec_DecSlice
// Address: 0x187b80 - 0x187e98
void mpvhdec_DecSlice_0x187b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvhdec_DecSlice");


    ctx->pc = 0x187b80u;

label_187b80:
    // 0x187b80: 0x27bdff70
    ctx->pc = 0x187b80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
label_187b84:
    // 0x187b84: 0x2403fffc
    ctx->pc = 0x187b84u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967292));
label_187b88:
    // 0x187b88: 0xffb70070
    ctx->pc = 0x187b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_187b8c:
    // 0x187b8c: 0xffb60060
    ctx->pc = 0x187b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_187b90:
    // 0x187b90: 0xe0b82d
    ctx->pc = 0x187b90u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_187b94:
    // 0x187b94: 0xffb50050
    ctx->pc = 0x187b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_187b98:
    // 0x187b98: 0xa0b02d
    ctx->pc = 0x187b98u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_187b9c:
    // 0x187b9c: 0xffb40040
    ctx->pc = 0x187b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_187ba0:
    // 0x187ba0: 0xc0a82d
    ctx->pc = 0x187ba0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_187ba4:
    // 0x187ba4: 0xffb30030
    ctx->pc = 0x187ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_187ba8:
    // 0x187ba8: 0x80a02d
    ctx->pc = 0x187ba8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_187bac:
    // 0x187bac: 0xffb10010
    ctx->pc = 0x187bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_187bb0:
    // 0x187bb0: 0xffbf0080
    ctx->pc = 0x187bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_187bb4:
    // 0x187bb4: 0xffb20020
    ctx->pc = 0x187bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_187bb8:
    // 0x187bb8: 0xffb00000
    ctx->pc = 0x187bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_187bbc:
    // 0x187bbc: 0x8ec20000
    ctx->pc = 0x187bbcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_187bc0:
    // 0x187bc0: 0x438824
    ctx->pc = 0x187bc0u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_187bc4:
    // 0x187bc4: 0x511023
    ctx->pc = 0x187bc4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_187bc8:
    // 0x187bc8: 0x82320000
    ctx->pc = 0x187bc8u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_187bcc:
    // 0x187bcc: 0x26310001
    ctx->pc = 0x187bccu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_187bd0:
    // 0x187bd0: 0x298c0
    ctx->pc = 0x187bd0u;
    SET_GPR_U32(ctx, 19, SLL32(GPR_U32(ctx, 2), 3));
label_187bd4:
    // 0x187bd4: 0x92230000
    ctx->pc = 0x187bd4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_187bd8:
    // 0x187bd8: 0x129200
    ctx->pc = 0x187bd8u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 18), 8));
label_187bdc:
    // 0x187bdc: 0x26310001
    ctx->pc = 0x187bdcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_187be0:
    // 0x187be0: 0x92220000
    ctx->pc = 0x187be0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_187be4:
    // 0x187be4: 0x2439025
    ctx->pc = 0x187be4u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_187be8:
    // 0x187be8: 0x26310001
    ctx->pc = 0x187be8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_187bec:
    // 0x187bec: 0x129200
    ctx->pc = 0x187becu;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 18), 8));
label_187bf0:
    // 0x187bf0: 0x92230000
    ctx->pc = 0x187bf0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_187bf4:
    // 0x187bf4: 0x2429025
    ctx->pc = 0x187bf4u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_187bf8:
    // 0x187bf8: 0x26310001
    ctx->pc = 0x187bf8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_187bfc:
    // 0x187bfc: 0x129200
    ctx->pc = 0x187bfcu;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 18), 8));
label_187c00:
    // 0x187c00: 0x82300000
    ctx->pc = 0x187c00u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_187c04:
    // 0x187c04: 0x2439025
    ctx->pc = 0x187c04u;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_187c08:
    // 0x187c08: 0x26310001
    ctx->pc = 0x187c08u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_187c0c:
    // 0x187c0c: 0x2729004
    ctx->pc = 0x187c0cu;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 19) & 0x1F));
label_187c10:
    // 0x187c10: 0x92220000
    ctx->pc = 0x187c10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_187c14:
    // 0x187c14: 0x108200
    ctx->pc = 0x187c14u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
label_187c18:
    // 0x187c18: 0x26310001
    ctx->pc = 0x187c18u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_187c1c:
    // 0x187c1c: 0x2028025
    ctx->pc = 0x187c1cu;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_187c20:
    // 0x187c20: 0x92230000
    ctx->pc = 0x187c20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_187c24:
    // 0x187c24: 0x26310001
    ctx->pc = 0x187c24u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_187c28:
    // 0x187c28: 0x108200
    ctx->pc = 0x187c28u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
label_187c2c:
    // 0x187c2c: 0x92220000
    ctx->pc = 0x187c2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_187c30:
    // 0x187c30: 0x2038025
    ctx->pc = 0x187c30u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_187c34:
    // 0x187c34: 0x108200
    ctx->pc = 0x187c34u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
label_187c38:
    // 0x187c38: 0x26310001
    ctx->pc = 0x187c38u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_187c3c:
    // 0x187c3c: 0x12600006
label_187c40:
    if (ctx->pc == 0x187C40u) {
        ctx->pc = 0x187C40u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->pc = 0x187C44u;
        goto label_187c44;
    }
    ctx->pc = 0x187C3Cu;
    {
        const bool branch_taken_0x187c3c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x187C40u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        if (branch_taken_0x187c3c) {
            ctx->pc = 0x187C58u;
            goto label_187c58;
        }
    }
    ctx->pc = 0x187C44u;
label_187c44:
    // 0x187c44: 0x131023
    ctx->pc = 0x187c44u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
label_187c48:
    // 0x187c48: 0x501006
    ctx->pc = 0x187c48u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
label_187c4c:
    // 0x187c4c: 0x2421025
    ctx->pc = 0x187c4cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_187c50:
    // 0x187c50: 0x10000003
label_187c54:
    if (ctx->pc == 0x187C54u) {
        ctx->pc = 0x187C54u;
        SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
        ctx->pc = 0x187C58u;
        goto label_187c58;
    }
    ctx->pc = 0x187C50u;
    {
        const bool branch_taken_0x187c50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x187C54u;
        SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
        if (branch_taken_0x187c50) {
            ctx->pc = 0x187C60u;
            goto label_187c60;
        }
    }
    ctx->pc = 0x187C58u;
label_187c58:
    // 0x187c58: 0x240102d
    ctx->pc = 0x187c58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_187c5c:
    // 0x187c5c: 0x200902d
    ctx->pc = 0x187c5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_187c60:
    // 0x187c60: 0x82300000
    ctx->pc = 0x187c60u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_187c64:
    // 0x187c64: 0x304200ff
    ctx->pc = 0x187c64u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
label_187c68:
    // 0x187c68: 0x8e830190
    ctx->pc = 0x187c68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 400)));
label_187c6c:
    // 0x187c6c: 0x26310001
    ctx->pc = 0x187c6cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_187c70:
    // 0x187c70: 0x2442ffff
    ctx->pc = 0x187c70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_187c74:
    // 0x187c74: 0x92240000
    ctx->pc = 0x187c74u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_187c78:
    // 0x187c78: 0x431018
    ctx->pc = 0x187c78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
label_187c7c:
    // 0x187c7c: 0x26310001
    ctx->pc = 0x187c7cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_187c80:
    // 0x187c80: 0x108200
    ctx->pc = 0x187c80u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
label_187c84:
    // 0x187c84: 0x92230000
    ctx->pc = 0x187c84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_187c88:
    // 0x187c88: 0x2048025
    ctx->pc = 0x187c88u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_187c8c:
    // 0x187c8c: 0x26310001
    ctx->pc = 0x187c8cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_187c90:
    // 0x187c90: 0x108200
    ctx->pc = 0x187c90u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
label_187c94:
    // 0x187c94: 0x92240000
    ctx->pc = 0x187c94u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_187c98:
    // 0x187c98: 0x2442ffff
    ctx->pc = 0x187c98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
label_187c9c:
    // 0x187c9c: 0x2038025
    ctx->pc = 0x187c9cu;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_187ca0:
    // 0x187ca0: 0x108200
    ctx->pc = 0x187ca0u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
label_187ca4:
    // 0x187ca4: 0xae82029c
    ctx->pc = 0x187ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 668), GPR_U32(ctx, 2));
label_187ca8:
    // 0x187ca8: 0x2048025
    ctx->pc = 0x187ca8u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_187cac:
    // 0x187cac: 0x2a62001b
    ctx->pc = 0x187cacu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 27));
label_187cb0:
    // 0x187cb0: 0x14400035
label_187cb4:
    if (ctx->pc == 0x187CB4u) {
        ctx->pc = 0x187CB4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x187CB8u;
        goto label_187cb8;
    }
    ctx->pc = 0x187CB0u;
    {
        const bool branch_taken_0x187cb0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x187CB4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x187cb0) {
            ctx->pc = 0x187D88u;
            goto label_187d88;
        }
    }
    ctx->pc = 0x187CB8u;
label_187cb8:
    // 0x187cb8: 0x2673ffe5
    ctx->pc = 0x187cb8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967269));
label_187cbc:
    // 0x187cbc: 0x12600008
label_187cc0:
    if (ctx->pc == 0x187CC0u) {
        ctx->pc = 0x187CC0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x187CC4u;
        goto label_187cc4;
    }
    ctx->pc = 0x187CBCu;
    {
        const bool branch_taken_0x187cbc = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x187CC0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x187cbc) {
            ctx->pc = 0x187CE0u;
            goto label_187ce0;
        }
    }
    ctx->pc = 0x187CC4u;
label_187cc4:
    // 0x187cc4: 0x531023
    ctx->pc = 0x187cc4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_187cc8:
    // 0x187cc8: 0x501006
    ctx->pc = 0x187cc8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
label_187ccc:
    // 0x187ccc: 0x2429025
    ctx->pc = 0x187cccu;
    SET_GPR_U32(ctx, 18, OR32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_187cd0:
    // 0x187cd0: 0x121ec2
    ctx->pc = 0x187cd0u;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 18), 27));
label_187cd4:
    // 0x187cd4: 0xae830250
    ctx->pc = 0x187cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 592), GPR_U32(ctx, 3));
label_187cd8:
    // 0x187cd8: 0x10000004
label_187cdc:
    if (ctx->pc == 0x187CDCu) {
        ctx->pc = 0x187CDCu;
        SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
        ctx->pc = 0x187CE0u;
        goto label_187ce0;
    }
    ctx->pc = 0x187CD8u;
    {
        const bool branch_taken_0x187cd8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x187CDCu;
        SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
        if (branch_taken_0x187cd8) {
            ctx->pc = 0x187CECu;
            goto label_187cec;
        }
    }
    ctx->pc = 0x187CE0u;
label_187ce0:
    // 0x187ce0: 0x1216c2
    ctx->pc = 0x187ce0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 18), 27));
label_187ce4:
    // 0x187ce4: 0xae820250
    ctx->pc = 0x187ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 592), GPR_U32(ctx, 2));
label_187ce8:
    // 0x187ce8: 0x200902d
    ctx->pc = 0x187ce8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_187cec:
    // 0x187cec: 0x82300000
    ctx->pc = 0x187cecu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_187cf0:
    // 0x187cf0: 0x26310001
    ctx->pc = 0x187cf0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_187cf4:
    // 0x187cf4: 0x92220000
    ctx->pc = 0x187cf4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_187cf8:
    // 0x187cf8: 0x108200
    ctx->pc = 0x187cf8u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
label_187cfc:
    // 0x187cfc: 0x26310001
    ctx->pc = 0x187cfcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_187d00:
    // 0x187d00: 0x2028025
    ctx->pc = 0x187d00u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_187d04:
    // 0x187d04: 0x92230000
    ctx->pc = 0x187d04u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_187d08:
    // 0x187d08: 0x26310001
    ctx->pc = 0x187d08u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_187d0c:
    // 0x187d0c: 0x108200
    ctx->pc = 0x187d0cu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
label_187d10:
    // 0x187d10: 0x92220000
    ctx->pc = 0x187d10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_187d14:
    // 0x187d14: 0x2038025
    ctx->pc = 0x187d14u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_187d18:
    // 0x187d18: 0x108200
    ctx->pc = 0x187d18u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
label_187d1c:
    // 0x187d1c: 0x26310001
    ctx->pc = 0x187d1cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_187d20:
    // 0x187d20: 0x1000001d
label_187d24:
    if (ctx->pc == 0x187D24u) {
        ctx->pc = 0x187D24u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->pc = 0x187D28u;
        goto label_187d28;
    }
    ctx->pc = 0x187D20u;
    {
        const bool branch_taken_0x187d20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x187D24u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        if (branch_taken_0x187d20) {
            ctx->pc = 0x187D98u;
            goto label_187d98;
        }
    }
    ctx->pc = 0x187D28u;
label_187d28:
    // 0x187d28: 0x431021
    ctx->pc = 0x187d28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_187d2c:
    // 0x187d2c: 0xaee20000
    ctx->pc = 0x187d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_187d30:
    // 0x187d30: 0x8ea30000
    ctx->pc = 0x187d30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_187d34:
    // 0x187d34: 0xaea00000
    ctx->pc = 0x187d34u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_187d38:
    // 0x187d38: 0x831821
    ctx->pc = 0x187d38u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_187d3c:
    // 0x187d3c: 0x1000004b
label_187d40:
    if (ctx->pc == 0x187D40u) {
        ctx->pc = 0x187D40u;
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x187D44u;
        goto label_187d44;
    }
    ctx->pc = 0x187D3Cu;
    {
        const bool branch_taken_0x187d3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x187D40u;
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x187d3c) {
            ctx->pc = 0x187E6Cu;
            goto label_187e6c;
        }
    }
    ctx->pc = 0x187D44u;
label_187d44:
    // 0x187d44: 0x2673ffe0
    ctx->pc = 0x187d44u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967264));
label_187d48:
    // 0x187d48: 0x2709004
    ctx->pc = 0x187d48u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
label_187d4c:
    // 0x187d4c: 0x82300000
    ctx->pc = 0x187d4cu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_187d50:
    // 0x187d50: 0x26310001
    ctx->pc = 0x187d50u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_187d54:
    // 0x187d54: 0x92220000
    ctx->pc = 0x187d54u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_187d58:
    // 0x187d58: 0x108200
    ctx->pc = 0x187d58u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
label_187d5c:
    // 0x187d5c: 0x26310001
    ctx->pc = 0x187d5cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_187d60:
    // 0x187d60: 0x2028025
    ctx->pc = 0x187d60u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_187d64:
    // 0x187d64: 0x92230000
    ctx->pc = 0x187d64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_187d68:
    // 0x187d68: 0x26310001
    ctx->pc = 0x187d68u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_187d6c:
    // 0x187d6c: 0x108200
    ctx->pc = 0x187d6cu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
label_187d70:
    // 0x187d70: 0x92220000
    ctx->pc = 0x187d70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_187d74:
    // 0x187d74: 0x2038025
    ctx->pc = 0x187d74u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_187d78:
    // 0x187d78: 0x108200
    ctx->pc = 0x187d78u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
label_187d7c:
    // 0x187d7c: 0x26310001
    ctx->pc = 0x187d7cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_187d80:
    // 0x187d80: 0x10000030
label_187d84:
    if (ctx->pc == 0x187D84u) {
        ctx->pc = 0x187D84u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->pc = 0x187D88u;
        goto label_187d88;
    }
    ctx->pc = 0x187D80u;
    {
        const bool branch_taken_0x187d80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x187D84u;
        SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        if (branch_taken_0x187d80) {
            ctx->pc = 0x187E44u;
            goto label_187e44;
        }
    }
    ctx->pc = 0x187D88u;
label_187d88:
    // 0x187d88: 0x1216c2
    ctx->pc = 0x187d88u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 18), 27));
label_187d8c:
    // 0x187d8c: 0x26730005
    ctx->pc = 0x187d8cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 5));
label_187d90:
    // 0x187d90: 0xae820250
    ctx->pc = 0x187d90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 592), GPR_U32(ctx, 2));
label_187d94:
    // 0x187d94: 0x129140
    ctx->pc = 0x187d94u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 18), 5));
label_187d98:
    // 0x187d98: 0xc06142a
label_187d9c:
    if (ctx->pc == 0x187D9Cu) {
        ctx->pc = 0x187D9Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 596));
        ctx->pc = 0x187DA0u;
        goto label_187da0;
    }
    ctx->pc = 0x187D98u;
    SET_GPR_U32(ctx, 31, 0x187DA0u);
    ctx->pc = 0x187D9Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 596));
    ctx->pc = 0x1850A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVDEC_ResetMv_0x1850a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187DA0u; }
        else if (ctx->pc != 0x187DA0u) { ctx->pc = 0x187DA0u; }
    }
    if (ctx->pc != 0x187DA0u) { return; }
    ctx->pc = 0x187DA0u;
label_187da0:
    // 0x187da0: 0xc06142a
label_187da4:
    if (ctx->pc == 0x187DA4u) {
        ctx->pc = 0x187DA4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 632));
        ctx->pc = 0x187DA8u;
        goto label_187da8;
    }
    ctx->pc = 0x187DA0u;
    SET_GPR_U32(ctx, 31, 0x187DA8u);
    ctx->pc = 0x187DA4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 632));
    ctx->pc = 0x1850A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVDEC_ResetMv_0x1850a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187DA8u; }
        else if (ctx->pc != 0x187DA8u) { ctx->pc = 0x187DA8u; }
    }
    if (ctx->pc != 0x187DA8u) { return; }
    ctx->pc = 0x187DA8u;
label_187da8:
    // 0x187da8: 0xc061430
label_187dac:
    if (ctx->pc == 0x187DACu) {
        ctx->pc = 0x187DACu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x187DB0u;
        goto label_187db0;
    }
    ctx->pc = 0x187DA8u;
    SET_GPR_U32(ctx, 31, 0x187DB0u);
    ctx->pc = 0x187DACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1850C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPVDEC_ResetDc_0x1850c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187DB0u; }
        else if (ctx->pc != 0x187DB0u) { ctx->pc = 0x187DB0u; }
    }
    if (ctx->pc != 0x187DB0u) { return; }
    ctx->pc = 0x187DB0u;
label_187db0:
    // 0x187db0: 0x1000001e
label_187db4:
    if (ctx->pc == 0x187DB4u) {
        ctx->pc = 0x187DB8u;
        goto label_187db8;
    }
    ctx->pc = 0x187DB0u;
    {
        const bool branch_taken_0x187db0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x187db0) {
            ctx->pc = 0x187E2Cu;
            goto label_187e2c;
        }
    }
    ctx->pc = 0x187DB8u;
label_187db8:
    // 0x187db8: 0x2a620020
    ctx->pc = 0x187db8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 32));
label_187dbc:
    // 0x187dbc: 0x14400011
label_187dc0:
    if (ctx->pc == 0x187DC0u) {
        ctx->pc = 0x187DC0u;
        SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 18), 9));
        ctx->pc = 0x187DC4u;
        goto label_187dc4;
    }
    ctx->pc = 0x187DBCu;
    {
        const bool branch_taken_0x187dbc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x187DC0u;
        SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 18), 9));
        if (branch_taken_0x187dbc) {
            ctx->pc = 0x187E04u;
            goto label_187e04;
        }
    }
    ctx->pc = 0x187DC4u;
label_187dc4:
    // 0x187dc4: 0x2673ffe0
    ctx->pc = 0x187dc4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4294967264));
label_187dc8:
    // 0x187dc8: 0x2709004
    ctx->pc = 0x187dc8u;
    SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 19) & 0x1F));
label_187dcc:
    // 0x187dcc: 0x82300000
    ctx->pc = 0x187dccu;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_187dd0:
    // 0x187dd0: 0x26310001
    ctx->pc = 0x187dd0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_187dd4:
    // 0x187dd4: 0x92220000
    ctx->pc = 0x187dd4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_187dd8:
    // 0x187dd8: 0x108200
    ctx->pc = 0x187dd8u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
label_187ddc:
    // 0x187ddc: 0x26310001
    ctx->pc = 0x187ddcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_187de0:
    // 0x187de0: 0x2028025
    ctx->pc = 0x187de0u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_187de4:
    // 0x187de4: 0x92230000
    ctx->pc = 0x187de4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_187de8:
    // 0x187de8: 0x26310001
    ctx->pc = 0x187de8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_187dec:
    // 0x187dec: 0x108200
    ctx->pc = 0x187decu;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
label_187df0:
    // 0x187df0: 0x92220000
    ctx->pc = 0x187df0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_187df4:
    // 0x187df4: 0x2038025
    ctx->pc = 0x187df4u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_187df8:
    // 0x187df8: 0x108200
    ctx->pc = 0x187df8u;
    SET_GPR_U32(ctx, 16, SLL32(GPR_U32(ctx, 16), 8));
label_187dfc:
    // 0x187dfc: 0x26310001
    ctx->pc = 0x187dfcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_187e00:
    // 0x187e00: 0x2028025
    ctx->pc = 0x187e00u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_187e04:
    // 0x187e04: 0x26620007
    ctx->pc = 0x187e04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 7));
label_187e08:
    // 0x187e08: 0x8ec40000
    ctx->pc = 0x187e08u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_187e0c:
    // 0x187e0c: 0x210c3
    ctx->pc = 0x187e0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_187e10:
    // 0x187e10: 0x8ea30000
    ctx->pc = 0x187e10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_187e14:
    // 0x187e14: 0x2442fff8
    ctx->pc = 0x187e14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967288));
label_187e18:
    // 0x187e18: 0x2221021
    ctx->pc = 0x187e18u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_187e1c:
    // 0x187e1c: 0x441023
    ctx->pc = 0x187e1cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_187e20:
    // 0x187e20: 0x43102a
    ctx->pc = 0x187e20u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
label_187e24:
    // 0x187e24: 0x5040ffc0
label_187e28:
    if (ctx->pc == 0x187E28u) {
        ctx->pc = 0x187E28u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->pc = 0x187E2Cu;
        goto label_187e2c;
    }
    ctx->pc = 0x187E24u;
    {
        const bool branch_taken_0x187e24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x187e24) {
            ctx->pc = 0x187E28u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 23), 0)));
            ctx->pc = 0x187D28u;
            goto label_187d28;
        }
    }
    ctx->pc = 0x187E2Cu;
label_187e2c:
    // 0x187e2c: 0x642ffe2
label_187e30:
    if (ctx->pc == 0x187E30u) {
        ctx->pc = 0x187E30u;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 9));
        ctx->pc = 0x187E34u;
        goto label_187e34;
    }
    ctx->pc = 0x187E2Cu;
    {
        const bool branch_taken_0x187e2c = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x187e2c) {
            ctx->pc = 0x187E30u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 9));
            ctx->pc = 0x187DB8u;
            goto label_187db8;
        }
    }
    ctx->pc = 0x187E34u;
label_187e34:
    // 0x187e34: 0x26730001
    ctx->pc = 0x187e34u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_187e38:
    // 0x187e38: 0x2a620020
    ctx->pc = 0x187e38u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 32));
label_187e3c:
    // 0x187e3c: 0x1040ffc1
label_187e40:
    if (ctx->pc == 0x187E40u) {
        ctx->pc = 0x187E40u;
        SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x187E44u;
        goto label_187e44;
    }
    ctx->pc = 0x187E3Cu;
    {
        const bool branch_taken_0x187e3c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x187E40u;
        SET_GPR_U32(ctx, 18, SLL32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x187e3c) {
            ctx->pc = 0x187D44u;
            goto label_187d44;
        }
    }
    ctx->pc = 0x187E44u;
label_187e44:
    // 0x187e44: 0xae920000
    ctx->pc = 0x187e44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 18));
label_187e48:
    // 0x187e48: 0x280202d
    ctx->pc = 0x187e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_187e4c:
    // 0x187e4c: 0xae900004
    ctx->pc = 0x187e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
label_187e50:
    // 0x187e50: 0x2c0282d
    ctx->pc = 0x187e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_187e54:
    // 0x187e54: 0xae930008
    ctx->pc = 0x187e54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 19));
label_187e58:
    // 0x187e58: 0x2a0302d
    ctx->pc = 0x187e58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_187e5c:
    // 0x187e5c: 0xae91000c
    ctx->pc = 0x187e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 17));
label_187e60:
    // 0x187e60: 0x8e82022c
    ctx->pc = 0x187e60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 556)));
label_187e64:
    // 0x187e64: 0x40f809
label_187e68:
    if (ctx->pc == 0x187E68u) {
        ctx->pc = 0x187E68u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x187E6Cu;
        goto label_187e6c;
    }
    ctx->pc = 0x187E64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x187E6Cu);
        ctx->pc = 0x187E68u;
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187B80u: goto label_187b80;
            case 0x187B84u: goto label_187b84;
            case 0x187B88u: goto label_187b88;
            case 0x187B8Cu: goto label_187b8c;
            case 0x187B90u: goto label_187b90;
            case 0x187B94u: goto label_187b94;
            case 0x187B98u: goto label_187b98;
            case 0x187B9Cu: goto label_187b9c;
            case 0x187BA0u: goto label_187ba0;
            case 0x187BA4u: goto label_187ba4;
            case 0x187BA8u: goto label_187ba8;
            case 0x187BACu: goto label_187bac;
            case 0x187BB0u: goto label_187bb0;
            case 0x187BB4u: goto label_187bb4;
            case 0x187BB8u: goto label_187bb8;
            case 0x187BBCu: goto label_187bbc;
            case 0x187BC0u: goto label_187bc0;
            case 0x187BC4u: goto label_187bc4;
            case 0x187BC8u: goto label_187bc8;
            case 0x187BCCu: goto label_187bcc;
            case 0x187BD0u: goto label_187bd0;
            case 0x187BD4u: goto label_187bd4;
            case 0x187BD8u: goto label_187bd8;
            case 0x187BDCu: goto label_187bdc;
            case 0x187BE0u: goto label_187be0;
            case 0x187BE4u: goto label_187be4;
            case 0x187BE8u: goto label_187be8;
            case 0x187BECu: goto label_187bec;
            case 0x187BF0u: goto label_187bf0;
            case 0x187BF4u: goto label_187bf4;
            case 0x187BF8u: goto label_187bf8;
            case 0x187BFCu: goto label_187bfc;
            case 0x187C00u: goto label_187c00;
            case 0x187C04u: goto label_187c04;
            case 0x187C08u: goto label_187c08;
            case 0x187C0Cu: goto label_187c0c;
            case 0x187C10u: goto label_187c10;
            case 0x187C14u: goto label_187c14;
            case 0x187C18u: goto label_187c18;
            case 0x187C1Cu: goto label_187c1c;
            case 0x187C20u: goto label_187c20;
            case 0x187C24u: goto label_187c24;
            case 0x187C28u: goto label_187c28;
            case 0x187C2Cu: goto label_187c2c;
            case 0x187C30u: goto label_187c30;
            case 0x187C34u: goto label_187c34;
            case 0x187C38u: goto label_187c38;
            case 0x187C3Cu: goto label_187c3c;
            case 0x187C40u: goto label_187c40;
            case 0x187C44u: goto label_187c44;
            case 0x187C48u: goto label_187c48;
            case 0x187C4Cu: goto label_187c4c;
            case 0x187C50u: goto label_187c50;
            case 0x187C54u: goto label_187c54;
            case 0x187C58u: goto label_187c58;
            case 0x187C5Cu: goto label_187c5c;
            case 0x187C60u: goto label_187c60;
            case 0x187C64u: goto label_187c64;
            case 0x187C68u: goto label_187c68;
            case 0x187C6Cu: goto label_187c6c;
            case 0x187C70u: goto label_187c70;
            case 0x187C74u: goto label_187c74;
            case 0x187C78u: goto label_187c78;
            case 0x187C7Cu: goto label_187c7c;
            case 0x187C80u: goto label_187c80;
            case 0x187C84u: goto label_187c84;
            case 0x187C88u: goto label_187c88;
            case 0x187C8Cu: goto label_187c8c;
            case 0x187C90u: goto label_187c90;
            case 0x187C94u: goto label_187c94;
            case 0x187C98u: goto label_187c98;
            case 0x187C9Cu: goto label_187c9c;
            case 0x187CA0u: goto label_187ca0;
            case 0x187CA4u: goto label_187ca4;
            case 0x187CA8u: goto label_187ca8;
            case 0x187CACu: goto label_187cac;
            case 0x187CB0u: goto label_187cb0;
            case 0x187CB4u: goto label_187cb4;
            case 0x187CB8u: goto label_187cb8;
            case 0x187CBCu: goto label_187cbc;
            case 0x187CC0u: goto label_187cc0;
            case 0x187CC4u: goto label_187cc4;
            case 0x187CC8u: goto label_187cc8;
            case 0x187CCCu: goto label_187ccc;
            case 0x187CD0u: goto label_187cd0;
            case 0x187CD4u: goto label_187cd4;
            case 0x187CD8u: goto label_187cd8;
            case 0x187CDCu: goto label_187cdc;
            case 0x187CE0u: goto label_187ce0;
            case 0x187CE4u: goto label_187ce4;
            case 0x187CE8u: goto label_187ce8;
            case 0x187CECu: goto label_187cec;
            case 0x187CF0u: goto label_187cf0;
            case 0x187CF4u: goto label_187cf4;
            case 0x187CF8u: goto label_187cf8;
            case 0x187CFCu: goto label_187cfc;
            case 0x187D00u: goto label_187d00;
            case 0x187D04u: goto label_187d04;
            case 0x187D08u: goto label_187d08;
            case 0x187D0Cu: goto label_187d0c;
            case 0x187D10u: goto label_187d10;
            case 0x187D14u: goto label_187d14;
            case 0x187D18u: goto label_187d18;
            case 0x187D1Cu: goto label_187d1c;
            case 0x187D20u: goto label_187d20;
            case 0x187D24u: goto label_187d24;
            case 0x187D28u: goto label_187d28;
            case 0x187D2Cu: goto label_187d2c;
            case 0x187D30u: goto label_187d30;
            case 0x187D34u: goto label_187d34;
            case 0x187D38u: goto label_187d38;
            case 0x187D3Cu: goto label_187d3c;
            case 0x187D40u: goto label_187d40;
            case 0x187D44u: goto label_187d44;
            case 0x187D48u: goto label_187d48;
            case 0x187D4Cu: goto label_187d4c;
            case 0x187D50u: goto label_187d50;
            case 0x187D54u: goto label_187d54;
            case 0x187D58u: goto label_187d58;
            case 0x187D5Cu: goto label_187d5c;
            case 0x187D60u: goto label_187d60;
            case 0x187D64u: goto label_187d64;
            case 0x187D68u: goto label_187d68;
            case 0x187D6Cu: goto label_187d6c;
            case 0x187D70u: goto label_187d70;
            case 0x187D74u: goto label_187d74;
            case 0x187D78u: goto label_187d78;
            case 0x187D7Cu: goto label_187d7c;
            case 0x187D80u: goto label_187d80;
            case 0x187D84u: goto label_187d84;
            case 0x187D88u: goto label_187d88;
            case 0x187D8Cu: goto label_187d8c;
            case 0x187D90u: goto label_187d90;
            case 0x187D94u: goto label_187d94;
            case 0x187D98u: goto label_187d98;
            case 0x187D9Cu: goto label_187d9c;
            case 0x187DA0u: goto label_187da0;
            case 0x187DA4u: goto label_187da4;
            case 0x187DA8u: goto label_187da8;
            case 0x187DACu: goto label_187dac;
            case 0x187DB0u: goto label_187db0;
            case 0x187DB4u: goto label_187db4;
            case 0x187DB8u: goto label_187db8;
            case 0x187DBCu: goto label_187dbc;
            case 0x187DC0u: goto label_187dc0;
            case 0x187DC4u: goto label_187dc4;
            case 0x187DC8u: goto label_187dc8;
            case 0x187DCCu: goto label_187dcc;
            case 0x187DD0u: goto label_187dd0;
            case 0x187DD4u: goto label_187dd4;
            case 0x187DD8u: goto label_187dd8;
            case 0x187DDCu: goto label_187ddc;
            case 0x187DE0u: goto label_187de0;
            case 0x187DE4u: goto label_187de4;
            case 0x187DE8u: goto label_187de8;
            case 0x187DECu: goto label_187dec;
            case 0x187DF0u: goto label_187df0;
            case 0x187DF4u: goto label_187df4;
            case 0x187DF8u: goto label_187df8;
            case 0x187DFCu: goto label_187dfc;
            case 0x187E00u: goto label_187e00;
            case 0x187E04u: goto label_187e04;
            case 0x187E08u: goto label_187e08;
            case 0x187E0Cu: goto label_187e0c;
            case 0x187E10u: goto label_187e10;
            case 0x187E14u: goto label_187e14;
            case 0x187E18u: goto label_187e18;
            case 0x187E1Cu: goto label_187e1c;
            case 0x187E20u: goto label_187e20;
            case 0x187E24u: goto label_187e24;
            case 0x187E28u: goto label_187e28;
            case 0x187E2Cu: goto label_187e2c;
            case 0x187E30u: goto label_187e30;
            case 0x187E34u: goto label_187e34;
            case 0x187E38u: goto label_187e38;
            case 0x187E3Cu: goto label_187e3c;
            case 0x187E40u: goto label_187e40;
            case 0x187E44u: goto label_187e44;
            case 0x187E48u: goto label_187e48;
            case 0x187E4Cu: goto label_187e4c;
            case 0x187E50u: goto label_187e50;
            case 0x187E54u: goto label_187e54;
            case 0x187E58u: goto label_187e58;
            case 0x187E5Cu: goto label_187e5c;
            case 0x187E60u: goto label_187e60;
            case 0x187E64u: goto label_187e64;
            case 0x187E68u: goto label_187e68;
            case 0x187E6Cu: goto label_187e6c;
            case 0x187E70u: goto label_187e70;
            case 0x187E74u: goto label_187e74;
            case 0x187E78u: goto label_187e78;
            case 0x187E7Cu: goto label_187e7c;
            case 0x187E80u: goto label_187e80;
            case 0x187E84u: goto label_187e84;
            case 0x187E88u: goto label_187e88;
            case 0x187E8Cu: goto label_187e8c;
            case 0x187E90u: goto label_187e90;
            case 0x187E94u: goto label_187e94;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x187E6Cu; }
            if (ctx->pc != 0x187E6Cu) { return; }
        }
    }
    ctx->pc = 0x187E6Cu;
label_187e6c:
    // 0x187e6c: 0xdfbf0080
    ctx->pc = 0x187e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_187e70:
    // 0x187e70: 0xdfb70070
    ctx->pc = 0x187e70u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_187e74:
    // 0x187e74: 0xdfb60060
    ctx->pc = 0x187e74u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_187e78:
    // 0x187e78: 0xdfb50050
    ctx->pc = 0x187e78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_187e7c:
    // 0x187e7c: 0xdfb40040
    ctx->pc = 0x187e7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_187e80:
    // 0x187e80: 0xdfb30030
    ctx->pc = 0x187e80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_187e84:
    // 0x187e84: 0xdfb20020
    ctx->pc = 0x187e84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_187e88:
    // 0x187e88: 0xdfb10010
    ctx->pc = 0x187e88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_187e8c:
    // 0x187e8c: 0xdfb00000
    ctx->pc = 0x187e8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_187e90:
    // 0x187e90: 0x3e00008
label_187e94:
    if (ctx->pc == 0x187E94u) {
        ctx->pc = 0x187E94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x187E98u;
        goto label_fallthrough_0x187e90;
    }
    ctx->pc = 0x187E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187E94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187B80u: goto label_187b80;
            case 0x187B84u: goto label_187b84;
            case 0x187B88u: goto label_187b88;
            case 0x187B8Cu: goto label_187b8c;
            case 0x187B90u: goto label_187b90;
            case 0x187B94u: goto label_187b94;
            case 0x187B98u: goto label_187b98;
            case 0x187B9Cu: goto label_187b9c;
            case 0x187BA0u: goto label_187ba0;
            case 0x187BA4u: goto label_187ba4;
            case 0x187BA8u: goto label_187ba8;
            case 0x187BACu: goto label_187bac;
            case 0x187BB0u: goto label_187bb0;
            case 0x187BB4u: goto label_187bb4;
            case 0x187BB8u: goto label_187bb8;
            case 0x187BBCu: goto label_187bbc;
            case 0x187BC0u: goto label_187bc0;
            case 0x187BC4u: goto label_187bc4;
            case 0x187BC8u: goto label_187bc8;
            case 0x187BCCu: goto label_187bcc;
            case 0x187BD0u: goto label_187bd0;
            case 0x187BD4u: goto label_187bd4;
            case 0x187BD8u: goto label_187bd8;
            case 0x187BDCu: goto label_187bdc;
            case 0x187BE0u: goto label_187be0;
            case 0x187BE4u: goto label_187be4;
            case 0x187BE8u: goto label_187be8;
            case 0x187BECu: goto label_187bec;
            case 0x187BF0u: goto label_187bf0;
            case 0x187BF4u: goto label_187bf4;
            case 0x187BF8u: goto label_187bf8;
            case 0x187BFCu: goto label_187bfc;
            case 0x187C00u: goto label_187c00;
            case 0x187C04u: goto label_187c04;
            case 0x187C08u: goto label_187c08;
            case 0x187C0Cu: goto label_187c0c;
            case 0x187C10u: goto label_187c10;
            case 0x187C14u: goto label_187c14;
            case 0x187C18u: goto label_187c18;
            case 0x187C1Cu: goto label_187c1c;
            case 0x187C20u: goto label_187c20;
            case 0x187C24u: goto label_187c24;
            case 0x187C28u: goto label_187c28;
            case 0x187C2Cu: goto label_187c2c;
            case 0x187C30u: goto label_187c30;
            case 0x187C34u: goto label_187c34;
            case 0x187C38u: goto label_187c38;
            case 0x187C3Cu: goto label_187c3c;
            case 0x187C40u: goto label_187c40;
            case 0x187C44u: goto label_187c44;
            case 0x187C48u: goto label_187c48;
            case 0x187C4Cu: goto label_187c4c;
            case 0x187C50u: goto label_187c50;
            case 0x187C54u: goto label_187c54;
            case 0x187C58u: goto label_187c58;
            case 0x187C5Cu: goto label_187c5c;
            case 0x187C60u: goto label_187c60;
            case 0x187C64u: goto label_187c64;
            case 0x187C68u: goto label_187c68;
            case 0x187C6Cu: goto label_187c6c;
            case 0x187C70u: goto label_187c70;
            case 0x187C74u: goto label_187c74;
            case 0x187C78u: goto label_187c78;
            case 0x187C7Cu: goto label_187c7c;
            case 0x187C80u: goto label_187c80;
            case 0x187C84u: goto label_187c84;
            case 0x187C88u: goto label_187c88;
            case 0x187C8Cu: goto label_187c8c;
            case 0x187C90u: goto label_187c90;
            case 0x187C94u: goto label_187c94;
            case 0x187C98u: goto label_187c98;
            case 0x187C9Cu: goto label_187c9c;
            case 0x187CA0u: goto label_187ca0;
            case 0x187CA4u: goto label_187ca4;
            case 0x187CA8u: goto label_187ca8;
            case 0x187CACu: goto label_187cac;
            case 0x187CB0u: goto label_187cb0;
            case 0x187CB4u: goto label_187cb4;
            case 0x187CB8u: goto label_187cb8;
            case 0x187CBCu: goto label_187cbc;
            case 0x187CC0u: goto label_187cc0;
            case 0x187CC4u: goto label_187cc4;
            case 0x187CC8u: goto label_187cc8;
            case 0x187CCCu: goto label_187ccc;
            case 0x187CD0u: goto label_187cd0;
            case 0x187CD4u: goto label_187cd4;
            case 0x187CD8u: goto label_187cd8;
            case 0x187CDCu: goto label_187cdc;
            case 0x187CE0u: goto label_187ce0;
            case 0x187CE4u: goto label_187ce4;
            case 0x187CE8u: goto label_187ce8;
            case 0x187CECu: goto label_187cec;
            case 0x187CF0u: goto label_187cf0;
            case 0x187CF4u: goto label_187cf4;
            case 0x187CF8u: goto label_187cf8;
            case 0x187CFCu: goto label_187cfc;
            case 0x187D00u: goto label_187d00;
            case 0x187D04u: goto label_187d04;
            case 0x187D08u: goto label_187d08;
            case 0x187D0Cu: goto label_187d0c;
            case 0x187D10u: goto label_187d10;
            case 0x187D14u: goto label_187d14;
            case 0x187D18u: goto label_187d18;
            case 0x187D1Cu: goto label_187d1c;
            case 0x187D20u: goto label_187d20;
            case 0x187D24u: goto label_187d24;
            case 0x187D28u: goto label_187d28;
            case 0x187D2Cu: goto label_187d2c;
            case 0x187D30u: goto label_187d30;
            case 0x187D34u: goto label_187d34;
            case 0x187D38u: goto label_187d38;
            case 0x187D3Cu: goto label_187d3c;
            case 0x187D40u: goto label_187d40;
            case 0x187D44u: goto label_187d44;
            case 0x187D48u: goto label_187d48;
            case 0x187D4Cu: goto label_187d4c;
            case 0x187D50u: goto label_187d50;
            case 0x187D54u: goto label_187d54;
            case 0x187D58u: goto label_187d58;
            case 0x187D5Cu: goto label_187d5c;
            case 0x187D60u: goto label_187d60;
            case 0x187D64u: goto label_187d64;
            case 0x187D68u: goto label_187d68;
            case 0x187D6Cu: goto label_187d6c;
            case 0x187D70u: goto label_187d70;
            case 0x187D74u: goto label_187d74;
            case 0x187D78u: goto label_187d78;
            case 0x187D7Cu: goto label_187d7c;
            case 0x187D80u: goto label_187d80;
            case 0x187D84u: goto label_187d84;
            case 0x187D88u: goto label_187d88;
            case 0x187D8Cu: goto label_187d8c;
            case 0x187D90u: goto label_187d90;
            case 0x187D94u: goto label_187d94;
            case 0x187D98u: goto label_187d98;
            case 0x187D9Cu: goto label_187d9c;
            case 0x187DA0u: goto label_187da0;
            case 0x187DA4u: goto label_187da4;
            case 0x187DA8u: goto label_187da8;
            case 0x187DACu: goto label_187dac;
            case 0x187DB0u: goto label_187db0;
            case 0x187DB4u: goto label_187db4;
            case 0x187DB8u: goto label_187db8;
            case 0x187DBCu: goto label_187dbc;
            case 0x187DC0u: goto label_187dc0;
            case 0x187DC4u: goto label_187dc4;
            case 0x187DC8u: goto label_187dc8;
            case 0x187DCCu: goto label_187dcc;
            case 0x187DD0u: goto label_187dd0;
            case 0x187DD4u: goto label_187dd4;
            case 0x187DD8u: goto label_187dd8;
            case 0x187DDCu: goto label_187ddc;
            case 0x187DE0u: goto label_187de0;
            case 0x187DE4u: goto label_187de4;
            case 0x187DE8u: goto label_187de8;
            case 0x187DECu: goto label_187dec;
            case 0x187DF0u: goto label_187df0;
            case 0x187DF4u: goto label_187df4;
            case 0x187DF8u: goto label_187df8;
            case 0x187DFCu: goto label_187dfc;
            case 0x187E00u: goto label_187e00;
            case 0x187E04u: goto label_187e04;
            case 0x187E08u: goto label_187e08;
            case 0x187E0Cu: goto label_187e0c;
            case 0x187E10u: goto label_187e10;
            case 0x187E14u: goto label_187e14;
            case 0x187E18u: goto label_187e18;
            case 0x187E1Cu: goto label_187e1c;
            case 0x187E20u: goto label_187e20;
            case 0x187E24u: goto label_187e24;
            case 0x187E28u: goto label_187e28;
            case 0x187E2Cu: goto label_187e2c;
            case 0x187E30u: goto label_187e30;
            case 0x187E34u: goto label_187e34;
            case 0x187E38u: goto label_187e38;
            case 0x187E3Cu: goto label_187e3c;
            case 0x187E40u: goto label_187e40;
            case 0x187E44u: goto label_187e44;
            case 0x187E48u: goto label_187e48;
            case 0x187E4Cu: goto label_187e4c;
            case 0x187E50u: goto label_187e50;
            case 0x187E54u: goto label_187e54;
            case 0x187E58u: goto label_187e58;
            case 0x187E5Cu: goto label_187e5c;
            case 0x187E60u: goto label_187e60;
            case 0x187E64u: goto label_187e64;
            case 0x187E68u: goto label_187e68;
            case 0x187E6Cu: goto label_187e6c;
            case 0x187E70u: goto label_187e70;
            case 0x187E74u: goto label_187e74;
            case 0x187E78u: goto label_187e78;
            case 0x187E7Cu: goto label_187e7c;
            case 0x187E80u: goto label_187e80;
            case 0x187E84u: goto label_187e84;
            case 0x187E88u: goto label_187e88;
            case 0x187E8Cu: goto label_187e8c;
            case 0x187E90u: goto label_187e90;
            case 0x187E94u: goto label_187e94;
            default: break;
        }
        return;
    }
label_fallthrough_0x187e90:
    ctx->pc = 0x187E98u;
}
