#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setVoiceVolume__13SoundMgrClassFi
// Address: 0x2181d0 - 0x2181ec
void setVoiceVolume__13SoundMgrClassFi_0x2181d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setVoiceVolume__13SoundMgrClassFi");


    ctx->pc = 0x2181d0u;

    // 0x2181d0: 0x27bdfff0
    ctx->pc = 0x2181d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2181d4: 0x7fbf0000
    ctx->pc = 0x2181d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2181d8: 0xc07a6c0
    ctx->pc = 0x2181D8u;
    SET_GPR_U32(ctx, 31, 0x2181E0u);
    ctx->pc = 0x2181DCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937860)));
    ctx->pc = 0x1E9B00u;
    {
        const uint32_t __entryPc = ctx->pc;
        apADXT_SetOutVol__FP9_adx_talki_0x1e9b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2181E0u; }
        else if (ctx->pc != 0x2181E0u) { ctx->pc = 0x2181E0u; }
    }
    if (ctx->pc != 0x2181E0u) { return; }
    ctx->pc = 0x2181E0u;
    // 0x2181e0: 0x7bbf0000
    ctx->pc = 0x2181e0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2181e4: 0x3e00008
    ctx->pc = 0x2181E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2181E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2181ECu;
}
