#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfadxt_SearchAlign
// Address: 0x190310 - 0x19042c
void sfadxt_SearchAlign_0x190310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfadxt_SearchAlign");


    ctx->pc = 0x190310u;

    // 0x190310: 0x27bdff50
    ctx->pc = 0x190310u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x190314: 0xffb60070
    ctx->pc = 0x190314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x190318: 0xa0b02d
    ctx->pc = 0x190318u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19031c: 0xffb10020
    ctx->pc = 0x19031cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x190320: 0x2c0882d
    ctx->pc = 0x190320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190324: 0xffbe0090
    ctx->pc = 0x190324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x190328: 0xffb50060
    ctx->pc = 0x190328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x19032c: 0x26230024
    ctx->pc = 0x19032cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 36));
    // 0x190330: 0xffb40050
    ctx->pc = 0x190330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x190334: 0x80f02d
    ctx->pc = 0x190334u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190338: 0xffb30040
    ctx->pc = 0x190338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x19033c: 0xa02d
    ctx->pc = 0x19033cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190340: 0xffb20030
    ctx->pc = 0x190340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x190344: 0x2c69821
    ctx->pc = 0x190344u;
    SET_GPR_U32(ctx, 19, ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x190348: 0xffbf00a0
    ctx->pc = 0x190348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x19034c: 0x902d
    ctx->pc = 0x19034cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190350: 0xffb70080
    ctx->pc = 0x190350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x190354: 0xa82d
    ctx->pc = 0x190354u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190358: 0x223102b
    ctx->pc = 0x190358u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x19035c: 0x1040001c
    ctx->pc = 0x19035Cu;
    {
        const bool branch_taken_0x19035c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x190360u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        if (branch_taken_0x19035c) {
            ctx->pc = 0x1903D0u;
            goto label_1903d0;
        }
    }
    ctx->pc = 0x190364u;
    // 0x190364: 0x60b82d
    ctx->pc = 0x190364u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190368: 0xa02d
    ctx->pc = 0x190368u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19036c: 0x0
    ctx->pc = 0x19036cu;
    // NOP
label_190370:
    // 0x190370: 0x220802d
    ctx->pc = 0x190370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_190374:
    // 0x190374: 0x213102b
    ctx->pc = 0x190374u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x190378: 0x1040000f
    ctx->pc = 0x190378u;
    {
        const bool branch_taken_0x190378 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x190378) {
            ctx->pc = 0x1903B8u;
            goto label_1903b8;
        }
    }
    ctx->pc = 0x190380u;
    // 0x190380: 0x82020000
    ctx->pc = 0x190380u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x190384: 0x443fffb
    ctx->pc = 0x190384u;
    {
        const bool branch_taken_0x190384 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x190384) {
            ctx->pc = 0x190388u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 18));
            ctx->pc = 0x190374u;
            goto label_190374;
        }
    }
    ctx->pc = 0x19038Cu;
    // 0x19038c: 0x24140001
    ctx->pc = 0x19038cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x190390: 0x200202d
    ctx->pc = 0x190390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190394: 0x24050012
    ctx->pc = 0x190394u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 18));
    // 0x190398: 0xc05ca7e
    ctx->pc = 0x190398u;
    SET_GPR_U32(ctx, 31, 0x1903A0u);
    ctx->pc = 0x19039Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1729F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_IsEndcode_0x1729f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1903A0u; }
        else if (ctx->pc != 0x1903A0u) { ctx->pc = 0x1903A0u; }
    }
    if (ctx->pc != 0x1903A0u) { return; }
    ctx->pc = 0x1903A0u;
    // 0x1903a0: 0x10400005
    ctx->pc = 0x1903A0u;
    {
        const bool branch_taken_0x1903a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1903A4u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        if (branch_taken_0x1903a0) {
            ctx->pc = 0x1903B8u;
            goto label_1903b8;
        }
    }
    ctx->pc = 0x1903A8u;
    // 0x1903a8: 0x10400003
    ctx->pc = 0x1903A8u;
    {
        const bool branch_taken_0x1903a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1903a8) {
            ctx->pc = 0x1903B8u;
            goto label_1903b8;
        }
    }
    ctx->pc = 0x1903B0u;
    // 0x1903b0: 0x200902d
    ctx->pc = 0x1903b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1903b4: 0x220a82d
    ctx->pc = 0x1903b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1903b8:
    // 0x1903b8: 0x12800010
    ctx->pc = 0x1903B8u;
    {
        const bool branch_taken_0x1903b8 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x1903BCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1903b8) {
            ctx->pc = 0x1903FCu;
            goto label_1903fc;
        }
    }
    ctx->pc = 0x1903C0u;
    // 0x1903c0: 0x26310002
    ctx->pc = 0x1903c0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 2));
    // 0x1903c4: 0x237102b
    ctx->pc = 0x1903c4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x1903c8: 0x5440ffe9
    ctx->pc = 0x1903C8u;
    {
        const bool branch_taken_0x1903c8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1903c8) {
            ctx->pc = 0x1903CCu;
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x190370u;
            goto label_190370;
        }
    }
    ctx->pc = 0x1903D0u;
