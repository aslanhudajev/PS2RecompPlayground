#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _markOutput
// Address: 0x1252e0 - 0x125318
void _markOutput_0x1252e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1252e0u;

    // 0x1252e0: 0x3c020017
    ctx->pc = 0x1252e0u;
    SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
    // 0x1252e4: 0x24050002
    ctx->pc = 0x1252e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1252e8: 0x8c4317bc
    ctx->pc = 0x1252e8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 6076)));
    // 0x1252ec: 0x8c640040
    ctx->pc = 0x1252ecu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1252f0: 0x8c820008
    ctx->pc = 0x1252f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1252f4: 0x10450004
    ctx->pc = 0x1252F4u;
    {
        const bool branch_taken_0x1252f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 5));
        ctx->pc = 0x1252F8u;
        SET_GPR_S32(ctx, 2, ((uint32_t)23 << 16));
        if (branch_taken_0x1252f4) {
            ctx->pc = 0x125308u;
            goto label_125308;
        }
    }
    ctx->pc = 0x1252FCu;
    // 0x1252fc: 0x8c431904
    ctx->pc = 0x1252fcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 6404)));
    // 0x125300: 0xac850008
    ctx->pc = 0x125300u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x125304: 0xac8300ac
    ctx->pc = 0x125304u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 3));
label_125308:
    // 0x125308: 0x3c030017
    ctx->pc = 0x125308u;
    SET_GPR_S32(ctx, 3, ((uint32_t)23 << 16));
    // 0x12530c: 0x24020001
    ctx->pc = 0x12530cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x125310: 0x3e00008
    ctx->pc = 0x125310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125314u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 8320), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x125308u: goto label_125308;
            default: break;
        }
        return;
    }
    ctx->pc = 0x125318u;
}
