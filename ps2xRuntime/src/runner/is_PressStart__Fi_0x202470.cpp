#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: is_PressStart__Fi
// Address: 0x202470 - 0x2024b8
void is_PressStart__Fi_0x202470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("is_PressStart__Fi");


    ctx->pc = 0x202470u;

    // 0x202470: 0x41040
    ctx->pc = 0x202470u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x202474: 0x441021
    ctx->pc = 0x202474u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x202478: 0x21880
    ctx->pc = 0x202478u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20247c: 0x3c020050
    ctx->pc = 0x20247cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x202480: 0x27bdfff0
    ctx->pc = 0x202480u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x202484: 0x2442fec9
    ctx->pc = 0x202484u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966985));
    // 0x202488: 0x7fbf0000
    ctx->pc = 0x202488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x20248c: 0x431021
    ctx->pc = 0x20248cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x202490: 0x80430000
    ctx->pc = 0x202490u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202494: 0x24060008
    ctx->pc = 0x202494u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 8));
    // 0x202498: 0x70c02e28
    ctx->pc = 0x202498u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x20249c: 0x24070080
    ctx->pc = 0x20249cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 128));
    // 0x2024a0: 0x24024000
    ctx->pc = 0x2024a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2024a4: 0xc08088c
    ctx->pc = 0x2024A4u;
    SET_GPR_U32(ctx, 31, 0x2024ACu);
    ctx->pc = 0x2024A8u;
    if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 2));
    ctx->pc = 0x202230u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_PressButton__FiUiUiUi_0x202230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2024ACu; }
        else if (ctx->pc != 0x2024ACu) { ctx->pc = 0x2024ACu; }
    }
    if (ctx->pc != 0x2024ACu) { return; }
    ctx->pc = 0x2024ACu;
    // 0x2024ac: 0x7bbf0000
    ctx->pc = 0x2024acu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2024b0: 0x3e00008
    ctx->pc = 0x2024B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2024B4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2024B8u;
}
