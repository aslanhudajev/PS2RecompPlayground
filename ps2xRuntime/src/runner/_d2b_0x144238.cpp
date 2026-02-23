#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _d2b
// Address: 0x144238 - 0x1443b4
void _d2b_0x144238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_d2b");


    ctx->pc = 0x144238u;

    // 0x144238: 0x27bdff80
    ctx->pc = 0x144238u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x14423c: 0xffb00010
    ctx->pc = 0x14423cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x144240: 0xa0802d
    ctx->pc = 0x144240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144244: 0xffb50060
    ctx->pc = 0x144244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x144248: 0xffb40050
    ctx->pc = 0x144248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x14424c: 0xe0a82d
    ctx->pc = 0x14424cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144250: 0xffb30040
    ctx->pc = 0x144250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x144254: 0xc0a02d
    ctx->pc = 0x144254u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144258: 0xffb20030
    ctx->pc = 0x144258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x14425c: 0xffb10020
    ctx->pc = 0x14425cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x144260: 0xffbf0070
    ctx->pc = 0x144260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x144264: 0xc050d32
    ctx->pc = 0x144264u;
    SET_GPR_U32(ctx, 31, 0x14426Cu);
    ctx->pc = 0x144268u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1434C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x1434c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14426Cu; }
        else if (ctx->pc != 0x14426Cu) { ctx->pc = 0x14426Cu; }
    }
    if (ctx->pc != 0x14426Cu) { return; }
    ctx->pc = 0x14426Cu;
    // 0x14426c: 0x40882d
    ctx->pc = 0x14426cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144270: 0x10283f
    ctx->pc = 0x144270u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x144274: 0x3c027fff
    ctx->pc = 0x144274u;
    SET_GPR_U32(ctx, 2, ((uint32_t)32767 << 16));
    // 0x144278: 0x3c03000f
    ctx->pc = 0x144278u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15 << 16));
    // 0x14427c: 0x3442ffff
    ctx->pc = 0x14427cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65535));
    // 0x144280: 0x3c04ffff
    ctx->pc = 0x144280u;
    SET_GPR_U32(ctx, 4, ((uint32_t)65535 << 16));
    // 0x144284: 0x4203e
    ctx->pc = 0x144284u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x144288: 0xa21024
    ctx->pc = 0x144288u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14428c: 0x2048024
    ctx->pc = 0x14428cu;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x144290: 0x2103c
    ctx->pc = 0x144290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x144294: 0x3463ffff
    ctx->pc = 0x144294u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x144298: 0x2028025
    ctx->pc = 0x144298u;
    SET_GPR_U32(ctx, 16, OR32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x14429c: 0xa32824
    ctx->pc = 0x14429cu;
    SET_GPR_U32(ctx, 5, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1442a0: 0x26330014
    ctx->pc = 0x1442a0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 17), 20));
    // 0x1442a4: 0x10953e
    ctx->pc = 0x1442a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) >> (32 + 20));
    // 0x1442a8: 0x12400004
    ctx->pc = 0x1442A8u;
    {
        const bool branch_taken_0x1442a8 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x1442ACu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        if (branch_taken_0x1442a8) {
            ctx->pc = 0x1442BCu;
            goto label_1442bc;
        }
    }
    ctx->pc = 0x1442B0u;
    // 0x1442b0: 0x3c020010
    ctx->pc = 0x1442b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16 << 16));
    // 0x1442b4: 0xa21025
    ctx->pc = 0x1442b4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1442b8: 0xafa20004
    ctx->pc = 0x1442b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_1442bc:
    // 0x1442bc: 0x10103c
    ctx->pc = 0x1442bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1442c0: 0x2103f
    ctx->pc = 0x1442c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1442c4: 0x10400019
    ctx->pc = 0x1442C4u;
    {
        const bool branch_taken_0x1442c4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1442C8u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x1442c4) {
            ctx->pc = 0x14432Cu;
            goto label_14432c;
        }
    }
    ctx->pc = 0x1442CCu;
    // 0x1442cc: 0xc050e22
    ctx->pc = 0x1442CCu;
    SET_GPR_U32(ctx, 31, 0x1442D4u);
    ctx->pc = 0x1442D0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x143888u;
    {
        const uint32_t __entryPc = ctx->pc;
        _lo0bits_0x143888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1442D4u; }
        else if (ctx->pc != 0x1442D4u) { ctx->pc = 0x1442D4u; }
    }
    if (ctx->pc != 0x1442D4u) { return; }
    ctx->pc = 0x1442D4u;
    // 0x1442d4: 0x40282d
    ctx->pc = 0x1442d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1442d8: 0x10a0000a
    ctx->pc = 0x1442D8u;
    {
        const bool branch_taken_0x1442d8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x1442DCu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
        if (branch_taken_0x1442d8) {
            ctx->pc = 0x144304u;
            goto label_144304;
        }
    }
    ctx->pc = 0x1442E0u;
    // 0x1442e0: 0x52023
    ctx->pc = 0x1442e0u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x1442e4: 0x8fa30000
    ctx->pc = 0x1442e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1442e8: 0x821004
    ctx->pc = 0x1442e8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x1442ec: 0x621825
    ctx->pc = 0x1442ecu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1442f0: 0xae230014
    ctx->pc = 0x1442f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x1442f4: 0x8fa20004
    ctx->pc = 0x1442f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1442f8: 0xa21006
    ctx->pc = 0x1442f8u;
    SET_GPR_U32(ctx, 2, SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x1442fc: 0x10000003
    ctx->pc = 0x1442FCu;
    {
        const bool branch_taken_0x1442fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x144300u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x1442fc) {
            ctx->pc = 0x14430Cu;
            goto label_14430c;
        }
    }
    ctx->pc = 0x144304u;
