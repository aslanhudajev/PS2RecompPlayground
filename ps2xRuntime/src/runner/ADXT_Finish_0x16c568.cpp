#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_Finish
// Address: 0x16c568 - 0x16c610
void ADXT_Finish_0x16c568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_Finish");


    ctx->pc = 0x16c568u;

    // 0x16c568: 0x8f828114
    ctx->pc = 0x16c568u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934804)));
    // 0x16c56c: 0x27bdfff0
    ctx->pc = 0x16c56cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c570: 0xffbf0000
    ctx->pc = 0x16c570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16c574: 0x2442ffff
    ctx->pc = 0x16c574u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16c578: 0x14400022
    ctx->pc = 0x16C578u;
    {
        const bool branch_taken_0x16c578 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16C57Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934804), GPR_U32(ctx, 2));
        if (branch_taken_0x16c578) {
            ctx->pc = 0x16C604u;
            goto label_16c604;
        }
    }
    ctx->pc = 0x16C580u;
    // 0x16c580: 0xc05a4e4
    ctx->pc = 0x16C580u;
    SET_GPR_U32(ctx, 31, 0x16C588u);
    ctx->pc = 0x16C584u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935176), GPR_U32(ctx, 0));
    ctx->pc = 0x169390u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Lock_0x169390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C588u; }
        else if (ctx->pc != 0x16C588u) { ctx->pc = 0x16C588u; }
    }
    if (ctx->pc != 0x16C588u) { return; }
    ctx->pc = 0x16C588u;
    // 0x16c588: 0x8f858118
    ctx->pc = 0x16c588u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294934808)));
    // 0x16c58c: 0xc05f7f6
    ctx->pc = 0x16C58Cu;
    SET_GPR_U32(ctx, 31, 0x16C594u);
    ctx->pc = 0x16C590u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x17DFD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_DelCbSvr_0x17dfd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C594u; }
        else if (ctx->pc != 0x16C594u) { ctx->pc = 0x16C594u; }
    }
    if (ctx->pc != 0x16C594u) { return; }
    ctx->pc = 0x16C594u;
    // 0x16c594: 0xc05f942
    ctx->pc = 0x16C594u;
    SET_GPR_U32(ctx, 31, 0x16C59Cu);
    ctx->pc = 0x17E508u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_Finish_0x17e508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C59Cu; }
        else if (ctx->pc != 0x16C59Cu) { ctx->pc = 0x16C59Cu; }
    }
    if (ctx->pc != 0x16C59Cu) { return; }
    ctx->pc = 0x16C59Cu;
    // 0x16c59c: 0xc05e9fe
    ctx->pc = 0x16C59Cu;
    SET_GPR_U32(ctx, 31, 0x16C5A4u);
    ctx->pc = 0x17A7F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_Finish_0x17a7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C5A4u; }
        else if (ctx->pc != 0x16C5A4u) { ctx->pc = 0x16C5A4u; }
    }
    if (ctx->pc != 0x16C5A4u) { return; }
    ctx->pc = 0x16C5A4u;
    // 0x16c5a4: 0xc05a4f0
    ctx->pc = 0x16C5A4u;
    SET_GPR_U32(ctx, 31, 0x16C5ACu);
    ctx->pc = 0x1693C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Unlock_0x1693c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C5ACu; }
        else if (ctx->pc != 0x16C5ACu) { ctx->pc = 0x16C5ACu; }
    }
    if (ctx->pc != 0x16C5ACu) { return; }
    ctx->pc = 0x16C5ACu;
    // 0x16c5ac: 0xc05b674
    ctx->pc = 0x16C5ACu;
    SET_GPR_U32(ctx, 31, 0x16C5B4u);
    ctx->pc = 0x16D9D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXRNA_Finish_0x16d9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C5B4u; }
        else if (ctx->pc != 0x16C5B4u) { ctx->pc = 0x16C5B4u; }
    }
    if (ctx->pc != 0x16C5B4u) { return; }
    ctx->pc = 0x16C5B4u;
    // 0x16c5b4: 0xc05a4e4
    ctx->pc = 0x16C5B4u;
    SET_GPR_U32(ctx, 31, 0x16C5BCu);
    ctx->pc = 0x169390u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Lock_0x169390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C5BCu; }
        else if (ctx->pc != 0x16C5BCu) { ctx->pc = 0x16C5BCu; }
    }
    if (ctx->pc != 0x16C5BCu) { return; }
    ctx->pc = 0x16C5BCu;
    // 0x16c5bc: 0xc05a91c
    ctx->pc = 0x16C5BCu;
    SET_GPR_U32(ctx, 31, 0x16C5C4u);
    ctx->pc = 0x16A470u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Finish_0x16a470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C5C4u; }
        else if (ctx->pc != 0x16C5C4u) { ctx->pc = 0x16C5C4u; }
    }
    if (ctx->pc != 0x16C5C4u) { return; }
    ctx->pc = 0x16C5C4u;
    // 0x16c5c4: 0xc05b710
    ctx->pc = 0x16C5C4u;
    SET_GPR_U32(ctx, 31, 0x16C5CCu);
    ctx->pc = 0x16DC40u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_Finish_0x16dc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C5CCu; }
        else if (ctx->pc != 0x16C5CCu) { ctx->pc = 0x16C5CCu; }
    }
    if (ctx->pc != 0x16C5CCu) { return; }
    ctx->pc = 0x16C5CCu;
    // 0x16c5cc: 0xc05c1aa
    ctx->pc = 0x16C5CCu;
    SET_GPR_U32(ctx, 31, 0x16C5D4u);
    ctx->pc = 0x1706A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Finish_0x1706a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C5D4u; }
        else if (ctx->pc != 0x16C5D4u) { ctx->pc = 0x16C5D4u; }
    }
    if (ctx->pc != 0x16C5D4u) { return; }
    ctx->pc = 0x16C5D4u;
    // 0x16c5d4: 0xc05a842
    ctx->pc = 0x16C5D4u;
    SET_GPR_U32(ctx, 31, 0x16C5DCu);
    ctx->pc = 0x16A108u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_Finish_0x16a108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C5DCu; }
        else if (ctx->pc != 0x16C5DCu) { ctx->pc = 0x16C5DCu; }
    }
    if (ctx->pc != 0x16C5DCu) { return; }
    ctx->pc = 0x16C5DCu;
    // 0x16c5dc: 0xc05efe0
    ctx->pc = 0x16C5DCu;
    SET_GPR_U32(ctx, 31, 0x16C5E4u);
    ctx->pc = 0x17BF80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJMEM_Finish_0x17bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C5E4u; }
        else if (ctx->pc != 0x16C5E4u) { ctx->pc = 0x16C5E4u; }
    }
    if (ctx->pc != 0x16C5E4u) { return; }
    ctx->pc = 0x16C5E4u;
    // 0x16c5e4: 0xc05f11c
    ctx->pc = 0x16C5E4u;
    SET_GPR_U32(ctx, 31, 0x16C5ECu);
    ctx->pc = 0x17C470u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJRBF_Finish_0x17c470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C5ECu; }
        else if (ctx->pc != 0x16C5ECu) { ctx->pc = 0x16C5ECu; }
    }
    if (ctx->pc != 0x16C5ECu) { return; }
    ctx->pc = 0x16C5ECu;
    // 0x16c5ec: 0xc05f2da
    ctx->pc = 0x16C5ECu;
    SET_GPR_U32(ctx, 31, 0x16C5F4u);
    ctx->pc = 0x17CB68u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJUNI_Finish_0x17cb68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C5F4u; }
        else if (ctx->pc != 0x16C5F4u) { ctx->pc = 0x16C5F4u; }
    }
    if (ctx->pc != 0x16C5F4u) { return; }
    ctx->pc = 0x16C5F4u;
    // 0x16c5f4: 0xc05a4f0
    ctx->pc = 0x16C5F4u;
    SET_GPR_U32(ctx, 31, 0x16C5FCu);
    ctx->pc = 0x1693C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Unlock_0x1693c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C5FCu; }
        else if (ctx->pc != 0x16C5FCu) { ctx->pc = 0x16C5FCu; }
    }
    if (ctx->pc != 0x16C5FCu) { return; }
    ctx->pc = 0x16C5FCu;
    // 0x16c5fc: 0x24020001
    ctx->pc = 0x16c5fcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c600: 0xaf828288
    ctx->pc = 0x16c600u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935176), GPR_U32(ctx, 2));
label_16c604:
    // 0x16c604: 0xdfbf0000
    ctx->pc = 0x16c604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c608: 0x3e00008
    ctx->pc = 0x16C608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C60Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C604u: goto label_16c604;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16C610u;
}
