#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPV_IsEmptyBpic
// Address: 0x185bb0 - 0x186010
void MPV_IsEmptyBpic_0x185bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPV_IsEmptyBpic");


    ctx->pc = 0x185bb0u;

    // 0x185bb0: 0x80682d
    ctx->pc = 0x185bb0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185bb4: 0x2402fffc
    ctx->pc = 0x185bb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x185bb8: 0x1a24024
    ctx->pc = 0x185bb8u;
    SET_GPR_U32(ctx, 8, AND32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x185bbc: 0x1a81023
    ctx->pc = 0x185bbcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x185bc0: 0x810b0000
    ctx->pc = 0x185bc0u;
    SET_GPR_S32(ctx, 11, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x185bc4: 0x25080001
    ctx->pc = 0x185bc4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x185bc8: 0x248c0
    ctx->pc = 0x185bc8u;
    SET_GPR_U32(ctx, 9, SLL32(GPR_U32(ctx, 2), 3));
    // 0x185bcc: 0x91030000
    ctx->pc = 0x185bccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x185bd0: 0xb5a00
    ctx->pc = 0x185bd0u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 8));
    // 0x185bd4: 0x25080001
    ctx->pc = 0x185bd4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x185bd8: 0x91020000
    ctx->pc = 0x185bd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x185bdc: 0x1635825
    ctx->pc = 0x185bdcu;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x185be0: 0x25080001
    ctx->pc = 0x185be0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x185be4: 0xb5a00
    ctx->pc = 0x185be4u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 8));
    // 0x185be8: 0x91030000
    ctx->pc = 0x185be8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x185bec: 0x1625825
    ctx->pc = 0x185becu;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x185bf0: 0x25080001
    ctx->pc = 0x185bf0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x185bf4: 0xb5a00
    ctx->pc = 0x185bf4u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 8));
    // 0x185bf8: 0x81070000
    ctx->pc = 0x185bf8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x185bfc: 0x1635825
    ctx->pc = 0x185bfcu;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x185c00: 0x25080001
    ctx->pc = 0x185c00u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x185c04: 0x12b5804
    ctx->pc = 0x185c04u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 9) & 0x1F));
    // 0x185c08: 0x91020000
    ctx->pc = 0x185c08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x185c0c: 0x73a00
    ctx->pc = 0x185c0cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x185c10: 0x25080001
    ctx->pc = 0x185c10u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x185c14: 0xe23825
    ctx->pc = 0x185c14u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x185c18: 0x91030000
    ctx->pc = 0x185c18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x185c1c: 0x25080001
    ctx->pc = 0x185c1cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x185c20: 0x73a00
    ctx->pc = 0x185c20u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x185c24: 0x91020000
    ctx->pc = 0x185c24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x185c28: 0xe33825
    ctx->pc = 0x185c28u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x185c2c: 0x73a00
    ctx->pc = 0x185c2cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x185c30: 0x25080001
    ctx->pc = 0x185c30u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x185c34: 0x11200006
    ctx->pc = 0x185C34u;
    {
        const bool branch_taken_0x185c34 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        ctx->pc = 0x185C38u;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        if (branch_taken_0x185c34) {
            ctx->pc = 0x185C50u;
            goto label_185c50;
        }
    }
    ctx->pc = 0x185C3Cu;
    // 0x185c3c: 0x91023
    ctx->pc = 0x185c3cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x185c40: 0x471006
    ctx->pc = 0x185c40u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x185c44: 0x1625025
    ctx->pc = 0x185c44u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x185c48: 0x10000003
    ctx->pc = 0x185C48u;
    {
        const bool branch_taken_0x185c48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185C4Cu;
        SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
        if (branch_taken_0x185c48) {
            ctx->pc = 0x185C58u;
            goto label_185c58;
        }
    }
    ctx->pc = 0x185C50u;
