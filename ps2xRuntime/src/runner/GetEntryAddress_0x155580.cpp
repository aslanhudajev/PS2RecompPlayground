#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: GetEntryAddress
// Address: 0x155580 - 0x155590
void GetEntryAddress_0x155580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("GetEntryAddress");


    ctx->pc = 0x155580u;

    // 0x155580: 0x2403005b
    ctx->pc = 0x155580u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 91));
    // 0x155584: 0xc
    ctx->pc = 0x155584u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x155588: 0x3e00008
    ctx->pc = 0x155588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x155590u;
}
