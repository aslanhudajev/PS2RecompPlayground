#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: DecodeTim2
// Address: 0x11bb80 - 0x11bcec
void DecodeTim2_0x11bb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("DecodeTim2_0x11bb80");
#endif

    ctx->pc = 0x11bb80u;

    // 0x11bb80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x11bb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11bb84: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x11bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x11bb88: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x11bb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x11bb8c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x11bb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x11bb90: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x11bb90u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb94: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x11bb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x11bb98: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x11bb98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb9c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x11bb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x11bba0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x11bba0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bba4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x11bba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x11bba8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x11bba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x11bbac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11bbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11bbb0: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x11BBB0u;
    {
        const bool branch_taken_0x11bbb0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BBB0u;
            // 0x11bbb4: 0xac5572bc  sw          $s5, 0x72BC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 29372), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bbb0) {
            ctx->pc = 0x11BBC8u;
            goto label_11bbc8;
        }
    }
    ctx->pc = 0x11BBB8u;
    // 0x11bbb8: 0xc046c6a  jal         func_11B1A8
    ctx->pc = 0x11BBB8u;
    SET_GPR_U32(ctx, 31, 0x11BBC0u);
    ctx->pc = 0x11BBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BBB8u;
            // 0x11bbbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B1A8u;
    if (runtime->hasFunction(0x11B1A8u)) {
        auto targetFn = runtime->lookupFunction(0x11B1A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BBC0u; }
        if (ctx->pc != 0x11BBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        resetTbp_0x11b1a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BBC0u; }
        if (ctx->pc != 0x11BBC0u) { return; }
    }
    ctx->pc = 0x11BBC0u;
    // 0x11bbc0: 0xc046c70  jal         func_11B1C0
    ctx->pc = 0x11BBC0u;
    SET_GPR_U32(ctx, 31, 0x11BBC8u);
    ctx->pc = 0x11BBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BBC0u;
            // 0x11bbc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B1C0u;
    if (runtime->hasFunction(0x11B1C0u)) {
        auto targetFn = runtime->lookupFunction(0x11B1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BBC8u; }
        if (ctx->pc != 0x11BBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        resetCbp_0x11b1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BBC8u; }
        if (ctx->pc != 0x11BBC8u) { return; }
    }
    ctx->pc = 0x11BBC8u;
label_11bbc8:
    // 0x11bbc8: 0xc043afc  jal         func_10EBF0
    ctx->pc = 0x11BBC8u;
    SET_GPR_U32(ctx, 31, 0x11BBD0u);
    ctx->pc = 0x10EBF0u;
    if (runtime->hasFunction(0x10EBF0u)) {
        auto targetFn = runtime->lookupFunction(0x10EBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BBD0u; }
        if (ctx->pc != 0x11BBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_ChainStart_0x10ebf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BBD0u; }
        if (ctx->pc != 0x11BBD0u) { return; }
    }
    ctx->pc = 0x11BBD0u;
    // 0x11bbd0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11bbd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bbd4: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x11BBD4u;
    {
        const bool branch_taken_0x11bbd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BBD4u;
            // 0x11bbd8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bbd4) {
            ctx->pc = 0x11BC1Cu;
            goto label_11bc1c;
        }
    }
    ctx->pc = 0x11BBDCu;
    // 0x11bbdc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x11BBDCu;
    {
        const bool branch_taken_0x11bbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BBDCu;
            // 0x11bbe0: 0xdfb50060  ld          $s5, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bbdc) {
            ctx->pc = 0x11BCD0u;
            goto label_11bcd0;
        }
    }
    ctx->pc = 0x11BBE4u;
label_11bbe4:
    // 0x11bbe4: 0xc046b56  jal         func_11AD58
    ctx->pc = 0x11BBE4u;
    SET_GPR_U32(ctx, 31, 0x11BBECu);
    ctx->pc = 0x11BBE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BBE4u;
            // 0x11bbe8: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11AD58u;
    if (runtime->hasFunction(0x11AD58u)) {
        auto targetFn = runtime->lookupFunction(0x11AD58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BBECu; }
        if (ctx->pc != 0x11BBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_tim2_err_0x11ad58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BBECu; }
        if (ctx->pc != 0x11BBECu) { return; }
    }
    ctx->pc = 0x11BBECu;
    // 0x11bbec: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x11BBECu;
    {
        const bool branch_taken_0x11bbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BBECu;
            // 0x11bbf0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bbec) {
            ctx->pc = 0x11BCCCu;
            goto label_11bccc;
        }
    }
    ctx->pc = 0x11BBF4u;
label_11bbf4:
    // 0x11bbf4: 0xc046b56  jal         func_11AD58
    ctx->pc = 0x11BBF4u;
    SET_GPR_U32(ctx, 31, 0x11BBFCu);
    ctx->pc = 0x11BBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BBF4u;
            // 0x11bbf8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11AD58u;
    if (runtime->hasFunction(0x11AD58u)) {
        auto targetFn = runtime->lookupFunction(0x11AD58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BBFCu; }
        if (ctx->pc != 0x11BBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_tim2_err_0x11ad58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BBFCu; }
        if (ctx->pc != 0x11BBFCu) { return; }
    }
    ctx->pc = 0x11BBFCu;
    // 0x11bbfc: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x11BBFCu;
    {
        const bool branch_taken_0x11bbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BBFCu;
            // 0x11bc00: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bbfc) {
            ctx->pc = 0x11BCCCu;
            goto label_11bccc;
        }
    }
    ctx->pc = 0x11BC04u;
