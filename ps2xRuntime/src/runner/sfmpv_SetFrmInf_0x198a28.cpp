#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfmpv_SetFrmInf
// Address: 0x198a28 - 0x198ab8
void sfmpv_SetFrmInf_0x198a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfmpv_SetFrmInf");


    ctx->pc = 0x198a28u;

    // 0x198a28: 0x8c823de8
    ctx->pc = 0x198a28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 15848)));
    // 0x198a2c: 0x24080388
    ctx->pc = 0x198a2cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 904));
    // 0x198a30: 0x24830d34
    ctx->pc = 0x198a30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 3380));
    // 0x198a34: 0x24090001
    ctx->pc = 0x198a34u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 1));
    // 0x198a38: 0x481018
    ctx->pc = 0x198a38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x198a3c: 0xac853768
    ctx->pc = 0x198a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 14184), GPR_U32(ctx, 5));
    // 0x198a40: 0x8c8a0038
    ctx->pc = 0x198a40u;
    SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x198a44: 0x24a7001c
    ctx->pc = 0x198a44u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 5), 28));
    // 0x198a48: 0x8ce80018
    ctx->pc = 0x198a48u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x198a4c: 0x8cab0004
    ctx->pc = 0x198a4cu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x198a50: 0x621821
    ctx->pc = 0x198a50u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x198a54: 0xac690020
    ctx->pc = 0x198a54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 9));
    // 0x198a58: 0x24640024
    ctx->pc = 0x198a58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 36));
    // 0x198a5c: 0xacc40000
    ctx->pc = 0x198a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x198a60: 0x8ca2001c
    ctx->pc = 0x198a60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x198a64: 0xac880010
    ctx->pc = 0x198a64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 8));
    // 0x198a68: 0xac620024
    ctx->pc = 0x198a68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x198a6c: 0xac8a001c
    ctx->pc = 0x198a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 10));
    // 0x198a70: 0x8ce30004
    ctx->pc = 0x198a70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x198a74: 0xac8b0020
    ctx->pc = 0x198a74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 11));
    // 0x198a78: 0xac830004
    ctx->pc = 0x198a78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x198a7c: 0x8ce20008
    ctx->pc = 0x198a7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x198a80: 0xac820008
    ctx->pc = 0x198a80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x198a84: 0x8ce3000c
    ctx->pc = 0x198a84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x198a88: 0xac83000c
    ctx->pc = 0x198a88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x198a8c: 0x8ca20008
    ctx->pc = 0x198a8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x198a90: 0xac820014
    ctx->pc = 0x198a90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x198a94: 0x8ca3000c
    ctx->pc = 0x198a94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x198a98: 0xac830018
    ctx->pc = 0x198a98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x198a9c: 0x8ca20010
    ctx->pc = 0x198a9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x198aa0: 0xac820024
    ctx->pc = 0x198aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x198aa4: 0x8ca30014
    ctx->pc = 0x198aa4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x198aa8: 0xac830028
    ctx->pc = 0x198aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x198aac: 0x8ca20018
    ctx->pc = 0x198aacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x198ab0: 0x3e00008
    ctx->pc = 0x198AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198AB4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x198AB8u;
}
