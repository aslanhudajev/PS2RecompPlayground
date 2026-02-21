#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioPlayerXray
// Address: 0x25ee18 - 0x25ee40
void AudioPlayerXray_0x25ee18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25ee18u;

    // 0x25ee18: 0x24022b00
    ctx->pc = 0x25ee18u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x25ee1c: 0x822818
    ctx->pc = 0x25ee1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x25ee20: 0x3c020032
    ctx->pc = 0x25ee20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25ee24: 0x24421be0
    ctx->pc = 0x25ee24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7136));
    // 0x25ee28: 0xa22821
    ctx->pc = 0x25ee28u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x25ee2c: 0x24040051
    ctx->pc = 0x25ee2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 81));
    // 0x25ee30: 0x24a50040
    ctx->pc = 0x25ee30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    // 0x25ee34: 0x2406007f
    ctx->pc = 0x25ee34u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 127));
    // 0x25ee38: 0x8088a26
    ctx->pc = 0x25EE38u;
    ctx->pc = 0x25EE3Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 60));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x25EE40u;
}
