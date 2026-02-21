#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioGolemBorn
// Address: 0x25fc38 - 0x25fc50
void AudioGolemBorn_0x25fc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25fc38u;

    // 0x25fc38: 0x80282d
    ctx->pc = 0x25fc38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25fc3c: 0x3c020034
    ctx->pc = 0x25fc3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25fc40: 0x8c44dab4
    ctx->pc = 0x25fc40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294957748)));
    // 0x25fc44: 0x240600e0
    ctx->pc = 0x25fc44u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x25fc48: 0x8088a26
    ctx->pc = 0x25FC48u;
    ctx->pc = 0x25FC4Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 13));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x25FC50u;
}
