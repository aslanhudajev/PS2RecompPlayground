#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ResetCharRGB
// Address: 0x15d080 - 0x15d0c0
void ResetCharRGB_0x15d080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ResetCharRGB_0x15d080");
#endif

    ctx->pc = 0x15d080u;

    // 0x15d080: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x15d080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x15d084: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15d084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d088: 0x24a538c0  addiu       $a1, $a1, 0x38C0
    ctx->pc = 0x15d088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14528));
    // 0x15d08c: 0x0  nop
    ctx->pc = 0x15d08cu;
    // NOP
label_15d090:
    // 0x15d090: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D090u;
    {
        const bool branch_taken_0x15d090 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d090) {
            ctx->pc = 0x15D0A0u;
            goto label_15d0a0;
        }
    }
    ctx->pc = 0x15D098u;
    // 0x15d098: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15D098u;
    {
        const bool branch_taken_0x15d098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D098u;
            // 0x15d09c: 0xa0a00003  sb          $zero, 0x3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d098) {
            ctx->pc = 0x15D0A8u;
            goto label_15d0a8;
        }
    }
    ctx->pc = 0x15D0A0u;
label_15d0a0:
    // 0x15d0a0: 0xa0a0001b  sb          $zero, 0x1B($a1)
    ctx->pc = 0x15d0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x15d0a4: 0x0  nop
    ctx->pc = 0x15d0a4u;
    // NOP
label_15d0a8:
    // 0x15d0a8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x15d0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x15d0ac: 0x28c30006  slti        $v1, $a2, 0x6
    ctx->pc = 0x15d0acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x15d0b0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x15D0B0u;
    {
        const bool branch_taken_0x15d0b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D0B0u;
            // 0x15d0b4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d0b0) {
            ctx->pc = 0x15D090u;
            goto label_15d090;
        }
    }
    ctx->pc = 0x15D0B8u;
    // 0x15d0b8: 0x3e00008  jr          $ra
    ctx->pc = 0x15D0B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D090u: goto label_15d090;
            case 0x15D0A0u: goto label_15d0a0;
            case 0x15D0A8u: goto label_15d0a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D0C0u;
}
