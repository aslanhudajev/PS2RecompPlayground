#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: loadPackage
// Address: 0x104318 - 0x105388
void loadPackage_0x104318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x104318u;

    // 0x104318: 0x27bdfe60
    ctx->pc = 0x104318u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x10431c: 0x3c040017
    ctx->pc = 0x10431cu;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x104320: 0x8f8582bc
    ctx->pc = 0x104320u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
    // 0x104324: 0x24842fa8
    ctx->pc = 0x104324u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12200));
    // 0x104328: 0xffbf0190
    ctx->pc = 0x104328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 31));
    // 0x10432c: 0xffbe0180
    ctx->pc = 0x10432cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 30));
    // 0x104330: 0xffb70170
    ctx->pc = 0x104330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 23));
    // 0x104334: 0xffb60160
    ctx->pc = 0x104334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 22));
    // 0x104338: 0xffb50150
    ctx->pc = 0x104338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 21));
    // 0x10433c: 0xffb40140
    ctx->pc = 0x10433cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x104340: 0xffb30130
    ctx->pc = 0x104340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
    // 0x104344: 0xffb20120
    ctx->pc = 0x104344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x104348: 0xffb10110
    ctx->pc = 0x104348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x10434c: 0xc043ef8
    ctx->pc = 0x10434Cu;
    SET_GPR_U32(ctx, 31, 0x104354u);
    ctx->pc = 0x104350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    ctx->pc = 0x10FBE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePrintf_0x10fbe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104354u; }
    }
    if (ctx->pc != 0x104354u) { return; }
    ctx->pc = 0x104354u;
    // 0x104354: 0x8f828178
    ctx->pc = 0x104354u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
    // 0x104358: 0x14400007
    ctx->pc = 0x104358u;
    {
        const bool branch_taken_0x104358 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10435Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 64));
        if (branch_taken_0x104358) {
            ctx->pc = 0x104378u;
            goto label_104378;
        }
    }
    ctx->pc = 0x104360u;
    // 0x104360: 0xc04205e
    ctx->pc = 0x104360u;
    SET_GPR_U32(ctx, 31, 0x104368u);
    ctx->pc = 0x108178u;
    {
        const uint32_t __entryPc = ctx->pc;
        initialiseMem_0x108178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104368u; }
    }
    if (ctx->pc != 0x104368u) { return; }
    ctx->pc = 0x104368u;
    // 0x104368: 0x8f8480b8
    ctx->pc = 0x104368u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294934712)));
    // 0x10436c: 0xc04239e
    ctx->pc = 0x10436Cu;
    SET_GPR_U32(ctx, 31, 0x104374u);
    ctx->pc = 0x104370u;
    SET_GPR_S32(ctx, 5, ((uint32_t)32 << 16));
    ctx->pc = 0x108E78u;
    {
        const uint32_t __entryPc = ctx->pc;
        gfxMemInit_0x108e78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104374u; }
    }
    if (ctx->pc != 0x104374u) { return; }
    ctx->pc = 0x104374u;
    // 0x104374: 0x24040040
    ctx->pc = 0x104374u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 64));
label_104378:
    // 0x104378: 0xc0423a2
    ctx->pc = 0x104378u;
    SET_GPR_U32(ctx, 31, 0x104380u);
    ctx->pc = 0x10437Cu;
    SET_GPR_S32(ctx, 5, ((uint32_t)32 << 16));
    ctx->pc = 0x108E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        bigmemalign_0x108e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104380u; }
    }
    if (ctx->pc != 0x104380u) { return; }
    ctx->pc = 0x104380u;
    // 0x104380: 0x40282d
    ctx->pc = 0x104380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104384: 0x8f90816c
    ctx->pc = 0x104384u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294934892)));
    // 0x104388: 0x16000006
    ctx->pc = 0x104388u;
    {
        const bool branch_taken_0x104388 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x10438Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935228), GPR_U32(ctx, 5));
        if (branch_taken_0x104388) {
            ctx->pc = 0x1043A4u;
            goto label_1043a4;
        }
    }
    ctx->pc = 0x104390u;
    // 0x104390: 0x3c040017
    ctx->pc = 0x104390u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x104394: 0x3c060020
    ctx->pc = 0x104394u;
    SET_GPR_S32(ctx, 6, ((uint32_t)32 << 16));
    // 0x104398: 0xc040a1c
    ctx->pc = 0x104398u;
    SET_GPR_U32(ctx, 31, 0x1043A0u);
    ctx->pc = 0x10439Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12224));
    ctx->pc = 0x102870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeLoadFile_0x102870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1043A0u; }
    }
    if (ctx->pc != 0x1043A0u) { return; }
    ctx->pc = 0x1043A0u;
    // 0x1043a0: 0x8f90816c
    ctx->pc = 0x1043a0u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294934892)));
label_1043a4:
    // 0x1043a4: 0x24020001
    ctx->pc = 0x1043a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1043a8: 0x1602002e
    ctx->pc = 0x1043A8u;
    {
        const bool branch_taken_0x1043a8 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1043ACu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1043a8) {
            ctx->pc = 0x104464u;
            goto label_104464;
        }
    }
    ctx->pc = 0x1043B0u;
    // 0x1043b0: 0x8f838170
    ctx->pc = 0x1043b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
    // 0x1043b4: 0x14700007
    ctx->pc = 0x1043B4u;
    {
        const bool branch_taken_0x1043b4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 16));
        ctx->pc = 0x1043B8u;
        SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
        if (branch_taken_0x1043b4) {
            ctx->pc = 0x1043D4u;
            goto label_1043d4;
        }
    }
    ctx->pc = 0x1043BCu;
    // 0x1043bc: 0x8f8582bc
    ctx->pc = 0x1043bcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
    // 0x1043c0: 0x24842fe0
    ctx->pc = 0x1043c0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12256));
    // 0x1043c4: 0xc040a1c
    ctx->pc = 0x1043C4u;
    SET_GPR_U32(ctx, 31, 0x1043CCu);
    ctx->pc = 0x1043C8u;
    SET_GPR_S32(ctx, 6, ((uint32_t)32 << 16));
    ctx->pc = 0x102870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeLoadFile_0x102870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1043CCu; }
    }
    if (ctx->pc != 0x1043CCu) { return; }
    ctx->pc = 0x1043CCu;
    // 0x1043cc: 0x8f838170
    ctx->pc = 0x1043ccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
    // 0x1043d0: 0x24020002
    ctx->pc = 0x1043d0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_1043d4:
    // 0x1043d4: 0x14620008
    ctx->pc = 0x1043D4u;
    {
        const bool branch_taken_0x1043d4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1043D8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1043d4) {
            ctx->pc = 0x1043F8u;
            goto label_1043f8;
        }
    }
    ctx->pc = 0x1043DCu;
    // 0x1043dc: 0x3c040017
    ctx->pc = 0x1043dcu;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x1043e0: 0x8f8582bc
    ctx->pc = 0x1043e0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
    // 0x1043e4: 0x24843000
    ctx->pc = 0x1043e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12288));
    // 0x1043e8: 0xc040a1c
    ctx->pc = 0x1043E8u;
    SET_GPR_U32(ctx, 31, 0x1043F0u);
    ctx->pc = 0x1043ECu;
    SET_GPR_S32(ctx, 6, ((uint32_t)32 << 16));
    ctx->pc = 0x102870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeLoadFile_0x102870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1043F0u; }
    }
    if (ctx->pc != 0x1043F0u) { return; }
    ctx->pc = 0x1043F0u;
    // 0x1043f0: 0x8f838170
    ctx->pc = 0x1043f0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
    // 0x1043f4: 0x24020003
    ctx->pc = 0x1043f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_1043f8:
    // 0x1043f8: 0x14620008
    ctx->pc = 0x1043F8u;
    {
        const bool branch_taken_0x1043f8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1043FCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1043f8) {
            ctx->pc = 0x10441Cu;
            goto label_10441c;
        }
    }
    ctx->pc = 0x104400u;
    // 0x104400: 0x3c040017
    ctx->pc = 0x104400u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x104404: 0x8f8582bc
    ctx->pc = 0x104404u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
    // 0x104408: 0x24843020
    ctx->pc = 0x104408u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12320));
    // 0x10440c: 0xc040a1c
    ctx->pc = 0x10440Cu;
    SET_GPR_U32(ctx, 31, 0x104414u);
    ctx->pc = 0x104410u;
    SET_GPR_S32(ctx, 6, ((uint32_t)32 << 16));
    ctx->pc = 0x102870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeLoadFile_0x102870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104414u; }
    }
    if (ctx->pc != 0x104414u) { return; }
    ctx->pc = 0x104414u;
    // 0x104414: 0x8f838170
    ctx->pc = 0x104414u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
    // 0x104418: 0x24020004
    ctx->pc = 0x104418u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_10441c:
    // 0x10441c: 0x14620008
    ctx->pc = 0x10441Cu;
    {
        const bool branch_taken_0x10441c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x104420u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x10441c) {
            ctx->pc = 0x104440u;
            goto label_104440;
        }
    }
    ctx->pc = 0x104424u;
    // 0x104424: 0x3c040017
    ctx->pc = 0x104424u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x104428: 0x8f8582bc
    ctx->pc = 0x104428u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
    // 0x10442c: 0x24843040
    ctx->pc = 0x10442cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12352));
    // 0x104430: 0xc040a1c
    ctx->pc = 0x104430u;
    SET_GPR_U32(ctx, 31, 0x104438u);
    ctx->pc = 0x104434u;
    SET_GPR_S32(ctx, 6, ((uint32_t)32 << 16));
    ctx->pc = 0x102870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeLoadFile_0x102870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104438u; }
    }
    if (ctx->pc != 0x104438u) { return; }
    ctx->pc = 0x104438u;
    // 0x104438: 0x8f838170
    ctx->pc = 0x104438u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
    // 0x10443c: 0x24020005
    ctx->pc = 0x10443cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_104440:
    // 0x104440: 0x14620007
    ctx->pc = 0x104440u;
    {
        const bool branch_taken_0x104440 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x104444u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294934892)));
        if (branch_taken_0x104440) {
            ctx->pc = 0x104460u;
            goto label_104460;
        }
    }
    ctx->pc = 0x104448u;
    // 0x104448: 0x3c040017
    ctx->pc = 0x104448u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10444c: 0x8f8582bc
    ctx->pc = 0x10444cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
    // 0x104450: 0x24843060
    ctx->pc = 0x104450u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12384));
    // 0x104454: 0xc040a1c
    ctx->pc = 0x104454u;
    SET_GPR_U32(ctx, 31, 0x10445Cu);
    ctx->pc = 0x104458u;
    SET_GPR_S32(ctx, 6, ((uint32_t)32 << 16));
    ctx->pc = 0x102870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeLoadFile_0x102870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10445Cu; }
    }
    if (ctx->pc != 0x10445Cu) { return; }
    ctx->pc = 0x10445Cu;
    // 0x10445c: 0x8f90816c
    ctx->pc = 0x10445cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294934892)));
label_104460:
    // 0x104460: 0x24020002
    ctx->pc = 0x104460u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_104464:
    // 0x104464: 0x1602002e
    ctx->pc = 0x104464u;
    {
        const bool branch_taken_0x104464 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x104468u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x104464) {
            ctx->pc = 0x104520u;
            goto label_104520;
        }
    }
    ctx->pc = 0x10446Cu;
    // 0x10446c: 0x8f838170
    ctx->pc = 0x10446cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
    // 0x104470: 0x24020001
    ctx->pc = 0x104470u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x104474: 0x14620006
    ctx->pc = 0x104474u;
    {
        const bool branch_taken_0x104474 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x104478u;
        SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
        if (branch_taken_0x104474) {
            ctx->pc = 0x104490u;
            goto label_104490;
        }
    }
    ctx->pc = 0x10447Cu;
    // 0x10447c: 0x8f8582bc
    ctx->pc = 0x10447cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
    // 0x104480: 0x24843080
    ctx->pc = 0x104480u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12416));
    // 0x104484: 0xc040a1c
    ctx->pc = 0x104484u;
    SET_GPR_U32(ctx, 31, 0x10448Cu);
    ctx->pc = 0x104488u;
    SET_GPR_S32(ctx, 6, ((uint32_t)32 << 16));
    ctx->pc = 0x102870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeLoadFile_0x102870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10448Cu; }
    }
    if (ctx->pc != 0x10448Cu) { return; }
    ctx->pc = 0x10448Cu;
    // 0x10448c: 0x8f838170
    ctx->pc = 0x10448cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
label_104490:
    // 0x104490: 0x14700008
    ctx->pc = 0x104490u;
    {
        const bool branch_taken_0x104490 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 16));
        ctx->pc = 0x104494u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x104490) {
            ctx->pc = 0x1044B4u;
            goto label_1044b4;
        }
    }
    ctx->pc = 0x104498u;
    // 0x104498: 0x3c040017
    ctx->pc = 0x104498u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10449c: 0x8f8582bc
    ctx->pc = 0x10449cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
    // 0x1044a0: 0x248430a0
    ctx->pc = 0x1044a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12448));
    // 0x1044a4: 0xc040a1c
    ctx->pc = 0x1044A4u;
    SET_GPR_U32(ctx, 31, 0x1044ACu);
    ctx->pc = 0x1044A8u;
    SET_GPR_S32(ctx, 6, ((uint32_t)32 << 16));
    ctx->pc = 0x102870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeLoadFile_0x102870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1044ACu; }
    }
    if (ctx->pc != 0x1044ACu) { return; }
    ctx->pc = 0x1044ACu;
    // 0x1044ac: 0x8f838170
    ctx->pc = 0x1044acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
    // 0x1044b0: 0x24020003
    ctx->pc = 0x1044b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_1044b4:
    // 0x1044b4: 0x14620008
    ctx->pc = 0x1044B4u;
    {
        const bool branch_taken_0x1044b4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1044B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1044b4) {
            ctx->pc = 0x1044D8u;
            goto label_1044d8;
        }
    }
    ctx->pc = 0x1044BCu;
    // 0x1044bc: 0x3c040017
    ctx->pc = 0x1044bcu;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x1044c0: 0x8f8582bc
    ctx->pc = 0x1044c0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
    // 0x1044c4: 0x248430c0
    ctx->pc = 0x1044c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12480));
    // 0x1044c8: 0xc040a1c
    ctx->pc = 0x1044C8u;
    SET_GPR_U32(ctx, 31, 0x1044D0u);
    ctx->pc = 0x1044CCu;
    SET_GPR_S32(ctx, 6, ((uint32_t)32 << 16));
    ctx->pc = 0x102870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeLoadFile_0x102870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1044D0u; }
    }
    if (ctx->pc != 0x1044D0u) { return; }
    ctx->pc = 0x1044D0u;
    // 0x1044d0: 0x8f838170
    ctx->pc = 0x1044d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
    // 0x1044d4: 0x24020004
    ctx->pc = 0x1044d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_1044d8:
    // 0x1044d8: 0x14620008
    ctx->pc = 0x1044D8u;
    {
        const bool branch_taken_0x1044d8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1044DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x1044d8) {
            ctx->pc = 0x1044FCu;
            goto label_1044fc;
        }
    }
    ctx->pc = 0x1044E0u;
    // 0x1044e0: 0x3c040017
    ctx->pc = 0x1044e0u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x1044e4: 0x8f8582bc
    ctx->pc = 0x1044e4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
    // 0x1044e8: 0x248430e0
    ctx->pc = 0x1044e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12512));
    // 0x1044ec: 0xc040a1c
    ctx->pc = 0x1044ECu;
    SET_GPR_U32(ctx, 31, 0x1044F4u);
    ctx->pc = 0x1044F0u;
    SET_GPR_S32(ctx, 6, ((uint32_t)32 << 16));
    ctx->pc = 0x102870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeLoadFile_0x102870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1044F4u; }
    }
    if (ctx->pc != 0x1044F4u) { return; }
    ctx->pc = 0x1044F4u;
    // 0x1044f4: 0x8f838170
    ctx->pc = 0x1044f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
    // 0x1044f8: 0x24020005
    ctx->pc = 0x1044f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_1044fc:
    // 0x1044fc: 0x14620007
    ctx->pc = 0x1044FCu;
    {
        const bool branch_taken_0x1044fc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x104500u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294934892)));
        if (branch_taken_0x1044fc) {
            ctx->pc = 0x10451Cu;
            goto label_10451c;
        }
    }
    ctx->pc = 0x104504u;
    // 0x104504: 0x3c040017
    ctx->pc = 0x104504u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x104508: 0x8f8582bc
    ctx->pc = 0x104508u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
    // 0x10450c: 0x24843100
    ctx->pc = 0x10450cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12544));
    // 0x104510: 0xc040a1c
    ctx->pc = 0x104510u;
    SET_GPR_U32(ctx, 31, 0x104518u);
    ctx->pc = 0x104514u;
    SET_GPR_S32(ctx, 6, ((uint32_t)32 << 16));
    ctx->pc = 0x102870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeLoadFile_0x102870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104518u; }
    }
    if (ctx->pc != 0x104518u) { return; }
    ctx->pc = 0x104518u;
    // 0x104518: 0x8f90816c
    ctx->pc = 0x104518u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294934892)));