label_185c50:
    // 0x185c50: 0x160502d
    ctx->pc = 0x185c50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185c54: 0xe0582d
    ctx->pc = 0x185c54u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_185c58:
    // 0x185c58: 0x81070000
    ctx->pc = 0x185c58u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x185c5c: 0x24040101
    ctx->pc = 0x185c5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 257));
    // 0x185c60: 0x25080001
    ctx->pc = 0x185c60u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x185c64: 0x91020000
    ctx->pc = 0x185c64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x185c68: 0x73a00
    ctx->pc = 0x185c68u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x185c6c: 0x25080001
    ctx->pc = 0x185c6cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x185c70: 0xe23825
    ctx->pc = 0x185c70u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x185c74: 0x91030000
    ctx->pc = 0x185c74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x185c78: 0x25080001
    ctx->pc = 0x185c78u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x185c7c: 0x73a00
    ctx->pc = 0x185c7cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x185c80: 0x91020000
    ctx->pc = 0x185c80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x185c84: 0xe33825
    ctx->pc = 0x185c84u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x185c88: 0x73a00
    ctx->pc = 0x185c88u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x185c8c: 0x25080001
    ctx->pc = 0x185c8cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x185c90: 0x15440096
    ctx->pc = 0x185C90u;
    {
        const bool branch_taken_0x185c90 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 4));
        ctx->pc = 0x185C94u;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        if (branch_taken_0x185c90) {
            ctx->pc = 0x185EECu;
            goto label_185eec;
        }
    }
    ctx->pc = 0x185C98u;
    // 0x185c98: 0x2922001b
    ctx->pc = 0x185c98u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 27));
    // 0x185c9c: 0x54400014
    ctx->pc = 0x185C9Cu;
    {
        const bool branch_taken_0x185c9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x185c9c) {
            ctx->pc = 0x185CA0u;
            SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 5));
            ctx->pc = 0x185CF0u;
            goto label_185cf0;
        }
    }
    ctx->pc = 0x185CA4u;
    // 0x185ca4: 0x2529ffe5
    ctx->pc = 0x185ca4u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294967269));
    // 0x185ca8: 0x15200002
    ctx->pc = 0x185CA8u;
    {
        const bool branch_taken_0x185ca8 = (GPR_U32(ctx, 9) != GPR_U32(ctx, 0));
        ctx->pc = 0x185CACu;
        SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
        if (branch_taken_0x185ca8) {
            ctx->pc = 0x185CB4u;
            goto label_185cb4;
        }
    }
    ctx->pc = 0x185CB0u;
    // 0x185cb0: 0xe0582d
    ctx->pc = 0x185cb0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_185cb4:
    // 0x185cb4: 0x81070000
    ctx->pc = 0x185cb4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x185cb8: 0x25080001
    ctx->pc = 0x185cb8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x185cbc: 0x91020000
    ctx->pc = 0x185cbcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x185cc0: 0x73a00
    ctx->pc = 0x185cc0u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x185cc4: 0x25080001
    ctx->pc = 0x185cc4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x185cc8: 0xe23825
    ctx->pc = 0x185cc8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x185ccc: 0x91030000
    ctx->pc = 0x185cccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x185cd0: 0x25080001
    ctx->pc = 0x185cd0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x185cd4: 0x73a00
    ctx->pc = 0x185cd4u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x185cd8: 0x91020000
    ctx->pc = 0x185cd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x185cdc: 0xe33825
    ctx->pc = 0x185cdcu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x185ce0: 0x73a00
    ctx->pc = 0x185ce0u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x185ce4: 0x25080001
    ctx->pc = 0x185ce4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x185ce8: 0x10000002
    ctx->pc = 0x185CE8u;
    {
        const bool branch_taken_0x185ce8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185CECu;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        if (branch_taken_0x185ce8) {
            ctx->pc = 0x185CF4u;
            goto label_185cf4;
        }
    }
    ctx->pc = 0x185CF0u;
label_185cf0:
    // 0x185cf0: 0xb5940
    ctx->pc = 0x185cf0u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 5));
