#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXT_Init
// Address: 0x16c4a0 - 0x16c560
void ADXT_Init_0x16c4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXT_Init");
    ctx->pc = 0x16c4a0u;

    // 0x16c4a0: 0x27bdfff0
    ctx->pc = 0x16c4a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c4a4: 0x8f828114
    ctx->pc = 0x16c4a4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934804)));
    // 0x16c4a8: 0x14400028
    ctx->pc = 0x16C4A8u;
    {
        const bool branch_taken_0x16c4a8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16C4ACu;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x16c4a8) {
            ctx->pc = 0x16C54Cu;
            goto label_16c54c;
        }
    }
    ctx->pc = 0x16C4B0u;
    // 0x16c4b0: 0xc05a4e2
    ctx->pc = 0x16C4B0u;
    SET_GPR_U32(ctx, 31, 0x16C4B8u);
    ctx->pc = 0x169388u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Init_0x169388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C4B8u; }
        else if (ctx->pc != 0x16C4B8u) { ctx->pc = 0x16C4B8u; }
    }
    if (ctx->pc != 0x16C4B8u) { return; }
    ctx->pc = 0x16C4B8u;
    // 0x16c4b8: 0xc05a4e4
    ctx->pc = 0x16C4B8u;
    SET_GPR_U32(ctx, 31, 0x16C4C0u);
    ctx->pc = 0x169390u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Lock_0x169390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C4C0u; }
        else if (ctx->pc != 0x16C4C0u) { ctx->pc = 0x16C4C0u; }
    }
    if (ctx->pc != 0x16C4C0u) { return; }
    ctx->pc = 0x16C4C0u;
    // 0x16c4c0: 0xc05f2ca
    ctx->pc = 0x16C4C0u;
    SET_GPR_U32(ctx, 31, 0x16C4C8u);
    ctx->pc = 0x17CB28u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJUNI_Init_0x17cb28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C4C8u; }
        else if (ctx->pc != 0x16C4C8u) { ctx->pc = 0x16C4C8u; }
    }
    if (ctx->pc != 0x16C4C8u) { return; }
    ctx->pc = 0x16C4C8u;
    // 0x16c4c8: 0xc05f10c
    ctx->pc = 0x16C4C8u;
    SET_GPR_U32(ctx, 31, 0x16C4D0u);
    ctx->pc = 0x17C430u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJRBF_Init_0x17c430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C4D0u; }
        else if (ctx->pc != 0x16C4D0u) { ctx->pc = 0x16C4D0u; }
    }
    if (ctx->pc != 0x16C4D0u) { return; }
    ctx->pc = 0x16C4D0u;
    // 0x16c4d0: 0xc05efd0
    ctx->pc = 0x16C4D0u;
    SET_GPR_U32(ctx, 31, 0x16C4D8u);
    ctx->pc = 0x17BF40u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJMEM_Init_0x17bf40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C4D8u; }
        else if (ctx->pc != 0x16C4D8u) { ctx->pc = 0x16C4D8u; }
    }
    if (ctx->pc != 0x16C4D8u) { return; }
    ctx->pc = 0x16C4D8u;
    // 0x16c4d8: 0xc05a836
    ctx->pc = 0x16C4D8u;
    SET_GPR_U32(ctx, 31, 0x16C4E0u);
    ctx->pc = 0x16A0D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_Init_0x16a0d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C4E0u; }
        else if (ctx->pc != 0x16C4E0u) { ctx->pc = 0x16C4E0u; }
    }
    if (ctx->pc != 0x16C4E0u) { return; }
    ctx->pc = 0x16C4E0u;
    // 0x16c4e0: 0xc05c19c
    ctx->pc = 0x16C4E0u;
    SET_GPR_U32(ctx, 31, 0x16C4E8u);
    ctx->pc = 0x170670u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Init_0x170670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C4E8u; }
        else if (ctx->pc != 0x16C4E8u) { ctx->pc = 0x16C4E8u; }
    }
    if (ctx->pc != 0x16C4E8u) { return; }
    ctx->pc = 0x16C4E8u;
    // 0x16c4e8: 0xc05b704
    ctx->pc = 0x16C4E8u;
    SET_GPR_U32(ctx, 31, 0x16C4F0u);
    ctx->pc = 0x16DC10u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSJD_Init_0x16dc10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C4F0u; }
        else if (ctx->pc != 0x16C4F0u) { ctx->pc = 0x16C4F0u; }
    }
    if (ctx->pc != 0x16C4F0u) { return; }
    ctx->pc = 0x16C4F0u;
    // 0x16c4f0: 0xc05a8ec
    ctx->pc = 0x16C4F0u;
    SET_GPR_U32(ctx, 31, 0x16C4F8u);
    ctx->pc = 0x16A3B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Init_0x16a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C4F8u; }
        else if (ctx->pc != 0x16C4F8u) { ctx->pc = 0x16C4F8u; }
    }
    if (ctx->pc != 0x16C4F8u) { return; }
    ctx->pc = 0x16C4F8u;
    // 0x16c4f8: 0xc05b672
    ctx->pc = 0x16C4F8u;
    SET_GPR_U32(ctx, 31, 0x16C500u);
    ctx->pc = 0x16D9C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXRNA_Init_0x16d9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C500u; }
        else if (ctx->pc != 0x16C500u) { ctx->pc = 0x16C500u; }
    }
    if (ctx->pc != 0x16C500u) { return; }
    ctx->pc = 0x16C500u;
    // 0x16c500: 0x3c040023
    ctx->pc = 0x16c500u;
    SET_GPR_U32(ctx, 4, ((uint32_t)35 << 16));
    // 0x16c504: 0x282d
    ctx->pc = 0x16c504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c508: 0x2484dd60
    ctx->pc = 0x16c508u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294958432));
    // 0x16c50c: 0xc050cfe
    ctx->pc = 0x16C50Cu;
    SET_GPR_U32(ctx, 31, 0x16C514u);
    ctx->pc = 0x16C510u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1312));
    ctx->pc = 0x1433F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x1433f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C514u; }
        else if (ctx->pc != 0x16C514u) { ctx->pc = 0x16C514u; }
    }
    if (ctx->pc != 0x16C514u) { return; }
    ctx->pc = 0x16C514u;
    // 0x16c514: 0xc05e9e4
    ctx->pc = 0x16C514u;
    SET_GPR_U32(ctx, 31, 0x16C51Cu);
    ctx->pc = 0x17A790u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_Init_0x17a790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C51Cu; }
        else if (ctx->pc != 0x16C51Cu) { ctx->pc = 0x16C51Cu; }
    }
    if (ctx->pc != 0x16C51Cu) { return; }
    ctx->pc = 0x16C51Cu;
    // 0x16c51c: 0x8f83811c
    ctx->pc = 0x16c51cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294934812)));
    // 0x16c520: 0x24020001
    ctx->pc = 0x16c520u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c524: 0x14620006
    ctx->pc = 0x16C524u;
    {
        const bool branch_taken_0x16c524 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x16C528u;
        SET_GPR_U32(ctx, 5, ((uint32_t)23 << 16));
        if (branch_taken_0x16c524) {
            ctx->pc = 0x16C540u;
            goto label_16c540;
        }
    }
    ctx->pc = 0x16C52Cu;
    // 0x16c52c: 0x24040002
    ctx->pc = 0x16c52cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x16c530: 0x24a5d6b8
    ctx->pc = 0x16c530u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294956728));
    // 0x16c534: 0xc05f7ca
    ctx->pc = 0x16C534u;
    SET_GPR_U32(ctx, 31, 0x16C53Cu);
    ctx->pc = 0x16C538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17DF28u;
    {
        const uint32_t __entryPc = ctx->pc;
        SVM_SetCbSvr_0x17df28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C53Cu; }
        else if (ctx->pc != 0x16C53Cu) { ctx->pc = 0x16C53Cu; }
    }
    if (ctx->pc != 0x16C53Cu) { return; }
    ctx->pc = 0x16C53Cu;
    // 0x16c53c: 0xaf828118
    ctx->pc = 0x16c53cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934808), GPR_U32(ctx, 2));
