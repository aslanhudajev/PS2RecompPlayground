#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Ending
// Address: 0x1e4fb0 - 0x1e5570
void Ending_0x1e4fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Ending_0x1e4fb0");
#endif

    ctx->pc = 0x1e4fb0u;

    // 0x1e4fb0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1e4fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1e4fb4: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x1e4fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1e4fb8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1e4fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1e4fbc: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x1e4fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1e4fc0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1e4fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1e4fc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e4fc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4fc8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1e4fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1e4fcc: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1e4fccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e4fd0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1e4fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1e4fd4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e4fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e4fd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e4fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1e4fdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e4fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e4fe0: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1E4FE0u;
    SET_GPR_U32(ctx, 31, 0x1E4FE8u);
    ctx->pc = 0x1E4FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4FE0u;
            // 0x1e4fe4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4FE8u; }
        if (ctx->pc != 0x1E4FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4FE8u; }
        if (ctx->pc != 0x1E4FE8u) { return; }
    }
    ctx->pc = 0x1E4FE8u;
    // 0x1e4fe8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1e4fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1e4fec: 0x8c233530  lw          $v1, 0x3530($at)
    ctx->pc = 0x1e4fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13616)));
    // 0x1e4ff0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1E4FF0u;
    {
        const bool branch_taken_0x1e4ff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4FF0u;
            // 0x1e4ff4: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4ff0) {
            ctx->pc = 0x1E5020u;
            goto label_1e5020;
        }
    }
    ctx->pc = 0x1E4FF8u;
    // 0x1e4ff8: 0x8c223534  lw          $v0, 0x3534($at)
    ctx->pc = 0x1e4ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13620)));
    // 0x1e4ffc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E4FFCu;
    {
        const bool branch_taken_0x1e4ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4FFCu;
            // 0x1e5000: 0x2404003b  addiu       $a0, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4ffc) {
            ctx->pc = 0x1E5020u;
            goto label_1e5020;
        }
    }
    ctx->pc = 0x1E5004u;
    // 0x1e5004: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1e5004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e5008: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e5008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e500c: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1E500Cu;
    SET_GPR_U32(ctx, 31, 0x1E5014u);
    ctx->pc = 0x1E5010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E500Cu;
            // 0x1e5010: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5014u; }
        if (ctx->pc != 0x1E5014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5014u; }
        if (ctx->pc != 0x1E5014u) { return; }
    }
    ctx->pc = 0x1E5014u;
    // 0x1e5014: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1E5014u;
    {
        const bool branch_taken_0x1e5014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5014) {
            ctx->pc = 0x1E50E0u;
            goto label_1e50e0;
        }
    }
    ctx->pc = 0x1E501Cu;
    // 0x1e501c: 0x0  nop
    ctx->pc = 0x1e501cu;
    // NOP
label_1e5020:
    // 0x1e5020: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E5020u;
    {
        const bool branch_taken_0x1e5020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5020u;
            // 0x1e5024: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5020) {
            ctx->pc = 0x1E5070u;
            goto label_1e5070;
        }
    }
    ctx->pc = 0x1E5028u;
    // 0x1e5028: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1e5028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1e502c: 0x8c243558  lw          $a0, 0x3558($at)
    ctx->pc = 0x1e502cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13656)));
    // 0x1e5030: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1e5030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1e5034: 0x2463ab40  addiu       $v1, $v1, -0x54C0
    ctx->pc = 0x1e5034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945600));
    // 0x1e5038: 0x2442ab60  addiu       $v0, $v0, -0x54A0
    ctx->pc = 0x1e5038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945632));
    // 0x1e503c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1e503cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e5040: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e5040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5044: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1e5044u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e5048: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e5048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e504c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e504cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5050: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e5050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e5054: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e5054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e5058: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e5058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e505c: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1E505Cu;
    SET_GPR_U32(ctx, 31, 0x1E5064u);
    ctx->pc = 0x1E5060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E505Cu;
            // 0x1e5060: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5064u; }
        if (ctx->pc != 0x1E5064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5064u; }
        if (ctx->pc != 0x1E5064u) { return; }
    }
    ctx->pc = 0x1E5064u;
    // 0x1e5064: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1E5064u;
    {
        const bool branch_taken_0x1e5064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5064) {
            ctx->pc = 0x1E50E0u;
            goto label_1e50e0;
        }
    }
    ctx->pc = 0x1E506Cu;
    // 0x1e506c: 0x0  nop
    ctx->pc = 0x1e506cu;
    // NOP
label_1e5070:
    // 0x1e5070: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1e5070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1e5074: 0x8c223534  lw          $v0, 0x3534($at)
    ctx->pc = 0x1e5074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13620)));
    // 0x1e5078: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E5078u;
    {
        const bool branch_taken_0x1e5078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E507Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5078u;
            // 0x1e507c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5078) {
            ctx->pc = 0x1E50C8u;
            goto label_1e50c8;
        }
    }
    ctx->pc = 0x1E5080u;
    // 0x1e5080: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1e5080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1e5084: 0x8c24355c  lw          $a0, 0x355C($at)
    ctx->pc = 0x1e5084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13660)));
    // 0x1e5088: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1e5088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1e508c: 0x2463ab40  addiu       $v1, $v1, -0x54C0
    ctx->pc = 0x1e508cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945600));
    // 0x1e5090: 0x2442ab60  addiu       $v0, $v0, -0x54A0
    ctx->pc = 0x1e5090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945632));
    // 0x1e5094: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1e5094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e5098: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e5098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e509c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1e509cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e50a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1e50a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e50a4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e50a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e50a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e50a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e50ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e50acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e50b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e50b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e50b4: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1E50B4u;
    SET_GPR_U32(ctx, 31, 0x1E50BCu);
    ctx->pc = 0x1E50B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E50B4u;
            // 0x1e50b8: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E50BCu; }
        if (ctx->pc != 0x1E50BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E50BCu; }
        if (ctx->pc != 0x1E50BCu) { return; }
    }
    ctx->pc = 0x1E50BCu;
    // 0x1e50bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E50BCu;
    {
        const bool branch_taken_0x1e50bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e50bc) {
            ctx->pc = 0x1E50E0u;
            goto label_1e50e0;
        }
    }
    ctx->pc = 0x1E50C4u;
    // 0x1e50c4: 0x0  nop
    ctx->pc = 0x1e50c4u;
    // NOP
