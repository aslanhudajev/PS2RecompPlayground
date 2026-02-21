#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_heal_players
// Address: 0x232690 - 0x23280c
void do_heal_players_0x232690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x232690u;

    // 0x232690: 0x27bdff40
    ctx->pc = 0x232690u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x232694: 0xffbf0090
    ctx->pc = 0x232694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x232698: 0xffb70080
    ctx->pc = 0x232698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x23269c: 0xffb60070
    ctx->pc = 0x23269cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x2326a0: 0xffb50060
    ctx->pc = 0x2326a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2326a4: 0xffb40050
    ctx->pc = 0x2326a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2326a8: 0xffb30040
    ctx->pc = 0x2326a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2326ac: 0xffb20030
    ctx->pc = 0x2326acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2326b0: 0xffb10020
    ctx->pc = 0x2326b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2326b4: 0xffb00010
    ctx->pc = 0x2326b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2326b8: 0xe7b600b0
    ctx->pc = 0x2326b8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2326bc: 0xe7b500a8
    ctx->pc = 0x2326bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2326c0: 0xe7b400a0
    ctx->pc = 0x2326c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2326c4: 0x46006546
    ctx->pc = 0x2326c4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2326c8: 0x80882d
    ctx->pc = 0x2326c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2326cc: 0xa0b82d
    ctx->pc = 0x2326ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2326d0: 0x8e232ac0
    ctx->pc = 0x2326d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 10944)));
    // 0x2326d4: 0x2862004b
    ctx->pc = 0x2326d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 75));
    // 0x2326d8: 0x1440003a
    ctx->pc = 0x2326D8u;
    {
        const bool branch_taken_0x2326d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2326DCu;
        SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2326d8) {
            ctx->pc = 0x2327C4u;
            goto label_2327c4;
        }
    }
    ctx->pc = 0x2326E0u;
    // 0x2326e0: 0x2462ffb5
    ctx->pc = 0x2326e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967221));
    // 0x2326e4: 0x4482a000
    ctx->pc = 0x2326e4u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 2);
    // 0x2326e8: 0x4680a520
    ctx->pc = 0x2326e8u;
    ctx->f[20] = FPU_CVT_S_W(*(int32_t*)&ctx->f[20]);
    // 0x2326ec: 0x3c013c83
    ctx->pc = 0x2326ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15491 << 16));
    // 0x2326f0: 0x3421126f
    ctx->pc = 0x2326f0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4719));
    // 0x2326f4: 0x44810000
    ctx->pc = 0x2326f4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2326f8: 0x4600a502
    ctx->pc = 0x2326f8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2326fc: 0x3c013dcc
    ctx->pc = 0x2326fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x232700: 0x3421cccd
    ctx->pc = 0x232700u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x232704: 0x44810000
    ctx->pc = 0x232704u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x232708: 0x4600a500
    ctx->pc = 0x232708u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x23270c: 0xc08c97e
    ctx->pc = 0x23270Cu;
    SET_GPR_U32(ctx, 31, 0x232714u);
    ctx->pc = 0x232710u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    ctx->pc = 0x2325F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        heal_player_0x2325f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232714u; }
    }
    if (ctx->pc != 0x232714u) { return; }
    ctx->pc = 0x232714u;
    // 0x232714: 0x24130032
    ctx->pc = 0x232714u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 50));
    // 0x232718: 0x902d
    ctx->pc = 0x232718u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23271c: 0x3c020032
    ctx->pc = 0x23271cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x232720: 0x24561bc0
    ctx->pc = 0x232720u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x232724: 0x24152b00
    ctx->pc = 0x232724u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x232728: 0x24140001
    ctx->pc = 0x232728u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x23272c: 0x3c013f00
    ctx->pc = 0x23272cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x232730: 0x4481b000
    ctx->pc = 0x232730u;
    *(uint32_t*)&ctx->f[22] = GPR_U32(ctx, 1);
    // 0x232734: 0x8e220000
    ctx->pc = 0x232734u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_232738:
    // 0x232738: 0x1242001a
    ctx->pc = 0x232738u;
    {
        const bool branch_taken_0x232738 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 2));
        ctx->pc = 0x23273Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x232738) {
            ctx->pc = 0x2327A4u;
            goto label_2327a4;
        }
    }
    ctx->pc = 0x232740u;
    // 0x232740: 0x568021
    ctx->pc = 0x232740u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x232744: 0x8e0200fc
    ctx->pc = 0x232744u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x232748: 0x54540017
    ctx->pc = 0x232748u;
    {
        const bool branch_taken_0x232748 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 20));
        if (branch_taken_0x232748) {
            ctx->pc = 0x23274Cu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x2327A8u;
            goto label_2327a8;
        }
    }
    ctx->pc = 0x232750u;
    // 0x232750: 0xc62c0050
    ctx->pc = 0x232750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x232754: 0xc6000050
    ctx->pc = 0x232754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232758: 0x46006301
    ctx->pc = 0x232758u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x23275c: 0xe7ac0000
    ctx->pc = 0x23275cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x232760: 0xc6200054
    ctx->pc = 0x232760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232764: 0xc6010054
    ctx->pc = 0x232764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232768: 0x46010001
    ctx->pc = 0x232768u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x23276c: 0xe7a00004
    ctx->pc = 0x23276cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x232770: 0xc62d0058
    ctx->pc = 0x232770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x232774: 0xc6000058
    ctx->pc = 0x232774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x232778: 0x46006b41
    ctx->pc = 0x232778u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x23277c: 0xc0b5c34
    ctx->pc = 0x23277Cu;
    SET_GPR_U32(ctx, 31, 0x232784u);
    ctx->pc = 0x232780u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232784u; }
    }
    if (ctx->pc != 0x232784u) { return; }
    ctx->pc = 0x232784u;
    // 0x232784: 0xc6210120
    ctx->pc = 0x232784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232788: 0x46010034
    ctx->pc = 0x232788u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23278c: 0x0
    ctx->pc = 0x23278cu;
    // NOP
    // 0x232790: 0x45000004
    ctx->pc = 0x232790u;
    {
        const bool branch_taken_0x232790 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x232794u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x232790) {
            ctx->pc = 0x2327A4u;
            goto label_2327a4;
        }
    }
    ctx->pc = 0x232798u;
    // 0x232798: 0x4614ab02
    ctx->pc = 0x232798u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x23279c: 0xc08c97e
    ctx->pc = 0x23279Cu;
    SET_GPR_U32(ctx, 31, 0x2327A4u);
    ctx->pc = 0x2327A0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
    ctx->pc = 0x2325F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        heal_player_0x2325f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2327A4u; }
    }
    if (ctx->pc != 0x2327A4u) { return; }
    ctx->pc = 0x2327A4u;
