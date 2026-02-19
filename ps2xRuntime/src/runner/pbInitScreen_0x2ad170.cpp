#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbInitScreen
// Address: 0x2ad170 - 0x2ad188
void pbInitScreen_0x2ad170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ad170u;

    // 0x2ad170: 0x3c020036
    ctx->pc = 0x2ad170u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2ad174: 0x8c43dee0
    ctx->pc = 0x2ad174u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2ad178: 0x3c020037
    ctx->pc = 0x2ad178u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2ad17c: 0x24428458
    ctx->pc = 0x2ad17cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294935640));
    // 0x2ad180: 0x3e00008
    ctx->pc = 0x2AD180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD184u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AD188u;
}
