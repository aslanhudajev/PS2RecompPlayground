#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: sfhds_ReadLong
// Address: 0x192f28 - 0x192f54
void sfhds_ReadLong_0x192f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("sfhds_ReadLong");


    ctx->pc = 0x192f28u;

    // 0x192f28: 0x90820000
    ctx->pc = 0x192f28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x192f2c: 0x90830001
    ctx->pc = 0x192f2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x192f30: 0x21200
    ctx->pc = 0x192f30u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x192f34: 0x90850002
    ctx->pc = 0x192f34u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x192f38: 0x431025
    ctx->pc = 0x192f38u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x192f3c: 0x90860003
    ctx->pc = 0x192f3cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x192f40: 0x21200
    ctx->pc = 0x192f40u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x192f44: 0x451025
    ctx->pc = 0x192f44u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x192f48: 0x21200
    ctx->pc = 0x192f48u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 8));
    // 0x192f4c: 0x3e00008
    ctx->pc = 0x192F4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192F50u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x192F54u;
}
