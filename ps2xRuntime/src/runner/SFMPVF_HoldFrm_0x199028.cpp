#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFMPVF_HoldFrm
// Address: 0x199028 - 0x199118
void SFMPVF_HoldFrm_0x199028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFMPVF_HoldFrm");


    ctx->pc = 0x199028u;

    // 0x199028: 0x27bdff60
    ctx->pc = 0x199028u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x19902c: 0xffb00010
    ctx->pc = 0x19902cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x199030: 0x80802d
    ctx->pc = 0x199030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199034: 0xffb70080
    ctx->pc = 0x199034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x199038: 0xffb40050
    ctx->pc = 0x199038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x19903c: 0xa0b82d
    ctx->pc = 0x19903cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199040: 0xffb30040
    ctx->pc = 0x199040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x199044: 0x3a0202d
    ctx->pc = 0x199044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199048: 0xffb10020
    ctx->pc = 0x199048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x19904c: 0x26143740
    ctx->pc = 0x19904cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 16), 14144));
    // 0x199050: 0xffbf0090
    ctx->pc = 0x199050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x199054: 0x26103810
    ctx->pc = 0x199054u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 14352));
    // 0x199058: 0xffb60070
    ctx->pc = 0x199058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x19905c: 0x982d
    ctx->pc = 0x19905cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199060: 0xffb50060
    ctx->pc = 0x199060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x199064: 0x882d
    ctx->pc = 0x199064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199068: 0xc064f3a
    ctx->pc = 0x199068u;
    SET_GPR_U32(ctx, 31, 0x199070u);
    ctx->pc = 0x19906Cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    ctx->pc = 0x193CE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_LockCs_0x193ce8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199070u; }
        else if (ctx->pc != 0x199070u) { ctx->pc = 0x199070u; }
    }
    if (ctx->pc != 0x199070u) { return; }
    ctx->pc = 0x199070u;
    // 0x199070: 0x8e8200cc
    ctx->pc = 0x199070u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 204)));
    // 0x199074: 0x18400011
    ctx->pc = 0x199074u;
    {
        const bool branch_taken_0x199074 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x199078u;
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x199074) {
            ctx->pc = 0x1990BCu;
            goto label_1990bc;
        }
    }
    ctx->pc = 0x19907Cu;
    // 0x19907c: 0x40902d
    ctx->pc = 0x19907cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199080: 0x24160002
    ctx->pc = 0x199080u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 2));
    // 0x199084: 0x24150004
    ctx->pc = 0x199084u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 0), 4));
label_199088:
    // 0x199088: 0x8e020000
    ctx->pc = 0x199088u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19908c: 0x10560004
    ctx->pc = 0x19908Cu;
    {
        const bool branch_taken_0x19908c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 22));
        ctx->pc = 0x199090u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19908c) {
            ctx->pc = 0x1990A0u;
            goto label_1990a0;
        }
    }
    ctx->pc = 0x199094u;
    // 0x199094: 0x54550007
    ctx->pc = 0x199094u;
    {
        const bool branch_taken_0x199094 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 21));
        if (branch_taken_0x199094) {
            ctx->pc = 0x199098u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->pc = 0x1990B4u;
            goto label_1990b4;
        }
    }
    ctx->pc = 0x19909Cu;
    // 0x19909c: 0x220202d
    ctx->pc = 0x19909cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1990a0:
    // 0x1990a0: 0xc06648e
    ctx->pc = 0x1990A0u;
    SET_GPR_U32(ctx, 31, 0x1990A8u);
    ctx->pc = 0x1990A4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x199238u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfmpvf_IsChkFirst_0x199238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1990A8u; }
        else if (ctx->pc != 0x1990A8u) { ctx->pc = 0x1990A8u; }
    }
    if (ctx->pc != 0x1990A8u) { return; }
    ctx->pc = 0x1990A8u;
    // 0x1990a8: 0x26730001
    ctx->pc = 0x1990a8u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
    // 0x1990ac: 0x202880b
    ctx->pc = 0x1990acu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 16));
    // 0x1990b0: 0x2652ffff
    ctx->pc = 0x1990b0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4294967295));
label_1990b4:
    // 0x1990b4: 0x1640fff4
    ctx->pc = 0x1990B4u;
    {
        const bool branch_taken_0x1990b4 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x1990B8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 80));
        if (branch_taken_0x1990b4) {
            ctx->pc = 0x199088u;
            goto label_199088;
        }
    }
    ctx->pc = 0x1990BCu;
label_1990bc:
    // 0x1990bc: 0x24020001
    ctx->pc = 0x1990bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1990c0: 0x16620007
    ctx->pc = 0x1990C0u;
    {
        const bool branch_taken_0x1990c0 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        if (branch_taken_0x1990c0) {
            ctx->pc = 0x1990E0u;
            goto label_1990e0;
        }
    }
    ctx->pc = 0x1990C8u;
    // 0x1990c8: 0x8e820034
    ctx->pc = 0x1990c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x1990cc: 0x50400003
    ctx->pc = 0x1990CCu;
    {
        const bool branch_taken_0x1990cc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1990cc) {
            ctx->pc = 0x1990D0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 56)));
            ctx->pc = 0x1990DCu;
            goto label_1990dc;
        }
    }
    ctx->pc = 0x1990D4u;
    // 0x1990d4: 0x10000002
    ctx->pc = 0x1990D4u;
    {
        const bool branch_taken_0x1990d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1990D8u;
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 19));
        if (branch_taken_0x1990d4) {
            ctx->pc = 0x1990E0u;
            goto label_1990e0;
        }
    }
    ctx->pc = 0x1990DCu;
label_1990dc:
    // 0x1990dc: 0x2880a
    ctx->pc = 0x1990dcu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 17, GPR_U32(ctx, 0));
label_1990e0:
    // 0x1990e0: 0xc064f44
    ctx->pc = 0x1990E0u;
    SET_GPR_U32(ctx, 31, 0x1990E8u);
    ctx->pc = 0x1990E4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193D10u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_UnlockCs_0x193d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1990E8u; }
        else if (ctx->pc != 0x1990E8u) { ctx->pc = 0x1990E8u; }
    }
    if (ctx->pc != 0x1990E8u) { return; }
    ctx->pc = 0x1990E8u;
    // 0x1990e8: 0x220102d
    ctx->pc = 0x1990e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1990ec: 0xdfbf0090
    ctx->pc = 0x1990ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1990f0: 0xdfb70080
    ctx->pc = 0x1990f0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1990f4: 0xdfb60070
    ctx->pc = 0x1990f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1990f8: 0xdfb50060
    ctx->pc = 0x1990f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1990fc: 0xdfb40050
    ctx->pc = 0x1990fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x199100: 0xdfb30040
    ctx->pc = 0x199100u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x199104: 0xdfb20030
    ctx->pc = 0x199104u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x199108: 0xdfb10020
    ctx->pc = 0x199108u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19910c: 0xdfb00010
    ctx->pc = 0x19910cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199110: 0x3e00008
    ctx->pc = 0x199110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199114u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x199088u: goto label_199088;
            case 0x1990A0u: goto label_1990a0;
            case 0x1990B4u: goto label_1990b4;
            case 0x1990BCu: goto label_1990bc;
            case 0x1990DCu: goto label_1990dc;
            case 0x1990E0u: goto label_1990e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x199118u;
}
