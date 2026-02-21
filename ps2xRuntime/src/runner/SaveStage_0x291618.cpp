#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SaveStage
// Address: 0x291618 - 0x291800
void SaveStage_0x291618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x291618u;

    // 0x291618: 0x27bdffe0
    ctx->pc = 0x291618u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29161c: 0xffbf0010
    ctx->pc = 0x29161cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x291620: 0xffb00000
    ctx->pc = 0x291620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x291624: 0x80802d
    ctx->pc = 0x291624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291628: 0x3c020035
    ctx->pc = 0x291628u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x29162c: 0xac45f840
    ctx->pc = 0x29162cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965312), GPR_U32(ctx, 5));
    // 0x291630: 0x3c020035
    ctx->pc = 0x291630u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x291634: 0x2443f848
    ctx->pc = 0x291634u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294965320));
    // 0x291638: 0xc4c00000
    ctx->pc = 0x291638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29163c: 0xe440f848
    ctx->pc = 0x29163cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965320), bits); }
    // 0x291640: 0xc4c00004
    ctx->pc = 0x291640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291644: 0xe4600004
    ctx->pc = 0x291644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x291648: 0xc4c00008
    ctx->pc = 0x291648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29164c: 0xe4600008
    ctx->pc = 0x29164cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x291650: 0x3c030035
    ctx->pc = 0x291650u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x291654: 0x3c020032
    ctx->pc = 0x291654u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x291658: 0x8c4207b8
    ctx->pc = 0x291658u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 1976)));
    // 0x29165c: 0xc0a4490
    ctx->pc = 0x29165Cu;
    SET_GPR_U32(ctx, 31, 0x291664u);
    ctx->pc = 0x291660u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965300), GPR_U32(ctx, 2));
    ctx->pc = 0x291240u;
    {
        const uint32_t __entryPc = ctx->pc;
        SaveAllRecords_0x291240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291664u; }
    }
    if (ctx->pc != 0x291664u) { return; }
    ctx->pc = 0x291664u;
    // 0x291664: 0x3c020034
    ctx->pc = 0x291664u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x291668: 0x8c44cd94
    ctx->pc = 0x291668u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294954388)));
    // 0x29166c: 0x3c020034
    ctx->pc = 0x29166cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x291670: 0x8c43cd98
    ctx->pc = 0x291670u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294954392)));
    // 0x291674: 0x4600005
    ctx->pc = 0x291674u;
    {
        const bool branch_taken_0x291674 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x291678u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x291674) {
            ctx->pc = 0x29168Cu;
            goto label_29168c;
        }
    }
    ctx->pc = 0x29167Cu;
    // 0x29167c: 0x28c30401
    ctx->pc = 0x29167cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 1025));
    // 0x291680: 0x24020400
    ctx->pc = 0x291680u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1024));
    // 0x291684: 0x10000002
    ctx->pc = 0x291684u;
    {
        const bool branch_taken_0x291684 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x291688u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 2));
        if (branch_taken_0x291684) {
            ctx->pc = 0x291690u;
            goto label_291690;
        }
    }
    ctx->pc = 0x29168Cu;
label_29168c:
    // 0x29168c: 0x302d
    ctx->pc = 0x29168cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_291690:
    // 0x291690: 0x18c00021
    ctx->pc = 0x291690u;
    {
        const bool branch_taken_0x291690 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x291694u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x291690) {
            ctx->pc = 0x291718u;
            goto label_291718;
        }
    }
    ctx->pc = 0x291698u;
    // 0x291698: 0x3c020035
    ctx->pc = 0x291698u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x29169c: 0x2447fc38
    ctx->pc = 0x29169cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 4294966328));
    // 0x2916a0: 0x2408ffff
    ctx->pc = 0x2916a0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2916a4: 0x240a0002
    ctx->pc = 0x2916a4u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2916a8: 0x3c020035
    ctx->pc = 0x2916a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x2916ac: 0x24490438
    ctx->pc = 0x2916acu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 1080));
