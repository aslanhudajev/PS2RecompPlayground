#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SRD_WaitComplete
// Address: 0x1760b8 - 0x17611c
void SRD_WaitComplete_0x1760b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SRD_WaitComplete");


    ctx->pc = 0x1760b8u;

    // 0x1760b8: 0x27bdffd0
    ctx->pc = 0x1760b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1760bc: 0xffb10010
    ctx->pc = 0x1760bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1760c0: 0xffb00000
    ctx->pc = 0x1760c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1760c4: 0xffbf0020
    ctx->pc = 0x1760c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1760c8: 0xc05f6f6
    ctx->pc = 0x1760C8u;
    SET_GPR_U32(ctx, 31, 0x1760D0u);
    ctx->pc = 0x1760CCu;
    SET_GPR_U32(ctx, 16, ((uint32_t)36 << 16));
    ctx->pc = 0x17DBD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_Lock_0x17dbd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1760D0u; }
        else if (ctx->pc != 0x1760D0u) { ctx->pc = 0x1760D0u; }
    }
    if (ctx->pc != 0x1760D0u) { return; }
    ctx->pc = 0x1760D0u;
    // 0x1760d0: 0x8e038770
    ctx->pc = 0x1760d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4294936432)));
    // 0x1760d4: 0x24020001
    ctx->pc = 0x1760d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1760d8: 0x14620004
    ctx->pc = 0x1760D8u;
    {
        const bool branch_taken_0x1760d8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1760DCu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 4294936432));
        if (branch_taken_0x1760d8) {
            ctx->pc = 0x1760ECu;
            goto label_1760ec;
        }
    }
    ctx->pc = 0x1760E0u;
    // 0x1760e0: 0xc05d800
    ctx->pc = 0x1760E0u;
    SET_GPR_U32(ctx, 31, 0x1760E8u);
    ctx->pc = 0x176000u;
    {
        const uint32_t __entryPc = ctx->pc;
        srd_wait_dvd_0x176000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1760E8u; }
        else if (ctx->pc != 0x1760E8u) { ctx->pc = 0x1760E8u; }
    }
    if (ctx->pc != 0x1760E8u) { return; }
    ctx->pc = 0x1760E8u;
    // 0x1760e8: 0x8e038770
    ctx->pc = 0x1760e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4294936432)));
label_1760ec:
    // 0x1760ec: 0x24020002
    ctx->pc = 0x1760ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1760f0: 0x14620004
    ctx->pc = 0x1760F0u;
    {
        const bool branch_taken_0x1760f0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1760F4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1760f0) {
            ctx->pc = 0x176104u;
            goto label_176104;
        }
    }
    ctx->pc = 0x1760F8u;
    // 0x1760f8: 0xc05d802
    ctx->pc = 0x1760F8u;
    SET_GPR_U32(ctx, 31, 0x176100u);
    ctx->pc = 0x176008u;
    {
        const uint32_t __entryPc = ctx->pc;
        srd_wait_hst_0x176008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x176100u; }
        else if (ctx->pc != 0x176100u) { ctx->pc = 0x176100u; }
    }
    if (ctx->pc != 0x176100u) { return; }
    ctx->pc = 0x176100u;
    // 0x176100: 0x24020003
    ctx->pc = 0x176100u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_176104:
    // 0x176104: 0xdfbf0020
    ctx->pc = 0x176104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x176108: 0xae220004
    ctx->pc = 0x176108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x17610c: 0xdfb10010
    ctx->pc = 0x17610cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176110: 0xdfb00000
    ctx->pc = 0x176110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176114: 0x805f700
    ctx->pc = 0x176114u;
    ctx->pc = 0x176118u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x17DC00u;
    SVM_Unlock_0x17dc00(rdram, ctx, runtime); return;
    ctx->pc = 0x17611Cu;
}