label_1e50c8:
    // 0x1e50c8: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x1e50c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1e50cc: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1e50ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e50d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e50d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e50d4: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1E50D4u;
    SET_GPR_U32(ctx, 31, 0x1E50DCu);
    ctx->pc = 0x1E50D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E50D4u;
            // 0x1e50d8: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E50DCu; }
        if (ctx->pc != 0x1E50DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E50DCu; }
        if (ctx->pc != 0x1E50DCu) { return; }
    }
    ctx->pc = 0x1E50DCu;
    // 0x1e50dc: 0x0  nop
    ctx->pc = 0x1e50dcu;
    // NOP
label_1e50e0:
    // 0x1e50e0: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1E50E0u;
    SET_GPR_U32(ctx, 31, 0x1E50E8u);
    ctx->pc = 0x1E50E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E50E0u;
            // 0x1e50e4: 0x2404003f  addiu       $a0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E50E8u; }
        if (ctx->pc != 0x1E50E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E50E8u; }
        if (ctx->pc != 0x1E50E8u) { return; }
    }
    ctx->pc = 0x1E50E8u;
    // 0x1e50e8: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x1E50E8u;
    SET_GPR_U32(ctx, 31, 0x1E50F0u);
    ctx->pc = 0x1E50ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E50E8u;
            // 0x1e50ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E50F0u; }
        if (ctx->pc != 0x1E50F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E50F0u; }
        if (ctx->pc != 0x1E50F0u) { return; }
    }
    ctx->pc = 0x1E50F0u;
    // 0x1e50f0: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1E50F0u;
    SET_GPR_U32(ctx, 31, 0x1E50F8u);
    ctx->pc = 0x1E50F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E50F0u;
            // 0x1e50f4: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E50F8u; }
        if (ctx->pc != 0x1E50F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E50F8u; }
        if (ctx->pc != 0x1E50F8u) { return; }
    }
    ctx->pc = 0x1E50F8u;
    // 0x1e50f8: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x1E50F8u;
    SET_GPR_U32(ctx, 31, 0x1E5100u);
    ctx->pc = 0x1E50FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E50F8u;
            // 0x1e50fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5100u; }
        if (ctx->pc != 0x1E5100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5100u; }
        if (ctx->pc != 0x1E5100u) { return; }
    }
    ctx->pc = 0x1E5100u;
    // 0x1e5100: 0x2404003e  addiu       $a0, $zero, 0x3E
    ctx->pc = 0x1e5100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1e5104: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x1e5104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x1e5108: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e5108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e510c: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1E510Cu;
    SET_GPR_U32(ctx, 31, 0x1E5114u);
    ctx->pc = 0x1E5110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E510Cu;
            // 0x1e5110: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5114u; }
        if (ctx->pc != 0x1E5114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5114u; }
        if (ctx->pc != 0x1E5114u) { return; }
    }
    ctx->pc = 0x1E5114u;
    // 0x1e5114: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1e5114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1e5118: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x1e5118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1e511c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e511cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5120: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1E5120u;
    SET_GPR_U32(ctx, 31, 0x1E5128u);
    ctx->pc = 0x1E5124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5120u;
            // 0x1e5124: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5128u; }
        if (ctx->pc != 0x1E5128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5128u; }
        if (ctx->pc != 0x1E5128u) { return; }
    }
    ctx->pc = 0x1E5128u;
    // 0x1e5128: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1e5128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e512c: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x1e512cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1e5130: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e5130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5134: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1E5134u;
    SET_GPR_U32(ctx, 31, 0x1E513Cu);
    ctx->pc = 0x1E5138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5134u;
            // 0x1e5138: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E513Cu; }
        if (ctx->pc != 0x1E513Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E513Cu; }
        if (ctx->pc != 0x1E513Cu) { return; }
    }
    ctx->pc = 0x1E513Cu;
    // 0x1e513c: 0xc055d7c  jal         func_1575F0
    ctx->pc = 0x1E513Cu;
    SET_GPR_U32(ctx, 31, 0x1E5144u);
    ctx->pc = 0x1E5140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E513Cu;
            // 0x1e5140: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1575F0u;
    if (runtime->hasFunction(0x1575F0u)) {
        auto targetFn = runtime->lookupFunction(0x1575F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5144u; }
        if (ctx->pc != 0x1E5144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetExStageState_0x1575f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5144u; }
        if (ctx->pc != 0x1E5144u) { return; }
    }
    ctx->pc = 0x1E5144u;
    // 0x1e5144: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e5144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5148: 0xc055d7c  jal         func_1575F0
    ctx->pc = 0x1E5148u;
    SET_GPR_U32(ctx, 31, 0x1E5150u);
    ctx->pc = 0x1E514Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5148u;
            // 0x1e514c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1575F0u;
    if (runtime->hasFunction(0x1575F0u)) {
        auto targetFn = runtime->lookupFunction(0x1575F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5150u; }
        if (ctx->pc != 0x1E5150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetExStageState_0x1575f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5150u; }
        if (ctx->pc != 0x1E5150u) { return; }
    }
    ctx->pc = 0x1E5150u;
    // 0x1e5150: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e5150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5154: 0x1603000a  bne         $s0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E5154u;
    {
        const bool branch_taken_0x1e5154 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e5154) {
            ctx->pc = 0x1E5180u;
            goto label_1e5180;
        }
    }
    ctx->pc = 0x1E515Cu;
    // 0x1e515c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E515Cu;
    {
        const bool branch_taken_0x1e515c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E5160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E515Cu;
            // 0x1e5160: 0x24040044  addiu       $a0, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e515c) {
            ctx->pc = 0x1E5180u;
            goto label_1e5180;
        }
    }
    ctx->pc = 0x1E5164u;
    // 0x1e5164: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x1e5164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1e5168: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e5168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e516c: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1E516Cu;
    SET_GPR_U32(ctx, 31, 0x1E5174u);
    ctx->pc = 0x1E5170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E516Cu;
            // 0x1e5170: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5174u; }
        if (ctx->pc != 0x1E5174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5174u; }
        if (ctx->pc != 0x1E5174u) { return; }
    }
    ctx->pc = 0x1E5174u;
    // 0x1e5174: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1E5174u;
    {
        const bool branch_taken_0x1e5174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5174) {
            ctx->pc = 0x1E51F0u;
            goto label_1e51f0;
        }
    }
    ctx->pc = 0x1E517Cu;
    // 0x1e517c: 0x0  nop
    ctx->pc = 0x1e517cu;
    // NOP
