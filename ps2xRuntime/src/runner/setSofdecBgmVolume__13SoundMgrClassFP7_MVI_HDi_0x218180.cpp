#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: setSofdecBgmVolume__13SoundMgrClassFP7_MVI_HDi
// Address: 0x218180 - 0x2181a0
void setSofdecBgmVolume__13SoundMgrClassFP7_MVI_HDi_0x218180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("setSofdecBgmVolume__13SoundMgrClassFP7_MVI_HDi");


    ctx->pc = 0x218180u;

    // 0x218180: 0x27bdfff0
    ctx->pc = 0x218180u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x218184: 0x7fbf0000
    ctx->pc = 0x218184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x218188: 0x8ca40000
    ctx->pc = 0x218188u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21818c: 0xc07a6f4
    ctx->pc = 0x21818Cu;
    SET_GPR_U32(ctx, 31, 0x218194u);
    ctx->pc = 0x218190u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E9BD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        apmwPlySetOutVol__FP10MW_PLY_OBJi_0x1e9bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218194u; }
        else if (ctx->pc != 0x218194u) { ctx->pc = 0x218194u; }
    }
    if (ctx->pc != 0x218194u) { return; }
    ctx->pc = 0x218194u;
    // 0x218194: 0x7bbf0000
    ctx->pc = 0x218194u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218198: 0x3e00008
    ctx->pc = 0x218198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21819Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2181A0u;
}
