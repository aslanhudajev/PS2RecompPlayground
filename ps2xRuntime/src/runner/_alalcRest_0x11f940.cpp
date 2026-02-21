#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _alalcRest
// Address: 0x11f940 - 0x11f958
void _alalcRest_0x11f940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11f940u;

    // 0x11f940: 0x8c820000
    ctx->pc = 0x11f940u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11f944: 0x8c830004
    ctx->pc = 0x11f944u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x11f948: 0x8c850008
    ctx->pc = 0x11f948u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x11f94c: 0x431021
    ctx->pc = 0x11f94cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11f950: 0x3e00008
    ctx->pc = 0x11F950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F954u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11F958u;
}
