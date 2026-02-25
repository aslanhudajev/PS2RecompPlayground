#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: setLoop
// Address: 0x159610 - 0x15961c
void setLoop_0x159610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("setLoop_0x159610");
#endif

    ctx->pc = 0x159610u;

    // 0x159610: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159614: 0x3e00008  jr          $ra
    ctx->pc = 0x159614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159614u;
            // 0x159618: 0xac243500  sw          $a0, 0x3500($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13568), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15961Cu;
}
