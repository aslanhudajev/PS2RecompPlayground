#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _decodeOrSkipFrame
// Address: 0x12bb50 - 0x12bc64
void _decodeOrSkipFrame_0x12bb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_decodeOrSkipFrame_0x12bb50");
#endif

    ctx->pc = 0x12bb50u;

    // 0x12bb50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12bb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12bb54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12bb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12bb58: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x12bb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x12bb5c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x12bb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x12bb60: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x12bb60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x12bb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x12bb68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12bb68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bb6c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12bb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12bb70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12bb70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12bb74: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12BB74u;
    {
        const bool branch_taken_0x12bb74 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x12BB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BB74u;
            // 0x12bb78: 0x8e300040  lw          $s0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb74) {
            ctx->pc = 0x12BB88u;
            goto label_12bb88;
        }
    }
    ctx->pc = 0x12BB7Cu;
    // 0x12bb7c: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x12bb7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x12bb80: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x12BB80u;
    {
        const bool branch_taken_0x12bb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BB80u;
            // 0x12bb84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb80) {
            ctx->pc = 0x12BBC4u;
            goto label_12bbc4;
        }
    }
    ctx->pc = 0x12BB88u;
label_12bb88:
    // 0x12bb88: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x12bb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12bb8c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12BB8Cu;
    {
        const bool branch_taken_0x12bb8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BB8Cu;
            // 0x12bb90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb8c) {
            ctx->pc = 0x12BBA0u;
            goto label_12bba0;
        }
    }
    ctx->pc = 0x12BB94u;
    // 0x12bb94: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x12bb94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x12bb98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12bb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bb9c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x12bb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_12bba0:
    // 0x12bba0: 0xc04a3b4  jal         func_128ED0
    ctx->pc = 0x12BBA0u;
    SET_GPR_U32(ctx, 31, 0x12BBA8u);
    ctx->pc = 0x12BBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BBA0u;
            // 0x12bba4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128ED0u;
    if (runtime->hasFunction(0x128ED0u)) {
        auto targetFn = runtime->lookupFunction(0x128ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BBA8u; }
        if (ctx->pc != 0x12BBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _updateRefImage_0x128ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BBA8u; }
        if (ctx->pc != 0x12BBA8u) { return; }
    }
    ctx->pc = 0x12BBA8u;
    // 0x12bba8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12BBA8u;
    {
        const bool branch_taken_0x12bba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BBA8u;
            // 0x12bbac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bba8) {
            ctx->pc = 0x12BBBCu;
            goto label_12bbbc;
        }
    }
    ctx->pc = 0x12BBB0u;
    // 0x12bbb0: 0xc04a35c  jal         func_128D70
    ctx->pc = 0x12BBB0u;
    SET_GPR_U32(ctx, 31, 0x12BBB8u);
    ctx->pc = 0x12BBB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BBB0u;
            // 0x12bbb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128D70u;
    if (runtime->hasFunction(0x128D70u)) {
        auto targetFn = runtime->lookupFunction(0x128D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BBB8u; }
        if (ctx->pc != 0x12BBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _decPicture_0x128d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BBB8u; }
        if (ctx->pc != 0x12BBB8u) { return; }
    }
    ctx->pc = 0x12BBB8u;
    // 0x12bbb8: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x12bbb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_12bbbc:
    // 0x12bbbc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12BBBCu;
    {
        const bool branch_taken_0x12bbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BBC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BBBCu;
            // 0x12bbc0: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bbbc) {
            ctx->pc = 0x12BBDCu;
            goto label_12bbdc;
        }
    }
    ctx->pc = 0x12BBC4u;