label_185cf4:
    // 0x185cf4: 0x2402001f
    ctx->pc = 0x185cf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
    // 0x185cf8: 0x15220012
    ctx->pc = 0x185CF8u;
    {
        const bool branch_taken_0x185cf8 = (GPR_U32(ctx, 9) != GPR_U32(ctx, 2));
        ctx->pc = 0x185CFCu;
        SET_GPR_U32(ctx, 10, SRL32(GPR_U32(ctx, 11), 31));
        if (branch_taken_0x185cf8) {
            ctx->pc = 0x185D44u;
            goto label_185d44;
        }
    }
    ctx->pc = 0x185D00u;
    // 0x185d00: 0xe0582d
    ctx->pc = 0x185d00u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185d04: 0x482d
    ctx->pc = 0x185d04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185d08: 0x81070000
    ctx->pc = 0x185d08u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x185d0c: 0x25080001
    ctx->pc = 0x185d0cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x185d10: 0x91020000
    ctx->pc = 0x185d10u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x185d14: 0x73a00
    ctx->pc = 0x185d14u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x185d18: 0x25080001
    ctx->pc = 0x185d18u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x185d1c: 0xe23825
    ctx->pc = 0x185d1cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x185d20: 0x91030000
    ctx->pc = 0x185d20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x185d24: 0x25080001
    ctx->pc = 0x185d24u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x185d28: 0x73a00
    ctx->pc = 0x185d28u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x185d2c: 0x91020000
    ctx->pc = 0x185d2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x185d30: 0xe33825
    ctx->pc = 0x185d30u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x185d34: 0x73a00
    ctx->pc = 0x185d34u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x185d38: 0x25080001
    ctx->pc = 0x185d38u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x185d3c: 0x10000003
    ctx->pc = 0x185D3Cu;
    {
        const bool branch_taken_0x185d3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185D40u;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        if (branch_taken_0x185d3c) {
            ctx->pc = 0x185D4Cu;
            goto label_185d4c;
        }
    }
    ctx->pc = 0x185D44u;
label_185d44:
    // 0x185d44: 0x25290001
    ctx->pc = 0x185d44u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x185d48: 0xb5840
    ctx->pc = 0x185d48u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 1));
label_185d4c:
    // 0x185d4c: 0x15400067
    ctx->pc = 0x185D4Cu;
    {
        const bool branch_taken_0x185d4c = (GPR_U32(ctx, 10) != GPR_U32(ctx, 0));
        ctx->pc = 0x185D50u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
        if (branch_taken_0x185d4c) {
            ctx->pc = 0x185EECu;
            goto label_185eec;
        }
    }
    ctx->pc = 0x185D54u;
    // 0x185d54: 0x15220012
    ctx->pc = 0x185D54u;
    {
        const bool branch_taken_0x185d54 = (GPR_U32(ctx, 9) != GPR_U32(ctx, 2));
        ctx->pc = 0x185D58u;
        SET_GPR_U32(ctx, 10, SRL32(GPR_U32(ctx, 11), 31));
        if (branch_taken_0x185d54) {
            ctx->pc = 0x185DA0u;
            goto label_185da0;
        }
    }
    ctx->pc = 0x185D5Cu;
    // 0x185d5c: 0xe0582d
    ctx->pc = 0x185d5cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185d60: 0x482d
    ctx->pc = 0x185d60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185d64: 0x81070000
    ctx->pc = 0x185d64u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x185d68: 0x25080001
    ctx->pc = 0x185d68u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x185d6c: 0x91020000
    ctx->pc = 0x185d6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x185d70: 0x73a00
    ctx->pc = 0x185d70u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x185d74: 0x25080001
    ctx->pc = 0x185d74u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x185d78: 0xe23825
    ctx->pc = 0x185d78u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x185d7c: 0x91030000
    ctx->pc = 0x185d7cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x185d80: 0x25080001
    ctx->pc = 0x185d80u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x185d84: 0x73a00
    ctx->pc = 0x185d84u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x185d88: 0x91020000
    ctx->pc = 0x185d88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x185d8c: 0xe33825
    ctx->pc = 0x185d8cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x185d90: 0x73a00
    ctx->pc = 0x185d90u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x185d94: 0x25080001
    ctx->pc = 0x185d94u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x185d98: 0x10000003
    ctx->pc = 0x185D98u;
    {
        const bool branch_taken_0x185d98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185D9Cu;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        if (branch_taken_0x185d98) {
            ctx->pc = 0x185DA8u;
            goto label_185da8;
        }
    }
    ctx->pc = 0x185DA0u;
label_185da0:
    // 0x185da0: 0x25290001
    ctx->pc = 0x185da0u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x185da4: 0xb5840
    ctx->pc = 0x185da4u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 1));