label_1e5180:
    // 0x1e5180: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e5180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5184: 0x1603000a  bne         $s0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E5184u;
    {
        const bool branch_taken_0x1e5184 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e5184) {
            ctx->pc = 0x1E51B0u;
            goto label_1e51b0;
        }
    }
    ctx->pc = 0x1E518Cu;
    // 0x1e518c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E518Cu;
    {
        const bool branch_taken_0x1e518c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E518Cu;
            // 0x1e5190: 0x24040043  addiu       $a0, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e518c) {
            ctx->pc = 0x1E51B0u;
            goto label_1e51b0;
        }
    }
    ctx->pc = 0x1E5194u;
    // 0x1e5194: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x1e5194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1e5198: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e5198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e519c: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1E519Cu;
    SET_GPR_U32(ctx, 31, 0x1E51A4u);
    ctx->pc = 0x1E51A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E519Cu;
            // 0x1e51a0: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E51A4u; }
        if (ctx->pc != 0x1E51A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E51A4u; }
        if (ctx->pc != 0x1E51A4u) { return; }
    }
    ctx->pc = 0x1E51A4u;
    // 0x1e51a4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1E51A4u;
    {
        const bool branch_taken_0x1e51a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e51a4) {
            ctx->pc = 0x1E51F0u;
            goto label_1e51f0;
        }
    }
    ctx->pc = 0x1E51ACu;
    // 0x1e51ac: 0x0  nop
    ctx->pc = 0x1e51acu;
    // NOP
label_1e51b0:
    // 0x1e51b0: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E51B0u;
    {
        const bool branch_taken_0x1e51b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E51B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E51B0u;
            // 0x1e51b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e51b0) {
            ctx->pc = 0x1E51D8u;
            goto label_1e51d8;
        }
    }
    ctx->pc = 0x1E51B8u;
    // 0x1e51b8: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E51B8u;
    {
        const bool branch_taken_0x1e51b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E51BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E51B8u;
            // 0x1e51bc: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e51b8) {
            ctx->pc = 0x1E51D8u;
            goto label_1e51d8;
        }
    }
    ctx->pc = 0x1E51C0u;
    // 0x1e51c0: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x1e51c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1e51c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e51c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e51c8: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1E51C8u;
    SET_GPR_U32(ctx, 31, 0x1E51D0u);
    ctx->pc = 0x1E51CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E51C8u;
            // 0x1e51cc: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E51D0u; }
        if (ctx->pc != 0x1E51D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E51D0u; }
        if (ctx->pc != 0x1E51D0u) { return; }
    }
    ctx->pc = 0x1E51D0u;
    // 0x1e51d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E51D0u;
    {
        const bool branch_taken_0x1e51d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e51d0) {
            ctx->pc = 0x1E51F0u;
            goto label_1e51f0;
        }
    }
    ctx->pc = 0x1E51D8u;
label_1e51d8:
    // 0x1e51d8: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x1e51d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1e51dc: 0x24050036  addiu       $a1, $zero, 0x36
    ctx->pc = 0x1e51dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x1e51e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e51e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e51e4: 0xc05c20c  jal         func_170830
    ctx->pc = 0x1E51E4u;
    SET_GPR_U32(ctx, 31, 0x1E51ECu);
    ctx->pc = 0x1E51E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E51E4u;
            // 0x1e51e8: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E51ECu; }
        if (ctx->pc != 0x1E51ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsReadTim2rom_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E51ECu; }
        if (ctx->pc != 0x1E51ECu) { return; }
    }
    ctx->pc = 0x1E51ECu;
    // 0x1e51ec: 0x0  nop
    ctx->pc = 0x1e51ecu;
    // NOP
