#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mwPlyFinishSfdFx
// Address: 0x18e008 - 0x18e12c
void mwPlyFinishSfdFx_0x18e008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mwPlyFinishSfdFx");


    ctx->pc = 0x18e008u;

    // 0x18e008: 0x27bdffb0
    ctx->pc = 0x18e008u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18e00c: 0xffb30030
    ctx->pc = 0x18e00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x18e010: 0xffbf0040
    ctx->pc = 0x18e010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x18e014: 0xffb20020
    ctx->pc = 0x18e014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x18e018: 0xffb10010
    ctx->pc = 0x18e018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x18e01c: 0xc063184
    ctx->pc = 0x18E01Cu;
    SET_GPR_U32(ctx, 31, 0x18E024u);
    ctx->pc = 0x18E020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x18C610u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFD_GetLibWorkPtr_0x18c610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E024u; }
        else if (ctx->pc != 0x18E024u) { ctx->pc = 0x18E024u; }
    }
    if (ctx->pc != 0x18E024u) { return; }
    ctx->pc = 0x18E024u;
    // 0x18e024: 0x3c030024
    ctx->pc = 0x18e024u;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x18e028: 0x24531210
    ctx->pc = 0x18e028u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4624));
    // 0x18e02c: 0x8c623b6c
    ctx->pc = 0x18e02cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 15212)));
    // 0x18e030: 0x2442ffff
    ctx->pc = 0x18e030u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18e034: 0x14400036
    ctx->pc = 0x18E034u;
    {
        const bool branch_taken_0x18e034 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x18E038u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 15212), GPR_U32(ctx, 2));
        if (branch_taken_0x18e034) {
            ctx->pc = 0x18E110u;
            goto label_18e110;
        }
    }
    ctx->pc = 0x18E03Cu;
    // 0x18e03c: 0x3c020024
    ctx->pc = 0x18e03cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18e040: 0x24120001
    ctx->pc = 0x18e040u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18e044: 0x24502934
    ctx->pc = 0x18e044u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 10548));
    // 0x18e048: 0x26111200
    ctx->pc = 0x18e048u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 4608));
    // 0x18e04c: 0x8e020004
    ctx->pc = 0x18e04cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18e050:
    // 0x18e050: 0x54520004
    ctx->pc = 0x18E050u;
    {
        const bool branch_taken_0x18e050 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x18e050) {
            ctx->pc = 0x18E054u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 144));
            ctx->pc = 0x18E064u;
            goto label_18e064;
        }
    }
    ctx->pc = 0x18E058u;
    // 0x18e058: 0xc063254
    ctx->pc = 0x18E058u;
    SET_GPR_U32(ctx, 31, 0x18E060u);
    ctx->pc = 0x18E05Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18C950u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwSfdDestroy_0x18c950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E060u; }
        else if (ctx->pc != 0x18E060u) { ctx->pc = 0x18E060u; }
    }
    if (ctx->pc != 0x18E060u) { return; }
    ctx->pc = 0x18E060u;
    // 0x18e060: 0x26100090
    ctx->pc = 0x18e060u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 144));
