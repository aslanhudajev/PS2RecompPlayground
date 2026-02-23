#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxt_stat_playing
// Address: 0x173960 - 0x173a1c
void adxt_stat_playing_0x173960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxt_stat_playing");


    ctx->pc = 0x173960u;

label_173960:
    // 0x173960: 0x27bdffb0
    ctx->pc = 0x173960u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
label_173964:
    // 0x173964: 0xffb30030
    ctx->pc = 0x173964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_173968:
    // 0x173968: 0xffbf0040
    ctx->pc = 0x173968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_17396c:
    // 0x17396c: 0x80982d
    ctx->pc = 0x17396cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_173970:
    // 0x173970: 0xffb20020
    ctx->pc = 0x173970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_173974:
    // 0x173974: 0xffb10010
    ctx->pc = 0x173974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_173978:
    // 0x173978: 0xffb00000
    ctx->pc = 0x173978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17397c:
    // 0x17397c: 0xc05b796
label_173980:
    if (ctx->pc == 0x173980u) {
        ctx->pc = 0x173980u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x173984u;
        goto label_173984;
    }
    ctx->pc = 0x17397Cu;
    SET_GPR_U32(ctx, 31, 0x173984u);
    ctx->pc = 0x173980u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->pc = 0x16DE58u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetStat_0x16de58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173984u; }
        else if (ctx->pc != 0x173984u) { ctx->pc = 0x173984u; }
    }
    if (ctx->pc != 0x173984u) { return; }
    ctx->pc = 0x173984u;
label_173984:
    // 0x173984: 0x24030003
    ctx->pc = 0x173984u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_173988:
    // 0x173988: 0x1443001e
label_17398c:
    if (ctx->pc == 0x17398Cu) {
        ctx->pc = 0x17398Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x173990u;
        goto label_173990;
    }
    ctx->pc = 0x173988u;
    {
        const bool branch_taken_0x173988 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x17398Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x173988) {
            ctx->pc = 0x173A04u;
            goto label_173a04;
        }
    }
    ctx->pc = 0x173990u;
label_173990:
    // 0x173990: 0x8e640004
    ctx->pc = 0x173990u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_173994:
    // 0x173994: 0x882d
    ctx->pc = 0x173994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173998:
    // 0x173998: 0xc05b9e4
label_17399c:
    if (ctx->pc == 0x17399Cu) {
        ctx->pc = 0x17399Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 24));
        ctx->pc = 0x1739A0u;
        goto label_1739a0;
    }
    ctx->pc = 0x173998u;
    SET_GPR_U32(ctx, 31, 0x1739A0u);
    ctx->pc = 0x17399Cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 19), 24));
    ctx->pc = 0x16E790u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_GetNumChan_0x16e790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1739A0u; }
        else if (ctx->pc != 0x1739A0u) { ctx->pc = 0x1739A0u; }
    }
    if (ctx->pc != 0x1739A0u) { return; }
    ctx->pc = 0x1739A0u;
label_1739a0:
    // 0x1739a0: 0x40902d
    ctx->pc = 0x1739a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1739a4:
    // 0x1739a4: 0x10000004
label_1739a8:
    if (ctx->pc == 0x1739A8u) {
        ctx->pc = 0x1739A8u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935140), GPR_U32(ctx, 18));
        ctx->pc = 0x1739ACu;
        goto label_1739ac;
    }
    ctx->pc = 0x1739A4u;
    {
        const bool branch_taken_0x1739a4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1739A8u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935140), GPR_U32(ctx, 18));
        if (branch_taken_0x1739a4) {
            ctx->pc = 0x1739B8u;
            goto label_1739b8;
        }
    }
    ctx->pc = 0x1739ACu;
label_1739ac:
    // 0x1739ac: 0x0
    ctx->pc = 0x1739acu;
    // NOP
label_1739b0:
    // 0x1739b0: 0x26100004
    ctx->pc = 0x1739b0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4));
label_1739b4:
    // 0x1739b4: 0x26310001
    ctx->pc = 0x1739b4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
label_1739b8:
    // 0x1739b8: 0x232102a
    ctx->pc = 0x1739b8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 18)));
label_1739bc:
    // 0x1739bc: 0x10400009
label_1739c0:
    if (ctx->pc == 0x1739C0u) {
        ctx->pc = 0x1739C4u;
        goto label_1739c4;
    }
    ctx->pc = 0x1739BCu;
    {
        const bool branch_taken_0x1739bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1739bc) {
            ctx->pc = 0x1739E4u;
            goto label_1739e4;
        }
    }
    ctx->pc = 0x1739C4u;