label_185da8:
    // 0x185da8: 0x11400050
    ctx->pc = 0x185DA8u;
    {
        const bool branch_taken_0x185da8 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 0));
        ctx->pc = 0x185DACu;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 27));
        if (branch_taken_0x185da8) {
            ctx->pc = 0x185EECu;
            goto label_185eec;
        }
    }
    ctx->pc = 0x185DB0u;
    // 0x185db0: 0x14400005
    ctx->pc = 0x185DB0u;
    {
        const bool branch_taken_0x185db0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x185DB4u;
        SET_GPR_U32(ctx, 10, SRL32(GPR_U32(ctx, 11), 26));
        if (branch_taken_0x185db0) {
            ctx->pc = 0x185DC8u;
            goto label_185dc8;
        }
    }
    ctx->pc = 0x185DB8u;
    // 0x185db8: 0x2402003a
    ctx->pc = 0x185db8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 58));
    // 0x185dbc: 0x491023
    ctx->pc = 0x185dbcu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x185dc0: 0x471006
    ctx->pc = 0x185dc0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x185dc4: 0x1425025
    ctx->pc = 0x185dc4u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_185dc8:
    // 0x185dc8: 0x2402000b
    ctx->pc = 0x185dc8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
    // 0x185dcc: 0x1142000c
    ctx->pc = 0x185DCCu;
    {
        const bool branch_taken_0x185dcc = (GPR_U32(ctx, 10) == GPR_U32(ctx, 2));
        ctx->pc = 0x185DD0u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 10), 11));
        if (branch_taken_0x185dcc) {
            ctx->pc = 0x185E00u;
            goto label_185e00;
        }
    }
    ctx->pc = 0x185DD4u;
    // 0x185dd4: 0x14400045
    ctx->pc = 0x185DD4u;
    {
        const bool branch_taken_0x185dd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x185DD8u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 10), 24));
        if (branch_taken_0x185dd4) {
            ctx->pc = 0x185EECu;
            goto label_185eec;
        }
    }
    ctx->pc = 0x185DDCu;
    // 0x185ddc: 0x10400043
    ctx->pc = 0x185DDCu;
    {
        const bool branch_taken_0x185ddc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x185DE0u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 10), 22));
        if (branch_taken_0x185ddc) {
            ctx->pc = 0x185EECu;
            goto label_185eec;
        }
    }
    ctx->pc = 0x185DE4u;
    // 0x185de4: 0x14400041
    ctx->pc = 0x185DE4u;
    {
        const bool branch_taken_0x185de4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x185DE8u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 5));
        if (branch_taken_0x185de4) {
            ctx->pc = 0x185EECu;
            goto label_185eec;
        }
    }
    ctx->pc = 0x185DECu;
    // 0x185dec: 0x29220020
    ctx->pc = 0x185decu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 32));
    // 0x185df0: 0x10400007
    ctx->pc = 0x185DF0u;
    {
        const bool branch_taken_0x185df0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x185DF4u;
        SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 5));
        if (branch_taken_0x185df0) {
            ctx->pc = 0x185E10u;
            goto label_185e10;
        }
    }
    ctx->pc = 0x185DF8u;
    // 0x185df8: 0x10000016
    ctx->pc = 0x185DF8u;
    {
        const bool branch_taken_0x185df8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185DFCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
        if (branch_taken_0x185df8) {
            ctx->pc = 0x185E54u;
            goto label_185e54;
        }
    }
    ctx->pc = 0x185E00u;
label_185e00:
    // 0x185e00: 0x25290006
    ctx->pc = 0x185e00u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 6));
    // 0x185e04: 0x29220020
    ctx->pc = 0x185e04u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 32));
    // 0x185e08: 0x14400011
    ctx->pc = 0x185E08u;
    {
        const bool branch_taken_0x185e08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x185E0Cu;
        SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 6));
        if (branch_taken_0x185e08) {
            ctx->pc = 0x185E50u;
            goto label_185e50;
        }
    }
    ctx->pc = 0x185E10u;
