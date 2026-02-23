#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: VOICEPLAY__13EventCtrlTaskFv
// Address: 0x1e33b0 - 0x1e3410
void VOICEPLAY__13EventCtrlTaskFv_0x1e33b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("VOICEPLAY__13EventCtrlTaskFv");


    ctx->pc = 0x1e33b0u;

    // 0x1e33b0: 0x27bdffe0
    ctx->pc = 0x1e33b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e33b4: 0x7fbf0010
    ctx->pc = 0x1e33b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e33b8: 0x7fb00000
    ctx->pc = 0x1e33b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e33bc: 0x8c83000c
    ctx->pc = 0x1e33bcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e33c0: 0x70808628
    ctx->pc = 0x1e33c0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e33c4: 0x3c020051
    ctx->pc = 0x1e33c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e33c8: 0x70003628
    ctx->pc = 0x1e33c8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e33cc: 0x70003e28
    ctx->pc = 0x1e33ccu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e33d0: 0x24080040
    ctx->pc = 0x1e33d0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e33d4: 0x8c650014
    ctx->pc = 0x1e33d4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1e33d8: 0xc086018
    ctx->pc = 0x1E33D8u;
    SET_GPR_U32(ctx, 31, 0x1E33E0u);
    ctx->pc = 0x1E33DCu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E33E0u; }
        else if (ctx->pc != 0x1E33E0u) { ctx->pc = 0x1E33E0u; }
    }
    if (ctx->pc != 0x1E33E0u) { return; }
    ctx->pc = 0x1E33E0u;
    // 0x1e33e0: 0x8e03000c
    ctx->pc = 0x1e33e0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e33e4: 0x3c020051
    ctx->pc = 0x1e33e4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e33e8: 0x8c65000c
    ctx->pc = 0x1e33e8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1e33ec: 0xc086074
    ctx->pc = 0x1E33ECu;
    SET_GPR_U32(ctx, 31, 0x1E33F4u);
    ctx->pc = 0x1E33F0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    ctx->pc = 0x2181D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        setVoiceVolume__13SoundMgrClassFi_0x2181d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E33F4u; }
        else if (ctx->pc != 0x1E33F4u) { ctx->pc = 0x1E33F4u; }
    }
    if (ctx->pc != 0x1E33F4u) { return; }
    ctx->pc = 0x1E33F4u;
    // 0x1e33f4: 0x8e03000c
    ctx->pc = 0x1e33f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e33f8: 0x24630018
    ctx->pc = 0x1e33f8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 24));
    // 0x1e33fc: 0xae03000c
    ctx->pc = 0x1e33fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e3400: 0x7bbf0010
    ctx->pc = 0x1e3400u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3404: 0x7bb00000
    ctx->pc = 0x1e3404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3408: 0x3e00008
    ctx->pc = 0x1E3408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E340Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3410u;
}
