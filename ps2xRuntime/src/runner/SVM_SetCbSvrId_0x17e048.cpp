#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SVM_SetCbSvrId
// Address: 0x17e048 - 0x17e0e4
void SVM_SetCbSvrId_0x17e048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SVM_SetCbSvrId");


    ctx->pc = 0x17e048u;

    // 0x17e048: 0x27bdffb0
    ctx->pc = 0x17e048u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17e04c: 0xffb00000
    ctx->pc = 0x17e04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17e050: 0xffb30030
    ctx->pc = 0x17e050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x17e054: 0xa0802d
    ctx->pc = 0x17e054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e058: 0xffb20020
    ctx->pc = 0x17e058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17e05c: 0xc0982d
    ctx->pc = 0x17e05cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e060: 0xffb10010
    ctx->pc = 0x17e060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17e064: 0xe0902d
    ctx->pc = 0x17e064u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e068: 0xffbf0040
    ctx->pc = 0x17e068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17e06c: 0x2e020004
    ctx->pc = 0x17e06cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 16), 4));
    // 0x17e070: 0x14400004
    ctx->pc = 0x17E070u;
    {
        const bool branch_taken_0x17e070 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17E074u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17e070) {
            ctx->pc = 0x17E084u;
            goto label_17e084;
        }
    }
    ctx->pc = 0x17E078u;
    // 0x17e078: 0x3c04002c
    ctx->pc = 0x17e078u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17e07c: 0xc05f72c
    ctx->pc = 0x17E07Cu;
    SET_GPR_U32(ctx, 31, 0x17E084u);
    ctx->pc = 0x17E080u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294951184));
    ctx->pc = 0x17DCB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_CallErr1_0x17dcb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E084u; }
        else if (ctx->pc != 0x17E084u) { ctx->pc = 0x17E084u; }
    }
    if (ctx->pc != 0x17E084u) { return; }
    ctx->pc = 0x17E084u;
label_17e084:
    // 0x17e084: 0x6200003
    ctx->pc = 0x17E084u;
    {
        const bool branch_taken_0x17e084 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x17E088u;
        SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 7));
        if (branch_taken_0x17e084) {
            ctx->pc = 0x17E094u;
            goto label_17e094;
        }
    }
    ctx->pc = 0x17E08Cu;
    // 0x17e08c: 0x14400004
    ctx->pc = 0x17E08Cu;
    {
        const bool branch_taken_0x17e08c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17e08c) {
            ctx->pc = 0x17E0A0u;
            goto label_17e0a0;
        }
    }
    ctx->pc = 0x17E094u;
label_17e094:
    // 0x17e094: 0x3c04002c
    ctx->pc = 0x17e094u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x17e098: 0xc05f72c
    ctx->pc = 0x17E098u;
    SET_GPR_U32(ctx, 31, 0x17E0A0u);
    ctx->pc = 0x17E09Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294951224));
    ctx->pc = 0x17DCB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_CallErr1_0x17dcb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E0A0u; }
        else if (ctx->pc != 0x17E0A0u) { ctx->pc = 0x17E0A0u; }
    }
    if (ctx->pc != 0x17E0A0u) { return; }
    ctx->pc = 0x17E0A0u;
label_17e0a0:
    // 0x17e0a0: 0xc05f6f6
    ctx->pc = 0x17E0A0u;
    SET_GPR_U32(ctx, 31, 0x17E0A8u);
    ctx->pc = 0x17DBD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_Lock_0x17dbd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E0A8u; }
        else if (ctx->pc != 0x17E0A8u) { ctx->pc = 0x17E0A8u; }
    }
    if (ctx->pc != 0x17E0A8u) { return; }
    ctx->pc = 0x17E0A8u;
    // 0x17e0a8: 0x3c02002e
    ctx->pc = 0x17e0a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)46 << 16));
    // 0x17e0ac: 0x1020c0
    ctx->pc = 0x17e0acu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 16), 3));
    // 0x17e0b0: 0x24421ae0
    ctx->pc = 0x17e0b0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 6880));
    // 0x17e0b4: 0x111940
    ctx->pc = 0x17e0b4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 17), 5));
    // 0x17e0b8: 0x822021
    ctx->pc = 0x17e0b8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x17e0bc: 0xdfbf0040
    ctx->pc = 0x17e0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17e0c0: 0x641821
    ctx->pc = 0x17e0c0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17e0c4: 0xdfb10010
    ctx->pc = 0x17e0c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e0c8: 0xac720004
    ctx->pc = 0x17e0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
    // 0x17e0cc: 0xac730000
    ctx->pc = 0x17e0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
    // 0x17e0d0: 0xdfb30030
    ctx->pc = 0x17e0d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17e0d4: 0xdfb20020
    ctx->pc = 0x17e0d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e0d8: 0xdfb00000
    ctx->pc = 0x17e0d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e0dc: 0x805f700
    ctx->pc = 0x17E0DCu;
    ctx->pc = 0x17E0E0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x17DC00u;
    SVM_Unlock_0x17dc00(rdram, ctx, runtime); return;
    ctx->pc = 0x17E0E4u;
}
