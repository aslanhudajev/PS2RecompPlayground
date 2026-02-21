#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AtreeNodeInit
// Address: 0x2115b0 - 0x2117f0
void AtreeNodeInit_0x2115b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2115b0u;

    // 0x2115b0: 0x27bdffb0
    ctx->pc = 0x2115b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2115b4: 0xffbf0040
    ctx->pc = 0x2115b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2115b8: 0xffb30030
    ctx->pc = 0x2115b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2115bc: 0xffb20020
    ctx->pc = 0x2115bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2115c0: 0xffb10010
    ctx->pc = 0x2115c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2115c4: 0xffb00000
    ctx->pc = 0x2115c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2115c8: 0x80802d
    ctx->pc = 0x2115c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2115cc: 0xa0982d
    ctx->pc = 0x2115ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2115d0: 0xc0202d
    ctx->pc = 0x2115d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2115d4: 0xe0902d
    ctx->pc = 0x2115d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2115d8: 0x100882d
    ctx->pc = 0x2115d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2115dc: 0x9622002e
    ctx->pc = 0x2115dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
    // 0x2115e0: 0x30420001
    ctx->pc = 0x2115e0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2115e4: 0x14400004
    ctx->pc = 0x2115E4u;
    {
        const bool branch_taken_0x2115e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2115E8u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2115e4) {
            ctx->pc = 0x2115F8u;
            goto label_2115f8;
        }
    }
    ctx->pc = 0x2115ECu;
    // 0x2115ec: 0x80820000
    ctx->pc = 0x2115ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2115f0: 0x14400014
    ctx->pc = 0x2115F0u;
    {
        const bool branch_taken_0x2115f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2115F4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2115f0) {
            ctx->pc = 0x211644u;
            goto label_211644;
        }
    }
    ctx->pc = 0x2115F8u;
label_2115f8:
    // 0x2115f8: 0x12600002
    ctx->pc = 0x2115F8u;
    {
        const bool branch_taken_0x2115f8 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x2115FCu;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2115f8) {
            ctx->pc = 0x211604u;
            goto label_211604;
        }
    }
    ctx->pc = 0x211600u;
    // 0x211600: 0x8e660000
    ctx->pc = 0x211600u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_211604:
    // 0x211604: 0x202d
    ctx->pc = 0x211604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211608: 0x282d
    ctx->pc = 0x211608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21160c: 0xc0b1b04
    ctx->pc = 0x21160Cu;
    SET_GPR_U32(ctx, 31, 0x211614u);
    ctx->pc = 0x211610u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C6C10u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewObject_0x2c6c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211614u; }
    }
    if (ctx->pc != 0x211614u) { return; }
    ctx->pc = 0x211614u;
    // 0x211614: 0x12200005
    ctx->pc = 0x211614u;
    {
        const bool branch_taken_0x211614 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x211618u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x211614) {
            ctx->pc = 0x21162Cu;
            goto label_21162c;
        }
    }
    ctx->pc = 0x21161Cu;
    // 0x21161c: 0x8623002c
    ctx->pc = 0x21161cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x211620: 0x24020002
    ctx->pc = 0x211620u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x211624: 0x50620012
    ctx->pc = 0x211624u;
    {
        const bool branch_taken_0x211624 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x211624) {
            ctx->pc = 0x211628u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x211670u;
            goto label_211670;
        }
    }
    ctx->pc = 0x21162Cu;
label_21162c:
    // 0x21162c: 0x8e040000
    ctx->pc = 0x21162cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x211630: 0x24050001
    ctx->pc = 0x211630u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x211634: 0xc0b41b8
    ctx->pc = 0x211634u;
    SET_GPR_U32(ctx, 31, 0x21163Cu);
    ctx->pc = 0x211638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21163Cu; }
    }
    if (ctx->pc != 0x21163Cu) { return; }
    ctx->pc = 0x21163Cu;
    // 0x21163c: 0x1000000c
    ctx->pc = 0x21163Cu;
    {
        const bool branch_taken_0x21163c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x211640u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
        if (branch_taken_0x21163c) {
            ctx->pc = 0x211670u;
            goto label_211670;
        }
    }
    ctx->pc = 0x211644u;
