#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: vblankHandler
// Address: 0x11baa0 - 0x11bbc8
void vblankHandler_0x11baa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("vblankHandler_0x11baa0");
#endif

    ctx->pc = 0x11baa0u;

    // 0x11baa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11baa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11baa4: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x11baa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x11baa8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11baa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11baac: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x11baacu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)4096u)));
    // 0x11bab0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11bab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11bab4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11bab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11bab8: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x11bab8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11babc: 0x31b7a  dsrl        $v1, $v1, 13
    ctx->pc = 0x11babcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 13);
    // 0x11bac0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x11bac0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x11bac4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11bac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x11bac8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x11bac8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x11bacc: 0xaf838448  sw          $v1, -0x7BB8($gp)
    ctx->pc = 0x11baccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935624), GPR_U32(ctx, 3));
    // 0x11bad0: 0x8f82843c  lw          $v0, -0x7BC4($gp)
    ctx->pc = 0x11bad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935612)));
    // 0x11bad4: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x11BAD4u;
    {
        const bool branch_taken_0x11bad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11bad4) {
            ctx->pc = 0x11BBA8u;
            goto label_11bba8;
        }
    }
    ctx->pc = 0x11BADCu;
    // 0x11badc: 0x8f828440  lw          $v0, -0x7BC0($gp)
    ctx->pc = 0x11badcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935616)));
    // 0x11bae0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11bae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11bae4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11bae4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bae8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11bae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11baec: 0xaf828440  sw          $v0, -0x7BC0($gp)
    ctx->pc = 0x11baecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935616), GPR_U32(ctx, 2));
    // 0x11baf0: 0xc043322  jal         func_10CC88
    ctx->pc = 0x11BAF0u;
    SET_GPR_U32(ctx, 31, 0x11BAF8u);
    ctx->pc = 0x10CC88u;
    if (runtime->hasFunction(0x10CC88u)) {
        auto targetFn = runtime->lookupFunction(0x10CC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BAF8u; }
        if (ctx->pc != 0x11BAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BAF8u; }
        if (ctx->pc != 0x11BAF8u) { return; }
    }
    ctx->pc = 0x11BAF8u;
    // 0x11baf8: 0xaf82844c  sw          $v0, -0x7BB4($gp)
    ctx->pc = 0x11baf8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935628), GPR_U32(ctx, 2));
    // 0x11bafc: 0x8f82844c  lw          $v0, -0x7BB4($gp)
    ctx->pc = 0x11bafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935628)));
    // 0x11bb00: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x11BB00u;
    {
        const bool branch_taken_0x11bb00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11bb00) {
            ctx->pc = 0x11BBA8u;
            goto label_11bba8;
        }
    }
    ctx->pc = 0x11BB08u;
    // 0x11bb08: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x11bb08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x11bb0c: 0xc046a84  jal         func_11AA10
    ctx->pc = 0x11BB0Cu;
    SET_GPR_U32(ctx, 31, 0x11BB14u);
    ctx->pc = 0x11BB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB0Cu;
            // 0x11bb10: 0x2484e518  addiu       $a0, $a0, -0x1AE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11AA10u;
    if (runtime->hasFunction(0x11AA10u)) {
        auto targetFn = runtime->lookupFunction(0x11AA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BB14u; }
        if (ctx->pc != 0x11BB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        voBufGetTag_0x11aa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BB14u; }
        if (ctx->pc != 0x11BB14u) { return; }
    }
    ctx->pc = 0x11BB14u;
    // 0x11bb14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11bb14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb18: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11BB18u;
    {
        const bool branch_taken_0x11bb18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB18u;
            // 0x11bb1c: 0x8f8284c8  lw          $v0, -0x7B38($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb18) {
            ctx->pc = 0x11BB34u;
            goto label_11bb34;
        }
    }
    ctx->pc = 0x11BB20u;
    // 0x11bb20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x11bb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x11bb24: 0xc045400  jal         func_115000
    ctx->pc = 0x11BB24u;
    SET_GPR_U32(ctx, 31, 0x11BB2Cu);
    ctx->pc = 0x11BB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB24u;
            // 0x11bb28: 0xaf8284c8  sw          $v0, -0x7B38($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115000u;
    if (runtime->hasFunction(0x115000u)) {
        auto targetFn = runtime->lookupFunction(0x115000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BB2Cu; }
        if (ctx->pc != 0x11BB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x115000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BB2Cu; }
        if (ctx->pc != 0x11BB2Cu) { return; }
    }
    ctx->pc = 0x11BB2Cu;
    // 0x11bb2c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x11BB2Cu;
    {
        const bool branch_taken_0x11bb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB2Cu;
            // 0x11bb30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb2c) {
            ctx->pc = 0x11BBB4u;
            goto label_11bbb4;
        }
    }
    ctx->pc = 0x11BB34u;
