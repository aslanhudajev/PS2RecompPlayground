#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init1st3__12PolyMgrClassFi
// Address: 0x213fc0 - 0x213fe0
void init1st3__12PolyMgrClassFi_0x213fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init1st3__12PolyMgrClassFi");


    ctx->pc = 0x213fc0u;

    // 0x213fc0: 0x27bdfff0
    ctx->pc = 0x213fc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x213fc4: 0x7fbf0000
    ctx->pc = 0x213fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x213fc8: 0xc085008
    ctx->pc = 0x213FC8u;
    SET_GPR_U32(ctx, 31, 0x213FD0u);
    ctx->pc = 0x214020u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__12PolyMgrClassFv_0x214020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x213FD0u; }
        else if (ctx->pc != 0x213FD0u) { ctx->pc = 0x213FD0u; }
    }
    if (ctx->pc != 0x213FD0u) { return; }
    ctx->pc = 0x213FD0u;
    // 0x213fd0: 0x7bbf0000
    ctx->pc = 0x213fd0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213fd4: 0x70001628
    ctx->pc = 0x213fd4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x213fd8: 0x3e00008
    ctx->pc = 0x213FD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213FDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x213FE0u;
}
