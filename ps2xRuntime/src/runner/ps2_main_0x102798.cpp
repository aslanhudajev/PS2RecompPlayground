#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: main
// Address: 0x102798 - 0x10286c
void ps2_main_0x102798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x102798u;

    // 0x102798: 0x27bdffc0
    ctx->pc = 0x102798u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10279c: 0xffb10020
    ctx->pc = 0x10279cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1027a0: 0xffb00010
    ctx->pc = 0x1027a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1027a4: 0xa0882d
    ctx->pc = 0x1027a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1027a8: 0xffbf0030
    ctx->pc = 0x1027a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1027ac: 0xc049b5c
    ctx->pc = 0x1027ACu;
    SET_GPR_U32(ctx, 31, 0x1027B4u);
    ctx->pc = 0x1027B0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x126D70u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___main_0x126d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1027B4u; }
    }
    if (ctx->pc != 0x1027B4u) { return; }
    ctx->pc = 0x1027B4u;
    // 0x1027b4: 0x200202d
    ctx->pc = 0x1027b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1027b8: 0x220282d
    ctx->pc = 0x1027b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1027bc: 0x3a0302d
    ctx->pc = 0x1027bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1027c0: 0x37a70002
    ctx->pc = 0x1027c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)2);
    // 0x1027c4: 0x37a80004
    ctx->pc = 0x1027c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)4);
    // 0x1027c8: 0x37a90006
    ctx->pc = 0x1027c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 29) | (uint64_t)6);
    // 0x1027cc: 0xc0473e2
    ctx->pc = 0x1027CCu;
    SET_GPR_U32(ctx, 31, 0x1027D4u);
    ctx->pc = 0x1027D0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 29) | (uint64_t)8);
    ctx->pc = 0x11CF88u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeDemoStart_0x11cf88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1027D4u; }
    }
    if (ctx->pc != 0x1027D4u) { return; }
    ctx->pc = 0x1027D4u;
    // 0x1027d4: 0x24030001
    ctx->pc = 0x1027d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1027d8: 0x3c040013
    ctx->pc = 0x1027d8u;
    SET_GPR_S32(ctx, 4, ((uint32_t)19 << 16));
    // 0x1027dc: 0x3c050013
    ctx->pc = 0x1027dcu;
    SET_GPR_S32(ctx, 5, ((uint32_t)19 << 16));
    // 0x1027e0: 0x3c020014
    ctx->pc = 0x1027e0u;
    SET_GPR_S32(ctx, 2, ((uint32_t)20 << 16));
    // 0x1027e4: 0xa443dfc2
    ctx->pc = 0x1027e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294959042), (uint16_t)GPR_U32(ctx, 3));
    // 0x1027e8: 0xa4831458
    ctx->pc = 0x1027e8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5208), (uint16_t)GPR_U32(ctx, 3));
    // 0x1027ec: 0xc040932
    ctx->pc = 0x1027ECu;
    SET_GPR_U32(ctx, 31, 0x1027F4u);
    ctx->pc = 0x1027F0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 5200), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1024C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        initialiseSystem_0x1024c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1027F4u; }
    }
    if (ctx->pc != 0x1027F4u) { return; }
    ctx->pc = 0x1027F4u;
    // 0x1027f4: 0xc040974
    ctx->pc = 0x1027F4u;
    SET_GPR_U32(ctx, 31, 0x1027FCu);
    ctx->pc = 0x1025D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        initialisePads_0x1025d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1027FCu; }
    }
    if (ctx->pc != 0x1027FCu) { return; }
    ctx->pc = 0x1027FCu;
    // 0x1027fc: 0xc04095e
    ctx->pc = 0x1027FCu;
    SET_GPR_U32(ctx, 31, 0x102804u);
    ctx->pc = 0x102578u;
    {
        const uint32_t __entryPc = ctx->pc;
        initialiseMovie_0x102578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102804u; }
    }
    if (ctx->pc != 0x102804u) { return; }
    ctx->pc = 0x102804u;
    // 0x102804: 0xc0408d2
    ctx->pc = 0x102804u;
    SET_GPR_U32(ctx, 31, 0x10280Cu);
    ctx->pc = 0x102348u;
    {
        const uint32_t __entryPc = ctx->pc;
        initialiseSound_0x102348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10280Cu; }
    }
    if (ctx->pc != 0x10280Cu) { return; }
    ctx->pc = 0x10280Cu;
    // 0x10280c: 0xc04238a
    ctx->pc = 0x10280Cu;
    SET_GPR_U32(ctx, 31, 0x102814u);
    ctx->pc = 0x108E28u;
    {
        const uint32_t __entryPc = ctx->pc;
        initFadeOut_0x108e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102814u; }
    }
    if (ctx->pc != 0x102814u) { return; }
    ctx->pc = 0x102814u;
    // 0x102814: 0xc0410c6
    ctx->pc = 0x102814u;
    SET_GPR_U32(ctx, 31, 0x10281Cu);
    ctx->pc = 0x104318u;
    {
        const uint32_t __entryPc = ctx->pc;
        loadPackage_0x104318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10281Cu; }
    }
    if (ctx->pc != 0x10281Cu) { return; }
    ctx->pc = 0x10281Cu;
    // 0x10281c: 0xc040ac6
    ctx->pc = 0x10281Cu;
    SET_GPR_U32(ctx, 31, 0x102824u);
    ctx->pc = 0x102B18u;
    {
        const uint32_t __entryPc = ctx->pc;
        initialiseDrawDisplay_0x102b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102824u; }
    }
    if (ctx->pc != 0x102824u) { return; }
    ctx->pc = 0x102824u;
    // 0x102824: 0xc042508
    ctx->pc = 0x102824u;
    SET_GPR_U32(ctx, 31, 0x10282Cu);
    ctx->pc = 0x109420u;
    {
        const uint32_t __entryPc = ctx->pc;
        initialiseQuiz_0x109420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10282Cu; }
    }
    if (ctx->pc != 0x10282Cu) { return; }
    ctx->pc = 0x10282Cu;
    // 0x10282c: 0xc042510
    ctx->pc = 0x10282Cu;
    SET_GPR_U32(ctx, 31, 0x102834u);
    ctx->pc = 0x109440u;
    {
        const uint32_t __entryPc = ctx->pc;
        setRandomNumber_0x109440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102834u; }
    }
    if (ctx->pc != 0x102834u) { return; }
    ctx->pc = 0x102834u;
    // 0x102834: 0xc04089a
    ctx->pc = 0x102834u;
    SET_GPR_U32(ctx, 31, 0x10283Cu);
    ctx->pc = 0x102268u;
    {
        const uint32_t __entryPc = ctx->pc;
        runMenu_0x102268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10283Cu; }
    }
    if (ctx->pc != 0x10283Cu) { return; }
    ctx->pc = 0x10283Cu;
    // 0x10283c: 0xc04061e
    ctx->pc = 0x10283Cu;
    SET_GPR_U32(ctx, 31, 0x102844u);
    ctx->pc = 0x101878u;
    {
        const uint32_t __entryPc = ctx->pc;
        quitScreen_0x101878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102844u; }
    }
    if (ctx->pc != 0x102844u) { return; }
    ctx->pc = 0x102844u;
    // 0x102844: 0xc040032
    ctx->pc = 0x102844u;
    SET_GPR_U32(ctx, 31, 0x10284Cu);
    ctx->pc = 0x1000C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        shutdownSystem_0x1000c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10284Cu; }
    }
    if (ctx->pc != 0x10284Cu) { return; }
    ctx->pc = 0x10284Cu;
    // 0x10284c: 0xc047416
    ctx->pc = 0x10284Cu;
    SET_GPR_U32(ctx, 31, 0x102854u);
    ctx->pc = 0x11D058u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeDemoEnd_0x11d058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102854u; }
    }
    if (ctx->pc != 0x102854u) { return; }
    ctx->pc = 0x102854u;
    // 0x102854: 0xdfbf0030
    ctx->pc = 0x102854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102858: 0x102d
    ctx->pc = 0x102858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10285c: 0xdfb10020
    ctx->pc = 0x10285cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102860: 0xdfb00010
    ctx->pc = 0x102860u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102864: 0x3e00008
    ctx->pc = 0x102864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102868u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10286Cu;
}
