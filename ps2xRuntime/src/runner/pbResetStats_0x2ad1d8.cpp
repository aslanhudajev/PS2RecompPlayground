#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbResetStats
// Address: 0x2ad1d8 - 0x2ad1fc
void pbResetStats_0x2ad1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ad1d8u;

    // 0x2ad1d8: 0x3c020036
    ctx->pc = 0x2ad1d8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ad1dc: 0x8c43dee0
    ctx->pc = 0x2ad1dcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ad1e0: 0x8c620028
    ctx->pc = 0x2ad1e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2ad1e4: 0x14400003
    ctx->pc = 0x2AD1E4u;
    {
        const bool branch_taken_0x2ad1e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2AD1E8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2ad1e4) {
            ctx->pc = 0x2AD1F4u;
            goto label_2ad1f4;
        }
    }
    ctx->pc = 0x2AD1ECu;
    // 0x2ad1ec: 0x24428460
    ctx->pc = 0x2ad1ecu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294935648));
    // 0x2ad1f0: 0xac620028
    ctx->pc = 0x2ad1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_2ad1f4:
    // 0x2ad1f4: 0x3e00008
    ctx->pc = 0x2AD1F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AD1F4u: goto label_2ad1f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AD1FCu;
}
