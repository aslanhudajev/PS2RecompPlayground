#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: changeBuf__11PalMgrClassFiPv
// Address: 0x204140 - 0x204160
void changeBuf__11PalMgrClassFiPv_0x204140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("changeBuf__11PalMgrClassFiPv");


    ctx->pc = 0x204140u;

    // 0x204140: 0x27bdfff0
    ctx->pc = 0x204140u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x204144: 0x70a02628
    ctx->pc = 0x204144u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x204148: 0x7fbf0000
    ctx->pc = 0x204148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x20414c: 0xc06ad38
    ctx->pc = 0x20414Cu;
    SET_GPR_U32(ctx, 31, 0x204154u);
    ctx->pc = 0x204150u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AB4E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPaletteChangeData_0x1ab4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204154u; }
        else if (ctx->pc != 0x204154u) { ctx->pc = 0x204154u; }
    }
    if (ctx->pc != 0x204154u) { return; }
    ctx->pc = 0x204154u;
    // 0x204154: 0x7bbf0000
    ctx->pc = 0x204154u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204158: 0x3e00008
    ctx->pc = 0x204158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20415Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x204160u;
}
