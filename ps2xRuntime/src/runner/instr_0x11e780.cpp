#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: instr
// Address: 0x11e780 - 0x11e7e8
void instr_0x11e780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("instr_0x11e780");
#endif

    ctx->pc = 0x11e780u;

    // 0x11e780: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x11e780u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11e784: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x11e784u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x11e788: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x11e788u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x11e78c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x11e78cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e790: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x11E790u;
    {
        const bool branch_taken_0x11e790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E790u;
            // 0x11e794: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e790) {
            ctx->pc = 0x11E7CCu;
            goto label_11e7cc;
        }
    }
    ctx->pc = 0x11E798u;
    // 0x11e798: 0x10450011  beq         $v0, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x11E798u;
    {
        const bool branch_taken_0x11e798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x11E79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E798u;
            // 0x11e79c: 0xc41023  subu        $v0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e798) {
            ctx->pc = 0x11E7E0u;
            goto label_11e7e0;
        }
    }
    ctx->pc = 0x11E7A0u;
    // 0x11e7a0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x11e7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11e7a4: 0x0  nop
    ctx->pc = 0x11e7a4u;
    // NOP
label_11e7a8:
    // 0x11e7a8: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x11e7a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11e7ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x11E7ACu;
    {
        const bool branch_taken_0x11e7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E7ACu;
            // 0x11e7b0: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7ac) {
            ctx->pc = 0x11E7CCu;
            goto label_11e7cc;
        }
    }
    ctx->pc = 0x11E7B4u;
    // 0x11e7b4: 0x0  nop
    ctx->pc = 0x11e7b4u;
    // NOP
    // 0x11e7b8: 0x0  nop
    ctx->pc = 0x11e7b8u;
    // NOP
    // 0x11e7bc: 0x0  nop
    ctx->pc = 0x11e7bcu;
    // NOP
    // 0x11e7c0: 0x0  nop
    ctx->pc = 0x11e7c0u;
    // NOP
    // 0x11e7c4: 0x5445fff8  bnel        $v0, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11E7C4u;
    {
        const bool branch_taken_0x11e7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x11e7c4) {
            ctx->pc = 0x11E7C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11E7C4u;
            // 0x11e7c8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11E7A8u;
            goto label_11e7a8;
        }
    }
    ctx->pc = 0x11E7CCu;
label_11e7cc:
    // 0x11e7cc: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x11e7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x11e7d0: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x11e7d0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x11e7d4: 0x14650002  bne         $v1, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x11E7D4u;
    {
        const bool branch_taken_0x11e7d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x11E7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E7D4u;
            // 0x11e7d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e7d4) {
            ctx->pc = 0x11E7E0u;
            goto label_11e7e0;
        }
    }
    ctx->pc = 0x11E7DCu;
    // 0x11e7dc: 0xc41023  subu        $v0, $a2, $a0
    ctx->pc = 0x11e7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_11e7e0:
    // 0x11e7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x11E7E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E7A8u: goto label_11e7a8;
            case 0x11E7CCu: goto label_11e7cc;
            case 0x11E7E0u: goto label_11e7e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11E7E8u;
}