label_11bb34:
    // 0x11bb34: 0x8f828448  lw          $v0, -0x7BB8($gp)
    ctx->pc = 0x11bb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935624)));
    // 0x11bb38: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x11BB38u;
    {
        const bool branch_taken_0x11bb38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB38u;
            // 0x11bb3c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb38) {
            ctx->pc = 0x11BB74u;
            goto label_11bb74;
        }
    }
    ctx->pc = 0x11BB40u;
    // 0x11bb40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x11bb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11bb44: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11BB44u;
    {
        const bool branch_taken_0x11bb44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11BB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB44u;
            // 0x11bb48: 0x3c040075  lui         $a0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb44) {
            ctx->pc = 0x11BB74u;
            goto label_11bb74;
        }
    }
    ctx->pc = 0x11BB4Cu;
    // 0x11bb4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11bb4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb50: 0xc046c66  jal         func_11B198
    ctx->pc = 0x11BB50u;
    SET_GPR_U32(ctx, 31, 0x11BB58u);
    ctx->pc = 0x11BB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB50u;
            // 0x11bb54: 0x2484e530  addiu       $a0, $a0, -0x1AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B198u;
    if (runtime->hasFunction(0x11B198u)) {
        auto targetFn = runtime->lookupFunction(0x11B198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BB58u; }
        if (ctx->pc != 0x11BB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dispSwitch_0x11b198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BB58u; }
        if (ctx->pc != 0x11BB58u) { return; }
    }
    ctx->pc = 0x11BB58u;
    // 0x11bb58: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x11bb58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x11bb5c: 0x34842340  ori         $a0, $a0, 0x2340
    ctx->pc = 0x11bb5cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)9024u)));
    // 0x11bb60: 0xc046e9a  jal         func_11BA68
    ctx->pc = 0x11BB60u;
    SET_GPR_U32(ctx, 31, 0x11BB68u);
    ctx->pc = 0x11BB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB60u;
            // 0x11bb64: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11BA68u;
    if (runtime->hasFunction(0x11BA68u)) {
        auto targetFn = runtime->lookupFunction(0x11BA68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BB68u; }
        if (ctx->pc != 0x11BB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        loadImage_0x11ba68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BB68u; }
        if (ctx->pc != 0x11BB68u) { return; }
    }
    ctx->pc = 0x11BB68u;
    // 0x11bb68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11bb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11bb6c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x11BB6Cu;
    {
        const bool branch_taken_0x11bb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB6Cu;
            // 0x11bb70: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb6c) {
            ctx->pc = 0x11BBA8u;
            goto label_11bba8;
        }
    }
    ctx->pc = 0x11BB74u;
label_11bb74:
    // 0x11bb74: 0x8f828448  lw          $v0, -0x7BB8($gp)
    ctx->pc = 0x11bb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935624)));
    // 0x11bb78: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11BB78u;
    {
        const bool branch_taken_0x11bb78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB78u;
            // 0x11bb7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb78) {
            ctx->pc = 0x11BBA8u;
            goto label_11bba8;
        }
    }
    ctx->pc = 0x11BB80u;
    // 0x11bb80: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x11bb80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11bb84: 0x16220008  bne         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11BB84u;
    {
        const bool branch_taken_0x11bb84 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x11BB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB84u;
            // 0x11bb88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb84) {
            ctx->pc = 0x11BBA8u;
            goto label_11bba8;
        }
    }
    ctx->pc = 0x11BB8Cu;
    // 0x11bb8c: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x11bb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x11bb90: 0xc046c66  jal         func_11B198
    ctx->pc = 0x11BB90u;
    SET_GPR_U32(ctx, 31, 0x11BB98u);
    ctx->pc = 0x11BB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB90u;
            // 0x11bb94: 0x2484e530  addiu       $a0, $a0, -0x1AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B198u;
    if (runtime->hasFunction(0x11B198u)) {
        auto targetFn = runtime->lookupFunction(0x11B198u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BB98u; }
        if (ctx->pc != 0x11BB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dispSwitch_0x11b198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BB98u; }
        if (ctx->pc != 0x11BB98u) { return; }
    }
    ctx->pc = 0x11BB98u;
    // 0x11bb98: 0xc046e9a  jal         func_11BA68
    ctx->pc = 0x11BB98u;
    SET_GPR_U32(ctx, 31, 0x11BBA0u);
    ctx->pc = 0x11BB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB98u;
            // 0x11bb9c: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11BA68u;
    if (runtime->hasFunction(0x11BA68u)) {
        auto targetFn = runtime->lookupFunction(0x11BA68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BBA0u; }
        if (ctx->pc != 0x11BBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        loadImage_0x11ba68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BBA0u; }
        if (ctx->pc != 0x11BBA0u) { return; }
    }
    ctx->pc = 0x11BBA0u;
    // 0x11bba0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x11bba0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x11bba4: 0xaf918444  sw          $s1, -0x7BBC($gp)
    ctx->pc = 0x11bba4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935620), GPR_U32(ctx, 17));
label_11bba8:
    // 0x11bba8: 0xf  sync
    ctx->pc = 0x11bba8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x11bbac: 0x42000038  ei
    ctx->pc = 0x11bbacu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x11bbb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11bbb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11bbb4:
    // 0x11bbb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11bbb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11bbb8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11bbb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11bbbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11bbbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bbc0: 0x3e00008  jr          $ra
    ctx->pc = 0x11BBC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BBC0u;
            // 0x11bbc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11BB34u: goto label_11bb34;
            case 0x11BB74u: goto label_11bb74;
            case 0x11BBA8u: goto label_11bba8;
            case 0x11BBB4u: goto label_11bbb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11BBC8u;
}