label_18e064:
    // 0x18e064: 0x211102a
    ctx->pc = 0x18e064u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x18e068: 0x5440fff9
    ctx->pc = 0x18E068u;
    {
        const bool branch_taken_0x18e068 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x18e068) {
            ctx->pc = 0x18E06Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x18E050u;
            goto label_18e050;
        }
    }
    ctx->pc = 0x18E070u;
    // 0x18e070: 0xc063188
    ctx->pc = 0x18E070u;
    SET_GPR_U32(ctx, 31, 0x18E078u);
    ctx->pc = 0x18C620u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyLock_0x18c620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E078u; }
        else if (ctx->pc != 0x18E078u) { ctx->pc = 0x18E078u; }
    }
    if (ctx->pc != 0x18E078u) { return; }
    ctx->pc = 0x18E078u;
    // 0x18e078: 0xc05e9fe
    ctx->pc = 0x18E078u;
    SET_GPR_U32(ctx, 31, 0x18E080u);
    ctx->pc = 0x18E07Cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17A7F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_Finish_0x17a7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E080u; }
        else if (ctx->pc != 0x18E080u) { ctx->pc = 0x18E080u; }
    }
    if (ctx->pc != 0x18E080u) { return; }
    ctx->pc = 0x18E080u;
    // 0x18e080: 0xc063adc
    ctx->pc = 0x18E080u;
    SET_GPR_U32(ctx, 31, 0x18E088u);
    ctx->pc = 0x18EB70u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlySfdFinish_0x18eb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E088u; }
        else if (ctx->pc != 0x18E088u) { ctx->pc = 0x18E088u; }
    }
    if (ctx->pc != 0x18E088u) { return; }
    ctx->pc = 0x18E088u;
    // 0x18e088: 0xc05c754
    ctx->pc = 0x18E088u;
    SET_GPR_U32(ctx, 31, 0x18E090u);
    ctx->pc = 0x18E08Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_SetTimeMode_0x171d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E090u; }
        else if (ctx->pc != 0x18E090u) { ctx->pc = 0x18E090u; }
    }
    if (ctx->pc != 0x18E090u) { return; }
    ctx->pc = 0x18E090u;
    // 0x18e090: 0xc063dac
    ctx->pc = 0x18E090u;
    SET_GPR_U32(ctx, 31, 0x18E098u);
    ctx->pc = 0x18F6B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_DeleteVfunc_0x18f6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E098u; }
        else if (ctx->pc != 0x18E098u) { ctx->pc = 0x18E098u; }
    }
    if (ctx->pc != 0x18E098u) { return; }
    ctx->pc = 0x18E098u;
    // 0x18e098: 0xc05b15a
    ctx->pc = 0x18E098u;
    SET_GPR_U32(ctx, 31, 0x18E0A0u);
    ctx->pc = 0x16C568u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_Finish_0x16c568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E0A0u; }
        else if (ctx->pc != 0x18E0A0u) { ctx->pc = 0x18E0A0u; }
    }
    if (ctx->pc != 0x18E0A0u) { return; }
    ctx->pc = 0x18E0A0u;
    // 0x18e0a0: 0xc063e06
    ctx->pc = 0x18E0A0u;
    SET_GPR_U32(ctx, 31, 0x18E0A8u);
    ctx->pc = 0x18F818u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSTM_FinishStatic_0x18f818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E0A8u; }
        else if (ctx->pc != 0x18E0A8u) { ctx->pc = 0x18E0A8u; }
    }
    if (ctx->pc != 0x18E0A8u) { return; }
    ctx->pc = 0x18E0A8u;
    // 0x18e0a8: 0xc05f2da
    ctx->pc = 0x18E0A8u;
    SET_GPR_U32(ctx, 31, 0x18E0B0u);
    ctx->pc = 0x17CB68u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJUNI_Finish_0x17cb68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E0B0u; }
        else if (ctx->pc != 0x18E0B0u) { ctx->pc = 0x18E0B0u; }
    }
    if (ctx->pc != 0x18E0B0u) { return; }
    ctx->pc = 0x18E0B0u;
    // 0x18e0b0: 0xc05efe0
    ctx->pc = 0x18E0B0u;
    SET_GPR_U32(ctx, 31, 0x18E0B8u);
    ctx->pc = 0x17BF80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJMEM_Finish_0x17bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E0B8u; }
        else if (ctx->pc != 0x18E0B8u) { ctx->pc = 0x18E0B8u; }
    }
    if (ctx->pc != 0x18E0B8u) { return; }
    ctx->pc = 0x18E0B8u;
    // 0x18e0b8: 0xc05f11c
    ctx->pc = 0x18E0B8u;
    SET_GPR_U32(ctx, 31, 0x18E0C0u);
    ctx->pc = 0x17C470u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJRBF_Finish_0x17c470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E0C0u; }
        else if (ctx->pc != 0x18E0C0u) { ctx->pc = 0x18E0C0u; }
    }
    if (ctx->pc != 0x18E0C0u) { return; }
    ctx->pc = 0x18E0C0u;
    // 0x18e0c0: 0x8e63000c
    ctx->pc = 0x18e0c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x18e0c4: 0x14600005
    ctx->pc = 0x18E0C4u;
    {
        const bool branch_taken_0x18e0c4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x18E0C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x18e0c4) {
            ctx->pc = 0x18E0DCu;
            goto label_18e0dc;
        }
    }
    ctx->pc = 0x18E0CCu;
    // 0x18e0cc: 0xc063dbc
    ctx->pc = 0x18E0CCu;
    SET_GPR_U32(ctx, 31, 0x18E0D4u);
    ctx->pc = 0x18F6F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_DeleteIdleFunc_0x18f6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E0D4u; }
        else if (ctx->pc != 0x18E0D4u) { ctx->pc = 0x18E0D4u; }
    }
    if (ctx->pc != 0x18E0D4u) { return; }
    ctx->pc = 0x18E0D4u;
    // 0x18e0d4: 0x10000005
    ctx->pc = 0x18E0D4u;
    {
        const bool branch_taken_0x18e0d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x18e0d4) {
            ctx->pc = 0x18E0ECu;
            goto label_18e0ec;
        }
    }
    ctx->pc = 0x18E0DCu;
