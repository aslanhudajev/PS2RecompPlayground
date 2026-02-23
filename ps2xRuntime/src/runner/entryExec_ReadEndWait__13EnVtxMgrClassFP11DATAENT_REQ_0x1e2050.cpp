#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryExec_ReadEndWait__13EnVtxMgrClassFP11DATAENT_REQ
// Address: 0x1e2050 - 0x1e212c
void entryExec_ReadEndWait__13EnVtxMgrClassFP11DATAENT_REQ_0x1e2050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryExec_ReadEndWait__13EnVtxMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1e2050u;

    // 0x1e2050: 0x27bdffc0
    ctx->pc = 0x1e2050u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e2054: 0x7fbf0030
    ctx->pc = 0x1e2054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x1e2058: 0x7fb20020
    ctx->pc = 0x1e2058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e205c: 0x7fb10010
    ctx->pc = 0x1e205cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e2060: 0x7fb00000
    ctx->pc = 0x1e2060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e2064: 0x3c010050
    ctx->pc = 0x1e2064u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e2068: 0x8cb00008
    ctx->pc = 0x1e2068u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e206c: 0x8c240c84
    ctx->pc = 0x1e206cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3204)));
    // 0x1e2070: 0x70a09628
    ctx->pc = 0x1e2070u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e2074: 0xc05b018
    ctx->pc = 0x1E2074u;
    SET_GPR_U32(ctx, 31, 0x1E207Cu);
    ctx->pc = 0x1E2078u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E207Cu; }
        else if (ctx->pc != 0x1E207Cu) { ctx->pc = 0x1E207Cu; }
    }
    if (ctx->pc != 0x1E207Cu) { return; }
    ctx->pc = 0x1E207Cu;
    // 0x1e207c: 0x24030004
    ctx->pc = 0x1e207cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e2080: 0x14430013
    ctx->pc = 0x1E2080u;
    {
        const bool branch_taken_0x1e2080 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1E2084u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1e2080) {
            ctx->pc = 0x1E20D0u;
            goto label_1e20d0;
        }
    }
    ctx->pc = 0x1E2088u;
    // 0x1e2088: 0x8f838d10
    ctx->pc = 0x1e2088u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1e208c: 0x3c010030
    ctx->pc = 0x1e208cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1e2090: 0x8c227ca0
    ctx->pc = 0x1e2090u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 1), 31904)));
    // 0x1e2094: 0x24630001
    ctx->pc = 0x1e2094u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e2098: 0xaf838d10
    ctx->pc = 0x1e2098u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937872), GPR_U32(ctx, 3));
    // 0x1e209c: 0x4410003
    ctx->pc = 0x1E209Cu;
    {
        const bool branch_taken_0x1e209c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E20A0u;
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 11));
        if (branch_taken_0x1e209c) {
            ctx->pc = 0x1E20ACu;
            goto label_1e20ac;
        }
    }
    ctx->pc = 0x1E20A4u;
    // 0x1e20a4: 0x244207ff
    ctx->pc = 0x1e20a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 2047));
    // 0x1e20a8: 0x22ac3
    ctx->pc = 0x1e20a8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 11));
label_1e20ac:
    // 0x1e20ac: 0x3c010030
    ctx->pc = 0x1e20acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1e20b0: 0x8c267c98
    ctx->pc = 0x1e20b0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 1), 31896)));
    // 0x1e20b4: 0x3c010050
    ctx->pc = 0x1e20b4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e20b8: 0xc05aeba
    ctx->pc = 0x1E20B8u;
    SET_GPR_U32(ctx, 31, 0x1E20C0u);
    ctx->pc = 0x1E20BCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3204)));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E20C0u; }
        else if (ctx->pc != 0x1E20C0u) { ctx->pc = 0x1E20C0u; }
    }
    if (ctx->pc != 0x1E20C0u) { return; }
    ctx->pc = 0x1E20C0u;
    // 0x1e20c0: 0x3c010050
    ctx->pc = 0x1e20c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e20c4: 0xc05b018
    ctx->pc = 0x1E20C4u;
    SET_GPR_U32(ctx, 31, 0x1E20CCu);
    ctx->pc = 0x1E20C8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3204)));
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E20CCu; }
        else if (ctx->pc != 0x1E20CCu) { ctx->pc = 0x1E20CCu; }
    }
    if (ctx->pc != 0x1E20CCu) { return; }
    ctx->pc = 0x1E20CCu;
    // 0x1e20cc: 0x24030001
    ctx->pc = 0x1e20ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_1e20d0:
    // 0x1e20d0: 0x50430005
    ctx->pc = 0x1E20D0u;
    {
        const bool branch_taken_0x1e20d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1e20d0) {
            ctx->pc = 0x1E20D4u;
            SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
            ctx->pc = 0x1E20E8u;
            goto label_1e20e8;
        }
    }
    ctx->pc = 0x1E20D8u;
    // 0x1e20d8: 0x24030003
    ctx->pc = 0x1e20d8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e20dc: 0x14430009
    ctx->pc = 0x1E20DCu;
    {
        const bool branch_taken_0x1e20dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x1e20dc) {
            ctx->pc = 0x1E2104u;
            goto label_1e2104;
        }
    }
    ctx->pc = 0x1E20E4u;
    // 0x1e20e4: 0x101080
    ctx->pc = 0x1e20e4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_1e20e8:
    // 0x1e20e8: 0x501021
    ctx->pc = 0x1e20e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1e20ec: 0x21880
    ctx->pc = 0x1e20ecu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e20f0: 0x3c020050
    ctx->pc = 0x1e20f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e20f4: 0x244202e8
    ctx->pc = 0x1e20f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 744));
    // 0x1e20f8: 0x24110001
    ctx->pc = 0x1e20f8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e20fc: 0x431021
    ctx->pc = 0x1e20fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e2100: 0xac510000
    ctx->pc = 0x1e2100u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_1e2104:
    // 0x1e2104: 0x12200002
    ctx->pc = 0x1E2104u;
    {
        const bool branch_taken_0x1e2104 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E2108u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1e2104) {
            ctx->pc = 0x1E2110u;
            goto label_1e2110;
        }
    }
    ctx->pc = 0x1E210Cu;
    // 0x1e210c: 0xae42000c
    ctx->pc = 0x1e210cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_1e2110:
    // 0x1e2110: 0x7bbf0030
    ctx->pc = 0x1e2110u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e2114: 0x7bb20020
    ctx->pc = 0x1e2114u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e2118: 0x7bb10010
    ctx->pc = 0x1e2118u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e211c: 0x7bb00000
    ctx->pc = 0x1e211cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2120: 0x24020001
    ctx->pc = 0x1e2120u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2124: 0x3e00008
    ctx->pc = 0x1E2124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2128u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E20ACu: goto label_1e20ac;
            case 0x1E20D0u: goto label_1e20d0;
            case 0x1E20E8u: goto label_1e20e8;
            case 0x1E2104u: goto label_1e2104;
            case 0x1E2110u: goto label_1e2110;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E212Cu;
}
