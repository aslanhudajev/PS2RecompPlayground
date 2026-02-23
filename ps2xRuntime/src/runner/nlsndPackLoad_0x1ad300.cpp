#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlsndPackLoad
// Address: 0x1ad300 - 0x1ad584
void nlsndPackLoad_0x1ad300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlsndPackLoad");


    ctx->pc = 0x1ad300u;

    // 0x1ad300: 0x27bdffa0
    ctx->pc = 0x1ad300u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ad304: 0x7fbf0040
    ctx->pc = 0x1ad304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x1ad308: 0x7fb20030
    ctx->pc = 0x1ad308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1ad30c: 0x7fb10020
    ctx->pc = 0x1ad30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1ad310: 0x7fb00010
    ctx->pc = 0x1ad310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ad314: 0x70a08e28
    ctx->pc = 0x1ad314u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ad318: 0x84850000
    ctx->pc = 0x1ad318u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ad31c: 0x84820002
    ctx->pc = 0x1ad31cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1ad320: 0x70809628
    ctx->pc = 0x1ad320u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1ad324: 0x3c030030
    ctx->pc = 0x1ad324u;
    SET_GPR_U32(ctx, 3, ((uint32_t)48 << 16));
    // 0x1ad328: 0x24635ab0
    ctx->pc = 0x1ad328u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 23216));
    // 0x1ad32c: 0x52080
    ctx->pc = 0x1ad32cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ad330: 0x648021
    ctx->pc = 0x1ad330u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ad334: 0x8e030000
    ctx->pc = 0x1ad334u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ad338: 0x14620004
    ctx->pc = 0x1AD338u;
    {
        const bool branch_taken_0x1ad338 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1AD33Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x1ad338) {
            ctx->pc = 0x1AD34Cu;
            goto label_1ad34c;
        }
    }
    ctx->pc = 0x1AD340u;
    // 0x1ad340: 0x1000008a
    ctx->pc = 0x1AD340u;
    {
        const bool branch_taken_0x1ad340 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AD344u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ad340) {
            ctx->pc = 0x1AD56Cu;
            goto label_1ad56c;
        }
    }
    ctx->pc = 0x1AD348u;
    // 0x1ad348: 0x24020004
    ctx->pc = 0x1ad348u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_1ad34c:
    // 0x1ad34c: 0x12220076
    ctx->pc = 0x1AD34Cu;
    {
        const bool branch_taken_0x1ad34c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        if (branch_taken_0x1ad34c) {
            ctx->pc = 0x1AD528u;
            goto label_1ad528;
        }
    }
    ctx->pc = 0x1AD354u;
    // 0x1ad354: 0x24020003
    ctx->pc = 0x1ad354u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ad358: 0x12220042
    ctx->pc = 0x1AD358u;
    {
        const bool branch_taken_0x1ad358 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        if (branch_taken_0x1ad358) {
            ctx->pc = 0x1AD464u;
            goto label_1ad464;
        }
    }
    ctx->pc = 0x1AD360u;
    // 0x1ad360: 0x24020002
    ctx->pc = 0x1ad360u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ad364: 0x1222002b
    ctx->pc = 0x1AD364u;
    {
        const bool branch_taken_0x1ad364 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        if (branch_taken_0x1ad364) {
            ctx->pc = 0x1AD414u;
            goto label_1ad414;
        }
    }
    ctx->pc = 0x1AD36Cu;
    // 0x1ad36c: 0x24020001
    ctx->pc = 0x1ad36cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad370: 0x1222000e
    ctx->pc = 0x1AD370u;
    {
        const bool branch_taken_0x1ad370 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 2));
        if (branch_taken_0x1ad370) {
            ctx->pc = 0x1AD3ACu;
            goto label_1ad3ac;
        }
    }
    ctx->pc = 0x1AD378u;
    // 0x1ad378: 0x8e42000c
    ctx->pc = 0x1ad378u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1ad37c: 0xae420050
    ctx->pc = 0x1ad37cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
    // 0x1ad380: 0x8e420024
    ctx->pc = 0x1ad380u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1ad384: 0x4410003
    ctx->pc = 0x1AD384u;
    {
        const bool branch_taken_0x1ad384 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AD388u;
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 11));
        if (branch_taken_0x1ad384) {
            ctx->pc = 0x1AD394u;
            goto label_1ad394;
        }
    }
    ctx->pc = 0x1AD38Cu;
    // 0x1ad38c: 0x244207ff
    ctx->pc = 0x1ad38cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2047));
    // 0x1ad390: 0x22ac3
    ctx->pc = 0x1ad390u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 11));