label_12bbc4:
    // 0x12bbc4: 0xc04a3b4  jal         func_128ED0
    ctx->pc = 0x12BBC4u;
    SET_GPR_U32(ctx, 31, 0x12BBCCu);
    ctx->pc = 0x12BBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BBC4u;
            // 0x12bbc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128ED0u;
    if (runtime->hasFunction(0x128ED0u)) {
        auto targetFn = runtime->lookupFunction(0x128ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BBCCu; }
        if (ctx->pc != 0x12BBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _updateRefImage_0x128ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BBCCu; }
        if (ctx->pc != 0x12BBCCu) { return; }
    }
    ctx->pc = 0x12BBCCu;
    // 0x12bbcc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x12bbccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bbd0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12bbd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bbd4: 0xc04ae14  jal         func_12B850
    ctx->pc = 0x12BBD4u;
    SET_GPR_U32(ctx, 31, 0x12BBDCu);
    ctx->pc = 0x12BBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BBD4u;
            // 0x12bbd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B850u;
    if (runtime->hasFunction(0x12B850u)) {
        auto targetFn = runtime->lookupFunction(0x12B850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BBDCu; }
        if (ctx->pc != 0x12BBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCbNodata_0x12b850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BBDCu; }
        if (ctx->pc != 0x12BBDCu) { return; }
    }
    ctx->pc = 0x12BBDCu;
label_12bbdc:
    // 0x12bbdc: 0x8e050118  lw          $a1, 0x118($s0)
    ctx->pc = 0x12bbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x12bbe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12bbe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bbe4: 0xc04a390  jal         func_128E40
    ctx->pc = 0x12BBE4u;
    SET_GPR_U32(ctx, 31, 0x12BBECu);
    ctx->pc = 0x12BBE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BBE4u;
            // 0x12bbe8: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E40u;
    if (runtime->hasFunction(0x128E40u)) {
        auto targetFn = runtime->lookupFunction(0x128E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BBECu; }
        if (ctx->pc != 0x12BBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _outputFrame_0x128e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BBECu; }
        if (ctx->pc != 0x12BBECu) { return; }
    }
    ctx->pc = 0x12BBECu;
    // 0x12bbec: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x12bbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x12bbf0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x12bbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12bbf4: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12BBF4u;
    {
        const bool branch_taken_0x12bbf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12bbf4) {
            ctx->pc = 0x12BBF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12BBF4u;
            // 0x12bbf8: 0x8e0300ac  lw          $v1, 0xAC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12BC14u;
            goto label_12bc14;
        }
    }
    ctx->pc = 0x12BBFCu;
    // 0x12bbfc: 0x56600005  bnel        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12BBFCu;
    {
        const bool branch_taken_0x12bbfc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x12bbfc) {
            ctx->pc = 0x12BC00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12BBFCu;
            // 0x12bc00: 0x8e0300ac  lw          $v1, 0xAC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12BC14u;
            goto label_12bc14;
        }
    }
    ctx->pc = 0x12BC04u;
    // 0x12bc04: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x12bc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x12bc08: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x12bc08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x12bc0c: 0xae020120  sw          $v0, 0x120($s0)
    ctx->pc = 0x12bc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 2));
    // 0x12bc10: 0x8e0300ac  lw          $v1, 0xAC($s0)
    ctx->pc = 0x12bc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
label_12bc14:
    // 0x12bc14: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x12bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x12bc18: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x12bc18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12bc1c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x12bc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x12bc20: 0x8e030120  lw          $v1, 0x120($s0)
    ctx->pc = 0x12bc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x12bc24: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x12BC24u;
    {
        const bool branch_taken_0x12bc24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12BC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BC24u;
            // 0x12bc28: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bc24) {
            ctx->pc = 0x12BC48u;
            goto label_12bc48;
        }
    }
    ctx->pc = 0x12BC2Cu;
    // 0x12bc2c: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x12bc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x12bc30: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x12bc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12bc34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12bc38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12bc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12bc3c: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x12bc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
    // 0x12bc40: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x12bc40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x12bc44: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x12bc44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12bc48:
    // 0x12bc48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x12bc48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12bc4c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x12bc4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12bc50: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12bc50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12bc54: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x12bc54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12bc58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12bc58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bc5c: 0x3e00008  jr          $ra
    ctx->pc = 0x12BC5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BC5Cu;
            // 0x12bc60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12BB88u: goto label_12bb88;
            case 0x12BBA0u: goto label_12bba0;
            case 0x12BBBCu: goto label_12bbbc;
            case 0x12BBC4u: goto label_12bbc4;
            case 0x12BBDCu: goto label_12bbdc;
            case 0x12BC14u: goto label_12bc14;
            case 0x12BC48u: goto label_12bc48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12BC64u;
}
