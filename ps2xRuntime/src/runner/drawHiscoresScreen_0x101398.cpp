#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: drawHiscoresScreen
// Address: 0x101398 - 0x101878
void drawHiscoresScreen_0x101398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x101398u;

    // 0x101398: 0x27bdff60
    ctx->pc = 0x101398u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x10139c: 0x24020005
    ctx->pc = 0x10139cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x1013a0: 0xffbe0080
    ctx->pc = 0x1013a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x1013a4: 0xffb70070
    ctx->pc = 0x1013a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x1013a8: 0x3c1e0017
    ctx->pc = 0x1013a8u;
    SET_GPR_S32(ctx, 30, ((uint32_t)23 << 16));
    // 0x1013ac: 0xffb60060
    ctx->pc = 0x1013acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1013b0: 0x24170001
    ctx->pc = 0x1013b0u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1013b4: 0xffb50050
    ctx->pc = 0x1013b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1013b8: 0x24160001
    ctx->pc = 0x1013b8u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1013bc: 0xffb40040
    ctx->pc = 0x1013bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1013c0: 0x24150001
    ctx->pc = 0x1013c0u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1013c4: 0xffb30030
    ctx->pc = 0x1013c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1013c8: 0x24140001
    ctx->pc = 0x1013c8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1013cc: 0xffb20020
    ctx->pc = 0x1013ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1013d0: 0x982d
    ctx->pc = 0x1013d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1013d4: 0xffb10010
    ctx->pc = 0x1013d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1013d8: 0x902d
    ctx->pc = 0x1013d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1013dc: 0xffb00000
    ctx->pc = 0x1013dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1013e0: 0x882d
    ctx->pc = 0x1013e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1013e4: 0xffbf0090
    ctx->pc = 0x1013e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1013e8: 0x802d
    ctx->pc = 0x1013e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1013ec: 0xaf808098
    ctx->pc = 0x1013ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934680), GPR_U32(ctx, 0));
    // 0x1013f0: 0xaf82816c
    ctx->pc = 0x1013f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934892), GPR_U32(ctx, 2));
    // 0x1013f4: 0xc04292e
    ctx->pc = 0x1013F4u;
    SET_GPR_U32(ctx, 31, 0x1013FCu);
    ctx->pc = 0x1013F8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934700), GPR_U32(ctx, 0));
    ctx->pc = 0x10A4B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memInit_0x10a4b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1013FCu; }
    }
    if (ctx->pc != 0x1013FCu) { return; }
    ctx->pc = 0x1013FCu;
    // 0x1013fc: 0xc0410c6
    ctx->pc = 0x1013FCu;
    SET_GPR_U32(ctx, 31, 0x101404u);
    ctx->pc = 0x104318u;
    {
        const uint32_t __entryPc = ctx->pc;
        loadPackage_0x104318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101404u; }
    }
    if (ctx->pc != 0x101404u) { return; }
    ctx->pc = 0x101404u;
    // 0x101404: 0x3c013f80
    ctx->pc = 0x101404u;
    SET_GPR_S32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x101408: 0x44816000
    ctx->pc = 0x101408u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x10140c: 0x3c057f7f
    ctx->pc = 0x10140cu;
    SET_GPR_S32(ctx, 5, ((uint32_t)32639 << 16));
    // 0x101410: 0x202d
    ctx->pc = 0x101410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101414: 0x34a57f7f
    ctx->pc = 0x101414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)32639);
    // 0x101418: 0xc04003a
    ctx->pc = 0x101418u;
    SET_GPR_U32(ctx, 31, 0x101420u);
    ctx->pc = 0x10141Cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1000E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitFont_0x1000e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101420u; }
    }
    if (ctx->pc != 0x101420u) { return; }
    ctx->pc = 0x101420u;
    // 0x101420: 0xaf80814c
    ctx->pc = 0x101420u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934860), GPR_U32(ctx, 0));
    // 0x101424: 0x0
    ctx->pc = 0x101424u;
    // NOP
label_101428:
    // 0x101428: 0xc040c38
    ctx->pc = 0x101428u;
    SET_GPR_U32(ctx, 31, 0x101430u);
    ctx->pc = 0x1030E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101430u; }
    }
    if (ctx->pc != 0x101430u) { return; }
    ctx->pc = 0x101430u;
    // 0x101430: 0xc042074
    ctx->pc = 0x101430u;
    SET_GPR_U32(ctx, 31, 0x101438u);
    ctx->pc = 0x1081D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        hiscoreAnimate_0x1081d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101438u; }
    }
    if (ctx->pc != 0x101438u) { return; }
    ctx->pc = 0x101438u;
    // 0x101438: 0xc0420ba
    ctx->pc = 0x101438u;
    SET_GPR_U32(ctx, 31, 0x101440u);
    ctx->pc = 0x1082E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        hiscoreDraw_0x1082e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101440u; }
    }
    if (ctx->pc != 0x101440u) { return; }
    ctx->pc = 0x101440u;
    // 0x101440: 0xc042378
    ctx->pc = 0x101440u;
    SET_GPR_U32(ctx, 31, 0x101448u);
    ctx->pc = 0x101444u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x108DE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fadeIn_0x108de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101448u; }
    }
    if (ctx->pc != 0x101448u) { return; }
    ctx->pc = 0x101448u;
    // 0x101448: 0xc0414e2
    ctx->pc = 0x101448u;
    SET_GPR_U32(ctx, 31, 0x101450u);
    ctx->pc = 0x105388u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101450u; }
    }
    if (ctx->pc != 0x101450u) { return; }
    ctx->pc = 0x101450u;
    // 0x101450: 0x8f82814c
    ctx->pc = 0x101450u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934860)));
    // 0x101454: 0x2842007f
    ctx->pc = 0x101454u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 127));
    // 0x101458: 0x1440fff3
    ctx->pc = 0x101458u;
    {
        const bool branch_taken_0x101458 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x101458) {
            ctx->pc = 0x101428u;
            goto label_101428;
        }
    }
    ctx->pc = 0x101460u;
