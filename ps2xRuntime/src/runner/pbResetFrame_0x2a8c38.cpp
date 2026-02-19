#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbResetFrame
// Address: 0x2a8c38 - 0x2a8c5c
void pbResetFrame_0x2a8c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a8c38u;

    // 0x2a8c38: 0x3c020036
    ctx->pc = 0x2a8c38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a8c3c: 0x8c43dee0
    ctx->pc = 0x2a8c3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a8c40: 0x8c620010
    ctx->pc = 0x2a8c40u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a8c44: 0x14400003
    ctx->pc = 0x2A8C44u;
    {
        const bool branch_taken_0x2a8c44 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A8C48u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2a8c44) {
            ctx->pc = 0x2A8C54u;
            goto label_2a8c54;
        }
    }
    ctx->pc = 0x2A8C4Cu;
    // 0x2a8c4c: 0x24428360
    ctx->pc = 0x2a8c4cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294935392));
    // 0x2a8c50: 0xac620010
    ctx->pc = 0x2a8c50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_2a8c54:
    // 0x2a8c54: 0x80aa31c
    ctx->pc = 0x2A8C54u;
    ctx->pc = 0x2A8C70u;
    MBInitFrameMode_0x2a8c70(rdram, ctx, runtime); return;
    ctx->pc = 0x2A8C5Cu;
}
