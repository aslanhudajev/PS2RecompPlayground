#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPVMC_OneRef4
// Address: 0x188b98 - 0x188d34
void MPVMC_OneRef4_0x188b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPVMC_OneRef4");


    ctx->pc = 0x188b98u;

    // 0x188b98: 0x8c850014
    ctx->pc = 0x188b98u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x188b9c: 0x240e0007
    ctx->pc = 0x188b9cu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 0), 7));
    // 0x188ba0: 0x8c820018
    ctx->pc = 0x188ba0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x188ba4: 0x8c830010
    ctx->pc = 0x188ba4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x188ba8: 0x24aa0001
    ctx->pc = 0x188ba8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 5), 1));
    // 0x188bac: 0x8c890008
    ctx->pc = 0x188bacu;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x188bb0: 0x24480001
    ctx->pc = 0x188bb0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 1));
    // 0x188bb4: 0x246dfff8
    ctx->pc = 0x188bb4u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x188bb8: 0x244c0007
    ctx->pc = 0x188bb8u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 2), 7));
    // 0x188bbc: 0x24ab0007
    ctx->pc = 0x188bbcu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 5), 7));
label_188bc0:
    // 0x188bc0: 0x91470000
    ctx->pc = 0x188bc0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x188bc4: 0x25ceffff
    ctx->pc = 0x188bc4u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x188bc8: 0x9162fff9
    ctx->pc = 0x188bc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 4294967289)));
    // 0x188bcc: 0x9183fff9
    ctx->pc = 0x188bccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 4294967289)));
    // 0x188bd0: 0x24e50002
    ctx->pc = 0x188bd0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 7), 2));
    // 0x188bd4: 0x91060000
    ctx->pc = 0x188bd4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x188bd8: 0x24420002
    ctx->pc = 0x188bd8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x188bdc: 0x81440001
    ctx->pc = 0x188bdcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x188be0: 0x671821
    ctx->pc = 0x188be0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x188be4: 0x431021
    ctx->pc = 0x188be4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x188be8: 0x81070001
    ctx->pc = 0x188be8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x188bec: 0x308400ff
    ctx->pc = 0x188becu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 255));
    // 0x188bf0: 0x461021
    ctx->pc = 0x188bf0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x188bf4: 0xc43021
    ctx->pc = 0x188bf4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x188bf8: 0x21083
    ctx->pc = 0x188bf8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x188bfc: 0xa1220000
    ctx->pc = 0x188bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x188c00: 0xa62821
    ctx->pc = 0x188c00u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x188c04: 0x30e700ff
    ctx->pc = 0x188c04u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 7), 255));
    // 0x188c08: 0x24840002
    ctx->pc = 0x188c08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 2));
    // 0x188c0c: 0xa72821
    ctx->pc = 0x188c0cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x188c10: 0x81420002
    ctx->pc = 0x188c10u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x188c14: 0x81030002
    ctx->pc = 0x188c14u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x188c18: 0x52883
    ctx->pc = 0x188c18u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x188c1c: 0xa1250001
    ctx->pc = 0x188c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x188c20: 0x304200ff
    ctx->pc = 0x188c20u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x188c24: 0xe23821
    ctx->pc = 0x188c24u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x188c28: 0x306300ff
    ctx->pc = 0x188c28u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x188c2c: 0x81450003
    ctx->pc = 0x188c2cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 3)));
    // 0x188c30: 0x872021
    ctx->pc = 0x188c30u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x188c34: 0x81070003
    ctx->pc = 0x188c34u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x188c38: 0x832021
    ctx->pc = 0x188c38u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x188c3c: 0x30a500ff
    ctx->pc = 0x188c3cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 255));
    // 0x188c40: 0x42083
    ctx->pc = 0x188c40u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x188c44: 0x651821
    ctx->pc = 0x188c44u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x188c48: 0x24420002
    ctx->pc = 0x188c48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x188c4c: 0xa1240002
    ctx->pc = 0x188c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x188c50: 0x431021
    ctx->pc = 0x188c50u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x188c54: 0x30e700ff
    ctx->pc = 0x188c54u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 7), 255));
    // 0x188c58: 0x24a50002
    ctx->pc = 0x188c58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 2));
    // 0x188c5c: 0x471021
    ctx->pc = 0x188c5cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x188c60: 0x81430004
    ctx->pc = 0x188c60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x188c64: 0x81040004
    ctx->pc = 0x188c64u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x188c68: 0x21083
    ctx->pc = 0x188c68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x188c6c: 0xa1220003
    ctx->pc = 0x188c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x188c70: 0x306300ff
    ctx->pc = 0x188c70u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x188c74: 0xe33821
    ctx->pc = 0x188c74u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x188c78: 0x308400ff
    ctx->pc = 0x188c78u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 255));
    // 0x188c7c: 0x81460005
    ctx->pc = 0x188c7cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 5)));
    // 0x188c80: 0xa72821
    ctx->pc = 0x188c80u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x188c84: 0x81070005
    ctx->pc = 0x188c84u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 5)));
    // 0x188c88: 0xa42821
    ctx->pc = 0x188c88u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x188c8c: 0x30c600ff
    ctx->pc = 0x188c8cu;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 6), 255));
    // 0x188c90: 0x52883
    ctx->pc = 0x188c90u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 2));
    // 0x188c94: 0x862021
    ctx->pc = 0x188c94u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x188c98: 0x24630002
    ctx->pc = 0x188c98u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 2));
    // 0x188c9c: 0xa1250004
    ctx->pc = 0x188c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4), (uint8_t)GPR_U32(ctx, 5));
    // 0x188ca0: 0x641821
    ctx->pc = 0x188ca0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x188ca4: 0x30e700ff
    ctx->pc = 0x188ca4u;
    SET_GPR_U32(ctx, 7, AND32(GPR_U32(ctx, 7), 255));
    // 0x188ca8: 0x24c60002
    ctx->pc = 0x188ca8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 2));
    // 0x188cac: 0x671821
    ctx->pc = 0x188cacu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x188cb0: 0x81620000
    ctx->pc = 0x188cb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x188cb4: 0x81850000
    ctx->pc = 0x188cb4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x188cb8: 0x31883
    ctx->pc = 0x188cb8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x188cbc: 0xa1230005
    ctx->pc = 0x188cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x188cc0: 0x256b0008
    ctx->pc = 0x188cc0u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 8));
    // 0x188cc4: 0x258c0008
    ctx->pc = 0x188cc4u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 8));
    // 0x188cc8: 0x304200ff
    ctx->pc = 0x188cc8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x188ccc: 0x8163fff9
    ctx->pc = 0x188cccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 4294967289)));
    // 0x188cd0: 0x30a500ff
    ctx->pc = 0x188cd0u;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), 255));
    // 0x188cd4: 0x8184fff9
    ctx->pc = 0x188cd4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 12), 4294967289)));
    // 0x188cd8: 0xe23821
    ctx->pc = 0x188cd8u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x188cdc: 0x306300ff
    ctx->pc = 0x188cdcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x188ce0: 0x24420002
    ctx->pc = 0x188ce0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2));
    // 0x188ce4: 0xa31821
    ctx->pc = 0x188ce4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x188ce8: 0xc73021
    ctx->pc = 0x188ce8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x188cec: 0x431021
    ctx->pc = 0x188cecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x188cf0: 0x308400ff
    ctx->pc = 0x188cf0u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 255));
    // 0x188cf4: 0x441021
    ctx->pc = 0x188cf4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x188cf8: 0xc53021
    ctx->pc = 0x188cf8u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x188cfc: 0x63083
    ctx->pc = 0x188cfcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x188d00: 0x21083
    ctx->pc = 0x188d00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x188d04: 0xa1260006
    ctx->pc = 0x188d04u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 6), (uint8_t)GPR_U32(ctx, 6));
    // 0x188d08: 0x254a0008
    ctx->pc = 0x188d08u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 8));
    // 0x188d0c: 0xa1220007
    ctx->pc = 0x188d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x188d10: 0x25080008
    ctx->pc = 0x188d10u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 8));
    // 0x188d14: 0x16d5821
    ctx->pc = 0x188d14u;
    SET_GPR_U32(ctx, 11, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x188d18: 0x14d5021
    ctx->pc = 0x188d18u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
    // 0x188d1c: 0x18d6021
    ctx->pc = 0x188d1cu;
    SET_GPR_U32(ctx, 12, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x188d20: 0x10d4021
    ctx->pc = 0x188d20u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 13)));
    // 0x188d24: 0x5c1ffa6
    ctx->pc = 0x188D24u;
    {
        const bool branch_taken_0x188d24 = (GPR_S32(ctx, 14) >= 0);
        ctx->pc = 0x188D28u;
        SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 8));
        if (branch_taken_0x188d24) {
            ctx->pc = 0x188BC0u;
            goto label_188bc0;
        }
    }
    ctx->pc = 0x188D2Cu;
    // 0x188d2c: 0x3e00008
    ctx->pc = 0x188D2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x188BC0u: goto label_188bc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x188D34u;
}