label_211644:
    // 0x211644: 0xc0b19fe
    ctx->pc = 0x211644u;
    SET_GPR_U32(ctx, 31, 0x21164Cu);
    ctx->pc = 0x211648u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C67F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_FindObject_Sub_0x2c67f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21164Cu; }
    }
    if (ctx->pc != 0x21164Cu) { return; }
    ctx->pc = 0x21164Cu;
    // 0x21164c: 0x12600002
    ctx->pc = 0x21164Cu;
    {
        const bool branch_taken_0x21164c = (GPR_U32(ctx, 19) == GPR_U32(ctx, 0));
        ctx->pc = 0x211650u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21164c) {
            ctx->pc = 0x211658u;
            goto label_211658;
        }
    }
    ctx->pc = 0x211654u;
    // 0x211654: 0x8e660000
    ctx->pc = 0x211654u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_211658:
    // 0x211658: 0x40202d
    ctx->pc = 0x211658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21165c: 0x282d
    ctx->pc = 0x21165cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211660: 0xc0b2236
    ctx->pc = 0x211660u;
    SET_GPR_U32(ctx, 31, 0x211668u);
    ctx->pc = 0x211664u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C88D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewObject_0x2c88d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211668u; }
    }
    if (ctx->pc != 0x211668u) { return; }
    ctx->pc = 0x211668u;
    // 0x211668: 0xae020000
    ctx->pc = 0x211668u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x21166c: 0x8e020000
    ctx->pc = 0x21166cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_211670:
    // 0x211670: 0x5440000b
    ctx->pc = 0x211670u;
    {
        const bool branch_taken_0x211670 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x211670) {
            ctx->pc = 0x211674u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x2116A0u;
            goto label_2116a0;
        }
    }
    ctx->pc = 0x211678u;
    // 0x211678: 0x3c020037
    ctx->pc = 0x211678u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x21167c: 0x3c0300ff
    ctx->pc = 0x21167cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)255 << 16));
    // 0x211680: 0x3463ff00
    ctx->pc = 0x211680u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65280));
    // 0x211684: 0xac438008
    ctx->pc = 0x211684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294934536), GPR_U32(ctx, 3));
    // 0x211688: 0x3c04003a
    ctx->pc = 0x211688u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x21168c: 0x248458e8
    ctx->pc = 0x21168cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 22760));
    // 0x211690: 0x3c050080
    ctx->pc = 0x211690u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    // 0x211694: 0xc0b49a6
    ctx->pc = 0x211694u;
    SET_GPR_U32(ctx, 31, 0x21169Cu);
    ctx->pc = 0x211698u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 16480));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21169Cu; }
    }
    if (ctx->pc != 0x21169Cu) { return; }
    ctx->pc = 0x21169Cu;
    // 0x21169c: 0x8e040000
    ctx->pc = 0x21169cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2116a0:
    // 0x2116a0: 0x8e250030
    ctx->pc = 0x2116a0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2116a4: 0xc0b41b8
    ctx->pc = 0x2116A4u;
    SET_GPR_U32(ctx, 31, 0x2116ACu);
    ctx->pc = 0x2116A8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2116ACu; }
    }
    if (ctx->pc != 0x2116ACu) { return; }
    ctx->pc = 0x2116ACu;
    // 0x2116ac: 0x52200039
    ctx->pc = 0x2116ACu;
    {
        const bool branch_taken_0x2116ac = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x2116ac) {
            ctx->pc = 0x2116B0u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
            ctx->pc = 0x211794u;
            goto label_211794;
        }
    }
    ctx->pc = 0x2116B4u;
    // 0x2116b4: 0x8622002c
    ctx->pc = 0x2116b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2116b8: 0xae020020
    ctx->pc = 0x2116b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2116bc: 0x8623002c
    ctx->pc = 0x2116bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2116c0: 0x24020002
    ctx->pc = 0x2116c0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2116c4: 0x1062001d
    ctx->pc = 0x2116C4u;
    {
        const bool branch_taken_0x2116c4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2116C8u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 52)));
        if (branch_taken_0x2116c4) {
            ctx->pc = 0x21173Cu;
            goto label_21173c;
        }
    }
    ctx->pc = 0x2116CCu;
    // 0x2116cc: 0x28620003
    ctx->pc = 0x2116ccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 3));
    // 0x2116d0: 0x10400005
    ctx->pc = 0x2116D0u;
    {
        const bool branch_taken_0x2116d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2116D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2116d0) {
            ctx->pc = 0x2116E8u;
            goto label_2116e8;
        }
    }
    ctx->pc = 0x2116D8u;
    // 0x2116d8: 0x1062000a
    ctx->pc = 0x2116D8u;
    {
        const bool branch_taken_0x2116d8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2116d8) {
            ctx->pc = 0x211704u;
            goto label_211704;
        }
    }
    ctx->pc = 0x2116E0u;
    // 0x2116e0: 0x10000025
    ctx->pc = 0x2116E0u;
    {
        const bool branch_taken_0x2116e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2116E4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        if (branch_taken_0x2116e0) {
            ctx->pc = 0x211778u;
            goto label_211778;
        }
    }
    ctx->pc = 0x2116E8u;