label_2916b0:
    // 0x2916b0: 0x10b0000a
    ctx->pc = 0x2916B0u;
    {
        const bool branch_taken_0x2916b0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 16));
        ctx->pc = 0x2916B4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x2916b0) {
            ctx->pc = 0x2916DCu;
            goto label_2916dc;
        }
    }
    ctx->pc = 0x2916B8u;
    // 0x2916b8: 0x8c820000
    ctx->pc = 0x2916b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2916bc: 0x50400007
    ctx->pc = 0x2916BCu;
    {
        const bool branch_taken_0x2916bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2916bc) {
            ctx->pc = 0x2916C0u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x2916DCu;
            goto label_2916dc;
        }
    }
    ctx->pc = 0x2916C4u;
    // 0x2916c4: 0x8c420000
    ctx->pc = 0x2916c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2916c8: 0x144a0007
    ctx->pc = 0x2916C8u;
    {
        const bool branch_taken_0x2916c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 10));
        ctx->pc = 0x2916CCu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x2916c8) {
            ctx->pc = 0x2916E8u;
            goto label_2916e8;
        }
    }
    ctx->pc = 0x2916D0u;
    // 0x2916d0: 0x808200dc
    ctx->pc = 0x2916d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x2916d4: 0x18400004
    ctx->pc = 0x2916D4u;
    {
        const bool branch_taken_0x2916d4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2916D8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x2916d4) {
            ctx->pc = 0x2916E8u;
            goto label_2916e8;
        }
    }
    ctx->pc = 0x2916DCu;
label_2916dc:
    // 0x2916dc: 0x471021
    ctx->pc = 0x2916dcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2916e0: 0x10000009
    ctx->pc = 0x2916E0u;
    {
        const bool branch_taken_0x2916e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2916E4u;
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 8));
        if (branch_taken_0x2916e0) {
            ctx->pc = 0x291708u;
            goto label_291708;
        }
    }
    ctx->pc = 0x2916E8u;
label_2916e8:
    // 0x2916e8: 0x471021
    ctx->pc = 0x2916e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2916ec: 0x948300d8
    ctx->pc = 0x2916ecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x2916f0: 0xa4430000
    ctx->pc = 0x2916f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2916f4: 0x51880
    ctx->pc = 0x2916f4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 2));
    // 0x2916f8: 0x691821
    ctx->pc = 0x2916f8u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2916fc: 0x8c820000
    ctx->pc = 0x2916fcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x291700: 0x8c420000
    ctx->pc = 0x291700u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291704: 0xac620000
    ctx->pc = 0x291704u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_291708:
    // 0x291708: 0x24a50001
    ctx->pc = 0x291708u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x29170c: 0xa6102a
    ctx->pc = 0x29170cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x291710: 0x1440ffe7
    ctx->pc = 0x291710u;
    {
        const bool branch_taken_0x291710 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x291714u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 272));
        if (branch_taken_0x291710) {
            ctx->pc = 0x2916B0u;
            goto label_2916b0;
        }
    }
    ctx->pc = 0x291718u;
label_291718:
    // 0x291718: 0x28a20400
    ctx->pc = 0x291718u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 1024));
    // 0x29171c: 0x10400011
    ctx->pc = 0x29171Cu;
    {
        const bool branch_taken_0x29171c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x291720u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x29171c) {
            ctx->pc = 0x291764u;
            goto label_291764;
        }
    }
    ctx->pc = 0x291724u;
    // 0x291724: 0x2448fc38
    ctx->pc = 0x291724u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294966328));
    // 0x291728: 0x2407ffff
    ctx->pc = 0x291728u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29172c: 0x3c020035
    ctx->pc = 0x29172cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x291730: 0x24440438
    ctx->pc = 0x291730u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 1080));
    // 0x291734: 0x24030001
    ctx->pc = 0x291734u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x291738: 0x51040
    ctx->pc = 0x291738u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
    // 0x29173c: 0x0
    ctx->pc = 0x29173cu;
    // NOP
label_291740:
    // 0x291740: 0x481021
    ctx->pc = 0x291740u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x291744: 0xa4470000
    ctx->pc = 0x291744u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x291748: 0x51080
    ctx->pc = 0x291748u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x29174c: 0x441021
    ctx->pc = 0x29174cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x291750: 0xac430000
    ctx->pc = 0x291750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x291754: 0x24a50001
    ctx->pc = 0x291754u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x291758: 0x28a20400
    ctx->pc = 0x291758u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 1024));
    // 0x29175c: 0x1440fff8
    ctx->pc = 0x29175Cu;
    {
        const bool branch_taken_0x29175c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x291760u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x29175c) {
            ctx->pc = 0x291740u;
            goto label_291740;
        }
    }
    ctx->pc = 0x291764u;
