#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: drawChar
// Address: 0x15ceb0 - 0x15d074
void drawChar_0x15ceb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("drawChar_0x15ceb0");
#endif

    ctx->pc = 0x15ceb0u;

    // 0x15ceb0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x15ceb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x15ceb4: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x15ceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x15ceb8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x15ceb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x15cebc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15cebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15cec0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x15cec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x15cec4: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15cec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x15cec8: 0x27be00b8  addiu       $fp, $sp, 0xB8
    ctx->pc = 0x15cec8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x15cecc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15ceccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x15ced0: 0x27b700b4  addiu       $s7, $sp, 0xB4
    ctx->pc = 0x15ced0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x15ced4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15ced4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15ced8: 0x27b600c0  addiu       $s6, $sp, 0xC0
    ctx->pc = 0x15ced8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x15cedc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15cedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15cee0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x15cee0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cee4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15cee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15cee8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x15cee8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ceec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15ceecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15cef0: 0x29840  sll         $s3, $v0, 1
    ctx->pc = 0x15cef0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x15cef4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15cef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15cef8: 0x3c120030  lui         $s2, 0x30
    ctx->pc = 0x15cef8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)48 << 16));
    // 0x15cefc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15cefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15cf00: 0x3c110030  lui         $s1, 0x30
    ctx->pc = 0x15cf00u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
    // 0x15cf04: 0xafa500ac  sw          $a1, 0xAC($sp)
    ctx->pc = 0x15cf04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 5));
    // 0x15cf08: 0x26523a70  addiu       $s2, $s2, 0x3A70
    ctx->pc = 0x15cf08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 14960));
    // 0x15cf0c: 0x263138f0  addiu       $s1, $s1, 0x38F0
    ctx->pc = 0x15cf0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 14576));
    // 0x15cf10: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x15cf10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15cf14: 0x0  nop
    ctx->pc = 0x15cf14u;
    // NOP
label_15cf18:
    // 0x15cf18: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x15cf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x15cf1c: 0x16820010  bne         $s4, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x15CF1Cu;
    {
        const bool branch_taken_0x15cf1c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x15CF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CF1Cu;
            // 0x15cf20: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cf1c) {
            ctx->pc = 0x15CF60u;
            goto label_15cf60;
        }
    }
    ctx->pc = 0x15CF24u;
    // 0x15cf24: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x15cf24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x15cf28: 0x244238c0  addiu       $v0, $v0, 0x38C0
    ctx->pc = 0x15cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14528));
    // 0x15cf2c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x15cf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15cf30: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x15cf30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x15cf34: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x15cf34u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x15cf38: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x15CF38u;
    {
        const bool branch_taken_0x15cf38 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CF38u;
            // 0x15cf3c: 0x24830003  addiu       $v1, $a0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cf38) {
            ctx->pc = 0x15CF50u;
            goto label_15cf50;
        }
    }
    ctx->pc = 0x15CF40u;
    // 0x15cf40: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x15cf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x15cf44: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x15CF44u;
    {
        const bool branch_taken_0x15cf44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CF44u;
            // 0x15cf48: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cf44) {
            ctx->pc = 0x15CF90u;
            goto label_15cf90;
        }
    }
    ctx->pc = 0x15CF4Cu;
    // 0x15cf4c: 0x0  nop
    ctx->pc = 0x15cf4cu;
    // NOP
label_15cf50:
    // 0x15cf50: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x15cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x15cf54: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15CF54u;
    {
        const bool branch_taken_0x15cf54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CF54u;
            // 0x15cf58: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cf54) {
            ctx->pc = 0x15CF90u;
            goto label_15cf90;
        }
    }
    ctx->pc = 0x15CF5Cu;
    // 0x15cf5c: 0x0  nop
    ctx->pc = 0x15cf5cu;
    // NOP
label_15cf60:
    // 0x15cf60: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15cf60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15cf64: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x15cf64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x15cf68: 0x244238c0  addiu       $v0, $v0, 0x38C0
    ctx->pc = 0x15cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14528));
    // 0x15cf6c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x15cf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15cf70: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x15cf70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x15cf74: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15CF74u;
    {
        const bool branch_taken_0x15cf74 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x15CF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CF74u;
            // 0x15cf78: 0x24830003  addiu       $v1, $a0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cf74) {
            ctx->pc = 0x15CF88u;
            goto label_15cf88;
        }
    }
    ctx->pc = 0x15CF7Cu;
    // 0x15cf7c: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x15cf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x15cf80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15CF80u;
    {
        const bool branch_taken_0x15cf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CF80u;
            // 0x15cf84: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cf80) {
            ctx->pc = 0x15CF90u;
            goto label_15cf90;
        }
    }
    ctx->pc = 0x15CF88u;
label_15cf88:
    // 0x15cf88: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x15cf88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x15cf8c: 0x0  nop
    ctx->pc = 0x15cf8cu;
    // NOP
label_15cf90:
    // 0x15cf90: 0x27a200bc  addiu       $v0, $sp, 0xBC
    ctx->pc = 0x15cf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
    // 0x15cf94: 0x2e810006  sltiu       $at, $s4, 0x6
    ctx->pc = 0x15cf94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x15cf98: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x15CF98u;
    {
        const bool branch_taken_0x15cf98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CF98u;
            // 0x15cf9c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cf98) {
            ctx->pc = 0x15CFE0u;
            goto label_15cfe0;
        }
    }
    ctx->pc = 0x15CFA0u;
    // 0x15cfa0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x15cfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x15cfa4: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x15cfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x15cfa8: 0x24631030  addiu       $v1, $v1, 0x1030
    ctx->pc = 0x15cfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4144));
    // 0x15cfac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15cfb0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15cfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15cfb4: 0x400008  jr          $v0
    ctx->pc = 0x15CFB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15CFC0u: goto label_15cfc0;
            case 0x15CFD0u: goto label_15cfd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15CFBCu;
    // 0x15cfbc: 0x0  nop
    ctx->pc = 0x15cfbcu;
    // NOP