label_1739c4:
    // 0x1739c4: 0x8e040000
    ctx->pc = 0x1739c4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1739c8:
    // 0x1739c8: 0x8c830000
    ctx->pc = 0x1739c8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1739cc:
    // 0x1739cc: 0x8c620024
    ctx->pc = 0x1739ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1739d0:
    // 0x1739d0: 0x40f809
label_1739d4:
    if (ctx->pc == 0x1739D4u) {
        ctx->pc = 0x1739D4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1739D8u;
        goto label_1739d8;
    }
    ctx->pc = 0x1739D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1739D8u);
        ctx->pc = 0x1739D4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173960u: goto label_173960;
            case 0x173964u: goto label_173964;
            case 0x173968u: goto label_173968;
            case 0x17396Cu: goto label_17396c;
            case 0x173970u: goto label_173970;
            case 0x173974u: goto label_173974;
            case 0x173978u: goto label_173978;
            case 0x17397Cu: goto label_17397c;
            case 0x173980u: goto label_173980;
            case 0x173984u: goto label_173984;
            case 0x173988u: goto label_173988;
            case 0x17398Cu: goto label_17398c;
            case 0x173990u: goto label_173990;
            case 0x173994u: goto label_173994;
            case 0x173998u: goto label_173998;
            case 0x17399Cu: goto label_17399c;
            case 0x1739A0u: goto label_1739a0;
            case 0x1739A4u: goto label_1739a4;
            case 0x1739A8u: goto label_1739a8;
            case 0x1739ACu: goto label_1739ac;
            case 0x1739B0u: goto label_1739b0;
            case 0x1739B4u: goto label_1739b4;
            case 0x1739B8u: goto label_1739b8;
            case 0x1739BCu: goto label_1739bc;
            case 0x1739C0u: goto label_1739c0;
            case 0x1739C4u: goto label_1739c4;
            case 0x1739C8u: goto label_1739c8;
            case 0x1739CCu: goto label_1739cc;
            case 0x1739D0u: goto label_1739d0;
            case 0x1739D4u: goto label_1739d4;
            case 0x1739D8u: goto label_1739d8;
            case 0x1739DCu: goto label_1739dc;
            case 0x1739E0u: goto label_1739e0;
            case 0x1739E4u: goto label_1739e4;
            case 0x1739E8u: goto label_1739e8;
            case 0x1739ECu: goto label_1739ec;
            case 0x1739F0u: goto label_1739f0;
            case 0x1739F4u: goto label_1739f4;
            case 0x1739F8u: goto label_1739f8;
            case 0x1739FCu: goto label_1739fc;
            case 0x173A00u: goto label_173a00;
            case 0x173A04u: goto label_173a04;
            case 0x173A08u: goto label_173a08;
            case 0x173A0Cu: goto label_173a0c;
            case 0x173A10u: goto label_173a10;
            case 0x173A14u: goto label_173a14;
            case 0x173A18u: goto label_173a18;
            default: break;
        }
        {
            const uint32_t saved_gp = GPR_U32(ctx, 28);
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            SET_GPR_U32(ctx, 28, saved_gp);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1739D8u; }
            if (ctx->pc != 0x1739D8u) { return; }
        }
    }
    ctx->pc = 0x1739D8u;
label_1739d8:
    // 0x1739d8: 0x28430040
    ctx->pc = 0x1739d8u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 2), 64));
label_1739dc:
    // 0x1739dc: 0x1460fff4
label_1739e0:
    if (ctx->pc == 0x1739E0u) {
        ctx->pc = 0x1739E0u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935144), GPR_U32(ctx, 2));
        ctx->pc = 0x1739E4u;
        goto label_1739e4;
    }
    ctx->pc = 0x1739DCu;
    {
        const bool branch_taken_0x1739dc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x1739E0u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935144), GPR_U32(ctx, 2));
        if (branch_taken_0x1739dc) {
            ctx->pc = 0x1739B0u;
            goto label_1739b0;
        }
    }
    ctx->pc = 0x1739E4u;
label_1739e4:
    // 0x1739e4: 0x16320007
label_1739e8:
    if (ctx->pc == 0x1739E8u) {
        ctx->pc = 0x1739E8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x1739ECu;
        goto label_1739ec;
    }
    ctx->pc = 0x1739E4u;
    {
        const bool branch_taken_0x1739e4 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 18));
        ctx->pc = 0x1739E8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x1739e4) {
            ctx->pc = 0x173A04u;
            goto label_173a04;
        }
    }
    ctx->pc = 0x1739ECu;