label_101460:
    // 0x101460: 0xc040c38
    ctx->pc = 0x101460u;
    SET_GPR_U32(ctx, 31, 0x101468u);
    ctx->pc = 0x1030E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101468u; }
    }
    if (ctx->pc != 0x101468u) { return; }
    ctx->pc = 0x101468u;
    // 0x101468: 0xc042074
    ctx->pc = 0x101468u;
    SET_GPR_U32(ctx, 31, 0x101470u);
    ctx->pc = 0x1081D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        hiscoreAnimate_0x1081d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101470u; }
    }
    if (ctx->pc != 0x101470u) { return; }
    ctx->pc = 0x101470u;
    // 0x101470: 0xc0420ba
    ctx->pc = 0x101470u;
    SET_GPR_U32(ctx, 31, 0x101478u);
    ctx->pc = 0x1082E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        hiscoreDraw_0x1082e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101478u; }
    }
    if (ctx->pc != 0x101478u) { return; }
    ctx->pc = 0x101478u;
    // 0x101478: 0x200202d
    ctx->pc = 0x101478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10147c: 0xc0420f0
    ctx->pc = 0x10147Cu;
    SET_GPR_U32(ctx, 31, 0x101484u);
    ctx->pc = 0x101480u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 125));
    ctx->pc = 0x1083C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawExtender_0x1083c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101484u; }
    }
    if (ctx->pc != 0x101484u) { return; }
    ctx->pc = 0x101484u;
    // 0x101484: 0xc0414e2
    ctx->pc = 0x101484u;
    SET_GPR_U32(ctx, 31, 0x10148Cu);
    ctx->pc = 0x101488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x105388u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10148Cu; }
    }
    if (ctx->pc != 0x10148Cu) { return; }
    ctx->pc = 0x10148Cu;
    // 0x10148c: 0x8f8280c0
    ctx->pc = 0x10148cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934720)));
    // 0x101490: 0x50102a
    ctx->pc = 0x101490u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 16)));
    // 0x101494: 0x5040fff2
    ctx->pc = 0x101494u;
    {
        const bool branch_taken_0x101494 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x101494) {
            ctx->pc = 0x101498u;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x101460u;
            goto label_101460;
        }
    }
    ctx->pc = 0x10149Cu;
    // 0x10149c: 0x0
    ctx->pc = 0x10149cu;
    // NOP
label_1014a0:
    // 0x1014a0: 0xc040c38
    ctx->pc = 0x1014A0u;
    SET_GPR_U32(ctx, 31, 0x1014A8u);
    ctx->pc = 0x1030E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014A8u; }
    }
    if (ctx->pc != 0x1014A8u) { return; }
    ctx->pc = 0x1014A8u;
    // 0x1014a8: 0xc042074
    ctx->pc = 0x1014A8u;
    SET_GPR_U32(ctx, 31, 0x1014B0u);
    ctx->pc = 0x1081D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        hiscoreAnimate_0x1081d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014B0u; }
    }
    if (ctx->pc != 0x1014B0u) { return; }
    ctx->pc = 0x1014B0u;
    // 0x1014b0: 0xc0420ba
    ctx->pc = 0x1014B0u;
    SET_GPR_U32(ctx, 31, 0x1014B8u);
    ctx->pc = 0x1082E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        hiscoreDraw_0x1082e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014B8u; }
    }
    if (ctx->pc != 0x1014B8u) { return; }
    ctx->pc = 0x1014B8u;
    // 0x1014b8: 0x280202d
    ctx->pc = 0x1014b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1014bc: 0xc0420f0
    ctx->pc = 0x1014BCu;
    SET_GPR_U32(ctx, 31, 0x1014C4u);
    ctx->pc = 0x1014C0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 125));
    ctx->pc = 0x1083C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawExtender_0x1083c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014C4u; }
    }
    if (ctx->pc != 0x1014C4u) { return; }
    ctx->pc = 0x1014C4u;
    // 0x1014c4: 0x220202d
    ctx->pc = 0x1014c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1014c8: 0xc0420f0
    ctx->pc = 0x1014C8u;
    SET_GPR_U32(ctx, 31, 0x1014D0u);
    ctx->pc = 0x1014CCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 175));
    ctx->pc = 0x1083C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawExtender_0x1083c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014D0u; }
    }
    if (ctx->pc != 0x1014D0u) { return; }
    ctx->pc = 0x1014D0u;
    // 0x1014d0: 0xc0414e2
    ctx->pc = 0x1014D0u;
    SET_GPR_U32(ctx, 31, 0x1014D8u);
    ctx->pc = 0x1014D4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x105388u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014D8u; }
    }
    if (ctx->pc != 0x1014D8u) { return; }
    ctx->pc = 0x1014D8u;
    // 0x1014d8: 0x8f8280bc
    ctx->pc = 0x1014d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934716)));
    // 0x1014dc: 0x51102a
    ctx->pc = 0x1014dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 17)));
    // 0x1014e0: 0x5040ffef
    ctx->pc = 0x1014E0u;
    {
        const bool branch_taken_0x1014e0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1014e0) {
            ctx->pc = 0x1014E4u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x1014A0u;
            goto label_1014a0;
        }
    }
    ctx->pc = 0x1014E8u;
