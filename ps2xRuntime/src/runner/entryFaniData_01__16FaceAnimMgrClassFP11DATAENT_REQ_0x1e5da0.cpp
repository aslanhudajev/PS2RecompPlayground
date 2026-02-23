#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryFaniData_01__16FaceAnimMgrClassFP11DATAENT_REQ
// Address: 0x1e5da0 - 0x1e5e54
void entryFaniData_01__16FaceAnimMgrClassFP11DATAENT_REQ_0x1e5da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryFaniData_01__16FaceAnimMgrClassFP11DATAENT_REQ");


    ctx->pc = 0x1e5da0u;

    // 0x1e5da0: 0x27bdffd0
    ctx->pc = 0x1e5da0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e5da4: 0x7fbf0020
    ctx->pc = 0x1e5da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x1e5da8: 0x7fb10010
    ctx->pc = 0x1e5da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e5dac: 0x7fb00000
    ctx->pc = 0x1e5dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e5db0: 0x70a08628
    ctx->pc = 0x1e5db0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1e5db4: 0x8f858b30
    ctx->pc = 0x1e5db4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 28), 4294937392)));
    // 0x1e5db8: 0x3c020050
    ctx->pc = 0x1e5db8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1e5dbc: 0x244308b0
    ctx->pc = 0x1e5dbcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 2224));
    // 0x1e5dc0: 0x2402fffe
    ctx->pc = 0x1e5dc0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1e5dc4: 0x52080
    ctx->pc = 0x1e5dc4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e5dc8: 0x642021
    ctx->pc = 0x1e5dc8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e5dcc: 0x8c830000
    ctx->pc = 0x1e5dccu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e5dd0: 0x14620004
    ctx->pc = 0x1E5DD0u;
    {
        const bool branch_taken_0x1e5dd0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1E5DD4u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x1e5dd0) {
            ctx->pc = 0x1E5DE4u;
            goto label_1e5de4;
        }
    }
    ctx->pc = 0x1E5DD8u;
    // 0x1e5dd8: 0xac800000
    ctx->pc = 0x1e5dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1e5ddc: 0x10000018
    ctx->pc = 0x1E5DDCu;
    {
        const bool branch_taken_0x1e5ddc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E5DE0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1e5ddc) {
            ctx->pc = 0x1E5E40u;
            goto label_1e5e40;
        }
    }
    ctx->pc = 0x1E5DE4u;
label_1e5de4:
    // 0x1e5de4: 0x451021
    ctx->pc = 0x1e5de4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1e5de8: 0x21880
    ctx->pc = 0x1e5de8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e5dec: 0x3c020027
    ctx->pc = 0x1e5decu;
    SET_GPR_U32(ctx, 2, ((uint32_t)39 << 16));
    // 0x1e5df0: 0x2442b244
    ctx->pc = 0x1e5df0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947396));
    // 0x1e5df4: 0x431021
    ctx->pc = 0x1e5df4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e5df8: 0x8c510000
    ctx->pc = 0x1e5df8u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5dfc: 0x1220000e
    ctx->pc = 0x1E5DFCu;
    {
        const bool branch_taken_0x1e5dfc = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E5E00u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x1e5dfc) {
            ctx->pc = 0x1E5E38u;
            goto label_1e5e38;
        }
    }
    ctx->pc = 0x1E5E04u;
    // 0x1e5e04: 0x1112c0
    ctx->pc = 0x1e5e04u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 11));
    // 0x1e5e08: 0xc06878c
    ctx->pc = 0x1E5E08u;
    SET_GPR_U32(ctx, 31, 0x1E5E10u);
    ctx->pc = 0x1E5E0Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 64));
    ctx->pc = 0x1A1E30u;
    {
        const uint32_t __entryPc = ctx->pc;
        Malloc_0x1a1e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5E10u; }
        else if (ctx->pc != 0x1E5E10u) { ctx->pc = 0x1E5E10u; }
    }
    if (ctx->pc != 0x1E5E10u) { return; }
    ctx->pc = 0x1E5E10u;
    // 0x1e5e10: 0xaf828b34
    ctx->pc = 0x1e5e10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937396), GPR_U32(ctx, 2));
    // 0x1e5e14: 0x8f838b34
    ctx->pc = 0x1e5e14u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
    // 0x1e5e18: 0x3c010050
    ctx->pc = 0x1e5e18u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e5e1c: 0x8c240c78
    ctx->pc = 0x1e5e1cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 3192)));
    // 0x1e5e20: 0x2402ffc0
    ctx->pc = 0x1e5e20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x1e5e24: 0x72202e28
    ctx->pc = 0x1e5e24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e5e28: 0x2463003f
    ctx->pc = 0x1e5e28u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 63));
    // 0x1e5e2c: 0xc05aeba
    ctx->pc = 0x1E5E2Cu;
    SET_GPR_U32(ctx, 31, 0x1E5E34u);
    ctx->pc = 0x1E5E30u;
    SET_GPR_U32(ctx, 6, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x16BAE8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_ReadNw32_0x16bae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5E34u; }
        else if (ctx->pc != 0x1E5E34u) { ctx->pc = 0x1E5E34u; }
    }
    if (ctx->pc != 0x1E5E34u) { return; }
    ctx->pc = 0x1E5E34u;
    // 0x1e5e34: 0x24020002
    ctx->pc = 0x1e5e34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_1e5e38:
    // 0x1e5e38: 0xae02000c
    ctx->pc = 0x1e5e38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1e5e3c: 0x24020001
    ctx->pc = 0x1e5e3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
label_1e5e40:
    // 0x1e5e40: 0x7bbf0020
    ctx->pc = 0x1e5e40u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5e44: 0x7bb10010
    ctx->pc = 0x1e5e44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5e48: 0x7bb00000
    ctx->pc = 0x1e5e48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5e4c: 0x3e00008
    ctx->pc = 0x1E5E4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5E50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5DE4u: goto label_1e5de4;
            case 0x1E5E38u: goto label_1e5e38;
            case 0x1E5E40u: goto label_1e5e40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E5E54u;
}
