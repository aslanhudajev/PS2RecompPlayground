#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: viBufReset
// Address: 0x189fd0 - 0x18a134
void viBufReset_0x189fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("viBufReset_0x189fd0");
#endif

    ctx->pc = 0x189fd0u;

    // 0x189fd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x189fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x189fd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x189fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189fd8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x189fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x189fdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x189fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189fe0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x189fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x189fe4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x189fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x189fe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x189fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x189fec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x189fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x189ff0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x189ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x189ff4: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x189ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x189ff8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x189ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x189ffc: 0xac820044  sw          $v0, 0x44($a0)
    ctx->pc = 0x189ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
    // 0x18a000: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x18a000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x18a004: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x18a004u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x18a008: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x18a008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x18a00c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x18a00cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18a010: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x18A010u;
    {
        const bool branch_taken_0x18a010 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A010u;
            // 0x18a014: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a010) {
            ctx->pc = 0x18A068u;
            goto label_18a068;
        }
    }
    ctx->pc = 0x18A018u;
    // 0x18a018: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18a018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a01c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x18a01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18a020:
    // 0x18a020: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x18a020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x18a024: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18a024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x18a028: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18a028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18a02c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18a02cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18a030: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x18a030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x18a034: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18a034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18a038: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x18a038u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x18a03c: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x18a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x18a040: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18a040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18a044: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x18a044u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x18a048: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x18a048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x18a04c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x18a04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18a050: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x18a050u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x18a054: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x18a054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x18a058: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x18a058u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18a05c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x18A05Cu;
    {
        const bool branch_taken_0x18a05c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A05Cu;
            // 0x18a060: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a05c) {
            ctx->pc = 0x18A020u;
            goto label_18a020;
        }
    }
    ctx->pc = 0x18A064u;
    // 0x18a064: 0x0  nop
    ctx->pc = 0x18a064u;
    // NOP
label_18a068:
    // 0x18a068: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x18a068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x18a06c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x18a06cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18a070: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x18A070u;
    {
        const bool branch_taken_0x18a070 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A070u;
            // 0x18a074: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a070) {
            ctx->pc = 0x18A0C0u;
            goto label_18a0c0;
        }
    }
    ctx->pc = 0x18A078u;
    // 0x18a078: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18a078u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a07c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18a07cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18a080:
    // 0x18a080: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x18a080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18a084: 0xc061f94  jal         func_187E50
    ctx->pc = 0x18A084u;
    SET_GPR_U32(ctx, 31, 0x18A08Cu);
    ctx->pc = 0x18A088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A084u;
            // 0x18a088: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187E50u;
    if (runtime->hasFunction(0x187E50u)) {
        auto targetFn = runtime->lookupFunction(0x187E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A08Cu; }
        if (ctx->pc != 0x18A08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DmaAddr_0x187e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A08Cu; }
        if (ctx->pc != 0x18A08Cu) { return; }
    }
    ctx->pc = 0x18A08Cu;
    // 0x18a08c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18a08cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a090: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x18a090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18a094: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x18a094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x18a098: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x18a098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x18a09c: 0xc062874  jal         func_18A1D0
    ctx->pc = 0x18A09Cu;
    SET_GPR_U32(ctx, 31, 0x18A0A4u);
    ctx->pc = 0x18A0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A09Cu;
            // 0x18a0a0: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A1D0u;
    if (runtime->hasFunction(0x18A1D0u)) {
        auto targetFn = runtime->lookupFunction(0x18A1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A0A4u; }
        if (ctx->pc != 0x18A0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scTag2_0x18a1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A0A4u; }
        if (ctx->pc != 0x18A0A4u) { return; }
    }
    ctx->pc = 0x18A0A4u;
    // 0x18a0a4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x18a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x18a0a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18a0a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18a0ac: 0x26520800  addiu       $s2, $s2, 0x800
    ctx->pc = 0x18a0acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2048));
    // 0x18a0b0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x18a0b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18a0b4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x18A0B4u;
    {
        const bool branch_taken_0x18a0b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A0B4u;
            // 0x18a0b8: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a0b4) {
            ctx->pc = 0x18A080u;
            goto label_18a080;
        }
    }
    ctx->pc = 0x18A0BCu;
    // 0x18a0bc: 0x0  nop
    ctx->pc = 0x18a0bcu;
    // NOP
