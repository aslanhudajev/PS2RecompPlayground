#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_timersFYB
// Address: 0x2d29d8 - 0x2d2a14
void init_timersFYB_0x2d29d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2d29d8u;

    // 0x2d29d8: 0x18a0000c
    ctx->pc = 0x2D29D8u;
    {
        const bool branch_taken_0x2d29d8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2D29DCu;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2d29d8) {
            ctx->pc = 0x2D2A0Cu;
            goto label_2d2a0c;
        }
    }
    ctx->pc = 0x2D29E0u;
    // 0x2d29e0: 0x31100
    ctx->pc = 0x2d29e0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
    // 0x2d29e4: 0x0
    ctx->pc = 0x2d29e4u;
    // NOP
label_2d29e8:
    // 0x2d29e8: 0x441021
    ctx->pc = 0x2d29e8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2d29ec: 0xac400000
    ctx->pc = 0x2d29ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2d29f0: 0xac400004
    ctx->pc = 0x2d29f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2d29f4: 0xac400008
    ctx->pc = 0x2d29f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2d29f8: 0xac40000c
    ctx->pc = 0x2d29f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2d29fc: 0x24630001
    ctx->pc = 0x2d29fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d2a00: 0x65102a
    ctx->pc = 0x2d2a00u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 5)));
    // 0x2d2a04: 0x1440fff8
    ctx->pc = 0x2D2A04u;
    {
        const bool branch_taken_0x2d2a04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2D2A08u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 3), 4));
        if (branch_taken_0x2d2a04) {
            ctx->pc = 0x2D29E8u;
            goto label_2d29e8;
        }
    }
    ctx->pc = 0x2D2A0Cu;
label_2d2a0c:
    // 0x2d2a0c: 0x3e00008
    ctx->pc = 0x2D2A0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2D29E8u: goto label_2d29e8;
            case 0x2D2A0Cu: goto label_2d2a0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2D2A14u;
}
