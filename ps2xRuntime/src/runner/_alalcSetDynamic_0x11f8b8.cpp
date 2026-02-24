#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _alalcSetDynamic
// Address: 0x11f8b8 - 0x11f8c4
void _alalcSetDynamic_0x11f8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11f8b8u;

    // 0x11f8b8: 0x8c820008
    ctx->pc = 0x11f8b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x11f8bc: 0x3e00008
    ctx->pc = 0x11F8BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F8C0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11F8C4u;
}
