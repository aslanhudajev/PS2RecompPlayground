#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _get_free_slot
// Address: 0x123ec0 - 0x123f00
void _get_free_slot_0x123ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_get_free_slot_0x123ec0");
#endif

    ctx->pc = 0x123ec0u;

    // 0x123ec0: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x123ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x123ec4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x123ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123ec8: 0x244696c8  addiu       $a2, $v0, -0x6938
    ctx->pc = 0x123ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940360));
    // 0x123ecc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x123eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_123ed0:
    // 0x123ed0: 0x24c6001c  addiu       $a2, $a2, 0x1C
    ctx->pc = 0x123ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
    // 0x123ed4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x123ed4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123ed8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x123ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x123edc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x123EDCu;
    {
        const bool branch_taken_0x123edc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x123EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123EDCu;
            // 0x123ee0: 0x28a40002  slti        $a0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123edc) {
            ctx->pc = 0x123EF8u;
            goto label_123ef8;
        }
    }
    ctx->pc = 0x123EE4u;
    // 0x123ee4: 0x0  nop
    ctx->pc = 0x123ee4u;
    // NOP
    // 0x123ee8: 0x0  nop
    ctx->pc = 0x123ee8u;
    // NOP
    // 0x123eec: 0x5480fff8  bnel        $a0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x123EECu;
    {
        const bool branch_taken_0x123eec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x123eec) {
            ctx->pc = 0x123EF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x123EECu;
            // 0x123ef0: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x123ED0u;
            goto label_123ed0;
        }
    }
    ctx->pc = 0x123EF4u;
    // 0x123ef4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x123ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_123ef8:
    // 0x123ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x123EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x123ED0u: goto label_123ed0;
            case 0x123EF8u: goto label_123ef8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x123F00u;
}