label_1014e8:
    // 0x1014e8: 0xc040c38
    ctx->pc = 0x1014E8u;
    SET_GPR_U32(ctx, 31, 0x1014F0u);
    ctx->pc = 0x1030E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014F0u; }
    }
    if (ctx->pc != 0x1014F0u) { return; }
    ctx->pc = 0x1014F0u;
    // 0x1014f0: 0xc042074
    ctx->pc = 0x1014F0u;
    SET_GPR_U32(ctx, 31, 0x1014F8u);
    ctx->pc = 0x1081D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        hiscoreAnimate_0x1081d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1014F8u; }
    }
    if (ctx->pc != 0x1014F8u) { return; }
    ctx->pc = 0x1014F8u;
    // 0x1014f8: 0xc0420ba
    ctx->pc = 0x1014F8u;
    SET_GPR_U32(ctx, 31, 0x101500u);
    ctx->pc = 0x1082E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        hiscoreDraw_0x1082e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101500u; }
    }
    if (ctx->pc != 0x101500u) { return; }
    ctx->pc = 0x101500u;
    // 0x101500: 0x280202d
    ctx->pc = 0x101500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101504: 0xc0420f0
    ctx->pc = 0x101504u;
    SET_GPR_U32(ctx, 31, 0x10150Cu);
    ctx->pc = 0x101508u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 125));
    ctx->pc = 0x1083C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawExtender_0x1083c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10150Cu; }
    }
    if (ctx->pc != 0x10150Cu) { return; }
    ctx->pc = 0x10150Cu;
    // 0x10150c: 0x2a0202d
    ctx->pc = 0x10150cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101510: 0xc0420f0
    ctx->pc = 0x101510u;
    SET_GPR_U32(ctx, 31, 0x101518u);
    ctx->pc = 0x101514u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 175));
    ctx->pc = 0x1083C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawExtender_0x1083c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101518u; }
    }
    if (ctx->pc != 0x101518u) { return; }
    ctx->pc = 0x101518u;
    // 0x101518: 0x240202d
    ctx->pc = 0x101518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10151c: 0xc0420f0
    ctx->pc = 0x10151Cu;
    SET_GPR_U32(ctx, 31, 0x101524u);
    ctx->pc = 0x101520u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 225));
    ctx->pc = 0x1083C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawExtender_0x1083c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101524u; }
    }
    if (ctx->pc != 0x101524u) { return; }
    ctx->pc = 0x101524u;
    // 0x101524: 0xc0414e2
    ctx->pc = 0x101524u;
    SET_GPR_U32(ctx, 31, 0x10152Cu);
    ctx->pc = 0x101528u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x105388u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10152Cu; }
    }
    if (ctx->pc != 0x10152Cu) { return; }
    ctx->pc = 0x10152Cu;
    // 0x10152c: 0x8f8280c8
    ctx->pc = 0x10152cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934728)));
    // 0x101530: 0x52102a
    ctx->pc = 0x101530u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 18)));
    // 0x101534: 0x5040ffec
    ctx->pc = 0x101534u;
    {
        const bool branch_taken_0x101534 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x101534) {
            ctx->pc = 0x101538u;
            SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x1014E8u;
            goto label_1014e8;
        }
    }
    ctx->pc = 0x10153Cu;
    // 0x10153c: 0x10000003
    ctx->pc = 0x10153Cu;
    {
        const bool branch_taken_0x10153c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x10153c) {
            ctx->pc = 0x10154Cu;
            goto label_10154c;
        }
    }
    ctx->pc = 0x101544u;
    // 0x101544: 0x0
    ctx->pc = 0x101544u;
    // NOP
label_101548:
    // 0x101548: 0x26770001
    ctx->pc = 0x101548u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 19), 1));
