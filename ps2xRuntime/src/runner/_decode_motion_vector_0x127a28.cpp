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
// Address: 0x127a28 - 0x127ab0
void _decode_motion_vector_0x127a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_decode_motion_vector_0x127a28");
#endif

    ctx->pc = 0x127a28u;

    // 0x127a28: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x127a28u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127a2c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x127a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x127a30: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x127a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x127a34: 0xa24804  sllv        $t1, $v0, $a1
    ctx->pc = 0x127a34u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x127a38: 0x41843  sra         $v1, $a0, 1
    ctx->pc = 0x127a38u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
    // 0x127a3c: 0x18c0000c  blez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x127A3Cu;
    {
        const bool branch_taken_0x127a3c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x127A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127A3Cu;
            // 0x127a40: 0x68200b  movn        $a0, $v1, $t0 (Delay Slot)
        if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127a3c) {
            ctx->pc = 0x127A70u;
            goto label_127a70;
        }
    }
    ctx->pc = 0x127A44u;
    // 0x127a44: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x127a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x127a48: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x127a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x127a4c: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x127a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x127a50: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x127a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x127a54: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x127a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x127a58: 0x89182a  slt         $v1, $a0, $t1
    ctx->pc = 0x127a58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x127a5c: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x127A5Cu;
    {
        const bool branch_taken_0x127a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x127A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127A5Cu;
            // 0x127a60: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127a5c) {
            ctx->pc = 0x127AA4u;
            goto label_127aa4;
        }
    }
    ctx->pc = 0x127A64u;
    // 0x127a64: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x127a64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x127a68: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x127A68u;
    {
        const bool branch_taken_0x127a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127A68u;
            // 0x127a6c: 0x822023  subu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127a68) {
            ctx->pc = 0x127AA0u;
            goto label_127aa0;
        }
    }
    ctx->pc = 0x127A70u;
label_127a70:
    // 0x127a70: 0x4c1000c  bgez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x127A70u;
    {
        const bool branch_taken_0x127a70 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x127A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127A70u;
            // 0x127a74: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127a70) {
            ctx->pc = 0x127AA4u;
            goto label_127aa4;
        }
    }
    ctx->pc = 0x127A78u;
    // 0x127a78: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x127a78u;
    SET_GPR_VEC(ctx, 2, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 6)));
    // 0x127a7c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x127a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x127a80: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x127a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x127a84: 0x91823  negu        $v1, $t1
    ctx->pc = 0x127a84u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x127a88: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x127a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x127a8c: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x127a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x127a90: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x127a90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x127a94: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x127A94u;
    {
        const bool branch_taken_0x127a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x127A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127A94u;
            // 0x127a98: 0x91040  sll         $v0, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127a94) {
            ctx->pc = 0x127AA0u;
            goto label_127aa0;
        }
    }
    ctx->pc = 0x127A9Cu;
    // 0x127a9c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x127a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_127aa0:
    // 0x127aa0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x127aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_127aa4:
    // 0x127aa4: 0x88100a  movz        $v0, $a0, $t0
    ctx->pc = 0x127aa4u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x127aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x127AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127AA8u;
            // 0x127aac: 0xad420000  sw          $v0, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x127A70u: goto label_127a70;
            case 0x127AA0u: goto label_127aa0;
            case 0x127AA4u: goto label_127aa4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x127AB0u;
}