label_10451c:
    // 0x10451c: 0x24020003
    ctx->pc = 0x10451cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_104520:
    // 0x104520: 0x1602002e
    ctx->pc = 0x104520u;
    {
        const bool branch_taken_0x104520 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x104524u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x104520) {
            ctx->pc = 0x1045DCu;
            goto label_1045dc;
        }
    }
    ctx->pc = 0x104528u;
    // 0x104528: 0x8f838170
    ctx->pc = 0x104528u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
    // 0x10452c: 0x24020001
    ctx->pc = 0x10452cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x104530: 0x14620008
    ctx->pc = 0x104530u;
    {
        const bool branch_taken_0x104530 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x104534u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x104530) {
            ctx->pc = 0x104554u;
            goto label_104554;
        }
    }
    ctx->pc = 0x104538u;
    // 0x104538: 0x3c040017
    ctx->pc = 0x104538u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10453c: 0x8f8582bc
    ctx->pc = 0x10453cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
    // 0x104540: 0x24843120
    ctx->pc = 0x104540u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12576));
    // 0x104544: 0xc040a1c
    ctx->pc = 0x104544u;
    SET_GPR_U32(ctx, 31, 0x10454Cu);
    ctx->pc = 0x104548u;
    SET_GPR_S32(ctx, 6, ((uint32_t)32 << 16));
    ctx->pc = 0x102870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeLoadFile_0x102870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10454Cu; }
    }
    if (ctx->pc != 0x10454Cu) { return; }
    ctx->pc = 0x10454Cu;
    // 0x10454c: 0x8f838170
    ctx->pc = 0x10454cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
    // 0x104550: 0x24020002
    ctx->pc = 0x104550u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_104554:
    // 0x104554: 0x14620006
    ctx->pc = 0x104554u;
    {
        const bool branch_taken_0x104554 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x104558u;
        SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
        if (branch_taken_0x104554) {
            ctx->pc = 0x104570u;
            goto label_104570;
        }
    }
    ctx->pc = 0x10455Cu;
    // 0x10455c: 0x8f8582bc
    ctx->pc = 0x10455cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
    // 0x104560: 0x24843140
    ctx->pc = 0x104560u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12608));
    // 0x104564: 0xc040a1c
    ctx->pc = 0x104564u;
    SET_GPR_U32(ctx, 31, 0x10456Cu);
    ctx->pc = 0x104568u;
    SET_GPR_S32(ctx, 6, ((uint32_t)32 << 16));
    ctx->pc = 0x102870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeLoadFile_0x102870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10456Cu; }
    }
    if (ctx->pc != 0x10456Cu) { return; }
    ctx->pc = 0x10456Cu;
    // 0x10456c: 0x8f838170
    ctx->pc = 0x10456cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
label_104570:
    // 0x104570: 0x14700008
    ctx->pc = 0x104570u;
    {
        const bool branch_taken_0x104570 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 16));
        ctx->pc = 0x104574u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x104570) {
            ctx->pc = 0x104594u;
            goto label_104594;
        }
    }
    ctx->pc = 0x104578u;
    // 0x104578: 0x3c040017
    ctx->pc = 0x104578u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10457c: 0x8f8582bc
    ctx->pc = 0x10457cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
    // 0x104580: 0x24843160
    ctx->pc = 0x104580u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12640));
    // 0x104584: 0xc040a1c
    ctx->pc = 0x104584u;
    SET_GPR_U32(ctx, 31, 0x10458Cu);
    ctx->pc = 0x104588u;
    SET_GPR_S32(ctx, 6, ((uint32_t)32 << 16));
    ctx->pc = 0x102870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeLoadFile_0x102870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10458Cu; }
    }
    if (ctx->pc != 0x10458Cu) { return; }
    ctx->pc = 0x10458Cu;
    // 0x10458c: 0x8f838170
    ctx->pc = 0x10458cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
    // 0x104590: 0x24020004
    ctx->pc = 0x104590u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_104594:
    // 0x104594: 0x14620008
    ctx->pc = 0x104594u;
    {
        const bool branch_taken_0x104594 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x104598u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x104594) {
            ctx->pc = 0x1045B8u;
            goto label_1045b8;
        }
    }
    ctx->pc = 0x10459Cu;
    // 0x10459c: 0x3c040017
    ctx->pc = 0x10459cu;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x1045a0: 0x8f8582bc
    ctx->pc = 0x1045a0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
    // 0x1045a4: 0x24843180
    ctx->pc = 0x1045a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12672));
    // 0x1045a8: 0xc040a1c
    ctx->pc = 0x1045A8u;
    SET_GPR_U32(ctx, 31, 0x1045B0u);
    ctx->pc = 0x1045ACu;
    SET_GPR_S32(ctx, 6, ((uint32_t)32 << 16));
    ctx->pc = 0x102870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeLoadFile_0x102870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1045B0u; }
    }
    if (ctx->pc != 0x1045B0u) { return; }
    ctx->pc = 0x1045B0u;
    // 0x1045b0: 0x8f838170
    ctx->pc = 0x1045b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
    // 0x1045b4: 0x24020005
    ctx->pc = 0x1045b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_1045b8:
    // 0x1045b8: 0x14620007
    ctx->pc = 0x1045B8u;
    {
        const bool branch_taken_0x1045b8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1045BCu;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294934892)));
        if (branch_taken_0x1045b8) {
            ctx->pc = 0x1045D8u;
            goto label_1045d8;
        }
    }
    ctx->pc = 0x1045C0u;
    // 0x1045c0: 0x3c040017
    ctx->pc = 0x1045c0u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x1045c4: 0x8f8582bc
    ctx->pc = 0x1045c4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
    // 0x1045c8: 0x248431a0
    ctx->pc = 0x1045c8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12704));
    // 0x1045cc: 0xc040a1c
    ctx->pc = 0x1045CCu;
    SET_GPR_U32(ctx, 31, 0x1045D4u);
    ctx->pc = 0x1045D0u;
    SET_GPR_S32(ctx, 6, ((uint32_t)32 << 16));
    ctx->pc = 0x102870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeLoadFile_0x102870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1045D4u; }
    }
    if (ctx->pc != 0x1045D4u) { return; }
    ctx->pc = 0x1045D4u;
    // 0x1045d4: 0x8f90816c
    ctx->pc = 0x1045d4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294934892)));
label_1045d8:
    // 0x1045d8: 0x24020004
    ctx->pc = 0x1045d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_1045dc:
    // 0x1045dc: 0x1602002e
    ctx->pc = 0x1045DCu;
    {
        const bool branch_taken_0x1045dc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x1045E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x1045dc) {
            ctx->pc = 0x104698u;
            goto label_104698;
        }
    }
    ctx->pc = 0x1045E4u;
    // 0x1045e4: 0x8f838170
    ctx->pc = 0x1045e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
    // 0x1045e8: 0x24020001
    ctx->pc = 0x1045e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1045ec: 0x14620008
    ctx->pc = 0x1045ECu;
    {
        const bool branch_taken_0x1045ec = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1045F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1045ec) {
            ctx->pc = 0x104610u;
            goto label_104610;
        }
    }
    ctx->pc = 0x1045F4u;
    // 0x1045f4: 0x3c040017
    ctx->pc = 0x1045f4u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x1045f8: 0x8f8582bc
    ctx->pc = 0x1045f8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
    // 0x1045fc: 0x248431c0
    ctx->pc = 0x1045fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12736));
    // 0x104600: 0xc040a1c
    ctx->pc = 0x104600u;
    SET_GPR_U32(ctx, 31, 0x104608u);
    ctx->pc = 0x104604u;
    SET_GPR_S32(ctx, 6, ((uint32_t)32 << 16));
    ctx->pc = 0x102870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeLoadFile_0x102870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104608u; }
    }
    if (ctx->pc != 0x104608u) { return; }
    ctx->pc = 0x104608u;
    // 0x104608: 0x8f838170
    ctx->pc = 0x104608u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
    // 0x10460c: 0x24020002
    ctx->pc = 0x10460cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_104610:
    // 0x104610: 0x14620008
    ctx->pc = 0x104610u;
    {
        const bool branch_taken_0x104610 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x104614u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x104610) {
            ctx->pc = 0x104634u;
            goto label_104634;
        }
    }
    ctx->pc = 0x104618u;
    // 0x104618: 0x3c040017
    ctx->pc = 0x104618u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10461c: 0x8f8582bc
    ctx->pc = 0x10461cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
    // 0x104620: 0x248431e0
    ctx->pc = 0x104620u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12768));
    // 0x104624: 0xc040a1c
    ctx->pc = 0x104624u;
    SET_GPR_U32(ctx, 31, 0x10462Cu);
    ctx->pc = 0x104628u;
    SET_GPR_S32(ctx, 6, ((uint32_t)32 << 16));
    ctx->pc = 0x102870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeLoadFile_0x102870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10462Cu; }
    }
    if (ctx->pc != 0x10462Cu) { return; }
    ctx->pc = 0x10462Cu;
    // 0x10462c: 0x8f838170
    ctx->pc = 0x10462cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
    // 0x104630: 0x24020003
    ctx->pc = 0x104630u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_104634:
    // 0x104634: 0x14620006
    ctx->pc = 0x104634u;
    {
        const bool branch_taken_0x104634 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x104638u;
        SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
        if (branch_taken_0x104634) {
            ctx->pc = 0x104650u;
            goto label_104650;
        }
    }
    ctx->pc = 0x10463Cu;
    // 0x10463c: 0x8f8582bc
    ctx->pc = 0x10463cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
    // 0x104640: 0x24843200
    ctx->pc = 0x104640u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12800));
    // 0x104644: 0xc040a1c
    ctx->pc = 0x104644u;
    SET_GPR_U32(ctx, 31, 0x10464Cu);
    ctx->pc = 0x104648u;
    SET_GPR_S32(ctx, 6, ((uint32_t)32 << 16));
    ctx->pc = 0x102870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeLoadFile_0x102870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10464Cu; }
    }
    if (ctx->pc != 0x10464Cu) { return; }
    ctx->pc = 0x10464Cu;
    // 0x10464c: 0x8f838170
    ctx->pc = 0x10464cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
label_104650:
    // 0x104650: 0x14700008
    ctx->pc = 0x104650u;
    {
        const bool branch_taken_0x104650 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 16));
        ctx->pc = 0x104654u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
        if (branch_taken_0x104650) {
            ctx->pc = 0x104674u;
            goto label_104674;
        }
    }
    ctx->pc = 0x104658u;
    // 0x104658: 0x3c040017
    ctx->pc = 0x104658u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10465c: 0x8f8582bc
    ctx->pc = 0x10465cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
    // 0x104660: 0x24843220
    ctx->pc = 0x104660u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12832));
    // 0x104664: 0xc040a1c
    ctx->pc = 0x104664u;
    SET_GPR_U32(ctx, 31, 0x10466Cu);
    ctx->pc = 0x104668u;
    SET_GPR_S32(ctx, 6, ((uint32_t)32 << 16));
    ctx->pc = 0x102870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeLoadFile_0x102870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10466Cu; }
    }
    if (ctx->pc != 0x10466Cu) { return; }
    ctx->pc = 0x10466Cu;
    // 0x10466c: 0x8f838170
    ctx->pc = 0x10466cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934896)));
    // 0x104670: 0x24020005
    ctx->pc = 0x104670u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_104674:
    // 0x104674: 0x14620007
    ctx->pc = 0x104674u;
    {
        const bool branch_taken_0x104674 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x104678u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294934892)));
        if (branch_taken_0x104674) {
            ctx->pc = 0x104694u;
            goto label_104694;
        }
    }
    ctx->pc = 0x10467Cu;
    // 0x10467c: 0x3c040017
    ctx->pc = 0x10467cu;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x104680: 0x8f8582bc
    ctx->pc = 0x104680u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
    // 0x104684: 0x24843240
    ctx->pc = 0x104684u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12864));
    // 0x104688: 0xc040a1c
    ctx->pc = 0x104688u;
    SET_GPR_U32(ctx, 31, 0x104690u);
    ctx->pc = 0x10468Cu;
    SET_GPR_S32(ctx, 6, ((uint32_t)32 << 16));
    ctx->pc = 0x102870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeLoadFile_0x102870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104690u; }
    }
    if (ctx->pc != 0x104690u) { return; }
    ctx->pc = 0x104690u;
    // 0x104690: 0x8f90816c
    ctx->pc = 0x104690u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 28), 4294934892)));
label_104694:
    // 0x104694: 0x24020005
    ctx->pc = 0x104694u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
label_104698:
    // 0x104698: 0x16020006
    ctx->pc = 0x104698u;
    {
        const bool branch_taken_0x104698 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 2));
        ctx->pc = 0x10469Cu;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
        if (branch_taken_0x104698) {
            ctx->pc = 0x1046B4u;
            goto label_1046b4;
        }
    }
    ctx->pc = 0x1046A0u;
    // 0x1046a0: 0x3c040017
    ctx->pc = 0x1046a0u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x1046a4: 0x24843260
    ctx->pc = 0x1046a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12896));
    // 0x1046a8: 0xc040a1c
    ctx->pc = 0x1046A8u;
    SET_GPR_U32(ctx, 31, 0x1046B0u);
    ctx->pc = 0x1046ACu;
    SET_GPR_S32(ctx, 6, ((uint32_t)32 << 16));
    ctx->pc = 0x102870u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceeLoadFile_0x102870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1046B0u; }
    }
    if (ctx->pc != 0x1046B0u) { return; }
    ctx->pc = 0x1046B0u;
    // 0x1046b0: 0x8f8582bc
    ctx->pc = 0x1046b0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
label_1046b4:
    // 0x1046b4: 0x202d
    ctx->pc = 0x1046b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1046b8: 0x3a0302d
    ctx->pc = 0x1046b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1046bc: 0x3c140017
    ctx->pc = 0x1046bcu;
    SET_GPR_S32(ctx, 20, ((uint32_t)23 << 16));
    // 0x1046c0: 0x3c130017
    ctx->pc = 0x1046c0u;
    SET_GPR_S32(ctx, 19, ((uint32_t)23 << 16));
    // 0x1046c4: 0x240300ff
    ctx->pc = 0x1046c4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1046c8: 0x27a200ff
    ctx->pc = 0x1046c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 255));
    // 0x1046cc: 0x0
    ctx->pc = 0x1046ccu;
    // NOP
