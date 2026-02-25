#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: debug_status_set_cpu_cnt
// Address: 0x167940 - 0x16794c
void debug_status_set_cpu_cnt_0x167940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("debug_status_set_cpu_cnt_0x167940");
#endif

    ctx->pc = 0x167940u;

    // 0x167940: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x167940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x167944: 0x3e00008  jr          $ra
    ctx->pc = 0x167944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167944u;
            // 0x167948: 0xac244c0c  sw          $a0, 0x4C0C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 19468), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16794Cu;
}
