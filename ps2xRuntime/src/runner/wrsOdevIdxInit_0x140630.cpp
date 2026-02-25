#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsOdevIdxInit
// Address: 0x140630 - 0x14063c
void wrsOdevIdxInit_0x140630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsOdevIdxInit_0x140630");
#endif

    ctx->pc = 0x140630u;

    // 0x140630: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x140630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x140634: 0x3e00008  jr          $ra
    ctx->pc = 0x140634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140634u;
            // 0x140638: 0xac207670  sw          $zero, 0x7670($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 30320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14063Cu;
}
