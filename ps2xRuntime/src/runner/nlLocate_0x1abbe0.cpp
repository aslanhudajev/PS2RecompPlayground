#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlLocate
// Address: 0x1abbe0 - 0x1abc80
void nlLocate_0x1abbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlLocate");


    ctx->pc = 0x1abbe0u;

    // 0x1abbe0: 0x8f838a58
    ctx->pc = 0x1abbe0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937176)));
    // 0x1abbe4: 0x14600012
    ctx->pc = 0x1ABBE4u;
    {
        const bool branch_taken_0x1abbe4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1abbe4) {
            ctx->pc = 0x1ABC30u;
            goto label_1abc30;
        }
    }
    ctx->pc = 0x1ABBECu;
    // 0x1abbec: 0xc7808a94
    ctx->pc = 0x1abbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1abbf0: 0x8f838a80
    ctx->pc = 0x1abbf0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x1abbf4: 0x8f868a84
    ctx->pc = 0x1abbf4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294937220)));
    // 0x1abbf8: 0xc7818a98
    ctx->pc = 0x1abbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1abbfc: 0x46000024
    ctx->pc = 0x1abbfcu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1abc00: 0x862018
    ctx->pc = 0x1abc00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x1abc04: 0x70a31818
    ctx->pc = 0x1abc04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x1abc08: 0x44050000
    ctx->pc = 0x1abc08u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[0]);
    // 0x1abc0c: 0x46000824
    ctx->pc = 0x1abc0cu;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x1abc10: 0x852021
    ctx->pc = 0x1abc10u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1abc14: 0xaf848a8c
    ctx->pc = 0x1abc14u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937228), GPR_U32(ctx, 4));
    // 0x1abc18: 0xaf848a74
    ctx->pc = 0x1abc18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937204), GPR_U32(ctx, 4));
    // 0x1abc1c: 0x44040000
    ctx->pc = 0x1abc1cu;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[0]);
    // 0x1abc20: 0x0
    ctx->pc = 0x1abc20u;
    // NOP
    // 0x1abc24: 0x641821
    ctx->pc = 0x1abc24u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1abc28: 0x10000013
    ctx->pc = 0x1ABC28u;
    {
        const bool branch_taken_0x1abc28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1ABC2Cu;
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937224), GPR_U32(ctx, 3));
        if (branch_taken_0x1abc28) {
            ctx->pc = 0x1ABC78u;
            goto label_1abc78;
        }
    }
    ctx->pc = 0x1ABC30u;
label_1abc30:
    // 0x1abc30: 0xc7828a98
    ctx->pc = 0x1abc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1abc34: 0xc7818a94
    ctx->pc = 0x1abc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1abc38: 0xc7808344
    ctx->pc = 0x1abc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1abc3c: 0x8f868a84
    ctx->pc = 0x1abc3cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294937220)));
    // 0x1abc40: 0x8f838a80
    ctx->pc = 0x1abc40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937216)));
    // 0x1abc44: 0x460010a4
    ctx->pc = 0x1abc44u;
    *(int32_t*)&ctx->f[2] = FPU_CVT_W_S(ctx->f[2]);
    // 0x1abc48: 0x862018
    ctx->pc = 0x1abc48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x1abc4c: 0x46000800
    ctx->pc = 0x1abc4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1abc50: 0x70a31818
    ctx->pc = 0x1abc50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x1abc54: 0x44051000
    ctx->pc = 0x1abc54u;
    SET_GPR_U32(ctx, 5, *(uint32_t*)&ctx->f[2]);
    // 0x1abc58: 0x46000024
    ctx->pc = 0x1abc58u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[0]);
    // 0x1abc5c: 0x852021
    ctx->pc = 0x1abc5cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1abc60: 0xaf848a8c
    ctx->pc = 0x1abc60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937228), GPR_U32(ctx, 4));
    // 0x1abc64: 0xaf848a74
    ctx->pc = 0x1abc64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937204), GPR_U32(ctx, 4));
    // 0x1abc68: 0x44040000
    ctx->pc = 0x1abc68u;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[0]);
    // 0x1abc6c: 0x0
    ctx->pc = 0x1abc6cu;
    // NOP
    // 0x1abc70: 0x641823
    ctx->pc = 0x1abc70u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1abc74: 0xaf838a88
    ctx->pc = 0x1abc74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937224), GPR_U32(ctx, 3));
label_1abc78:
    // 0x1abc78: 0x3e00008
    ctx->pc = 0x1ABC78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ABC30u: goto label_1abc30;
            case 0x1ABC78u: goto label_1abc78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ABC80u;
}
