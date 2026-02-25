#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: kCopy
// Address: 0x137df8 - 0x137e28
void kCopy_0x137df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("kCopy_0x137df8");
#endif

    ctx->pc = 0x137df8u;

    // 0x137df8: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x137DF8u;
    {
        const bool branch_taken_0x137df8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x137DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137DF8u;
            // 0x137dfc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137df8) {
            ctx->pc = 0x137E20u;
            goto label_137e20;
        }
    }
    ctx->pc = 0x137E00u;
label_137e00:
    // 0x137e00: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x137e00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x137e04: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x137e04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x137e08: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x137e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x137e0c: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x137e0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x137e10: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x137e10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x137e14: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x137e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x137e18: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x137E18u;
    {
        const bool branch_taken_0x137e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137e18) {
            ctx->pc = 0x137E00u;
            goto label_137e00;
        }
    }
    ctx->pc = 0x137E20u;
label_137e20:
    // 0x137e20: 0x3e00008  jr          $ra
    ctx->pc = 0x137E20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137E20u;
            // 0x137e24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x137E00u: goto label_137e00;
            case 0x137E20u: goto label_137e20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x137E28u;
}
