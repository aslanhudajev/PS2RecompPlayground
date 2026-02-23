#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: is_PressLeft__Fi
// Address: 0x202800 - 0x202828
void is_PressLeft__Fi_0x202800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("is_PressLeft__Fi");


    ctx->pc = 0x202800u;

    // 0x202800: 0x27bdfff0
    ctx->pc = 0x202800u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x202804: 0x7fbf0000
    ctx->pc = 0x202804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x202808: 0x24050080
    ctx->pc = 0x202808u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 128));
    // 0x20280c: 0x24060011
    ctx->pc = 0x20280cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 17));
    // 0x202810: 0x70003e28
    ctx->pc = 0x202810u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x202814: 0xc080998
    ctx->pc = 0x202814u;
    SET_GPR_U32(ctx, 31, 0x20281Cu);
    ctx->pc = 0x202818u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 0), 32768));
    ctx->pc = 0x202660u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_PressDir__FiUiUiUiUi_0x202660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20281Cu; }
        else if (ctx->pc != 0x20281Cu) { ctx->pc = 0x20281Cu; }
    }
    if (ctx->pc != 0x20281Cu) { return; }
    ctx->pc = 0x20281Cu;
    // 0x20281c: 0x7bbf0000
    ctx->pc = 0x20281cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202820: 0x3e00008
    ctx->pc = 0x202820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202824u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x202828u;
}
