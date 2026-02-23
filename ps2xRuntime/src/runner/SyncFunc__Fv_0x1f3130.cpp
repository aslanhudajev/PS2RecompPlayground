#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SyncFunc__Fv
// Address: 0x1f3130 - 0x1f3160
void SyncFunc__Fv_0x1f3130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SyncFunc__Fv");


    ctx->pc = 0x1f3130u;

    // 0x1f3130: 0x27bdfff0
    ctx->pc = 0x1f3130u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f3134: 0x7fbf0000
    ctx->pc = 0x1f3134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1f3138: 0xc05b54e
    ctx->pc = 0x1F3138u;
    SET_GPR_U32(ctx, 31, 0x1F3140u);
    ctx->pc = 0x16D538u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXM_Lock_0x16d538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3140u; }
        else if (ctx->pc != 0x1F3140u) { ctx->pc = 0x1F3140u; }
    }
    if (ctx->pc != 0x1F3140u) { return; }
    ctx->pc = 0x1F3140u;
    // 0x1f3140: 0x3c020051
    ctx->pc = 0x1f3140u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1f3144: 0xc08634c
    ctx->pc = 0x1F3144u;
    SET_GPR_U32(ctx, 31, 0x1F314Cu);
    ctx->pc = 0x1F3148u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x218D30u;
    {
        const uint32_t __entryPc = ctx->pc;
        exec__13EntryDatClassFv_0x218d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F314Cu; }
        else if (ctx->pc != 0x1F314Cu) { ctx->pc = 0x1F314Cu; }
    }
    if (ctx->pc != 0x1F314Cu) { return; }
    ctx->pc = 0x1F314Cu;
    // 0x1f314c: 0xc05b550
    ctx->pc = 0x1F314Cu;
    SET_GPR_U32(ctx, 31, 0x1F3154u);
    ctx->pc = 0x16D540u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXM_Unlock_0x16d540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3154u; }
        else if (ctx->pc != 0x1F3154u) { ctx->pc = 0x1F3154u; }
    }
    if (ctx->pc != 0x1F3154u) { return; }
    ctx->pc = 0x1F3154u;
    // 0x1f3154: 0x7bbf0000
    ctx->pc = 0x1f3154u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3158: 0x3e00008
    ctx->pc = 0x1F3158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F315Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F3160u;
}
