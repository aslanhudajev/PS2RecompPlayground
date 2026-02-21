#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbInitStats
// Address: 0x2ad1c0 - 0x2ad1d8
void pbInitStats_0x2ad1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ad1c0u;

    // 0x2ad1c0: 0x3c020036
    ctx->pc = 0x2ad1c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ad1c4: 0x8c43dee0
    ctx->pc = 0x2ad1c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ad1c8: 0x3c020037
    ctx->pc = 0x2ad1c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2ad1cc: 0x24428460
    ctx->pc = 0x2ad1ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294935648));
    // 0x2ad1d0: 0x3e00008
    ctx->pc = 0x2AD1D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD1D4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AD1D8u;
}