label_1e51f0:
    // 0x1e51f0: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1E51F0u;
    SET_GPR_U32(ctx, 31, 0x1E51F8u);
    ctx->pc = 0x1E51F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E51F0u;
            // 0x1e51f4: 0x24040033  addiu       $a0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E51F8u; }
        if (ctx->pc != 0x1E51F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E51F8u; }
        if (ctx->pc != 0x1E51F8u) { return; }
    }
    ctx->pc = 0x1E51F8u;
    // 0x1e51f8: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x1E51F8u;
    SET_GPR_U32(ctx, 31, 0x1E5200u);
    ctx->pc = 0x1E51FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E51F8u;
            // 0x1e51fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5200u; }
        if (ctx->pc != 0x1E5200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5200u; }
        if (ctx->pc != 0x1E5200u) { return; }
    }
    ctx->pc = 0x1E5200u;
    // 0x1e5200: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1E5200u;
    SET_GPR_U32(ctx, 31, 0x1E5208u);
    ctx->pc = 0x1E5204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5200u;
            // 0x1e5204: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5208u; }
        if (ctx->pc != 0x1E5208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5208u; }
        if (ctx->pc != 0x1E5208u) { return; }
    }
    ctx->pc = 0x1E5208u;
    // 0x1e5208: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x1E5208u;
    SET_GPR_U32(ctx, 31, 0x1E5210u);
    ctx->pc = 0x1E520Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5208u;
            // 0x1e520c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5210u; }
        if (ctx->pc != 0x1E5210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5210u; }
        if (ctx->pc != 0x1E5210u) { return; }
    }
    ctx->pc = 0x1E5210u;
    // 0x1e5210: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1E5210u;
    SET_GPR_U32(ctx, 31, 0x1E5218u);
    ctx->pc = 0x1E5214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5210u;
            // 0x1e5214: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5218u; }
        if (ctx->pc != 0x1E5218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5218u; }
        if (ctx->pc != 0x1E5218u) { return; }
    }
    ctx->pc = 0x1E5218u;
    // 0x1e5218: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x1E5218u;
    SET_GPR_U32(ctx, 31, 0x1E5220u);
    ctx->pc = 0x1E521Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5218u;
            // 0x1e521c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5220u; }
        if (ctx->pc != 0x1E5220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5220u; }
        if (ctx->pc != 0x1E5220u) { return; }
    }
    ctx->pc = 0x1E5220u;
    // 0x1e5220: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1E5220u;
    SET_GPR_U32(ctx, 31, 0x1E5228u);
    ctx->pc = 0x1E5224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5220u;
            // 0x1e5224: 0x24040036  addiu       $a0, $zero, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5228u; }
        if (ctx->pc != 0x1E5228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5228u; }
        if (ctx->pc != 0x1E5228u) { return; }
    }
    ctx->pc = 0x1E5228u;
    // 0x1e5228: 0xc05c1c0  jal         func_170700
    ctx->pc = 0x1E5228u;
    SET_GPR_U32(ctx, 31, 0x1E5230u);
    ctx->pc = 0x1E522Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5228u;
            // 0x1e522c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170700u;
    if (runtime->hasFunction(0x170700u)) {
        auto targetFn = runtime->lookupFunction(0x170700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5230u; }
        if (ctx->pc != 0x1E5230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDeleteTim2_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5230u; }
        if (ctx->pc != 0x1E5230u) { return; }
    }
    ctx->pc = 0x1E5230u;
    // 0x1e5230: 0x3c02c380  lui         $v0, 0xC380
    ctx->pc = 0x1e5230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50048 << 16));
    // 0x1e5234: 0x3c03c360  lui         $v1, 0xC360
    ctx->pc = 0x1e5234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50016 << 16));
    // 0x1e5238: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e5238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e523c: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x1e523cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x1e5240: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1e5240u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1e5244: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x1e5244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
    // 0x1e5248: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x1e5248u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)9216u)));
    // 0x1e524c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1e524cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1e5250: 0xc079578  jal         func_1E55E0
    ctx->pc = 0x1E5250u;
    SET_GPR_U32(ctx, 31, 0x1E5258u);
    ctx->pc = 0x1E5254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5250u;
            // 0x1e5254: 0x24842de0  addiu       $a0, $a0, 0x2DE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E55E0u;
    if (runtime->hasFunction(0x1E55E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E55E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5258u; }
        if (ctx->pc != 0x1E5258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1e55e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5258u; }
        if (ctx->pc != 0x1E5258u) { return; }
    }
    ctx->pc = 0x1E5258u;
    // 0x1e5258: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x1e5258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x1e525c: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x1e525cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x1e5260: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1e5260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e5264: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x1e5264u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x1e5268: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1e5268u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1e526c: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x1e526cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
    // 0x1e5270: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x1e5270u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)9216u)));
    // 0x1e5274: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1e5274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1e5278: 0xc079578  jal         func_1E55E0
    ctx->pc = 0x1E5278u;
    SET_GPR_U32(ctx, 31, 0x1E5280u);
    ctx->pc = 0x1E527Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5278u;
            // 0x1e527c: 0x24842df0  addiu       $a0, $a0, 0x2DF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E55E0u;
    if (runtime->hasFunction(0x1E55E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E55E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5280u; }
        if (ctx->pc != 0x1E5280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXYZf_0x1e55e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5280u; }
        if (ctx->pc != 0x1E5280u) { return; }
    }
    ctx->pc = 0x1E5280u;
    // 0x1e5280: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x1e5280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x1e5284: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e5284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5288: 0x24842dc0  addiu       $a0, $a0, 0x2DC0
    ctx->pc = 0x1e5288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11712));
    // 0x1e528c: 0xc07956c  jal         func_1E55B0
    ctx->pc = 0x1E528Cu;
    SET_GPR_U32(ctx, 31, 0x1E5294u);
    ctx->pc = 0x1E5290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E528Cu;
            // 0x1e5290: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E55B0u;
    if (runtime->hasFunction(0x1E55B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E55B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5294u; }
        if (ctx->pc != 0x1E5294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1e55b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5294u; }
        if (ctx->pc != 0x1E5294u) { return; }
    }
    ctx->pc = 0x1E5294u;
    // 0x1e5294: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x1e5294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x1e5298: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x1e5298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1e529c: 0x24842dd0  addiu       $a0, $a0, 0x2DD0
    ctx->pc = 0x1e529cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11728));
    // 0x1e52a0: 0xc07956c  jal         func_1E55B0
    ctx->pc = 0x1E52A0u;
    SET_GPR_U32(ctx, 31, 0x1E52A8u);
    ctx->pc = 0x1E52A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E52A0u;
            // 0x1e52a4: 0x240601c0  addiu       $a2, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E55B0u;
    if (runtime->hasFunction(0x1E55B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E55B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E52A8u; }
        if (ctx->pc != 0x1E52A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetVertexXY_0x1e55b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E52A8u; }
        if (ctx->pc != 0x1E52A8u) { return; }
    }
    ctx->pc = 0x1E52A8u;
    // 0x1e52a8: 0xc05d004  jal         func_174010
    ctx->pc = 0x1E52A8u;
    SET_GPR_U32(ctx, 31, 0x1E52B0u);
    ctx->pc = 0x1E52ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E52A8u;
            // 0x1e52ac: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174010u;
    if (runtime->hasFunction(0x174010u)) {
        auto targetFn = runtime->lookupFunction(0x174010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E52B0u; }
        if (ctx->pc != 0x1E52B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_bgm_0x174010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E52B0u; }
        if (ctx->pc != 0x1E52B0u) { return; }
    }
    ctx->pc = 0x1E52B0u;
    // 0x1e52b0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1e52b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e52b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e52b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e52b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e52b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e52bc: 0x27b50084  addiu       $s5, $sp, 0x84
    ctx->pc = 0x1e52bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x1e52c0: 0x27b4008c  addiu       $s4, $sp, 0x8C
    ctx->pc = 0x1e52c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x1e52c4: 0x27b30088  addiu       $s3, $sp, 0x88
    ctx->pc = 0x1e52c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x1e52c8: 0x27b60090  addiu       $s6, $sp, 0x90
    ctx->pc = 0x1e52c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1e52cc: 0x0  nop
    ctx->pc = 0x1e52ccu;
    // NOP
