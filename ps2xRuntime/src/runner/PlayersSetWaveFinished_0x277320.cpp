#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayersSetWaveFinished
// Address: 0x277320 - 0x2774ac
void PlayersSetWaveFinished_0x277320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x277320u;

    // 0x277320: 0x27bdffd0
    ctx->pc = 0x277320u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x277324: 0xffbf0020
    ctx->pc = 0x277324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x277328: 0xffb10010
    ctx->pc = 0x277328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27732c: 0xffb00000
    ctx->pc = 0x27732cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x277330: 0x80882d
    ctx->pc = 0x277330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277334: 0xa0802d
    ctx->pc = 0x277334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277338: 0x3c020034
    ctx->pc = 0x277338u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27733c: 0xac51e808
    ctx->pc = 0x27733cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961160), GPR_U32(ctx, 17));
    // 0x277340: 0x3c020034
    ctx->pc = 0x277340u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x277344: 0xac50e80c
    ctx->pc = 0x277344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961164), GPR_U32(ctx, 16));
    // 0x277348: 0x111200
    ctx->pc = 0x277348u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 8));
    // 0x27734c: 0x320400ff
    ctx->pc = 0x27734cu;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 16), 255));
    // 0x277350: 0xc0986b4
    ctx->pc = 0x277350u;
    SET_GPR_U32(ctx, 31, 0x277358u);
    ctx->pc = 0x277354u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->pc = 0x261AD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadWorldData_0x261ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277358u; }
    }
    if (ctx->pc != 0x277358u) { return; }
    ctx->pc = 0x277358u;
    // 0x277358: 0x482d
    ctx->pc = 0x277358u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27735c: 0x240e2b00
    ctx->pc = 0x27735cu;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x277360: 0x3c020032
    ctx->pc = 0x277360u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x277364: 0x24581bc0
    ctx->pc = 0x277364u;
    SET_GPR_S32(ctx, 24, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x277368: 0x24070001
    ctx->pc = 0x277368u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x27736c: 0x240d0004
    ctx->pc = 0x27736cu;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 4));
    // 0x277370: 0x240c0005
    ctx->pc = 0x277370u;
    SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 0), 5));
    // 0x277374: 0x3c020034
    ctx->pc = 0x277374u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x277378: 0x8c46e7c8
    ctx->pc = 0x277378u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x27737c: 0x240800b4
    ctx->pc = 0x27737cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 180));
    // 0x277380: 0x240b000e
    ctx->pc = 0x277380u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 14));
    // 0x277384: 0x2075004
    ctx->pc = 0x277384u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 16) & 0x1F));
    // 0x277388: 0x12e1018
    ctx->pc = 0x277388u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27738c: 0x0
    ctx->pc = 0x27738cu;
    // NOP
label_277390:
    // 0x277390: 0x582821
    ctx->pc = 0x277390u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x277394: 0x8ca200fc
    ctx->pc = 0x277394u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 252)));
    // 0x277398: 0x50470006
    ctx->pc = 0x277398u;
    {
        const bool branch_taken_0x277398 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 7));
        if (branch_taken_0x277398) {
            ctx->pc = 0x27739Cu;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 144)));
            ctx->pc = 0x2773B4u;
            goto label_2773b4;
        }
    }
    ctx->pc = 0x2773A0u;
    // 0x2773a0: 0x504d0004
    ctx->pc = 0x2773A0u;
    {
        const bool branch_taken_0x2773a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 13));
        if (branch_taken_0x2773a0) {
            ctx->pc = 0x2773A4u;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 144)));
            ctx->pc = 0x2773B4u;
            goto label_2773b4;
        }
    }
    ctx->pc = 0x2773A8u;
    // 0x2773a8: 0x544c0038
    ctx->pc = 0x2773A8u;
    {
        const bool branch_taken_0x2773a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 12));
        if (branch_taken_0x2773a8) {
            ctx->pc = 0x2773ACu;
            SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
            ctx->pc = 0x27748Cu;
            goto label_27748c;
        }
    }
    ctx->pc = 0x2773B0u;
    // 0x2773b0: 0x84c30090
    ctx->pc = 0x2773b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 144)));
label_2773b4:
    // 0x2773b4: 0x18600016
    ctx->pc = 0x2773B4u;
    {
        const bool branch_taken_0x2773b4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2773B8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
        if (branch_taken_0x2773b4) {
            ctx->pc = 0x277410u;
            goto label_277410;
        }
    }
    ctx->pc = 0x2773BCu;
    // 0x2773bc: 0x8ca2000c
    ctx->pc = 0x2773bcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2773c0: 0x487818
    ctx->pc = 0x2773c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2773c4: 0x1e52021
    ctx->pc = 0x2773c4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 5)));
    // 0x2773c8: 0x94820cf8
    ctx->pc = 0x2773c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3320)));
    // 0x2773cc: 0x621007
    ctx->pc = 0x2773ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x2773d0: 0x30420001
    ctx->pc = 0x2773d0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x2773d4: 0x10400005
    ctx->pc = 0x2773D4u;
    {
        const bool branch_taken_0x2773d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2773D8u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
        if (branch_taken_0x2773d4) {
            ctx->pc = 0x2773ECu;
            goto label_2773ec;
        }
    }
    ctx->pc = 0x2773DCu;
    // 0x2773dc: 0x94820cfa
    ctx->pc = 0x2773dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3322)));
    // 0x2773e0: 0x431025
    ctx->pc = 0x2773e0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2773e4: 0x1000000a
    ctx->pc = 0x2773E4u;
    {
        const bool branch_taken_0x2773e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2773E8u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 3322), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x2773e4) {
            ctx->pc = 0x277410u;
            goto label_277410;
        }
    }
    ctx->pc = 0x2773ECu;