label_1ad394:
    // 0x1ad394: 0x8e440044
    ctx->pc = 0x1ad394u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x1ad398: 0xc05af94
    ctx->pc = 0x1AD398u;
    SET_GPR_U32(ctx, 31, 0x1AD3A0u);
    ctx->pc = 0x1AD39Cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16BE50u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Seek_0x16be50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD3A0u; }
        else if (ctx->pc != 0x1AD3A0u) { ctx->pc = 0x1AD3A0u; }
    }
    if (ctx->pc != 0x1AD3A0u) { return; }
    ctx->pc = 0x1AD3A0u;
    // 0x1ad3a0: 0x8e42002c
    ctx->pc = 0x1ad3a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1ad3a4: 0x26310001
    ctx->pc = 0x1ad3a4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ad3a8: 0xae42004c
    ctx->pc = 0x1ad3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 2));
label_1ad3ac:
    // 0x1ad3ac: 0x8e44004c
    ctx->pc = 0x1ad3acu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1ad3b0: 0x8e430008
    ctx->pc = 0x1ad3b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1ad3b4: 0x83102a
    ctx->pc = 0x1ad3b4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x1ad3b8: 0x5440000a
    ctx->pc = 0x1AD3B8u;
    {
        const bool branch_taken_0x1ad3b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1ad3b8) {
            ctx->pc = 0x1AD3BCu;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 2047));
            ctx->pc = 0x1AD3E4u;
            goto label_1ad3e4;
        }
    }
    ctx->pc = 0x1AD3C0u;
    // 0x1ad3c0: 0x4610003
    ctx->pc = 0x1AD3C0u;
    {
        const bool branch_taken_0x1ad3c0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AD3C4u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 11));
        if (branch_taken_0x1ad3c0) {
            ctx->pc = 0x1AD3D0u;
            goto label_1ad3d0;
        }
    }
    ctx->pc = 0x1AD3C8u;
    // 0x1ad3c8: 0x246207ff
    ctx->pc = 0x1ad3c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2047));
    // 0x1ad3cc: 0x212c3
    ctx->pc = 0x1ad3ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_1ad3d0:
    // 0x1ad3d0: 0xae420054
    ctx->pc = 0x1ad3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x1ad3d4: 0x8e420008
    ctx->pc = 0x1ad3d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1ad3d8: 0x10000009
    ctx->pc = 0x1AD3D8u;
    {
        const bool branch_taken_0x1ad3d8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AD3DCu;
        WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
        if (branch_taken_0x1ad3d8) {
            ctx->pc = 0x1AD400u;
            goto label_1ad400;
        }
    }
    ctx->pc = 0x1AD3E0u;
    // 0x1ad3e0: 0x248307ff
    ctx->pc = 0x1ad3e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 2047));
label_1ad3e4:
    // 0x1ad3e4: 0x4610003
    ctx->pc = 0x1AD3E4u;
    {
        const bool branch_taken_0x1ad3e4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AD3E8u;
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 11));
        if (branch_taken_0x1ad3e4) {
            ctx->pc = 0x1AD3F4u;
            goto label_1ad3f4;
        }
    }
    ctx->pc = 0x1AD3ECu;
    // 0x1ad3ec: 0x246207ff
    ctx->pc = 0x1ad3ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 2047));
    // 0x1ad3f0: 0x212c3
    ctx->pc = 0x1ad3f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_1ad3f4:
    // 0x1ad3f4: 0xae420054
    ctx->pc = 0x1ad3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x1ad3f8: 0x8e42004c
    ctx->pc = 0x1ad3f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1ad3fc: 0xae420058
    ctx->pc = 0x1ad3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 2));