label_1e52d0:
    // 0x1e52d0: 0xc050af4  jal         func_142BD0
    ctx->pc = 0x1E52D0u;
    SET_GPR_U32(ctx, 31, 0x1E52D8u);
    ctx->pc = 0x142BD0u;
    if (runtime->hasFunction(0x142BD0u)) {
        auto targetFn = runtime->lookupFunction(0x142BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E52D8u; }
        if (ctx->pc != 0x1E52D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsLeaveTask_0x142bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E52D8u; }
        if (ctx->pc != 0x1E52D8u) { return; }
    }
    ctx->pc = 0x1E52D8u;
    // 0x1e52d8: 0x2a210040  slti        $at, $s1, 0x40
    ctx->pc = 0x1e52d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1e52dc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E52DCu;
    {
        const bool branch_taken_0x1e52dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e52dc) {
            ctx->pc = 0x1E52F0u;
            goto label_1e52f0;
        }
    }
    ctx->pc = 0x1E52E4u;
    // 0x1e52e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E52E4u;
    {
        const bool branch_taken_0x1e52e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E52E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E52E4u;
            // 0x1e52e8: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e52e4) {
            ctx->pc = 0x1E5318u;
            goto label_1e5318;
        }
    }
    ctx->pc = 0x1E52ECu;
    // 0x1e52ec: 0x0  nop
    ctx->pc = 0x1e52ecu;
    // NOP
label_1e52f0:
    // 0x1e52f0: 0x2a220258  slti        $v0, $s1, 0x258
    ctx->pc = 0x1e52f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x1e52f4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E52F4u;
    {
        const bool branch_taken_0x1e52f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E52F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E52F4u;
            // 0x1e52f8: 0x2a210298  slti        $at, $s1, 0x298 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)664) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e52f4) {
            ctx->pc = 0x1E5318u;
            goto label_1e5318;
        }
    }
    ctx->pc = 0x1E52FCu;
    // 0x1e52fc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E52FCu;
    {
        const bool branch_taken_0x1e52fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e52fc) {
            ctx->pc = 0x1E5310u;
            goto label_1e5310;
        }
    }
    ctx->pc = 0x1E5304u;
    // 0x1e5304: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5304u;
    {
        const bool branch_taken_0x1e5304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5304u;
            // 0x1e5308: 0x2610fffe  addiu       $s0, $s0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5304) {
            ctx->pc = 0x1E5318u;
            goto label_1e5318;
        }
    }
    ctx->pc = 0x1E530Cu;
    // 0x1e530c: 0x0  nop
    ctx->pc = 0x1e530cu;
    // NOP
label_1e5310:
    // 0x1e5310: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e5310u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5314: 0x0  nop
    ctx->pc = 0x1e5314u;
    // NOP
label_1e5318:
    // 0x1e5318: 0x2a010081  slti        $at, $s0, 0x81
    ctx->pc = 0x1e5318u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1e531c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E531Cu;
    {
        const bool branch_taken_0x1e531c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e531c) {
            ctx->pc = 0x1E5328u;
            goto label_1e5328;
        }
    }
    ctx->pc = 0x1E5324u;
    // 0x1e5324: 0x24100080  addiu       $s0, $zero, 0x80
    ctx->pc = 0x1e5324u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e5328:
    // 0x1e5328: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5328u;
    {
        const bool branch_taken_0x1e5328 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1e5328) {
            ctx->pc = 0x1E5338u;
            goto label_1e5338;
        }
    }
    ctx->pc = 0x1E5330u;
    // 0x1e5330: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e5330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5334: 0x0  nop
    ctx->pc = 0x1e5334u;
    // NOP
