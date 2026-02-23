#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: is_PressDown__Fi
// Address: 0x2027d0 - 0x2027f8
void is_PressDown__Fi_0x2027d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("is_PressDown__Fi");


    ctx->pc = 0x2027d0u;

    // 0x2027d0: 0x27bdfff0
    ctx->pc = 0x2027d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2027d4: 0x7fbf0000
    ctx->pc = 0x2027d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2027d8: 0x24050040
    ctx->pc = 0x2027d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 64));
    // 0x2027dc: 0x24060088
    ctx->pc = 0x2027dcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 136));
    // 0x2027e0: 0x70003e28
    ctx->pc = 0x2027e0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2027e4: 0xc080998
    ctx->pc = 0x2027E4u;
    SET_GPR_U32(ctx, 31, 0x2027ECu);
    ctx->pc = 0x2027E8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 16384));
    ctx->pc = 0x202660u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_PressDir__FiUiUiUiUi_0x202660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2027ECu; }
        else if (ctx->pc != 0x2027ECu) { ctx->pc = 0x2027ECu; }
    }
    if (ctx->pc != 0x2027ECu) { return; }
    ctx->pc = 0x2027ECu;
    // 0x2027ec: 0x7bbf0000
    ctx->pc = 0x2027ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2027f0: 0x3e00008
    ctx->pc = 0x2027F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2027F4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2027F8u;
}