label_2116e8:
    // 0x2116e8: 0x24020003
    ctx->pc = 0x2116e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2116ec: 0x10620017
    ctx->pc = 0x2116ECu;
    {
        const bool branch_taken_0x2116ec = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2116F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x2116ec) {
            ctx->pc = 0x21174Cu;
            goto label_21174c;
        }
    }
    ctx->pc = 0x2116F4u;
    // 0x2116f4: 0x5062001a
    ctx->pc = 0x2116F4u;
    {
        const bool branch_taken_0x2116f4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x2116f4) {
            ctx->pc = 0x2116F8u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x211760u;
            goto label_211760;
        }
    }
    ctx->pc = 0x2116FCu;
    // 0x2116fc: 0x1000001e
    ctx->pc = 0x2116FCu;
    {
        const bool branch_taken_0x2116fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x211700u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        if (branch_taken_0x2116fc) {
            ctx->pc = 0x211778u;
            goto label_211778;
        }
    }
    ctx->pc = 0x211704u;
label_211704:
    // 0x211704: 0x4820007
    ctx->pc = 0x211704u;
    {
        const bool branch_taken_0x211704 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x211704) {
            ctx->pc = 0x211708u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
            ctx->pc = 0x211724u;
            goto label_211724;
        }
    }
    ctx->pc = 0x21170Cu;
    // 0x21170c: 0x8e420004
    ctx->pc = 0x21170cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x211710: 0x821021
    ctx->pc = 0x211710u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x211714: 0xc084522
    ctx->pc = 0x211714u;
    SET_GPR_U32(ctx, 31, 0x21171Cu);
    ctx->pc = 0x211718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    ctx->pc = 0x211488u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetAnimData_0x211488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21171Cu; }
    }
    if (ctx->pc != 0x21171Cu) { return; }
    ctx->pc = 0x21171Cu;
    // 0x21171c: 0x10000002
    ctx->pc = 0x21171Cu;
    {
        const bool branch_taken_0x21171c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x211720u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        if (branch_taken_0x21171c) {
            ctx->pc = 0x211728u;
            goto label_211728;
        }
    }
    ctx->pc = 0x211724u;
label_211724:
    // 0x211724: 0xae00001c
    ctx->pc = 0x211724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_211728:
    // 0x211728: 0x8e04001c
    ctx->pc = 0x211728u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x21172c: 0xc083e9e
    ctx->pc = 0x21172Cu;
    SET_GPR_U32(ctx, 31, 0x211734u);
    ctx->pc = 0x211730u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->pc = 0x20FA78u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitAnimData_0x20fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211734u; }
    }
    if (ctx->pc != 0x211734u) { return; }
    ctx->pc = 0x211734u;
    // 0x211734: 0x10000011
    ctx->pc = 0x211734u;
    {
        const bool branch_taken_0x211734 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x211738u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x211734) {
            ctx->pc = 0x21177Cu;
            goto label_21177c;
        }
    }
    ctx->pc = 0x21173Cu;
label_21173c:
    // 0x21173c: 0x4800005
    ctx->pc = 0x21173Cu;
    {
        const bool branch_taken_0x21173c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x211740u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21173c) {
            ctx->pc = 0x211754u;
            goto label_211754;
        }
    }
    ctx->pc = 0x211744u;
    // 0x211744: 0x10000002
    ctx->pc = 0x211744u;
    {
        const bool branch_taken_0x211744 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x211748u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
        if (branch_taken_0x211744) {
            ctx->pc = 0x211750u;
            goto label_211750;
        }
    }
    ctx->pc = 0x21174Cu;