label_1046d0:
    // 0x1046d0: 0xa0400000
    ctx->pc = 0x1046d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1046d4: 0x2463ffff
    ctx->pc = 0x1046d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1046d8: 0x2442ffff
    ctx->pc = 0x1046d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1046dc: 0x0
    ctx->pc = 0x1046dcu;
    // NOP
    // 0x1046e0: 0x0
    ctx->pc = 0x1046e0u;
    // NOP
    // 0x1046e4: 0x461fffa
    ctx->pc = 0x1046E4u;
    {
        const bool branch_taken_0x1046e4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1046e4) {
            ctx->pc = 0x1046D0u;
            goto label_1046d0;
        }
    }
    ctx->pc = 0x1046ECu;
    // 0x1046ec: 0x90a20000
    ctx->pc = 0x1046ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1046f0: 0x1040000d
    ctx->pc = 0x1046F0u;
    {
        const bool branch_taken_0x1046f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1046F4u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1046f0) {
            ctx->pc = 0x104728u;
            goto label_104728;
        }
    }
    ctx->pc = 0x1046F8u;
    // 0x1046f8: 0x10000003
    ctx->pc = 0x1046F8u;
    {
        const bool branch_taken_0x1046f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1046FCu;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x1046f8) {
            ctx->pc = 0x104708u;
            goto label_104708;
        }
    }
    ctx->pc = 0x104700u;
label_104700:
    // 0x104700: 0x3a43021
    ctx->pc = 0x104700u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x104704: 0x90620000
    ctx->pc = 0x104704u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_104708:
    // 0x104708: 0x24650001
    ctx->pc = 0x104708u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 1));
    // 0x10470c: 0x24840001
    ctx->pc = 0x10470cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x104710: 0xa0c20000
    ctx->pc = 0x104710u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x104714: 0xaf8582bc
    ctx->pc = 0x104714u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935228), GPR_U32(ctx, 5));
    // 0x104718: 0x90a20000
    ctx->pc = 0x104718u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10471c: 0x1440fff8
    ctx->pc = 0x10471Cu;
    {
        const bool branch_taken_0x10471c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x104720u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10471c) {
            ctx->pc = 0x104700u;
            goto label_104700;
        }
    }
    ctx->pc = 0x104724u;
    // 0x104724: 0x3a43021
    ctx->pc = 0x104724u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
label_104728:
    // 0x104728: 0x24a50001
    ctx->pc = 0x104728u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x10472c: 0x26845c70
    ctx->pc = 0x10472cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 23664));
    // 0x104730: 0xaf8582bc
    ctx->pc = 0x104730u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935228), GPR_U32(ctx, 5));
    // 0x104734: 0x3a0282d
    ctx->pc = 0x104734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104738: 0xc04ace4
    ctx->pc = 0x104738u;
    SET_GPR_U32(ctx, 31, 0x104740u);
    ctx->pc = 0x10473Cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104740u; }
    }
    if (ctx->pc != 0x104740u) { return; }
    ctx->pc = 0x104740u;
    // 0x104740: 0x8f8582bc
    ctx->pc = 0x104740u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
    // 0x104744: 0x202d
    ctx->pc = 0x104744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104748: 0x3a0302d
    ctx->pc = 0x104748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10474c: 0x240300ff
    ctx->pc = 0x10474cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 255));
    // 0x104750: 0x27a200ff
    ctx->pc = 0x104750u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 255));
    // 0x104754: 0x0
    ctx->pc = 0x104754u;
    // NOP
label_104758:
    // 0x104758: 0xa0400000
    ctx->pc = 0x104758u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x10475c: 0x2463ffff
    ctx->pc = 0x10475cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x104760: 0x2442ffff
    ctx->pc = 0x104760u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x104764: 0x0
    ctx->pc = 0x104764u;
    // NOP
    // 0x104768: 0x0
    ctx->pc = 0x104768u;
    // NOP
    // 0x10476c: 0x461fffa
    ctx->pc = 0x10476Cu;
    {
        const bool branch_taken_0x10476c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x10476c) {
            ctx->pc = 0x104758u;
            goto label_104758;
        }
    }
    ctx->pc = 0x104774u;
    // 0x104774: 0x90a20000
    ctx->pc = 0x104774u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x104778: 0x1040000d
    ctx->pc = 0x104778u;
    {
        const bool branch_taken_0x104778 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x10477Cu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x104778) {
            ctx->pc = 0x1047B0u;
            goto label_1047b0;
        }
    }
    ctx->pc = 0x104780u;
    // 0x104780: 0x10000003
    ctx->pc = 0x104780u;
    {
        const bool branch_taken_0x104780 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x104784u;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x104780) {
            ctx->pc = 0x104790u;
            goto label_104790;
        }
    }
    ctx->pc = 0x104788u;
label_104788:
    // 0x104788: 0x3a43021
    ctx->pc = 0x104788u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x10478c: 0x90620000
    ctx->pc = 0x10478cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_104790:
    // 0x104790: 0x24650001
    ctx->pc = 0x104790u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 1));
    // 0x104794: 0x24840001
    ctx->pc = 0x104794u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x104798: 0xa0c20000
    ctx->pc = 0x104798u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x10479c: 0xaf8582bc
    ctx->pc = 0x10479cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935228), GPR_U32(ctx, 5));
    // 0x1047a0: 0x90a20000
    ctx->pc = 0x1047a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1047a4: 0x1440fff8
    ctx->pc = 0x1047A4u;
    {
        const bool branch_taken_0x1047a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1047A8u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1047a4) {
            ctx->pc = 0x104788u;
            goto label_104788;
        }
    }
    ctx->pc = 0x1047ACu;
    // 0x1047ac: 0x3a43021
    ctx->pc = 0x1047acu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
label_1047b0:
    // 0x1047b0: 0x24a50001
    ctx->pc = 0x1047b0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1047b4: 0x26645c78
    ctx->pc = 0x1047b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 23672));
    // 0x1047b8: 0xaf8582bc
    ctx->pc = 0x1047b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935228), GPR_U32(ctx, 5));
    // 0x1047bc: 0xa82d
    ctx->pc = 0x1047bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1047c0: 0x3a0282d
    ctx->pc = 0x1047c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1047c4: 0xc04ace4
    ctx->pc = 0x1047C4u;
    SET_GPR_U32(ctx, 31, 0x1047CCu);
    ctx->pc = 0x1047C8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1047CCu; }
    }
    if (ctx->pc != 0x1047CCu) { return; }
    ctx->pc = 0x1047CCu;
    // 0x1047cc: 0xc04a83a
    ctx->pc = 0x1047CCu;
    SET_GPR_U32(ctx, 31, 0x1047D4u);
    ctx->pc = 0x1047D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12A0E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x12a0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1047D4u; }
    }
    if (ctx->pc != 0x1047D4u) { return; }
    ctx->pc = 0x1047D4u;
    // 0x1047d4: 0x40b82d
    ctx->pc = 0x1047d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1047d8: 0x3c040017
    ctx->pc = 0x1047d8u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x1047dc: 0x24843280
    ctx->pc = 0x1047dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12928));
    // 0x1047e0: 0xc04ace4
    ctx->pc = 0x1047E0u;
    SET_GPR_U32(ctx, 31, 0x1047E8u);
    ctx->pc = 0x1047E4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1047E8u; }
    }
    if (ctx->pc != 0x1047E8u) { return; }
    ctx->pc = 0x1047E8u;
    // 0x1047e8: 0x1ae00084
    ctx->pc = 0x1047E8u;
    {
        const bool branch_taken_0x1047e8 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x1047ECu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
        if (branch_taken_0x1047e8) {
            ctx->pc = 0x1049FCu;
            goto label_1049fc;
        }
    }
    ctx->pc = 0x1047F0u;
    // 0x1047f0: 0x3c1e0014
    ctx->pc = 0x1047f0u;
    SET_GPR_S32(ctx, 30, ((uint32_t)20 << 16));
    // 0x1047f4: 0x3c120017
    ctx->pc = 0x1047f4u;
    SET_GPR_S32(ctx, 18, ((uint32_t)23 << 16));
label_1047f8:
    // 0x1047f8: 0x24020108
    ctx->pc = 0x1047f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 264));
    // 0x1047fc: 0x27c3e150
    ctx->pc = 0x1047fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 30), 4294959440));
    // 0x104800: 0x2a21018
    ctx->pc = 0x104800u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x104804: 0x8f8582bc
    ctx->pc = 0x104804u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
    // 0x104808: 0x482d
    ctx->pc = 0x104808u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10480c: 0x3a0402d
    ctx->pc = 0x10480cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104810: 0x26b10001
    ctx->pc = 0x104810u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 21), 1));
    // 0x104814: 0x240700ff
    ctx->pc = 0x104814u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 255));
    // 0x104818: 0x27a600ff
    ctx->pc = 0x104818u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 255));
    // 0x10481c: 0x438021
    ctx->pc = 0x10481cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_104820:
    // 0x104820: 0xa0c00000
    ctx->pc = 0x104820u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x104824: 0x24e7ffff
    ctx->pc = 0x104824u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x104828: 0x24c6ffff
    ctx->pc = 0x104828u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x10482c: 0x0
    ctx->pc = 0x10482cu;
    // NOP
    // 0x104830: 0x0
    ctx->pc = 0x104830u;
    // NOP
    // 0x104834: 0x4e1fffa
    ctx->pc = 0x104834u;
    {
        const bool branch_taken_0x104834 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x104834) {
            ctx->pc = 0x104820u;
            goto label_104820;
        }
    }
    ctx->pc = 0x10483Cu;
    // 0x10483c: 0x90a20000
    ctx->pc = 0x10483cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x104840: 0x1040000d
    ctx->pc = 0x104840u;
    {
        const bool branch_taken_0x104840 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x104844u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x104840) {
            ctx->pc = 0x104878u;
            goto label_104878;
        }
    }
    ctx->pc = 0x104848u;
    // 0x104848: 0x10000003
    ctx->pc = 0x104848u;
    {
        const bool branch_taken_0x104848 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10484Cu;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x104848) {
            ctx->pc = 0x104858u;
            goto label_104858;
        }
    }
    ctx->pc = 0x104850u;
label_104850:
    // 0x104850: 0x3a94021
    ctx->pc = 0x104850u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 9)));
    // 0x104854: 0x90620000
    ctx->pc = 0x104854u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_104858:
    // 0x104858: 0x24650001
    ctx->pc = 0x104858u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 1));
    // 0x10485c: 0x25290001
    ctx->pc = 0x10485cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
    // 0x104860: 0xa1020000
    ctx->pc = 0x104860u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x104864: 0xaf8582bc
    ctx->pc = 0x104864u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935228), GPR_U32(ctx, 5));
    // 0x104868: 0x90a20000
    ctx->pc = 0x104868u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x10486c: 0x1440fff8
    ctx->pc = 0x10486Cu;
    {
        const bool branch_taken_0x10486c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x104870u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x10486c) {
            ctx->pc = 0x104850u;
            goto label_104850;
        }
    }
    ctx->pc = 0x104874u;
    // 0x104874: 0x3a94021
    ctx->pc = 0x104874u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 9)));
label_104878:
    // 0x104878: 0x24a50001
    ctx->pc = 0x104878u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x10487c: 0x26845c70
    ctx->pc = 0x10487cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 20), 23664));
    // 0x104880: 0xaf8582bc
    ctx->pc = 0x104880u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935228), GPR_U32(ctx, 5));
    // 0x104884: 0x3a0282d
    ctx->pc = 0x104884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104888: 0xc04ace4
    ctx->pc = 0x104888u;
    SET_GPR_U32(ctx, 31, 0x104890u);
    ctx->pc = 0x10488Cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104890u; }
    }
    if (ctx->pc != 0x104890u) { return; }
    ctx->pc = 0x104890u;
    // 0x104890: 0x200202d
    ctx->pc = 0x104890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104894: 0xc04ae67
    ctx->pc = 0x104894u;
    SET_GPR_U32(ctx, 31, 0x10489Cu);
    ctx->pc = 0x104898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B99Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x12b99c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10489Cu; }
    }
    if (ctx->pc != 0x10489Cu) { return; }
    ctx->pc = 0x10489Cu;
    // 0x10489c: 0x8f8582bc
    ctx->pc = 0x10489cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
    // 0x1048a0: 0x202d
    ctx->pc = 0x1048a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1048a4: 0x3a0302d
    ctx->pc = 0x1048a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1048a8: 0x240300ff
    ctx->pc = 0x1048a8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 255));
    // 0x1048ac: 0x27a200ff
    ctx->pc = 0x1048acu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 255));
label_1048b0:
    // 0x1048b0: 0xa0400000
    ctx->pc = 0x1048b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1048b4: 0x2463ffff
    ctx->pc = 0x1048b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1048b8: 0x2442ffff
    ctx->pc = 0x1048b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1048bc: 0x0
    ctx->pc = 0x1048bcu;
    // NOP
    // 0x1048c0: 0x0
    ctx->pc = 0x1048c0u;
    // NOP
    // 0x1048c4: 0x461fffa
    ctx->pc = 0x1048C4u;
    {
        const bool branch_taken_0x1048c4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1048c4) {
            ctx->pc = 0x1048B0u;
            goto label_1048b0;
        }
    }
    ctx->pc = 0x1048CCu;
    // 0x1048cc: 0x90a20000
    ctx->pc = 0x1048ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1048d0: 0x1040000d
    ctx->pc = 0x1048D0u;
    {
        const bool branch_taken_0x1048d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1048D4u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1048d0) {
            ctx->pc = 0x104908u;
            goto label_104908;
        }
    }
    ctx->pc = 0x1048D8u;
    // 0x1048d8: 0x10000003
    ctx->pc = 0x1048D8u;
    {
        const bool branch_taken_0x1048d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1048DCu;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x1048d8) {
            ctx->pc = 0x1048E8u;
            goto label_1048e8;
        }
    }
    ctx->pc = 0x1048E0u;
label_1048e0:
    // 0x1048e0: 0x3a43021
    ctx->pc = 0x1048e0u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x1048e4: 0x90620000
    ctx->pc = 0x1048e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_1048e8:
    // 0x1048e8: 0x24650001
    ctx->pc = 0x1048e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1048ec: 0x24840001
    ctx->pc = 0x1048ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1048f0: 0xa0c20000
    ctx->pc = 0x1048f0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1048f4: 0xaf8582bc
    ctx->pc = 0x1048f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935228), GPR_U32(ctx, 5));
    // 0x1048f8: 0x90a20000
    ctx->pc = 0x1048f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1048fc: 0x1440fff8
    ctx->pc = 0x1048FCu;
    {
        const bool branch_taken_0x1048fc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x104900u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1048fc) {
            ctx->pc = 0x1048E0u;
            goto label_1048e0;
        }
    }
    ctx->pc = 0x104904u;
    // 0x104904: 0x3a43021
    ctx->pc = 0x104904u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