label_185e10:
    // 0x185e10: 0x2529ffe0
    ctx->pc = 0x185e10u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294967264));
    // 0x185e14: 0x1275804
    ctx->pc = 0x185e14u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
    // 0x185e18: 0x81070000
    ctx->pc = 0x185e18u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x185e1c: 0x25080001
    ctx->pc = 0x185e1cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x185e20: 0x91020000
    ctx->pc = 0x185e20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x185e24: 0x73a00
    ctx->pc = 0x185e24u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x185e28: 0x25080001
    ctx->pc = 0x185e28u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x185e2c: 0xe23825
    ctx->pc = 0x185e2cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x185e30: 0x91030000
    ctx->pc = 0x185e30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x185e34: 0x25080001
    ctx->pc = 0x185e34u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x185e38: 0x73a00
    ctx->pc = 0x185e38u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x185e3c: 0x91020000
    ctx->pc = 0x185e3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x185e40: 0xe33825
    ctx->pc = 0x185e40u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x185e44: 0x73a00
    ctx->pc = 0x185e44u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x185e48: 0x25080001
    ctx->pc = 0x185e48u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x185e4c: 0xe23825
    ctx->pc = 0x185e4cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_185e50:
    // 0x185e50: 0x24c6ffff
    ctx->pc = 0x185e50u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
label_185e54:
    // 0x185e54: 0x240c0035
    ctx->pc = 0x185e54u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 53));
    // 0x185e58: 0x24040008
    ctx->pc = 0x185e58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x185e5c: 0x29220016
    ctx->pc = 0x185e5cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 22));
label_185e60:
    // 0x185e60: 0x14400004
    ctx->pc = 0x185E60u;
    {
        const bool branch_taken_0x185e60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x185E64u;
        SET_GPR_U32(ctx, 10, SRL32(GPR_U32(ctx, 11), 21));
        if (branch_taken_0x185e60) {
            ctx->pc = 0x185E74u;
            goto label_185e74;
        }
    }
    ctx->pc = 0x185E68u;
    // 0x185e68: 0x1891023
    ctx->pc = 0x185e68u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x185e6c: 0x471006
    ctx->pc = 0x185e6cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x185e70: 0x1425025
    ctx->pc = 0x185e70u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_185e74:
    // 0x185e74: 0x1544001a
    ctx->pc = 0x185E74u;
    {
        const bool branch_taken_0x185e74 = (GPR_U32(ctx, 10) != GPR_U32(ctx, 4));
        ctx->pc = 0x185E78u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 4294967295));
        if (branch_taken_0x185e74) {
            ctx->pc = 0x185EE0u;
            goto label_185ee0;
        }
    }
    ctx->pc = 0x185E7Cu;
    // 0x185e7c: 0x2529000b
    ctx->pc = 0x185e7cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 11));
    // 0x185e80: 0x29220020
    ctx->pc = 0x185e80u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 32));
    // 0x185e84: 0x14400011
    ctx->pc = 0x185E84u;
    {
        const bool branch_taken_0x185e84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x185E88u;
        SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), 11));
        if (branch_taken_0x185e84) {
            ctx->pc = 0x185ECCu;
            goto label_185ecc;
        }
    }
    ctx->pc = 0x185E8Cu;
    // 0x185e8c: 0x2529ffe0
    ctx->pc = 0x185e8cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294967264));
    // 0x185e90: 0x1275804
    ctx->pc = 0x185e90u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
    // 0x185e94: 0x81070000
    ctx->pc = 0x185e94u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x185e98: 0x25080001
    ctx->pc = 0x185e98u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x185e9c: 0x91020000
    ctx->pc = 0x185e9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x185ea0: 0x73a00
    ctx->pc = 0x185ea0u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x185ea4: 0x25080001
    ctx->pc = 0x185ea4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x185ea8: 0xe23825
    ctx->pc = 0x185ea8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x185eac: 0x91030000
    ctx->pc = 0x185eacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x185eb0: 0x25080001
    ctx->pc = 0x185eb0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x185eb4: 0x73a00
    ctx->pc = 0x185eb4u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x185eb8: 0x91020000
    ctx->pc = 0x185eb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x185ebc: 0xe33825
    ctx->pc = 0x185ebcu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x185ec0: 0x73a00
    ctx->pc = 0x185ec0u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x185ec4: 0x25080001
    ctx->pc = 0x185ec4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x185ec8: 0xe23825
    ctx->pc = 0x185ec8u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_185ecc:
    // 0x185ecc: 0x24c6ffdf
    ctx->pc = 0x185eccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967263));
    // 0x185ed0: 0x28c20022
    ctx->pc = 0x185ed0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), 34));
    // 0x185ed4: 0x1040ffe2
    ctx->pc = 0x185ED4u;
    {
        const bool branch_taken_0x185ed4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x185ED8u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 22));
        if (branch_taken_0x185ed4) {
            ctx->pc = 0x185E60u;
            goto label_185e60;
        }
    }
    ctx->pc = 0x185EDCu;
    // 0x185edc: 0x24c2ffff
    ctx->pc = 0x185edcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 6), 4294967295));
