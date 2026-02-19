#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbResetScreen
// Address: 0x2ad188 - 0x2ad1ac
void pbResetScreen_0x2ad188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ad188u;

    // 0x2ad188: 0x3c020036
    ctx->pc = 0x2ad188u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ad18c: 0x8c43dee0
    ctx->pc = 0x2ad18cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ad190: 0x8c620024
    ctx->pc = 0x2ad190u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x2ad194: 0x14400003
    ctx->pc = 0x2AD194u;
    {
        const bool branch_taken_0x2ad194 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2AD198u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2ad194) {
            ctx->pc = 0x2AD1A4u;
            goto label_2ad1a4;
        }
    }
    ctx->pc = 0x2AD19Cu;
    // 0x2ad19c: 0x24428458
    ctx->pc = 0x2ad19cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294935640));
    // 0x2ad1a0: 0xac620024
    ctx->pc = 0x2ad1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
label_2ad1a4:
    // 0x2ad1a4: 0x3e00008
    ctx->pc = 0x2AD1A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AD1A4u: goto label_2ad1a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AD1ACu;
}