label_104908:
    // 0x104908: 0x24a50001
    ctx->pc = 0x104908u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x10490c: 0x26645c78
    ctx->pc = 0x10490cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 23672));
    // 0x104910: 0xaf8582bc
    ctx->pc = 0x104910u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935228), GPR_U32(ctx, 5));
    // 0x104914: 0x3a0282d
    ctx->pc = 0x104914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104918: 0xc04ace4
    ctx->pc = 0x104918u;
    SET_GPR_U32(ctx, 31, 0x104920u);
    ctx->pc = 0x10491Cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104920u; }
    }
    if (ctx->pc != 0x104920u) { return; }
    ctx->pc = 0x104920u;
    // 0x104920: 0xc04a83a
    ctx->pc = 0x104920u;
    SET_GPR_U32(ctx, 31, 0x104928u);
    ctx->pc = 0x104924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12A0E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x12a0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104928u; }
    }
    if (ctx->pc != 0x104928u) { return; }
    ctx->pc = 0x104928u;
    // 0x104928: 0x24030108
    ctx->pc = 0x104928u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 264));
    // 0x10492c: 0x27c6e150
    ctx->pc = 0x10492cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 30), 4294959440));
    // 0x104930: 0x2a31818
    ctx->pc = 0x104930u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x104934: 0x40282d
    ctx->pc = 0x104934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104938: 0x26443298
    ctx->pc = 0x104938u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 18), 12952));
    // 0x10493c: 0xc33021
    ctx->pc = 0x10493cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x104940: 0xc04ace4
    ctx->pc = 0x104940u;
    SET_GPR_U32(ctx, 31, 0x104948u);
    ctx->pc = 0x104944u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 256), GPR_U32(ctx, 2));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104948u; }
    }
    if (ctx->pc != 0x104948u) { return; }
    ctx->pc = 0x104948u;
    // 0x104948: 0x8f8582bc
    ctx->pc = 0x104948u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
    // 0x10494c: 0x202d
    ctx->pc = 0x10494cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104950: 0x3a0302d
    ctx->pc = 0x104950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104954: 0x240300ff
    ctx->pc = 0x104954u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 255));
    // 0x104958: 0x27a200ff
    ctx->pc = 0x104958u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 255));
    // 0x10495c: 0x0
    ctx->pc = 0x10495cu;
    // NOP
label_104960:
    // 0x104960: 0xa0400000
    ctx->pc = 0x104960u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x104964: 0x2463ffff
    ctx->pc = 0x104964u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x104968: 0x2442ffff
    ctx->pc = 0x104968u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10496c: 0x0
    ctx->pc = 0x10496cu;
    // NOP
    // 0x104970: 0x0
    ctx->pc = 0x104970u;
    // NOP
    // 0x104974: 0x461fffa
    ctx->pc = 0x104974u;
    {
        const bool branch_taken_0x104974 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x104974) {
            ctx->pc = 0x104960u;
            goto label_104960;
        }
    }
    ctx->pc = 0x10497Cu;
    // 0x10497c: 0x90a20000
    ctx->pc = 0x10497cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x104980: 0x1040000d
    ctx->pc = 0x104980u;
    {
        const bool branch_taken_0x104980 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x104984u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x104980) {
            ctx->pc = 0x1049B8u;
            goto label_1049b8;
        }
    }
    ctx->pc = 0x104988u;
    // 0x104988: 0x10000003
    ctx->pc = 0x104988u;
    {
        const bool branch_taken_0x104988 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x10498Cu;
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x104988) {
            ctx->pc = 0x104998u;
            goto label_104998;
        }
    }
    ctx->pc = 0x104990u;
label_104990:
    // 0x104990: 0x3a43021
    ctx->pc = 0x104990u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x104994: 0x90620000
    ctx->pc = 0x104994u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_104998:
    // 0x104998: 0x24650001
    ctx->pc = 0x104998u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 1));
    // 0x10499c: 0x24840001
    ctx->pc = 0x10499cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x1049a0: 0xa0c20000
    ctx->pc = 0x1049a0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1049a4: 0xaf8582bc
    ctx->pc = 0x1049a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935228), GPR_U32(ctx, 5));
    // 0x1049a8: 0x90a20000
    ctx->pc = 0x1049a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1049ac: 0x1440fff8
    ctx->pc = 0x1049ACu;
    {
        const bool branch_taken_0x1049ac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1049B0u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1049ac) {
            ctx->pc = 0x104990u;
            goto label_104990;
        }
    }
    ctx->pc = 0x1049B4u;
    // 0x1049b4: 0x3a43021
    ctx->pc = 0x1049b4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
label_1049b8:
    // 0x1049b8: 0x24a50001
    ctx->pc = 0x1049b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1049bc: 0x26645c78
    ctx->pc = 0x1049bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 19), 23672));
    // 0x1049c0: 0xaf8582bc
    ctx->pc = 0x1049c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935228), GPR_U32(ctx, 5));
    // 0x1049c4: 0x3a0282d
    ctx->pc = 0x1049c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1049c8: 0xc04ace4
    ctx->pc = 0x1049C8u;
    SET_GPR_U32(ctx, 31, 0x1049D0u);
    ctx->pc = 0x1049CCu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1049D0u; }
    }
    if (ctx->pc != 0x1049D0u) { return; }
    ctx->pc = 0x1049D0u;
    // 0x1049d0: 0xc04a83a
    ctx->pc = 0x1049D0u;
    SET_GPR_U32(ctx, 31, 0x1049D8u);
    ctx->pc = 0x1049D4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12A0E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x12a0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1049D8u; }
    }
    if (ctx->pc != 0x1049D8u) { return; }
    ctx->pc = 0x1049D8u;
    // 0x1049d8: 0x24030108
    ctx->pc = 0x1049d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 264));
    // 0x1049dc: 0x27c4e150
    ctx->pc = 0x1049dcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 30), 4294959440));
    // 0x1049e0: 0x2a31818
    ctx->pc = 0x1049e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)(uint32_t)result); }
    // 0x1049e4: 0x220a82d
    ctx->pc = 0x1049e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1049e8: 0x2b7282a
    ctx->pc = 0x1049e8u;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 23)));
    // 0x1049ec: 0x832021
    ctx->pc = 0x1049ecu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1049f0: 0x14a0ff81
    ctx->pc = 0x1049F0u;
    {
        const bool branch_taken_0x1049f0 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x1049F4u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 2));
        if (branch_taken_0x1049f0) {
            ctx->pc = 0x1047F8u;
            goto label_1047f8;
        }
    }
    ctx->pc = 0x1049F8u;
    // 0x1049f8: 0x8f8482bc
    ctx->pc = 0x1049f8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
label_1049fc:
    // 0x1049fc: 0x3082003f
    ctx->pc = 0x1049fcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 4), 63));
    // 0x104a00: 0x1040000a
    ctx->pc = 0x104A00u;
    {
        const bool branch_taken_0x104a00 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x104A04u;
        SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
        if (branch_taken_0x104a00) {
            ctx->pc = 0x104A2Cu;
            goto label_104a2c;
        }
    }
    ctx->pc = 0x104A08u;
label_104a08:
    // 0x104a08: 0x24830001
    ctx->pc = 0x104a08u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 1));
    // 0x104a0c: 0x60202d
    ctx->pc = 0x104a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104a10: 0x3062003f
    ctx->pc = 0x104a10u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 63));
    // 0x104a14: 0x0
    ctx->pc = 0x104a14u;
    // NOP
    // 0x104a18: 0x0
    ctx->pc = 0x104a18u;
    // NOP
    // 0x104a1c: 0x1440fffa
    ctx->pc = 0x104A1Cu;
    {
        const bool branch_taken_0x104a1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x104a1c) {
            ctx->pc = 0x104A08u;
            goto label_104a08;
        }
    }
    ctx->pc = 0x104A24u;
    // 0x104a24: 0xaf8382bc
    ctx->pc = 0x104a24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935228), GPR_U32(ctx, 3));
    // 0x104a28: 0x8f8582bc
    ctx->pc = 0x104a28u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
label_104a2c:
    // 0x104a2c: 0x3c040017
    ctx->pc = 0x104a2cu;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x104a30: 0xc04ace4
    ctx->pc = 0x104A30u;
    SET_GPR_U32(ctx, 31, 0x104A38u);
    ctx->pc = 0x104A34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 12968));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104A38u; }
    }
    if (ctx->pc != 0x104A38u) { return; }
    ctx->pc = 0x104A38u;
    // 0x104a38: 0x8f828174
    ctx->pc = 0x104a38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934900)));
    // 0x104a3c: 0x1440000a
    ctx->pc = 0x104A3Cu;
    {
        const bool branch_taken_0x104a3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x104A40u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
        if (branch_taken_0x104a3c) {
            ctx->pc = 0x104A68u;
            goto label_104a68;
        }
    }
    ctx->pc = 0x104A44u;
    // 0x104a44: 0x3c100017
    ctx->pc = 0x104a44u;
    SET_GPR_S32(ctx, 16, ((uint32_t)23 << 16));
    // 0x104a48: 0xaf918174
    ctx->pc = 0x104a48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934900), GPR_U32(ctx, 17));
    // 0x104a4c: 0x0
    ctx->pc = 0x104a4cu;
    // NOP
label_104a50:
    // 0x104a50: 0x260432c0
    ctx->pc = 0x104a50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 12992));
    // 0x104a54: 0xc043ef8
    ctx->pc = 0x104A54u;
    SET_GPR_U32(ctx, 31, 0x104A5Cu);
    ctx->pc = 0x104A58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x10FBE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePrintf_0x10fbe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104A5Cu; }
    }
    if (ctx->pc != 0x104A5Cu) { return; }
    ctx->pc = 0x104A5Cu;
    // 0x104a5c: 0x8f828174
    ctx->pc = 0x104a5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934900)));
    // 0x104a60: 0x5040fffb
    ctx->pc = 0x104A60u;
    {
        const bool branch_taken_0x104a60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x104a60) {
            ctx->pc = 0x104A64u;
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294934900), GPR_U32(ctx, 17));
            ctx->pc = 0x104A50u;
            goto label_104a50;
        }
    }
    ctx->pc = 0x104A68u;
label_104a68:
    // 0x104a68: 0x3c040017
    ctx->pc = 0x104a68u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x104a6c: 0x2e0282d
    ctx->pc = 0x104a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104a70: 0x248432d0
    ctx->pc = 0x104a70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13008));
    // 0x104a74: 0xc04ace4
    ctx->pc = 0x104A74u;
    SET_GPR_U32(ctx, 31, 0x104A7Cu);
    ctx->pc = 0x104A78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104A7Cu; }
    }
    if (ctx->pc != 0x104A7Cu) { return; }
    ctx->pc = 0x104A7Cu;
    // 0x104a7c: 0x1ae00233
    ctx->pc = 0x104A7Cu;
    {
        const bool branch_taken_0x104a7c = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x104A80u;
        SET_GPR_S32(ctx, 30, ((uint32_t)20 << 16));
        if (branch_taken_0x104a7c) {
            ctx->pc = 0x10534Cu;
            goto label_10534c;
        }
    }
    ctx->pc = 0x104A84u;
    // 0x104a84: 0x24020108
    ctx->pc = 0x104a84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 264));
label_104a88:
    // 0x104a88: 0x27d4e150
    ctx->pc = 0x104a88u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 30), 4294959440));
    // 0x104a8c: 0x2a29018
    ctx->pc = 0x104a8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)(uint32_t)result); }
    // 0x104a90: 0x3c030017
    ctx->pc = 0x104a90u;
    SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
    // 0x104a94: 0x3c020017
    ctx->pc = 0x104a94u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
    // 0x104a98: 0x24735c80
    ctx->pc = 0x104a98u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 3), 23680));
    // 0x104a9c: 0x244432e8
    ctx->pc = 0x104a9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13032));
    // 0x104aa0: 0x2a0282d
    ctx->pc = 0x104aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104aa4: 0x2548021
    ctx->pc = 0x104aa4u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x104aa8: 0xc04ace4
    ctx->pc = 0x104AA8u;
    SET_GPR_U32(ctx, 31, 0x104AB0u);
    ctx->pc = 0x104AACu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104AB0u; }
    }
    if (ctx->pc != 0x104AB0u) { return; }
    ctx->pc = 0x104AB0u;
    // 0x104ab0: 0x200202d
    ctx->pc = 0x104ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ab4: 0xc04ae16
    ctx->pc = 0x104AB4u;
    SET_GPR_U32(ctx, 31, 0x104ABCu);
    ctx->pc = 0x104AB8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104ABCu; }
    }
    if (ctx->pc != 0x104ABCu) { return; }
    ctx->pc = 0x104ABCu;
    // 0x104abc: 0x1440000a
    ctx->pc = 0x104ABCu;
    {
        const bool branch_taken_0x104abc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x104AC0u;
        SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x104abc) {
            ctx->pc = 0x104AE8u;
            goto label_104ae8;
        }
    }
    ctx->pc = 0x104AC4u;
    // 0x104ac4: 0x2921021
    ctx->pc = 0x104ac4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x104ac8: 0x3c040017
    ctx->pc = 0x104ac8u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x104acc: 0x8c430100
    ctx->pc = 0x104accu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x104ad0: 0x24845c88
    ctx->pc = 0x104ad0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
    // 0x104ad4: 0x260282d
    ctx->pc = 0x104ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ad8: 0x2231821
    ctx->pc = 0x104ad8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x104adc: 0xc04ace4
    ctx->pc = 0x104ADCu;
    SET_GPR_U32(ctx, 31, 0x104AE4u);
    ctx->pc = 0x104AE0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935264), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104AE4u; }
    }
    if (ctx->pc != 0x104AE4u) { return; }
    ctx->pc = 0x104AE4u;
    // 0x104ae4: 0x3c020017
    ctx->pc = 0x104ae4u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
label_104ae8:
    // 0x104ae8: 0x200202d
    ctx->pc = 0x104ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104aec: 0x24535c90
    ctx->pc = 0x104aecu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 23696));
    // 0x104af0: 0xc04ae16
    ctx->pc = 0x104AF0u;
    SET_GPR_U32(ctx, 31, 0x104AF8u);
    ctx->pc = 0x104AF4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104AF8u; }
    }
    if (ctx->pc != 0x104AF8u) { return; }
    ctx->pc = 0x104AF8u;
    // 0x104af8: 0x1440000a
    ctx->pc = 0x104AF8u;
    {
        const bool branch_taken_0x104af8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x104AFCu;
        SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
        if (branch_taken_0x104af8) {
            ctx->pc = 0x104B24u;
            goto label_104b24;
        }
    }
    ctx->pc = 0x104B00u;
    // 0x104b00: 0x2921021
    ctx->pc = 0x104b00u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x104b04: 0x3c040017
    ctx->pc = 0x104b04u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x104b08: 0x8c430100
    ctx->pc = 0x104b08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x104b0c: 0x24845c88
    ctx->pc = 0x104b0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
    // 0x104b10: 0x260282d
    ctx->pc = 0x104b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104b14: 0x2231821
    ctx->pc = 0x104b14u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x104b18: 0xc04ace4
    ctx->pc = 0x104B18u;
    SET_GPR_U32(ctx, 31, 0x104B20u);
    ctx->pc = 0x104B1Cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935272), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104B20u; }
    }
    if (ctx->pc != 0x104B20u) { return; }
    ctx->pc = 0x104B20u;
    // 0x104b20: 0x3c030017
    ctx->pc = 0x104b20u;
    SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
