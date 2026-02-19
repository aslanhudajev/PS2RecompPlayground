#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitEnemies
// Address: 0x237db8 - 0x237e44
void InitEnemies_0x237db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x237db8u;

    // 0x237db8: 0x202d
    ctx->pc = 0x237db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237dbc: 0x3c020033
    ctx->pc = 0x237dbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x237dc0: 0x24483c08
    ctx->pc = 0x237dc0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 15368));
    // 0x237dc4: 0x3c020033
    ctx->pc = 0x237dc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x237dc8: 0x24473cc0
    ctx->pc = 0x237dc8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 2), 15552));
    // 0x237dcc: 0x2406ffff
    ctx->pc = 0x237dccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x237dd0: 0x3c020033
    ctx->pc = 0x237dd0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x237dd4: 0x24453d78
    ctx->pc = 0x237dd4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 15736));
label_237dd8:
    // 0x237dd8: 0x41880
    ctx->pc = 0x237dd8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 2));
    // 0x237ddc: 0x681021
    ctx->pc = 0x237ddcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x237de0: 0xac400000
    ctx->pc = 0x237de0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x237de4: 0x671021
    ctx->pc = 0x237de4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x237de8: 0xac460000
    ctx->pc = 0x237de8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x237dec: 0x651821
    ctx->pc = 0x237decu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x237df0: 0x24840001
    ctx->pc = 0x237df0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x237df4: 0x2882002d
    ctx->pc = 0x237df4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 45));
    // 0x237df8: 0x1440fff7
    ctx->pc = 0x237DF8u;
    {
        const bool branch_taken_0x237df8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x237DFCu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x237df8) {
            ctx->pc = 0x237DD8u;
            goto label_237dd8;
        }
    }
    ctx->pc = 0x237E00u;
    // 0x237e00: 0x202d
    ctx->pc = 0x237e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237e04: 0x3c02003c
    ctx->pc = 0x237e04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x237e08: 0x24451b90
    ctx->pc = 0x237e08u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 7056));
    // 0x237e0c: 0x2403ffff
    ctx->pc = 0x237e0cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
label_237e10:
    // 0x237e10: 0x41080
    ctx->pc = 0x237e10u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 2));
    // 0x237e14: 0x451021
    ctx->pc = 0x237e14u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x237e18: 0xac430000
    ctx->pc = 0x237e18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x237e1c: 0x24840001
    ctx->pc = 0x237e1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x237e20: 0x28820008
    ctx->pc = 0x237e20u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 8));
    // 0x237e24: 0x1440fffa
    ctx->pc = 0x237E24u;
    {
        const bool branch_taken_0x237e24 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x237e24) {
            ctx->pc = 0x237E10u;
            goto label_237e10;
        }
    }
    ctx->pc = 0x237E2Cu;
    // 0x237e2c: 0x3c02003c
    ctx->pc = 0x237e2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x237e30: 0xac401bb0
    ctx->pc = 0x237e30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7088), GPR_U32(ctx, 0));
    // 0x237e34: 0x3c030033
    ctx->pc = 0x237e34u;
    SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
    // 0x237e38: 0x2402ffff
    ctx->pc = 0x237e38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x237e3c: 0x3e00008
    ctx->pc = 0x237E3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237E40u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 17984), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x237DD8u: goto label_237dd8;
            case 0x237E10u: goto label_237e10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x237E44u;
}
