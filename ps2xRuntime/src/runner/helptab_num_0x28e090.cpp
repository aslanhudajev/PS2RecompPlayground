#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: helptab_num
// Address: 0x28e090 - 0x28e098
void helptab_num_0x28e090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x28e090u;

    // 0x28e090: 0x3e00008
    ctx->pc = 0x28E090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E094u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28E098u;
}
