#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_ExecServer
// Address: 0x172560 - 0x172608
void ADXT_ExecServer_0x172560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_ExecServer");


    ctx->pc = 0x172560u;

    // 0x172560: 0x27bdffc0
    ctx->pc = 0x172560u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x172564: 0xffb20020
    ctx->pc = 0x172564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x172568: 0xffb10010
    ctx->pc = 0x172568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x17256c: 0xffb00000
    ctx->pc = 0x17256cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x172570: 0xffbf0030
    ctx->pc = 0x172570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x172574: 0xc05a4e4
    ctx->pc = 0x172574u;
    SET_GPR_U32(ctx, 31, 0x17257Cu);
    ctx->pc = 0x172578u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x169390u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Lock_0x169390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17257Cu; }
        else if (ctx->pc != 0x17257Cu) { ctx->pc = 0x17257Cu; }
    }
    if (ctx->pc != 0x17257Cu) { return; }
    ctx->pc = 0x17257Cu;
    // 0x17257c: 0xc05d3a0
    ctx->pc = 0x17257Cu;
    SET_GPR_U32(ctx, 31, 0x172584u);
    ctx->pc = 0x174E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsExecServer_0x174e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172584u; }
        else if (ctx->pc != 0x172584u) { ctx->pc = 0x172584u; }
    }
    if (ctx->pc != 0x172584u) { return; }
    ctx->pc = 0x172584u;
    // 0x172584: 0xc05b9a0
    ctx->pc = 0x172584u;
    SET_GPR_U32(ctx, 31, 0x17258Cu);
    ctx->pc = 0x16E680u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_ExecServer_0x16e680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17258Cu; }
        else if (ctx->pc != 0x17258Cu) { ctx->pc = 0x17258Cu; }
    }
    if (ctx->pc != 0x17258Cu) { return; }
    ctx->pc = 0x17258Cu;
    // 0x17258c: 0xaf808234
    ctx->pc = 0x17258cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935092), GPR_U32(ctx, 0));
    // 0x172590: 0xc05af7a
    ctx->pc = 0x172590u;
    SET_GPR_U32(ctx, 31, 0x172598u);
    ctx->pc = 0x172594u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935096), GPR_U32(ctx, 0));
    ctx->pc = 0x16BDE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ExecServer_0x16bde8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172598u; }
        else if (ctx->pc != 0x172598u) { ctx->pc = 0x172598u; }
    }
    if (ctx->pc != 0x172598u) { return; }
    ctx->pc = 0x172598u;
    // 0x172598: 0xc05c408
    ctx->pc = 0x172598u;
    SET_GPR_U32(ctx, 31, 0x1725A0u);
    ctx->pc = 0x17259Cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935100), GPR_U32(ctx, 0));
    ctx->pc = 0x171020u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_ExecServer_0x171020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1725A0u; }
        else if (ctx->pc != 0x1725A0u) { ctx->pc = 0x1725A0u; }
    }
    if (ctx->pc != 0x1725A0u) { return; }
    ctx->pc = 0x1725A0u;
    // 0x1725a0: 0x3c020023
    ctx->pc = 0x1725a0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)35 << 16));
    // 0x1725a4: 0xaf808240
    ctx->pc = 0x1725a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935104), GPR_U32(ctx, 0));
    // 0x1725a8: 0x2450dd60
    ctx->pc = 0x1725a8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294958432));
    // 0x1725ac: 0x26110520
    ctx->pc = 0x1725acu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 1312));
    // 0x1725b0: 0x82020000
    ctx->pc = 0x1725b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1725b4: 0x0
    ctx->pc = 0x1725b4u;
    // NOP
label_1725b8:
    // 0x1725b8: 0x54520004
    ctx->pc = 0x1725B8u;
    {
        const bool branch_taken_0x1725b8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x1725b8) {
            ctx->pc = 0x1725BCu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 164));
            ctx->pc = 0x1725CCu;
            goto label_1725cc;
        }
    }
    ctx->pc = 0x1725C0u;
    // 0x1725c0: 0xc05cf7e
    ctx->pc = 0x1725C0u;
    SET_GPR_U32(ctx, 31, 0x1725C8u);
    ctx->pc = 0x1725C4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x173DF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXT_ExecHndl_0x173df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1725C8u; }
        else if (ctx->pc != 0x1725C8u) { ctx->pc = 0x1725C8u; }
    }
    if (ctx->pc != 0x1725C8u) { return; }
    ctx->pc = 0x1725C8u;
    // 0x1725c8: 0x261000a4
    ctx->pc = 0x1725c8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 164));
label_1725cc:
    // 0x1725cc: 0x211102a
    ctx->pc = 0x1725ccu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x1725d0: 0x5440fff9
    ctx->pc = 0x1725D0u;
    {
        const bool branch_taken_0x1725d0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1725d0) {
            ctx->pc = 0x1725D4u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x1725B8u;
            goto label_1725b8;
        }
    }
    ctx->pc = 0x1725D8u;
    // 0x1725d8: 0xc05b6b4
    ctx->pc = 0x1725D8u;
    SET_GPR_U32(ctx, 31, 0x1725E0u);
    ctx->pc = 0x16DAD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXRNA_ExecServer_0x16dad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1725E0u; }
        else if (ctx->pc != 0x1725E0u) { ctx->pc = 0x1725E0u; }
    }
    if (ctx->pc != 0x1725E0u) { return; }
    ctx->pc = 0x1725E0u;
    // 0x1725e0: 0xc05e8be
    ctx->pc = 0x1725E0u;
    SET_GPR_U32(ctx, 31, 0x1725E8u);
    ctx->pc = 0x17A2F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_ExecServer_0x17a2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1725E8u; }
        else if (ctx->pc != 0x1725E8u) { ctx->pc = 0x1725E8u; }
    }
    if (ctx->pc != 0x1725E8u) { return; }
    ctx->pc = 0x1725E8u;
    // 0x1725e8: 0xdfbf0030
    ctx->pc = 0x1725e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1725ec: 0xdfb20020
    ctx->pc = 0x1725ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1725f0: 0xdfb10010
    ctx->pc = 0x1725f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1725f4: 0xdfb00000
    ctx->pc = 0x1725f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1725f8: 0xaf808244
    ctx->pc = 0x1725f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935108), GPR_U32(ctx, 0));
    // 0x1725fc: 0xaf808230
    ctx->pc = 0x1725fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935088), GPR_U32(ctx, 0));
    // 0x172600: 0x805a4f0
    ctx->pc = 0x172600u;
    ctx->pc = 0x172604u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x1693C0u;
    ADXCRS_Unlock_0x1693c0(rdram, ctx, runtime); return;
    ctx->pc = 0x172608u;
}
