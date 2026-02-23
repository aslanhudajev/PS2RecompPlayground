#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: is_PressReload0__Fi
// Address: 0x2024c0 - 0x202514
void is_PressReload0__Fi_0x2024c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("is_PressReload0__Fi");


    ctx->pc = 0x2024c0u;

    // 0x2024c0: 0x41040
    ctx->pc = 0x2024c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 1));
    // 0x2024c4: 0x441021
    ctx->pc = 0x2024c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2024c8: 0x23880
    ctx->pc = 0x2024c8u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2024cc: 0x3c020050
    ctx->pc = 0x2024ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x2024d0: 0x27bdfff0
    ctx->pc = 0x2024d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2024d4: 0x2442fec9
    ctx->pc = 0x2024d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966985));
    // 0x2024d8: 0x7fbf0000
    ctx->pc = 0x2024d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2024dc: 0x471021
    ctx->pc = 0x2024dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2024e0: 0x80450000
    ctx->pc = 0x2024e0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2024e4: 0x24064000
    ctx->pc = 0x2024e4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16384));
    // 0x2024e8: 0x24030008
    ctx->pc = 0x2024e8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x2024ec: 0x3c020050
    ctx->pc = 0x2024ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x2024f0: 0x2442fece
    ctx->pc = 0x2024f0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966990));
    // 0x2024f4: 0x471021
    ctx->pc = 0x2024f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2024f8: 0x65300a
    ctx->pc = 0x2024f8u;
    if (GPR_U32(ctx, 5) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 3));
    // 0x2024fc: 0x94450000
    ctx->pc = 0x2024fcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202500: 0xc08088c
    ctx->pc = 0x202500u;
    SET_GPR_U32(ctx, 31, 0x202508u);
    ctx->pc = 0x202504u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 3584));
    ctx->pc = 0x202230u;
    {
        const uint32_t __entryPc = ctx->pc;
        is_PressButton__FiUiUiUi_0x202230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202508u; }
        else if (ctx->pc != 0x202508u) { ctx->pc = 0x202508u; }
    }
    if (ctx->pc != 0x202508u) { return; }
    ctx->pc = 0x202508u;
    // 0x202508: 0x7bbf0000
    ctx->pc = 0x202508u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20250c: 0x3e00008
    ctx->pc = 0x20250Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202510u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x202514u;
}
