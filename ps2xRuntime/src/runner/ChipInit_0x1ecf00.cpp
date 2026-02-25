#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ChipInit
// Address: 0x1ecf00 - 0x1ecf0c
void ChipInit_0x1ecf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ChipInit_0x1ecf00");
#endif

    ctx->pc = 0x1ecf00u;

    // 0x1ecf00: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1ecf00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1ecf04: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECF04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECF04u;
            // 0x1ecf08: 0xac203838  sw          $zero, 0x3838($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 14392), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ECF0Cu;
}
