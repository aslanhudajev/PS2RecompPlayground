#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _change_addr
// Address: 0x130d80 - 0x130d8c
void _change_addr_0x130d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_change_addr_0x130d80");
#endif

    ctx->pc = 0x130d80u;

    // 0x130d80: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x130d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x130d84: 0x3e00008  jr          $ra
    ctx->pc = 0x130D84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130D84u;
            // 0x130d88: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x130D8Cu;
}
