#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AddDmacHandler2
// Address: 0x303300 - 0x303310
void AddDmacHandler2_0x303300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303300u;

    // 0x303300: 0x24030012
    ctx->pc = 0x303300u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 18));
    // 0x303304: 0xc
    ctx->pc = 0x303304u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303308: 0x3e00008
    ctx->pc = 0x303308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303310u;
}
