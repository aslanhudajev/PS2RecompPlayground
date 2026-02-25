#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: sub_00107F68
// Address: 0x107f68 - 0x107fc8
void sub_00107F68_0x107f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sub_00107F68_0x107f68");
#endif

    ctx->pc = 0x107f68u;

    // 0x107f68: 0x90860011  lbu         $a2, 0x11($a0)
    ctx->pc = 0x107f68u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
    // 0x107f6c: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x107f6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x107f70: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x107F70u;
    {
        const bool branch_taken_0x107f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107f70) {
            ctx->pc = 0x107F74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x107F70u;
            // 0x107f74: 0x9482000c  lhu         $v0, 0xC($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x107F80u;
            goto label_107f80;
        }
    }
    ctx->pc = 0x107F78u;
    // 0x107f78: 0x3e00008  jr          $ra
    ctx->pc = 0x107F78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107F78u;
            // 0x107f7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x107F80u: goto label_107f80;
            case 0x107F94u: goto label_107f94;
            case 0x107FA0u: goto label_107fa0;
            case 0x107FC0u: goto label_107fc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x107F80u;
label_107f80:
    // 0x107f80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x107f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107f84: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x107F84u;
    {
        const bool branch_taken_0x107f84 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x107F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107F84u;
            // 0x107f88: 0x823821  addu        $a3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f84) {
            ctx->pc = 0x107F94u;
            goto label_107f94;
        }
    }
    ctx->pc = 0x107F8Cu;
    // 0x107f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x107F8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107F8Cu;
            // 0x107f90: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x107F80u: goto label_107f80;
            case 0x107F94u: goto label_107f94;
            case 0x107FA0u: goto label_107fa0;
            case 0x107FC0u: goto label_107fc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x107F94u;
label_107f94:
    // 0x107f94: 0x18a0000a  blez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x107F94u;
    {
        const bool branch_taken_0x107f94 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x107F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107F94u;
            // 0x107f98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f94) {
            ctx->pc = 0x107FC0u;
            goto label_107fc0;
        }
    }
    ctx->pc = 0x107F9Cu;
    // 0x107f9c: 0x24880040  addiu       $t0, $a0, 0x40
    ctx->pc = 0x107f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_107fa0:
    // 0x107fa0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x107fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x107fa4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x107fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x107fa8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x107fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x107fac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x107facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x107fb0: 0xc5202a  slt         $a0, $a2, $a1
    ctx->pc = 0x107fb0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x107fb4: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x107fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x107fb8: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x107FB8u;
    {
        const bool branch_taken_0x107fb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x107fb8) {
            ctx->pc = 0x107FA0u;
            goto label_107fa0;
        }
    }
    ctx->pc = 0x107FC0u;
label_107fc0:
    // 0x107fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x107FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x107FC0u;
            // 0x107fc4: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x107F80u: goto label_107f80;
            case 0x107F94u: goto label_107f94;
            case 0x107FA0u: goto label_107fa0;
            case 0x107FC0u: goto label_107fc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x107FC8u;
}
