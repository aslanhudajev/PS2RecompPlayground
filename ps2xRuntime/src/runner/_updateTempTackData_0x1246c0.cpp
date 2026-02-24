#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _updateTempTackData
// Address: 0x1246c0 - 0x1247a0
void _updateTempTackData_0x1246c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1246c0u;

    // 0x1246c0: 0x3c020017
    ctx->pc = 0x1246c0u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
    // 0x1246c4: 0x24040003
    ctx->pc = 0x1246c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1246c8: 0x8c43197c
    ctx->pc = 0x1246c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 6524)));
    // 0x1246cc: 0x1064001d
    ctx->pc = 0x1246CCu;
    {
        const bool branch_taken_0x1246cc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x1246D0u;
        SET_GPR_S32(ctx, 5, ((uint32_t)23 << 16));
        if (branch_taken_0x1246cc) {
            ctx->pc = 0x124744u;
            goto label_124744;
        }
    }
    ctx->pc = 0x1246D4u;
    // 0x1246d4: 0x3c070017
    ctx->pc = 0x1246d4u;
    SET_GPR_S32(ctx, 7, ((uint32_t)23 << 16));
    // 0x1246d8: 0x8ca41978
    ctx->pc = 0x1246d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 6520)));
    // 0x1246dc: 0x8ce32170
    ctx->pc = 0x1246dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 7), 8560)));
    // 0x1246e0: 0x10830018
    ctx->pc = 0x1246E0u;
    {
        const bool branch_taken_0x1246e0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x1246E4u;
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1246e0) {
            ctx->pc = 0x124744u;
            goto label_124744;
        }
    }
    ctx->pc = 0x1246E8u;
    // 0x1246e8: 0x3c080017
    ctx->pc = 0x1246e8u;
    SET_GPR_S32(ctx, 8, ((uint32_t)23 << 16));
    // 0x1246ec: 0x8d02216c
    ctx->pc = 0x1246ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 8556)));
    // 0x1246f0: 0x10400007
    ctx->pc = 0x1246F0u;
    {
        const bool branch_taken_0x1246f0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1246F4u;
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1246f0) {
            ctx->pc = 0x124710u;
            goto label_124710;
        }
    }
    ctx->pc = 0x1246F8u;
    // 0x1246f8: 0x3c0a0017
    ctx->pc = 0x1246f8u;
    SET_GPR_S32(ctx, 10, ((uint32_t)23 << 16));
    // 0x1246fc: 0xad00216c
    ctx->pc = 0x1246fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8556), GPR_U32(ctx, 0));
    // 0x124700: 0x8d422130
    ctx->pc = 0x124700u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 10), 8496)));
    // 0x124704: 0x24420400
    ctx->pc = 0x124704u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1024));
    // 0x124708: 0x10000002
    ctx->pc = 0x124708u;
    {
        const bool branch_taken_0x124708 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x12470Cu;
        WRITE32(ADD32(GPR_U32(ctx, 10), 8496), GPR_U32(ctx, 2));
        if (branch_taken_0x124708) {
            ctx->pc = 0x124714u;
            goto label_124714;
        }
    }
    ctx->pc = 0x124710u;
label_124710:
    // 0x124710: 0x3c0a0017
    ctx->pc = 0x124710u;
    SET_GPR_S32(ctx, 10, ((uint32_t)23 << 16));
label_124714:
    // 0x124714: 0x83102a
    ctx->pc = 0x124714u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x124718: 0x10400006
    ctx->pc = 0x124718u;
    {
        const bool branch_taken_0x124718 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x12471Cu;
        SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
        if (branch_taken_0x124718) {
            ctx->pc = 0x124734u;
            goto label_124734;
        }
    }
    ctx->pc = 0x124720u;
    // 0x124720: 0x8c622138
    ctx->pc = 0x124720u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8504)));
    // 0x124724: 0x14400004
    ctx->pc = 0x124724u;
    {
        const bool branch_taken_0x124724 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x124728u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 6520)));
        if (branch_taken_0x124724) {
            ctx->pc = 0x124738u;
            goto label_124738;
        }
    }
    ctx->pc = 0x12472Cu;
    // 0x12472c: 0x24020001
    ctx->pc = 0x12472cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x124730: 0xacc2216c
    ctx->pc = 0x124730u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8556), GPR_U32(ctx, 2));
