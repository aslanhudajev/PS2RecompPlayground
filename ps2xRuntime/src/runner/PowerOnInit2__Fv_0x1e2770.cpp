#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PowerOnInit2__Fv
// Address: 0x1e2770 - 0x1e27dc
void PowerOnInit2__Fv_0x1e2770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PowerOnInit2__Fv");


    ctx->pc = 0x1e2770u;

    // 0x1e2770: 0x27bdfff0
    ctx->pc = 0x1e2770u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e2774: 0x3c020050
    ctx->pc = 0x1e2774u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e2778: 0x7fbf0000
    ctx->pc = 0x1e2778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1e277c: 0xc07cde8
    ctx->pc = 0x1E277Cu;
    SET_GPR_U32(ctx, 31, 0x1E2784u);
    ctx->pc = 0x1E2780u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960384));
    ctx->pc = 0x1F37A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        synch2__16MainModeMgrClassFv_0x1f37a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2784u; }
        else if (ctx->pc != 0x1E2784u) { ctx->pc = 0x1E2784u; }
    }
    if (ctx->pc != 0x1E2784u) { return; }
    ctx->pc = 0x1E2784u;
    // 0x1e2784: 0x3c020051
    ctx->pc = 0x1e2784u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e2788: 0xc0863a8
    ctx->pc = 0x1E2788u;
    SET_GPR_U32(ctx, 31, 0x1E2790u);
    ctx->pc = 0x1E278Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x218EA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        flushCur__13EntryDatClassFv_0x218ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2790u; }
        else if (ctx->pc != 0x1E2790u) { ctx->pc = 0x1E2790u; }
    }
    if (ctx->pc != 0x1E2790u) { return; }
    ctx->pc = 0x1E2790u;
    // 0x1e2790: 0x3c020051
    ctx->pc = 0x1e2790u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1e2794: 0xc086348
    ctx->pc = 0x1E2794u;
    SET_GPR_U32(ctx, 31, 0x1E279Cu);
    ctx->pc = 0x1E2798u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    ctx->pc = 0x218D20u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__13EntryDatClassFv_0x218d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E279Cu; }
        else if (ctx->pc != 0x1E279Cu) { ctx->pc = 0x1E279Cu; }
    }
    if (ctx->pc != 0x1E279Cu) { return; }
    ctx->pc = 0x1E279Cu;
    // 0x1e279c: 0xc068684
    ctx->pc = 0x1E279Cu;
    SET_GPR_U32(ctx, 31, 0x1E27A4u);
    ctx->pc = 0x1A1A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MallocInit_0x1a1a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E27A4u; }
        else if (ctx->pc != 0x1E27A4u) { ctx->pc = 0x1E27A4u; }
    }
    if (ctx->pc != 0x1E27A4u) { return; }
    ctx->pc = 0x1E27A4u;
    // 0x1e27a4: 0x3c020050
    ctx->pc = 0x1e27a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e27a8: 0x2405ffff
    ctx->pc = 0x1e27a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e27ac: 0x24440b40
    ctx->pc = 0x1e27acu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 2880));
    // 0x1e27b0: 0xc07a66c
    ctx->pc = 0x1E27B0u;
    SET_GPR_U32(ctx, 31, 0x1E27B8u);
    ctx->pc = 0x1E27B4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1E99B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        closeAll__12FileMgrClassFii_0x1e99b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E27B8u; }
        else if (ctx->pc != 0x1E27B8u) { ctx->pc = 0x1E27B8u; }
    }
    if (ctx->pc != 0x1E27B8u) { return; }
    ctx->pc = 0x1E27B8u;
    // 0x1e27b8: 0x3c020050
    ctx->pc = 0x1e27b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e27bc: 0xc283968
    ctx->pc = 0x1E27BCu;
    SET_GPR_U32(ctx, 31, 0x1E27C4u);
    ctx->pc = 0x1E27C0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 720));
    ctx->pc = 0xA0E5A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        init__12DemoMgrClassFv_0xa0e5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E27C4u; }
        else if (ctx->pc != 0x1E27C4u) { ctx->pc = 0x1E27C4u; }
    }
    if (ctx->pc != 0x1E27C4u) { return; }
    ctx->pc = 0x1E27C4u;
    // 0x1e27c4: 0xc0789f8
    ctx->pc = 0x1E27C4u;
    SET_GPR_U32(ctx, 31, 0x1E27CCu);
    ctx->pc = 0x1E27E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PowerOnInitComm__Fv_0x1e27e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E27CCu; }
        else if (ctx->pc != 0x1E27CCu) { ctx->pc = 0x1E27CCu; }
    }
    if (ctx->pc != 0x1E27CCu) { return; }
    ctx->pc = 0x1E27CCu;
    // 0x1e27cc: 0xaf808dac
    ctx->pc = 0x1e27ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938028), GPR_U32(ctx, 0));
    // 0x1e27d0: 0x7bbf0000
    ctx->pc = 0x1e27d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e27d4: 0x3e00008
    ctx->pc = 0x1E27D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E27D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E27DCu;
}
