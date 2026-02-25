#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: iSetTLBEntry
// Address: 0x137390 - 0x1373a0
void iSetTLBEntry_0x137390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("iSetTLBEntry_0x137390");
#endif

    ctx->pc = 0x137390u;

    // 0x137390: 0x2403ffaa  addiu       $v1, $zero, -0x56
    ctx->pc = 0x137390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967210));
    // 0x137394: 0xc  syscall     0
    ctx->pc = 0x137394u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x137398: 0x3e00008  jr          $ra
    ctx->pc = 0x137398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1373A0u;
}
