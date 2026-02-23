#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvvlc_InitDcSizY
// Address: 0x18ba08 - 0x18bb7c
void mpvvlc_InitDcSizY_0x18ba08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvvlc_InitDcSizY");


    ctx->pc = 0x18ba08u;

    // 0x18ba08: 0x3c020024
    ctx->pc = 0x18ba08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x18ba0c: 0x24040012
    ctx->pc = 0x18ba0cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 18));
    // 0x18ba10: 0x24422578
    ctx->pc = 0x18ba10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 9592));
    // 0x18ba14: 0x2403001f
    ctx->pc = 0x18ba14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 31));
label_18ba18:
    // 0x18ba18: 0xa0440000
    ctx->pc = 0x18ba18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x18ba1c: 0x2463ffff
    ctx->pc = 0x18ba1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18ba20: 0x24420001
    ctx->pc = 0x18ba20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x18ba24: 0x0
    ctx->pc = 0x18ba24u;
    // NOP
    // 0x18ba28: 0x0
    ctx->pc = 0x18ba28u;
    // NOP
    // 0x18ba2c: 0x461fffa
    ctx->pc = 0x18BA2Cu;
    {
        const bool branch_taken_0x18ba2c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18ba2c) {
            ctx->pc = 0x18BA18u;
            goto label_18ba18;
        }
    }
    ctx->pc = 0x18BA34u;
    // 0x18ba34: 0x24040022
    ctx->pc = 0x18ba34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 34));
    // 0x18ba38: 0x2403001f
    ctx->pc = 0x18ba38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 31));
    // 0x18ba3c: 0x0
    ctx->pc = 0x18ba3cu;
    // NOP
label_18ba40:
    // 0x18ba40: 0xa0440000
    ctx->pc = 0x18ba40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x18ba44: 0x2463ffff
    ctx->pc = 0x18ba44u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18ba48: 0x24420001
    ctx->pc = 0x18ba48u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x18ba4c: 0x0
    ctx->pc = 0x18ba4cu;
    // NOP
    // 0x18ba50: 0x0
    ctx->pc = 0x18ba50u;
    // NOP
    // 0x18ba54: 0x461fffa
    ctx->pc = 0x18BA54u;
    {
        const bool branch_taken_0x18ba54 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18ba54) {
            ctx->pc = 0x18BA40u;
            goto label_18ba40;
        }
    }
    ctx->pc = 0x18BA5Cu;
    // 0x18ba5c: 0x24040003
    ctx->pc = 0x18ba5cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18ba60: 0x2403000f
    ctx->pc = 0x18ba60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
    // 0x18ba64: 0x0
    ctx->pc = 0x18ba64u;
    // NOP
label_18ba68:
    // 0x18ba68: 0xa0440000
    ctx->pc = 0x18ba68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x18ba6c: 0x2463ffff
    ctx->pc = 0x18ba6cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18ba70: 0x24420001
    ctx->pc = 0x18ba70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x18ba74: 0x0
    ctx->pc = 0x18ba74u;
    // NOP
    // 0x18ba78: 0x0
    ctx->pc = 0x18ba78u;
    // NOP
    // 0x18ba7c: 0x461fffa
    ctx->pc = 0x18BA7Cu;
    {
        const bool branch_taken_0x18ba7c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18ba7c) {
            ctx->pc = 0x18BA68u;
            goto label_18ba68;
        }
    }
    ctx->pc = 0x18BA84u;
    // 0x18ba84: 0x24040033
    ctx->pc = 0x18ba84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 51));
    // 0x18ba88: 0x2403000f
    ctx->pc = 0x18ba88u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
    // 0x18ba8c: 0x0
    ctx->pc = 0x18ba8cu;
    // NOP
label_18ba90:
    // 0x18ba90: 0xa0440000
    ctx->pc = 0x18ba90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x18ba94: 0x2463ffff
    ctx->pc = 0x18ba94u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18ba98: 0x24420001
    ctx->pc = 0x18ba98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x18ba9c: 0x0
    ctx->pc = 0x18ba9cu;
    // NOP
    // 0x18baa0: 0x0
    ctx->pc = 0x18baa0u;
    // NOP
    // 0x18baa4: 0x461fffa
    ctx->pc = 0x18BAA4u;
    {
        const bool branch_taken_0x18baa4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18baa4) {
            ctx->pc = 0x18BA90u;
            goto label_18ba90;
        }
    }
    ctx->pc = 0x18BAACu;
    // 0x18baac: 0x24040043
    ctx->pc = 0x18baacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 67));
    // 0x18bab0: 0x2403000f
    ctx->pc = 0x18bab0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 15));
    // 0x18bab4: 0x0
    ctx->pc = 0x18bab4u;
    // NOP