label_185ee0:
    // 0x185ee0: 0x2c420021
    ctx->pc = 0x185ee0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 33));
    // 0x185ee4: 0x14400003
    ctx->pc = 0x185EE4u;
    {
        const bool branch_taken_0x185ee4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x185EE8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
        if (branch_taken_0x185ee4) {
            ctx->pc = 0x185EF4u;
            goto label_185ef4;
        }
    }
    ctx->pc = 0x185EECu;
label_185eec:
    // 0x185eec: 0x3e00008
    ctx->pc = 0x185EECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185EF0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x185C50u: goto label_185c50;
            case 0x185C58u: goto label_185c58;
            case 0x185CB4u: goto label_185cb4;
            case 0x185CF0u: goto label_185cf0;
            case 0x185CF4u: goto label_185cf4;
            case 0x185D44u: goto label_185d44;
            case 0x185D4Cu: goto label_185d4c;
            case 0x185DA0u: goto label_185da0;
            case 0x185DA8u: goto label_185da8;
            case 0x185DC8u: goto label_185dc8;
            case 0x185E00u: goto label_185e00;
            case 0x185E10u: goto label_185e10;
            case 0x185E50u: goto label_185e50;
            case 0x185E54u: goto label_185e54;
            case 0x185E60u: goto label_185e60;
            case 0x185E74u: goto label_185e74;
            case 0x185ECCu: goto label_185ecc;
            case 0x185EE0u: goto label_185ee0;
            case 0x185EECu: goto label_185eec;
            case 0x185EF4u: goto label_185ef4;
            case 0x185F40u: goto label_185f40;
            case 0x185F44u: goto label_185f44;
            case 0x185F80u: goto label_185f80;
            case 0x185F88u: goto label_185f88;
            case 0x185FACu: goto label_185fac;
            case 0x185FD8u: goto label_185fd8;
            case 0x185FE0u: goto label_185fe0;
            case 0x185FF4u: goto label_185ff4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x185EF4u;
label_185ef4:
    // 0x185ef4: 0x61840
    ctx->pc = 0x185ef4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 1));
    // 0x185ef8: 0x244219c8
    ctx->pc = 0x185ef8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6600));
    // 0x185efc: 0x24040020
    ctx->pc = 0x185efcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    // 0x185f00: 0x621821
    ctx->pc = 0x185f00u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x185f04: 0x84660000
    ctx->pc = 0x185f04u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x185f08: 0x30c300ff
    ctx->pc = 0x185f08u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), 255));
    // 0x185f0c: 0x832023
    ctx->pc = 0x185f0cu;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x185f10: 0x124102a
    ctx->pc = 0x185f10u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), GPR_S32(ctx, 4)));
    // 0x185f14: 0x1440001a
    ctx->pc = 0x185F14u;
    {
        const bool branch_taken_0x185f14 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x185F18u;
        SET_GPR_U32(ctx, 10, SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 4) & 0x1F));
        if (branch_taken_0x185f14) {
            ctx->pc = 0x185F80u;
            goto label_185f80;
        }
    }
    ctx->pc = 0x185F1Cu;
    // 0x185f1c: 0x2522ffe0
    ctx->pc = 0x185f1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 9), 4294967264));
    // 0x185f20: 0x434821
    ctx->pc = 0x185f20u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x185f24: 0x11200006
    ctx->pc = 0x185F24u;
    {
        const bool branch_taken_0x185f24 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 0));
        ctx->pc = 0x185F28u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        if (branch_taken_0x185f24) {
            ctx->pc = 0x185F40u;
            goto label_185f40;
        }
    }
    ctx->pc = 0x185F2Cu;
    // 0x185f2c: 0x471006
    ctx->pc = 0x185f2cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x185f30: 0x1625825
    ctx->pc = 0x185f30u;
    SET_GPR_U32(ctx, 11, OR32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x185f34: 0x8b5006
    ctx->pc = 0x185f34u;
    SET_GPR_U32(ctx, 10, SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 4) & 0x1F));
    // 0x185f38: 0x10000002
    ctx->pc = 0x185F38u;
    {
        const bool branch_taken_0x185f38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185F3Cu;
        SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
        if (branch_taken_0x185f38) {
            ctx->pc = 0x185F44u;
            goto label_185f44;
        }
    }
    ctx->pc = 0x185F40u;
