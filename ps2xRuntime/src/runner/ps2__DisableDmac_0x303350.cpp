#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _DisableDmac
// Address: 0x303350 - 0x303360
void ps2__DisableDmac_0x303350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x303350u;

    // 0x303350: 0x24030017
    ctx->pc = 0x303350u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 23));
    // 0x303354: 0xc
    ctx->pc = 0x303354u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x303358: 0x3e00008
    ctx->pc = 0x303358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x303360u;
}
