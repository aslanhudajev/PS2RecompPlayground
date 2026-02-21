#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AudioLightningShield
// Address: 0x260608 - 0x260630
void AudioLightningShield_0x260608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x260608u;

    // 0x260608: 0x24022b00
    ctx->pc = 0x260608u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x26060c: 0x822818
    ctx->pc = 0x26060cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x260610: 0x3c020032
    ctx->pc = 0x260610u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x260614: 0x24421be0
    ctx->pc = 0x260614u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7136));
    // 0x260618: 0xa22821
    ctx->pc = 0x260618u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x26061c: 0x2404004b
    ctx->pc = 0x26061cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 75));
    // 0x260620: 0x24a50040
    ctx->pc = 0x260620u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    // 0x260624: 0x240600e0
    ctx->pc = 0x260624u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x260628: 0x8088a26
    ctx->pc = 0x260628u;
    ctx->pc = 0x26062Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 40));
    ctx->pc = 0x222898u;
    AudioSFX_0x222898(rdram, ctx, runtime); return;
    ctx->pc = 0x260630u;
}
