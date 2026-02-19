#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbResetText
// Address: 0x2ad280 - 0x2ad2a4
void pbResetText_0x2ad280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ad280u;

    // 0x2ad280: 0x3c020036
    ctx->pc = 0x2ad280u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ad284: 0x8c43dee0
    ctx->pc = 0x2ad284u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ad288: 0x8c62003c
    ctx->pc = 0x2ad288u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x2ad28c: 0x14400003
    ctx->pc = 0x2AD28Cu;
    {
        const bool branch_taken_0x2ad28c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2AD290u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2ad28c) {
            ctx->pc = 0x2AD29Cu;
            goto label_2ad29c;
        }
    }
    ctx->pc = 0x2AD294u;
    // 0x2ad294: 0x244285b8
    ctx->pc = 0x2ad294u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294935992));
    // 0x2ad298: 0xac62003c
    ctx->pc = 0x2ad298u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
label_2ad29c:
    // 0x2ad29c: 0x3e00008
    ctx->pc = 0x2AD29Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AD29Cu: goto label_2ad29c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AD2A4u;
}