label_1739ec:
    // 0x1739ec: 0x8e64000c
    ctx->pc = 0x1739ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_1739f0:
    // 0x1739f0: 0xc05b690
label_1739f4:
    if (ctx->pc == 0x1739F4u) {
        ctx->pc = 0x1739F4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1739F8u;
        goto label_1739f8;
    }
    ctx->pc = 0x1739F0u;
    SET_GPR_U32(ctx, 31, 0x1739F8u);
    ctx->pc = 0x1739F4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16DA40u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXRNA_SetTransSw_0x16da40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1739F8u; }
        else if (ctx->pc != 0x1739F8u) { ctx->pc = 0x1739F8u; }
    }
    if (ctx->pc != 0x1739F8u) { return; }
    ctx->pc = 0x1739F8u;
label_1739f8:
    // 0x1739f8: 0x24020004
    ctx->pc = 0x1739f8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
label_1739fc:
    // 0x1739fc: 0xa2620001
    ctx->pc = 0x1739fcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
label_173a00:
    // 0x173a00: 0xdfbf0040
    ctx->pc = 0x173a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_173a04:
    // 0x173a04: 0xdfb30030
    ctx->pc = 0x173a04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_173a08:
    // 0x173a08: 0xdfb20020
    ctx->pc = 0x173a08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_173a0c:
    // 0x173a0c: 0xdfb10010
    ctx->pc = 0x173a0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_173a10:
    // 0x173a10: 0xdfb00000
    ctx->pc = 0x173a10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_173a14:
    // 0x173a14: 0x3e00008
label_173a18:
    if (ctx->pc == 0x173A18u) {
        ctx->pc = 0x173A18u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x173A1Cu;
        goto label_fallthrough_0x173a14;
    }
    ctx->pc = 0x173A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173A18u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173960u: goto label_173960;
            case 0x173964u: goto label_173964;
            case 0x173968u: goto label_173968;
            case 0x17396Cu: goto label_17396c;
            case 0x173970u: goto label_173970;
            case 0x173974u: goto label_173974;
            case 0x173978u: goto label_173978;
            case 0x17397Cu: goto label_17397c;
            case 0x173980u: goto label_173980;
            case 0x173984u: goto label_173984;
            case 0x173988u: goto label_173988;
            case 0x17398Cu: goto label_17398c;
            case 0x173990u: goto label_173990;
            case 0x173994u: goto label_173994;
            case 0x173998u: goto label_173998;
            case 0x17399Cu: goto label_17399c;
            case 0x1739A0u: goto label_1739a0;
            case 0x1739A4u: goto label_1739a4;
            case 0x1739A8u: goto label_1739a8;
            case 0x1739ACu: goto label_1739ac;
            case 0x1739B0u: goto label_1739b0;
            case 0x1739B4u: goto label_1739b4;
            case 0x1739B8u: goto label_1739b8;
            case 0x1739BCu: goto label_1739bc;
            case 0x1739C0u: goto label_1739c0;
            case 0x1739C4u: goto label_1739c4;
            case 0x1739C8u: goto label_1739c8;
            case 0x1739CCu: goto label_1739cc;
            case 0x1739D0u: goto label_1739d0;
            case 0x1739D4u: goto label_1739d4;
            case 0x1739D8u: goto label_1739d8;
            case 0x1739DCu: goto label_1739dc;
            case 0x1739E0u: goto label_1739e0;
            case 0x1739E4u: goto label_1739e4;
            case 0x1739E8u: goto label_1739e8;
            case 0x1739ECu: goto label_1739ec;
            case 0x1739F0u: goto label_1739f0;
            case 0x1739F4u: goto label_1739f4;
            case 0x1739F8u: goto label_1739f8;
            case 0x1739FCu: goto label_1739fc;
            case 0x173A00u: goto label_173a00;
            case 0x173A04u: goto label_173a04;
            case 0x173A08u: goto label_173a08;
            case 0x173A0Cu: goto label_173a0c;
            case 0x173A10u: goto label_173a10;
            case 0x173A14u: goto label_173a14;
            case 0x173A18u: goto label_173a18;
            default: break;
        }
        return;
    }
label_fallthrough_0x173a14:
    ctx->pc = 0x173A1Cu;
}
