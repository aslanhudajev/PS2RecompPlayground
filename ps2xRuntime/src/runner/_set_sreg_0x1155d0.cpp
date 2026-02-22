#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _set_sreg
// Address: 0x1155d0 - 0x1155ec
void _set_sreg_0x1155d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1155d0u;

    // 0x1155d0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1155d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1155d4: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x1155d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x1155d8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1155d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1155dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1155dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1155e0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1155e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1155e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1155E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1155E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1155E4u;
            // 0x1155e8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1155ECu;
}
