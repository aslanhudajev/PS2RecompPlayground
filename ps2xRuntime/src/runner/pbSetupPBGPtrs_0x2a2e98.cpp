#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbSetupPBGPtrs
// Address: 0x2a2e98 - 0x2a2f70
void pbSetupPBGPtrs_0x2a2e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a2e98u;

    // 0x2a2e98: 0x3c04003c
    ctx->pc = 0x2a2e98u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2a2e9c: 0x3c030036
    ctx->pc = 0x2a2e9cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x2a2ea0: 0x2463def0
    ctx->pc = 0x2a2ea0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294958832));
    // 0x2a2ea4: 0x8c620008
    ctx->pc = 0x2a2ea4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2a2ea8: 0xac824204
    ctx->pc = 0x2a2ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16900), GPR_U32(ctx, 2));
    // 0x2a2eac: 0x3c04003c
    ctx->pc = 0x2a2eacu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2a2eb0: 0x8c62000c
    ctx->pc = 0x2a2eb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2a2eb4: 0xac824208
    ctx->pc = 0x2a2eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16904), GPR_U32(ctx, 2));
    // 0x2a2eb8: 0x3c04003c
    ctx->pc = 0x2a2eb8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2a2ebc: 0x8c620010
    ctx->pc = 0x2a2ebcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a2ec0: 0xac82420c
    ctx->pc = 0x2a2ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16908), GPR_U32(ctx, 2));
    // 0x2a2ec4: 0x3c04003c
    ctx->pc = 0x2a2ec4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2a2ec8: 0x8c620014
    ctx->pc = 0x2a2ec8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2a2ecc: 0xac824210
    ctx->pc = 0x2a2eccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16912), GPR_U32(ctx, 2));
    // 0x2a2ed0: 0x3c04003c
    ctx->pc = 0x2a2ed0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2a2ed4: 0x8c620018
    ctx->pc = 0x2a2ed4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2a2ed8: 0xac824214
    ctx->pc = 0x2a2ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16916), GPR_U32(ctx, 2));
    // 0x2a2edc: 0x3c04003c
    ctx->pc = 0x2a2edcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2a2ee0: 0x8c62001c
    ctx->pc = 0x2a2ee0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2a2ee4: 0xac824218
    ctx->pc = 0x2a2ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16920), GPR_U32(ctx, 2));
    // 0x2a2ee8: 0x3c04003c
    ctx->pc = 0x2a2ee8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2a2eec: 0x8c620020
    ctx->pc = 0x2a2eecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2a2ef0: 0xac82421c
    ctx->pc = 0x2a2ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16924), GPR_U32(ctx, 2));
    // 0x2a2ef4: 0x3c04003c
    ctx->pc = 0x2a2ef4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2a2ef8: 0x8c620024
    ctx->pc = 0x2a2ef8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2a2efc: 0xac824220
    ctx->pc = 0x2a2efcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16928), GPR_U32(ctx, 2));
    // 0x2a2f00: 0x3c04003c
    ctx->pc = 0x2a2f00u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2a2f04: 0x8c620028
    ctx->pc = 0x2a2f04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2a2f08: 0xac824224
    ctx->pc = 0x2a2f08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16932), GPR_U32(ctx, 2));
    // 0x2a2f0c: 0x3c04003c
    ctx->pc = 0x2a2f0cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2a2f10: 0x8c62002c
    ctx->pc = 0x2a2f10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2a2f14: 0xac824228
    ctx->pc = 0x2a2f14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16936), GPR_U32(ctx, 2));
    // 0x2a2f18: 0x3c04003c
    ctx->pc = 0x2a2f18u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2a2f1c: 0x8c620030
    ctx->pc = 0x2a2f1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2a2f20: 0xac82422c
    ctx->pc = 0x2a2f20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16940), GPR_U32(ctx, 2));
    // 0x2a2f24: 0x3c04003c
    ctx->pc = 0x2a2f24u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2a2f28: 0x8c620034
    ctx->pc = 0x2a2f28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2a2f2c: 0xac824230
    ctx->pc = 0x2a2f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16944), GPR_U32(ctx, 2));
    // 0x2a2f30: 0x3c04003c
    ctx->pc = 0x2a2f30u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2a2f34: 0x8c620038
    ctx->pc = 0x2a2f34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2a2f38: 0xac824234
    ctx->pc = 0x2a2f38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16948), GPR_U32(ctx, 2));
    // 0x2a2f3c: 0x3c04003c
    ctx->pc = 0x2a2f3cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2a2f40: 0x8c62003c
    ctx->pc = 0x2a2f40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x2a2f44: 0xac824238
    ctx->pc = 0x2a2f44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16952), GPR_U32(ctx, 2));
    // 0x2a2f48: 0x3c04003c
    ctx->pc = 0x2a2f48u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2a2f4c: 0x8c620040
    ctx->pc = 0x2a2f4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2a2f50: 0xac82423c
    ctx->pc = 0x2a2f50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16956), GPR_U32(ctx, 2));
    // 0x2a2f54: 0x3c04003c
    ctx->pc = 0x2a2f54u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2a2f58: 0x8c620044
    ctx->pc = 0x2a2f58u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x2a2f5c: 0xac824240
    ctx->pc = 0x2a2f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16960), GPR_U32(ctx, 2));
    // 0x2a2f60: 0x3c04003c
    ctx->pc = 0x2a2f60u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
    // 0x2a2f64: 0x8c620048
    ctx->pc = 0x2a2f64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2a2f68: 0x3e00008
    ctx->pc = 0x2A2F68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2F6Cu;
        WRITE32(ADD32(GPR_U32(ctx, 4), 16964), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A2F70u;
}
