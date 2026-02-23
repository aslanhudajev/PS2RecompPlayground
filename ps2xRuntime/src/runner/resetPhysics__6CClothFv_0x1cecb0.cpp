#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: resetPhysics__6CClothFv
// Address: 0x1cecb0 - 0x1cecbc
void resetPhysics__6CClothFv_0x1cecb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("resetPhysics__6CClothFv");


    ctx->pc = 0x1cecb0u;

    // 0x1cecb0: 0x24030003
    ctx->pc = 0x1cecb0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cecb4: 0x3e00008
    ctx->pc = 0x1CECB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CECB8u;
        WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CECBCu;
}