label_104b24:
    // 0x104b24: 0x200202d
    ctx->pc = 0x104b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104b28: 0x24733300
    ctx->pc = 0x104b28u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 3), 13056));
    // 0x104b2c: 0xc04ae16
    ctx->pc = 0x104B2Cu;
    SET_GPR_U32(ctx, 31, 0x104B34u);
    ctx->pc = 0x104B30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104B34u; }
    }
    if (ctx->pc != 0x104B34u) { return; }
    ctx->pc = 0x104B34u;
    // 0x104b34: 0x1440000a
    ctx->pc = 0x104B34u;
    {
        const bool branch_taken_0x104b34 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x104B38u;
        SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x104b34) {
            ctx->pc = 0x104B60u;
            goto label_104b60;
        }
    }
    ctx->pc = 0x104B3Cu;
    // 0x104b3c: 0x2921021
    ctx->pc = 0x104b3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x104b40: 0x3c040017
    ctx->pc = 0x104b40u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x104b44: 0x8c430100
    ctx->pc = 0x104b44u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x104b48: 0x24845c88
    ctx->pc = 0x104b48u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
    // 0x104b4c: 0x260282d
    ctx->pc = 0x104b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104b50: 0x2231821
    ctx->pc = 0x104b50u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x104b54: 0xc04ace4
    ctx->pc = 0x104B54u;
    SET_GPR_U32(ctx, 31, 0x104B5Cu);
    ctx->pc = 0x104B58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935256), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104B5Cu; }
    }
    if (ctx->pc != 0x104B5Cu) { return; }
    ctx->pc = 0x104B5Cu;
    // 0x104b5c: 0x3c020017
    ctx->pc = 0x104b5cu;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
label_104b60:
    // 0x104b60: 0x200202d
    ctx->pc = 0x104b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104b64: 0x24533310
    ctx->pc = 0x104b64u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 13072));
    // 0x104b68: 0xc04ae16
    ctx->pc = 0x104B68u;
    SET_GPR_U32(ctx, 31, 0x104B70u);
    ctx->pc = 0x104B6Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104B70u; }
    }
    if (ctx->pc != 0x104B70u) { return; }
    ctx->pc = 0x104B70u;
    // 0x104b70: 0x1440000a
    ctx->pc = 0x104B70u;
    {
        const bool branch_taken_0x104b70 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x104B74u;
        SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
        if (branch_taken_0x104b70) {
            ctx->pc = 0x104B9Cu;
            goto label_104b9c;
        }
    }
    ctx->pc = 0x104B78u;
    // 0x104b78: 0x2921021
    ctx->pc = 0x104b78u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x104b7c: 0x3c040017
    ctx->pc = 0x104b7cu;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x104b80: 0x8c430100
    ctx->pc = 0x104b80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x104b84: 0x24845c88
    ctx->pc = 0x104b84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
    // 0x104b88: 0x260282d
    ctx->pc = 0x104b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104b8c: 0x2231821
    ctx->pc = 0x104b8cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x104b90: 0xc04ace4
    ctx->pc = 0x104B90u;
    SET_GPR_U32(ctx, 31, 0x104B98u);
    ctx->pc = 0x104B94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935260), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104B98u; }
    }
    if (ctx->pc != 0x104B98u) { return; }
    ctx->pc = 0x104B98u;
    // 0x104b98: 0x3c030017
    ctx->pc = 0x104b98u;
    SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
label_104b9c:
    // 0x104b9c: 0x200202d
    ctx->pc = 0x104b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ba0: 0x24735c98
    ctx->pc = 0x104ba0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 3), 23704));
    // 0x104ba4: 0xc04ae16
    ctx->pc = 0x104BA4u;
    SET_GPR_U32(ctx, 31, 0x104BACu);
    ctx->pc = 0x104BA8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104BACu; }
    }
    if (ctx->pc != 0x104BACu) { return; }
    ctx->pc = 0x104BACu;
    // 0x104bac: 0x1440000a
    ctx->pc = 0x104BACu;
    {
        const bool branch_taken_0x104bac = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x104BB0u;
        SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x104bac) {
            ctx->pc = 0x104BD8u;
            goto label_104bd8;
        }
    }
    ctx->pc = 0x104BB4u;
    // 0x104bb4: 0x2921021
    ctx->pc = 0x104bb4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x104bb8: 0x3c040017
    ctx->pc = 0x104bb8u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x104bbc: 0x8c430100
    ctx->pc = 0x104bbcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x104bc0: 0x24845c88
    ctx->pc = 0x104bc0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
    // 0x104bc4: 0x260282d
    ctx->pc = 0x104bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104bc8: 0x2231821
    ctx->pc = 0x104bc8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x104bcc: 0xc04ace4
    ctx->pc = 0x104BCCu;
    SET_GPR_U32(ctx, 31, 0x104BD4u);
    ctx->pc = 0x104BD0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935268), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104BD4u; }
    }
    if (ctx->pc != 0x104BD4u) { return; }
    ctx->pc = 0x104BD4u;
    // 0x104bd4: 0x3c020017
    ctx->pc = 0x104bd4u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
label_104bd8:
    // 0x104bd8: 0x200202d
    ctx->pc = 0x104bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104bdc: 0x24535ca0
    ctx->pc = 0x104bdcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 23712));
    // 0x104be0: 0xc04ae16
    ctx->pc = 0x104BE0u;
    SET_GPR_U32(ctx, 31, 0x104BE8u);
    ctx->pc = 0x104BE4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104BE8u; }
    }
    if (ctx->pc != 0x104BE8u) { return; }
    ctx->pc = 0x104BE8u;
    // 0x104be8: 0x1440000a
    ctx->pc = 0x104BE8u;
    {
        const bool branch_taken_0x104be8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x104BECu;
        SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
        if (branch_taken_0x104be8) {
            ctx->pc = 0x104C14u;
            goto label_104c14;
        }
    }
    ctx->pc = 0x104BF0u;
    // 0x104bf0: 0x2921021
    ctx->pc = 0x104bf0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x104bf4: 0x3c040017
    ctx->pc = 0x104bf4u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x104bf8: 0x8c430100
    ctx->pc = 0x104bf8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x104bfc: 0x24845c88
    ctx->pc = 0x104bfcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
    // 0x104c00: 0x260282d
    ctx->pc = 0x104c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104c04: 0x2231821
    ctx->pc = 0x104c04u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x104c08: 0xc04ace4
    ctx->pc = 0x104C08u;
    SET_GPR_U32(ctx, 31, 0x104C10u);
    ctx->pc = 0x104C0Cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935248), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104C10u; }
    }
    if (ctx->pc != 0x104C10u) { return; }
    ctx->pc = 0x104C10u;
    // 0x104c10: 0x3c030017
    ctx->pc = 0x104c10u;
    SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
label_104c14:
    // 0x104c14: 0x200202d
    ctx->pc = 0x104c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104c18: 0x24735ca8
    ctx->pc = 0x104c18u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 3), 23720));
    // 0x104c1c: 0xc04ae16
    ctx->pc = 0x104C1Cu;
    SET_GPR_U32(ctx, 31, 0x104C24u);
    ctx->pc = 0x104C20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104C24u; }
    }
    if (ctx->pc != 0x104C24u) { return; }
    ctx->pc = 0x104C24u;
    // 0x104c24: 0x1440000a
    ctx->pc = 0x104C24u;
    {
        const bool branch_taken_0x104c24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x104C28u;
        SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x104c24) {
            ctx->pc = 0x104C50u;
            goto label_104c50;
        }
    }
    ctx->pc = 0x104C2Cu;
    // 0x104c2c: 0x2921021
    ctx->pc = 0x104c2cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x104c30: 0x3c040017
    ctx->pc = 0x104c30u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x104c34: 0x8c430100
    ctx->pc = 0x104c34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x104c38: 0x24845c88
    ctx->pc = 0x104c38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
    // 0x104c3c: 0x260282d
    ctx->pc = 0x104c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104c40: 0x2231821
    ctx->pc = 0x104c40u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x104c44: 0xc04ace4
    ctx->pc = 0x104C44u;
    SET_GPR_U32(ctx, 31, 0x104C4Cu);
    ctx->pc = 0x104C48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935252), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104C4Cu; }
    }
    if (ctx->pc != 0x104C4Cu) { return; }
    ctx->pc = 0x104C4Cu;
    // 0x104c4c: 0x3c020017
    ctx->pc = 0x104c4cu;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
label_104c50:
    // 0x104c50: 0x200202d
    ctx->pc = 0x104c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104c54: 0x24535cb0
    ctx->pc = 0x104c54u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 23728));
    // 0x104c58: 0xc04ae16
    ctx->pc = 0x104C58u;
    SET_GPR_U32(ctx, 31, 0x104C60u);
    ctx->pc = 0x104C5Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104C60u; }
    }
    if (ctx->pc != 0x104C60u) { return; }
    ctx->pc = 0x104C60u;
    // 0x104c60: 0x1440000a
    ctx->pc = 0x104C60u;
    {
        const bool branch_taken_0x104c60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x104C64u;
        SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
        if (branch_taken_0x104c60) {
            ctx->pc = 0x104C8Cu;
            goto label_104c8c;
        }
    }
    ctx->pc = 0x104C68u;
    // 0x104c68: 0x2921021
    ctx->pc = 0x104c68u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x104c6c: 0x3c040017
    ctx->pc = 0x104c6cu;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x104c70: 0x8c430100
    ctx->pc = 0x104c70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x104c74: 0x24845c88
    ctx->pc = 0x104c74u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
    // 0x104c78: 0x260282d
    ctx->pc = 0x104c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104c7c: 0x2231821
    ctx->pc = 0x104c7cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x104c80: 0xc04ace4
    ctx->pc = 0x104C80u;
    SET_GPR_U32(ctx, 31, 0x104C88u);
    ctx->pc = 0x104C84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935276), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104C88u; }
    }
    if (ctx->pc != 0x104C88u) { return; }
    ctx->pc = 0x104C88u;
    // 0x104c88: 0x3c030017
    ctx->pc = 0x104c88u;
    SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
label_104c8c:
    // 0x104c8c: 0x200202d
    ctx->pc = 0x104c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104c90: 0x24735cb8
    ctx->pc = 0x104c90u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 3), 23736));
    // 0x104c94: 0xc04ae16
    ctx->pc = 0x104C94u;
    SET_GPR_U32(ctx, 31, 0x104C9Cu);
    ctx->pc = 0x104C98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104C9Cu; }
    }
    if (ctx->pc != 0x104C9Cu) { return; }
    ctx->pc = 0x104C9Cu;
    // 0x104c9c: 0x1440000a
    ctx->pc = 0x104C9Cu;
    {
        const bool branch_taken_0x104c9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x104CA0u;
        SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x104c9c) {
            ctx->pc = 0x104CC8u;
            goto label_104cc8;
        }
    }
    ctx->pc = 0x104CA4u;
    // 0x104ca4: 0x2921021
    ctx->pc = 0x104ca4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x104ca8: 0x3c040017
    ctx->pc = 0x104ca8u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x104cac: 0x8c430100
    ctx->pc = 0x104cacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x104cb0: 0x24845c88
    ctx->pc = 0x104cb0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
    // 0x104cb4: 0x260282d
    ctx->pc = 0x104cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104cb8: 0x2231821
    ctx->pc = 0x104cb8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x104cbc: 0xc04ace4
    ctx->pc = 0x104CBCu;
    SET_GPR_U32(ctx, 31, 0x104CC4u);
    ctx->pc = 0x104CC0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935280), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104CC4u; }
    }
    if (ctx->pc != 0x104CC4u) { return; }
    ctx->pc = 0x104CC4u;
    // 0x104cc4: 0x3c020017
    ctx->pc = 0x104cc4u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
label_104cc8:
    // 0x104cc8: 0x200202d
    ctx->pc = 0x104cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ccc: 0x24535cc0
    ctx->pc = 0x104cccu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 23744));
    // 0x104cd0: 0xc04ae16
    ctx->pc = 0x104CD0u;
    SET_GPR_U32(ctx, 31, 0x104CD8u);
    ctx->pc = 0x104CD4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104CD8u; }
    }
    if (ctx->pc != 0x104CD8u) { return; }
    ctx->pc = 0x104CD8u;
    // 0x104cd8: 0x1440000a
    ctx->pc = 0x104CD8u;
    {
        const bool branch_taken_0x104cd8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x104CDCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 264));
        if (branch_taken_0x104cd8) {
            ctx->pc = 0x104D04u;
            goto label_104d04;
        }
    }
    ctx->pc = 0x104CE0u;
    // 0x104ce0: 0x2921021
    ctx->pc = 0x104ce0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x104ce4: 0x3c040017
    ctx->pc = 0x104ce4u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x104ce8: 0x8c430100
    ctx->pc = 0x104ce8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x104cec: 0x24845c88
    ctx->pc = 0x104cecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
    // 0x104cf0: 0x260282d
    ctx->pc = 0x104cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104cf4: 0x2231821
    ctx->pc = 0x104cf4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x104cf8: 0xc04ace4
    ctx->pc = 0x104CF8u;
    SET_GPR_U32(ctx, 31, 0x104D00u);
    ctx->pc = 0x104CFCu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935284), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104D00u; }
    }
    if (ctx->pc != 0x104D00u) { return; }
    ctx->pc = 0x104D00u;
    // 0x104d00: 0x24020108
    ctx->pc = 0x104d00u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 264));
label_104d04:
    // 0x104d04: 0x3c030017
    ctx->pc = 0x104d04u;
    SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
    // 0x104d08: 0x2a28018
    ctx->pc = 0x104d08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)(uint32_t)result); }
    // 0x104d0c: 0x24735cc8
    ctx->pc = 0x104d0cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 3), 23752));
    // 0x104d10: 0x260282d
    ctx->pc = 0x104d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104d14: 0x2149021
    ctx->pc = 0x104d14u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x104d18: 0xc04ae16
    ctx->pc = 0x104D18u;
    SET_GPR_U32(ctx, 31, 0x104D20u);
    ctx->pc = 0x104D1Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104D20u; }
    }
    if (ctx->pc != 0x104D20u) { return; }
    ctx->pc = 0x104D20u;
    // 0x104d20: 0x1440000a
    ctx->pc = 0x104D20u;
    {
        const bool branch_taken_0x104d20 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x104D24u;
        SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x104d20) {
            ctx->pc = 0x104D4Cu;
            goto label_104d4c;
        }
    }
    ctx->pc = 0x104D28u;
    // 0x104d28: 0x2901021
    ctx->pc = 0x104d28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x104d2c: 0x3c040017
    ctx->pc = 0x104d2cu;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x104d30: 0x8c430100
    ctx->pc = 0x104d30u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x104d34: 0x24845c88
    ctx->pc = 0x104d34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
    // 0x104d38: 0x260282d
    ctx->pc = 0x104d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104d3c: 0x2231821
    ctx->pc = 0x104d3cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x104d40: 0xc04ace4
    ctx->pc = 0x104D40u;
    SET_GPR_U32(ctx, 31, 0x104D48u);
    ctx->pc = 0x104D44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935288), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104D48u; }
    }
    if (ctx->pc != 0x104D48u) { return; }
    ctx->pc = 0x104D48u;
    // 0x104d48: 0x3c020017
    ctx->pc = 0x104d48u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
label_104d4c:
    // 0x104d4c: 0x240202d
    ctx->pc = 0x104d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104d50: 0x24535cd0
    ctx->pc = 0x104d50u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 23760));
    // 0x104d54: 0xc04ae16
    ctx->pc = 0x104D54u;
    SET_GPR_U32(ctx, 31, 0x104D5Cu);
    ctx->pc = 0x104D58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104D5Cu; }
    }
    if (ctx->pc != 0x104D5Cu) { return; }
    ctx->pc = 0x104D5Cu;
    // 0x104d5c: 0x1440000a
    ctx->pc = 0x104D5Cu;
    {
        const bool branch_taken_0x104d5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x104D60u;
        SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
        if (branch_taken_0x104d5c) {
            ctx->pc = 0x104D88u;
            goto label_104d88;
        }
    }
    ctx->pc = 0x104D64u;
    // 0x104d64: 0x2901021
    ctx->pc = 0x104d64u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x104d68: 0x3c040017
    ctx->pc = 0x104d68u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x104d6c: 0x8c430100
    ctx->pc = 0x104d6cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x104d70: 0x24845c88
    ctx->pc = 0x104d70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
    // 0x104d74: 0x260282d
    ctx->pc = 0x104d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104d78: 0x2231821
    ctx->pc = 0x104d78u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x104d7c: 0xc04ace4
    ctx->pc = 0x104D7Cu;
    SET_GPR_U32(ctx, 31, 0x104D84u);
    ctx->pc = 0x104D80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935292), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104D84u; }
    }
    if (ctx->pc != 0x104D84u) { return; }
    ctx->pc = 0x104D84u;
    // 0x104d84: 0x3c030017
    ctx->pc = 0x104d84u;
    SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
