#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbResetModel
// Address: 0x2ad230 - 0x2ad254
void pbResetModel_0x2ad230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ad230u;

    // 0x2ad230: 0x3c020036
    ctx->pc = 0x2ad230u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ad234: 0x8c43dee0
    ctx->pc = 0x2ad234u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ad238: 0x8c620038
    ctx->pc = 0x2ad238u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x2ad23c: 0x14400003
    ctx->pc = 0x2AD23Cu;
    {
        const bool branch_taken_0x2ad23c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2AD240u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2ad23c) {
            ctx->pc = 0x2AD24Cu;
            goto label_2ad24c;
        }
    }
    ctx->pc = 0x2AD244u;
    // 0x2ad244: 0x24428470
    ctx->pc = 0x2ad244u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294935664));
    // 0x2ad248: 0xac620038
    ctx->pc = 0x2ad248u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
label_2ad24c:
    // 0x2ad24c: 0x3e00008
    ctx->pc = 0x2AD24Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AD24Cu: goto label_2ad24c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AD254u;
}
