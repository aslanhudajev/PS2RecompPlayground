#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ShowMilestones
// Address: 0x250260 - 0x250370
void ShowMilestones_0x250260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x250260u;

    // 0x250260: 0x27bdff90
    ctx->pc = 0x250260u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x250264: 0xffbf0060
    ctx->pc = 0x250264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x250268: 0xffb50050
    ctx->pc = 0x250268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x25026c: 0xffb40040
    ctx->pc = 0x25026cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x250270: 0xffb30030
    ctx->pc = 0x250270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x250274: 0xffb20020
    ctx->pc = 0x250274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x250278: 0xffb10010
    ctx->pc = 0x250278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x25027c: 0xffb00000
    ctx->pc = 0x25027cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x250280: 0x3c020034
    ctx->pc = 0x250280u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x250284: 0x4810003
    ctx->pc = 0x250284u;
    {
        const bool branch_taken_0x250284 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x250288u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294955800)));
        if (branch_taken_0x250284) {
            ctx->pc = 0x250294u;
            goto label_250294;
        }
    }
    ctx->pc = 0x25028Cu;
    // 0x25028c: 0x1000002f
    ctx->pc = 0x25028Cu;
    {
        const bool branch_taken_0x25028c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x250290u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25028c) {
            ctx->pc = 0x25034Cu;
            goto label_25034c;
        }
    }
    ctx->pc = 0x250294u;
label_250294:
    // 0x250294: 0x1083002b
    ctx->pc = 0x250294u;
    {
        const bool branch_taken_0x250294 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x250298u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294955800), GPR_U32(ctx, 4));
        if (branch_taken_0x250294) {
            ctx->pc = 0x250344u;
            goto label_250344;
        }
    }
    ctx->pc = 0x25029Cu;
    // 0x25029c: 0x3c020034
    ctx->pc = 0x25029cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2502a0: 0x8c42c380
    ctx->pc = 0x2502a0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294951808)));
    // 0x2502a4: 0x18400027
    ctx->pc = 0x2502A4u;
    {
        const bool branch_taken_0x2502a4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2502A8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2502a4) {
            ctx->pc = 0x250344u;
            goto label_250344;
        }
    }
    ctx->pc = 0x2502ACu;
    // 0x2502ac: 0x24150070
    ctx->pc = 0x2502acu;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 112));
    // 0x2502b0: 0x3c020034
    ctx->pc = 0x2502b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2502b4: 0x24548b80
    ctx->pc = 0x2502b4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294937472));
    // 0x2502b8: 0x3c130034
    ctx->pc = 0x2502b8u;
    SET_GPR_U32(ctx, 19, ((uint32_t)52 << 16));
    // 0x2502bc: 0x3c120034
    ctx->pc = 0x2502bcu;
    SET_GPR_U32(ctx, 18, ((uint32_t)52 << 16));
    // 0x2502c0: 0x2351018
    ctx->pc = 0x2502c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2502c4: 0x0
    ctx->pc = 0x2502c4u;
    // NOP
