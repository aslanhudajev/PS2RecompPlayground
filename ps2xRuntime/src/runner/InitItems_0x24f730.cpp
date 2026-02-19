#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitItems
// Address: 0x24f730 - 0x24f758
void InitItems_0x24f730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24f730u;

    // 0x24f730: 0x3c020034
    ctx->pc = 0x24f730u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24f734: 0xac40cda0
    ctx->pc = 0x24f734u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954400), GPR_U32(ctx, 0));
    // 0x24f738: 0x3c020034
    ctx->pc = 0x24f738u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24f73c: 0x2403ffff
    ctx->pc = 0x24f73cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24f740: 0xac43cdb0
    ctx->pc = 0x24f740u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954416), GPR_U32(ctx, 3));
    // 0x24f744: 0x3c020034
    ctx->pc = 0x24f744u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24f748: 0xac40cda4
    ctx->pc = 0x24f748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954404), GPR_U32(ctx, 0));
    // 0x24f74c: 0x3c020034
    ctx->pc = 0x24f74cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x24f750: 0x3e00008
    ctx->pc = 0x24F750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F754u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294954420), GPR_U32(ctx, 3));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24F758u;
}