label_1ad400:
    // 0x1ad400: 0x8e440044
    ctx->pc = 0x1ad400u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x1ad404: 0x8e450054
    ctx->pc = 0x1ad404u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x1ad408: 0xc05aeba
    ctx->pc = 0x1AD408u;
    SET_GPR_U32(ctx, 31, 0x1AD410u);
    ctx->pc = 0x1AD40Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD410u; }
        else if (ctx->pc != 0x1AD410u) { ctx->pc = 0x1AD410u; }
    }
    if (ctx->pc != 0x1AD410u) { return; }
    ctx->pc = 0x1AD410u;
    // 0x1ad410: 0x26310001
    ctx->pc = 0x1ad410u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1ad414:
    // 0x1ad414: 0xc05b018
    ctx->pc = 0x1AD414u;
    SET_GPR_U32(ctx, 31, 0x1AD41Cu);
    ctx->pc = 0x1AD418u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 68)));
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD41Cu; }
        else if (ctx->pc != 0x1AD41Cu) { ctx->pc = 0x1AD41Cu; }
    }
    if (ctx->pc != 0x1AD41Cu) { return; }
    ctx->pc = 0x1AD41Cu;
    // 0x1ad41c: 0x24030001
    ctx->pc = 0x1ad41cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad420: 0x10430004
    ctx->pc = 0x1AD420u;
    {
        const bool branch_taken_0x1ad420 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1ad420) {
            ctx->pc = 0x1AD434u;
            goto label_1ad434;
        }
    }
    ctx->pc = 0x1AD428u;
    // 0x1ad428: 0x24030003
    ctx->pc = 0x1ad428u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ad42c: 0x1443004f
    ctx->pc = 0x1AD42Cu;
    {
        const bool branch_taken_0x1ad42c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1AD430u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1ad42c) {
            ctx->pc = 0x1AD56Cu;
            goto label_1ad56c;
        }
    }
    ctx->pc = 0x1AD434u;
label_1ad434:
    // 0x1ad434: 0x8e420004
    ctx->pc = 0x1ad434u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1ad438: 0x27a40050
    ctx->pc = 0x1ad438u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ad43c: 0x24050001
    ctx->pc = 0x1ad43cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad440: 0xafa20050
    ctx->pc = 0x1ad440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x1ad444: 0x8e420050
    ctx->pc = 0x1ad444u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1ad448: 0xafa20054
    ctx->pc = 0x1ad448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x1ad44c: 0x8e420058
    ctx->pc = 0x1ad44cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1ad450: 0xafa20058
    ctx->pc = 0x1ad450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x1ad454: 0xc055328
    ctx->pc = 0x1AD454u;
    SET_GPR_U32(ctx, 31, 0x1AD45Cu);
    ctx->pc = 0x1AD458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    ctx->pc = 0x154CA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifSetDma_0x154ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD45Cu; }
        else if (ctx->pc != 0x1AD45Cu) { ctx->pc = 0x1AD45Cu; }
    }
    if (ctx->pc != 0x1AD45Cu) { return; }
    ctx->pc = 0x1AD45Cu;
    // 0x1ad45c: 0xae420048
    ctx->pc = 0x1ad45cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 2));
    // 0x1ad460: 0x26310001
    ctx->pc = 0x1ad460u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1ad464:
    // 0x1ad464: 0xc055320
    ctx->pc = 0x1AD464u;
    SET_GPR_U32(ctx, 31, 0x1AD46Cu);
    ctx->pc = 0x1AD468u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 72)));
    ctx->pc = 0x154C80u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifDmaStat_0x154c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD46Cu; }
        else if (ctx->pc != 0x1AD46Cu) { ctx->pc = 0x1AD46Cu; }
    }
    if (ctx->pc != 0x1AD46Cu) { return; }
    ctx->pc = 0x1AD46Cu;
    // 0x1ad46c: 0x441003e
    ctx->pc = 0x1AD46Cu;
    {
        const bool branch_taken_0x1ad46c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ad46c) {
            ctx->pc = 0x1AD568u;
            goto label_1ad568;
        }
    }
    ctx->pc = 0x1AD474u;
    // 0x1ad474: 0x8e430058
    ctx->pc = 0x1ad474u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1ad478: 0x8e42004c
    ctx->pc = 0x1ad478u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1ad47c: 0x431023
    ctx->pc = 0x1ad47cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ad480: 0xae42004c
    ctx->pc = 0x1ad480u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 2));
    // 0x1ad484: 0x8e430050
    ctx->pc = 0x1ad484u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1ad488: 0x8e420058
    ctx->pc = 0x1ad488u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x1ad48c: 0x621021
    ctx->pc = 0x1ad48cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ad490: 0xae420050
    ctx->pc = 0x1ad490u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
    // 0x1ad494: 0x8e42004c
    ctx->pc = 0x1ad494u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1ad498: 0x18400003
    ctx->pc = 0x1AD498u;
    {
        const bool branch_taken_0x1ad498 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ad498) {
            ctx->pc = 0x1AD4A8u;
            goto label_1ad4a8;
        }
    }
    ctx->pc = 0x1AD4A0u;
    // 0x1ad4a0: 0x10000031
    ctx->pc = 0x1AD4A0u;
    {
        const bool branch_taken_0x1ad4a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1AD4A4u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1ad4a0) {
            ctx->pc = 0x1AD568u;
            goto label_1ad568;
        }
    }
    ctx->pc = 0x1AD4A8u;
