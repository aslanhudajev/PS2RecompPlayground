#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbInitUtils
// Address: 0x2aef90 - 0x2aefa8
void pbInitUtils_0x2aef90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2aef90u;

    // 0x2aef90: 0x3c020036
    ctx->pc = 0x2aef90u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2aef94: 0x8c43dee0
    ctx->pc = 0x2aef94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2aef98: 0x3c020037
    ctx->pc = 0x2aef98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2aef9c: 0x24429270
    ctx->pc = 0x2aef9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294939248));
    // 0x2aefa0: 0x3e00008
    ctx->pc = 0x2AEFA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEFA4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AEFA8u;
}
