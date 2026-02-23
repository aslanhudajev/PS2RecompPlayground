#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryExec_STAT_01__13ClVtxMgrClassFv
// Address: 0x1d3040 - 0x1d30ec
void entryExec_STAT_01__13ClVtxMgrClassFv_0x1d3040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryExec_STAT_01__13ClVtxMgrClassFv");


    ctx->pc = 0x1d3040u;

    // 0x1d3040: 0x27bdffd0
    ctx->pc = 0x1d3040u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d3044: 0x7fbf0020
    ctx->pc = 0x1d3044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1d3048: 0x7fb10010
    ctx->pc = 0x1d3048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d304c: 0x7fb00000
    ctx->pc = 0x1d304cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d3050: 0x70808e28
    ctx->pc = 0x1d3050u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1d3054: 0x3c010050
    ctx->pc = 0x1d3054u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1d3058: 0x8c240c88
    ctx->pc = 0x1d3058u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3208)));
    // 0x1d305c: 0xc05b018
    ctx->pc = 0x1D305Cu;
    SET_GPR_U32(ctx, 31, 0x1D3064u);
    ctx->pc = 0x1D3060u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3064u; }
        else if (ctx->pc != 0x1D3064u) { ctx->pc = 0x1D3064u; }
    }
    if (ctx->pc != 0x1D3064u) { return; }
    ctx->pc = 0x1D3064u;
    // 0x1d3064: 0x24030004
    ctx->pc = 0x1d3064u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d3068: 0x1443000f
    ctx->pc = 0x1D3068u;
    {
        const bool branch_taken_0x1d3068 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1D306Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1d3068) {
            ctx->pc = 0x1D30A8u;
            goto label_1d30a8;
        }
    }
    ctx->pc = 0x1D3070u;
    // 0x1d3070: 0x3c010030
    ctx->pc = 0x1d3070u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1d3074: 0x8c267c78
    ctx->pc = 0x1d3074u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 31864)));
    // 0x1d3078: 0x8f828d10
    ctx->pc = 0x1d3078u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1d307c: 0x3c010050
    ctx->pc = 0x1d307cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1d3080: 0x8c240c88
    ctx->pc = 0x1d3080u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3208)));
    // 0x1d3084: 0x24420001
    ctx->pc = 0x1d3084u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d3088: 0x3c010030
    ctx->pc = 0x1d3088u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1d308c: 0x8c257c80
    ctx->pc = 0x1d308cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 1), 31872)));
    // 0x1d3090: 0xc05aeba
    ctx->pc = 0x1D3090u;
    SET_GPR_U32(ctx, 31, 0x1D3098u);
    ctx->pc = 0x1D3094u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937872), GPR_U32(ctx, 2));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3098u; }
        else if (ctx->pc != 0x1D3098u) { ctx->pc = 0x1D3098u; }
    }
    if (ctx->pc != 0x1D3098u) { return; }
    ctx->pc = 0x1D3098u;
    // 0x1d3098: 0x3c010050
    ctx->pc = 0x1d3098u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1d309c: 0xc05b018
    ctx->pc = 0x1D309Cu;
    SET_GPR_U32(ctx, 31, 0x1D30A4u);
    ctx->pc = 0x1D30A0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3208)));
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D30A4u; }
        else if (ctx->pc != 0x1D30A4u) { ctx->pc = 0x1D30A4u; }
    }
    if (ctx->pc != 0x1D30A4u) { return; }
    ctx->pc = 0x1D30A4u;
    // 0x1d30a4: 0x24030001
    ctx->pc = 0x1d30a4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1d30a8:
    // 0x1d30a8: 0x50430005
    ctx->pc = 0x1D30A8u;
    {
        const bool branch_taken_0x1d30a8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1d30a8) {
            ctx->pc = 0x1D30ACu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x1D30C0u;
            goto label_1d30c0;
        }
    }
    ctx->pc = 0x1D30B0u;
    // 0x1d30b0: 0x24030003
    ctx->pc = 0x1d30b0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d30b4: 0x14430002
    ctx->pc = 0x1D30B4u;
    {
        const bool branch_taken_0x1d30b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1d30b4) {
            ctx->pc = 0x1D30C0u;
            goto label_1d30c0;
        }
    }
    ctx->pc = 0x1D30BCu;
    // 0x1d30bc: 0x24100001
    ctx->pc = 0x1d30bcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
label_1d30c0:
    // 0x1d30c0: 0x12000004
    ctx->pc = 0x1D30C0u;
    {
        const bool branch_taken_0x1d30c0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        if (branch_taken_0x1d30c0) {
            ctx->pc = 0x1D30D4u;
            goto label_1d30d4;
        }
    }
    ctx->pc = 0x1D30C8u;
    // 0x1d30c8: 0x8e220000
    ctx->pc = 0x1d30c8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d30cc: 0x24030003
    ctx->pc = 0x1d30ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d30d0: 0xac43000c
    ctx->pc = 0x1d30d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_1d30d4:
    // 0x1d30d4: 0x7bbf0020
    ctx->pc = 0x1d30d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d30d8: 0x7bb10010
    ctx->pc = 0x1d30d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d30dc: 0x7bb00000
    ctx->pc = 0x1d30dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d30e0: 0x24020001
    ctx->pc = 0x1d30e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d30e4: 0x3e00008
    ctx->pc = 0x1D30E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D30E8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D30A8u: goto label_1d30a8;
            case 0x1D30C0u: goto label_1d30c0;
            case 0x1D30D4u: goto label_1d30d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D30ECu;
}
