#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: NextWaypoint
// Address: 0x24ff18 - 0x24ff48
void NextWaypoint_0x24ff18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24ff18u;

    // 0x24ff18: 0x84820070
    ctx->pc = 0x24ff18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x24ff1c: 0x4400006
    ctx->pc = 0x24FF1Cu;
    {
        const bool branch_taken_0x24ff1c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x24FF20u;
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24ff1c) {
            ctx->pc = 0x24FF38u;
            goto label_24ff38;
        }
    }
    ctx->pc = 0x24FF24u;
    // 0x24ff24: 0x84830070
    ctx->pc = 0x24ff24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x24ff28: 0x319c0
    ctx->pc = 0x24ff28u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 7));
    // 0x24ff2c: 0x3c020034
    ctx->pc = 0x24ff2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24ff30: 0x2442c390
    ctx->pc = 0x24ff30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294951824));
    // 0x24ff34: 0x621821
    ctx->pc = 0x24ff34u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24ff38:
    // 0x24ff38: 0x641026
    ctx->pc = 0x24ff38u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24ff3c: 0x2180a
    ctx->pc = 0x24ff3cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 0));
    // 0x24ff40: 0x3e00008
    ctx->pc = 0x24FF40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FF44u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24FF38u: goto label_24ff38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24FF48u;
}
