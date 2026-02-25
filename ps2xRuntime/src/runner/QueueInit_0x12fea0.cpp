#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: QueueInit
// Address: 0x12fea0 - 0x12fec4
void QueueInit_0x12fea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("QueueInit_0x12fea0");
#endif

    ctx->pc = 0x12fea0u;

    // 0x12fea0: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x12fea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x12fea4: 0x244328c0  addiu       $v1, $v0, 0x28C0
    ctx->pc = 0x12fea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 10432));
    // 0x12fea8: 0xac4428c0  sw          $a0, 0x28C0($v0)
    ctx->pc = 0x12fea8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 10432), GPR_U32(ctx, 4));
    // 0x12feac: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x12feacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12feb0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x12feb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12feb4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x12feb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x12feb8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12feb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12febc: 0x3e00008  jr          $ra
    ctx->pc = 0x12FEBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FEBCu;
            // 0x12fec0: 0xac64000c  sw          $a0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12FEC4u;
}
