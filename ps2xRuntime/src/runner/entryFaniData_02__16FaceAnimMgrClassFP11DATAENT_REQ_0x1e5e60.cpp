#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryFaniData_02__16FaceAnimMgrClassFP11DATAENT_REQ
// Address: 0x1e5e60 - 0x1e5f34
void entryFaniData_02__16FaceAnimMgrClassFP11DATAENT_REQ_0x1e5e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryFaniData_02__16FaceAnimMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1e5e60u;

    // 0x1e5e60: 0x27bdfff0
    ctx->pc = 0x1e5e60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e5e64: 0x7fbf0000
    ctx->pc = 0x1e5e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1e5e68: 0x3c010050
    ctx->pc = 0x1e5e68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e5e6c: 0xc05b018
    ctx->pc = 0x1E5E6Cu;
    SET_GPR_U32(ctx, 31, 0x1E5E74u);
    ctx->pc = 0x1E5E70u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3192)));
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5E74u; }
        else if (ctx->pc != 0x1E5E74u) { ctx->pc = 0x1E5E74u; }
    }
    if (ctx->pc != 0x1E5E74u) { return; }
    ctx->pc = 0x1E5E74u;
    // 0x1e5e74: 0x24030004
    ctx->pc = 0x1e5e74u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e5e78: 0x14430017
    ctx->pc = 0x1E5E78u;
    {
        const bool branch_taken_0x1e5e78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        ctx->pc = 0x1E5E7Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1e5e78) {
            ctx->pc = 0x1E5ED8u;
            goto label_1e5ed8;
        }
    }
    ctx->pc = 0x1E5E80u;
    // 0x1e5e80: 0x8f858d10
    ctx->pc = 0x1e5e80u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x1e5e84: 0x3c020027
    ctx->pc = 0x1e5e84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1e5e88: 0x8f868b30
    ctx->pc = 0x1e5e88u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x1e5e8c: 0x2444b244
    ctx->pc = 0x1e5e8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294947396));
    // 0x1e5e90: 0x8f838b34
    ctx->pc = 0x1e5e90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x1e5e94: 0x3c010050
    ctx->pc = 0x1e5e94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e5e98: 0x24a50001
    ctx->pc = 0x1e5e98u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x1e5e9c: 0xaf858d10
    ctx->pc = 0x1e5e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937872), GPR_U32(ctx, 5));
    // 0x1e5ea0: 0x62840
    ctx->pc = 0x1e5ea0u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 6), 1));
    // 0x1e5ea4: 0xa62821
    ctx->pc = 0x1e5ea4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1e5ea8: 0x52880
    ctx->pc = 0x1e5ea8u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e5eac: 0x852021
    ctx->pc = 0x1e5eacu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1e5eb0: 0x8c850000
    ctx->pc = 0x1e5eb0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e5eb4: 0x2402ffc0
    ctx->pc = 0x1e5eb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1e5eb8: 0x2463003f
    ctx->pc = 0x1e5eb8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 63));
    // 0x1e5ebc: 0x8c240c78
    ctx->pc = 0x1e5ebcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3192)));
    // 0x1e5ec0: 0xc05aeba
    ctx->pc = 0x1E5EC0u;
    SET_GPR_U32(ctx, 31, 0x1E5EC8u);
    ctx->pc = 0x1E5EC4u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5EC8u; }
        else if (ctx->pc != 0x1E5EC8u) { ctx->pc = 0x1E5EC8u; }
    }
    if (ctx->pc != 0x1E5EC8u) { return; }
    ctx->pc = 0x1E5EC8u;
    // 0x1e5ec8: 0x3c010050
    ctx->pc = 0x1e5ec8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e5ecc: 0xc05b018
    ctx->pc = 0x1E5ECCu;
    SET_GPR_U32(ctx, 31, 0x1E5ED4u);
    ctx->pc = 0x1E5ED0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3192)));
    ctx->pc = 0x16C060u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_GetStat_0x16c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5ED4u; }
        else if (ctx->pc != 0x1E5ED4u) { ctx->pc = 0x1E5ED4u; }
    }
    if (ctx->pc != 0x1E5ED4u) { return; }
    ctx->pc = 0x1E5ED4u;
    // 0x1e5ed4: 0x24040001
    ctx->pc = 0x1e5ed4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_1e5ed8:
    // 0x1e5ed8: 0x10440005
    ctx->pc = 0x1E5ED8u;
    {
        const bool branch_taken_0x1e5ed8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        ctx->pc = 0x1E5EDCu;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1e5ed8) {
            ctx->pc = 0x1E5EF0u;
            goto label_1e5ef0;
        }
    }
    ctx->pc = 0x1E5EE0u;
    // 0x1e5ee0: 0x10430003
    ctx->pc = 0x1E5EE0u;
    {
        const bool branch_taken_0x1e5ee0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        ctx->pc = 0x1E5EE4u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x1e5ee0) {
            ctx->pc = 0x1E5EF0u;
            goto label_1e5ef0;
        }
    }
    ctx->pc = 0x1E5EE8u;
    // 0x1e5ee8: 0x10000010
    ctx->pc = 0x1E5EE8u;
    {
        const bool branch_taken_0x1e5ee8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E5EECu;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1e5ee8) {
            ctx->pc = 0x1E5F2Cu;
            goto label_1e5f2c;
        }
    }
    ctx->pc = 0x1E5EF0u;
label_1e5ef0:
    // 0x1e5ef0: 0x8f848b30
    ctx->pc = 0x1e5ef0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x1e5ef4: 0x3c020050
    ctx->pc = 0x1e5ef4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e5ef8: 0x244308b0
    ctx->pc = 0x1e5ef8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 2224));
    // 0x1e5efc: 0x2402fffe
    ctx->pc = 0x1e5efcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1e5f00: 0x42080
    ctx->pc = 0x1e5f00u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e5f04: 0x642021
    ctx->pc = 0x1e5f04u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e5f08: 0x8c830000
    ctx->pc = 0x1e5f08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e5f0c: 0x14620003
    ctx->pc = 0x1E5F0Cu;
    {
        const bool branch_taken_0x1e5f0c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x1e5f0c) {
            ctx->pc = 0x1E5F1Cu;
            goto label_1e5f1c;
        }
    }
    ctx->pc = 0x1E5F14u;
    // 0x1e5f14: 0x10000003
    ctx->pc = 0x1E5F14u;
    {
        const bool branch_taken_0x1e5f14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E5F18u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x1e5f14) {
            ctx->pc = 0x1E5F24u;
            goto label_1e5f24;
        }
    }
    ctx->pc = 0x1E5F1Cu;
label_1e5f1c:
    // 0x1e5f1c: 0x8f828b34
    ctx->pc = 0x1e5f1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x1e5f20: 0xac820000
    ctx->pc = 0x1e5f20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1e5f24:
    // 0x1e5f24: 0x2402ffff
    ctx->pc = 0x1e5f24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e5f28: 0x7bbf0000
    ctx->pc = 0x1e5f28u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e5f2c:
    // 0x1e5f2c: 0x3e00008
    ctx->pc = 0x1E5F2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5F30u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5ED8u: goto label_1e5ed8;
            case 0x1E5EF0u: goto label_1e5ef0;
            case 0x1E5F1Cu: goto label_1e5f1c;
            case 0x1E5F24u: goto label_1e5f24;
            case 0x1E5F2Cu: goto label_1e5f2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E5F34u;
}
