#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbInitGeom
// Address: 0x2ad350 - 0x2ad368
void pbInitGeom_0x2ad350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ad350u;

    // 0x2ad350: 0x3c020036
    ctx->pc = 0x2ad350u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ad354: 0x8c43dee0
    ctx->pc = 0x2ad354u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ad358: 0x3c020037
    ctx->pc = 0x2ad358u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2ad35c: 0x244285d8
    ctx->pc = 0x2ad35cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294936024));
    // 0x2ad360: 0x3e00008
    ctx->pc = 0x2AD360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD364u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AD368u;
}
