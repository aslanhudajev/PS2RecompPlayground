#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryEvent__22CameraMgrInternalClassFPUis
// Address: 0x1c9df0 - 0x1c9e44
void entryEvent__22CameraMgrInternalClassFPUis_0x1c9df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryEvent__22CameraMgrInternalClassFPUis");


    ctx->pc = 0x1c9df0u;

    // 0x1c9df0: 0x14c0000e
    ctx->pc = 0x1C9DF0u;
    {
        const bool branch_taken_0x1c9df0 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        if (branch_taken_0x1c9df0) {
            ctx->pc = 0x1C9E2Cu;
            goto label_1c9e2c;
        }
    }
    ctx->pc = 0x1C9DF8u;
    // 0x1c9df8: 0x84820902
    ctx->pc = 0x1c9df8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2306)));
    // 0x1c9dfc: 0x24030001
    ctx->pc = 0x1c9dfcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9e00: 0x210c0
    ctx->pc = 0x1c9e00u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c9e04: 0x441021
    ctx->pc = 0x1c9e04u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c9e08: 0xac450904
    ctx->pc = 0x1c9e08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2308), GPR_U32(ctx, 5));
    // 0x1c9e0c: 0x84820902
    ctx->pc = 0x1c9e0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2306)));
    // 0x1c9e10: 0x210c0
    ctx->pc = 0x1c9e10u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 3));
    // 0x1c9e14: 0x441021
    ctx->pc = 0x1c9e14u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c9e18: 0xa0430908
    ctx->pc = 0x1c9e18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2312), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c9e1c: 0x84820902
    ctx->pc = 0x1c9e1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2306)));
    // 0x1c9e20: 0x24420001
    ctx->pc = 0x1c9e20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x1c9e24: 0x30420007
    ctx->pc = 0x1c9e24u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 7));
    // 0x1c9e28: 0xa4820902
    ctx->pc = 0x1c9e28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2306), (uint16_t)GPR_U32(ctx, 2));
label_1c9e2c:
    // 0x1c9e2c: 0x8ca20008
    ctx->pc = 0x1c9e2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1c9e30: 0x21103
    ctx->pc = 0x1c9e30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1c9e34: 0x21080
    ctx->pc = 0x1c9e34u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c9e38: 0xa21021
    ctx->pc = 0x1c9e38u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1c9e3c: 0x3e00008
    ctx->pc = 0x1C9E3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9E40u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 12));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C9E2Cu: goto label_1c9e2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C9E44u;
}