label_104d88:
    // 0x104d88: 0x240202d
    ctx->pc = 0x104d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104d8c: 0x24735cd8
    ctx->pc = 0x104d8cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 3), 23768));
    // 0x104d90: 0xc04ae16
    ctx->pc = 0x104D90u;
    SET_GPR_U32(ctx, 31, 0x104D98u);
    ctx->pc = 0x104D94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104D98u; }
    }
    if (ctx->pc != 0x104D98u) { return; }
    ctx->pc = 0x104D98u;
    // 0x104d98: 0x1440000a
    ctx->pc = 0x104D98u;
    {
        const bool branch_taken_0x104d98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x104D9Cu;
        SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x104d98) {
            ctx->pc = 0x104DC4u;
            goto label_104dc4;
        }
    }
    ctx->pc = 0x104DA0u;
    // 0x104da0: 0x2901021
    ctx->pc = 0x104da0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x104da4: 0x3c040017
    ctx->pc = 0x104da4u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x104da8: 0x8c430100
    ctx->pc = 0x104da8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x104dac: 0x24845c88
    ctx->pc = 0x104dacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
    // 0x104db0: 0x260282d
    ctx->pc = 0x104db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104db4: 0x2231821
    ctx->pc = 0x104db4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x104db8: 0xc04ace4
    ctx->pc = 0x104DB8u;
    SET_GPR_U32(ctx, 31, 0x104DC0u);
    ctx->pc = 0x104DBCu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935296), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104DC0u; }
    }
    if (ctx->pc != 0x104DC0u) { return; }
    ctx->pc = 0x104DC0u;
    // 0x104dc0: 0x3c020017
    ctx->pc = 0x104dc0u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
label_104dc4:
    // 0x104dc4: 0x240202d
    ctx->pc = 0x104dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104dc8: 0x24535ce0
    ctx->pc = 0x104dc8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 23776));
    // 0x104dcc: 0xc04ae16
    ctx->pc = 0x104DCCu;
    SET_GPR_U32(ctx, 31, 0x104DD4u);
    ctx->pc = 0x104DD0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104DD4u; }
    }
    if (ctx->pc != 0x104DD4u) { return; }
    ctx->pc = 0x104DD4u;
    // 0x104dd4: 0x1440000a
    ctx->pc = 0x104DD4u;
    {
        const bool branch_taken_0x104dd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x104DD8u;
        SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
        if (branch_taken_0x104dd4) {
            ctx->pc = 0x104E00u;
            goto label_104e00;
        }
    }
    ctx->pc = 0x104DDCu;
    // 0x104ddc: 0x2901021
    ctx->pc = 0x104ddcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x104de0: 0x3c040017
    ctx->pc = 0x104de0u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x104de4: 0x8c430100
    ctx->pc = 0x104de4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x104de8: 0x24845c88
    ctx->pc = 0x104de8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
    // 0x104dec: 0x260282d
    ctx->pc = 0x104decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104df0: 0x2231821
    ctx->pc = 0x104df0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x104df4: 0xc04ace4
    ctx->pc = 0x104DF4u;
    SET_GPR_U32(ctx, 31, 0x104DFCu);
    ctx->pc = 0x104DF8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935300), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104DFCu; }
    }
    if (ctx->pc != 0x104DFCu) { return; }
    ctx->pc = 0x104DFCu;
    // 0x104dfc: 0x3c030017
    ctx->pc = 0x104dfcu;
    SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
label_104e00:
    // 0x104e00: 0x240202d
    ctx->pc = 0x104e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e04: 0x24735ce8
    ctx->pc = 0x104e04u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 3), 23784));
    // 0x104e08: 0xc04ae16
    ctx->pc = 0x104E08u;
    SET_GPR_U32(ctx, 31, 0x104E10u);
    ctx->pc = 0x104E0Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104E10u; }
    }
    if (ctx->pc != 0x104E10u) { return; }
    ctx->pc = 0x104E10u;
    // 0x104e10: 0x1440000a
    ctx->pc = 0x104E10u;
    {
        const bool branch_taken_0x104e10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x104E14u;
        SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x104e10) {
            ctx->pc = 0x104E3Cu;
            goto label_104e3c;
        }
    }
    ctx->pc = 0x104E18u;
    // 0x104e18: 0x2901021
    ctx->pc = 0x104e18u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x104e1c: 0x3c040017
    ctx->pc = 0x104e1cu;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x104e20: 0x8c430100
    ctx->pc = 0x104e20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x104e24: 0x24845c88
    ctx->pc = 0x104e24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
    // 0x104e28: 0x260282d
    ctx->pc = 0x104e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e2c: 0x2231821
    ctx->pc = 0x104e2cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x104e30: 0xc04ace4
    ctx->pc = 0x104E30u;
    SET_GPR_U32(ctx, 31, 0x104E38u);
    ctx->pc = 0x104E34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935304), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104E38u; }
    }
    if (ctx->pc != 0x104E38u) { return; }
    ctx->pc = 0x104E38u;
    // 0x104e38: 0x3c020017
    ctx->pc = 0x104e38u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
label_104e3c:
    // 0x104e3c: 0x240202d
    ctx->pc = 0x104e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e40: 0x24535cf0
    ctx->pc = 0x104e40u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 23792));
    // 0x104e44: 0xc04ae16
    ctx->pc = 0x104E44u;
    SET_GPR_U32(ctx, 31, 0x104E4Cu);
    ctx->pc = 0x104E48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104E4Cu; }
    }
    if (ctx->pc != 0x104E4Cu) { return; }
    ctx->pc = 0x104E4Cu;
    // 0x104e4c: 0x1440000a
    ctx->pc = 0x104E4Cu;
    {
        const bool branch_taken_0x104e4c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x104E50u;
        SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
        if (branch_taken_0x104e4c) {
            ctx->pc = 0x104E78u;
            goto label_104e78;
        }
    }
    ctx->pc = 0x104E54u;
    // 0x104e54: 0x2901021
    ctx->pc = 0x104e54u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x104e58: 0x3c040017
    ctx->pc = 0x104e58u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x104e5c: 0x8c430100
    ctx->pc = 0x104e5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x104e60: 0x24845c88
    ctx->pc = 0x104e60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
    // 0x104e64: 0x260282d
    ctx->pc = 0x104e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e68: 0x2231821
    ctx->pc = 0x104e68u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x104e6c: 0xc04ace4
    ctx->pc = 0x104E6Cu;
    SET_GPR_U32(ctx, 31, 0x104E74u);
    ctx->pc = 0x104E70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935308), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104E74u; }
    }
    if (ctx->pc != 0x104E74u) { return; }
    ctx->pc = 0x104E74u;
    // 0x104e74: 0x3c030017
    ctx->pc = 0x104e74u;
    SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
label_104e78:
    // 0x104e78: 0x240202d
    ctx->pc = 0x104e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104e7c: 0x24735cf8
    ctx->pc = 0x104e7cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 3), 23800));
    // 0x104e80: 0xc04ae16
    ctx->pc = 0x104E80u;
    SET_GPR_U32(ctx, 31, 0x104E88u);
    ctx->pc = 0x104E84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104E88u; }
    }
    if (ctx->pc != 0x104E88u) { return; }
    ctx->pc = 0x104E88u;
    // 0x104e88: 0x1440000a
    ctx->pc = 0x104E88u;
    {
        const bool branch_taken_0x104e88 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x104E8Cu;
        SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x104e88) {
            ctx->pc = 0x104EB4u;
            goto label_104eb4;
        }
    }
    ctx->pc = 0x104E90u;
    // 0x104e90: 0x2901021
    ctx->pc = 0x104e90u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x104e94: 0x3c040017
    ctx->pc = 0x104e94u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x104e98: 0x8c430100
    ctx->pc = 0x104e98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x104e9c: 0x24845c88
    ctx->pc = 0x104e9cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
    // 0x104ea0: 0x260282d
    ctx->pc = 0x104ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ea4: 0x2231821
    ctx->pc = 0x104ea4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x104ea8: 0xc04ace4
    ctx->pc = 0x104EA8u;
    SET_GPR_U32(ctx, 31, 0x104EB0u);
    ctx->pc = 0x104EACu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935312), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104EB0u; }
    }
    if (ctx->pc != 0x104EB0u) { return; }
    ctx->pc = 0x104EB0u;
    // 0x104eb0: 0x3c020017
    ctx->pc = 0x104eb0u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
label_104eb4:
    // 0x104eb4: 0x240202d
    ctx->pc = 0x104eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104eb8: 0x24535d00
    ctx->pc = 0x104eb8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 23808));
    // 0x104ebc: 0xc04ae16
    ctx->pc = 0x104EBCu;
    SET_GPR_U32(ctx, 31, 0x104EC4u);
    ctx->pc = 0x104EC0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104EC4u; }
    }
    if (ctx->pc != 0x104EC4u) { return; }
    ctx->pc = 0x104EC4u;
    // 0x104ec4: 0x1440000a
    ctx->pc = 0x104EC4u;
    {
        const bool branch_taken_0x104ec4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x104EC8u;
        SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
        if (branch_taken_0x104ec4) {
            ctx->pc = 0x104EF0u;
            goto label_104ef0;
        }
    }
    ctx->pc = 0x104ECCu;
    // 0x104ecc: 0x2901021
    ctx->pc = 0x104eccu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x104ed0: 0x3c040017
    ctx->pc = 0x104ed0u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x104ed4: 0x8c430100
    ctx->pc = 0x104ed4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x104ed8: 0x24845c88
    ctx->pc = 0x104ed8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
    // 0x104edc: 0x260282d
    ctx->pc = 0x104edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ee0: 0x2231821
    ctx->pc = 0x104ee0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x104ee4: 0xc04ace4
    ctx->pc = 0x104EE4u;
    SET_GPR_U32(ctx, 31, 0x104EECu);
    ctx->pc = 0x104EE8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935316), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104EECu; }
    }
    if (ctx->pc != 0x104EECu) { return; }
    ctx->pc = 0x104EECu;
    // 0x104eec: 0x3c030017
    ctx->pc = 0x104eecu;
    SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
label_104ef0:
    // 0x104ef0: 0x240202d
    ctx->pc = 0x104ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ef4: 0x24735d08
    ctx->pc = 0x104ef4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 3), 23816));
    // 0x104ef8: 0xc04ae16
    ctx->pc = 0x104EF8u;
    SET_GPR_U32(ctx, 31, 0x104F00u);
    ctx->pc = 0x104EFCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104F00u; }
    }
    if (ctx->pc != 0x104F00u) { return; }
    ctx->pc = 0x104F00u;
    // 0x104f00: 0x1440000a
    ctx->pc = 0x104F00u;
    {
        const bool branch_taken_0x104f00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x104F04u;
        SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x104f00) {
            ctx->pc = 0x104F2Cu;
            goto label_104f2c;
        }
    }
    ctx->pc = 0x104F08u;
    // 0x104f08: 0x2901021
    ctx->pc = 0x104f08u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x104f0c: 0x3c040017
    ctx->pc = 0x104f0cu;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x104f10: 0x8c430100
    ctx->pc = 0x104f10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x104f14: 0x24845c88
    ctx->pc = 0x104f14u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
    // 0x104f18: 0x260282d
    ctx->pc = 0x104f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104f1c: 0x2231821
    ctx->pc = 0x104f1cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x104f20: 0xc04ace4
    ctx->pc = 0x104F20u;
    SET_GPR_U32(ctx, 31, 0x104F28u);
    ctx->pc = 0x104F24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935320), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104F28u; }
    }
    if (ctx->pc != 0x104F28u) { return; }
    ctx->pc = 0x104F28u;
    // 0x104f28: 0x3c020017
    ctx->pc = 0x104f28u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
label_104f2c:
    // 0x104f2c: 0x240202d
    ctx->pc = 0x104f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104f30: 0x24535d10
    ctx->pc = 0x104f30u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 23824));
    // 0x104f34: 0xc04ae16
    ctx->pc = 0x104F34u;
    SET_GPR_U32(ctx, 31, 0x104F3Cu);
    ctx->pc = 0x104F38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104F3Cu; }
    }
    if (ctx->pc != 0x104F3Cu) { return; }
    ctx->pc = 0x104F3Cu;
    // 0x104f3c: 0x1440000a
    ctx->pc = 0x104F3Cu;
    {
        const bool branch_taken_0x104f3c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x104F40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 264));
        if (branch_taken_0x104f3c) {
            ctx->pc = 0x104F68u;
            goto label_104f68;
        }
    }
    ctx->pc = 0x104F44u;
    // 0x104f44: 0x2901021
    ctx->pc = 0x104f44u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x104f48: 0x3c040017
    ctx->pc = 0x104f48u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x104f4c: 0x8c430100
    ctx->pc = 0x104f4cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x104f50: 0x24845c88
    ctx->pc = 0x104f50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
    // 0x104f54: 0x260282d
    ctx->pc = 0x104f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104f58: 0x2231821
    ctx->pc = 0x104f58u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x104f5c: 0xc04ace4
    ctx->pc = 0x104F5Cu;
    SET_GPR_U32(ctx, 31, 0x104F64u);
    ctx->pc = 0x104F60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935324), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104F64u; }
    }
    if (ctx->pc != 0x104F64u) { return; }
    ctx->pc = 0x104F64u;
    // 0x104f64: 0x24020108
    ctx->pc = 0x104f64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 264));
label_104f68:
    // 0x104f68: 0x3c030017
    ctx->pc = 0x104f68u;
    SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
    // 0x104f6c: 0x2a28018
    ctx->pc = 0x104f6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)(uint32_t)result); }
    // 0x104f70: 0x24735d18
    ctx->pc = 0x104f70u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 3), 23832));
    // 0x104f74: 0x260282d
    ctx->pc = 0x104f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104f78: 0x2149021
    ctx->pc = 0x104f78u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x104f7c: 0xc04ae16
    ctx->pc = 0x104F7Cu;
    SET_GPR_U32(ctx, 31, 0x104F84u);
    ctx->pc = 0x104F80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104F84u; }
    }
    if (ctx->pc != 0x104F84u) { return; }
    ctx->pc = 0x104F84u;
    // 0x104f84: 0x1440000a
    ctx->pc = 0x104F84u;
    {
        const bool branch_taken_0x104f84 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x104F88u;
        SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x104f84) {
            ctx->pc = 0x104FB0u;
            goto label_104fb0;
        }
    }
    ctx->pc = 0x104F8Cu;
    // 0x104f8c: 0x2901021
    ctx->pc = 0x104f8cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x104f90: 0x3c040017
    ctx->pc = 0x104f90u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x104f94: 0x8c430100
    ctx->pc = 0x104f94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x104f98: 0x24845c88
    ctx->pc = 0x104f98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
    // 0x104f9c: 0x260282d
    ctx->pc = 0x104f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104fa0: 0x2231821
    ctx->pc = 0x104fa0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x104fa4: 0xc04ace4
    ctx->pc = 0x104FA4u;
    SET_GPR_U32(ctx, 31, 0x104FACu);
    ctx->pc = 0x104FA8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935328), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104FACu; }
    }
    if (ctx->pc != 0x104FACu) { return; }
    ctx->pc = 0x104FACu;
    // 0x104fac: 0x3c020017
    ctx->pc = 0x104facu;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
