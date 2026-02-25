#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#include <chrono>
#include <thread>

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: RotateThreadReadyQueue
// Address: 0x12eb10 - 0x12eb20
// Note: Add short sleep after syscall to break livelock when defMain/main thread
// spin on RotateThreadReadyQueue - yield() alone allows immediate reschedule.
void RotateThreadReadyQueue_0x12eb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("RotateThreadReadyQueue_0x12eb10");
#endif

    ctx->pc = 0x12eb10u;

    // 0x12eb10: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x12eb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x12eb14: 0xc  syscall     0
    ctx->pc = 0x12eb14u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    std::this_thread::sleep_for(std::chrono::microseconds(250));
    // 0x12eb18: 0x3e00008  jr          $ra
    ctx->pc = 0x12EB18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12EB20u;
}
