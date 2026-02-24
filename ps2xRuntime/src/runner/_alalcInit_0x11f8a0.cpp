#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _alalcInit
// Address: 0x11f8a0 - 0x11f8b4
void _alalcInit_0x11f8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11f8a0u;

    // 0x11f8a0: 0xac85000c
    ctx->pc = 0x11f8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x11f8a4: 0xac860004
    ctx->pc = 0x11f8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x11f8a8: 0xac850000
    ctx->pc = 0x11f8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x11f8ac: 0x3e00008
    ctx->pc = 0x11F8ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F8B0u;
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11F8B4u;
}
