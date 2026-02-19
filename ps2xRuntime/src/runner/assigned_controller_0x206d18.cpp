#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: assigned_controller
// Address: 0x206d18 - 0x206d38
void assigned_controller_0x206d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x206d18u;

    // 0x206d18: 0x3c020031
    ctx->pc = 0x206d18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x206d1c: 0x24420ea0
    ctx->pc = 0x206d1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3744));
    // 0x206d20: 0x42080
    ctx->pc = 0x206d20u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x206d24: 0x822021
    ctx->pc = 0x206d24u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x206d28: 0x8c820000
    ctx->pc = 0x206d28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x206d2c: 0x28420000
    ctx->pc = 0x206d2cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 0));
    // 0x206d30: 0x3e00008
    ctx->pc = 0x206D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206D34u;
        SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x206D38u;
}