label_185f40:
    // 0x185f40: 0xe0582d
    ctx->pc = 0x185f40u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_185f44:
    // 0x185f44: 0x81070000
    ctx->pc = 0x185f44u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x185f48: 0x25080001
    ctx->pc = 0x185f48u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x185f4c: 0x91020000
    ctx->pc = 0x185f4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x185f50: 0x73a00
    ctx->pc = 0x185f50u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x185f54: 0x25080001
    ctx->pc = 0x185f54u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x185f58: 0xe23825
    ctx->pc = 0x185f58u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x185f5c: 0x91030000
    ctx->pc = 0x185f5cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x185f60: 0x25080001
    ctx->pc = 0x185f60u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x185f64: 0x73a00
    ctx->pc = 0x185f64u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x185f68: 0x91020000
    ctx->pc = 0x185f68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x185f6c: 0xe33825
    ctx->pc = 0x185f6cu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x185f70: 0x73a00
    ctx->pc = 0x185f70u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 8));
    // 0x185f74: 0x25080001
    ctx->pc = 0x185f74u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x185f78: 0x10000003
    ctx->pc = 0x185F78u;
    {
        const bool branch_taken_0x185f78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185F7Cu;
        SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        if (branch_taken_0x185f78) {
            ctx->pc = 0x185F88u;
            goto label_185f88;
        }
    }
    ctx->pc = 0x185F80u;
label_185f80:
    // 0x185f80: 0x1234821
    ctx->pc = 0x185f80u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x185f84: 0x6b5804
    ctx->pc = 0x185f84u;
    SET_GPR_U32(ctx, 11, SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 3) & 0x1F));
label_185f88:
    // 0x185f88: 0x61203
    ctx->pc = 0x185f88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 8));
    // 0x185f8c: 0x1542ffd7
    ctx->pc = 0x185F8Cu;
    {
        const bool branch_taken_0x185f8c = (GPR_U32(ctx, 10) != GPR_U32(ctx, 2));
        ctx->pc = 0x185F90u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 27));
        if (branch_taken_0x185f8c) {
            ctx->pc = 0x185EECu;
            goto label_185eec;
        }
    }
    ctx->pc = 0x185F94u;
    // 0x185f94: 0x14400005
    ctx->pc = 0x185F94u;
    {
        const bool branch_taken_0x185f94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x185F98u;
        SET_GPR_U32(ctx, 10, SRL32(GPR_U32(ctx, 11), 26));
        if (branch_taken_0x185f94) {
            ctx->pc = 0x185FACu;
            goto label_185fac;
        }
    }
    ctx->pc = 0x185F9Cu;
    // 0x185f9c: 0x2402003a
    ctx->pc = 0x185f9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 58));
    // 0x185fa0: 0x491023
    ctx->pc = 0x185fa0u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x185fa4: 0x471006
    ctx->pc = 0x185fa4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x185fa8: 0x1425025
    ctx->pc = 0x185fa8u;
    SET_GPR_U32(ctx, 10, OR32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_185fac:
    // 0x185fac: 0x2402000b
    ctx->pc = 0x185facu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11));
    // 0x185fb0: 0x11420009
    ctx->pc = 0x185FB0u;
    {
        const bool branch_taken_0x185fb0 = (GPR_U32(ctx, 10) == GPR_U32(ctx, 2));
        ctx->pc = 0x185FB4u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 10), 11));
        if (branch_taken_0x185fb0) {
            ctx->pc = 0x185FD8u;
            goto label_185fd8;
        }
    }
    ctx->pc = 0x185FB8u;
    // 0x185fb8: 0x1440ffcc
    ctx->pc = 0x185FB8u;
    {
        const bool branch_taken_0x185fb8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x185FBCu;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 10), 24));
        if (branch_taken_0x185fb8) {
            ctx->pc = 0x185EECu;
            goto label_185eec;
        }
    }
    ctx->pc = 0x185FC0u;
    // 0x185fc0: 0x1040ffca
    ctx->pc = 0x185FC0u;
    {
        const bool branch_taken_0x185fc0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x185FC4u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 10), 22));
        if (branch_taken_0x185fc0) {
            ctx->pc = 0x185EECu;
            goto label_185eec;
        }
    }
    ctx->pc = 0x185FC8u;
    // 0x185fc8: 0x1440ffc8
    ctx->pc = 0x185FC8u;
    {
        const bool branch_taken_0x185fc8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x185FCCu;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 5));
        if (branch_taken_0x185fc8) {
            ctx->pc = 0x185EECu;
            goto label_185eec;
        }
    }
    ctx->pc = 0x185FD0u;
    // 0x185fd0: 0x10000003
    ctx->pc = 0x185FD0u;
    {
        const bool branch_taken_0x185fd0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x185FD4u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 32));
        if (branch_taken_0x185fd0) {
            ctx->pc = 0x185FE0u;
            goto label_185fe0;
        }
    }
    ctx->pc = 0x185FD8u;
