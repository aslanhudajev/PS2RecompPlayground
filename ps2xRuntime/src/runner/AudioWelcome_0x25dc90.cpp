#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioWelcome
// Address: 0x25dc90 - 0x25dcf0
void AudioWelcome_0x25dc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25dc90u;

    // 0x25dc90: 0x80382d
    ctx->pc = 0x25dc90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dc94: 0x3c030034
    ctx->pc = 0x25dc94u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x25dc98: 0x2463d330
    ctx->pc = 0x25dc98u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294955824));
    // 0x25dc9c: 0x71080
    ctx->pc = 0x25dc9cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
    // 0x25dca0: 0x431021
    ctx->pc = 0x25dca0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25dca4: 0x10a00009
    ctx->pc = 0x25DCA4u;
    {
        const bool branch_taken_0x25dca4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x25DCA8u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x25dca4) {
            ctx->pc = 0x25DCCCu;
            goto label_25dccc;
        }
    }
    ctx->pc = 0x25DCACu;
    // 0x25dcac: 0x3c014120
    ctx->pc = 0x25dcacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x25dcb0: 0x44816000
    ctx->pc = 0x25dcb0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25dcb4: 0x3c04000c
    ctx->pc = 0x25dcb4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)12 << 16));
    // 0x25dcb8: 0x34840083
    ctx->pc = 0x25dcb8u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 131));
    // 0x25dcbc: 0xe0282d
    ctx->pc = 0x25dcbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dcc0: 0x2406ffff
    ctx->pc = 0x25dcc0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25dcc4: 0x8097672
    ctx->pc = 0x25DCC4u;
    ctx->pc = 0x25DCC8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x25D9C8u;
    AudioWithName_0x25d9c8(rdram, ctx, runtime); return;
    ctx->pc = 0x25DCCCu;
label_25dccc:
    // 0x25dccc: 0x3c04000c
    ctx->pc = 0x25dcccu;
    SET_GPR_U32(ctx, 4, ((uint32_t)12 << 16));
    // 0x25dcd0: 0x34840083
    ctx->pc = 0x25dcd0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 131));
    // 0x25dcd4: 0x240500e0
    ctx->pc = 0x25dcd4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25dcd8: 0x3c01bf80
    ctx->pc = 0x25dcd8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x25dcdc: 0x44816000
    ctx->pc = 0x25dcdcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25dce0: 0x3c014120
    ctx->pc = 0x25dce0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x25dce4: 0x44816800
    ctx->pc = 0x25dce4u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x25dce8: 0x8097116
    ctx->pc = 0x25DCE8u;
    ctx->pc = 0x25DCECu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x25C458u;
    AudioVQueAdd4_0x25c458(rdram, ctx, runtime); return;
    ctx->pc = 0x25DCF0u;
}