label_144304:
    // 0x144304: 0x8fa20000
    ctx->pc = 0x144304u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144308: 0xae220014
    ctx->pc = 0x144308u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_14430c:
    // 0x14430c: 0x8fa20004
    ctx->pc = 0x14430cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x144310: 0x24030001
    ctx->pc = 0x144310u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x144314: 0x24040002
    ctx->pc = 0x144314u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x144318: 0x82180b
    ctx->pc = 0x144318u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
    // 0x14431c: 0xae620004
    ctx->pc = 0x14431cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x144320: 0x60802d
    ctx->pc = 0x144320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144324: 0x10000009
    ctx->pc = 0x144324u;
    {
        const bool branch_taken_0x144324 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x144328u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        if (branch_taken_0x144324) {
            ctx->pc = 0x14434Cu;
            goto label_14434c;
        }
    }
    ctx->pc = 0x14432Cu;
label_14432c:
    // 0x14432c: 0x37a40004
    ctx->pc = 0x14432cu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 29), 4));
    // 0x144330: 0xc050e22
    ctx->pc = 0x144330u;
    SET_GPR_U32(ctx, 31, 0x144338u);
    ctx->pc = 0x144334u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x143888u;
    {
        const uint32_t __entryPc = ctx->pc;
        _lo0bits_0x143888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144338u; }
        else if (ctx->pc != 0x144338u) { ctx->pc = 0x144338u; }
    }
    if (ctx->pc != 0x144338u) { return; }
    ctx->pc = 0x144338u;
    // 0x144338: 0x8fa40004
    ctx->pc = 0x144338u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14433c: 0x24030001
    ctx->pc = 0x14433cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x144340: 0xae230010
    ctx->pc = 0x144340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x144344: 0x24450020
    ctx->pc = 0x144344u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 32));
    // 0x144348: 0xae240014
    ctx->pc = 0x144348u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
label_14434c:
    // 0x14434c: 0x12400006
    ctx->pc = 0x14434Cu;
    {
        const bool branch_taken_0x14434c = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        ctx->pc = 0x144350u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 4294966221));
        if (branch_taken_0x14434c) {
            ctx->pc = 0x144368u;
            goto label_144368;
        }
    }
    ctx->pc = 0x144354u;
    // 0x144354: 0x24030035
    ctx->pc = 0x144354u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 53));
    // 0x144358: 0x2421021
    ctx->pc = 0x144358u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x14435c: 0x651823
    ctx->pc = 0x14435cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x144360: 0x10000009
    ctx->pc = 0x144360u;
    {
        const bool branch_taken_0x144360 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x144364u;
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x144360) {
            ctx->pc = 0x144388u;
            goto label_144388;
        }
    }
    ctx->pc = 0x144368u;
label_144368:
    // 0x144368: 0x24a3fbce
    ctx->pc = 0x144368u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 4294966222));
    // 0x14436c: 0x101080
    ctx->pc = 0x14436cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x144370: 0xae830000
    ctx->pc = 0x144370u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x144374: 0x531021
    ctx->pc = 0x144374u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x144378: 0xc050e00
    ctx->pc = 0x144378u;
    SET_GPR_U32(ctx, 31, 0x144380u);
    ctx->pc = 0x14437Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    ctx->pc = 0x143800u;
    {
        const uint32_t __entryPc = ctx->pc;
        _hi0bits_0x143800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x144380u; }
        else if (ctx->pc != 0x144380u) { ctx->pc = 0x144380u; }
    }
    if (ctx->pc != 0x144380u) { return; }
    ctx->pc = 0x144380u;
    // 0x144380: 0x101940
    ctx->pc = 0x144380u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 5));
    // 0x144384: 0x621823
    ctx->pc = 0x144384u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_144388:
    // 0x144388: 0xaea30000
    ctx->pc = 0x144388u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x14438c: 0x220102d
    ctx->pc = 0x14438cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144390: 0xdfbf0070
    ctx->pc = 0x144390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x144394: 0xdfb50060
    ctx->pc = 0x144394u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x144398: 0xdfb40050
    ctx->pc = 0x144398u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14439c: 0xdfb30040
    ctx->pc = 0x14439cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1443a0: 0xdfb20030
    ctx->pc = 0x1443a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1443a4: 0xdfb10020
    ctx->pc = 0x1443a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1443a8: 0xdfb00010
    ctx->pc = 0x1443a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1443ac: 0x3e00008
    ctx->pc = 0x1443ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1443B0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1442BCu: goto label_1442bc;
            case 0x144304u: goto label_144304;
            case 0x14430Cu: goto label_14430c;
            case 0x14432Cu: goto label_14432c;
            case 0x14434Cu: goto label_14434c;
            case 0x144368u: goto label_144368;
            case 0x144388u: goto label_144388;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1443B4u;
}