label_291764:
    // 0x291764: 0x3c020035
    ctx->pc = 0x291764u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x291768: 0xac461568
    ctx->pc = 0x291768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5480), GPR_U32(ctx, 6));
    // 0x29176c: 0x3c020034
    ctx->pc = 0x29176cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x291770: 0x8c43d1b8
    ctx->pc = 0x291770u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294955448)));
    // 0x291774: 0x4600005
    ctx->pc = 0x291774u;
    {
        const bool branch_taken_0x291774 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x291778u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x291774) {
            ctx->pc = 0x29178Cu;
            goto label_29178c;
        }
    }
    ctx->pc = 0x29177Cu;
    // 0x29177c: 0x28c30097
    ctx->pc = 0x29177cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 6), 151));
    // 0x291780: 0x24020096
    ctx->pc = 0x291780u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 150));
    // 0x291784: 0x10000002
    ctx->pc = 0x291784u;
    {
        const bool branch_taken_0x291784 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x291788u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 2));
        if (branch_taken_0x291784) {
            ctx->pc = 0x291790u;
            goto label_291790;
        }
    }
    ctx->pc = 0x29178Cu;
label_29178c:
    // 0x29178c: 0x302d
    ctx->pc = 0x29178cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_291790:
    // 0x291790: 0x18c00015
    ctx->pc = 0x291790u;
    {
        const bool branch_taken_0x291790 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x291794u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x291790) {
            ctx->pc = 0x2917E8u;
            goto label_2917e8;
        }
    }
    ctx->pc = 0x291798u;
    // 0x291798: 0x3c020035
    ctx->pc = 0x291798u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x29179c: 0x24491438
    ctx->pc = 0x29179cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 5176));
    // 0x2917a0: 0x3c020034
    ctx->pc = 0x2917a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2917a4: 0x2448cf60
    ctx->pc = 0x2917a4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 4294954848));
    // 0x2917a8: 0x3c020035
    ctx->pc = 0x2917a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x2917ac: 0x244714d0
    ctx->pc = 0x2917acu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 5328));
    // 0x2917b0: 0xa91821
    ctx->pc = 0x2917b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x2917b4: 0x0
    ctx->pc = 0x2917b4u;
    // NOP
label_2917b8:
    // 0x2917b8: 0x51080
    ctx->pc = 0x2917b8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x2917bc: 0x481021
    ctx->pc = 0x2917bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2917c0: 0x8c440000
    ctx->pc = 0x2917c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2917c4: 0x90820016
    ctx->pc = 0x2917c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x2917c8: 0xa0620000
    ctx->pc = 0x2917c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2917cc: 0xa71821
    ctx->pc = 0x2917ccu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2917d0: 0x90820017
    ctx->pc = 0x2917d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 23)));
    // 0x2917d4: 0xa0620000
    ctx->pc = 0x2917d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2917d8: 0x24a50001
    ctx->pc = 0x2917d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2917dc: 0xa6102a
    ctx->pc = 0x2917dcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x2917e0: 0x1440fff5
    ctx->pc = 0x2917E0u;
    {
        const bool branch_taken_0x2917e0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2917E4u;
        SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
        if (branch_taken_0x2917e0) {
            ctx->pc = 0x2917B8u;
            goto label_2917b8;
        }
    }
    ctx->pc = 0x2917E8u;
label_2917e8:
    // 0x2917e8: 0x3c020035
    ctx->pc = 0x2917e8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x2917ec: 0xac46156c
    ctx->pc = 0x2917ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5484), GPR_U32(ctx, 6));
    // 0x2917f0: 0xdfbf0010
    ctx->pc = 0x2917f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2917f4: 0xdfb00000
    ctx->pc = 0x2917f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2917f8: 0x3e00008
    ctx->pc = 0x2917F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2917FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29168Cu: goto label_29168c;
            case 0x291690u: goto label_291690;
            case 0x2916B0u: goto label_2916b0;
            case 0x2916DCu: goto label_2916dc;
            case 0x2916E8u: goto label_2916e8;
            case 0x291708u: goto label_291708;
            case 0x291718u: goto label_291718;
            case 0x291740u: goto label_291740;
            case 0x291764u: goto label_291764;
            case 0x29178Cu: goto label_29178c;
            case 0x291790u: goto label_291790;
            case 0x2917B8u: goto label_2917b8;
            case 0x2917E8u: goto label_2917e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x291800u;
}