label_15cfc0:
    // 0x15cfc0: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15CFC0u;
    SET_GPR_U32(ctx, 31, 0x15CFC8u);
    ctx->pc = 0x15CFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CFC0u;
            // 0x15cfc4: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CFC8u; }
        if (ctx->pc != 0x15CFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CFC8u; }
        if (ctx->pc != 0x15CFC8u) { return; }
    }
    ctx->pc = 0x15CFC8u;
    // 0x15cfc8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15CFC8u;
    {
        const bool branch_taken_0x15cfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CFC8u;
            // 0x15cfcc: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cfc8) {
            ctx->pc = 0x15CFE0u;
            goto label_15cfe0;
        }
    }
    ctx->pc = 0x15CFD0u;
label_15cfd0:
    // 0x15cfd0: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15CFD0u;
    SET_GPR_U32(ctx, 31, 0x15CFD8u);
    ctx->pc = 0x15CFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CFD0u;
            // 0x15cfd4: 0x2404003b  addiu       $a0, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CFD8u; }
        if (ctx->pc != 0x15CFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CFD8u; }
        if (ctx->pc != 0x15CFD8u) { return; }
    }
    ctx->pc = 0x15CFD8u;
    // 0x15cfd8: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x15cfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x15cfdc: 0x0  nop
    ctx->pc = 0x15cfdcu;
    // NOP
label_15cfe0:
    // 0x15cfe0: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x15CFE0u;
    {
        const bool branch_taken_0x15cfe0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cfe0) {
            ctx->pc = 0x15CFF8u;
            goto label_15cff8;
        }
    }
    ctx->pc = 0x15CFE8u;
    // 0x15cfe8: 0xaef20000  sw          $s2, 0x0($s7)
    ctx->pc = 0x15cfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 18));
    // 0x15cfec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15CFECu;
    {
        const bool branch_taken_0x15cfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CFECu;
            // 0x15cff0: 0xafd10000  sw          $s1, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cfec) {
            ctx->pc = 0x15D020u;
            goto label_15d020;
        }
    }
    ctx->pc = 0x15CFF4u;
    // 0x15cff4: 0x0  nop
    ctx->pc = 0x15cff4u;
    // NOP
label_15cff8:
    // 0x15cff8: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x15cff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x15cffc: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15cffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15d000: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x15d000u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x15d004: 0x24633a70  addiu       $v1, $v1, 0x3A70
    ctx->pc = 0x15d004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14960));
    // 0x15d008: 0x244238f0  addiu       $v0, $v0, 0x38F0
    ctx->pc = 0x15d008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14576));
    // 0x15d00c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15d00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15d010: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15d010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15d014: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x15d014u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x15d018: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x15d018u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x15d01c: 0x0  nop
    ctx->pc = 0x15d01cu;
    // NOP
label_15d020:
    // 0x15d020: 0xc057608  jal         func_15D820
    ctx->pc = 0x15D020u;
    SET_GPR_U32(ctx, 31, 0x15D028u);
    ctx->pc = 0x15D024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D020u;
            // 0x15d024: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D820u;
    if (runtime->hasFunction(0x15D820u)) {
        auto targetFn = runtime->lookupFunction(0x15D820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D028u; }
        if (ctx->pc != 0x15D028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawOnePrim_0x15d820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D028u; }
        if (ctx->pc != 0x15D028u) { return; }
    }
    ctx->pc = 0x15D028u;
    // 0x15d028: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x15d028u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x15d02c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x15d02cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x15d030: 0x2a830006  slti        $v1, $s4, 0x6
    ctx->pc = 0x15d030u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x15d034: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x15d034u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x15d038: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x15d038u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x15d03c: 0x1460ffb6  bnez        $v1, . + 4 + (-0x4A << 2)
    ctx->pc = 0x15D03Cu;
    {
        const bool branch_taken_0x15d03c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D03Cu;
            // 0x15d040: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d03c) {
            ctx->pc = 0x15CF18u;
            goto label_15cf18;
        }
    }
    ctx->pc = 0x15D044u;
    // 0x15d044: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x15d044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15d048: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x15d048u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15d04c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15d04cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15d050: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15d050u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15d054: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15d054u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15d058: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15d058u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15d05c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15d05cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15d060: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15d060u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d064: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15d064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d068: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15d068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d06c: 0x3e00008  jr          $ra
    ctx->pc = 0x15D06Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D06Cu;
            // 0x15d070: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15CF18u: goto label_15cf18;
            case 0x15CF50u: goto label_15cf50;
            case 0x15CF60u: goto label_15cf60;
            case 0x15CF88u: goto label_15cf88;
            case 0x15CF90u: goto label_15cf90;
            case 0x15CFC0u: goto label_15cfc0;
            case 0x15CFD0u: goto label_15cfd0;
            case 0x15CFE0u: goto label_15cfe0;
            case 0x15CFF8u: goto label_15cff8;
            case 0x15D020u: goto label_15d020;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D074u;
}
