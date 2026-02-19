#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbInitText
// Address: 0x2ad268 - 0x2ad280
void pbInitText_0x2ad268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ad268u;

    // 0x2ad268: 0x3c020036
    ctx->pc = 0x2ad268u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ad26c: 0x8c43dee0
    ctx->pc = 0x2ad26cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ad270: 0x3c020037
    ctx->pc = 0x2ad270u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2ad274: 0x244285b8
    ctx->pc = 0x2ad274u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294935992));
    // 0x2ad278: 0x3e00008
    ctx->pc = 0x2AD278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD27Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AD280u;
}