label_1903d0:
    // 0x1903d0: 0x1280000a
    ctx->pc = 0x1903D0u;
    {
        const bool branch_taken_0x1903d0 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        ctx->pc = 0x1903D4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1903d0) {
            ctx->pc = 0x1903FCu;
            goto label_1903fc;
        }
    }
    ctx->pc = 0x1903D8u;
    // 0x1903d8: 0x16a00007
    ctx->pc = 0x1903D8u;
    {
        const bool branch_taken_0x1903d8 = (GPR_U32(ctx, 21) != GPR_U32(ctx, 0));
        ctx->pc = 0x1903DCu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1903d8) {
            ctx->pc = 0x1903F8u;
            goto label_1903f8;
        }
    }
    ctx->pc = 0x1903E0u;
    // 0x1903e0: 0x3c05ff00
    ctx->pc = 0x1903e0u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x1903e4: 0x3c0202d
    ctx->pc = 0x1903e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1903e8: 0xc064ea0
    ctx->pc = 0x1903E8u;
    SET_GPR_U32(ctx, 31, 0x1903F0u);
    ctx->pc = 0x1903ECu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 3082));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1903F0u; }
        else if (ctx->pc != 0x1903F0u) { ctx->pc = 0x1903F0u; }
    }
    if (ctx->pc != 0x1903F0u) { return; }
    ctx->pc = 0x1903F0u;
    // 0x1903f0: 0x10000002
    ctx->pc = 0x1903F0u;
    {
        const bool branch_taken_0x1903f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1903F4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1903f0) {
            ctx->pc = 0x1903FCu;
            goto label_1903fc;
        }
    }
    ctx->pc = 0x1903F8u;
label_1903f8:
    // 0x1903f8: 0x220102d
    ctx->pc = 0x1903f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1903fc:
    // 0x1903fc: 0xdfbf00a0
    ctx->pc = 0x1903fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x190400: 0xdfbe0090
    ctx->pc = 0x190400u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x190404: 0xdfb70080
    ctx->pc = 0x190404u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x190408: 0xdfb60070
    ctx->pc = 0x190408u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19040c: 0xdfb50060
    ctx->pc = 0x19040cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x190410: 0xdfb40050
    ctx->pc = 0x190410u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x190414: 0xdfb30040
    ctx->pc = 0x190414u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x190418: 0xdfb20030
    ctx->pc = 0x190418u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19041c: 0xdfb10020
    ctx->pc = 0x19041cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190420: 0xdfb00010
    ctx->pc = 0x190420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190424: 0x3e00008
    ctx->pc = 0x190424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190428u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x190370u: goto label_190370;
            case 0x190374u: goto label_190374;
            case 0x1903B8u: goto label_1903b8;
            case 0x1903D0u: goto label_1903d0;
            case 0x1903F8u: goto label_1903f8;
            case 0x1903FCu: goto label_1903fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19042Cu;
}