label_10154c:
    // 0x10154c: 0xc040c38
    ctx->pc = 0x10154Cu;
    SET_GPR_U32(ctx, 31, 0x101554u);
    ctx->pc = 0x1030E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101554u; }
    }
    if (ctx->pc != 0x101554u) { return; }
    ctx->pc = 0x101554u;
    // 0x101554: 0xc042074
    ctx->pc = 0x101554u;
    SET_GPR_U32(ctx, 31, 0x10155Cu);
    ctx->pc = 0x1081D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        hiscoreAnimate_0x1081d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10155Cu; }
    }
    if (ctx->pc != 0x10155Cu) { return; }
    ctx->pc = 0x10155Cu;
    // 0x10155c: 0xc0420ba
    ctx->pc = 0x10155Cu;
    SET_GPR_U32(ctx, 31, 0x101564u);
    ctx->pc = 0x1082E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        hiscoreDraw_0x1082e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101564u; }
    }
    if (ctx->pc != 0x101564u) { return; }
    ctx->pc = 0x101564u;
    // 0x101564: 0x280202d
    ctx->pc = 0x101564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101568: 0xc0420f0
    ctx->pc = 0x101568u;
    SET_GPR_U32(ctx, 31, 0x101570u);
    ctx->pc = 0x10156Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 125));
    ctx->pc = 0x1083C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawExtender_0x1083c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101570u; }
    }
    if (ctx->pc != 0x101570u) { return; }
    ctx->pc = 0x101570u;
    // 0x101570: 0x2a0202d
    ctx->pc = 0x101570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101574: 0xc0420f0
    ctx->pc = 0x101574u;
    SET_GPR_U32(ctx, 31, 0x10157Cu);
    ctx->pc = 0x101578u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 175));
    ctx->pc = 0x1083C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawExtender_0x1083c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10157Cu; }
    }
    if (ctx->pc != 0x10157Cu) { return; }
    ctx->pc = 0x10157Cu;
    // 0x10157c: 0x2c0202d
    ctx->pc = 0x10157cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101580: 0xc0420f0
    ctx->pc = 0x101580u;
    SET_GPR_U32(ctx, 31, 0x101588u);
    ctx->pc = 0x101584u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 225));
    ctx->pc = 0x1083C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawExtender_0x1083c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101588u; }
    }
    if (ctx->pc != 0x101588u) { return; }
    ctx->pc = 0x101588u;
    // 0x101588: 0x260202d
    ctx->pc = 0x101588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10158c: 0xc0420f0
    ctx->pc = 0x10158Cu;
    SET_GPR_U32(ctx, 31, 0x101594u);
    ctx->pc = 0x101590u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 275));
    ctx->pc = 0x1083C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawExtender_0x1083c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101594u; }
    }
    if (ctx->pc != 0x101594u) { return; }
    ctx->pc = 0x101594u;
    // 0x101594: 0xc0414e2
    ctx->pc = 0x101594u;
    SET_GPR_U32(ctx, 31, 0x10159Cu);
    ctx->pc = 0x101598u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x105388u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10159Cu; }
    }
    if (ctx->pc != 0x10159Cu) { return; }
    ctx->pc = 0x10159Cu;
    // 0x10159c: 0x8f8280c4
    ctx->pc = 0x10159cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934724)));
    // 0x1015a0: 0x53102a
    ctx->pc = 0x1015a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 19)));
    // 0x1015a4: 0x1040ffe8
    ctx->pc = 0x1015A4u;
    {
        const bool branch_taken_0x1015a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1015A8u;
        SET_GPR_S32(ctx, 3, ((uint32_t)20 << 16));
        if (branch_taken_0x1015a4) {
            ctx->pc = 0x101548u;
            goto label_101548;
        }
    }
    ctx->pc = 0x1015ACu;
    // 0x1015ac: 0x3c020017
    ctx->pc = 0x1015acu;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
    // 0x1015b0: 0x24505be8
    ctx->pc = 0x1015b0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 23528));
    // 0x1015b4: 0x60982d
    ctx->pc = 0x1015b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1015b8: 0x2472e100
    ctx->pc = 0x1015b8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 3), 4294959360));
    // 0x1015bc: 0x24110001
    ctx->pc = 0x1015bcu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
