#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbResetAttribute
// Address: 0x2ae908 - 0x2ae92c
void pbResetAttribute_0x2ae908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ae908u;

    // 0x2ae908: 0x3c020036
    ctx->pc = 0x2ae908u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ae90c: 0x8c43dee0
    ctx->pc = 0x2ae90cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ae910: 0x8c62001c
    ctx->pc = 0x2ae910u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x2ae914: 0x14400003
    ctx->pc = 0x2AE914u;
    {
        const bool branch_taken_0x2ae914 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2AE918u;
        SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
        if (branch_taken_0x2ae914) {
            ctx->pc = 0x2AE924u;
            goto label_2ae924;
        }
    }
    ctx->pc = 0x2AE91Cu;
    // 0x2ae91c: 0x24428bc0
    ctx->pc = 0x2ae91cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294937536));
    // 0x2ae920: 0xac62001c
    ctx->pc = 0x2ae920u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_2ae924:
    // 0x2ae924: 0x80aba50
    ctx->pc = 0x2AE924u;
    ctx->pc = 0x2AE940u;
    pbResetLights_0x2ae940(rdram, ctx, runtime); return;
    ctx->pc = 0x2AE92Cu;
}
