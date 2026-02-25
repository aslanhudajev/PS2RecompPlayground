#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: keypoint
// Address: 0x119d90 - 0x119dfc
void keypoint_0x119d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("keypoint_0x119d90");
#endif

    ctx->pc = 0x119d90u;

    // 0x119d90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x119d90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d94: 0x18c00017  blez        $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x119D94u;
    {
        const bool branch_taken_0x119d94 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x119D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119D94u;
            // 0x119d98: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119d94) {
            ctx->pc = 0x119DF4u;
            goto label_119df4;
        }
    }
    ctx->pc = 0x119D9Cu;
    // 0x119d9c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x119d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x119da0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x119da0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x119da4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x119DA4u;
    {
        const bool branch_taken_0x119da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119DA4u;
            // 0x119da8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119da4) {
            ctx->pc = 0x119DC0u;
            goto label_119dc0;
        }
    }
    ctx->pc = 0x119DACu;
    // 0x119dac: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x119dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x119db0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x119db0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x119db4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x119DB4u;
    {
        const bool branch_taken_0x119db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119db4) {
            ctx->pc = 0x119DF4u;
            goto label_119df4;
        }
    }
    ctx->pc = 0x119DBCu;
    // 0x119dbc: 0x0  nop
    ctx->pc = 0x119dbcu;
    // NOP
label_119dc0:
    // 0x119dc0: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x119dc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x119dc4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x119DC4u;
    {
        const bool branch_taken_0x119dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x119DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119DC4u;
            // 0x119dc8: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119dc4) {
            ctx->pc = 0x119DF4u;
            goto label_119df4;
        }
    }
    ctx->pc = 0x119DCCu;
    // 0x119dcc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x119dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x119dd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x119dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x119dd4: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x119dd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x119dd8: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x119DD8u;
    {
        const bool branch_taken_0x119dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119dd8) {
            ctx->pc = 0x119DDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x119DD8u;
            // 0x119ddc: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x119DC0u;
            goto label_119dc0;
        }
    }
    ctx->pc = 0x119DE0u;
    // 0x119de0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x119de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x119de4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x119de4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x119de8: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x119DE8u;
    {
        const bool branch_taken_0x119de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119de8) {
            ctx->pc = 0x119DECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x119DE8u;
            // 0x119dec: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x119DC0u;
            goto label_119dc0;
        }
    }
    ctx->pc = 0x119DF0u;
    // 0x119df0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x119df0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_119df4:
    // 0x119df4: 0x3e00008  jr          $ra
    ctx->pc = 0x119DF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119DF4u;
            // 0x119df8: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x119DC0u: goto label_119dc0;
            case 0x119DF4u: goto label_119df4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x119DFCu;
}
