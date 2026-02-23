#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SRD_ExecServer
// Address: 0x1763d0 - 0x1764e0
void SRD_ExecServer_0x1763d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SRD_ExecServer");


    ctx->pc = 0x1763d0u;

    // 0x1763d0: 0x27bdffa0
    ctx->pc = 0x1763d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1763d4: 0x24030001
    ctx->pc = 0x1763d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1763d8: 0xffb30030
    ctx->pc = 0x1763d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1763dc: 0x3c130024
    ctx->pc = 0x1763dcu;
    SET_GPR_U32(ctx, 19, ((uint32_t)36 << 16));
    // 0x1763e0: 0xffbf0050
    ctx->pc = 0x1763e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1763e4: 0x8e62879c
    ctx->pc = 0x1763e4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 4294936476)));
    // 0x1763e8: 0xffb40040
    ctx->pc = 0x1763e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1763ec: 0xffb20020
    ctx->pc = 0x1763ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1763f0: 0xffb10010
    ctx->pc = 0x1763f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1763f4: 0x10430032
    ctx->pc = 0x1763F4u;
    {
        const bool branch_taken_0x1763f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1763F8u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        if (branch_taken_0x1763f4) {
            ctx->pc = 0x1764C0u;
            goto label_1764c0;
        }
    }
    ctx->pc = 0x1763FCu;
    // 0x1763fc: 0x3c120024
    ctx->pc = 0x1763fcu;
    SET_GPR_U32(ctx, 18, ((uint32_t)36 << 16));
    // 0x176400: 0xae63879c
    ctx->pc = 0x176400u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294936476), GPR_U32(ctx, 3));
    // 0x176404: 0x8e508770
    ctx->pc = 0x176404u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 18), 4294936432)));
    // 0x176408: 0x16030022
    ctx->pc = 0x176408u;
    {
        const bool branch_taken_0x176408 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 3));
        ctx->pc = 0x17640Cu;
        SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 18), 4294936432));
        if (branch_taken_0x176408) {
            ctx->pc = 0x176494u;
            goto label_176494;
        }
    }
    ctx->pc = 0x176410u;
    // 0x176410: 0x3c110024
    ctx->pc = 0x176410u;
    SET_GPR_U32(ctx, 17, ((uint32_t)36 << 16));
    // 0x176414: 0x8e2287a4
    ctx->pc = 0x176414u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294936484)));
    // 0x176418: 0x14500004
    ctx->pc = 0x176418u;
    {
        const bool branch_taken_0x176418 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        ctx->pc = 0x17641Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
        if (branch_taken_0x176418) {
            ctx->pc = 0x17642Cu;
            goto label_17642c;
        }
    }
    ctx->pc = 0x176420u;
    // 0x176420: 0xc05f6f6
    ctx->pc = 0x176420u;
    SET_GPR_U32(ctx, 31, 0x176428u);
    ctx->pc = 0x17DBD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_Lock_0x17dbd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176428u; }
        else if (ctx->pc != 0x176428u) { ctx->pc = 0x176428u; }
    }
    if (ctx->pc != 0x176428u) { return; }
    ctx->pc = 0x176428u;
    // 0x176428: 0x3c020024
    ctx->pc = 0x176428u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
label_17642c:
    // 0x17642c: 0x8c4387a8
    ctx->pc = 0x17642cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294936488)));
    // 0x176430: 0x14700003
    ctx->pc = 0x176430u;
    {
        const bool branch_taken_0x176430 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 16));
        if (branch_taken_0x176430) {
            ctx->pc = 0x176440u;
            goto label_176440;
        }
    }
    ctx->pc = 0x176438u;
    // 0x176438: 0xc05d874
    ctx->pc = 0x176438u;
    SET_GPR_U32(ctx, 31, 0x176440u);
    ctx->pc = 0x1761D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        srd_check_err_dvd_0x1761d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176440u; }
        else if (ctx->pc != 0x176440u) { ctx->pc = 0x176440u; }
    }
    if (ctx->pc != 0x176440u) { return; }
    ctx->pc = 0x176440u;
label_176440:
    // 0x176440: 0x8e2287a4
    ctx->pc = 0x176440u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294936484)));
    // 0x176444: 0x54500004
    ctx->pc = 0x176444u;
    {
        const bool branch_taken_0x176444 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        if (branch_taken_0x176444) {
            ctx->pc = 0x176448u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->pc = 0x176458u;
            goto label_176458;
        }
    }
    ctx->pc = 0x17644Cu;
    // 0x17644c: 0xc05f700
    ctx->pc = 0x17644Cu;
    SET_GPR_U32(ctx, 31, 0x176454u);
    ctx->pc = 0x17DC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_Unlock_0x17dc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176454u; }
        else if (ctx->pc != 0x176454u) { ctx->pc = 0x176454u; }
    }
    if (ctx->pc != 0x176454u) { return; }
    ctx->pc = 0x176454u;
    // 0x176454: 0x8e830004
    ctx->pc = 0x176454u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_176458:
    // 0x176458: 0x24020009
    ctx->pc = 0x176458u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x17645c: 0x10620017
    ctx->pc = 0x17645Cu;
    {
        const bool branch_taken_0x17645c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x176460u;
        SET_GPR_U32(ctx, 17, ((uint32_t)36 << 16));
        if (branch_taken_0x17645c) {
            ctx->pc = 0x1764BCu;
            goto label_1764bc;
        }
    }
    ctx->pc = 0x176464u;
    // 0x176464: 0x8e2287a0
    ctx->pc = 0x176464u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294936480)));
    // 0x176468: 0x14500003
    ctx->pc = 0x176468u;
    {
        const bool branch_taken_0x176468 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        if (branch_taken_0x176468) {
            ctx->pc = 0x176478u;
            goto label_176478;
        }
    }
    ctx->pc = 0x176470u;
    // 0x176470: 0xc05f6f6
    ctx->pc = 0x176470u;
    SET_GPR_U32(ctx, 31, 0x176478u);
    ctx->pc = 0x17DBD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_Lock_0x17dbd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176478u; }
        else if (ctx->pc != 0x176478u) { ctx->pc = 0x176478u; }
    }
    if (ctx->pc != 0x176478u) { return; }
    ctx->pc = 0x176478u;
