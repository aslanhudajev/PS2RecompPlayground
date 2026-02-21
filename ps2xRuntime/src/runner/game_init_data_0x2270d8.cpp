#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: game_init_data
// Address: 0x2270d8 - 0x22711c
void game_init_data_0x2270d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2270d8u;

    // 0x2270d8: 0x27bdfff0
    ctx->pc = 0x2270d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2270dc: 0xffbf0000
    ctx->pc = 0x2270dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2270e0: 0xc08b9fa
    ctx->pc = 0x2270E0u;
    SET_GPR_U32(ctx, 31, 0x2270E8u);
    ctx->pc = 0x22E7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_players_0x22e7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2270E8u; }
    }
    if (ctx->pc != 0x2270E8u) { return; }
    ctx->pc = 0x2270E8u;
    // 0x2270e8: 0xc09363e
    ctx->pc = 0x2270E8u;
    SET_GPR_U32(ctx, 31, 0x2270F0u);
    ctx->pc = 0x24D8F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitPlyrData_0x24d8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2270F0u; }
    }
    if (ctx->pc != 0x2270F0u) { return; }
    ctx->pc = 0x2270F0u;
    // 0x2270f0: 0xc08b9aa
    ctx->pc = 0x2270F0u;
    SET_GPR_U32(ctx, 31, 0x2270F8u);
    ctx->pc = 0x22E6A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        setup_player_models_0x22e6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2270F8u; }
    }
    if (ctx->pc != 0x2270F8u) { return; }
    ctx->pc = 0x2270F8u;
    // 0x2270f8: 0xc093e4e
    ctx->pc = 0x2270F8u;
    SET_GPR_U32(ctx, 31, 0x227100u);
    ctx->pc = 0x24F938u;
    {
        const uint32_t __entryPc = ctx->pc;
        UnloadWeaponsPowerups_0x24f938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227100u; }
    }
    if (ctx->pc != 0x227100u) { return; }
    ctx->pc = 0x227100u;
    // 0x227100: 0xc093e68
    ctx->pc = 0x227100u;
    SET_GPR_U32(ctx, 31, 0x227108u);
    ctx->pc = 0x227104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24F9A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadPowerups_0x24f9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227108u; }
    }
    if (ctx->pc != 0x227108u) { return; }
    ctx->pc = 0x227108u;
    // 0x227108: 0xc093e54
    ctx->pc = 0x227108u;
    SET_GPR_U32(ctx, 31, 0x227110u);
    ctx->pc = 0x24F950u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadWeapons_0x24f950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227110u; }
    }
    if (ctx->pc != 0x227110u) { return; }
    ctx->pc = 0x227110u;
    // 0x227110: 0xdfbf0000
    ctx->pc = 0x227110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227114: 0x8098528
    ctx->pc = 0x227114u;
    ctx->pc = 0x227118u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2614A0u;
    GauntInitWorldData_0x2614a0(rdram, ctx, runtime); return;
    ctx->pc = 0x22711Cu;
}