label_1015c0:
    // 0x1015c0: 0xc040c38
    ctx->pc = 0x1015C0u;
    SET_GPR_U32(ctx, 31, 0x1015C8u);
    ctx->pc = 0x1030E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawClearScreen_0x1030e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1015C8u; }
    }
    if (ctx->pc != 0x1015C8u) { return; }
    ctx->pc = 0x1015C8u;
    // 0x1015c8: 0xc042074
    ctx->pc = 0x1015C8u;
    SET_GPR_U32(ctx, 31, 0x1015D0u);
    ctx->pc = 0x1081D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        hiscoreAnimate_0x1081d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1015D0u; }
    }
    if (ctx->pc != 0x1015D0u) { return; }
    ctx->pc = 0x1015D0u;
    // 0x1015d0: 0xc0420ba
    ctx->pc = 0x1015D0u;
    SET_GPR_U32(ctx, 31, 0x1015D8u);
    ctx->pc = 0x1082E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        hiscoreDraw_0x1082e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1015D8u; }
    }
    if (ctx->pc != 0x1015D8u) { return; }
    ctx->pc = 0x1015D8u;
    // 0x1015d8: 0x3c013f80
    ctx->pc = 0x1015d8u;
    SET_GPR_S32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x1015dc: 0x44816000
    ctx->pc = 0x1015dcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x1015e0: 0xc042928
    ctx->pc = 0x1015E0u;
    SET_GPR_U32(ctx, 31, 0x1015E8u);
    ctx->pc = 0x1015E4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x10A4A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeFontSetScale_0x10a4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1015E8u; }
    }
    if (ctx->pc != 0x1015E8u) { return; }
    ctx->pc = 0x1015E8u;
    // 0x1015e8: 0x3c047fff
    ctx->pc = 0x1015e8u;
    SET_GPR_S32(ctx, 4, ((uint32_t)32767 << 16));
    // 0x1015ec: 0xc042924
    ctx->pc = 0x1015ECu;
    SET_GPR_U32(ctx, 31, 0x1015F4u);
    ctx->pc = 0x1015F0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)65535);
    ctx->pc = 0x10A490u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeFontSetColour_0x10a490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1015F4u; }
    }
    if (ctx->pc != 0x1015F4u) { return; }
    ctx->pc = 0x1015F4u;
    // 0x1015f4: 0xc04297c
    ctx->pc = 0x1015F4u;
    SET_GPR_U32(ctx, 31, 0x1015FCu);
    ctx->pc = 0x10A5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1015FCu; }
    }
    if (ctx->pc != 0x1015FCu) { return; }
    ctx->pc = 0x1015FCu;
    // 0x1015fc: 0x40202d
    ctx->pc = 0x1015fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101600: 0x24050050
    ctx->pc = 0x101600u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 80));
    // 0x101604: 0x3c020017
    ctx->pc = 0x101604u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
    // 0x101608: 0x24060064
    ctx->pc = 0x101608u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 100));
    // 0x10160c: 0xc04269a
    ctx->pc = 0x10160Cu;
    SET_GPR_U32(ctx, 31, 0x101614u);
    ctx->pc = 0x101610u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 23520));
    ctx->pc = 0x109A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt_0x109a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101614u; }
    }
    if (ctx->pc != 0x101614u) { return; }
    ctx->pc = 0x101614u;
    // 0x101614: 0xc04295e
    ctx->pc = 0x101614u;
    SET_GPR_U32(ctx, 31, 0x10161Cu);
    ctx->pc = 0x101618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A578u;
    {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10161Cu; }
    }
    if (ctx->pc != 0x10161Cu) { return; }
    ctx->pc = 0x10161Cu;
    // 0x10161c: 0xc04297c
    ctx->pc = 0x10161Cu;
    SET_GPR_U32(ctx, 31, 0x101624u);
    ctx->pc = 0x10A5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101624u; }
    }
    if (ctx->pc != 0x101624u) { return; }
    ctx->pc = 0x101624u;
    // 0x101624: 0x8f8880c0
    ctx->pc = 0x101624u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 28), 4294934720)));
    // 0x101628: 0x40202d
    ctx->pc = 0x101628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10162c: 0x24050258
    ctx->pc = 0x10162cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 600));
    // 0x101630: 0x2406007c
    ctx->pc = 0x101630u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 124));
    // 0x101634: 0xc04269a
    ctx->pc = 0x101634u;
    SET_GPR_U32(ctx, 31, 0x10163Cu);
    ctx->pc = 0x101638u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x109A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt_0x109a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10163Cu; }
    }
    if (ctx->pc != 0x10163Cu) { return; }
    ctx->pc = 0x10163Cu;
    // 0x10163c: 0xc04295e
    ctx->pc = 0x10163Cu;
    SET_GPR_U32(ctx, 31, 0x101644u);
    ctx->pc = 0x101640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A578u;
    {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101644u; }
    }
    if (ctx->pc != 0x101644u) { return; }
    ctx->pc = 0x101644u;
    // 0x101644: 0xc04297c
    ctx->pc = 0x101644u;
    SET_GPR_U32(ctx, 31, 0x10164Cu);
    ctx->pc = 0x10A5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10164Cu; }
    }
    if (ctx->pc != 0x10164Cu) { return; }
    ctx->pc = 0x10164Cu;
    // 0x10164c: 0x40202d
    ctx->pc = 0x10164cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101650: 0x24050050
    ctx->pc = 0x101650u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 80));
    // 0x101654: 0x24060096
    ctx->pc = 0x101654u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 150));
    // 0x101658: 0xc04269a
    ctx->pc = 0x101658u;
    SET_GPR_U32(ctx, 31, 0x101660u);
    ctx->pc = 0x10165Cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 30), 23536));
    ctx->pc = 0x109A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt_0x109a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101660u; }
    }
    if (ctx->pc != 0x101660u) { return; }
    ctx->pc = 0x101660u;
    // 0x101660: 0xc04295e
    ctx->pc = 0x101660u;
    SET_GPR_U32(ctx, 31, 0x101668u);
    ctx->pc = 0x101664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A578u;
    {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101668u; }
    }
    if (ctx->pc != 0x101668u) { return; }
    ctx->pc = 0x101668u;
    // 0x101668: 0xc04297c
    ctx->pc = 0x101668u;
    SET_GPR_U32(ctx, 31, 0x101670u);
    ctx->pc = 0x10A5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101670u; }
    }
    if (ctx->pc != 0x101670u) { return; }
    ctx->pc = 0x101670u;
    // 0x101670: 0x8f8880bc
    ctx->pc = 0x101670u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 28), 4294934716)));
    // 0x101674: 0x40202d
    ctx->pc = 0x101674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101678: 0x24050258
    ctx->pc = 0x101678u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 600));
    // 0x10167c: 0x240600ae
    ctx->pc = 0x10167cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 174));
    // 0x101680: 0xc04269a
    ctx->pc = 0x101680u;
    SET_GPR_U32(ctx, 31, 0x101688u);
    ctx->pc = 0x101684u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x109A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt_0x109a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101688u; }
    }
    if (ctx->pc != 0x101688u) { return; }
    ctx->pc = 0x101688u;
    // 0x101688: 0xc04295e
    ctx->pc = 0x101688u;
    SET_GPR_U32(ctx, 31, 0x101690u);
    ctx->pc = 0x10168Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A578u;
    {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101690u; }
    }
    if (ctx->pc != 0x101690u) { return; }
    ctx->pc = 0x101690u;
    // 0x101690: 0xc04297c
    ctx->pc = 0x101690u;
    SET_GPR_U32(ctx, 31, 0x101698u);
    ctx->pc = 0x10A5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101698u; }
    }
    if (ctx->pc != 0x101698u) { return; }
    ctx->pc = 0x101698u;
    // 0x101698: 0x40202d
    ctx->pc = 0x101698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10169c: 0x24050050
    ctx->pc = 0x10169cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 80));
    // 0x1016a0: 0x3c020017
    ctx->pc = 0x1016a0u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
    // 0x1016a4: 0x240600c8
    ctx->pc = 0x1016a4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 200));
    // 0x1016a8: 0xc04269a
    ctx->pc = 0x1016A8u;
    SET_GPR_U32(ctx, 31, 0x1016B0u);
    ctx->pc = 0x1016ACu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 10984));
    ctx->pc = 0x109A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt_0x109a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1016B0u; }
    }
    if (ctx->pc != 0x1016B0u) { return; }
    ctx->pc = 0x1016B0u;
    // 0x1016b0: 0xc04295e
    ctx->pc = 0x1016B0u;
    SET_GPR_U32(ctx, 31, 0x1016B8u);
    ctx->pc = 0x1016B4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A578u;
    {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1016B8u; }
    }
    if (ctx->pc != 0x1016B8u) { return; }
    ctx->pc = 0x1016B8u;
    // 0x1016b8: 0xc04297c
    ctx->pc = 0x1016B8u;
    SET_GPR_U32(ctx, 31, 0x1016C0u);
    ctx->pc = 0x10A5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1016C0u; }
    }
    if (ctx->pc != 0x1016C0u) { return; }
    ctx->pc = 0x1016C0u;
    // 0x1016c0: 0x8f8880c8
    ctx->pc = 0x1016c0u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 28), 4294934728)));
    // 0x1016c4: 0x40202d
    ctx->pc = 0x1016c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1016c8: 0x24050258
    ctx->pc = 0x1016c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 600));
    // 0x1016cc: 0x240600e0
    ctx->pc = 0x1016ccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 224));
    // 0x1016d0: 0xc04269a
    ctx->pc = 0x1016D0u;
    SET_GPR_U32(ctx, 31, 0x1016D8u);
    ctx->pc = 0x1016D4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x109A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt_0x109a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1016D8u; }
    }
    if (ctx->pc != 0x1016D8u) { return; }
    ctx->pc = 0x1016D8u;
    // 0x1016d8: 0xc04295e
    ctx->pc = 0x1016D8u;
    SET_GPR_U32(ctx, 31, 0x1016E0u);
    ctx->pc = 0x1016DCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A578u;
    {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1016E0u; }
    }
    if (ctx->pc != 0x1016E0u) { return; }
    ctx->pc = 0x1016E0u;
    // 0x1016e0: 0xc04297c
    ctx->pc = 0x1016E0u;
    SET_GPR_U32(ctx, 31, 0x1016E8u);
    ctx->pc = 0x10A5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1016E8u; }
    }
    if (ctx->pc != 0x1016E8u) { return; }
    ctx->pc = 0x1016E8u;
    // 0x1016e8: 0x40202d
    ctx->pc = 0x1016e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1016ec: 0x24050050
    ctx->pc = 0x1016ecu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 80));
    // 0x1016f0: 0x3c020017
    ctx->pc = 0x1016f0u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
    // 0x1016f4: 0x240600fa
    ctx->pc = 0x1016f4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 250));
    // 0x1016f8: 0xc04269a
    ctx->pc = 0x1016F8u;
    SET_GPR_U32(ctx, 31, 0x101700u);
    ctx->pc = 0x1016FCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 11000));
    ctx->pc = 0x109A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt_0x109a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101700u; }
    }
    if (ctx->pc != 0x101700u) { return; }
    ctx->pc = 0x101700u;
    // 0x101700: 0xc04295e
    ctx->pc = 0x101700u;
    SET_GPR_U32(ctx, 31, 0x101708u);
    ctx->pc = 0x101704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A578u;
    {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101708u; }
    }
    if (ctx->pc != 0x101708u) { return; }
    ctx->pc = 0x101708u;
    // 0x101708: 0xc04297c
    ctx->pc = 0x101708u;
    SET_GPR_U32(ctx, 31, 0x101710u);
    ctx->pc = 0x10A5F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memGetBuff_0x10a5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101710u; }
    }
    if (ctx->pc != 0x101710u) { return; }
    ctx->pc = 0x101710u;
    // 0x101710: 0x8f8880c4
    ctx->pc = 0x101710u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 28), 4294934724)));
    // 0x101714: 0x40202d
    ctx->pc = 0x101714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101718: 0x24050258
    ctx->pc = 0x101718u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 600));
    // 0x10171c: 0x24060112
    ctx->pc = 0x10171cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 274));
    // 0x101720: 0xc04269a
    ctx->pc = 0x101720u;
    SET_GPR_U32(ctx, 31, 0x101728u);
    ctx->pc = 0x101724u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x109A68u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeFontPrintfAt_0x109a68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101728u; }
    }
    if (ctx->pc != 0x101728u) { return; }
    ctx->pc = 0x101728u;
    // 0x101728: 0xc04295e
    ctx->pc = 0x101728u;
    SET_GPR_U32(ctx, 31, 0x101730u);
    ctx->pc = 0x10172Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10A578u;
    {
        const uint32_t __entryPc = ctx->pc;
        memUseBuff_0x10a578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101730u; }
    }
    if (ctx->pc != 0x101730u) { return; }
    ctx->pc = 0x101730u;
    // 0x101730: 0x8f8280ac
    ctx->pc = 0x101730u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934700)));
    // 0x101734: 0x28420065
    ctx->pc = 0x101734u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 101));
    // 0x101738: 0x14400025
    ctx->pc = 0x101738u;
    {
        const bool branch_taken_0x101738 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10173Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x101738) {
            ctx->pc = 0x1017D0u;
            goto label_1017d0;
        }
    }
    ctx->pc = 0x101740u;
    // 0x101740: 0x282d
    ctx->pc = 0x101740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101744: 0xc0458fe
    ctx->pc = 0x101744u;
    SET_GPR_U32(ctx, 31, 0x10174Cu);
    ctx->pc = 0x101748u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 19), 4294959360));
    ctx->pc = 0x1163F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadRead_0x1163f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10174Cu; }
    }
    if (ctx->pc != 0x10174Cu) { return; }
    ctx->pc = 0x10174Cu;
    // 0x10174c: 0x202d
    ctx->pc = 0x10174cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101750: 0xc04591e
    ctx->pc = 0x101750u;
    SET_GPR_U32(ctx, 31, 0x101758u);
    ctx->pc = 0x101754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x116478u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadGetState_0x116478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101758u; }
    }
    if (ctx->pc != 0x101758u) { return; }
    ctx->pc = 0x101758u;
    // 0x101758: 0x40182d
    ctx->pc = 0x101758u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10175c: 0x24020006
    ctx->pc = 0x10175cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
    // 0x101760: 0x10620006
    ctx->pc = 0x101760u;
    {
        const bool branch_taken_0x101760 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x101764u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934804), GPR_U32(ctx, 3));
        if (branch_taken_0x101760) {
            ctx->pc = 0x10177Cu;
            goto label_10177c;
        }
    }
    ctx->pc = 0x101768u;
    // 0x101768: 0x24020002
    ctx->pc = 0x101768u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x10176c: 0x50620004
    ctx->pc = 0x10176Cu;
    {
        const bool branch_taken_0x10176c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x10176c) {
            ctx->pc = 0x101770u;
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
            ctx->pc = 0x101780u;
            goto label_101780;
        }
    }
    ctx->pc = 0x101774u;
    // 0x101774: 0x10000006
    ctx->pc = 0x101774u;
    {
        const bool branch_taken_0x101774 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x101778u;
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294934802), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x101774) {
            ctx->pc = 0x101790u;
            goto label_101790;
        }
    }
    ctx->pc = 0x10177Cu;
