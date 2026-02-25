#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _SetTLBEntry
// Address: 0x137350 - 0x137360
void ps2__SetTLBEntry_0x137350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ps2__SetTLBEntry_0x137350");
#endif

    ctx->pc = 0x137350u;

    // 0x137350: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x137350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x137354: 0xc  syscall     0
    ctx->pc = 0x137354u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x137358: 0x3e00008  jr          $ra
    ctx->pc = 0x137358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x137360u;
}