label_2327a4:
    // 0x2327a4: 0x26520001
    ctx->pc = 0x2327a4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_2327a8:
    // 0x2327a8: 0x2a420004
    ctx->pc = 0x2327a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
    // 0x2327ac: 0x5440ffe2
    ctx->pc = 0x2327ACu;
    {
        const bool branch_taken_0x2327ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2327ac) {
            ctx->pc = 0x2327B0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->pc = 0x232738u;
            goto label_232738;
        }
    }
    ctx->pc = 0x2327B4u;
    // 0x2327b4: 0x24040093
    ctx->pc = 0x2327b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 147));
    // 0x2327b8: 0x8e250000
    ctx->pc = 0x2327b8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2327bc: 0xc0a3a1c
    ctx->pc = 0x2327BCu;
    SET_GPR_U32(ctx, 31, 0x2327C4u);
    ctx->pc = 0x2327C0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 80));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2327C4u; }
    }
    if (ctx->pc != 0x2327C4u) { return; }
    ctx->pc = 0x2327C4u;
label_2327c4:
    // 0x2327c4: 0x6600003
    ctx->pc = 0x2327C4u;
    {
        const bool branch_taken_0x2327c4 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x2327C8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2327c4) {
            ctx->pc = 0x2327D4u;
            goto label_2327d4;
        }
    }
    ctx->pc = 0x2327CCu;
    // 0x2327cc: 0xc09fdac
    ctx->pc = 0x2327CCu;
    SET_GPR_U32(ctx, 31, 0x2327D4u);
    ctx->pc = 0x2327D0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27F6B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartHealFx_0x27f6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2327D4u; }
    }
    if (ctx->pc != 0x2327D4u) { return; }
    ctx->pc = 0x2327D4u;
label_2327d4:
    // 0x2327d4: 0xdfbf0090
    ctx->pc = 0x2327d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2327d8: 0xdfb70080
    ctx->pc = 0x2327d8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2327dc: 0xdfb60070
    ctx->pc = 0x2327dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2327e0: 0xdfb50060
    ctx->pc = 0x2327e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2327e4: 0xdfb40050
    ctx->pc = 0x2327e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2327e8: 0xdfb30040
    ctx->pc = 0x2327e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2327ec: 0xdfb20030
    ctx->pc = 0x2327ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2327f0: 0xdfb10020
    ctx->pc = 0x2327f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2327f4: 0xdfb00010
    ctx->pc = 0x2327f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2327f8: 0xc7b600b0
    ctx->pc = 0x2327f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2327fc: 0xc7b500a8
    ctx->pc = 0x2327fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x232800: 0xc7b400a0
    ctx->pc = 0x232800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x232804: 0x3e00008
    ctx->pc = 0x232804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232808u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x232738u: goto label_232738;
            case 0x2327A4u: goto label_2327a4;
            case 0x2327A8u: goto label_2327a8;
            case 0x2327C4u: goto label_2327c4;
            case 0x2327D4u: goto label_2327d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23280Cu;
}