label_18e0dc:
    // 0x18e0dc: 0x14620003
    ctx->pc = 0x18E0DCu;
    {
        const bool branch_taken_0x18e0dc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x18e0dc) {
            ctx->pc = 0x18E0ECu;
            goto label_18e0ec;
        }
    }
    ctx->pc = 0x18E0E4u;
    // 0x18e0e4: 0xc063dcc
    ctx->pc = 0x18E0E4u;
    SET_GPR_U32(ctx, 31, 0x18E0ECu);
    ctx->pc = 0x18F730u;
    {
        const uint32_t __entryPc = ctx->pc;
        MWSFSVM_DeleteMainFunc_0x18f730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E0ECu; }
        else if (ctx->pc != 0x18E0ECu) { ctx->pc = 0x18E0ECu; }
    }
    if (ctx->pc != 0x18E0ECu) { return; }
    ctx->pc = 0x18E0ECu;
label_18e0ec:
    // 0x18e0ec: 0xc063190
    ctx->pc = 0x18E0ECu;
    SET_GPR_U32(ctx, 31, 0x18E0F4u);
    ctx->pc = 0x18E0F0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18C640u;
    {
        const uint32_t __entryPc = ctx->pc;
        mwPlyUnlock_0x18c640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E0F4u; }
        else if (ctx->pc != 0x18E0F4u) { ctx->pc = 0x18E0F4u; }
    }
    if (ctx->pc != 0x18E0F4u) { return; }
    ctx->pc = 0x18E0F4u;
    // 0x18e0f4: 0xdfbf0040
    ctx->pc = 0x18e0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e0f8: 0xdfb30030
    ctx->pc = 0x18e0f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e0fc: 0xdfb20020
    ctx->pc = 0x18e0fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e100: 0xdfb10010
    ctx->pc = 0x18e100u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e104: 0xdfb00000
    ctx->pc = 0x18e104u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e108: 0x8063d9e
    ctx->pc = 0x18E108u;
    ctx->pc = 0x18E10Cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
    ctx->pc = 0x18F678u;
    MWSFSVM_Finish_0x18f678(rdram, ctx, runtime); return;
    ctx->pc = 0x18E110u;
label_18e110:
    // 0x18e110: 0xdfbf0040
    ctx->pc = 0x18e110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18e114: 0xdfb30030
    ctx->pc = 0x18e114u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18e118: 0xdfb20020
    ctx->pc = 0x18e118u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18e11c: 0xdfb10010
    ctx->pc = 0x18e11cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e120: 0xdfb00000
    ctx->pc = 0x18e120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e124: 0x3e00008
    ctx->pc = 0x18E124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E128u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18E050u: goto label_18e050;
            case 0x18E064u: goto label_18e064;
            case 0x18E0DCu: goto label_18e0dc;
            case 0x18E0ECu: goto label_18e0ec;
            case 0x18E110u: goto label_18e110;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18E12Cu;
}
