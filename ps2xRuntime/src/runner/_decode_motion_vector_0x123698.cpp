#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _decode_motion_vector
// Address: 0x123698 - 0x123720
void _decode_motion_vector_0x123698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_decode_motion_vector_0x123698");
#endif

    ctx->pc = 0x123698u;

    // 0x123698: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x123698u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12369c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x12369cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1236a0: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x1236a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1236a4: 0xa24804  sllv        $t1, $v0, $a1
    ctx->pc = 0x1236a4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x1236a8: 0x41843  sra         $v1, $a0, 1
    ctx->pc = 0x1236a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
    // 0x1236ac: 0x18c0000c  blez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x1236ACu;
    {
        const bool branch_taken_0x1236ac = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1236B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1236ACu;
            // 0x1236b0: 0x68200b  movn        $a0, $v1, $t0 (Delay Slot)
        if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1236ac) {
            ctx->pc = 0x1236E0u;
            goto label_1236e0;
        }
    }
    ctx->pc = 0x1236B4u;
    // 0x1236b4: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x1236b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1236b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1236b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1236bc: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x1236bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x1236c0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1236c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1236c4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1236c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1236c8: 0x89182a  slt         $v1, $a0, $t1
    ctx->pc = 0x1236c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1236cc: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1236CCu;
    {
        const bool branch_taken_0x1236cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1236D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1236CCu;
            // 0x1236d0: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1236cc) {
            ctx->pc = 0x123714u;
            goto label_123714;
        }
    }
    ctx->pc = 0x1236D4u;
    // 0x1236d4: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x1236d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1236d8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1236D8u;
    {
        const bool branch_taken_0x1236d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1236DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1236D8u;
            // 0x1236dc: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1236d8) {
            ctx->pc = 0x123710u;
            goto label_123710;
        }
    }
    ctx->pc = 0x1236E0u;
label_1236e0:
    // 0x1236e0: 0x4c1000c  bgez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x1236E0u;
    {
        const bool branch_taken_0x1236e0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1236E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1236E0u;
            // 0x1236e4: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1236e0) {
            ctx->pc = 0x123714u;
            goto label_123714;
        }
    }
    ctx->pc = 0x1236E8u;
    // 0x1236e8: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x1236e8u;
    SET_GPR_VEC(ctx, 2, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 6)));
    // 0x1236ec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1236ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1236f0: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x1236f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x1236f4: 0x91823  negu        $v1, $t1
    ctx->pc = 0x1236f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x1236f8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1236f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1236fc: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x1236fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x123700: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x123700u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x123704: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x123704u;
    {
        const bool branch_taken_0x123704 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x123708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123704u;
            // 0x123708: 0x91040  sll         $v0, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123704) {
            ctx->pc = 0x123710u;
            goto label_123710;
        }
    }
    ctx->pc = 0x12370Cu;
    // 0x12370c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x12370cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_123710:
    // 0x123710: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x123710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_123714:
    // 0x123714: 0x88100a  movz        $v0, $a0, $t0
    ctx->pc = 0x123714u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x123718: 0x3e00008  jr          $ra
    ctx->pc = 0x123718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12371Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x123718u;
            // 0x12371c: 0xad420000  sw          $v0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1236E0u: goto label_1236e0;
            case 0x123710u: goto label_123710;
            case 0x123714u: goto label_123714;
            default: break;
        }
        return;
    }
    ctx->pc = 0x123720u;
}