label_185fd8:
    // 0x185fd8: 0x25290006
    ctx->pc = 0x185fd8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 6));
    // 0x185fdc: 0x29220020
    ctx->pc = 0x185fdcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 32));
label_185fe0:
    // 0x185fe0: 0x54400004
    ctx->pc = 0x185FE0u;
    {
        const bool branch_taken_0x185fe0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x185fe0) {
            ctx->pc = 0x185FE4u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 9), 7));
            ctx->pc = 0x185FF4u;
            goto label_185ff4;
        }
    }
    ctx->pc = 0x185FE8u;
    // 0x185fe8: 0x2529ffe0
    ctx->pc = 0x185fe8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 4294967264));
    // 0x185fec: 0x25080004
    ctx->pc = 0x185fecu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4));
    // 0x185ff0: 0x25220007
    ctx->pc = 0x185ff0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 9), 7));
label_185ff4:
    // 0x185ff4: 0x210c3
    ctx->pc = 0x185ff4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x185ff8: 0x2442fff8
    ctx->pc = 0x185ff8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x185ffc: 0x1021021
    ctx->pc = 0x185ffcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x186000: 0x4d1023
    ctx->pc = 0x186000u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x186004: 0xa2102a
    ctx->pc = 0x186004u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 2)));
    // 0x186008: 0x3e00008
    ctx->pc = 0x186008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18600Cu;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x185C50u: goto label_185c50;
            case 0x185C58u: goto label_185c58;
            case 0x185CB4u: goto label_185cb4;
            case 0x185CF0u: goto label_185cf0;
            case 0x185CF4u: goto label_185cf4;
            case 0x185D44u: goto label_185d44;
            case 0x185D4Cu: goto label_185d4c;
            case 0x185DA0u: goto label_185da0;
            case 0x185DA8u: goto label_185da8;
            case 0x185DC8u: goto label_185dc8;
            case 0x185E00u: goto label_185e00;
            case 0x185E10u: goto label_185e10;
            case 0x185E50u: goto label_185e50;
            case 0x185E54u: goto label_185e54;
            case 0x185E60u: goto label_185e60;
            case 0x185E74u: goto label_185e74;
            case 0x185ECCu: goto label_185ecc;
            case 0x185EE0u: goto label_185ee0;
            case 0x185EECu: goto label_185eec;
            case 0x185EF4u: goto label_185ef4;
            case 0x185F40u: goto label_185f40;
            case 0x185F44u: goto label_185f44;
            case 0x185F80u: goto label_185f80;
            case 0x185F88u: goto label_185f88;
            case 0x185FACu: goto label_185fac;
            case 0x185FD8u: goto label_185fd8;
            case 0x185FE0u: goto label_185fe0;
            case 0x185FF4u: goto label_185ff4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x186010u;
}