label_104fb0:
    // 0x104fb0: 0x240202d
    ctx->pc = 0x104fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104fb4: 0x24535d20
    ctx->pc = 0x104fb4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 23840));
    // 0x104fb8: 0xc04ae16
    ctx->pc = 0x104FB8u;
    SET_GPR_U32(ctx, 31, 0x104FC0u);
    ctx->pc = 0x104FBCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104FC0u; }
    }
    if (ctx->pc != 0x104FC0u) { return; }
    ctx->pc = 0x104FC0u;
    // 0x104fc0: 0x1440000a
    ctx->pc = 0x104FC0u;
    {
        const bool branch_taken_0x104fc0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x104FC4u;
        SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
        if (branch_taken_0x104fc0) {
            ctx->pc = 0x104FECu;
            goto label_104fec;
        }
    }
    ctx->pc = 0x104FC8u;
    // 0x104fc8: 0x2901021
    ctx->pc = 0x104fc8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x104fcc: 0x3c040017
    ctx->pc = 0x104fccu;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x104fd0: 0x8c430100
    ctx->pc = 0x104fd0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x104fd4: 0x24845c88
    ctx->pc = 0x104fd4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
    // 0x104fd8: 0x260282d
    ctx->pc = 0x104fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104fdc: 0x2231821
    ctx->pc = 0x104fdcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x104fe0: 0xc04ace4
    ctx->pc = 0x104FE0u;
    SET_GPR_U32(ctx, 31, 0x104FE8u);
    ctx->pc = 0x104FE4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935332), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104FE8u; }
    }
    if (ctx->pc != 0x104FE8u) { return; }
    ctx->pc = 0x104FE8u;
    // 0x104fe8: 0x3c030017
    ctx->pc = 0x104fe8u;
    SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
label_104fec:
    // 0x104fec: 0x240202d
    ctx->pc = 0x104fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ff0: 0x24735d28
    ctx->pc = 0x104ff0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 3), 23848));
    // 0x104ff4: 0xc04ae16
    ctx->pc = 0x104FF4u;
    SET_GPR_U32(ctx, 31, 0x104FFCu);
    ctx->pc = 0x104FF8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x104FFCu; }
    }
    if (ctx->pc != 0x104FFCu) { return; }
    ctx->pc = 0x104FFCu;
    // 0x104ffc: 0x1440000a
    ctx->pc = 0x104FFCu;
    {
        const bool branch_taken_0x104ffc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x105000u;
        SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x104ffc) {
            ctx->pc = 0x105028u;
            goto label_105028;
        }
    }
    ctx->pc = 0x105004u;
    // 0x105004: 0x2901021
    ctx->pc = 0x105004u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x105008: 0x3c040017
    ctx->pc = 0x105008u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10500c: 0x8c430100
    ctx->pc = 0x10500cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x105010: 0x24845c88
    ctx->pc = 0x105010u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
    // 0x105014: 0x260282d
    ctx->pc = 0x105014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105018: 0x2231821
    ctx->pc = 0x105018u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x10501c: 0xc04ace4
    ctx->pc = 0x10501Cu;
    SET_GPR_U32(ctx, 31, 0x105024u);
    ctx->pc = 0x105020u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935336), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105024u; }
    }
    if (ctx->pc != 0x105024u) { return; }
    ctx->pc = 0x105024u;
    // 0x105024: 0x3c020017
    ctx->pc = 0x105024u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
label_105028:
    // 0x105028: 0x240202d
    ctx->pc = 0x105028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10502c: 0x24535d30
    ctx->pc = 0x10502cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 23856));
    // 0x105030: 0xc04ae16
    ctx->pc = 0x105030u;
    SET_GPR_U32(ctx, 31, 0x105038u);
    ctx->pc = 0x105034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105038u; }
    }
    if (ctx->pc != 0x105038u) { return; }
    ctx->pc = 0x105038u;
    // 0x105038: 0x1440000a
    ctx->pc = 0x105038u;
    {
        const bool branch_taken_0x105038 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10503Cu;
        SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
        if (branch_taken_0x105038) {
            ctx->pc = 0x105064u;
            goto label_105064;
        }
    }
    ctx->pc = 0x105040u;
    // 0x105040: 0x2901021
    ctx->pc = 0x105040u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x105044: 0x3c040017
    ctx->pc = 0x105044u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x105048: 0x8c430100
    ctx->pc = 0x105048u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x10504c: 0x24845c88
    ctx->pc = 0x10504cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
    // 0x105050: 0x260282d
    ctx->pc = 0x105050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105054: 0x2231821
    ctx->pc = 0x105054u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x105058: 0xc04ace4
    ctx->pc = 0x105058u;
    SET_GPR_U32(ctx, 31, 0x105060u);
    ctx->pc = 0x10505Cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935340), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105060u; }
    }
    if (ctx->pc != 0x105060u) { return; }
    ctx->pc = 0x105060u;
    // 0x105060: 0x3c030017
    ctx->pc = 0x105060u;
    SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
label_105064:
    // 0x105064: 0x240202d
    ctx->pc = 0x105064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105068: 0x24735d38
    ctx->pc = 0x105068u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 3), 23864));
    // 0x10506c: 0xc04ae16
    ctx->pc = 0x10506Cu;
    SET_GPR_U32(ctx, 31, 0x105074u);
    ctx->pc = 0x105070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105074u; }
    }
    if (ctx->pc != 0x105074u) { return; }
    ctx->pc = 0x105074u;
    // 0x105074: 0x1440000a
    ctx->pc = 0x105074u;
    {
        const bool branch_taken_0x105074 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x105078u;
        SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x105074) {
            ctx->pc = 0x1050A0u;
            goto label_1050a0;
        }
    }
    ctx->pc = 0x10507Cu;
    // 0x10507c: 0x2901021
    ctx->pc = 0x10507cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x105080: 0x3c040017
    ctx->pc = 0x105080u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x105084: 0x8c430100
    ctx->pc = 0x105084u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x105088: 0x24845c88
    ctx->pc = 0x105088u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
    // 0x10508c: 0x260282d
    ctx->pc = 0x10508cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105090: 0x2231821
    ctx->pc = 0x105090u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x105094: 0xc04ace4
    ctx->pc = 0x105094u;
    SET_GPR_U32(ctx, 31, 0x10509Cu);
    ctx->pc = 0x105098u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935344), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10509Cu; }
    }
    if (ctx->pc != 0x10509Cu) { return; }
    ctx->pc = 0x10509Cu;
    // 0x10509c: 0x3c020017
    ctx->pc = 0x10509cu;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
label_1050a0:
    // 0x1050a0: 0x240202d
    ctx->pc = 0x1050a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1050a4: 0x24535d40
    ctx->pc = 0x1050a4u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 23872));
    // 0x1050a8: 0xc04ae16
    ctx->pc = 0x1050A8u;
    SET_GPR_U32(ctx, 31, 0x1050B0u);
    ctx->pc = 0x1050ACu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1050B0u; }
    }
    if (ctx->pc != 0x1050B0u) { return; }
    ctx->pc = 0x1050B0u;
    // 0x1050b0: 0x1440000a
    ctx->pc = 0x1050B0u;
    {
        const bool branch_taken_0x1050b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1050B4u;
        SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
        if (branch_taken_0x1050b0) {
            ctx->pc = 0x1050DCu;
            goto label_1050dc;
        }
    }
    ctx->pc = 0x1050B8u;
    // 0x1050b8: 0x2901021
    ctx->pc = 0x1050b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x1050bc: 0x3c040017
    ctx->pc = 0x1050bcu;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x1050c0: 0x8c430100
    ctx->pc = 0x1050c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x1050c4: 0x24845c88
    ctx->pc = 0x1050c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
    // 0x1050c8: 0x260282d
    ctx->pc = 0x1050c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1050cc: 0x2231821
    ctx->pc = 0x1050ccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1050d0: 0xc04ace4
    ctx->pc = 0x1050D0u;
    SET_GPR_U32(ctx, 31, 0x1050D8u);
    ctx->pc = 0x1050D4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935348), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1050D8u; }
    }
    if (ctx->pc != 0x1050D8u) { return; }
    ctx->pc = 0x1050D8u;
    // 0x1050d8: 0x3c030017
    ctx->pc = 0x1050d8u;
    SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
label_1050dc:
    // 0x1050dc: 0x24160108
    ctx->pc = 0x1050dcu;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 264));
    // 0x1050e0: 0x24735d48
    ctx->pc = 0x1050e0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 3), 23880));
    // 0x1050e4: 0x240202d
    ctx->pc = 0x1050e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1050e8: 0xc04ae16
    ctx->pc = 0x1050E8u;
    SET_GPR_U32(ctx, 31, 0x1050F0u);
    ctx->pc = 0x1050ECu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1050F0u; }
    }
    if (ctx->pc != 0x1050F0u) { return; }
    ctx->pc = 0x1050F0u;
    // 0x1050f0: 0x1440000a
    ctx->pc = 0x1050F0u;
    {
        const bool branch_taken_0x1050f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1050F4u;
        SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x1050f0) {
            ctx->pc = 0x10511Cu;
            goto label_10511c;
        }
    }
    ctx->pc = 0x1050F8u;
    // 0x1050f8: 0x2901021
    ctx->pc = 0x1050f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x1050fc: 0x3c040017
    ctx->pc = 0x1050fcu;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x105100: 0x8c430100
    ctx->pc = 0x105100u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x105104: 0x24845c88
    ctx->pc = 0x105104u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
    // 0x105108: 0x260282d
    ctx->pc = 0x105108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10510c: 0x2231821
    ctx->pc = 0x10510cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x105110: 0xc04ace4
    ctx->pc = 0x105110u;
    SET_GPR_U32(ctx, 31, 0x105118u);
    ctx->pc = 0x105114u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935352), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105118u; }
    }
    if (ctx->pc != 0x105118u) { return; }
    ctx->pc = 0x105118u;
    // 0x105118: 0x3c020017
    ctx->pc = 0x105118u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
label_10511c:
    // 0x10511c: 0x240202d
    ctx->pc = 0x10511cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105120: 0x24535d50
    ctx->pc = 0x105120u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 23888));
    // 0x105124: 0xc04ae16
    ctx->pc = 0x105124u;
    SET_GPR_U32(ctx, 31, 0x10512Cu);
    ctx->pc = 0x105128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10512Cu; }
    }
    if (ctx->pc != 0x10512Cu) { return; }
    ctx->pc = 0x10512Cu;
    // 0x10512c: 0x1440000a
    ctx->pc = 0x10512Cu;
    {
        const bool branch_taken_0x10512c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x105130u;
        SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
        if (branch_taken_0x10512c) {
            ctx->pc = 0x105158u;
            goto label_105158;
        }
    }
    ctx->pc = 0x105134u;
    // 0x105134: 0x2901021
    ctx->pc = 0x105134u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x105138: 0x3c040017
    ctx->pc = 0x105138u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x10513c: 0x8c430100
    ctx->pc = 0x10513cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x105140: 0x24845c88
    ctx->pc = 0x105140u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
    // 0x105144: 0x260282d
    ctx->pc = 0x105144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105148: 0x2231821
    ctx->pc = 0x105148u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x10514c: 0xc04ace4
    ctx->pc = 0x10514Cu;
    SET_GPR_U32(ctx, 31, 0x105154u);
    ctx->pc = 0x105150u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935356), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105154u; }
    }
    if (ctx->pc != 0x105154u) { return; }
    ctx->pc = 0x105154u;
    // 0x105154: 0x3c030017
    ctx->pc = 0x105154u;
    SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
label_105158:
    // 0x105158: 0x240202d
    ctx->pc = 0x105158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10515c: 0x24735d58
    ctx->pc = 0x10515cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 3), 23896));
    // 0x105160: 0xc04ae16
    ctx->pc = 0x105160u;
    SET_GPR_U32(ctx, 31, 0x105168u);
    ctx->pc = 0x105164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105168u; }
    }
    if (ctx->pc != 0x105168u) { return; }
    ctx->pc = 0x105168u;
    // 0x105168: 0x1440000a
    ctx->pc = 0x105168u;
    {
        const bool branch_taken_0x105168 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x10516Cu;
        SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x105168) {
            ctx->pc = 0x105194u;
            goto label_105194;
        }
    }
    ctx->pc = 0x105170u;
    // 0x105170: 0x2901021
    ctx->pc = 0x105170u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x105174: 0x3c040017
    ctx->pc = 0x105174u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x105178: 0x8c430100
    ctx->pc = 0x105178u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x10517c: 0x24845c88
    ctx->pc = 0x10517cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
    // 0x105180: 0x260282d
    ctx->pc = 0x105180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105184: 0x2231821
    ctx->pc = 0x105184u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x105188: 0xc04ace4
    ctx->pc = 0x105188u;
    SET_GPR_U32(ctx, 31, 0x105190u);
    ctx->pc = 0x10518Cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935360), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105190u; }
    }
    if (ctx->pc != 0x105190u) { return; }
    ctx->pc = 0x105190u;
    // 0x105190: 0x3c020017
    ctx->pc = 0x105190u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
label_105194:
    // 0x105194: 0x240202d
    ctx->pc = 0x105194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105198: 0x24535d60
    ctx->pc = 0x105198u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 23904));
    // 0x10519c: 0xc04ae16
    ctx->pc = 0x10519Cu;
    SET_GPR_U32(ctx, 31, 0x1051A4u);
    ctx->pc = 0x1051A0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1051A4u; }
    }
    if (ctx->pc != 0x1051A4u) { return; }
    ctx->pc = 0x1051A4u;
    // 0x1051a4: 0x5440000a
    ctx->pc = 0x1051A4u;
    {
        const bool branch_taken_0x1051a4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1051a4) {
            ctx->pc = 0x1051A8u;
            { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)(uint32_t)result); }
            ctx->pc = 0x1051D0u;
            goto label_1051d0;
        }
    }
    ctx->pc = 0x1051ACu;
    // 0x1051ac: 0x2901021
    ctx->pc = 0x1051acu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x1051b0: 0x3c040017
    ctx->pc = 0x1051b0u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x1051b4: 0x8c430100
    ctx->pc = 0x1051b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x1051b8: 0x24845c88
    ctx->pc = 0x1051b8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
    // 0x1051bc: 0x260282d
    ctx->pc = 0x1051bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1051c0: 0x2231821
    ctx->pc = 0x1051c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1051c4: 0xc04ace4
    ctx->pc = 0x1051C4u;
    SET_GPR_U32(ctx, 31, 0x1051CCu);
    ctx->pc = 0x1051C8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935364), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1051CCu; }
    }
    if (ctx->pc != 0x1051CCu) { return; }
    ctx->pc = 0x1051CCu;
    // 0x1051cc: 0x2b68018
    ctx->pc = 0x1051ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)(uint32_t)result); }