label_21174c:
    // 0x21174c: 0x8e420000
    ctx->pc = 0x21174cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_211750:
    // 0x211750: 0x821021
    ctx->pc = 0x211750u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_211754:
    // 0x211754: 0xae020024
    ctx->pc = 0x211754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x211758: 0x10000007
    ctx->pc = 0x211758u;
    {
        const bool branch_taken_0x211758 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21175Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        if (branch_taken_0x211758) {
            ctx->pc = 0x211778u;
            goto label_211778;
        }
    }
    ctx->pc = 0x211760u;
label_211760:
    // 0x211760: 0x852821
    ctx->pc = 0x211760u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x211764: 0xae050024
    ctx->pc = 0x211764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
    // 0x211768: 0x8e040000
    ctx->pc = 0x211768u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21176c: 0xc0844fe
    ctx->pc = 0x21176Cu;
    SET_GPR_U32(ctx, 31, 0x211774u);
    ctx->pc = 0x211770u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 20));
    ctx->pc = 0x2113F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitPsysData_0x2113f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211774u; }
    }
    if (ctx->pc != 0x211774u) { return; }
    ctx->pc = 0x211774u;
    // 0x211774: 0xae02001c
    ctx->pc = 0x211774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_211778:
    // 0x211778: 0xc6200020
    ctx->pc = 0x211778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_21177c:
    // 0x21177c: 0xe6000010
    ctx->pc = 0x21177cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x211780: 0xc6200024
    ctx->pc = 0x211780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x211784: 0xe6000014
    ctx->pc = 0x211784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x211788: 0xc6200028
    ctx->pc = 0x211788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21178c: 0x10000005
    ctx->pc = 0x21178Cu;
    {
        const bool branch_taken_0x21178c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x211790u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        if (branch_taken_0x21178c) {
            ctx->pc = 0x2117A4u;
            goto label_2117a4;
        }
    }
    ctx->pc = 0x211794u;
label_211794:
    // 0x211794: 0xae000024
    ctx->pc = 0x211794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x211798: 0xae000010
    ctx->pc = 0x211798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x21179c: 0xae000014
    ctx->pc = 0x21179cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2117a0: 0xae000018
    ctx->pc = 0x2117a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_2117a4:
    // 0x2117a4: 0x8e020000
    ctx->pc = 0x2117a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2117a8: 0xc6000010
    ctx->pc = 0x2117a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2117ac: 0xe4400030
    ctx->pc = 0x2117acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2117b0: 0x8e020000
    ctx->pc = 0x2117b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2117b4: 0xc6000014
    ctx->pc = 0x2117b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2117b8: 0xe4400034
    ctx->pc = 0x2117b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x2117bc: 0x8e020000
    ctx->pc = 0x2117bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2117c0: 0xc6000018
    ctx->pc = 0x2117c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2117c4: 0xe4400038
    ctx->pc = 0x2117c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x2117c8: 0xae130004
    ctx->pc = 0x2117c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x2117cc: 0xae000008
    ctx->pc = 0x2117ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2117d0: 0xae00000c
    ctx->pc = 0x2117d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2117d4: 0xdfbf0040
    ctx->pc = 0x2117d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2117d8: 0xdfb30030
    ctx->pc = 0x2117d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2117dc: 0xdfb20020
    ctx->pc = 0x2117dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2117e0: 0xdfb10010
    ctx->pc = 0x2117e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2117e4: 0xdfb00000
    ctx->pc = 0x2117e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2117e8: 0x3e00008
    ctx->pc = 0x2117E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2117ECu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2115F8u: goto label_2115f8;
            case 0x211604u: goto label_211604;
            case 0x21162Cu: goto label_21162c;
            case 0x211644u: goto label_211644;
            case 0x211658u: goto label_211658;
            case 0x211670u: goto label_211670;
            case 0x2116A0u: goto label_2116a0;
            case 0x2116E8u: goto label_2116e8;
            case 0x211704u: goto label_211704;
            case 0x211724u: goto label_211724;
            case 0x211728u: goto label_211728;
            case 0x21173Cu: goto label_21173c;
            case 0x21174Cu: goto label_21174c;
            case 0x211750u: goto label_211750;
            case 0x211754u: goto label_211754;
            case 0x211760u: goto label_211760;
            case 0x211778u: goto label_211778;
            case 0x21177Cu: goto label_21177c;
            case 0x211794u: goto label_211794;
            case 0x2117A4u: goto label_2117a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2117F0u;
}
