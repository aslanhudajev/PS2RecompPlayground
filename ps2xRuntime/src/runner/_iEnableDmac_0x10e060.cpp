#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _iEnableDmac
// Address: 0x10e060 - 0x10e070
void _iEnableDmac_0x10e060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10e060u;

    // 0x10e060: 0x2403ffe4
    ctx->pc = 0x10e060u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967268));
    // 0x10e064: 0xc
    ctx->pc = 0x10e064u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10e068: 0x3e00008
    ctx->pc = 0x10E068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10E070u;
}