label_1051d0:
    // 0x1051d0: 0x3c030017
    ctx->pc = 0x1051d0u;
    SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
    // 0x1051d4: 0x24725d68
    ctx->pc = 0x1051d4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 3), 23912));
    // 0x1051d8: 0x240282d
    ctx->pc = 0x1051d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1051dc: 0x2149821
    ctx->pc = 0x1051dcu;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x1051e0: 0xc04ae16
    ctx->pc = 0x1051E0u;
    SET_GPR_U32(ctx, 31, 0x1051E8u);
    ctx->pc = 0x1051E4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1051E8u; }
    }
    if (ctx->pc != 0x1051E8u) { return; }
    ctx->pc = 0x1051E8u;
    // 0x1051e8: 0x1440000a
    ctx->pc = 0x1051E8u;
    {
        const bool branch_taken_0x1051e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1051ECu;
        SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x1051e8) {
            ctx->pc = 0x105214u;
            goto label_105214;
        }
    }
    ctx->pc = 0x1051F0u;
    // 0x1051f0: 0x2901021
    ctx->pc = 0x1051f0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x1051f4: 0x3c040017
    ctx->pc = 0x1051f4u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x1051f8: 0x8c430100
    ctx->pc = 0x1051f8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x1051fc: 0x24845c88
    ctx->pc = 0x1051fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
    // 0x105200: 0x240282d
    ctx->pc = 0x105200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105204: 0x2231821
    ctx->pc = 0x105204u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x105208: 0xc04ace4
    ctx->pc = 0x105208u;
    SET_GPR_U32(ctx, 31, 0x105210u);
    ctx->pc = 0x10520Cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935368), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105210u; }
    }
    if (ctx->pc != 0x105210u) { return; }
    ctx->pc = 0x105210u;
    // 0x105210: 0x3c020017
    ctx->pc = 0x105210u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
label_105214:
    // 0x105214: 0x260202d
    ctx->pc = 0x105214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105218: 0x24525d70
    ctx->pc = 0x105218u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 23920));
    // 0x10521c: 0xc04ae16
    ctx->pc = 0x10521Cu;
    SET_GPR_U32(ctx, 31, 0x105224u);
    ctx->pc = 0x105220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105224u; }
    }
    if (ctx->pc != 0x105224u) { return; }
    ctx->pc = 0x105224u;
    // 0x105224: 0x1440000a
    ctx->pc = 0x105224u;
    {
        const bool branch_taken_0x105224 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x105228u;
        SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
        if (branch_taken_0x105224) {
            ctx->pc = 0x105250u;
            goto label_105250;
        }
    }
    ctx->pc = 0x10522Cu;
    // 0x10522c: 0x2901021
    ctx->pc = 0x10522cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x105230: 0x3c040017
    ctx->pc = 0x105230u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x105234: 0x8c430100
    ctx->pc = 0x105234u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x105238: 0x24845c88
    ctx->pc = 0x105238u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
    // 0x10523c: 0x240282d
    ctx->pc = 0x10523cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105240: 0x2231821
    ctx->pc = 0x105240u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x105244: 0xc04ace4
    ctx->pc = 0x105244u;
    SET_GPR_U32(ctx, 31, 0x10524Cu);
    ctx->pc = 0x105248u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935372), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10524Cu; }
    }
    if (ctx->pc != 0x10524Cu) { return; }
    ctx->pc = 0x10524Cu;
    // 0x10524c: 0x3c030017
    ctx->pc = 0x10524cu;
    SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
label_105250:
    // 0x105250: 0x260202d
    ctx->pc = 0x105250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105254: 0x24725d78
    ctx->pc = 0x105254u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 3), 23928));
    // 0x105258: 0xc04ae16
    ctx->pc = 0x105258u;
    SET_GPR_U32(ctx, 31, 0x105260u);
    ctx->pc = 0x10525Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105260u; }
    }
    if (ctx->pc != 0x105260u) { return; }
    ctx->pc = 0x105260u;
    // 0x105260: 0x1440000a
    ctx->pc = 0x105260u;
    {
        const bool branch_taken_0x105260 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x105264u;
        SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x105260) {
            ctx->pc = 0x10528Cu;
            goto label_10528c;
        }
    }
    ctx->pc = 0x105268u;
    // 0x105268: 0x2901021
    ctx->pc = 0x105268u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x10526c: 0x3c040017
    ctx->pc = 0x10526cu;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x105270: 0x8c430100
    ctx->pc = 0x105270u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x105274: 0x24845c88
    ctx->pc = 0x105274u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
    // 0x105278: 0x240282d
    ctx->pc = 0x105278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10527c: 0x2231821
    ctx->pc = 0x10527cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x105280: 0xc04ace4
    ctx->pc = 0x105280u;
    SET_GPR_U32(ctx, 31, 0x105288u);
    ctx->pc = 0x105284u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935376), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105288u; }
    }
    if (ctx->pc != 0x105288u) { return; }
    ctx->pc = 0x105288u;
    // 0x105288: 0x3c020017
    ctx->pc = 0x105288u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
label_10528c:
    // 0x10528c: 0x260202d
    ctx->pc = 0x10528cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105290: 0x24525d80
    ctx->pc = 0x105290u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 23936));
    // 0x105294: 0xc04ae16
    ctx->pc = 0x105294u;
    SET_GPR_U32(ctx, 31, 0x10529Cu);
    ctx->pc = 0x105298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10529Cu; }
    }
    if (ctx->pc != 0x10529Cu) { return; }
    ctx->pc = 0x10529Cu;
    // 0x10529c: 0x1440000a
    ctx->pc = 0x10529Cu;
    {
        const bool branch_taken_0x10529c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1052A0u;
        SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
        if (branch_taken_0x10529c) {
            ctx->pc = 0x1052C8u;
            goto label_1052c8;
        }
    }
    ctx->pc = 0x1052A4u;
    // 0x1052a4: 0x2901021
    ctx->pc = 0x1052a4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x1052a8: 0x3c040017
    ctx->pc = 0x1052a8u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x1052ac: 0x8c430100
    ctx->pc = 0x1052acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x1052b0: 0x24845c88
    ctx->pc = 0x1052b0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
    // 0x1052b4: 0x240282d
    ctx->pc = 0x1052b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1052b8: 0x2231821
    ctx->pc = 0x1052b8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1052bc: 0xc04ace4
    ctx->pc = 0x1052BCu;
    SET_GPR_U32(ctx, 31, 0x1052C4u);
    ctx->pc = 0x1052C0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935380), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1052C4u; }
    }
    if (ctx->pc != 0x1052C4u) { return; }
    ctx->pc = 0x1052C4u;
    // 0x1052c4: 0x3c030017
    ctx->pc = 0x1052c4u;
    SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
label_1052c8:
    // 0x1052c8: 0x260202d
    ctx->pc = 0x1052c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1052cc: 0x24725d88
    ctx->pc = 0x1052ccu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 3), 23944));
    // 0x1052d0: 0xc04ae16
    ctx->pc = 0x1052D0u;
    SET_GPR_U32(ctx, 31, 0x1052D8u);
    ctx->pc = 0x1052D4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1052D8u; }
    }
    if (ctx->pc != 0x1052D8u) { return; }
    ctx->pc = 0x1052D8u;
    // 0x1052d8: 0x1440000a
    ctx->pc = 0x1052D8u;
    {
        const bool branch_taken_0x1052d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1052DCu;
        SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x1052d8) {
            ctx->pc = 0x105304u;
            goto label_105304;
        }
    }
    ctx->pc = 0x1052E0u;
    // 0x1052e0: 0x2901021
    ctx->pc = 0x1052e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x1052e4: 0x3c040017
    ctx->pc = 0x1052e4u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x1052e8: 0x8c430100
    ctx->pc = 0x1052e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x1052ec: 0x24845c88
    ctx->pc = 0x1052ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
    // 0x1052f0: 0x240282d
    ctx->pc = 0x1052f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1052f4: 0x2231821
    ctx->pc = 0x1052f4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1052f8: 0xc04ace4
    ctx->pc = 0x1052F8u;
    SET_GPR_U32(ctx, 31, 0x105300u);
    ctx->pc = 0x1052FCu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935384), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105300u; }
    }
    if (ctx->pc != 0x105300u) { return; }
    ctx->pc = 0x105300u;
    // 0x105300: 0x3c020017
    ctx->pc = 0x105300u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
label_105304:
    // 0x105304: 0x260202d
    ctx->pc = 0x105304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105308: 0x24525d90
    ctx->pc = 0x105308u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 23952));
    // 0x10530c: 0xc04ae16
    ctx->pc = 0x10530Cu;
    SET_GPR_U32(ctx, 31, 0x105314u);
    ctx->pc = 0x105310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12B858u;
    {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105314u; }
    }
    if (ctx->pc != 0x105314u) { return; }
    ctx->pc = 0x105314u;
    // 0x105314: 0x5440000a
    ctx->pc = 0x105314u;
    {
        const bool branch_taken_0x105314 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x105314) {
            ctx->pc = 0x105318u;
            SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
            ctx->pc = 0x105340u;
            goto label_105340;
        }
    }
    ctx->pc = 0x10531Cu;
    // 0x10531c: 0x2901021
    ctx->pc = 0x10531cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x105320: 0x3c040017
    ctx->pc = 0x105320u;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x105324: 0x8c430100
    ctx->pc = 0x105324u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x105328: 0x24845c88
    ctx->pc = 0x105328u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23688));
    // 0x10532c: 0x240282d
    ctx->pc = 0x10532cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105330: 0x2231821
    ctx->pc = 0x105330u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x105334: 0xc04ace4
    ctx->pc = 0x105334u;
    SET_GPR_U32(ctx, 31, 0x10533Cu);
    ctx->pc = 0x105338u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935388), GPR_U32(ctx, 3));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10533Cu; }
    }
    if (ctx->pc != 0x10533Cu) { return; }
    ctx->pc = 0x10533Cu;
    // 0x10533c: 0x26b50001
    ctx->pc = 0x10533cu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 1));
label_105340:
    // 0x105340: 0x2b7102a
    ctx->pc = 0x105340u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 21), GPR_S32(ctx, 23)));
    // 0x105344: 0x1440fdd0
    ctx->pc = 0x105344u;
    {
        const bool branch_taken_0x105344 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x105348u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 264));
        if (branch_taken_0x105344) {
            ctx->pc = 0x104A88u;
            goto label_104a88;
        }
    }
    ctx->pc = 0x10534Cu;
label_10534c:
    // 0x10534c: 0x3c040017
    ctx->pc = 0x10534cu;
    SET_GPR_S32(ctx, 4, ((uint32_t)23 << 16));
    // 0x105350: 0xc04ace4
    ctx->pc = 0x105350u;
    SET_GPR_U32(ctx, 31, 0x105358u);
    ctx->pc = 0x105354u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 13088));
    ctx->pc = 0x12B390u;
    {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105358u; }
    }
    if (ctx->pc != 0x105358u) { return; }
    ctx->pc = 0x105358u;
    // 0x105358: 0xdfbf0190
    ctx->pc = 0x105358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x10535c: 0xdfbe0180
    ctx->pc = 0x10535cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x105360: 0xdfb70170
    ctx->pc = 0x105360u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x105364: 0xdfb60160
    ctx->pc = 0x105364u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x105368: 0xdfb50150
    ctx->pc = 0x105368u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x10536c: 0xdfb40140
    ctx->pc = 0x10536cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x105370: 0xdfb30130
    ctx->pc = 0x105370u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x105374: 0xdfb20120
    ctx->pc = 0x105374u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x105378: 0xdfb10110
    ctx->pc = 0x105378u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x10537c: 0xdfb00100
    ctx->pc = 0x10537cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x105380: 0x3e00008
    ctx->pc = 0x105380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105384u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x104378u: goto label_104378;
            case 0x1043A4u: goto label_1043a4;
            case 0x1043D4u: goto label_1043d4;
            case 0x1043F8u: goto label_1043f8;
            case 0x10441Cu: goto label_10441c;
            case 0x104440u: goto label_104440;
            case 0x104460u: goto label_104460;
            case 0x104464u: goto label_104464;
            case 0x104490u: goto label_104490;
            case 0x1044B4u: goto label_1044b4;
            case 0x1044D8u: goto label_1044d8;
            case 0x1044FCu: goto label_1044fc;
            case 0x10451Cu: goto label_10451c;
            case 0x104520u: goto label_104520;
            case 0x104554u: goto label_104554;
            case 0x104570u: goto label_104570;
            case 0x104594u: goto label_104594;
            case 0x1045B8u: goto label_1045b8;
            case 0x1045D8u: goto label_1045d8;
            case 0x1045DCu: goto label_1045dc;
            case 0x104610u: goto label_104610;
            case 0x104634u: goto label_104634;
            case 0x104650u: goto label_104650;
            case 0x104674u: goto label_104674;
            case 0x104694u: goto label_104694;
            case 0x104698u: goto label_104698;
            case 0x1046B4u: goto label_1046b4;
            case 0x1046D0u: goto label_1046d0;
            case 0x104700u: goto label_104700;
            case 0x104708u: goto label_104708;
            case 0x104728u: goto label_104728;
            case 0x104758u: goto label_104758;
            case 0x104788u: goto label_104788;
            case 0x104790u: goto label_104790;
            case 0x1047B0u: goto label_1047b0;
            case 0x1047F8u: goto label_1047f8;
            case 0x104820u: goto label_104820;
            case 0x104850u: goto label_104850;
            case 0x104858u: goto label_104858;
            case 0x104878u: goto label_104878;
            case 0x1048B0u: goto label_1048b0;
            case 0x1048E0u: goto label_1048e0;
            case 0x1048E8u: goto label_1048e8;
            case 0x104908u: goto label_104908;
            case 0x104960u: goto label_104960;
            case 0x104990u: goto label_104990;
            case 0x104998u: goto label_104998;
            case 0x1049B8u: goto label_1049b8;
            case 0x1049FCu: goto label_1049fc;
            case 0x104A08u: goto label_104a08;
            case 0x104A2Cu: goto label_104a2c;
            case 0x104A50u: goto label_104a50;
            case 0x104A68u: goto label_104a68;
            case 0x104A88u: goto label_104a88;
            case 0x104AE8u: goto label_104ae8;
            case 0x104B24u: goto label_104b24;
            case 0x104B60u: goto label_104b60;
            case 0x104B9Cu: goto label_104b9c;
            case 0x104BD8u: goto label_104bd8;
            case 0x104C14u: goto label_104c14;
            case 0x104C50u: goto label_104c50;
            case 0x104C8Cu: goto label_104c8c;
            case 0x104CC8u: goto label_104cc8;
            case 0x104D04u: goto label_104d04;
            case 0x104D4Cu: goto label_104d4c;
            case 0x104D88u: goto label_104d88;
            case 0x104DC4u: goto label_104dc4;
            case 0x104E00u: goto label_104e00;
            case 0x104E3Cu: goto label_104e3c;
            case 0x104E78u: goto label_104e78;
            case 0x104EB4u: goto label_104eb4;
            case 0x104EF0u: goto label_104ef0;
            case 0x104F2Cu: goto label_104f2c;
            case 0x104F68u: goto label_104f68;
            case 0x104FB0u: goto label_104fb0;
            case 0x104FECu: goto label_104fec;
            case 0x105028u: goto label_105028;
            case 0x105064u: goto label_105064;
            case 0x1050A0u: goto label_1050a0;
            case 0x1050DCu: goto label_1050dc;
            case 0x10511Cu: goto label_10511c;
            case 0x105158u: goto label_105158;
            case 0x105194u: goto label_105194;
            case 0x1051D0u: goto label_1051d0;
            case 0x105214u: goto label_105214;
            case 0x105250u: goto label_105250;
            case 0x10528Cu: goto label_10528c;
            case 0x1052C8u: goto label_1052c8;
            case 0x105304u: goto label_105304;
            case 0x105340u: goto label_105340;
            case 0x10534Cu: goto label_10534c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x105388u;
}