label_11bc04:
    // 0x11bc04: 0xc046b56  jal         func_11AD58
    ctx->pc = 0x11BC04u;
    SET_GPR_U32(ctx, 31, 0x11BC0Cu);
    ctx->pc = 0x11BC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC04u;
            // 0x11bc08: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11AD58u;
    if (runtime->hasFunction(0x11AD58u)) {
        auto targetFn = runtime->lookupFunction(0x11AD58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BC0Cu; }
        if (ctx->pc != 0x11BC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _hip_tim2_err_0x11ad58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BC0Cu; }
        if (ctx->pc != 0x11BC0Cu) { return; }
    }
    ctx->pc = 0x11BC0Cu;
    // 0x11bc0c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x11BC0Cu;
    {
        const bool branch_taken_0x11bc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC0Cu;
            // 0x11bc10: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc0c) {
            ctx->pc = 0x11BCCCu;
            goto label_11bccc;
        }
    }
    ctx->pc = 0x11BC14u;
label_11bc14:
    // 0x11bc14: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x11BC14u;
    {
        const bool branch_taken_0x11bc14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC14u;
            // 0x11bc18: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc14) {
            ctx->pc = 0x11BCC8u;
            goto label_11bcc8;
        }
    }
    ctx->pc = 0x11BC1Cu;
label_11bc1c:
    // 0x11bc1c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x11bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x11bc20: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x11bc20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11bc24: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x11BC24u;
    {
        const bool branch_taken_0x11bc24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC24u;
            // 0x11bc28: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc24) {
            ctx->pc = 0x11BCC0u;
            goto label_11bcc0;
        }
    }
    ctx->pc = 0x11BC2Cu;
    // 0x11bc2c: 0x3c130022  lui         $s3, 0x22
    ctx->pc = 0x11bc2cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)34 << 16));
    // 0x11bc30: 0xae7172b8  sw          $s1, 0x72B8($s3)
    ctx->pc = 0x11bc30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 29368), GPR_U32(ctx, 17));
    // 0x11bc34: 0x0  nop
    ctx->pc = 0x11bc34u;
    // NOP
