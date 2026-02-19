#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: new_attract_mode
// Address: 0x282258 - 0x282324
void new_attract_mode_0x282258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x282258u;

    // 0x282258: 0x27bdffd0
    ctx->pc = 0x282258u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28225c: 0xffbf0020
    ctx->pc = 0x28225cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x282260: 0xffb10010
    ctx->pc = 0x282260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x282264: 0xffb00000
    ctx->pc = 0x282264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x282268: 0xa0882d
    ctx->pc = 0x282268u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28226c: 0x3c020035
    ctx->pc = 0x28226cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x282270: 0xac44a2e0
    ctx->pc = 0x282270u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943456), GPR_U32(ctx, 4));
    // 0x282274: 0x3c020031
    ctx->pc = 0x282274u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x282278: 0xac440018
    ctx->pc = 0x282278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 4));
    // 0x28227c: 0x3c020031
    ctx->pc = 0x28227cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x282280: 0xac40ff9c
    ctx->pc = 0x282280u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967196), GPR_U32(ctx, 0));
    // 0x282284: 0x3c020032
    ctx->pc = 0x282284u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x282288: 0xac4007bc
    ctx->pc = 0x282288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1980), GPR_U32(ctx, 0));
    // 0x28228c: 0x3c020032
    ctx->pc = 0x28228cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x282290: 0xac400800
    ctx->pc = 0x282290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2048), GPR_U32(ctx, 0));
    // 0x282294: 0x3c020033
    ctx->pc = 0x282294u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x282298: 0xac40cb6c
    ctx->pc = 0x282298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953836), GPR_U32(ctx, 0));
    // 0x28229c: 0x3c020035
    ctx->pc = 0x28229cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x2822a0: 0xac40a2d4
    ctx->pc = 0x2822a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943444), GPR_U32(ctx, 0));
    // 0x2822a4: 0x3c020031
    ctx->pc = 0x2822a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2822a8: 0xac40001c
    ctx->pc = 0x2822a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x2822ac: 0x3c020031
    ctx->pc = 0x2822acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2822b0: 0xac400020
    ctx->pc = 0x2822b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x2822b4: 0x3c02003c
    ctx->pc = 0x2822b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2822b8: 0xc0b46de
    ctx->pc = 0x2822B8u;
    SET_GPR_U32(ctx, 31, 0x2822C0u);
    ctx->pc = 0x2822BCu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15056), GPR_U32(ctx, 0));
    ctx->pc = 0x2D1B78u;
    {
        const uint32_t __entryPc = ctx->pc;
        text_clear_0x2d1b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2822C0u; }
    }
    if (ctx->pc != 0x2822C0u) { return; }
    ctx->pc = 0x2822C0u;
    // 0x2822c0: 0x24040002
    ctx->pc = 0x2822c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2822c4: 0xc0b49cc
    ctx->pc = 0x2822C4u;
    SET_GPR_U32(ctx, 31, 0x2822CCu);
    ctx->pc = 0x2822C8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2D2730u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitErrors_0x2d2730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2822CCu; }
    }
    if (ctx->pc != 0x2822CCu) { return; }
    ctx->pc = 0x2822CCu;
    // 0x2822cc: 0x3c100035
    ctx->pc = 0x2822ccu;
    SET_GPR_U32(ctx, 16, ((uint32_t)53 << 16));
    // 0x2822d0: 0x220202d
    ctx->pc = 0x2822d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2822d4: 0x282d
    ctx->pc = 0x2822d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2822d8: 0xc0898c2
    ctx->pc = 0x2822D8u;
    SET_GPR_U32(ctx, 31, 0x2822E0u);
    ctx->pc = 0x2822DCu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 4294941612)));
    ctx->pc = 0x226308u;
    {
        const uint32_t __entryPc = ctx->pc;
        ResetModels_0x226308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2822E0u; }
    }
    if (ctx->pc != 0x2822E0u) { return; }
    ctx->pc = 0x2822E0u;
    // 0x2822e0: 0x3c050035
    ctx->pc = 0x2822e0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)53 << 16));
    // 0x2822e4: 0x3c040035
    ctx->pc = 0x2822e4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x2822e8: 0x3c030035
    ctx->pc = 0x2822e8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x2822ec: 0x2402ffff
    ctx->pc = 0x2822ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2822f0: 0xac629ba8
    ctx->pc = 0x2822f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941608), GPR_U32(ctx, 2));
    // 0x2822f4: 0xac829bb0
    ctx->pc = 0x2822f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294941616), GPR_U32(ctx, 2));
    // 0x2822f8: 0xaca29bb4
    ctx->pc = 0x2822f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294941620), GPR_U32(ctx, 2));
    // 0x2822fc: 0xae029bac
    ctx->pc = 0x2822fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294941612), GPR_U32(ctx, 2));
    // 0x282300: 0x3c04003b
    ctx->pc = 0x282300u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x282304: 0xc0b4a34
    ctx->pc = 0x282304u;
    SET_GPR_U32(ctx, 31, 0x28230Cu);
    ctx->pc = 0x282308u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294951720));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28230Cu; }
    }
    if (ctx->pc != 0x28230Cu) { return; }
    ctx->pc = 0x28230Cu;
    // 0x28230c: 0x24040001
    ctx->pc = 0x28230cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x282310: 0xdfbf0020
    ctx->pc = 0x282310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282314: 0xdfb10010
    ctx->pc = 0x282314u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282318: 0xdfb00000
    ctx->pc = 0x282318u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28231c: 0x8089a6c
    ctx->pc = 0x28231Cu;
    ctx->pc = 0x282320u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x2269B0u;
    init_moving_objects_0x2269b0(rdram, ctx, runtime); return;
    ctx->pc = 0x282324u;
}