label_124734:
    // 0x124734: 0x8d221978
    ctx->pc = 0x124734u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 9), 6520)));
label_124738:
    // 0x124738: 0xac602138
    ctx->pc = 0x124738u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8504), GPR_U32(ctx, 0));
    // 0x12473c: 0x10000003
    ctx->pc = 0x12473Cu;
    {
        const bool branch_taken_0x12473c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x124740u;
        WRITE32(ADD32(GPR_U32(ctx, 7), 8560), GPR_U32(ctx, 2));
        if (branch_taken_0x12473c) {
            ctx->pc = 0x12474Cu;
            goto label_12474c;
        }
    }
    ctx->pc = 0x124744u;
label_124744:
    // 0x124744: 0x3c080017
    ctx->pc = 0x124744u;
    SET_GPR_S32(ctx, 8, ((uint32_t)23 << 16));
    // 0x124748: 0x3c0a0017
    ctx->pc = 0x124748u;
    SET_GPR_S32(ctx, 10, ((uint32_t)23 << 16));
label_12474c:
    // 0x12474c: 0x8d432130
    ctx->pc = 0x12474cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 10), 8496)));
    // 0x124750: 0x3c060017
    ctx->pc = 0x124750u;
    SET_GPR_S32(ctx, 6, ((uint32_t)23 << 16));
    // 0x124754: 0x8ca41978
    ctx->pc = 0x124754u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 6520)));
    // 0x124758: 0x8d02216c
    ctx->pc = 0x124758u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 8556)));
    // 0x12475c: 0x642821
    ctx->pc = 0x12475cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x124760: 0x10400008
    ctx->pc = 0x124760u;
    {
        const bool branch_taken_0x124760 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x124764u;
        WRITE32(ADD32(GPR_U32(ctx, 6), 6712), GPR_U32(ctx, 5));
        if (branch_taken_0x124760) {
            ctx->pc = 0x124784u;
            goto label_124784;
        }
    }
    ctx->pc = 0x124768u;
    // 0x124768: 0x3c030017
    ctx->pc = 0x124768u;
    SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
    // 0x12476c: 0x8c622170
    ctx->pc = 0x12476cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 8560)));
    // 0x124770: 0x44102a
    ctx->pc = 0x124770u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x124774: 0x54400004
    ctx->pc = 0x124774u;
    {
        const bool branch_taken_0x124774 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x124774) {
            ctx->pc = 0x124778u;
            SET_GPR_S32(ctx, 5, ((uint32_t)23 << 16));
            ctx->pc = 0x124788u;
            goto label_124788;
        }
    }
    ctx->pc = 0x12477Cu;
    // 0x12477c: 0x24a20400
    ctx->pc = 0x12477cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 1024));
    // 0x124780: 0xacc21a38
    ctx->pc = 0x124780u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6712), GPR_U32(ctx, 2));
label_124784:
    // 0x124784: 0x3c050017
    ctx->pc = 0x124784u;
    SET_GPR_S32(ctx, 5, ((uint32_t)23 << 16));
label_124788:
    // 0x124788: 0x8cc41a38
    ctx->pc = 0x124788u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 6712)));
    // 0x12478c: 0x8ca22134
    ctx->pc = 0x12478cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 8500)));
    // 0x124790: 0x44182a
    ctx->pc = 0x124790u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x124794: 0x83100b
    ctx->pc = 0x124794u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x124798: 0x3e00008
    ctx->pc = 0x124798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12479Cu;
        WRITE32(ADD32(GPR_U32(ctx, 5), 8500), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x124710u: goto label_124710;
            case 0x124714u: goto label_124714;
            case 0x124734u: goto label_124734;
            case 0x124738u: goto label_124738;
            case 0x124744u: goto label_124744;
            case 0x12474Cu: goto label_12474c;
            case 0x124784u: goto label_124784;
            case 0x124788u: goto label_124788;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1247A0u;
}
