#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: OldWaveToNew
// Address: 0x261488 - 0x2614a0
void OldWaveToNew_0x261488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x261488u;

    // 0x261488: 0x3c020034
    ctx->pc = 0x261488u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26148c: 0x2442e438
    ctx->pc = 0x26148cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294960184));
    // 0x261490: 0x42080
    ctx->pc = 0x261490u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x261494: 0x822021
    ctx->pc = 0x261494u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x261498: 0x3e00008
    ctx->pc = 0x261498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26149Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2614A0u;
}
