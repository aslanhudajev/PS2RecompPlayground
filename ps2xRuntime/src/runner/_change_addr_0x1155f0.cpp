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
// Address: 0x1155f0 - 0x1155fc
void _change_addr_0x1155f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_change_addr_0x1155f0");
#endif

    ctx->pc = 0x1155f0u;

    // 0x1155f0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1155f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1155f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1155F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1155F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1155F4u;
            // 0x1155f8: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1155FCu;
}
