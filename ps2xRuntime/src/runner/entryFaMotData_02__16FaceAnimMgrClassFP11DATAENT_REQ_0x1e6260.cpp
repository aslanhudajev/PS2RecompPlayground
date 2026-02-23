#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryFaMotData_02__16FaceAnimMgrClassFP11DATAENT_REQ
// Address: 0x1e6260 - 0x1e632c
void entryFaMotData_02__16FaceAnimMgrClassFP11DATAENT_REQ_0x1e6260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryFaMotData_02__16FaceAnimMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1e6260u;

    // 0x1e6260: 0x27bdfff0
    ctx->pc = 0x1e6260u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e6264: 0x7fbf0000
    ctx->pc = 0x1e6264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1e6268: 0x3c010050
    ctx->pc = 0x1e6268u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e626c: 0xc05b018
    ctx->pc = 0x1E626Cu;
    SET_GPR_U32(ctx, 31, 0x1E6274u);
    ctx->pc = 0x1E6270u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3196)));
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6274u; }
        else if (ctx->pc != 0x1E6274u) { ctx->pc = 0x1E6274u; }
    }
    if (ctx->pc != 0x1E6274u) { return; }
    ctx->pc = 0x1E6274u;
    // 0x1e6274: 0x24030004
    ctx->pc = 0x1e6274u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e6278: 0x14430017
    ctx->pc = 0x1E6278u;
    {
        const bool branch_taken_0x1e6278 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1E627Cu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1e6278) {
            ctx->pc = 0x1E62D8u;
            goto label_1e62d8;
        }
    }
    ctx->pc = 0x1E6280u;
    // 0x1e6280: 0x8f858d10
    ctx->pc = 0x1e6280u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1e6284: 0x3c020027
    ctx->pc = 0x1e6284u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1e6288: 0x8f868b30
    ctx->pc = 0x1e6288u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x1e628c: 0x2444b7a4
    ctx->pc = 0x1e628cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294948772));
    // 0x1e6290: 0x8f838b34
    ctx->pc = 0x1e6290u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x1e6294: 0x3c010050
    ctx->pc = 0x1e6294u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e6298: 0x24a50001
    ctx->pc = 0x1e6298u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1e629c: 0xaf858d10
    ctx->pc = 0x1e629cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937872), GPR_U32(ctx, 5));
    // 0x1e62a0: 0x62840
    ctx->pc = 0x1e62a0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 1));
    // 0x1e62a4: 0xa62821
    ctx->pc = 0x1e62a4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1e62a8: 0x52880
    ctx->pc = 0x1e62a8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e62ac: 0x852021
    ctx->pc = 0x1e62acu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1e62b0: 0x8c850000
    ctx->pc = 0x1e62b0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e62b4: 0x2402ffc0
    ctx->pc = 0x1e62b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1e62b8: 0x2463003f
    ctx->pc = 0x1e62b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 63));
    // 0x1e62bc: 0x8c240c7c
    ctx->pc = 0x1e62bcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3196)));
    // 0x1e62c0: 0xc05aeba
    ctx->pc = 0x1E62C0u;
    SET_GPR_U32(ctx, 31, 0x1E62C8u);
    ctx->pc = 0x1E62C4u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E62C8u; }
        else if (ctx->pc != 0x1E62C8u) { ctx->pc = 0x1E62C8u; }
    }
    if (ctx->pc != 0x1E62C8u) { return; }
    ctx->pc = 0x1E62C8u;
    // 0x1e62c8: 0x3c010050
    ctx->pc = 0x1e62c8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e62cc: 0xc05b018
    ctx->pc = 0x1E62CCu;
    SET_GPR_U32(ctx, 31, 0x1E62D4u);
    ctx->pc = 0x1E62D0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3196)));
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E62D4u; }
        else if (ctx->pc != 0x1E62D4u) { ctx->pc = 0x1E62D4u; }
    }
    if (ctx->pc != 0x1E62D4u) { return; }
    ctx->pc = 0x1E62D4u;
    // 0x1e62d4: 0x24030003
    ctx->pc = 0x1e62d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
label_1e62d8:
    // 0x1e62d8: 0x10430003
    ctx->pc = 0x1E62D8u;
    {
        const bool branch_taken_0x1e62d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1E62DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1e62d8) {
            ctx->pc = 0x1E62E8u;
            goto label_1e62e8;
        }
    }
    ctx->pc = 0x1E62E0u;
    // 0x1e62e0: 0x10000010
    ctx->pc = 0x1E62E0u;
    {
        const bool branch_taken_0x1e62e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E62E4u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1e62e0) {
            ctx->pc = 0x1E6324u;
            goto label_1e6324;
        }
    }
    ctx->pc = 0x1E62E8u;
label_1e62e8:
    // 0x1e62e8: 0x8f848b30
    ctx->pc = 0x1e62e8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x1e62ec: 0x3c020050
    ctx->pc = 0x1e62ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e62f0: 0x24430a80
    ctx->pc = 0x1e62f0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 2688));
    // 0x1e62f4: 0x2402fffe
    ctx->pc = 0x1e62f4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1e62f8: 0x42080
    ctx->pc = 0x1e62f8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e62fc: 0x642021
    ctx->pc = 0x1e62fcu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e6300: 0x8c830000
    ctx->pc = 0x1e6300u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e6304: 0x14620003
    ctx->pc = 0x1E6304u;
    {
        const bool branch_taken_0x1e6304 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1e6304) {
            ctx->pc = 0x1E6314u;
            goto label_1e6314;
        }
    }
    ctx->pc = 0x1E630Cu;
    // 0x1e630c: 0x10000003
    ctx->pc = 0x1E630Cu;
    {
        const bool branch_taken_0x1e630c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E6310u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x1e630c) {
            ctx->pc = 0x1E631Cu;
            goto label_1e631c;
        }
    }
    ctx->pc = 0x1E6314u;
label_1e6314:
    // 0x1e6314: 0x8f828b34
    ctx->pc = 0x1e6314u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x1e6318: 0xac820000
    ctx->pc = 0x1e6318u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1e631c:
    // 0x1e631c: 0x2402ffff
    ctx->pc = 0x1e631cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e6320: 0x7bbf0000
    ctx->pc = 0x1e6320u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e6324:
    // 0x1e6324: 0x3e00008
    ctx->pc = 0x1E6324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6328u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E62D8u: goto label_1e62d8;
            case 0x1E62E8u: goto label_1e62e8;
            case 0x1E6314u: goto label_1e6314;
            case 0x1E631Cu: goto label_1e631c;
            case 0x1E6324u: goto label_1e6324;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E632Cu;
}
