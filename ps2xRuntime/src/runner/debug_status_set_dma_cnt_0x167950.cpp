#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: debug_status_set_dma_cnt
// Address: 0x167950 - 0x16795c
void debug_status_set_dma_cnt_0x167950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("debug_status_set_dma_cnt_0x167950");
#endif

    ctx->pc = 0x167950u;

    // 0x167950: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x167950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x167954: 0x3e00008  jr          $ra
    ctx->pc = 0x167954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167954u;
            // 0x167958: 0xac244c10  sw          $a0, 0x4C10($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 19472), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16795Cu;
}
