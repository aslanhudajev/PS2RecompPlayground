#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: mix
// Address: 0x2d4940 - 0x2d4ad0
void mix_0x2d4940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d4940u;

    // 0x2d4940: 0x8c830000
    ctx->pc = 0x2d4940u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d4944: 0x8ca20000
    ctx->pc = 0x2d4944u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d4948: 0x621823
    ctx->pc = 0x2d4948u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d494c: 0xac830000
    ctx->pc = 0x2d494cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2d4950: 0x8cc20000
    ctx->pc = 0x2d4950u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d4954: 0x621823
    ctx->pc = 0x2d4954u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d4958: 0xac830000
    ctx->pc = 0x2d4958u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2d495c: 0x8cc20000
    ctx->pc = 0x2d495cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d4960: 0x21342
    ctx->pc = 0x2d4960u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 13));
    // 0x2d4964: 0x431026
    ctx->pc = 0x2d4964u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d4968: 0xac820000
    ctx->pc = 0x2d4968u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2d496c: 0x8ca30000
    ctx->pc = 0x2d496cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d4970: 0x8cc20000
    ctx->pc = 0x2d4970u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d4974: 0x621823
    ctx->pc = 0x2d4974u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d4978: 0xaca30000
    ctx->pc = 0x2d4978u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2d497c: 0x8c820000
    ctx->pc = 0x2d497cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d4980: 0x621823
    ctx->pc = 0x2d4980u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d4984: 0xaca30000
    ctx->pc = 0x2d4984u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2d4988: 0x8c820000
    ctx->pc = 0x2d4988u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d498c: 0x21200
    ctx->pc = 0x2d498cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x2d4990: 0x431026
    ctx->pc = 0x2d4990u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d4994: 0xaca20000
    ctx->pc = 0x2d4994u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2d4998: 0x8cc30000
    ctx->pc = 0x2d4998u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d499c: 0x8c820000
    ctx->pc = 0x2d499cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d49a0: 0x621823
    ctx->pc = 0x2d49a0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d49a4: 0xacc30000
    ctx->pc = 0x2d49a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2d49a8: 0x8ca20000
    ctx->pc = 0x2d49a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d49ac: 0x621823
    ctx->pc = 0x2d49acu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d49b0: 0xacc30000
    ctx->pc = 0x2d49b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2d49b4: 0x8ca20000
    ctx->pc = 0x2d49b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d49b8: 0x21342
    ctx->pc = 0x2d49b8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 13));
    // 0x2d49bc: 0x431026
    ctx->pc = 0x2d49bcu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d49c0: 0xacc20000
    ctx->pc = 0x2d49c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2d49c4: 0x8c830000
    ctx->pc = 0x2d49c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d49c8: 0x8ca20000
    ctx->pc = 0x2d49c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d49cc: 0x621823
    ctx->pc = 0x2d49ccu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d49d0: 0xac830000
    ctx->pc = 0x2d49d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2d49d4: 0x8cc20000
    ctx->pc = 0x2d49d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d49d8: 0x621823
    ctx->pc = 0x2d49d8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d49dc: 0xac830000
    ctx->pc = 0x2d49dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2d49e0: 0x8cc20000
    ctx->pc = 0x2d49e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d49e4: 0x21302
    ctx->pc = 0x2d49e4u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 12));
    // 0x2d49e8: 0x431026
    ctx->pc = 0x2d49e8u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d49ec: 0xac820000
    ctx->pc = 0x2d49ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2d49f0: 0x8ca30000
    ctx->pc = 0x2d49f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d49f4: 0x8cc20000
    ctx->pc = 0x2d49f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d49f8: 0x621823
    ctx->pc = 0x2d49f8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d49fc: 0xaca30000
    ctx->pc = 0x2d49fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2d4a00: 0x8c820000
    ctx->pc = 0x2d4a00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d4a04: 0x621823
    ctx->pc = 0x2d4a04u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d4a08: 0xaca30000
    ctx->pc = 0x2d4a08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2d4a0c: 0x8c820000
    ctx->pc = 0x2d4a0cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d4a10: 0x21400
    ctx->pc = 0x2d4a10u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x2d4a14: 0x431026
    ctx->pc = 0x2d4a14u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d4a18: 0xaca20000
    ctx->pc = 0x2d4a18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2d4a1c: 0x8cc30000
    ctx->pc = 0x2d4a1cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d4a20: 0x8c820000
    ctx->pc = 0x2d4a20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d4a24: 0x621823
    ctx->pc = 0x2d4a24u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d4a28: 0xacc30000
    ctx->pc = 0x2d4a28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2d4a2c: 0x8ca20000
    ctx->pc = 0x2d4a2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d4a30: 0x621823
    ctx->pc = 0x2d4a30u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d4a34: 0xacc30000
    ctx->pc = 0x2d4a34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2d4a38: 0x8ca20000
    ctx->pc = 0x2d4a38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d4a3c: 0x21142
    ctx->pc = 0x2d4a3cu;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 5));
    // 0x2d4a40: 0x431026
    ctx->pc = 0x2d4a40u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d4a44: 0xacc20000
    ctx->pc = 0x2d4a44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2d4a48: 0x8c830000
    ctx->pc = 0x2d4a48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d4a4c: 0x8ca20000
    ctx->pc = 0x2d4a4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d4a50: 0x621823
    ctx->pc = 0x2d4a50u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d4a54: 0xac830000
    ctx->pc = 0x2d4a54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2d4a58: 0x8cc20000
    ctx->pc = 0x2d4a58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d4a5c: 0x621823
    ctx->pc = 0x2d4a5cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d4a60: 0xac830000
    ctx->pc = 0x2d4a60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2d4a64: 0x8cc20000
    ctx->pc = 0x2d4a64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d4a68: 0x210c2
    ctx->pc = 0x2d4a68u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 3));
    // 0x2d4a6c: 0x431026
    ctx->pc = 0x2d4a6cu;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d4a70: 0xac820000
    ctx->pc = 0x2d4a70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2d4a74: 0x8ca30000
    ctx->pc = 0x2d4a74u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d4a78: 0x8cc20000
    ctx->pc = 0x2d4a78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d4a7c: 0x621823
    ctx->pc = 0x2d4a7cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d4a80: 0xaca30000
    ctx->pc = 0x2d4a80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2d4a84: 0x8c820000
    ctx->pc = 0x2d4a84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d4a88: 0x621823
    ctx->pc = 0x2d4a88u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d4a8c: 0xaca30000
    ctx->pc = 0x2d4a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2d4a90: 0x8c820000
    ctx->pc = 0x2d4a90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d4a94: 0x21280
    ctx->pc = 0x2d4a94u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 10));
    // 0x2d4a98: 0x431026
    ctx->pc = 0x2d4a98u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d4a9c: 0xaca20000
    ctx->pc = 0x2d4a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2d4aa0: 0x8cc30000
    ctx->pc = 0x2d4aa0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d4aa4: 0x8c820000
    ctx->pc = 0x2d4aa4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d4aa8: 0x621823
    ctx->pc = 0x2d4aa8u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d4aac: 0xacc30000
    ctx->pc = 0x2d4aacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2d4ab0: 0x8ca20000
    ctx->pc = 0x2d4ab0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d4ab4: 0x621823
    ctx->pc = 0x2d4ab4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d4ab8: 0xacc30000
    ctx->pc = 0x2d4ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2d4abc: 0x8ca20000
    ctx->pc = 0x2d4abcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d4ac0: 0x213c2
    ctx->pc = 0x2d4ac0u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), 15));
    // 0x2d4ac4: 0x431026
    ctx->pc = 0x2d4ac4u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d4ac8: 0x3e00008
    ctx->pc = 0x2D4AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4ACCu;
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D4AD0u;
}
