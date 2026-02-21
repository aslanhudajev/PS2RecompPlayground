#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: GameDataInit
// Address: 0x226228 - 0x2262b4
void GameDataInit_0x226228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x226228u;

    // 0x226228: 0x27bdfff0
    ctx->pc = 0x226228u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22622c: 0xffbf0000
    ctx->pc = 0x22622cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226230: 0xc0b4fa0
    ctx->pc = 0x226230u;
    SET_GPR_U32(ctx, 31, 0x226238u);
    ctx->pc = 0x2D3E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        BytesFree_0x2d3e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226238u; }
    }
    if (ctx->pc != 0x226238u) { return; }
    ctx->pc = 0x226238u;
    // 0x226238: 0x3c04003a
    ctx->pc = 0x226238u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x22623c: 0x24846b18
    ctx->pc = 0x22623cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27416));
    // 0x226240: 0xc0b4a34
    ctx->pc = 0x226240u;
    SET_GPR_U32(ctx, 31, 0x226248u);
    ctx->pc = 0x226244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226248u; }
    }
    if (ctx->pc != 0x226248u) { return; }
    ctx->pc = 0x226248u;
    // 0x226248: 0xc087346
    ctx->pc = 0x226248u;
    SET_GPR_U32(ctx, 31, 0x226250u);
    ctx->pc = 0x21CD18u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitWorlds_0x21cd18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226250u; }
    }
    if (ctx->pc != 0x226250u) { return; }
    ctx->pc = 0x226250u;
    // 0x226250: 0xc0b4fa0
    ctx->pc = 0x226250u;
    SET_GPR_U32(ctx, 31, 0x226258u);
    ctx->pc = 0x2D3E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        BytesFree_0x2d3e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226258u; }
    }
    if (ctx->pc != 0x226258u) { return; }
    ctx->pc = 0x226258u;
    // 0x226258: 0x3c04003a
    ctx->pc = 0x226258u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x22625c: 0x24846b30
    ctx->pc = 0x22625cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27440));
    // 0x226260: 0xc0b4a34
    ctx->pc = 0x226260u;
    SET_GPR_U32(ctx, 31, 0x226268u);
    ctx->pc = 0x226264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226268u; }
    }
    if (ctx->pc != 0x226268u) { return; }
    ctx->pc = 0x226268u;
    // 0x226268: 0xc08df6e
    ctx->pc = 0x226268u;
    SET_GPR_U32(ctx, 31, 0x226270u);
    ctx->pc = 0x237DB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitEnemies_0x237db8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226270u; }
    }
    if (ctx->pc != 0x226270u) { return; }
    ctx->pc = 0x226270u;
    // 0x226270: 0xc0b4fa0
    ctx->pc = 0x226270u;
    SET_GPR_U32(ctx, 31, 0x226278u);
    ctx->pc = 0x2D3E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        BytesFree_0x2d3e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226278u; }
    }
    if (ctx->pc != 0x226278u) { return; }
    ctx->pc = 0x226278u;
    // 0x226278: 0x3c04003a
    ctx->pc = 0x226278u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x22627c: 0x24846b48
    ctx->pc = 0x22627cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27464));
    // 0x226280: 0xc0b4a34
    ctx->pc = 0x226280u;
    SET_GPR_U32(ctx, 31, 0x226288u);
    ctx->pc = 0x226284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226288u; }
    }
    if (ctx->pc != 0x226288u) { return; }
    ctx->pc = 0x226288u;
    // 0x226288: 0xc093dcc
    ctx->pc = 0x226288u;
    SET_GPR_U32(ctx, 31, 0x226290u);
    ctx->pc = 0x24F730u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitItems_0x24f730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226290u; }
    }
    if (ctx->pc != 0x226290u) { return; }
    ctx->pc = 0x226290u;
    // 0x226290: 0xc0b4fa0
    ctx->pc = 0x226290u;
    SET_GPR_U32(ctx, 31, 0x226298u);
    ctx->pc = 0x2D3E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        BytesFree_0x2d3e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226298u; }
    }
    if (ctx->pc != 0x226298u) { return; }
    ctx->pc = 0x226298u;
    // 0x226298: 0x3c04003a
    ctx->pc = 0x226298u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x22629c: 0x24846b60
    ctx->pc = 0x22629cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 27488));
    // 0x2262a0: 0xc0b4a34
    ctx->pc = 0x2262A0u;
    SET_GPR_U32(ctx, 31, 0x2262A8u);
    ctx->pc = 0x2262A4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2262A8u; }
    }
    if (ctx->pc != 0x2262A8u) { return; }
    ctx->pc = 0x2262A8u;
    // 0x2262a8: 0xdfbf0000
    ctx->pc = 0x2262a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2262ac: 0x80a466c
    ctx->pc = 0x2262ACu;
    ctx->pc = 0x2262B0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2919B0u;
    CritterInit_0x2919b0(rdram, ctx, runtime); return;
    ctx->pc = 0x2262B4u;
}
