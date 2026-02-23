#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlDofTexRGB16
// Address: 0x1a5a10 - 0x1a5a3c
void nlDofTexRGB16_0x1a5a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlDofTexRGB16");


    ctx->pc = 0x1a5a10u;

    // 0x1a5a10: 0x878289dc
    ctx->pc = 0x1a5a10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937052)));
    // 0x1a5a14: 0x10400003
    ctx->pc = 0x1A5A14u;
    {
        const bool branch_taken_0x1a5a14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5A18u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x1a5a14) {
            ctx->pc = 0x1A5A24u;
            goto label_1a5a24;
        }
    }
    ctx->pc = 0x1A5A1Cu;
    // 0x1a5a1c: 0x10000005
    ctx->pc = 0x1A5A1Cu;
    {
        const bool branch_taken_0x1a5a1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A5A20u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x1a5a1c) {
            ctx->pc = 0x1A5A34u;
            goto label_1a5a34;
        }
    }
    ctx->pc = 0x1A5A24u;
label_1a5a24:
    // 0x1a5a24: 0xa78289d4
    ctx->pc = 0x1a5a24u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937044), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a5a28: 0x24020001
    ctx->pc = 0x1a5a28u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a5a2c: 0xaf8289d0
    ctx->pc = 0x1a5a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937040), GPR_U32(ctx, 2));
    // 0x1a5a30: 0x70001628
    ctx->pc = 0x1a5a30u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1a5a34:
    // 0x1a5a34: 0x3e00008
    ctx->pc = 0x1A5A34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A5A24u: goto label_1a5a24;
            case 0x1A5A34u: goto label_1a5a34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5A3Cu;
}