label_1ad4a8:
    // 0x1ad4a8: 0x86430000
    ctx->pc = 0x1ad4a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ad4ac: 0x86450002
    ctx->pc = 0x1ad4acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1ad4b0: 0x3c020030
    ctx->pc = 0x1ad4b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ad4b4: 0x24475b40
    ctx->pc = 0x1ad4b4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 23360));
    // 0x1ad4b8: 0x3c020030
    ctx->pc = 0x1ad4b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ad4bc: 0x24445af0
    ctx->pc = 0x1ad4bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 23280));
    // 0x1ad4c0: 0x31400
    ctx->pc = 0x1ad4c0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 16));
    // 0x1ad4c4: 0xa21025
    ctx->pc = 0x1ad4c4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1ad4c8: 0x3c010030
    ctx->pc = 0x1ad4c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ad4cc: 0xac225b40
    ctx->pc = 0x1ad4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 23360), GPR_U32(ctx, 2));
    // 0x1ad4d0: 0x8e420020
    ctx->pc = 0x1ad4d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1ad4d4: 0x3c010030
    ctx->pc = 0x1ad4d4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ad4d8: 0x24060001
    ctx->pc = 0x1ad4d8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad4dc: 0x24050240
    ctx->pc = 0x1ad4dcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 576));
    // 0x1ad4e0: 0x24080020
    ctx->pc = 0x1ad4e0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1ad4e4: 0x70004e28
    ctx->pc = 0x1ad4e4u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ad4e8: 0xac225b44
    ctx->pc = 0x1ad4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 23364), GPR_U32(ctx, 2));
    // 0x1ad4ec: 0x8e42000c
    ctx->pc = 0x1ad4ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1ad4f0: 0x3c010030
    ctx->pc = 0x1ad4f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ad4f4: 0x70005628
    ctx->pc = 0x1ad4f4u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ad4f8: 0x70005e28
    ctx->pc = 0x1ad4f8u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ad4fc: 0xac225b48
    ctx->pc = 0x1ad4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 23368), GPR_U32(ctx, 2));
    // 0x1ad500: 0x8e420030
    ctx->pc = 0x1ad500u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1ad504: 0x3c010030
    ctx->pc = 0x1ad504u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ad508: 0xac225b4c
    ctx->pc = 0x1ad508u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 23372), GPR_U32(ctx, 2));
    // 0x1ad50c: 0x8e42002c
    ctx->pc = 0x1ad50cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1ad510: 0x3c010030
    ctx->pc = 0x1ad510u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ad514: 0xac225b50
    ctx->pc = 0x1ad514u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 23376), GPR_U32(ctx, 2));
    // 0x1ad518: 0xaf868ab4
    ctx->pc = 0x1ad518u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937268), GPR_U32(ctx, 6));
    // 0x1ad51c: 0xc055e72
    ctx->pc = 0x1AD51Cu;
    SET_GPR_U32(ctx, 31, 0x1AD524u);
    ctx->pc = 0x1AD520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    ctx->pc = 0x1579C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifCallRpc_0x1579c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD524u; }
        else if (ctx->pc != 0x1AD524u) { ctx->pc = 0x1AD524u; }
    }
    if (ctx->pc != 0x1AD524u) { return; }
    ctx->pc = 0x1AD524u;
    // 0x1ad524: 0x26310001
    ctx->pc = 0x1ad524u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1ad528:
    // 0x1ad528: 0x3c020030
    ctx->pc = 0x1ad528u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ad52c: 0xc055eee
    ctx->pc = 0x1AD52Cu;
    SET_GPR_U32(ctx, 31, 0x1AD534u);
    ctx->pc = 0x1AD530u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 23280));
    ctx->pc = 0x157BB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifCheckStatRpc_0x157bb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AD534u; }
        else if (ctx->pc != 0x1AD534u) { ctx->pc = 0x1AD534u; }
    }
    if (ctx->pc != 0x1AD534u) { return; }
    ctx->pc = 0x1AD534u;
    // 0x1ad534: 0x24030001
    ctx->pc = 0x1ad534u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad538: 0x1043000b
    ctx->pc = 0x1AD538u;
    {
        const bool branch_taken_0x1ad538 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1ad538) {
            ctx->pc = 0x1AD568u;
            goto label_1ad568;
        }
    }
    ctx->pc = 0x1AD540u;
    // 0x1ad540: 0xaf808ab4
    ctx->pc = 0x1ad540u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937268), GPR_U32(ctx, 0));
    // 0x1ad544: 0x86430002
    ctx->pc = 0x1ad544u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1ad548: 0x82440000
    ctx->pc = 0x1ad548u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ad54c: 0x3c020030
    ctx->pc = 0x1ad54cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ad550: 0x24425a80
    ctx->pc = 0x1ad550u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 23168));
    // 0x1ad554: 0x70008e28
    ctx->pc = 0x1ad554u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ad558: 0x431021
    ctx->pc = 0x1ad558u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ad55c: 0xa0440000
    ctx->pc = 0x1ad55cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ad560: 0x86420002
    ctx->pc = 0x1ad560u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1ad564: 0xae020000
    ctx->pc = 0x1ad564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1ad568:
    // 0x1ad568: 0x72201628
    ctx->pc = 0x1ad568u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_1ad56c:
    // 0x1ad56c: 0x7bbf0040
    ctx->pc = 0x1ad56cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ad570: 0x7bb20030
    ctx->pc = 0x1ad570u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ad574: 0x7bb10020
    ctx->pc = 0x1ad574u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad578: 0x7bb00010
    ctx->pc = 0x1ad578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad57c: 0x3e00008
    ctx->pc = 0x1AD57Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD580u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1AD34Cu: goto label_1ad34c;
            case 0x1AD394u: goto label_1ad394;
            case 0x1AD3ACu: goto label_1ad3ac;
            case 0x1AD3D0u: goto label_1ad3d0;
            case 0x1AD3E4u: goto label_1ad3e4;
            case 0x1AD3F4u: goto label_1ad3f4;
            case 0x1AD400u: goto label_1ad400;
            case 0x1AD414u: goto label_1ad414;
            case 0x1AD434u: goto label_1ad434;
            case 0x1AD464u: goto label_1ad464;
            case 0x1AD4A8u: goto label_1ad4a8;
            case 0x1AD528u: goto label_1ad528;
            case 0x1AD568u: goto label_1ad568;
            case 0x1AD56Cu: goto label_1ad56c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1AD584u;
}
