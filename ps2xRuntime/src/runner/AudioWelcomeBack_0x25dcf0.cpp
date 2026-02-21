#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioWelcomeBack
// Address: 0x25dcf0 - 0x25dd50
void AudioWelcomeBack_0x25dcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25dcf0u;

    // 0x25dcf0: 0x80382d
    ctx->pc = 0x25dcf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dcf4: 0x3c030034
    ctx->pc = 0x25dcf4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x25dcf8: 0x2463d330
    ctx->pc = 0x25dcf8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294955824));
    // 0x25dcfc: 0x71080
    ctx->pc = 0x25dcfcu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 7), 2));
    // 0x25dd00: 0x431021
    ctx->pc = 0x25dd00u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25dd04: 0x10a00009
    ctx->pc = 0x25DD04u;
    {
        const bool branch_taken_0x25dd04 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x25DD08u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
        if (branch_taken_0x25dd04) {
            ctx->pc = 0x25DD2Cu;
            goto label_25dd2c;
        }
    }
    ctx->pc = 0x25DD0Cu;
    // 0x25dd0c: 0x3c014120
    ctx->pc = 0x25dd0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x25dd10: 0x44816000
    ctx->pc = 0x25dd10u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25dd14: 0x3c04000c
    ctx->pc = 0x25dd14u;
    SET_GPR_U32(ctx, 4, ((uint32_t)12 << 16));
    // 0x25dd18: 0x34840084
    ctx->pc = 0x25dd18u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 132));
    // 0x25dd1c: 0xe0282d
    ctx->pc = 0x25dd1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dd20: 0x2406ffff
    ctx->pc = 0x25dd20u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25dd24: 0x8097672
    ctx->pc = 0x25DD24u;
    ctx->pc = 0x25DD28u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x25D9C8u;
    AudioWithName_0x25d9c8(rdram, ctx, runtime); return;
    ctx->pc = 0x25DD2Cu;
label_25dd2c:
    // 0x25dd2c: 0x3c04000c
    ctx->pc = 0x25dd2cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)12 << 16));
    // 0x25dd30: 0x34840084
    ctx->pc = 0x25dd30u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 132));
    // 0x25dd34: 0x240500e0
    ctx->pc = 0x25dd34u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25dd38: 0x3c01bf80
    ctx->pc = 0x25dd38u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x25dd3c: 0x44816000
    ctx->pc = 0x25dd3cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25dd40: 0x3c014120
    ctx->pc = 0x25dd40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x25dd44: 0x44816800
    ctx->pc = 0x25dd44u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x25dd48: 0x8097116
    ctx->pc = 0x25DD48u;
    ctx->pc = 0x25DD4Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x25C458u;
    AudioVQueAdd4_0x25c458(rdram, ctx, runtime); return;
    ctx->pc = 0x25DD50u;
}
