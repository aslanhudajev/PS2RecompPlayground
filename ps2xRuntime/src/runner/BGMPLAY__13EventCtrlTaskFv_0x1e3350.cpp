#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: BGMPLAY__13EventCtrlTaskFv
// Address: 0x1e3350 - 0x1e33b0
void BGMPLAY__13EventCtrlTaskFv_0x1e3350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("BGMPLAY__13EventCtrlTaskFv");


    ctx->pc = 0x1e3350u;

    // 0x1e3350: 0x27bdffe0
    ctx->pc = 0x1e3350u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3354: 0x7fbf0010
    ctx->pc = 0x1e3354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e3358: 0x7fb00000
    ctx->pc = 0x1e3358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e335c: 0x8c83000c
    ctx->pc = 0x1e335cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3360: 0x70808628
    ctx->pc = 0x1e3360u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e3364: 0x3c020051
    ctx->pc = 0x1e3364u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e3368: 0x70003628
    ctx->pc = 0x1e3368u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e336c: 0x70003e28
    ctx->pc = 0x1e336cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e3370: 0x24080040
    ctx->pc = 0x1e3370u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e3374: 0x8c650014
    ctx->pc = 0x1e3374u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1e3378: 0xc086018
    ctx->pc = 0x1E3378u;
    SET_GPR_U32(ctx, 31, 0x1E3380u);
    ctx->pc = 0x1E337Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3380u; }
        else if (ctx->pc != 0x1E3380u) { ctx->pc = 0x1E3380u; }
    }
    if (ctx->pc != 0x1E3380u) { return; }
    ctx->pc = 0x1E3380u;
    // 0x1e3380: 0x8e03000c
    ctx->pc = 0x1e3380u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e3384: 0x3c020051
    ctx->pc = 0x1e3384u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e3388: 0x8c65000c
    ctx->pc = 0x1e3388u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1e338c: 0xc086058
    ctx->pc = 0x1E338Cu;
    SET_GPR_U32(ctx, 31, 0x1E3394u);
    ctx->pc = 0x1E3390u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    ctx->pc = 0x218160u;
    {
        const uint32_t __entryPc = ctx->pc;
        setBgmVolume__13SoundMgrClassFi_0x218160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3394u; }
        else if (ctx->pc != 0x1E3394u) { ctx->pc = 0x1E3394u; }
    }
    if (ctx->pc != 0x1E3394u) { return; }
    ctx->pc = 0x1E3394u;
    // 0x1e3394: 0x8e03000c
    ctx->pc = 0x1e3394u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e3398: 0x24630018
    ctx->pc = 0x1e3398u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 24));
    // 0x1e339c: 0xae03000c
    ctx->pc = 0x1e339cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e33a0: 0x7bbf0010
    ctx->pc = 0x1e33a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e33a4: 0x7bb00000
    ctx->pc = 0x1e33a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e33a8: 0x3e00008
    ctx->pc = 0x1E33A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E33ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E33B0u;
}
