#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: FREESNDPK__13EventCtrlTaskFv
// Address: 0x1e3310 - 0x1e3350
void FREESNDPK__13EventCtrlTaskFv_0x1e3310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("FREESNDPK__13EventCtrlTaskFv");


    ctx->pc = 0x1e3310u;

    // 0x1e3310: 0x27bdffe0
    ctx->pc = 0x1e3310u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e3314: 0x7fbf0010
    ctx->pc = 0x1e3314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e3318: 0x7fb00000
    ctx->pc = 0x1e3318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e331c: 0x8c83000c
    ctx->pc = 0x1e331cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1e3320: 0x70808628
    ctx->pc = 0x1e3320u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e3324: 0x3c020051
    ctx->pc = 0x1e3324u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e3328: 0x8c650004
    ctx->pc = 0x1e3328u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e332c: 0xc085f84
    ctx->pc = 0x1E332Cu;
    SET_GPR_U32(ctx, 31, 0x1E3334u);
    ctx->pc = 0x1E3330u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    ctx->pc = 0x217E10u;
    {
        const uint32_t __entryPc = ctx->pc;
        packFree__13SoundMgrClassFi_0x217e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3334u; }
        else if (ctx->pc != 0x1E3334u) { ctx->pc = 0x1E3334u; }
    }
    if (ctx->pc != 0x1E3334u) { return; }
    ctx->pc = 0x1E3334u;
    // 0x1e3334: 0x8e03000c
    ctx->pc = 0x1e3334u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1e3338: 0x24630008
    ctx->pc = 0x1e3338u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x1e333c: 0xae03000c
    ctx->pc = 0x1e333cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x1e3340: 0x7bbf0010
    ctx->pc = 0x1e3340u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3344: 0x7bb00000
    ctx->pc = 0x1e3344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3348: 0x3e00008
    ctx->pc = 0x1E3348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E334Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3350u;
}
