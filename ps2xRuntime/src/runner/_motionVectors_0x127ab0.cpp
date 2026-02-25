#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _motionVectors
// Address: 0x127ab0 - 0x127c4c
void _motionVectors_0x127ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_motionVectors_0x127ab0");
#endif

    ctx->pc = 0x127ab0u;

    // 0x127ab0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x127ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x127ab4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x127ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x127ab8: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x127ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x127abc: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x127abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x127ac0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x127ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x127ac4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x127ac4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ac8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x127ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x127acc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x127accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x127ad0: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x127ad0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ad4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x127ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x127ad8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x127ad8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127adc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x127adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x127ae0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x127ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x127ae4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x127ae4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ae8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x127ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x127aec: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x127aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127af0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x127af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x127af4: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x127af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x127af8: 0x8fb600b0  lw          $s6, 0xB0($sp)
    ctx->pc = 0x127af8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x127afc: 0x8fb300b8  lw          $s3, 0xB8($sp)
    ctx->pc = 0x127afcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x127b00: 0x1522000d  bne         $t1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x127B00u;
    {
        const bool branch_taken_0x127b00 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x127B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127B00u;
            // 0x127b04: 0x8fbe00c0  lw          $fp, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127b00) {
            ctx->pc = 0x127B38u;
            goto label_127b38;
        }
    }
    ctx->pc = 0x127B08u;
    // 0x127b08: 0x55400036  bnel        $t2, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x127B08u;
    {
        const bool branch_taken_0x127b08 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x127b08) {
            ctx->pc = 0x127B0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x127B08u;
            // 0x127b0c: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x127BE4u;
            goto label_127be4;
        }
    }
    ctx->pc = 0x127B10u;
    // 0x127b10: 0x56600034  bnel        $s3, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x127B10u;
    {
        const bool branch_taken_0x127b10 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x127b10) {
            ctx->pc = 0x127B14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x127B10u;
            // 0x127b14: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x127BE4u;
            goto label_127be4;
        }
    }
    ctx->pc = 0x127B18u;
    // 0x127b18: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x127B18u;
    SET_GPR_U32(ctx, 31, 0x127B20u);
    ctx->pc = 0x127B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127B18u;
            // 0x127b1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127B20u; }
        if (ctx->pc != 0x127B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127B20u; }
        if (ctx->pc != 0x127B20u) { return; }
    }
    ctx->pc = 0x127B20u;
    // 0x127b20: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x127b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127b24: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x127b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x127b28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x127b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x127b2c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x127b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x127b30: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x127B30u;
    {
        const bool branch_taken_0x127b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x127B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127B30u;
            // 0x127b34: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127b30) {
            ctx->pc = 0x127BE0u;
            goto label_127be0;
        }
    }
    ctx->pc = 0x127B38u;
label_127b38:
    // 0x127b38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b3c: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x127B3Cu;
    SET_GPR_U32(ctx, 31, 0x127B44u);
    ctx->pc = 0x127B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127B3Cu;
            // 0x127b40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127B44u; }
        if (ctx->pc != 0x127B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127B44u; }
        if (ctx->pc != 0x127B44u) { return; }
    }
    ctx->pc = 0x127B44u;
    // 0x127b44: 0x1088c0  sll         $s1, $s0, 3
    ctx->pc = 0x127b44u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x127b48: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x127b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127b4c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x127b4cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x127b50: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x127b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x127b54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b58: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x127b58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x127b5c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x127b5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b60: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x127b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x127b64: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x127b64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b68: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x127b68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b6c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x127b6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b70: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x127b70u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b74: 0xc049f14  jal         func_127C50
    ctx->pc = 0x127B74u;
    SET_GPR_U32(ctx, 31, 0x127B7Cu);
    ctx->pc = 0x127B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127B74u;
            // 0x127b78: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127C50u;
    if (runtime->hasFunction(0x127C50u)) {
        auto targetFn = runtime->lookupFunction(0x127C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127B7Cu; }
        if (ctx->pc != 0x127B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _motionVector_0x127c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127B7Cu; }
        if (ctx->pc != 0x127B7Cu) { return; }
    }
    ctx->pc = 0x127B7Cu;
    // 0x127b7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b80: 0xc04a0a6  jal         func_128298
    ctx->pc = 0x127B80u;
    SET_GPR_U32(ctx, 31, 0x127B88u);
    ctx->pc = 0x127B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127B80u;
            // 0x127b84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128298u;
    if (runtime->hasFunction(0x128298u)) {
        auto targetFn = runtime->lookupFunction(0x128298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127B88u; }
        if (ctx->pc != 0x127B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x128298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127B88u; }
        if (ctx->pc != 0x127B88u) { return; }
    }
    ctx->pc = 0x127B88u;
    // 0x127b88: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x127b88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x127b8c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x127b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x127b90: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x127b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x127b94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b98: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x127b98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b9c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x127b9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ba0: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x127ba0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ba4: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x127ba4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ba8: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x127ba8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127bac: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x127bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x127bb0: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x127bb0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x127bb4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x127bb4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127bb8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x127bb8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x127bbc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x127bbcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x127bc0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x127bc0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x127bc4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x127bc4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x127bc8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x127bc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x127bcc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x127bccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x127bd0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x127bd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127bd4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x127bd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127bd8: 0x8049f14  j           func_127C50
    ctx->pc = 0x127BD8u;
    ctx->pc = 0x127BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127BD8u;
            // 0x127bdc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127C50u;
    if (runtime->hasFunction(0x127C50u)) {
        auto targetFn = runtime->lookupFunction(0x127C50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _motionVector_0x127c50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x127BE0u;
label_127be0:
    // 0x127be0: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x127be0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_127be4:
    // 0x127be4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127be8: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x127be8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x127bec: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x127becu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127bf0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x127bf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127bf4: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x127bf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127bf8: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x127bf8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127bfc: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x127bfcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127c00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x127c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127c04: 0xc049f14  jal         func_127C50
    ctx->pc = 0x127C04u;
    SET_GPR_U32(ctx, 31, 0x127C0Cu);
    ctx->pc = 0x127C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x127C04u;
            // 0x127c08: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127C50u;
    if (runtime->hasFunction(0x127C50u)) {
        auto targetFn = runtime->lookupFunction(0x127C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127C0Cu; }
        if (ctx->pc != 0x127C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _motionVector_0x127c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x127C0Cu; }
        if (ctx->pc != 0x127C0Cu) { return; }
    }
    ctx->pc = 0x127C0Cu;
    // 0x127c0c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x127c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x127c10: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x127c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x127c14: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x127c14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x127c18: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x127c18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x127c1c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x127c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x127c20: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x127c20u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x127c24: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x127c24u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x127c28: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x127c28u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x127c2c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x127c2cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x127c30: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x127c30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x127c34: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x127c34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x127c38: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x127c38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x127c3c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x127c3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127c40: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x127c40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127c44: 0x3e00008  jr          $ra
    ctx->pc = 0x127C44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x127C44u;
            // 0x127c48: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x127B38u: goto label_127b38;
            case 0x127BE0u: goto label_127be0;
            case 0x127BE4u: goto label_127be4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x127C4Cu;
}
