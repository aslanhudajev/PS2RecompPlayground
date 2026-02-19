#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioRuneIsNear
// Address: 0x25de00 - 0x25de40
void AudioRuneIsNear_0x25de00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25de00u;

    // 0x25de00: 0x27bdfff0
    ctx->pc = 0x25de00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25de04: 0xffbf0000
    ctx->pc = 0x25de04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25de08: 0xc088648
    ctx->pc = 0x25DE08u;
    SET_GPR_U32(ctx, 31, 0x25DE10u);
    ctx->pc = 0x221920u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioAng_0x221920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25DE10u; }
    }
    if (ctx->pc != 0x25DE10u) { return; }
    ctx->pc = 0x25DE10u;
    // 0x25de10: 0x3c040002
    ctx->pc = 0x25de10u;
    SET_GPR_U32(ctx, 4, ((uint32_t)2 << 16));
    // 0x25de14: 0x34840034
    ctx->pc = 0x25de14u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 52));
    // 0x25de18: 0x240500e0
    ctx->pc = 0x25de18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25de1c: 0x40302d
    ctx->pc = 0x25de1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25de20: 0x24070002
    ctx->pc = 0x25de20u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2));
    // 0x25de24: 0x3c01bf80
    ctx->pc = 0x25de24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49024 << 16));
    // 0x25de28: 0x44816000
    ctx->pc = 0x25de28u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x25de2c: 0x3c014040
    ctx->pc = 0x25de2cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16448 << 16));
    // 0x25de30: 0x44816800
    ctx->pc = 0x25de30u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 1);
    // 0x25de34: 0xdfbf0000
    ctx->pc = 0x25de34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25de38: 0x8097116
    ctx->pc = 0x25DE38u;
    ctx->pc = 0x25DE3Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x25C458u;
    AudioVQueAdd4_0x25c458(rdram, ctx, runtime); return;
    ctx->pc = 0x25DE40u;
}