label_1e5338:
    // 0x1e5338: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1e5338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1e533c: 0x8c2525d8  lw          $a1, 0x25D8($at)
    ctx->pc = 0x1e533cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9688)));
    // 0x1e5340: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1e5340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1e5344: 0x8c242568  lw          $a0, 0x2568($at)
    ctx->pc = 0x1e5344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9576)));
    // 0x1e5348: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1e5348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1e534c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1e534cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1e5350: 0x8c2325d0  lw          $v1, 0x25D0($at)
    ctx->pc = 0x1e5350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9680)));
    // 0x1e5354: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1e5354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1e5358: 0x8c222560  lw          $v0, 0x2560($at)
    ctx->pc = 0x1e5358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9568)));
    // 0x1e535c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1e535cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1e5360: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1e5360u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1e5364: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E5364u;
    {
        const bool branch_taken_0x1e5364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5364u;
            // 0x1e5368: 0x2a210041  slti        $at, $s1, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5364) {
            ctx->pc = 0x1E5388u;
            goto label_1e5388;
        }
    }
    ctx->pc = 0x1E536Cu;
    // 0x1e536c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E536Cu;
    {
        const bool branch_taken_0x1e536c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e536c) {
            ctx->pc = 0x1E5388u;
            goto label_1e5388;
        }
    }
    ctx->pc = 0x1E5374u;
    // 0x1e5374: 0x2a210258  slti        $at, $s1, 0x258
    ctx->pc = 0x1e5374u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x1e5378: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5378u;
    {
        const bool branch_taken_0x1e5378 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5378) {
            ctx->pc = 0x1E5388u;
            goto label_1e5388;
        }
    }
    ctx->pc = 0x1E5380u;
    // 0x1e5380: 0x24110258  addiu       $s1, $zero, 0x258
    ctx->pc = 0x1e5380u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x1e5384: 0x0  nop
    ctx->pc = 0x1e5384u;
    // NOP
label_1e5388:
    // 0x1e5388: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1e5388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e538c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1e538cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1e5390: 0x320800ff  andi        $t0, $s0, 0xFF
    ctx->pc = 0x1e5390u;
    SET_GPR_VEC(ctx, 8, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)255u)));
    // 0x1e5394: 0x2484ab30  addiu       $a0, $a0, -0x54D0
    ctx->pc = 0x1e5394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945584));
    // 0x1e5398: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1e5398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e539c: 0xc079564  jal         func_1E5590
    ctx->pc = 0x1E539Cu;
    SET_GPR_U32(ctx, 31, 0x1E53A4u);
    ctx->pc = 0x1E53A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E539Cu;
            // 0x1e53a0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5590u;
    if (runtime->hasFunction(0x1E5590u)) {
        auto targetFn = runtime->lookupFunction(0x1E5590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E53A4u; }
        if (ctx->pc != 0x1E53A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1e5590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E53A4u; }
        if (ctx->pc != 0x1E53A4u) { return; }
    }
    ctx->pc = 0x1E53A4u;
    // 0x1e53a4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1e53a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1e53a8: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1e53a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1e53ac: 0x24422de0  addiu       $v0, $v0, 0x2DE0
    ctx->pc = 0x1e53acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11744));
    // 0x1e53b0: 0x2463ab30  addiu       $v1, $v1, -0x54D0
    ctx->pc = 0x1e53b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945584));
    // 0x1e53b4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1e53b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x1e53b8: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x1e53b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1e53bc: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1e53bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1e53c0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1e53c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x1e53c4: 0x24422dc0  addiu       $v0, $v0, 0x2DC0
    ctx->pc = 0x1e53c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
    // 0x1e53c8: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1E53C8u;
    SET_GPR_U32(ctx, 31, 0x1E53D0u);
    ctx->pc = 0x1E53CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E53C8u;
            // 0x1e53cc: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E53D0u; }
        if (ctx->pc != 0x1E53D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E53D0u; }
        if (ctx->pc != 0x1E53D0u) { return; }
    }
    ctx->pc = 0x1E53D0u;
    // 0x1e53d0: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1e53d0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1e53d4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1e53d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e53d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e53d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e53dc: 0xc079560  jal         func_1E5580
    ctx->pc = 0x1E53DCu;
    SET_GPR_U32(ctx, 31, 0x1E53E4u);
    ctx->pc = 0x1E53E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E53DCu;
            // 0x1e53e0: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5580u;
    if (runtime->hasFunction(0x1E5580u)) {
        auto targetFn = runtime->lookupFunction(0x1E5580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E53E4u; }
        if (ctx->pc != 0x1E53E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1e5580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E53E4u; }
        if (ctx->pc != 0x1E53E4u) { return; }
    }
    ctx->pc = 0x1E53E4u;
    // 0x1e53e4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1e53e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e53e8: 0xc07955c  jal         func_1E5570
    ctx->pc = 0x1E53E8u;
    SET_GPR_U32(ctx, 31, 0x1E53F0u);
    ctx->pc = 0x1E53ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E53E8u;
            // 0x1e53ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5570u;
    if (runtime->hasFunction(0x1E5570u)) {
        auto targetFn = runtime->lookupFunction(0x1E5570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E53F0u; }
        if (ctx->pc != 0x1E53F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1e5570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E53F0u; }
        if (ctx->pc != 0x1E53F0u) { return; }
    }
    ctx->pc = 0x1E53F0u;
    // 0x1e53f0: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x1E53F0u;
    SET_GPR_U32(ctx, 31, 0x1E53F8u);
    ctx->pc = 0x1E53F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E53F0u;
            // 0x1e53f4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E53F8u; }
        if (ctx->pc != 0x1E53F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E53F8u; }
        if (ctx->pc != 0x1E53F8u) { return; }
    }
    ctx->pc = 0x1E53F8u;
    // 0x1e53f8: 0x1640ffb5  bnez        $s2, . + 4 + (-0x4B << 2)
    ctx->pc = 0x1E53F8u;
    {
        const bool branch_taken_0x1e53f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E53FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E53F8u;
            // 0x1e53fc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e53f8) {
            ctx->pc = 0x1E52D0u;
            goto label_1e52d0;
        }
    }
    ctx->pc = 0x1E5400u;
    // 0x1e5400: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1e5400u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5404: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e5404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5408: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e5408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e540c: 0x0  nop
    ctx->pc = 0x1e540cu;
    // NOP