label_2773ec:
    // 0x2773ec: 0x8ca4000c
    ctx->pc = 0x2773ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2773f0: 0x881018
    ctx->pc = 0x2773f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2773f4: 0x452021
    ctx->pc = 0x2773f4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2773f8: 0x84c30090
    ctx->pc = 0x2773f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 144)));
    // 0x2773fc: 0x2463ffff
    ctx->pc = 0x2773fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x277400: 0x671804
    ctx->pc = 0x277400u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x277404: 0x94820cf8
    ctx->pc = 0x277404u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3320)));
    // 0x277408: 0x431025
    ctx->pc = 0x277408u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27740c: 0xa4820cf8
    ctx->pc = 0x27740cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 3320), (uint16_t)GPR_U32(ctx, 2));
label_277410:
    // 0x277410: 0x84c30092
    ctx->pc = 0x277410u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 146)));
    // 0x277414: 0x18600015
    ctx->pc = 0x277414u;
    {
        const bool branch_taken_0x277414 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x277418u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
        if (branch_taken_0x277414) {
            ctx->pc = 0x27746Cu;
            goto label_27746c;
        }
    }
    ctx->pc = 0x27741Cu;
    // 0x27741c: 0x487818
    ctx->pc = 0x27741cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x277420: 0x1e52021
    ctx->pc = 0x277420u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 5)));
    // 0x277424: 0x94820cfc
    ctx->pc = 0x277424u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3324)));
    // 0x277428: 0x621007
    ctx->pc = 0x277428u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x27742c: 0x30420001
    ctx->pc = 0x27742cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 1));
    // 0x277430: 0x10400005
    ctx->pc = 0x277430u;
    {
        const bool branch_taken_0x277430 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x277434u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
        if (branch_taken_0x277430) {
            ctx->pc = 0x277448u;
            goto label_277448;
        }
    }
    ctx->pc = 0x277438u;
    // 0x277438: 0x94820cfe
    ctx->pc = 0x277438u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3326)));
    // 0x27743c: 0x431025
    ctx->pc = 0x27743cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x277440: 0x10000009
    ctx->pc = 0x277440u;
    {
        const bool branch_taken_0x277440 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x277444u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 3326), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x277440) {
            ctx->pc = 0x277468u;
            goto label_277468;
        }
    }
    ctx->pc = 0x277448u;
label_277448:
    // 0x277448: 0x8ca4000c
    ctx->pc = 0x277448u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x27744c: 0x881018
    ctx->pc = 0x27744cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x277450: 0x452021
    ctx->pc = 0x277450u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x277454: 0x84c30092
    ctx->pc = 0x277454u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 146)));
    // 0x277458: 0x671804
    ctx->pc = 0x277458u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x27745c: 0x94820cfc
    ctx->pc = 0x27745cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3324)));
    // 0x277460: 0x431025
    ctx->pc = 0x277460u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x277464: 0xa4820cfc
    ctx->pc = 0x277464u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 3324), (uint16_t)GPR_U32(ctx, 2));
label_277468:
    // 0x277468: 0x8ca2000c
    ctx->pc = 0x277468u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_27746c:
    // 0x27746c: 0x4b1818
    ctx->pc = 0x27746cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x277470: 0x711021
    ctx->pc = 0x277470u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x277474: 0x24a3182c
    ctx->pc = 0x277474u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 6188));
    // 0x277478: 0x621821
    ctx->pc = 0x277478u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27747c: 0x90620000
    ctx->pc = 0x27747cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x277480: 0x4a1025
    ctx->pc = 0x277480u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x277484: 0xa0620000
    ctx->pc = 0x277484u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x277488: 0x25290001
    ctx->pc = 0x277488u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 1));
label_27748c:
    // 0x27748c: 0x29220004
    ctx->pc = 0x27748cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 9), 4));
    // 0x277490: 0x5440ffbf
    ctx->pc = 0x277490u;
    {
        const bool branch_taken_0x277490 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x277490) {
            ctx->pc = 0x277494u;
            { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
            ctx->pc = 0x277390u;
            goto label_277390;
        }
    }
    ctx->pc = 0x277498u;
    // 0x277498: 0xdfbf0020
    ctx->pc = 0x277498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27749c: 0xdfb10010
    ctx->pc = 0x27749cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2774a0: 0xdfb00000
    ctx->pc = 0x2774a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2774a4: 0x3e00008
    ctx->pc = 0x2774A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2774A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x277390u: goto label_277390;
            case 0x2773B4u: goto label_2773b4;
            case 0x2773ECu: goto label_2773ec;
            case 0x277410u: goto label_277410;
            case 0x277448u: goto label_277448;
            case 0x277468u: goto label_277468;
            case 0x27746Cu: goto label_27746c;
            case 0x27748Cu: goto label_27748c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2774ACu;
}
