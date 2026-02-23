#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PS2RNA_Finish
// Address: 0x17b380 - 0x17b3dc
void PS2RNA_Finish_0x17b380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PS2RNA_Finish");


    ctx->pc = 0x17b380u;

    // 0x17b380: 0x8f8282d0
    ctx->pc = 0x17b380u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x17b384: 0x27bdfff0
    ctx->pc = 0x17b384u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b388: 0xffbf0000
    ctx->pc = 0x17b388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b38c: 0x2442ffff
    ctx->pc = 0x17b38cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17b390: 0x1440000f
    ctx->pc = 0x17B390u;
    {
        const bool branch_taken_0x17b390 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17B394u;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935248), GPR_U32(ctx, 2));
        if (branch_taken_0x17b390) {
            ctx->pc = 0x17B3D0u;
            goto label_17b3d0;
        }
    }
    ctx->pc = 0x17B398u;
    // 0x17b398: 0xc05dc12
    ctx->pc = 0x17B398u;
    SET_GPR_U32(ctx, 31, 0x17B3A0u);
    ctx->pc = 0x17B39Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935264)));
    ctx->pc = 0x177048u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTX_Destroy_0x177048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B3A0u; }
        else if (ctx->pc != 0x17B3A0u) { ctx->pc = 0x17B3A0u; }
    }
    if (ctx->pc != 0x17B3A0u) { return; }
    ctx->pc = 0x17B3A0u;
    // 0x17b3a0: 0x8f8482d8
    ctx->pc = 0x17b3a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935256)));
    // 0x17b3a4: 0xc056e14
    ctx->pc = 0x17B3A4u;
    SET_GPR_U32(ctx, 31, 0x17B3ACu);
    ctx->pc = 0x17B3A8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935264), GPR_U32(ctx, 0));
    ctx->pc = 0x15B850u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceSifFreeIopHeap_0x15b850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B3ACu; }
        else if (ctx->pc != 0x17B3ACu) { ctx->pc = 0x17B3ACu; }
    }
    if (ctx->pc != 0x17B3ACu) { return; }
    ctx->pc = 0x17B3ACu;
    // 0x17b3ac: 0xc05ebb4
    ctx->pc = 0x17B3ACu;
    SET_GPR_U32(ctx, 31, 0x17B3B4u);
    ctx->pc = 0x17B3B0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935256), GPR_U32(ctx, 0));
    ctx->pc = 0x17AED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2rna_finish_psj_0x17aed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B3B4u; }
        else if (ctx->pc != 0x17B3B4u) { ctx->pc = 0x17B3B4u; }
    }
    if (ctx->pc != 0x17B3B4u) { return; }
    ctx->pc = 0x17B3B4u;
    // 0x17b3b4: 0xc05dcb4
    ctx->pc = 0x17B3B4u;
    SET_GPR_U32(ctx, 31, 0x17B3BCu);
    ctx->pc = 0x1772D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        DTX_Finish_0x1772d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B3BCu; }
        else if (ctx->pc != 0x17B3BCu) { ctx->pc = 0x17B3BCu; }
    }
    if (ctx->pc != 0x17B3BCu) { return; }
    ctx->pc = 0x17B3BCu;
    // 0x17b3bc: 0xc05f67e
    ctx->pc = 0x17B3BCu;
    SET_GPR_U32(ctx, 31, 0x17B3C4u);
    ctx->pc = 0x17D9F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJX_Finish_0x17d9f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B3C4u; }
        else if (ctx->pc != 0x17B3C4u) { ctx->pc = 0x17B3C4u; }
    }
    if (ctx->pc != 0x17B3C4u) { return; }
    ctx->pc = 0x17B3C4u;
    // 0x17b3c4: 0xdfbf0000
    ctx->pc = 0x17b3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b3c8: 0x805f5b2
    ctx->pc = 0x17B3C8u;
    ctx->pc = 0x17B3CCu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x17D6C8u;
    SJRMT_Finish_0x17d6c8(rdram, ctx, runtime); return;
    ctx->pc = 0x17B3D0u;
label_17b3d0:
    // 0x17b3d0: 0xdfbf0000
    ctx->pc = 0x17b3d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b3d4: 0x3e00008
    ctx->pc = 0x17B3D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B3D8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B3D0u: goto label_17b3d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17B3DCu;
}