label_18a0c0:
    // 0x18a0c0: 0xc061f94  jal         func_187E50
    ctx->pc = 0x18A0C0u;
    SET_GPR_U32(ctx, 31, 0x18A0C8u);
    ctx->pc = 0x18A0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A0C0u;
            // 0x18a0c4: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187E50u;
    if (runtime->hasFunction(0x187E50u)) {
        auto targetFn = runtime->lookupFunction(0x187E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A0C8u; }
        if (ctx->pc != 0x18A0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DmaAddr_0x187e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A0C8u; }
        if (ctx->pc != 0x18A0C8u) { return; }
    }
    ctx->pc = 0x18A0C8u;
    // 0x18a0c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18a0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a0cc: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x18a0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x18a0d0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x18a0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x18a0d4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x18a0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18a0d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18a0d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a0dc: 0xc062874  jal         func_18A1D0
    ctx->pc = 0x18A0DCu;
    SET_GPR_U32(ctx, 31, 0x18A0E4u);
    ctx->pc = 0x18A0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A0DCu;
            // 0x18a0e0: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A1D0u;
    if (runtime->hasFunction(0x18A1D0u)) {
        auto targetFn = runtime->lookupFunction(0x18A1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A0E4u; }
        if (ctx->pc != 0x18A0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scTag2_0x18a1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A0E4u; }
        if (ctx->pc != 0x18A0E4u) { return; }
    }
    ctx->pc = 0x18A0E4u;
    // 0x18a0e4: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x18a0e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x18a0e8: 0xac20b420  sw          $zero, -0x4BE0($at)
    ctx->pc = 0x18a0e8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294947872), GPR_U32(ctx, 0)); // MMIO: 0x1000b420
    // 0x18a0ec: 0xc061f94  jal         func_187E50
    ctx->pc = 0x18A0ECu;
    SET_GPR_U32(ctx, 31, 0x18A0F4u);
    ctx->pc = 0x18A0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A0ECu;
            // 0x18a0f0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187E50u;
    if (runtime->hasFunction(0x187E50u)) {
        auto targetFn = runtime->lookupFunction(0x187E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A0F4u; }
        if (ctx->pc != 0x18A0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DmaAddr_0x187e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A0F4u; }
        if (ctx->pc != 0x18A0F4u) { return; }
    }
    ctx->pc = 0x18A0F4u;
    // 0x18a0f4: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x18a0f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x18a0f8: 0xac22b410  sw          $v0, -0x4BF0($at)
    ctx->pc = 0x18a0f8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294947856), GPR_U32(ctx, 2)); // MMIO: 0x1000b410
    // 0x18a0fc: 0xc061f94  jal         func_187E50
    ctx->pc = 0x18A0FCu;
    SET_GPR_U32(ctx, 31, 0x18A104u);
    ctx->pc = 0x18A100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A0FCu;
            // 0x18a100: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187E50u;
    if (runtime->hasFunction(0x187E50u)) {
        auto targetFn = runtime->lookupFunction(0x187E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A104u; }
        if (ctx->pc != 0x18A104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DmaAddr_0x187e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A104u; }
        if (ctx->pc != 0x18A104u) { return; }
    }
    ctx->pc = 0x18A104u;
    // 0x18a104: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x18a104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x18a108: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x18a108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18a10c: 0xc062880  jal         func_18A200
    ctx->pc = 0x18A10Cu;
    SET_GPR_U32(ctx, 31, 0x18A114u);
    ctx->pc = 0x18A110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18A10Cu;
            // 0x18a110: 0xac22b430  sw          $v0, -0x4BD0($at) (Delay Slot)
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294947888), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A200u;
    if (runtime->hasFunction(0x18A200u)) {
        auto targetFn = runtime->lookupFunction(0x18A200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A114u; }
        if (ctx->pc != 0x18A114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setD4_CHCR_0x18a200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18A114u; }
        if (ctx->pc != 0x18A114u) { return; }
    }
    ctx->pc = 0x18A114u;
    // 0x18a114: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18a114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18a118: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18a118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18a11c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18a11cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a120: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18a120u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a124: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18a124u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18a128: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18a128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18a12c: 0x3e00008  jr          $ra
    ctx->pc = 0x18A12Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18A12Cu;
            // 0x18a130: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18A020u: goto label_18a020;
            case 0x18A068u: goto label_18a068;
            case 0x18A080u: goto label_18a080;
            case 0x18A0C0u: goto label_18a0c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18A134u;
}