label_2502c8:
    // 0x2502c8: 0x548021
    ctx->pc = 0x2502c8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2502cc: 0x8e62d318
    ctx->pc = 0x2502ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294955800)));
    // 0x2502d0: 0x50400012
    ctx->pc = 0x2502D0u;
    {
        const bool branch_taken_0x2502d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2502d0) {
            ctx->pc = 0x2502D4u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->pc = 0x25031Cu;
            goto label_25031c;
        }
    }
    ctx->pc = 0x2502D8u;
    // 0x2502d8: 0x8e020060
    ctx->pc = 0x2502d8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2502dc: 0x5440000a
    ctx->pc = 0x2502DCu;
    {
        const bool branch_taken_0x2502dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2502dc) {
            ctx->pc = 0x2502E0u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->pc = 0x250308u;
            goto label_250308;
        }
    }
    ctx->pc = 0x2502E4u;
    // 0x2502e4: 0x24040001
    ctx->pc = 0x2502e4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2502e8: 0x24050001
    ctx->pc = 0x2502e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2502ec: 0x24060001
    ctx->pc = 0x2502ecu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2502f0: 0x382d
    ctx->pc = 0x2502f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2502f4: 0x402d
    ctx->pc = 0x2502f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2502f8: 0xc093fee
    ctx->pc = 0x2502F8u;
    SET_GPR_U32(ctx, 31, 0x250300u);
    ctx->pc = 0x2502FCu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24FFB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        add_arrow_0x24ffb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250300u; }
    }
    if (ctx->pc != 0x250300u) { return; }
    ctx->pc = 0x250300u;
    // 0x250300: 0xae020060
    ctx->pc = 0x250300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x250304: 0x8e040060
    ctx->pc = 0x250304u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_250308:
    // 0x250308: 0x24050002
    ctx->pc = 0x250308u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x25030c: 0xc0b41e4
    ctx->pc = 0x25030Cu;
    SET_GPR_U32(ctx, 31, 0x250314u);
    ctx->pc = 0x250310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x250314u; }
    }
    if (ctx->pc != 0x250314u) { return; }
    ctx->pc = 0x250314u;
    // 0x250314: 0x10000007
    ctx->pc = 0x250314u;
    {
        const bool branch_taken_0x250314 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x250318u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x250314) {
            ctx->pc = 0x250334u;
            goto label_250334;
        }
    }
    ctx->pc = 0x25031Cu;
label_25031c:
    // 0x25031c: 0x50800005
    ctx->pc = 0x25031Cu;
    {
        const bool branch_taken_0x25031c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x25031c) {
            ctx->pc = 0x250320u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x250334u;
            goto label_250334;
        }
    }
    ctx->pc = 0x250324u;
    // 0x250324: 0xc0b3f1a
    ctx->pc = 0x250324u;
    SET_GPR_U32(ctx, 31, 0x25032Cu);
    ctx->pc = 0x250328u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25032Cu; }
    }
    if (ctx->pc != 0x25032Cu) { return; }
    ctx->pc = 0x25032Cu;
    // 0x25032c: 0xae000060
    ctx->pc = 0x25032cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x250330: 0x26310001
    ctx->pc = 0x250330u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_250334:
    // 0x250334: 0x8e42c380
    ctx->pc = 0x250334u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 4294951808)));
    // 0x250338: 0x222102a
    ctx->pc = 0x250338u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x25033c: 0x1440ffe2
    ctx->pc = 0x25033Cu;
    {
        const bool branch_taken_0x25033c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x250340u;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x25033c) {
            ctx->pc = 0x2502C8u;
            goto label_2502c8;
        }
    }
    ctx->pc = 0x250344u;
label_250344:
    // 0x250344: 0x3c020034
    ctx->pc = 0x250344u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x250348: 0x8c42d318
    ctx->pc = 0x250348u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955800)));
label_25034c:
    // 0x25034c: 0xdfbf0060
    ctx->pc = 0x25034cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x250350: 0xdfb50050
    ctx->pc = 0x250350u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x250354: 0xdfb40040
    ctx->pc = 0x250354u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x250358: 0xdfb30030
    ctx->pc = 0x250358u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25035c: 0xdfb20020
    ctx->pc = 0x25035cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x250360: 0xdfb10010
    ctx->pc = 0x250360u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250364: 0xdfb00000
    ctx->pc = 0x250364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250368: 0x3e00008
    ctx->pc = 0x250368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25036Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x250294u: goto label_250294;
            case 0x2502C8u: goto label_2502c8;
            case 0x250308u: goto label_250308;
            case 0x25031Cu: goto label_25031c;
            case 0x250334u: goto label_250334;
            case 0x250344u: goto label_250344;
            case 0x25034Cu: goto label_25034c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x250370u;
}