label_18bab8:
    // 0x18bab8: 0xa0440000
    ctx->pc = 0x18bab8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x18babc: 0x2463ffff
    ctx->pc = 0x18babcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18bac0: 0x24420001
    ctx->pc = 0x18bac0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x18bac4: 0x0
    ctx->pc = 0x18bac4u;
    // NOP
    // 0x18bac8: 0x0
    ctx->pc = 0x18bac8u;
    // NOP
    // 0x18bacc: 0x461fffa
    ctx->pc = 0x18BACCu;
    {
        const bool branch_taken_0x18bacc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18bacc) {
            ctx->pc = 0x18BAB8u;
            goto label_18bab8;
        }
    }
    ctx->pc = 0x18BAD4u;
    // 0x18bad4: 0x24040054
    ctx->pc = 0x18bad4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 84));
    // 0x18bad8: 0x24030007
    ctx->pc = 0x18bad8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 7));
    // 0x18badc: 0x0
    ctx->pc = 0x18badcu;
    // NOP
label_18bae0:
    // 0x18bae0: 0xa0440000
    ctx->pc = 0x18bae0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x18bae4: 0x2463ffff
    ctx->pc = 0x18bae4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18bae8: 0x24420001
    ctx->pc = 0x18bae8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x18baec: 0x0
    ctx->pc = 0x18baecu;
    // NOP
    // 0x18baf0: 0x0
    ctx->pc = 0x18baf0u;
    // NOP
    // 0x18baf4: 0x461fffa
    ctx->pc = 0x18BAF4u;
    {
        const bool branch_taken_0x18baf4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18baf4) {
            ctx->pc = 0x18BAE0u;
            goto label_18bae0;
        }
    }
    ctx->pc = 0x18BAFCu;
    // 0x18bafc: 0x24040065
    ctx->pc = 0x18bafcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 101));
    // 0x18bb00: 0x24030003
    ctx->pc = 0x18bb00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x18bb04: 0x0
    ctx->pc = 0x18bb04u;
    // NOP
label_18bb08:
    // 0x18bb08: 0xa0440000
    ctx->pc = 0x18bb08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x18bb0c: 0x2463ffff
    ctx->pc = 0x18bb0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18bb10: 0x24420001
    ctx->pc = 0x18bb10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x18bb14: 0x0
    ctx->pc = 0x18bb14u;
    // NOP
    // 0x18bb18: 0x0
    ctx->pc = 0x18bb18u;
    // NOP
    // 0x18bb1c: 0x461fffa
    ctx->pc = 0x18BB1Cu;
    {
        const bool branch_taken_0x18bb1c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18bb1c) {
            ctx->pc = 0x18BB08u;
            goto label_18bb08;
        }
    }
    ctx->pc = 0x18BB24u;
    // 0x18bb24: 0x24040076
    ctx->pc = 0x18bb24u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 118));
    // 0x18bb28: 0x24030001
    ctx->pc = 0x18bb28u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18bb2c: 0x0
    ctx->pc = 0x18bb2cu;
    // NOP
label_18bb30:
    // 0x18bb30: 0xa0440000
    ctx->pc = 0x18bb30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x18bb34: 0x2463ffff
    ctx->pc = 0x18bb34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18bb38: 0x24420001
    ctx->pc = 0x18bb38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x18bb3c: 0x0
    ctx->pc = 0x18bb3cu;
    // NOP
    // 0x18bb40: 0x0
    ctx->pc = 0x18bb40u;
    // NOP
    // 0x18bb44: 0x461fffa
    ctx->pc = 0x18BB44u;
    {
        const bool branch_taken_0x18bb44 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18bb44) {
            ctx->pc = 0x18BB30u;
            goto label_18bb30;
        }
    }
    ctx->pc = 0x18BB4Cu;
    // 0x18bb4c: 0x24040087
    ctx->pc = 0x18bb4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 135));
    // 0x18bb50: 0x24030001
    ctx->pc = 0x18bb50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x18bb54: 0x0
    ctx->pc = 0x18bb54u;
    // NOP
label_18bb58:
    // 0x18bb58: 0xa0440000
    ctx->pc = 0x18bb58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x18bb5c: 0x2463ffff
    ctx->pc = 0x18bb5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x18bb60: 0x24420001
    ctx->pc = 0x18bb60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x18bb64: 0x0
    ctx->pc = 0x18bb64u;
    // NOP
    // 0x18bb68: 0x0
    ctx->pc = 0x18bb68u;
    // NOP
    // 0x18bb6c: 0x461fffa
    ctx->pc = 0x18BB6Cu;
    {
        const bool branch_taken_0x18bb6c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18bb6c) {
            ctx->pc = 0x18BB58u;
            goto label_18bb58;
        }
    }
    ctx->pc = 0x18BB74u;
    // 0x18bb74: 0x3e00008
    ctx->pc = 0x18BB74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18BA18u: goto label_18ba18;
            case 0x18BA40u: goto label_18ba40;
            case 0x18BA68u: goto label_18ba68;
            case 0x18BA90u: goto label_18ba90;
            case 0x18BAB8u: goto label_18bab8;
            case 0x18BAE0u: goto label_18bae0;
            case 0x18BB08u: goto label_18bb08;
            case 0x18BB30u: goto label_18bb30;
            case 0x18BB58u: goto label_18bb58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18BB7Cu;
}
