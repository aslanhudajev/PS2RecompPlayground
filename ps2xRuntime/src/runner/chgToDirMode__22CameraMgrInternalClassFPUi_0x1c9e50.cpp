#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: chgToDirMode__22CameraMgrInternalClassFPUi
// Address: 0x1c9e50 - 0x1c9e80
void chgToDirMode__22CameraMgrInternalClassFPUi_0x1c9e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("chgToDirMode__22CameraMgrInternalClassFPUi");


    ctx->pc = 0x1c9e50u;

    // 0x1c9e50: 0x8ca60004
    ctx->pc = 0x1c9e50u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1c9e54: 0x8f838c48
    ctx->pc = 0x1c9e54u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937672)));
    // 0x1c9e58: 0x24070001
    ctx->pc = 0x1c9e58u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9e5c: 0x24a20008
    ctx->pc = 0x1c9e5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 5), 8));
    // 0x1c9e60: 0x62040
    ctx->pc = 0x1c9e60u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 6), 1));
    // 0x1c9e64: 0x862021
    ctx->pc = 0x1c9e64u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1c9e68: 0x42080
    ctx->pc = 0x1c9e68u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c9e6c: 0x862021
    ctx->pc = 0x1c9e6cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1c9e70: 0x42100
    ctx->pc = 0x1c9e70u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 4));
    // 0x1c9e74: 0x831821
    ctx->pc = 0x1c9e74u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1c9e78: 0x3e00008
    ctx->pc = 0x1C9E78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9E7Cu;
        WRITE8(ADD32(GPR_U32(ctx, 3), 210), (uint8_t)GPR_U32(ctx, 7));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9E80u;
}