label_10177c:
    // 0x10177c: 0x92420002
    ctx->pc = 0x10177cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_101780:
    // 0x101780: 0x92430003
    ctx->pc = 0x101780u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x101784: 0x21200
    ctx->pc = 0x101784u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x101788: 0x431027
    ctx->pc = 0x101788u;
    SET_GPR_U32(ctx, 2, NOR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10178c: 0xa7828112
    ctx->pc = 0x10178cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294934802), (uint16_t)GPR_U32(ctx, 2));
label_101790:
    // 0x101790: 0x97828112
    ctx->pc = 0x101790u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294934802)));
    // 0x101794: 0x30420040
    ctx->pc = 0x101794u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 64));
    // 0x101798: 0x14400007
    ctx->pc = 0x101798u;
    {
        const bool branch_taken_0x101798 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10179Cu;
        SET_GPR_S32(ctx, 2, ((uint32_t)19 << 16));
        if (branch_taken_0x101798) {
            ctx->pc = 0x1017B8u;
            goto label_1017b8;
        }
    }
    ctx->pc = 0x1017A0u;
    // 0x1017a0: 0x24431300
    ctx->pc = 0x1017a0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4864));
    // 0x1017a4: 0x84620012
    ctx->pc = 0x1017a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x1017a8: 0x50510009
    ctx->pc = 0x1017A8u;
    {
        const bool branch_taken_0x1017a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 17));
        if (branch_taken_0x1017a8) {
            ctx->pc = 0x1017ACu;
            WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x1017D0u;
            goto label_1017d0;
        }
    }
    ctx->pc = 0x1017B0u;
    // 0x1017b0: 0x10000007
    ctx->pc = 0x1017B0u;
    {
        const bool branch_taken_0x1017b0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x1017b0) {
            ctx->pc = 0x1017D0u;
            goto label_1017d0;
        }
    }
    ctx->pc = 0x1017B8u;
