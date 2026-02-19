#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StdCamFreeze
// Address: 0x215788 - 0x215798
void StdCamFreeze_0x215788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x215788u;

    // 0x215788: 0x3c030032
    ctx->pc = 0x215788u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x21578c: 0x24020001
    ctx->pc = 0x21578cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x215790: 0x3e00008
    ctx->pc = 0x215790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215794u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294965220), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x215798u;
}
