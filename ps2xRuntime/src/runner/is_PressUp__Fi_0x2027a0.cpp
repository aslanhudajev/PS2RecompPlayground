#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: is_PressUp__Fi
// Address: 0x2027a0 - 0x2027c8
void is_PressUp__Fi_0x2027a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("is_PressUp__Fi");


    ctx->pc = 0x2027a0u;

    // 0x2027a0: 0x27bdfff0
    ctx->pc = 0x2027a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2027a4: 0x7fbf0000
    ctx->pc = 0x2027a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2027a8: 0x24050010
    ctx->pc = 0x2027a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    // 0x2027ac: 0x24060044
    ctx->pc = 0x2027acu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 68));
    // 0x2027b0: 0x70003e28
    ctx->pc = 0x2027b0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2027b4: 0xc080998
    ctx->pc = 0x2027B4u;
    SET_GPR_U32(ctx, 31, 0x2027BCu);
    ctx->pc = 0x2027B8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4096));
    ctx->pc = 0x202660u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_PressDir__FiUiUiUiUi_0x202660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2027BCu; }
        else if (ctx->pc != 0x2027BCu) { ctx->pc = 0x2027BCu; }
    }
    if (ctx->pc != 0x2027BCu) { return; }
    ctx->pc = 0x2027BCu;
    // 0x2027bc: 0x7bbf0000
    ctx->pc = 0x2027bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2027c0: 0x3e00008
    ctx->pc = 0x2027C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2027C4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2027C8u;
}