label_1017b8:
    // 0x1017b8: 0x24431300
    ctx->pc = 0x1017b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4864));
    // 0x1017bc: 0x84620012
    ctx->pc = 0x1017bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x1017c0: 0x14400003
    ctx->pc = 0x1017C0u;
    {
        const bool branch_taken_0x1017c0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1017c0) {
            ctx->pc = 0x1017D0u;
            goto label_1017d0;
        }
    }
    ctx->pc = 0x1017C8u;
    // 0x1017c8: 0xa4710012
    ctx->pc = 0x1017c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 18), (uint16_t)GPR_U32(ctx, 17));
    // 0x1017cc: 0xaf918098
    ctx->pc = 0x1017ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934680), GPR_U32(ctx, 17));
label_1017d0:
    // 0x1017d0: 0xc042970
    ctx->pc = 0x1017D0u;
    SET_GPR_U32(ctx, 31, 0x1017D8u);
    ctx->pc = 0x10A5C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        memFlushBuff_0x10a5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1017D8u; }
    }
    if (ctx->pc != 0x1017D8u) { return; }
    ctx->pc = 0x1017D8u;
    // 0x1017d8: 0x280202d
    ctx->pc = 0x1017d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1017dc: 0xc0420f0
    ctx->pc = 0x1017DCu;
    SET_GPR_U32(ctx, 31, 0x1017E4u);
    ctx->pc = 0x1017E0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 125));
    ctx->pc = 0x1083C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawExtender_0x1083c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1017E4u; }
    }
    if (ctx->pc != 0x1017E4u) { return; }
    ctx->pc = 0x1017E4u;
    // 0x1017e4: 0x2a0202d
    ctx->pc = 0x1017e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1017e8: 0xc0420f0
    ctx->pc = 0x1017E8u;
    SET_GPR_U32(ctx, 31, 0x1017F0u);
    ctx->pc = 0x1017ECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 175));
    ctx->pc = 0x1083C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawExtender_0x1083c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1017F0u; }
    }
    if (ctx->pc != 0x1017F0u) { return; }
    ctx->pc = 0x1017F0u;
    // 0x1017f0: 0x2c0202d
    ctx->pc = 0x1017f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1017f4: 0xc0420f0
    ctx->pc = 0x1017F4u;
    SET_GPR_U32(ctx, 31, 0x1017FCu);
    ctx->pc = 0x1017F8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 225));
    ctx->pc = 0x1083C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawExtender_0x1083c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1017FCu; }
    }
    if (ctx->pc != 0x1017FCu) { return; }
    ctx->pc = 0x1017FCu;
    // 0x1017fc: 0x2e0202d
    ctx->pc = 0x1017fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101800: 0xc0420f0
    ctx->pc = 0x101800u;
    SET_GPR_U32(ctx, 31, 0x101808u);
    ctx->pc = 0x101804u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 275));
    ctx->pc = 0x1083C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawExtender_0x1083c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101808u; }
    }
    if (ctx->pc != 0x101808u) { return; }
    ctx->pc = 0x101808u;
    // 0x101808: 0xc0414e2
    ctx->pc = 0x101808u;
    SET_GPR_U32(ctx, 31, 0x101810u);
    ctx->pc = 0x105388u;
    {
        const uint32_t __entryPc = ctx->pc;
        drawFlipScreen_0x105388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101810u; }
    }
    if (ctx->pc != 0x101810u) { return; }
    ctx->pc = 0x101810u;
    // 0x101810: 0x8f8280ac
    ctx->pc = 0x101810u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934700)));
    // 0x101814: 0x8f838098
    ctx->pc = 0x101814u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934680)));
    // 0x101818: 0x24420001
    ctx->pc = 0x101818u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x10181c: 0x1060ff68
    ctx->pc = 0x10181Cu;
    {
        const bool branch_taken_0x10181c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x101820u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934700), GPR_U32(ctx, 2));
        if (branch_taken_0x10181c) {
            ctx->pc = 0x1015C0u;
            goto label_1015c0;
        }
    }
    ctx->pc = 0x101824u;
    // 0x101824: 0xaf80813c
    ctx->pc = 0x101824u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934844), GPR_U32(ctx, 0));
    // 0x101828: 0xaf8080a4
    ctx->pc = 0x101828u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934692), GPR_U32(ctx, 0));
    // 0x10182c: 0xaf80814c
    ctx->pc = 0x10182cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934860), GPR_U32(ctx, 0));
    // 0x101830: 0xaf80816c
    ctx->pc = 0x101830u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934892), GPR_U32(ctx, 0));
    // 0x101834: 0xaf8080c4
    ctx->pc = 0x101834u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934724), GPR_U32(ctx, 0));
    // 0x101838: 0xaf8080c8
    ctx->pc = 0x101838u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934728), GPR_U32(ctx, 0));
    // 0x10183c: 0xaf8080bc
    ctx->pc = 0x10183cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934716), GPR_U32(ctx, 0));
    // 0x101840: 0xc042896
    ctx->pc = 0x101840u;
    SET_GPR_U32(ctx, 31, 0x101848u);
    ctx->pc = 0x101844u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934720), GPR_U32(ctx, 0));
    ctx->pc = 0x10A258u;
    {
        const uint32_t __entryPc = ctx->pc;
        memFree_0x10a258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101848u; }
    }
    if (ctx->pc != 0x101848u) { return; }
    ctx->pc = 0x101848u;
    // 0x101848: 0xdfbf0090
    ctx->pc = 0x101848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10184c: 0xdfbe0080
    ctx->pc = 0x10184cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x101850: 0xdfb70070
    ctx->pc = 0x101850u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x101854: 0xdfb60060
    ctx->pc = 0x101854u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x101858: 0xdfb50050
    ctx->pc = 0x101858u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10185c: 0xdfb40040
    ctx->pc = 0x10185cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x101860: 0xdfb30030
    ctx->pc = 0x101860u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101864: 0xdfb20020
    ctx->pc = 0x101864u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101868: 0xdfb10010
    ctx->pc = 0x101868u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10186c: 0xdfb00000
    ctx->pc = 0x10186cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101870: 0x80410c6
    ctx->pc = 0x101870u;
    ctx->pc = 0x101874u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
    ctx->pc = 0x104318u;
    loadPackage_0x104318(rdram, ctx, runtime); return;
    ctx->pc = 0x101878u;
}
