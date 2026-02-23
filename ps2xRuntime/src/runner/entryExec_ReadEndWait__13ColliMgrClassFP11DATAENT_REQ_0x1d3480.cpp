#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryExec_ReadEndWait__13ColliMgrClassFP11DATAENT_REQ
// Address: 0x1d3480 - 0x1d3564
void entryExec_ReadEndWait__13ColliMgrClassFP11DATAENT_REQ_0x1d3480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryExec_ReadEndWait__13ColliMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1d3480u;

    // 0x1d3480: 0x27bdffc0
    ctx->pc = 0x1d3480u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d3484: 0x7fbf0030
    ctx->pc = 0x1d3484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1d3488: 0x7fb20020
    ctx->pc = 0x1d3488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d348c: 0x7fb10010
    ctx->pc = 0x1d348cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d3490: 0x7fb00000
    ctx->pc = 0x1d3490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d3494: 0x3c010050
    ctx->pc = 0x1d3494u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1d3498: 0x8ca30008
    ctx->pc = 0x1d3498u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1d349c: 0x8c240c8c
    ctx->pc = 0x1d349cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3212)));
    // 0x1d34a0: 0x70008628
    ctx->pc = 0x1d34a0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d34a4: 0x24020001
    ctx->pc = 0x1d34a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d34a8: 0x70a09628
    ctx->pc = 0x1d34a8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1d34ac: 0x70008e28
    ctx->pc = 0x1d34acu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d34b0: 0xc05b018
    ctx->pc = 0x1D34B0u;
    SET_GPR_U32(ctx, 31, 0x1D34B8u);
    ctx->pc = 0x1D34B4u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 2));
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D34B8u; }
        else if (ctx->pc != 0x1D34B8u) { ctx->pc = 0x1D34B8u; }
    }
    if (ctx->pc != 0x1D34B8u) { return; }
    ctx->pc = 0x1D34B8u;
    // 0x1d34b8: 0x24030004
    ctx->pc = 0x1d34b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d34bc: 0x14430013
    ctx->pc = 0x1D34BCu;
    {
        const bool branch_taken_0x1d34bc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1D34C0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1d34bc) {
            ctx->pc = 0x1D350Cu;
            goto label_1d350c;
        }
    }
    ctx->pc = 0x1D34C4u;
    // 0x1d34c4: 0x8f838d10
    ctx->pc = 0x1d34c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1d34c8: 0x3c010030
    ctx->pc = 0x1d34c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1d34cc: 0x8c227c90
    ctx->pc = 0x1d34ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 31888)));
    // 0x1d34d0: 0x24630001
    ctx->pc = 0x1d34d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d34d4: 0xaf838d10
    ctx->pc = 0x1d34d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937872), GPR_U32(ctx, 3));
    // 0x1d34d8: 0x4410003
    ctx->pc = 0x1D34D8u;
    {
        const bool branch_taken_0x1d34d8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D34DCu;
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 11));
        if (branch_taken_0x1d34d8) {
            ctx->pc = 0x1D34E8u;
            goto label_1d34e8;
        }
    }
    ctx->pc = 0x1D34E0u;
    // 0x1d34e0: 0x244207ff
    ctx->pc = 0x1d34e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2047));
    // 0x1d34e4: 0x22ac3
    ctx->pc = 0x1d34e4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 11));
label_1d34e8:
    // 0x1d34e8: 0x3c010030
    ctx->pc = 0x1d34e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1d34ec: 0x8c267c88
    ctx->pc = 0x1d34ecu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 31880)));
    // 0x1d34f0: 0x3c010050
    ctx->pc = 0x1d34f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1d34f4: 0xc05aeba
    ctx->pc = 0x1D34F4u;
    SET_GPR_U32(ctx, 31, 0x1D34FCu);
    ctx->pc = 0x1D34F8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3212)));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D34FCu; }
        else if (ctx->pc != 0x1D34FCu) { ctx->pc = 0x1D34FCu; }
    }
    if (ctx->pc != 0x1D34FCu) { return; }
    ctx->pc = 0x1D34FCu;
    // 0x1d34fc: 0x3c010050
    ctx->pc = 0x1d34fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1d3500: 0xc05b018
    ctx->pc = 0x1D3500u;
    SET_GPR_U32(ctx, 31, 0x1D3508u);
    ctx->pc = 0x1D3504u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3212)));
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3508u; }
        else if (ctx->pc != 0x1D3508u) { ctx->pc = 0x1D3508u; }
    }
    if (ctx->pc != 0x1D3508u) { return; }
    ctx->pc = 0x1D3508u;
    // 0x1d3508: 0x24030001
    ctx->pc = 0x1d3508u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1d350c:
    // 0x1d350c: 0x50430005
    ctx->pc = 0x1D350Cu;
    {
        const bool branch_taken_0x1d350c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1d350c) {
            ctx->pc = 0x1D3510u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x1D3524u;
            goto label_1d3524;
        }
    }
    ctx->pc = 0x1D3514u;
    // 0x1d3514: 0x24030003
    ctx->pc = 0x1d3514u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d3518: 0x14430002
    ctx->pc = 0x1D3518u;
    {
        const bool branch_taken_0x1d3518 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1d3518) {
            ctx->pc = 0x1D3524u;
            goto label_1d3524;
        }
    }
    ctx->pc = 0x1D3520u;
    // 0x1d3520: 0x24110001
    ctx->pc = 0x1d3520u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
label_1d3524:
    // 0x1d3524: 0x12200008
    ctx->pc = 0x1D3524u;
    {
        const bool branch_taken_0x1d3524 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x1D3528u;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x1d3524) {
            ctx->pc = 0x1D3548u;
            goto label_1d3548;
        }
    }
    ctx->pc = 0x1D352Cu;
    // 0x1d352c: 0x101900
    ctx->pc = 0x1d352cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 16), 4));
    // 0x1d3530: 0x2442fc64
    ctx->pc = 0x1d3530u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294966372));
    // 0x1d3534: 0x24040001
    ctx->pc = 0x1d3534u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3538: 0x431021
    ctx->pc = 0x1d3538u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d353c: 0xac440000
    ctx->pc = 0x1d353cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1d3540: 0x24020003
    ctx->pc = 0x1d3540u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d3544: 0xae42000c
    ctx->pc = 0x1d3544u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_1d3548:
    // 0x1d3548: 0x7bbf0030
    ctx->pc = 0x1d3548u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d354c: 0x7bb20020
    ctx->pc = 0x1d354cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3550: 0x7bb10010
    ctx->pc = 0x1d3550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d3554: 0x7bb00000
    ctx->pc = 0x1d3554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3558: 0x24020001
    ctx->pc = 0x1d3558u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d355c: 0x3e00008
    ctx->pc = 0x1D355Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3560u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D34E8u: goto label_1d34e8;
            case 0x1D350Cu: goto label_1d350c;
            case 0x1D3524u: goto label_1d3524;
            case 0x1D3548u: goto label_1d3548;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D3564u;
}