label_1e5410:
    // 0x1e5410: 0xc050af4  jal         func_142BD0
    ctx->pc = 0x1E5410u;
    SET_GPR_U32(ctx, 31, 0x1E5418u);
    ctx->pc = 0x142BD0u;
    if (runtime->hasFunction(0x142BD0u)) {
        auto targetFn = runtime->lookupFunction(0x142BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5418u; }
        if (ctx->pc != 0x1E5418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsLeaveTask_0x142bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5418u; }
        if (ctx->pc != 0x1E5418u) { return; }
    }
    ctx->pc = 0x1E5418u;
    // 0x1e5418: 0x2a210040  slti        $at, $s1, 0x40
    ctx->pc = 0x1e5418u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x1e541c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E541Cu;
    {
        const bool branch_taken_0x1e541c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e541c) {
            ctx->pc = 0x1E5430u;
            goto label_1e5430;
        }
    }
    ctx->pc = 0x1E5424u;
    // 0x1e5424: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1E5424u;
    {
        const bool branch_taken_0x1e5424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5424u;
            // 0x1e5428: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5424) {
            ctx->pc = 0x1E5458u;
            goto label_1e5458;
        }
    }
    ctx->pc = 0x1E542Cu;
    // 0x1e542c: 0x0  nop
    ctx->pc = 0x1e542cu;
    // NOP
label_1e5430:
    // 0x1e5430: 0x2a220258  slti        $v0, $s1, 0x258
    ctx->pc = 0x1e5430u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x1e5434: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E5434u;
    {
        const bool branch_taken_0x1e5434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5434u;
            // 0x1e5438: 0x2a210298  slti        $at, $s1, 0x298 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)664) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5434) {
            ctx->pc = 0x1E5458u;
            goto label_1e5458;
        }
    }
    ctx->pc = 0x1E543Cu;
    // 0x1e543c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E543Cu;
    {
        const bool branch_taken_0x1e543c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e543c) {
            ctx->pc = 0x1E5450u;
            goto label_1e5450;
        }
    }
    ctx->pc = 0x1E5444u;
    // 0x1e5444: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5444u;
    {
        const bool branch_taken_0x1e5444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5444u;
            // 0x1e5448: 0x2610fffe  addiu       $s0, $s0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5444) {
            ctx->pc = 0x1E5458u;
            goto label_1e5458;
        }
    }
    ctx->pc = 0x1E544Cu;
    // 0x1e544c: 0x0  nop
    ctx->pc = 0x1e544cu;
    // NOP
label_1e5450:
    // 0x1e5450: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e5450u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5454: 0x0  nop
    ctx->pc = 0x1e5454u;
    // NOP
label_1e5458:
    // 0x1e5458: 0x2a010081  slti        $at, $s0, 0x81
    ctx->pc = 0x1e5458u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)129) ? 1 : 0);
    // 0x1e545c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E545Cu;
    {
        const bool branch_taken_0x1e545c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e545c) {
            ctx->pc = 0x1E5468u;
            goto label_1e5468;
        }
    }
    ctx->pc = 0x1E5464u;
    // 0x1e5464: 0x24100080  addiu       $s0, $zero, 0x80
    ctx->pc = 0x1e5464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e5468:
    // 0x1e5468: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5468u;
    {
        const bool branch_taken_0x1e5468 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1e5468) {
            ctx->pc = 0x1E5478u;
            goto label_1e5478;
        }
    }
    ctx->pc = 0x1E5470u;
    // 0x1e5470: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e5470u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5474: 0x0  nop
    ctx->pc = 0x1e5474u;
    // NOP
label_1e5478:
    // 0x1e5478: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1e5478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1e547c: 0x8c2525d8  lw          $a1, 0x25D8($at)
    ctx->pc = 0x1e547cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9688)));
    // 0x1e5480: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1e5480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1e5484: 0x8c242568  lw          $a0, 0x2568($at)
    ctx->pc = 0x1e5484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9576)));
    // 0x1e5488: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1e5488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1e548c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x1e548cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x1e5490: 0x8c2325d0  lw          $v1, 0x25D0($at)
    ctx->pc = 0x1e5490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9680)));
    // 0x1e5494: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1e5494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1e5498: 0x8c222560  lw          $v0, 0x2560($at)
    ctx->pc = 0x1e5498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9568)));
    // 0x1e549c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1e549cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1e54a0: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x1e54a0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1e54a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E54A4u;
    {
        const bool branch_taken_0x1e54a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E54A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E54A4u;
            // 0x1e54a8: 0x2a210041  slti        $at, $s1, 0x41 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)65) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e54a4) {
            ctx->pc = 0x1E54C8u;
            goto label_1e54c8;
        }
    }
    ctx->pc = 0x1E54ACu;
    // 0x1e54ac: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E54ACu;
    {
        const bool branch_taken_0x1e54ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e54ac) {
            ctx->pc = 0x1E54C8u;
            goto label_1e54c8;
        }
    }
    ctx->pc = 0x1E54B4u;
    // 0x1e54b4: 0x2a210258  slti        $at, $s1, 0x258
    ctx->pc = 0x1e54b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x1e54b8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E54B8u;
    {
        const bool branch_taken_0x1e54b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e54b8) {
            ctx->pc = 0x1E54C8u;
            goto label_1e54c8;
        }
    }
    ctx->pc = 0x1E54C0u;
    // 0x1e54c0: 0x24110258  addiu       $s1, $zero, 0x258
    ctx->pc = 0x1e54c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x1e54c4: 0x0  nop
    ctx->pc = 0x1e54c4u;
    // NOP
