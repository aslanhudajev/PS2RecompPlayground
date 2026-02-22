#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: QueueInit
// Address: 0x10eda8 - 0x10edcc
void QueueInit_0x10eda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10eda8u;

    // 0x10eda8: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x10eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x10edac: 0x24436a40  addiu       $v1, $v0, 0x6A40
    ctx->pc = 0x10edacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 27200));
    // 0x10edb0: 0xac446a40  sw          $a0, 0x6A40($v0)
    ctx->pc = 0x10edb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 27200), GPR_U32(ctx, 4));
    // 0x10edb4: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x10edb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x10edb8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x10edb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10edbc: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x10edbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x10edc0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x10edc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x10edc4: 0x3e00008  jr          $ra
    ctx->pc = 0x10EDC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EDC4u;
            // 0x10edc8: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10EDCCu;
}
