#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SVM_DelCbSvr
// Address: 0x17dfd8 - 0x17e044
void SVM_DelCbSvr_0x17dfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SVM_DelCbSvr");


    ctx->pc = 0x17dfd8u;

    // 0x17dfd8: 0x27bdffd0
    ctx->pc = 0x17dfd8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17dfdc: 0xffb00000
    ctx->pc = 0x17dfdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17dfe0: 0xffb10010
    ctx->pc = 0x17dfe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17dfe4: 0xa0802d
    ctx->pc = 0x17dfe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dfe8: 0xffbf0020
    ctx->pc = 0x17dfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17dfec: 0x2e020004
    ctx->pc = 0x17dfecu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 4));
    // 0x17dff0: 0x14400004
    ctx->pc = 0x17DFF0u;
    {
        const bool branch_taken_0x17dff0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17DFF4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17dff0) {
            ctx->pc = 0x17E004u;
            goto label_17e004;
        }
    }
    ctx->pc = 0x17DFF8u;
    // 0x17dff8: 0x3c04002c
    ctx->pc = 0x17dff8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17dffc: 0xc05f72c
    ctx->pc = 0x17DFFCu;
    SET_GPR_U32(ctx, 31, 0x17E004u);
    ctx->pc = 0x17E000u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294951152));
    ctx->pc = 0x17DCB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_CallErr1_0x17dcb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E004u; }
        else if (ctx->pc != 0x17E004u) { ctx->pc = 0x17E004u; }
    }
    if (ctx->pc != 0x17E004u) { return; }
    ctx->pc = 0x17E004u;
label_17e004:
    // 0x17e004: 0xc05f6f6
    ctx->pc = 0x17E004u;
    SET_GPR_U32(ctx, 31, 0x17E00Cu);
    ctx->pc = 0x17DBD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_Lock_0x17dbd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E00Cu; }
        else if (ctx->pc != 0x17E00Cu) { ctx->pc = 0x17E00Cu; }
    }
    if (ctx->pc != 0x17E00Cu) { return; }
    ctx->pc = 0x17E00Cu;
    // 0x17e00c: 0x112140
    ctx->pc = 0x17e00cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 17), 5));
    // 0x17e010: 0x1018c0
    ctx->pc = 0x17e010u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 3));
    // 0x17e014: 0x3c02002e
    ctx->pc = 0x17e014u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x17e018: 0x641821
    ctx->pc = 0x17e018u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17e01c: 0x24421ae0
    ctx->pc = 0x17e01cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6880));
    // 0x17e020: 0xdfbf0020
    ctx->pc = 0x17e020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e024: 0x432021
    ctx->pc = 0x17e024u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17e028: 0xdfb10010
    ctx->pc = 0x17e028u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e02c: 0x621821
    ctx->pc = 0x17e02cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17e030: 0xdfb00000
    ctx->pc = 0x17e030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e034: 0xac600000
    ctx->pc = 0x17e034u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x17e038: 0xac800004
    ctx->pc = 0x17e038u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x17e03c: 0x805f700
    ctx->pc = 0x17E03Cu;
    ctx->pc = 0x17E040u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x17DC00u;
    SVM_Unlock_0x17dc00(rdram, ctx, runtime); return;
    ctx->pc = 0x17E044u;
}