label_1e54c8:
    // 0x1e54c8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1e54c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e54cc: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1e54ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1e54d0: 0x320800ff  andi        $t0, $s0, 0xFF
    ctx->pc = 0x1e54d0u;
    SET_GPR_VEC(ctx, 8, PS2_PAND(GPR_VEC(ctx, 16), _mm_cvtsi32_si128((int)255u)));
    // 0x1e54d4: 0x2484ab30  addiu       $a0, $a0, -0x54D0
    ctx->pc = 0x1e54d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945584));
    // 0x1e54d8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1e54d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e54dc: 0xc079564  jal         func_1E5590
    ctx->pc = 0x1E54DCu;
    SET_GPR_U32(ctx, 31, 0x1E54E4u);
    ctx->pc = 0x1E54E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E54DCu;
            // 0x1e54e0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5590u;
    if (runtime->hasFunction(0x1E5590u)) {
        auto targetFn = runtime->lookupFunction(0x1E5590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E54E4u; }
        if (ctx->pc != 0x1E54E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetColorRGBA_0x1e5590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E54E4u; }
        if (ctx->pc != 0x1E54E4u) { return; }
    }
    ctx->pc = 0x1E54E4u;
    // 0x1e54e4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1e54e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1e54e8: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1e54e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1e54ec: 0x24422de0  addiu       $v0, $v0, 0x2DE0
    ctx->pc = 0x1e54ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11744));
    // 0x1e54f0: 0x2463ab30  addiu       $v1, $v1, -0x54D0
    ctx->pc = 0x1e54f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945584));
    // 0x1e54f4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x1e54f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x1e54f8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1e54f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e54fc: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1e54fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1e5500: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1e5500u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x1e5504: 0x24422dc0  addiu       $v0, $v0, 0x2DC0
    ctx->pc = 0x1e5504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11712));
    // 0x1e5508: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1E5508u;
    SET_GPR_U32(ctx, 31, 0x1E5510u);
    ctx->pc = 0x1E550Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5508u;
            // 0x1e550c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5510u; }
        if (ctx->pc != 0x1E5510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5510u; }
        if (ctx->pc != 0x1E5510u) { return; }
    }
    ctx->pc = 0x1E5510u;
    // 0x1e5510: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1e5510u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1e5514: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1e5514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e5518: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1e5518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e551c: 0xc079560  jal         func_1E5580
    ctx->pc = 0x1E551Cu;
    SET_GPR_U32(ctx, 31, 0x1E5524u);
    ctx->pc = 0x1E5520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E551Cu;
            // 0x1e5520: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5580u;
    if (runtime->hasFunction(0x1E5580u)) {
        auto targetFn = runtime->lookupFunction(0x1E5580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5524u; }
        if (ctx->pc != 0x1E5524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1e5580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5524u; }
        if (ctx->pc != 0x1E5524u) { return; }
    }
    ctx->pc = 0x1E5524u;
    // 0x1e5524: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1e5524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1e5528: 0xc07955c  jal         func_1E5570
    ctx->pc = 0x1E5528u;
    SET_GPR_U32(ctx, 31, 0x1E5530u);
    ctx->pc = 0x1E552Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5528u;
            // 0x1e552c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E5570u;
    if (runtime->hasFunction(0x1E5570u)) {
        auto targetFn = runtime->lookupFunction(0x1E5570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5530u; }
        if (ctx->pc != 0x1E5530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1e5570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5530u; }
        if (ctx->pc != 0x1E5530u) { return; }
    }
    ctx->pc = 0x1E5530u;
    // 0x1e5530: 0xc05c2a4  jal         func_170A90
    ctx->pc = 0x1E5530u;
    SET_GPR_U32(ctx, 31, 0x1E5538u);
    ctx->pc = 0x1E5534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5530u;
            // 0x1e5534: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A90u;
    if (runtime->hasFunction(0x170A90u)) {
        auto targetFn = runtime->lookupFunction(0x170A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5538u; }
        if (ctx->pc != 0x1E5538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFMTU_0x170a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5538u; }
        if (ctx->pc != 0x1E5538u) { return; }
    }
    ctx->pc = 0x1E5538u;
    // 0x1e5538: 0x1640ffb5  bnez        $s2, . + 4 + (-0x4B << 2)
    ctx->pc = 0x1E5538u;
    {
        const bool branch_taken_0x1e5538 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E553Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5538u;
            // 0x1e553c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5538) {
            ctx->pc = 0x1E5410u;
            goto label_1e5410;
        }
    }
    ctx->pc = 0x1E5540u;
    // 0x1e5540: 0xc050af4  jal         func_142BD0
    ctx->pc = 0x1E5540u;
    SET_GPR_U32(ctx, 31, 0x1E5548u);
    ctx->pc = 0x142BD0u;
    if (runtime->hasFunction(0x142BD0u)) {
        auto targetFn = runtime->lookupFunction(0x142BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5548u; }
        if (ctx->pc != 0x1E5548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsLeaveTask_0x142bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5548u; }
        if (ctx->pc != 0x1E5548u) { return; }
    }
    ctx->pc = 0x1E5548u;
    // 0x1e5548: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1e5548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e554c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1e554cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e5550: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1e5550u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e5554: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1e5554u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e5558: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e5558u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e555c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e555cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5560: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e5560u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5564: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e5564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5568: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E556Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5568u;
            // 0x1e556c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5020u: goto label_1e5020;
            case 0x1E5070u: goto label_1e5070;
            case 0x1E50C8u: goto label_1e50c8;
            case 0x1E50E0u: goto label_1e50e0;
            case 0x1E5180u: goto label_1e5180;
            case 0x1E51B0u: goto label_1e51b0;
            case 0x1E51D8u: goto label_1e51d8;
            case 0x1E51F0u: goto label_1e51f0;
            case 0x1E52D0u: goto label_1e52d0;
            case 0x1E52F0u: goto label_1e52f0;
            case 0x1E5310u: goto label_1e5310;
            case 0x1E5318u: goto label_1e5318;
            case 0x1E5328u: goto label_1e5328;
            case 0x1E5338u: goto label_1e5338;
            case 0x1E5388u: goto label_1e5388;
            case 0x1E5410u: goto label_1e5410;
            case 0x1E5430u: goto label_1e5430;
            case 0x1E5450u: goto label_1e5450;
            case 0x1E5458u: goto label_1e5458;
            case 0x1E5468u: goto label_1e5468;
            case 0x1E5478u: goto label_1e5478;
            case 0x1E54C8u: goto label_1e54c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E5570u;
}