label_11bc38:
    // 0x11bc38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11bc38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc3c: 0xc04721c  jal         func_11C870
    ctx->pc = 0x11BC3Cu;
    SET_GPR_U32(ctx, 31, 0x11BC44u);
    ctx->pc = 0x11BC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC3Cu;
            // 0x11bc40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C870u;
    if (runtime->hasFunction(0x11C870u)) {
        auto targetFn = runtime->lookupFunction(0x11C870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BC44u; }
        if (ctx->pc != 0x11BC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugTim2GetData_0x11c870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BC44u; }
        if (ctx->pc != 0x11BC44u) { return; }
    }
    ctx->pc = 0x11BC44u;
    // 0x11bc44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11bc44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc48: 0x1200ffe6  beqz        $s0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x11BC48u;
    {
        const bool branch_taken_0x11bc48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11bc48) {
            ctx->pc = 0x11BBE4u;
            goto label_11bbe4;
        }
    }
    ctx->pc = 0x11BC50u;
    // 0x11bc50: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x11bc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11bc54: 0x1080ffe7  beqz        $a0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x11BC54u;
    {
        const bool branch_taken_0x11bc54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC54u;
            // 0x11bc58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc54) {
            ctx->pc = 0x11BBF4u;
            goto label_11bbf4;
        }
    }
    ctx->pc = 0x11BC5Cu;
    // 0x11bc5c: 0xc046b94  jal         func_11AE50
    ctx->pc = 0x11BC5Cu;
    SET_GPR_U32(ctx, 31, 0x11BC64u);
    ctx->pc = 0x11BC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC5Cu;
            // 0x11bc60: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11AE50u;
    if (runtime->hasFunction(0x11AE50u)) {
        auto targetFn = runtime->lookupFunction(0x11AE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BC64u; }
        if (ctx->pc != 0x11BC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTim2PictureHeader_0x11ae50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BC64u; }
        if (ctx->pc != 0x11BC64u) { return; }
    }
    ctx->pc = 0x11BC64u;
    // 0x11bc64: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11bc64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc68: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x11BC68u;
    {
        const bool branch_taken_0x11bc68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC68u;
            // 0x11bc6c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc68) {
            ctx->pc = 0x11BCC8u;
            goto label_11bcc8;
        }
    }
    ctx->pc = 0x11BC70u;
    // 0x11bc70: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x11bc70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11bc74: 0xc0471da  jal         func_11C768
    ctx->pc = 0x11BC74u;
    SET_GPR_U32(ctx, 31, 0x11BC7Cu);
    ctx->pc = 0x11BC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC74u;
            // 0x11bc78: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C768u;
    if (runtime->hasFunction(0x11C768u)) {
        auto targetFn = runtime->lookupFunction(0x11C768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BC7Cu; }
        if (ctx->pc != 0x11BC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiPlugTex2DGetEnv_0x11c768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BC7Cu; }
        if (ctx->pc != 0x11BC7Cu) { return; }
    }
    ctx->pc = 0x11BC7Cu;
    // 0x11bc7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11bc7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc80: 0x1200ffe0  beqz        $s0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x11BC80u;
    {
        const bool branch_taken_0x11bc80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC80u;
            // 0x11bc84: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc80) {
            ctx->pc = 0x11BC04u;
            goto label_11bc04;
        }
    }
    ctx->pc = 0x11BC88u;
    // 0x11bc88: 0xc046c7e  jal         func_11B1F8
    ctx->pc = 0x11BC88u;
    SET_GPR_U32(ctx, 31, 0x11BC90u);
    ctx->pc = 0x11BC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC88u;
            // 0x11bc8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B1F8u;
    if (runtime->hasFunction(0x11B1F8u)) {
        auto targetFn = runtime->lookupFunction(0x11B1F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BC90u; }
        if (ctx->pc != 0x11BC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DecodeTim2Image_0x11b1f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BC90u; }
        if (ctx->pc != 0x11BC90u) { return; }
    }
    ctx->pc = 0x11BC90u;
    // 0x11bc90: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11bc90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc94: 0x1460ffdf  bnez        $v1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x11BC94u;
    {
        const bool branch_taken_0x11bc94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC94u;
            // 0x11bc98: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc94) {
            ctx->pc = 0x11BC14u;
            goto label_11bc14;
        }
    }
    ctx->pc = 0x11BC9Cu;
    // 0x11bc9c: 0xc046df8  jal         func_11B7E0
    ctx->pc = 0x11BC9Cu;
    SET_GPR_U32(ctx, 31, 0x11BCA4u);
    ctx->pc = 0x11BCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC9Cu;
            // 0x11bca0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11B7E0u;
    if (runtime->hasFunction(0x11B7E0u)) {
        auto targetFn = runtime->lookupFunction(0x11B7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BCA4u; }
        if (ctx->pc != 0x11BCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DecodeTim2Clut_0x11b7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BCA4u; }
        if (ctx->pc != 0x11BCA4u) { return; }
    }
    ctx->pc = 0x11BCA4u;
    // 0x11bca4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11bca4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bca8: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
    ctx->pc = 0x11BCA8u;
    {
        const bool branch_taken_0x11bca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BCACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BCA8u;
            // 0x11bcac: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bca8) {
            ctx->pc = 0x11BC14u;
            goto label_11bc14;
        }
    }
    ctx->pc = 0x11BCB0u;
    // 0x11bcb0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x11bcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x11bcb4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x11bcb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11bcb8: 0x5440ffdf  bnel        $v0, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x11BCB8u;
    {
        const bool branch_taken_0x11bcb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11bcb8) {
            ctx->pc = 0x11BCBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11BCB8u;
            // 0x11bcbc: 0xae7172b8  sw          $s1, 0x72B8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 29368), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11BC38u;
            goto label_11bc38;
        }
    }
    ctx->pc = 0x11BCC0u;
label_11bcc0:
    // 0x11bcc0: 0xc043b18  jal         func_10EC60
    ctx->pc = 0x11BCC0u;
    SET_GPR_U32(ctx, 31, 0x11BCC8u);
    ctx->pc = 0x11BCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BCC0u;
            // 0x11bcc4: 0x26a40008  addiu       $a0, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EC60u;
    if (runtime->hasFunction(0x10EC60u)) {
        auto targetFn = runtime->lookupFunction(0x10EC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BCC8u; }
        if (ctx->pc != 0x11BCC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceHiDMAMake_ChainEnd_0x10ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BCC8u; }
        if (ctx->pc != 0x11BCC8u) { return; }
    }
    ctx->pc = 0x11BCC8u;
label_11bcc8:
    // 0x11bcc8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x11bcc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_11bccc:
    // 0x11bccc: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x11bcccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_11bcd0:
    // 0x11bcd0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x11bcd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11bcd4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x11bcd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11bcd8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x11bcd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11bcdc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x11bcdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11bce0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11bce0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11bce4: 0x3e00008  jr          $ra
    ctx->pc = 0x11BCE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BCE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BCE4u;
            // 0x11bce8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11BBC8u: goto label_11bbc8;
            case 0x11BBE4u: goto label_11bbe4;
            case 0x11BBF4u: goto label_11bbf4;
            case 0x11BC04u: goto label_11bc04;
            case 0x11BC14u: goto label_11bc14;
            case 0x11BC1Cu: goto label_11bc1c;
            case 0x11BC38u: goto label_11bc38;
            case 0x11BCC0u: goto label_11bcc0;
            case 0x11BCC8u: goto label_11bcc8;
            case 0x11BCCCu: goto label_11bccc;
            case 0x11BCD0u: goto label_11bcd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11BCECu;
}
