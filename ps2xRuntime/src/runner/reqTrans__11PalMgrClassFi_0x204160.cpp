#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: reqTrans__11PalMgrClassFi
// Address: 0x204160 - 0x20417c
void reqTrans__11PalMgrClassFi_0x204160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("reqTrans__11PalMgrClassFi");


    ctx->pc = 0x204160u;

    // 0x204160: 0x27bdfff0
    ctx->pc = 0x204160u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x204164: 0x7fbf0000
    ctx->pc = 0x204164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x204168: 0xc06ad4c
    ctx->pc = 0x204168u;
    SET_GPR_U32(ctx, 31, 0x204170u);
    ctx->pc = 0x20416Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1AB530u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPaletteLoadReq_0x1ab530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204170u; }
        else if (ctx->pc != 0x204170u) { ctx->pc = 0x204170u; }
    }
    if (ctx->pc != 0x204170u) { return; }
    ctx->pc = 0x204170u;
    // 0x204170: 0x7bbf0000
    ctx->pc = 0x204170u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204174: 0x3e00008
    ctx->pc = 0x204174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204178u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20417Cu;
}