label_16c540:
    { static int _n=0; if (++_n<=50 || (_n%10000)==0) std::cerr << "[ADXT_Init] loop_16c540 (n=" << _n << ")\n"; }
    // 0x16c540: 0xc05a4f0
    ctx->pc = 0x16C540u;
    SET_GPR_U32(ctx, 31, 0x16C548u);
    ctx->pc = 0x16C544u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934816), GPR_U32(ctx, 0));
    ctx->pc = 0x1693C0u;
    {
        // Preserve $gp (r28): ADXCRS_Unlock -> SVM_Unlock may invoke callbacks that corrupt it
        const uint32_t saved_gp = GPR_U32(ctx, 28);
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Unlock_0x1693c0(rdram, ctx, runtime);
        SET_GPR_U32(ctx, 28, saved_gp);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16C548u; }
        else if (ctx->pc != 0x16C548u) { ctx->pc = 0x16C548u; }
    }
    if (ctx->pc != 0x16C548u) { return; }
    ctx->pc = 0x16C548u;
    // 0x16c548: 0x8f828114
    ctx->pc = 0x16c548u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294934804)));
label_16c54c:
    { static int _n=0; if (++_n<=50 || (_n%10000)==0) std::cerr << "[ADXT_Init] loop_16c54c (n=" << _n << ")\n"; }
    // 0x16c54c: 0x24420001
    ctx->pc = 0x16c54cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x16c550: 0xdfbf0000
    ctx->pc = 0x16c550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c554: 0xaf828114
    ctx->pc = 0x16c554u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934804), GPR_U32(ctx, 2));
    // 0x16c558: 0x3e00008
    ctx->pc = 0x16C558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C55Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16C540u: goto label_16c540;
            case 0x16C54Cu: goto label_16c54c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16C560u;
}