label_176478:
    // 0x176478: 0xc05d89a
    ctx->pc = 0x176478u;
    SET_GPR_U32(ctx, 31, 0x176480u);
    ctx->pc = 0x176268u;
    {
        const uint32_t __entryPc = ctx->pc;
        srd_exec_dvd_0x176268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176480u; }
        else if (ctx->pc != 0x176480u) { ctx->pc = 0x176480u; }
    }
    if (ctx->pc != 0x176480u) { return; }
    ctx->pc = 0x176480u;
    // 0x176480: 0x8e2287a0
    ctx->pc = 0x176480u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294936480)));
    // 0x176484: 0x14500004
    ctx->pc = 0x176484u;
    {
        const bool branch_taken_0x176484 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 16));
        ctx->pc = 0x176488u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4294936432)));
        if (branch_taken_0x176484) {
            ctx->pc = 0x176498u;
            goto label_176498;
        }
    }
    ctx->pc = 0x17648Cu;
    // 0x17648c: 0xc05f700
    ctx->pc = 0x17648Cu;
    SET_GPR_U32(ctx, 31, 0x176494u);
    ctx->pc = 0x17DC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_Unlock_0x17dc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176494u; }
        else if (ctx->pc != 0x176494u) { ctx->pc = 0x176494u; }
    }
    if (ctx->pc != 0x176494u) { return; }
    ctx->pc = 0x176494u;
label_176494:
    // 0x176494: 0x8e438770
    ctx->pc = 0x176494u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 4294936432)));
label_176498:
    // 0x176498: 0x24020002
    ctx->pc = 0x176498u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x17649c: 0x14620007
    ctx->pc = 0x17649Cu;
    {
        const bool branch_taken_0x17649c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x17649c) {
            ctx->pc = 0x1764BCu;
            goto label_1764bc;
        }
    }
    ctx->pc = 0x1764A4u;
    // 0x1764a4: 0xc05f6f6
    ctx->pc = 0x1764A4u;
    SET_GPR_U32(ctx, 31, 0x1764ACu);
    ctx->pc = 0x17DBD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_Lock_0x17dbd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1764ACu; }
        else if (ctx->pc != 0x1764ACu) { ctx->pc = 0x1764ACu; }
    }
    if (ctx->pc != 0x1764ACu) { return; }
    ctx->pc = 0x1764ACu;
    // 0x1764ac: 0xc05d8c2
    ctx->pc = 0x1764ACu;
    SET_GPR_U32(ctx, 31, 0x1764B4u);
    ctx->pc = 0x176308u;
    {
        const uint32_t __entryPc = ctx->pc;
        srd_exec_hst_0x176308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1764B4u; }
        else if (ctx->pc != 0x1764B4u) { ctx->pc = 0x1764B4u; }
    }
    if (ctx->pc != 0x1764B4u) { return; }
    ctx->pc = 0x1764B4u;
    // 0x1764b4: 0xc05f700
    ctx->pc = 0x1764B4u;
    SET_GPR_U32(ctx, 31, 0x1764BCu);
    ctx->pc = 0x17DC00u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_Unlock_0x17dc00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1764BCu; }
        else if (ctx->pc != 0x1764BCu) { ctx->pc = 0x1764BCu; }
    }
    if (ctx->pc != 0x1764BCu) { return; }
    ctx->pc = 0x1764BCu;
label_1764bc:
    // 0x1764bc: 0xae60879c
    ctx->pc = 0x1764bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294936476), GPR_U32(ctx, 0));
label_1764c0:
    // 0x1764c0: 0xdfbf0050
    ctx->pc = 0x1764c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1764c4: 0xdfb40040
    ctx->pc = 0x1764c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1764c8: 0xdfb30030
    ctx->pc = 0x1764c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1764cc: 0xdfb20020
    ctx->pc = 0x1764ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1764d0: 0xdfb10010
    ctx->pc = 0x1764d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1764d4: 0xdfb00000
    ctx->pc = 0x1764d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1764d8: 0x3e00008
    ctx->pc = 0x1764D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1764DCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17642Cu: goto label_17642c;
            case 0x176440u: goto label_176440;
            case 0x176458u: goto label_176458;
            case 0x176478u: goto label_176478;
            case 0x176494u: goto label_176494;
            case 0x176498u: goto label_176498;
            case 0x1764BCu: goto label_1764bc;
            case 0x1764C0u: goto label_1764c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1764E0u;
}
