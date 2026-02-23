#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: killParentLink
// Address: 0x1a27d0 - 0x1a283c
void killParentLink_0x1a27d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("killParentLink");


    ctx->pc = 0x1a27d0u;

    // 0x1a27d0: 0x8c85001c
    ctx->pc = 0x1a27d0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1a27d4: 0x10a00010
    ctx->pc = 0x1A27D4u;
    {
        const bool branch_taken_0x1a27d4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x1a27d4) {
            ctx->pc = 0x1A2818u;
            goto label_1a2818;
        }
    }
    ctx->pc = 0x1A27DCu;
    // 0x1a27dc: 0x94a3002c
    ctx->pc = 0x1a27dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1a27e0: 0x2463ffff
    ctx->pc = 0x1a27e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a27e4: 0xa4a3002c
    ctx->pc = 0x1a27e4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 44), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a27e8: 0x8c85001c
    ctx->pc = 0x1a27e8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1a27ec: 0x94a3002c
    ctx->pc = 0x1a27ecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1a27f0: 0x14600003
    ctx->pc = 0x1A27F0u;
    {
        const bool branch_taken_0x1a27f0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a27f0) {
            ctx->pc = 0x1A2800u;
            goto label_1a2800;
        }
    }
    ctx->pc = 0x1A27F8u;
    // 0x1a27f8: 0x10000006
    ctx->pc = 0x1A27F8u;
    {
        const bool branch_taken_0x1a27f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A27FCu;
        WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
        if (branch_taken_0x1a27f8) {
            ctx->pc = 0x1A2814u;
            goto label_1a2814;
        }
    }
    ctx->pc = 0x1A2800u;
label_1a2800:
    // 0x1a2800: 0x8ca30020
    ctx->pc = 0x1a2800u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1a2804: 0x14640003
    ctx->pc = 0x1A2804u;
    {
        const bool branch_taken_0x1a2804 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 4));
        ctx->pc = 0x1A2808u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 5), 32));
        if (branch_taken_0x1a2804) {
            ctx->pc = 0x1A2814u;
            goto label_1a2814;
        }
    }
    ctx->pc = 0x1A280Cu;
    // 0x1a280c: 0x8c830024
    ctx->pc = 0x1a280cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1a2810: 0xacc30000
    ctx->pc = 0x1a2810u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_1a2814:
    // 0x1a2814: 0xac80001c
    ctx->pc = 0x1a2814u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
label_1a2818:
    // 0x1a2818: 0x8c850028
    ctx->pc = 0x1a2818u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1a281c: 0x8c830024
    ctx->pc = 0x1a281cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1a2820: 0xac650028
    ctx->pc = 0x1a2820u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 5));
    // 0x1a2824: 0x8c850024
    ctx->pc = 0x1a2824u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1a2828: 0x8c830028
    ctx->pc = 0x1a2828u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1a282c: 0xac650024
    ctx->pc = 0x1a282cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 5));
    // 0x1a2830: 0xac840028
    ctx->pc = 0x1a2830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 4));
    // 0x1a2834: 0x3e00008
    ctx->pc = 0x1A2834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2838u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 4));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A2800u: goto label_1a2800;
            case 0x1A2814u: goto label_1a2814;
            case 0x1A2818u: goto label_1a2818;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A283Cu;
}
