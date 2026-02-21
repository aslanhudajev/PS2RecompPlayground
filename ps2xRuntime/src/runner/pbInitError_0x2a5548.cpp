#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbInitError
// Address: 0x2a5548 - 0x2a5560
void pbInitError_0x2a5548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a5548u;

    // 0x2a5548: 0x3c020036
    ctx->pc = 0x2a5548u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a554c: 0x8c43dee0
    ctx->pc = 0x2a554cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a5550: 0x3c020037
    ctx->pc = 0x2a5550u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a5554: 0x24428010
    ctx->pc = 0x2a5554u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294934544));
    // 0x2a5558: 0x3e00008
    ctx->pc = 0x2A5558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A555Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A5560u;
}
