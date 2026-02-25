#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsDecompositionPad
// Address: 0x154ac0 - 0x1564c4
void wrsDecompositionPad_0x154ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsDecompositionPad_0x154ac0");
#endif

    ctx->pc = 0x154ac0u;

    // 0x154ac0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x154ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x154ac4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x154ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x154ac8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x154ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x154acc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x154accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x154ad0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x154ad0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ad4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x154ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x154ad8: 0x3c130030  lui         $s3, 0x30
    ctx->pc = 0x154ad8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)48 << 16));
    // 0x154adc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x154adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x154ae0: 0x3c120030  lui         $s2, 0x30
    ctx->pc = 0x154ae0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)48 << 16));
    // 0x154ae4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x154ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x154ae8: 0x3c110030  lui         $s1, 0x30
    ctx->pc = 0x154ae8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)48 << 16));
    // 0x154aec: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x154aecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x154af0: 0x26732a00  addiu       $s3, $s3, 0x2A00
    ctx->pc = 0x154af0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 10752));
    // 0x154af4: 0x26522608  addiu       $s2, $s2, 0x2608
    ctx->pc = 0x154af4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 9736));
    // 0x154af8: 0x263127f0  addiu       $s1, $s1, 0x27F0
    ctx->pc = 0x154af8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 10224));
    // 0x154afc: 0x26102a10  addiu       $s0, $s0, 0x2A10
    ctx->pc = 0x154afcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10768));
label_154b00:
    // 0x154b00: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x154b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x154b04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x154b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x154b08: 0x1465065f  bne         $v1, $a1, . + 4 + (0x65F << 2)
    ctx->pc = 0x154B08u;
    {
        const bool branch_taken_0x154b08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x154b08) {
            ctx->pc = 0x156488u;
            goto label_156488;
        }
    }
    ctx->pc = 0x154B10u;
    // 0x154b10: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x154b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x154b14: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x154b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x154b18: 0x108300f1  beq         $a0, $v1, . + 4 + (0xF1 << 2)
    ctx->pc = 0x154B18u;
    {
        const bool branch_taken_0x154b18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x154b18) {
            ctx->pc = 0x154EE0u;
            goto label_154ee0;
        }
    }
    ctx->pc = 0x154B20u;
    // 0x154b20: 0x10850005  beq         $a0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x154B20u;
    {
        const bool branch_taken_0x154b20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x154B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154B20u;
            // 0x154b24: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154b20) {
            ctx->pc = 0x154B38u;
            goto label_154b38;
        }
    }
    ctx->pc = 0x154B28u;
    // 0x154b28: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x154B28u;
    {
        const bool branch_taken_0x154b28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x154b28) {
            ctx->pc = 0x154B38u;
            goto label_154b38;
        }
    }
    ctx->pc = 0x154B30u;
    // 0x154b30: 0x10000199  b           . + 4 + (0x199 << 2)
    ctx->pc = 0x154B30u;
    {
        const bool branch_taken_0x154b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154b30) {
            ctx->pc = 0x155198u;
            goto label_155198;
        }
    }
    ctx->pc = 0x154B38u;
label_154b38:
    // 0x154b38: 0x16800075  bnez        $s4, . + 4 + (0x75 << 2)
    ctx->pc = 0x154B38u;
    {
        const bool branch_taken_0x154b38 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x154b38) {
            ctx->pc = 0x154D10u;
            goto label_154d10;
        }
    }
    ctx->pc = 0x154B40u;
    // 0x154b40: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154b44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154b48: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154B48u;
    SET_GPR_U32(ctx, 31, 0x154B50u);
    ctx->pc = 0x154B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154B48u;
            // 0x154b4c: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154B50u; }
        if (ctx->pc != 0x154B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154B50u; }
        if (ctx->pc != 0x154B50u) { return; }
    }
    ctx->pc = 0x154B50u;
    // 0x154b50: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154b54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154b58: 0xac2225d8  sw          $v0, 0x25D8($at)
    ctx->pc = 0x154b58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9688), GPR_U32(ctx, 2));
    // 0x154b5c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154b60: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154B60u;
    SET_GPR_U32(ctx, 31, 0x154B68u);
    ctx->pc = 0x154B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154B60u;
            // 0x154b64: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154B68u; }
        if (ctx->pc != 0x154B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154B68u; }
        if (ctx->pc != 0x154B68u) { return; }
    }
    ctx->pc = 0x154B68u;
    // 0x154b68: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154b6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154b70: 0xac2225d0  sw          $v0, 0x25D0($at)
    ctx->pc = 0x154b70u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9680), GPR_U32(ctx, 2));
    // 0x154b74: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154b78: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154B78u;
    SET_GPR_U32(ctx, 31, 0x154B80u);
    ctx->pc = 0x154B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154B78u;
            // 0x154b7c: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154B80u; }
        if (ctx->pc != 0x154B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154B80u; }
        if (ctx->pc != 0x154B80u) { return; }
    }
    ctx->pc = 0x154B80u;
    // 0x154b80: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154b80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154b84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154b88: 0xac2225c8  sw          $v0, 0x25C8($at)
    ctx->pc = 0x154b88u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9672), GPR_U32(ctx, 2));
    // 0x154b8c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154b90: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154B90u;
    SET_GPR_U32(ctx, 31, 0x154B98u);
    ctx->pc = 0x154B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154B90u;
            // 0x154b94: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154B98u; }
        if (ctx->pc != 0x154B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154B98u; }
        if (ctx->pc != 0x154B98u) { return; }
    }
    ctx->pc = 0x154B98u;
    // 0x154b98: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154b98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154b9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ba0: 0xac2225c0  sw          $v0, 0x25C0($at)
    ctx->pc = 0x154ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9664), GPR_U32(ctx, 2));
    // 0x154ba4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154ba8: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154BA8u;
    SET_GPR_U32(ctx, 31, 0x154BB0u);
    ctx->pc = 0x154BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154BA8u;
            // 0x154bac: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154BB0u; }
        if (ctx->pc != 0x154BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154BB0u; }
        if (ctx->pc != 0x154BB0u) { return; }
    }
    ctx->pc = 0x154BB0u;
    // 0x154bb0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154bb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154bb8: 0xac2225b8  sw          $v0, 0x25B8($at)
    ctx->pc = 0x154bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9656), GPR_U32(ctx, 2));
    // 0x154bbc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154bc0: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154BC0u;
    SET_GPR_U32(ctx, 31, 0x154BC8u);
    ctx->pc = 0x154BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154BC0u;
            // 0x154bc4: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154BC8u; }
        if (ctx->pc != 0x154BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154BC8u; }
        if (ctx->pc != 0x154BC8u) { return; }
    }
    ctx->pc = 0x154BC8u;
    // 0x154bc8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154bcc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154bd0: 0xac2225b0  sw          $v0, 0x25B0($at)
    ctx->pc = 0x154bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9648), GPR_U32(ctx, 2));
    // 0x154bd4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154bd8: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154BD8u;
    SET_GPR_U32(ctx, 31, 0x154BE0u);
    ctx->pc = 0x154BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154BD8u;
            // 0x154bdc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154BE0u; }
        if (ctx->pc != 0x154BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154BE0u; }
        if (ctx->pc != 0x154BE0u) { return; }
    }
    ctx->pc = 0x154BE0u;
    // 0x154be0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154be4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154be8: 0xac2225a8  sw          $v0, 0x25A8($at)
    ctx->pc = 0x154be8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9640), GPR_U32(ctx, 2));
    // 0x154bec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154bf0: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154BF0u;
    SET_GPR_U32(ctx, 31, 0x154BF8u);
    ctx->pc = 0x154BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154BF0u;
            // 0x154bf4: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154BF8u; }
        if (ctx->pc != 0x154BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154BF8u; }
        if (ctx->pc != 0x154BF8u) { return; }
    }
    ctx->pc = 0x154BF8u;
    // 0x154bf8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154bfc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154c00: 0xac2225a0  sw          $v0, 0x25A0($at)
    ctx->pc = 0x154c00u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9632), GPR_U32(ctx, 2));
    // 0x154c04: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154c08: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154C08u;
    SET_GPR_U32(ctx, 31, 0x154C10u);
    ctx->pc = 0x154C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154C08u;
            // 0x154c0c: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154C10u; }
        if (ctx->pc != 0x154C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154C10u; }
        if (ctx->pc != 0x154C10u) { return; }
    }
    ctx->pc = 0x154C10u;
    // 0x154c10: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154c14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154c18: 0xac222598  sw          $v0, 0x2598($at)
    ctx->pc = 0x154c18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9624), GPR_U32(ctx, 2));
    // 0x154c1c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154c20: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154C20u;
    SET_GPR_U32(ctx, 31, 0x154C28u);
    ctx->pc = 0x154C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154C20u;
            // 0x154c24: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154C28u; }
        if (ctx->pc != 0x154C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154C28u; }
        if (ctx->pc != 0x154C28u) { return; }
    }
    ctx->pc = 0x154C28u;
    // 0x154c28: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154c2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154c30: 0xac222590  sw          $v0, 0x2590($at)
    ctx->pc = 0x154c30u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9616), GPR_U32(ctx, 2));
    // 0x154c34: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154c38: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154C38u;
    SET_GPR_U32(ctx, 31, 0x154C40u);
    ctx->pc = 0x154C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154C38u;
            // 0x154c3c: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154C40u; }
        if (ctx->pc != 0x154C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154C40u; }
        if (ctx->pc != 0x154C40u) { return; }
    }
    ctx->pc = 0x154C40u;
    // 0x154c40: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154c44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154c48: 0xac222588  sw          $v0, 0x2588($at)
    ctx->pc = 0x154c48u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9608), GPR_U32(ctx, 2));
    // 0x154c4c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154c50: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154C50u;
    SET_GPR_U32(ctx, 31, 0x154C58u);
    ctx->pc = 0x154C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154C50u;
            // 0x154c54: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154C58u; }
        if (ctx->pc != 0x154C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154C58u; }
        if (ctx->pc != 0x154C58u) { return; }
    }
    ctx->pc = 0x154C58u;
    // 0x154c58: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154c5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154c60: 0xac222580  sw          $v0, 0x2580($at)
    ctx->pc = 0x154c60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9600), GPR_U32(ctx, 2));
    // 0x154c64: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154c68: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154C68u;
    SET_GPR_U32(ctx, 31, 0x154C70u);
    ctx->pc = 0x154C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154C68u;
            // 0x154c6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154C70u; }
        if (ctx->pc != 0x154C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154C70u; }
        if (ctx->pc != 0x154C70u) { return; }
    }
    ctx->pc = 0x154C70u;
    // 0x154c70: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154c74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154c78: 0xac222578  sw          $v0, 0x2578($at)
    ctx->pc = 0x154c78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9592), GPR_U32(ctx, 2));
    // 0x154c7c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154c80: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154C80u;
    SET_GPR_U32(ctx, 31, 0x154C88u);
    ctx->pc = 0x154C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154C80u;
            // 0x154c84: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154C88u; }
        if (ctx->pc != 0x154C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154C88u; }
        if (ctx->pc != 0x154C88u) { return; }
    }
    ctx->pc = 0x154C88u;
    // 0x154c88: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154c8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154c90: 0xac222570  sw          $v0, 0x2570($at)
    ctx->pc = 0x154c90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9584), GPR_U32(ctx, 2));
    // 0x154c94: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154c98: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154C98u;
    SET_GPR_U32(ctx, 31, 0x154CA0u);
    ctx->pc = 0x154C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154C98u;
            // 0x154c9c: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154CA0u; }
        if (ctx->pc != 0x154CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154CA0u; }
        if (ctx->pc != 0x154CA0u) { return; }
    }
    ctx->pc = 0x154CA0u;
    // 0x154ca0: 0x28410040  slti        $at, $v0, 0x40
    ctx->pc = 0x154ca0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x154ca4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x154CA4u;
    {
        const bool branch_taken_0x154ca4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x154CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154CA4u;
            // 0x154ca8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ca4) {
            ctx->pc = 0x154CB8u;
            goto label_154cb8;
        }
    }
    ctx->pc = 0x154CACu;
    // 0x154cac: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154cb0: 0xac2325b8  sw          $v1, 0x25B8($at)
    ctx->pc = 0x154cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9656), GPR_U32(ctx, 3));
    // 0x154cb4: 0x0  nop
    ctx->pc = 0x154cb4u;
    // NOP
label_154cb8:
    // 0x154cb8: 0x284100c1  slti        $at, $v0, 0xC1
    ctx->pc = 0x154cb8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)193) ? 1 : 0);
    // 0x154cbc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x154CBCu;
    {
        const bool branch_taken_0x154cbc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x154cbc) {
            ctx->pc = 0x154CD0u;
            goto label_154cd0;
        }
    }
    ctx->pc = 0x154CC4u;
    // 0x154cc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x154cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x154cc8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154ccc: 0xac2225b0  sw          $v0, 0x25B0($at)
    ctx->pc = 0x154cccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9648), GPR_U32(ctx, 2));
label_154cd0:
    // 0x154cd0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154cd4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154cd8: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154CD8u;
    SET_GPR_U32(ctx, 31, 0x154CE0u);
    ctx->pc = 0x154CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154CD8u;
            // 0x154cdc: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154CE0u; }
        if (ctx->pc != 0x154CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154CE0u; }
        if (ctx->pc != 0x154CE0u) { return; }
    }
    ctx->pc = 0x154CE0u;
    // 0x154ce0: 0x28410040  slti        $at, $v0, 0x40
    ctx->pc = 0x154ce0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x154ce4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x154CE4u;
    {
        const bool branch_taken_0x154ce4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x154CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154CE4u;
            // 0x154ce8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ce4) {
            ctx->pc = 0x154CF8u;
            goto label_154cf8;
        }
    }
    ctx->pc = 0x154CECu;
    // 0x154cec: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154cf0: 0xac2325a8  sw          $v1, 0x25A8($at)
    ctx->pc = 0x154cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9640), GPR_U32(ctx, 3));
    // 0x154cf4: 0x0  nop
    ctx->pc = 0x154cf4u;
    // NOP
label_154cf8:
    // 0x154cf8: 0x284100c1  slti        $at, $v0, 0xC1
    ctx->pc = 0x154cf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)193) ? 1 : 0);
    // 0x154cfc: 0x14200128  bnez        $at, . + 4 + (0x128 << 2)
    ctx->pc = 0x154CFCu;
    {
        const bool branch_taken_0x154cfc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x154D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154CFCu;
            // 0x154d00: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154cfc) {
            ctx->pc = 0x1551A0u;
            goto label_1551a0;
        }
    }
    ctx->pc = 0x154D04u;
    // 0x154d04: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154d08: 0x10000125  b           . + 4 + (0x125 << 2)
    ctx->pc = 0x154D08u;
    {
        const bool branch_taken_0x154d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154D08u;
            // 0x154d0c: 0xac2325a0  sw          $v1, 0x25A0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154d08) {
            ctx->pc = 0x1551A0u;
            goto label_1551a0;
        }
    }
    ctx->pc = 0x154D10u;
label_154d10:
    // 0x154d10: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154d14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154d18: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154D18u;
    SET_GPR_U32(ctx, 31, 0x154D20u);
    ctx->pc = 0x154D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154D18u;
            // 0x154d1c: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154D20u; }
        if (ctx->pc != 0x154D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154D20u; }
        if (ctx->pc != 0x154D20u) { return; }
    }
    ctx->pc = 0x154D20u;
    // 0x154d20: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154d24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154d28: 0xac222568  sw          $v0, 0x2568($at)
    ctx->pc = 0x154d28u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9576), GPR_U32(ctx, 2));
    // 0x154d2c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154d30: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154D30u;
    SET_GPR_U32(ctx, 31, 0x154D38u);
    ctx->pc = 0x154D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154D30u;
            // 0x154d34: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154D38u; }
        if (ctx->pc != 0x154D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154D38u; }
        if (ctx->pc != 0x154D38u) { return; }
    }
    ctx->pc = 0x154D38u;
    // 0x154d38: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154d3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154d40: 0xac222560  sw          $v0, 0x2560($at)
    ctx->pc = 0x154d40u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9568), GPR_U32(ctx, 2));
    // 0x154d44: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154d48: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154D48u;
    SET_GPR_U32(ctx, 31, 0x154D50u);
    ctx->pc = 0x154D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154D48u;
            // 0x154d4c: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154D50u; }
        if (ctx->pc != 0x154D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154D50u; }
        if (ctx->pc != 0x154D50u) { return; }
    }
    ctx->pc = 0x154D50u;
    // 0x154d50: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154d54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154d58: 0xac222558  sw          $v0, 0x2558($at)
    ctx->pc = 0x154d58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9560), GPR_U32(ctx, 2));
    // 0x154d5c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154d60: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154D60u;
    SET_GPR_U32(ctx, 31, 0x154D68u);
    ctx->pc = 0x154D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154D60u;
            // 0x154d64: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154D68u; }
        if (ctx->pc != 0x154D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154D68u; }
        if (ctx->pc != 0x154D68u) { return; }
    }
    ctx->pc = 0x154D68u;
    // 0x154d68: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154d6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154d70: 0xac222550  sw          $v0, 0x2550($at)
    ctx->pc = 0x154d70u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9552), GPR_U32(ctx, 2));
    // 0x154d74: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154d78: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154D78u;
    SET_GPR_U32(ctx, 31, 0x154D80u);
    ctx->pc = 0x154D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154D78u;
            // 0x154d7c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154D80u; }
        if (ctx->pc != 0x154D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154D80u; }
        if (ctx->pc != 0x154D80u) { return; }
    }
    ctx->pc = 0x154D80u;
    // 0x154d80: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154d80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154d84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154d88: 0xac222548  sw          $v0, 0x2548($at)
    ctx->pc = 0x154d88u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9544), GPR_U32(ctx, 2));
    // 0x154d8c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154d90: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154D90u;
    SET_GPR_U32(ctx, 31, 0x154D98u);
    ctx->pc = 0x154D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154D90u;
            // 0x154d94: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154D98u; }
        if (ctx->pc != 0x154D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154D98u; }
        if (ctx->pc != 0x154D98u) { return; }
    }
    ctx->pc = 0x154D98u;
    // 0x154d98: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154d9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154da0: 0xac222540  sw          $v0, 0x2540($at)
    ctx->pc = 0x154da0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9536), GPR_U32(ctx, 2));
    // 0x154da4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154da8: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154DA8u;
    SET_GPR_U32(ctx, 31, 0x154DB0u);
    ctx->pc = 0x154DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154DA8u;
            // 0x154dac: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154DB0u; }
        if (ctx->pc != 0x154DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154DB0u; }
        if (ctx->pc != 0x154DB0u) { return; }
    }
    ctx->pc = 0x154DB0u;
    // 0x154db0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154db4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154db8: 0xac222538  sw          $v0, 0x2538($at)
    ctx->pc = 0x154db8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9528), GPR_U32(ctx, 2));
    // 0x154dbc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154dc0: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154DC0u;
    SET_GPR_U32(ctx, 31, 0x154DC8u);
    ctx->pc = 0x154DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154DC0u;
            // 0x154dc4: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154DC8u; }
        if (ctx->pc != 0x154DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154DC8u; }
        if (ctx->pc != 0x154DC8u) { return; }
    }
    ctx->pc = 0x154DC8u;
    // 0x154dc8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154dcc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154dd0: 0xac222530  sw          $v0, 0x2530($at)
    ctx->pc = 0x154dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9520), GPR_U32(ctx, 2));
    // 0x154dd4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154dd8: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154DD8u;
    SET_GPR_U32(ctx, 31, 0x154DE0u);
    ctx->pc = 0x154DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154DD8u;
            // 0x154ddc: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154DE0u; }
        if (ctx->pc != 0x154DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154DE0u; }
        if (ctx->pc != 0x154DE0u) { return; }
    }
    ctx->pc = 0x154DE0u;
    // 0x154de0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154de4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154de8: 0xac222528  sw          $v0, 0x2528($at)
    ctx->pc = 0x154de8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9512), GPR_U32(ctx, 2));
    // 0x154dec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154df0: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154DF0u;
    SET_GPR_U32(ctx, 31, 0x154DF8u);
    ctx->pc = 0x154DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154DF0u;
            // 0x154df4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154DF8u; }
        if (ctx->pc != 0x154DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154DF8u; }
        if (ctx->pc != 0x154DF8u) { return; }
    }
    ctx->pc = 0x154DF8u;
    // 0x154df8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154dfc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154e00: 0xac222520  sw          $v0, 0x2520($at)
    ctx->pc = 0x154e00u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9504), GPR_U32(ctx, 2));
    // 0x154e04: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154e08: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154E08u;
    SET_GPR_U32(ctx, 31, 0x154E10u);
    ctx->pc = 0x154E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154E08u;
            // 0x154e0c: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154E10u; }
        if (ctx->pc != 0x154E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154E10u; }
        if (ctx->pc != 0x154E10u) { return; }
    }
    ctx->pc = 0x154E10u;
    // 0x154e10: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154e14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154e18: 0xac222518  sw          $v0, 0x2518($at)
    ctx->pc = 0x154e18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9496), GPR_U32(ctx, 2));
    // 0x154e1c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154e20: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154E20u;
    SET_GPR_U32(ctx, 31, 0x154E28u);
    ctx->pc = 0x154E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154E20u;
            // 0x154e24: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154E28u; }
        if (ctx->pc != 0x154E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154E28u; }
        if (ctx->pc != 0x154E28u) { return; }
    }
    ctx->pc = 0x154E28u;
    // 0x154e28: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154e2c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154e30: 0xac222510  sw          $v0, 0x2510($at)
    ctx->pc = 0x154e30u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9488), GPR_U32(ctx, 2));
    // 0x154e34: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154e38: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154E38u;
    SET_GPR_U32(ctx, 31, 0x154E40u);
    ctx->pc = 0x154E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154E38u;
            // 0x154e3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154E40u; }
        if (ctx->pc != 0x154E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154E40u; }
        if (ctx->pc != 0x154E40u) { return; }
    }
    ctx->pc = 0x154E40u;
    // 0x154e40: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154e44: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154e48: 0xac222508  sw          $v0, 0x2508($at)
    ctx->pc = 0x154e48u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9480), GPR_U32(ctx, 2));
    // 0x154e4c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154e50: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154E50u;
    SET_GPR_U32(ctx, 31, 0x154E58u);
    ctx->pc = 0x154E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154E50u;
            // 0x154e54: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154E58u; }
        if (ctx->pc != 0x154E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154E58u; }
        if (ctx->pc != 0x154E58u) { return; }
    }
    ctx->pc = 0x154E58u;
    // 0x154e58: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154e5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154e60: 0xac222500  sw          $v0, 0x2500($at)
    ctx->pc = 0x154e60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9472), GPR_U32(ctx, 2));
    // 0x154e64: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154e68: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154E68u;
    SET_GPR_U32(ctx, 31, 0x154E70u);
    ctx->pc = 0x154E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154E68u;
            // 0x154e6c: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154E70u; }
        if (ctx->pc != 0x154E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154E70u; }
        if (ctx->pc != 0x154E70u) { return; }
    }
    ctx->pc = 0x154E70u;
    // 0x154e70: 0x28410040  slti        $at, $v0, 0x40
    ctx->pc = 0x154e70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x154e74: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x154E74u;
    {
        const bool branch_taken_0x154e74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x154E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154E74u;
            // 0x154e78: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e74) {
            ctx->pc = 0x154E88u;
            goto label_154e88;
        }
    }
    ctx->pc = 0x154E7Cu;
    // 0x154e7c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154e80: 0xac232548  sw          $v1, 0x2548($at)
    ctx->pc = 0x154e80u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9544), GPR_U32(ctx, 3));
    // 0x154e84: 0x0  nop
    ctx->pc = 0x154e84u;
    // NOP
label_154e88:
    // 0x154e88: 0x284100c1  slti        $at, $v0, 0xC1
    ctx->pc = 0x154e88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)193) ? 1 : 0);
    // 0x154e8c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x154E8Cu;
    {
        const bool branch_taken_0x154e8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x154e8c) {
            ctx->pc = 0x154EA0u;
            goto label_154ea0;
        }
    }
    ctx->pc = 0x154E94u;
    // 0x154e94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x154e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x154e98: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154e9c: 0xac222540  sw          $v0, 0x2540($at)
    ctx->pc = 0x154e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9536), GPR_U32(ctx, 2));
label_154ea0:
    // 0x154ea0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x154ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x154ea4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x154ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ea8: 0xc04b3b0  jal         func_12CEC0
    ctx->pc = 0x154EA8u;
    SET_GPR_U32(ctx, 31, 0x154EB0u);
    ctx->pc = 0x154EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154EA8u;
            // 0x154eac: 0x24060013  addiu       $a2, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CEC0u;
    if (runtime->hasFunction(0x12CEC0u)) {
        auto targetFn = runtime->lookupFunction(0x12CEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154EB0u; }
        if (ctx->pc != 0x154EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        scePad2GetButtonInfo_0x12cec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154EB0u; }
        if (ctx->pc != 0x154EB0u) { return; }
    }
    ctx->pc = 0x154EB0u;
    // 0x154eb0: 0x28410040  slti        $at, $v0, 0x40
    ctx->pc = 0x154eb0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x154eb4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x154EB4u;
    {
        const bool branch_taken_0x154eb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x154EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154EB4u;
            // 0x154eb8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154eb4) {
            ctx->pc = 0x154EC8u;
            goto label_154ec8;
        }
    }
    ctx->pc = 0x154EBCu;
    // 0x154ebc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154ec0: 0xac232538  sw          $v1, 0x2538($at)
    ctx->pc = 0x154ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9528), GPR_U32(ctx, 3));
    // 0x154ec4: 0x0  nop
    ctx->pc = 0x154ec4u;
    // NOP
label_154ec8:
    // 0x154ec8: 0x284100c1  slti        $at, $v0, 0xC1
    ctx->pc = 0x154ec8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)193) ? 1 : 0);
    // 0x154ecc: 0x142000b4  bnez        $at, . + 4 + (0xB4 << 2)
    ctx->pc = 0x154ECCu;
    {
        const bool branch_taken_0x154ecc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x154ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154ECCu;
            // 0x154ed0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ecc) {
            ctx->pc = 0x1551A0u;
            goto label_1551a0;
        }
    }
    ctx->pc = 0x154ED4u;
    // 0x154ed4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154ed8: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x154ED8u;
    {
        const bool branch_taken_0x154ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154ED8u;
            // 0x154edc: 0xac232530  sw          $v1, 0x2530($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9520), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ed8) {
            ctx->pc = 0x1551A0u;
            goto label_1551a0;
        }
    }
    ctx->pc = 0x154EE0u;
label_154ee0:
    // 0x154ee0: 0x16800057  bnez        $s4, . + 4 + (0x57 << 2)
    ctx->pc = 0x154EE0u;
    {
        const bool branch_taken_0x154ee0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x154ee0) {
            ctx->pc = 0x155040u;
            goto label_155040;
        }
    }
    ctx->pc = 0x154EE8u;
    // 0x154ee8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x154ee8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x154eec: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154ef0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x154ef0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x154ef4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x154ef4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x154ef8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x154ef8u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x154efc: 0xac232578  sw          $v1, 0x2578($at)
    ctx->pc = 0x154efcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9592), GPR_U32(ctx, 3));
    // 0x154f00: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x154f00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x154f04: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154f08: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x154f08u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2u)));
    // 0x154f0c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x154f0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x154f10: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x154f10u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x154f14: 0xac232570  sw          $v1, 0x2570($at)
    ctx->pc = 0x154f14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9584), GPR_U32(ctx, 3));
    // 0x154f18: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x154f18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x154f1c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154f20: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x154f20u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4u)));
    // 0x154f24: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x154f24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x154f28: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x154f28u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x154f2c: 0xac2325a8  sw          $v1, 0x25A8($at)
    ctx->pc = 0x154f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9640), GPR_U32(ctx, 3));
    // 0x154f30: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x154f30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x154f34: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154f38: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x154f38u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)8u)));
    // 0x154f3c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x154f3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x154f40: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x154f40u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x154f44: 0xac2325b0  sw          $v1, 0x25B0($at)
    ctx->pc = 0x154f44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9648), GPR_U32(ctx, 3));
    // 0x154f48: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x154f48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x154f4c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154f50: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x154f50u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)16u)));
    // 0x154f54: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x154f54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x154f58: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x154f58u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x154f5c: 0xac2325a0  sw          $v1, 0x25A0($at)
    ctx->pc = 0x154f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9632), GPR_U32(ctx, 3));
    // 0x154f60: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x154f60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x154f64: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154f68: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x154f68u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)32u)));
    // 0x154f6c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x154f6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x154f70: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x154f70u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x154f74: 0xac2325b8  sw          $v1, 0x25B8($at)
    ctx->pc = 0x154f74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9656), GPR_U32(ctx, 3));
    // 0x154f78: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x154f78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x154f7c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154f80: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x154f80u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)64u)));
    // 0x154f84: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x154f84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x154f88: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x154f88u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x154f8c: 0xac232590  sw          $v1, 0x2590($at)
    ctx->pc = 0x154f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9616), GPR_U32(ctx, 3));
    // 0x154f90: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x154f90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x154f94: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154f98: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x154f98u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)128u)));
    // 0x154f9c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x154f9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x154fa0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x154fa0u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x154fa4: 0xac232580  sw          $v1, 0x2580($at)
    ctx->pc = 0x154fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9600), GPR_U32(ctx, 3));
    // 0x154fa8: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x154fa8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x154fac: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154fb0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x154fb0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x154fb4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x154fb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x154fb8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x154fb8u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x154fbc: 0xac232598  sw          $v1, 0x2598($at)
    ctx->pc = 0x154fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9624), GPR_U32(ctx, 3));
    // 0x154fc0: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x154fc0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x154fc4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154fc8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x154fc8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2u)));
    // 0x154fcc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x154fccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x154fd0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x154fd0u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x154fd4: 0xac232588  sw          $v1, 0x2588($at)
    ctx->pc = 0x154fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9608), GPR_U32(ctx, 3));
    // 0x154fd8: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x154fd8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x154fdc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154fdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154fe0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x154fe0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4u)));
    // 0x154fe4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x154fe4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x154fe8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x154fe8u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x154fec: 0xac2325c0  sw          $v1, 0x25C0($at)
    ctx->pc = 0x154fecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9664), GPR_U32(ctx, 3));
    // 0x154ff0: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x154ff0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x154ff4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x154ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x154ff8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x154ff8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)8u)));
    // 0x154ffc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x154ffcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x155000: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x155000u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x155004: 0xac2325d8  sw          $v1, 0x25D8($at)
    ctx->pc = 0x155004u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9688), GPR_U32(ctx, 3));
    // 0x155008: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x155008u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x15500c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15500cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155010: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x155010u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)16u)));
    // 0x155014: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x155014u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x155018: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x155018u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x15501c: 0xac2325d0  sw          $v1, 0x25D0($at)
    ctx->pc = 0x15501cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9680), GPR_U32(ctx, 3));
    // 0x155020: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x155020u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x155024: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155028: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x155028u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)32u)));
    // 0x15502c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x15502cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x155030: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x155030u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x155034: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x155034u;
    {
        const bool branch_taken_0x155034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155034u;
            // 0x155038: 0xac2325c8  sw          $v1, 0x25C8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9672), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155034) {
            ctx->pc = 0x1551A0u;
            goto label_1551a0;
        }
    }
    ctx->pc = 0x15503Cu;
    // 0x15503c: 0x0  nop
    ctx->pc = 0x15503cu;
    // NOP
label_155040:
    // 0x155040: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x155040u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x155044: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155048: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x155048u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x15504c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x15504cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x155050: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x155050u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x155054: 0xac232508  sw          $v1, 0x2508($at)
    ctx->pc = 0x155054u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9480), GPR_U32(ctx, 3));
    // 0x155058: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x155058u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15505c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15505cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155060: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x155060u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2u)));
    // 0x155064: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x155064u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x155068: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x155068u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x15506c: 0xac232500  sw          $v1, 0x2500($at)
    ctx->pc = 0x15506cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9472), GPR_U32(ctx, 3));
    // 0x155070: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x155070u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x155074: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155078: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x155078u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4u)));
    // 0x15507c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x15507cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x155080: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x155080u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x155084: 0xac232538  sw          $v1, 0x2538($at)
    ctx->pc = 0x155084u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9528), GPR_U32(ctx, 3));
    // 0x155088: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x155088u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15508c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15508cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155090: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x155090u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)8u)));
    // 0x155094: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x155094u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x155098: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x155098u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x15509c: 0xac232540  sw          $v1, 0x2540($at)
    ctx->pc = 0x15509cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9536), GPR_U32(ctx, 3));
    // 0x1550a0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1550a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1550a4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1550a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1550a8: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1550a8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)16u)));
    // 0x1550ac: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1550acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1550b0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1550b0u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x1550b4: 0xac232530  sw          $v1, 0x2530($at)
    ctx->pc = 0x1550b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9520), GPR_U32(ctx, 3));
    // 0x1550b8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1550b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1550bc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1550bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1550c0: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x1550c0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)32u)));
    // 0x1550c4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1550c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1550c8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1550c8u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x1550cc: 0xac232548  sw          $v1, 0x2548($at)
    ctx->pc = 0x1550ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9544), GPR_U32(ctx, 3));
    // 0x1550d0: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1550d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1550d4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1550d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1550d8: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1550d8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)64u)));
    // 0x1550dc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1550dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1550e0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1550e0u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x1550e4: 0xac232520  sw          $v1, 0x2520($at)
    ctx->pc = 0x1550e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9504), GPR_U32(ctx, 3));
    // 0x1550e8: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x1550e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1550ec: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1550ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1550f0: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1550f0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)128u)));
    // 0x1550f4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1550f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1550f8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1550f8u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x1550fc: 0xac232510  sw          $v1, 0x2510($at)
    ctx->pc = 0x1550fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9488), GPR_U32(ctx, 3));
    // 0x155100: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x155100u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x155104: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155108: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x155108u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x15510c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x15510cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x155110: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x155110u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x155114: 0xac232528  sw          $v1, 0x2528($at)
    ctx->pc = 0x155114u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9512), GPR_U32(ctx, 3));
    // 0x155118: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x155118u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x15511c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15511cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155120: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x155120u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2u)));
    // 0x155124: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x155124u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x155128: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x155128u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x15512c: 0xac232518  sw          $v1, 0x2518($at)
    ctx->pc = 0x15512cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9496), GPR_U32(ctx, 3));
    // 0x155130: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x155130u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x155134: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155138: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x155138u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4u)));
    // 0x15513c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x15513cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x155140: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x155140u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x155144: 0xac232550  sw          $v1, 0x2550($at)
    ctx->pc = 0x155144u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9552), GPR_U32(ctx, 3));
    // 0x155148: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x155148u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x15514c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15514cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155150: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x155150u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)8u)));
    // 0x155154: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x155154u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x155158: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x155158u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x15515c: 0xac232568  sw          $v1, 0x2568($at)
    ctx->pc = 0x15515cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9576), GPR_U32(ctx, 3));
    // 0x155160: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x155160u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x155164: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155168: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x155168u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)16u)));
    // 0x15516c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x15516cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x155170: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x155170u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x155174: 0xac232560  sw          $v1, 0x2560($at)
    ctx->pc = 0x155174u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9568), GPR_U32(ctx, 3));
    // 0x155178: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x155178u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x15517c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15517cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155180: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x155180u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)32u)));
    // 0x155184: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x155184u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x155188: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x155188u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x15518c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15518Cu;
    {
        const bool branch_taken_0x15518c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15518Cu;
            // 0x155190: 0xac232558  sw          $v1, 0x2558($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9560), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15518c) {
            ctx->pc = 0x1551A0u;
            goto label_1551a0;
        }
    }
    ctx->pc = 0x155194u;
    // 0x155194: 0x0  nop
    ctx->pc = 0x155194u;
    // NOP
label_155198:
    // 0x155198: 0xc055a28  jal         func_1568A0
    ctx->pc = 0x155198u;
    SET_GPR_U32(ctx, 31, 0x1551A0u);
    ctx->pc = 0x15519Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155198u;
            // 0x15519c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1568A0u;
    if (runtime->hasFunction(0x1568A0u)) {
        auto targetFn = runtime->lookupFunction(0x1568A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1551A0u; }
        if (ctx->pc != 0x1551A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPadDataClean_0x1568a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1551A0u; }
        if (ctx->pc != 0x1551A0u) { return; }
    }
    ctx->pc = 0x1551A0u;
label_1551a0:
    // 0x1551a0: 0x16800125  bnez        $s4, . + 4 + (0x125 << 2)
    ctx->pc = 0x1551A0u;
    {
        const bool branch_taken_0x1551a0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1551A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1551A0u;
            // 0x1551a4: 0x3c010043  lui         $at, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1551a0) {
            ctx->pc = 0x155638u;
            goto label_155638;
        }
    }
    ctx->pc = 0x1551A8u;
    // 0x1551a8: 0x8c231624  lw          $v1, 0x1624($at)
    ctx->pc = 0x1551a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5668)));
    // 0x1551ac: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1551acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x1551b0: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x1551b0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1551b4: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
    ctx->pc = 0x1551B4u;
    {
        const bool branch_taken_0x1551b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1551B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1551B4u;
            // 0x1551b8: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1551b4) {
            ctx->pc = 0x155290u;
            goto label_155290;
        }
    }
    ctx->pc = 0x1551BCu;
    // 0x1551bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1551bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1551c0: 0x24840da0  addiu       $a0, $a0, 0xDA0
    ctx->pc = 0x1551c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3488));
    // 0x1551c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1551c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1551c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1551c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1551cc: 0x600008  jr          $v1
    ctx->pc = 0x1551CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1551D8u: goto label_1551d8;
            case 0x1551F0u: goto label_1551f0;
            case 0x155208u: goto label_155208;
            case 0x155220u: goto label_155220;
            case 0x155238u: goto label_155238;
            case 0x155250u: goto label_155250;
            case 0x155268u: goto label_155268;
            case 0x155280u: goto label_155280;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1551D4u;
    // 0x1551d4: 0x0  nop
    ctx->pc = 0x1551d4u;
    // NOP
label_1551d8:
    // 0x1551d8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1551d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1551dc: 0x8c2325d8  lw          $v1, 0x25D8($at)
    ctx->pc = 0x1551dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9688)));
    // 0x1551e0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1551e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1551e4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1551E4u;
    {
        const bool branch_taken_0x1551e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1551E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1551E4u;
            // 0x1551e8: 0xac2321d0  sw          $v1, 0x21D0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8656), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1551e4) {
            ctx->pc = 0x155290u;
            goto label_155290;
        }
    }
    ctx->pc = 0x1551ECu;
    // 0x1551ec: 0x0  nop
    ctx->pc = 0x1551ecu;
    // NOP
label_1551f0:
    // 0x1551f0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1551f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1551f4: 0x8c2325d0  lw          $v1, 0x25D0($at)
    ctx->pc = 0x1551f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9680)));
    // 0x1551f8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1551f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1551fc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1551FCu;
    {
        const bool branch_taken_0x1551fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1551FCu;
            // 0x155200: 0xac2321d0  sw          $v1, 0x21D0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8656), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1551fc) {
            ctx->pc = 0x155290u;
            goto label_155290;
        }
    }
    ctx->pc = 0x155204u;
    // 0x155204: 0x0  nop
    ctx->pc = 0x155204u;
    // NOP
label_155208:
    // 0x155208: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15520c: 0x8c2325c0  lw          $v1, 0x25C0($at)
    ctx->pc = 0x15520cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9664)));
    // 0x155210: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155214: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x155214u;
    {
        const bool branch_taken_0x155214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155214u;
            // 0x155218: 0xac2321d0  sw          $v1, 0x21D0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8656), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155214) {
            ctx->pc = 0x155290u;
            goto label_155290;
        }
    }
    ctx->pc = 0x15521Cu;
    // 0x15521c: 0x0  nop
    ctx->pc = 0x15521cu;
    // NOP
label_155220:
    // 0x155220: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155224: 0x8c2325c8  lw          $v1, 0x25C8($at)
    ctx->pc = 0x155224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9672)));
    // 0x155228: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15522c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x15522Cu;
    {
        const bool branch_taken_0x15522c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15522Cu;
            // 0x155230: 0xac2321d0  sw          $v1, 0x21D0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8656), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15522c) {
            ctx->pc = 0x155290u;
            goto label_155290;
        }
    }
    ctx->pc = 0x155234u;
    // 0x155234: 0x0  nop
    ctx->pc = 0x155234u;
    // NOP
label_155238:
    // 0x155238: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15523c: 0x8c232598  lw          $v1, 0x2598($at)
    ctx->pc = 0x15523cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9624)));
    // 0x155240: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155244: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x155244u;
    {
        const bool branch_taken_0x155244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155244u;
            // 0x155248: 0xac2321d0  sw          $v1, 0x21D0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8656), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155244) {
            ctx->pc = 0x155290u;
            goto label_155290;
        }
    }
    ctx->pc = 0x15524Cu;
    // 0x15524c: 0x0  nop
    ctx->pc = 0x15524cu;
    // NOP
label_155250:
    // 0x155250: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155254: 0x8c232590  lw          $v1, 0x2590($at)
    ctx->pc = 0x155254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9616)));
    // 0x155258: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15525c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15525Cu;
    {
        const bool branch_taken_0x15525c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15525Cu;
            // 0x155260: 0xac2321d0  sw          $v1, 0x21D0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8656), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15525c) {
            ctx->pc = 0x155290u;
            goto label_155290;
        }
    }
    ctx->pc = 0x155264u;
    // 0x155264: 0x0  nop
    ctx->pc = 0x155264u;
    // NOP
label_155268:
    // 0x155268: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15526c: 0x8c232588  lw          $v1, 0x2588($at)
    ctx->pc = 0x15526cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9608)));
    // 0x155270: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155274: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x155274u;
    {
        const bool branch_taken_0x155274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155274u;
            // 0x155278: 0xac2321d0  sw          $v1, 0x21D0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8656), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155274) {
            ctx->pc = 0x155290u;
            goto label_155290;
        }
    }
    ctx->pc = 0x15527Cu;
    // 0x15527c: 0x0  nop
    ctx->pc = 0x15527cu;
    // NOP
label_155280:
    // 0x155280: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155284: 0x8c232580  lw          $v1, 0x2580($at)
    ctx->pc = 0x155284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9600)));
    // 0x155288: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15528c: 0xac2321d0  sw          $v1, 0x21D0($at)
    ctx->pc = 0x15528cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8656), GPR_U32(ctx, 3));
label_155290:
    // 0x155290: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x155290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x155294: 0x8c231628  lw          $v1, 0x1628($at)
    ctx->pc = 0x155294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5672)));
    // 0x155298: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x155298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x15529c: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x15529cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1552a0: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x1552A0u;
    {
        const bool branch_taken_0x1552a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1552A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1552A0u;
            // 0x1552a4: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1552a0) {
            ctx->pc = 0x155378u;
            goto label_155378;
        }
    }
    ctx->pc = 0x1552A8u;
    // 0x1552a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1552a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1552ac: 0x24840d80  addiu       $a0, $a0, 0xD80
    ctx->pc = 0x1552acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3456));
    // 0x1552b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1552b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1552b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1552b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1552b8: 0x600008  jr          $v1
    ctx->pc = 0x1552B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1552C0u: goto label_1552c0;
            case 0x1552D8u: goto label_1552d8;
            case 0x1552F0u: goto label_1552f0;
            case 0x155308u: goto label_155308;
            case 0x155320u: goto label_155320;
            case 0x155338u: goto label_155338;
            case 0x155350u: goto label_155350;
            case 0x155368u: goto label_155368;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1552C0u;
label_1552c0:
    // 0x1552c0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1552c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1552c4: 0x8c2325d8  lw          $v1, 0x25D8($at)
    ctx->pc = 0x1552c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9688)));
    // 0x1552c8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1552c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1552cc: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1552CCu;
    {
        const bool branch_taken_0x1552cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1552D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1552CCu;
            // 0x1552d0: 0xac2321c8  sw          $v1, 0x21C8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8648), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1552cc) {
            ctx->pc = 0x155378u;
            goto label_155378;
        }
    }
    ctx->pc = 0x1552D4u;
    // 0x1552d4: 0x0  nop
    ctx->pc = 0x1552d4u;
    // NOP
label_1552d8:
    // 0x1552d8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1552d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1552dc: 0x8c2325d0  lw          $v1, 0x25D0($at)
    ctx->pc = 0x1552dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9680)));
    // 0x1552e0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1552e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1552e4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1552E4u;
    {
        const bool branch_taken_0x1552e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1552E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1552E4u;
            // 0x1552e8: 0xac2321c8  sw          $v1, 0x21C8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8648), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1552e4) {
            ctx->pc = 0x155378u;
            goto label_155378;
        }
    }
    ctx->pc = 0x1552ECu;
    // 0x1552ec: 0x0  nop
    ctx->pc = 0x1552ecu;
    // NOP
label_1552f0:
    // 0x1552f0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1552f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1552f4: 0x8c2325c0  lw          $v1, 0x25C0($at)
    ctx->pc = 0x1552f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9664)));
    // 0x1552f8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1552f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1552fc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1552FCu;
    {
        const bool branch_taken_0x1552fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1552FCu;
            // 0x155300: 0xac2321c8  sw          $v1, 0x21C8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8648), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1552fc) {
            ctx->pc = 0x155378u;
            goto label_155378;
        }
    }
    ctx->pc = 0x155304u;
    // 0x155304: 0x0  nop
    ctx->pc = 0x155304u;
    // NOP
label_155308:
    // 0x155308: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15530c: 0x8c2325c8  lw          $v1, 0x25C8($at)
    ctx->pc = 0x15530cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9672)));
    // 0x155310: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155314: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x155314u;
    {
        const bool branch_taken_0x155314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155314u;
            // 0x155318: 0xac2321c8  sw          $v1, 0x21C8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8648), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155314) {
            ctx->pc = 0x155378u;
            goto label_155378;
        }
    }
    ctx->pc = 0x15531Cu;
    // 0x15531c: 0x0  nop
    ctx->pc = 0x15531cu;
    // NOP
label_155320:
    // 0x155320: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155324: 0x8c232598  lw          $v1, 0x2598($at)
    ctx->pc = 0x155324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9624)));
    // 0x155328: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15532c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x15532Cu;
    {
        const bool branch_taken_0x15532c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15532Cu;
            // 0x155330: 0xac2321c8  sw          $v1, 0x21C8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8648), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15532c) {
            ctx->pc = 0x155378u;
            goto label_155378;
        }
    }
    ctx->pc = 0x155334u;
    // 0x155334: 0x0  nop
    ctx->pc = 0x155334u;
    // NOP
label_155338:
    // 0x155338: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15533c: 0x8c232590  lw          $v1, 0x2590($at)
    ctx->pc = 0x15533cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9616)));
    // 0x155340: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155344: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x155344u;
    {
        const bool branch_taken_0x155344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155344u;
            // 0x155348: 0xac2321c8  sw          $v1, 0x21C8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8648), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155344) {
            ctx->pc = 0x155378u;
            goto label_155378;
        }
    }
    ctx->pc = 0x15534Cu;
    // 0x15534c: 0x0  nop
    ctx->pc = 0x15534cu;
    // NOP
label_155350:
    // 0x155350: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155354: 0x8c232588  lw          $v1, 0x2588($at)
    ctx->pc = 0x155354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9608)));
    // 0x155358: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15535c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15535Cu;
    {
        const bool branch_taken_0x15535c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15535Cu;
            // 0x155360: 0xac2321c8  sw          $v1, 0x21C8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8648), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15535c) {
            ctx->pc = 0x155378u;
            goto label_155378;
        }
    }
    ctx->pc = 0x155364u;
    // 0x155364: 0x0  nop
    ctx->pc = 0x155364u;
    // NOP
label_155368:
    // 0x155368: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15536c: 0x8c232580  lw          $v1, 0x2580($at)
    ctx->pc = 0x15536cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9600)));
    // 0x155370: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155374: 0xac2321c8  sw          $v1, 0x21C8($at)
    ctx->pc = 0x155374u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8648), GPR_U32(ctx, 3));
label_155378:
    // 0x155378: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x155378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x15537c: 0x8c23162c  lw          $v1, 0x162C($at)
    ctx->pc = 0x15537cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5676)));
    // 0x155380: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x155380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x155384: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x155384u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x155388: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x155388u;
    {
        const bool branch_taken_0x155388 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15538Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155388u;
            // 0x15538c: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155388) {
            ctx->pc = 0x155460u;
            goto label_155460;
        }
    }
    ctx->pc = 0x155390u;
    // 0x155390: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x155390u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x155394: 0x24840d60  addiu       $a0, $a0, 0xD60
    ctx->pc = 0x155394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3424));
    // 0x155398: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x155398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15539c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15539cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1553a0: 0x600008  jr          $v1
    ctx->pc = 0x1553A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1553A8u: goto label_1553a8;
            case 0x1553C0u: goto label_1553c0;
            case 0x1553D8u: goto label_1553d8;
            case 0x1553F0u: goto label_1553f0;
            case 0x155408u: goto label_155408;
            case 0x155420u: goto label_155420;
            case 0x155438u: goto label_155438;
            case 0x155450u: goto label_155450;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1553A8u;
label_1553a8:
    // 0x1553a8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1553a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1553ac: 0x8c2325d8  lw          $v1, 0x25D8($at)
    ctx->pc = 0x1553acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9688)));
    // 0x1553b0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1553b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1553b4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1553B4u;
    {
        const bool branch_taken_0x1553b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1553B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1553B4u;
            // 0x1553b8: 0xac2321c0  sw          $v1, 0x21C0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8640), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1553b4) {
            ctx->pc = 0x155460u;
            goto label_155460;
        }
    }
    ctx->pc = 0x1553BCu;
    // 0x1553bc: 0x0  nop
    ctx->pc = 0x1553bcu;
    // NOP
label_1553c0:
    // 0x1553c0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1553c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1553c4: 0x8c2325d0  lw          $v1, 0x25D0($at)
    ctx->pc = 0x1553c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9680)));
    // 0x1553c8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1553c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1553cc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1553CCu;
    {
        const bool branch_taken_0x1553cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1553D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1553CCu;
            // 0x1553d0: 0xac2321c0  sw          $v1, 0x21C0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8640), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1553cc) {
            ctx->pc = 0x155460u;
            goto label_155460;
        }
    }
    ctx->pc = 0x1553D4u;
    // 0x1553d4: 0x0  nop
    ctx->pc = 0x1553d4u;
    // NOP
label_1553d8:
    // 0x1553d8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1553d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1553dc: 0x8c2325c0  lw          $v1, 0x25C0($at)
    ctx->pc = 0x1553dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9664)));
    // 0x1553e0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1553e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1553e4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1553E4u;
    {
        const bool branch_taken_0x1553e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1553E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1553E4u;
            // 0x1553e8: 0xac2321c0  sw          $v1, 0x21C0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8640), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1553e4) {
            ctx->pc = 0x155460u;
            goto label_155460;
        }
    }
    ctx->pc = 0x1553ECu;
    // 0x1553ec: 0x0  nop
    ctx->pc = 0x1553ecu;
    // NOP
label_1553f0:
    // 0x1553f0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1553f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1553f4: 0x8c2325c8  lw          $v1, 0x25C8($at)
    ctx->pc = 0x1553f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9672)));
    // 0x1553f8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1553f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1553fc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1553FCu;
    {
        const bool branch_taken_0x1553fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1553FCu;
            // 0x155400: 0xac2321c0  sw          $v1, 0x21C0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8640), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1553fc) {
            ctx->pc = 0x155460u;
            goto label_155460;
        }
    }
    ctx->pc = 0x155404u;
    // 0x155404: 0x0  nop
    ctx->pc = 0x155404u;
    // NOP
label_155408:
    // 0x155408: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15540c: 0x8c232598  lw          $v1, 0x2598($at)
    ctx->pc = 0x15540cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9624)));
    // 0x155410: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155414: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x155414u;
    {
        const bool branch_taken_0x155414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155414u;
            // 0x155418: 0xac2321c0  sw          $v1, 0x21C0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8640), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155414) {
            ctx->pc = 0x155460u;
            goto label_155460;
        }
    }
    ctx->pc = 0x15541Cu;
    // 0x15541c: 0x0  nop
    ctx->pc = 0x15541cu;
    // NOP
label_155420:
    // 0x155420: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155424: 0x8c232590  lw          $v1, 0x2590($at)
    ctx->pc = 0x155424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9616)));
    // 0x155428: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15542c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15542Cu;
    {
        const bool branch_taken_0x15542c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15542Cu;
            // 0x155430: 0xac2321c0  sw          $v1, 0x21C0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8640), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15542c) {
            ctx->pc = 0x155460u;
            goto label_155460;
        }
    }
    ctx->pc = 0x155434u;
    // 0x155434: 0x0  nop
    ctx->pc = 0x155434u;
    // NOP
label_155438:
    // 0x155438: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15543c: 0x8c232588  lw          $v1, 0x2588($at)
    ctx->pc = 0x15543cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9608)));
    // 0x155440: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155444: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x155444u;
    {
        const bool branch_taken_0x155444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155444u;
            // 0x155448: 0xac2321c0  sw          $v1, 0x21C0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8640), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155444) {
            ctx->pc = 0x155460u;
            goto label_155460;
        }
    }
    ctx->pc = 0x15544Cu;
    // 0x15544c: 0x0  nop
    ctx->pc = 0x15544cu;
    // NOP
label_155450:
    // 0x155450: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155454: 0x8c232580  lw          $v1, 0x2580($at)
    ctx->pc = 0x155454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9600)));
    // 0x155458: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15545c: 0xac2321c0  sw          $v1, 0x21C0($at)
    ctx->pc = 0x15545cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8640), GPR_U32(ctx, 3));
label_155460:
    // 0x155460: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x155460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x155464: 0x8c231630  lw          $v1, 0x1630($at)
    ctx->pc = 0x155464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5680)));
    // 0x155468: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x155468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x15546c: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x15546cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x155470: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x155470u;
    {
        const bool branch_taken_0x155470 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x155474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155470u;
            // 0x155474: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155470) {
            ctx->pc = 0x155548u;
            goto label_155548;
        }
    }
    ctx->pc = 0x155478u;
    // 0x155478: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x155478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15547c: 0x24840d40  addiu       $a0, $a0, 0xD40
    ctx->pc = 0x15547cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3392));
    // 0x155480: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x155480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x155484: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x155484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155488: 0x600008  jr          $v1
    ctx->pc = 0x155488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155490u: goto label_155490;
            case 0x1554A8u: goto label_1554a8;
            case 0x1554C0u: goto label_1554c0;
            case 0x1554D8u: goto label_1554d8;
            case 0x1554F0u: goto label_1554f0;
            case 0x155508u: goto label_155508;
            case 0x155520u: goto label_155520;
            case 0x155538u: goto label_155538;
            default: break;
        }
        return;
    }
    ctx->pc = 0x155490u;
label_155490:
    // 0x155490: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155494: 0x8c2325d8  lw          $v1, 0x25D8($at)
    ctx->pc = 0x155494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9688)));
    // 0x155498: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15549c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x15549Cu;
    {
        const bool branch_taken_0x15549c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1554A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15549Cu;
            // 0x1554a0: 0xac2321b8  sw          $v1, 0x21B8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15549c) {
            ctx->pc = 0x155548u;
            goto label_155548;
        }
    }
    ctx->pc = 0x1554A4u;
    // 0x1554a4: 0x0  nop
    ctx->pc = 0x1554a4u;
    // NOP
label_1554a8:
    // 0x1554a8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1554a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1554ac: 0x8c2325d0  lw          $v1, 0x25D0($at)
    ctx->pc = 0x1554acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9680)));
    // 0x1554b0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1554b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1554b4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1554B4u;
    {
        const bool branch_taken_0x1554b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1554B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1554B4u;
            // 0x1554b8: 0xac2321b8  sw          $v1, 0x21B8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1554b4) {
            ctx->pc = 0x155548u;
            goto label_155548;
        }
    }
    ctx->pc = 0x1554BCu;
    // 0x1554bc: 0x0  nop
    ctx->pc = 0x1554bcu;
    // NOP
label_1554c0:
    // 0x1554c0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1554c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1554c4: 0x8c2325c0  lw          $v1, 0x25C0($at)
    ctx->pc = 0x1554c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9664)));
    // 0x1554c8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1554c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1554cc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1554CCu;
    {
        const bool branch_taken_0x1554cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1554D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1554CCu;
            // 0x1554d0: 0xac2321b8  sw          $v1, 0x21B8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1554cc) {
            ctx->pc = 0x155548u;
            goto label_155548;
        }
    }
    ctx->pc = 0x1554D4u;
    // 0x1554d4: 0x0  nop
    ctx->pc = 0x1554d4u;
    // NOP
label_1554d8:
    // 0x1554d8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1554d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1554dc: 0x8c2325c8  lw          $v1, 0x25C8($at)
    ctx->pc = 0x1554dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9672)));
    // 0x1554e0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1554e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1554e4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1554E4u;
    {
        const bool branch_taken_0x1554e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1554E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1554E4u;
            // 0x1554e8: 0xac2321b8  sw          $v1, 0x21B8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1554e4) {
            ctx->pc = 0x155548u;
            goto label_155548;
        }
    }
    ctx->pc = 0x1554ECu;
    // 0x1554ec: 0x0  nop
    ctx->pc = 0x1554ecu;
    // NOP
label_1554f0:
    // 0x1554f0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1554f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1554f4: 0x8c232598  lw          $v1, 0x2598($at)
    ctx->pc = 0x1554f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9624)));
    // 0x1554f8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1554f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1554fc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1554FCu;
    {
        const bool branch_taken_0x1554fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1554FCu;
            // 0x155500: 0xac2321b8  sw          $v1, 0x21B8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1554fc) {
            ctx->pc = 0x155548u;
            goto label_155548;
        }
    }
    ctx->pc = 0x155504u;
    // 0x155504: 0x0  nop
    ctx->pc = 0x155504u;
    // NOP
label_155508:
    // 0x155508: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15550c: 0x8c232590  lw          $v1, 0x2590($at)
    ctx->pc = 0x15550cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9616)));
    // 0x155510: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155514: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x155514u;
    {
        const bool branch_taken_0x155514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155514u;
            // 0x155518: 0xac2321b8  sw          $v1, 0x21B8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155514) {
            ctx->pc = 0x155548u;
            goto label_155548;
        }
    }
    ctx->pc = 0x15551Cu;
    // 0x15551c: 0x0  nop
    ctx->pc = 0x15551cu;
    // NOP
label_155520:
    // 0x155520: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155524: 0x8c232588  lw          $v1, 0x2588($at)
    ctx->pc = 0x155524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9608)));
    // 0x155528: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15552c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15552Cu;
    {
        const bool branch_taken_0x15552c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15552Cu;
            // 0x155530: 0xac2321b8  sw          $v1, 0x21B8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15552c) {
            ctx->pc = 0x155548u;
            goto label_155548;
        }
    }
    ctx->pc = 0x155534u;
    // 0x155534: 0x0  nop
    ctx->pc = 0x155534u;
    // NOP
label_155538:
    // 0x155538: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15553c: 0x8c232580  lw          $v1, 0x2580($at)
    ctx->pc = 0x15553cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9600)));
    // 0x155540: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155544: 0xac2321b8  sw          $v1, 0x21B8($at)
    ctx->pc = 0x155544u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8632), GPR_U32(ctx, 3));
label_155548:
    // 0x155548: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x155548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x15554c: 0x8c231634  lw          $v1, 0x1634($at)
    ctx->pc = 0x15554cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5684)));
    // 0x155550: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x155550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x155554: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x155554u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x155558: 0x10200159  beqz        $at, . + 4 + (0x159 << 2)
    ctx->pc = 0x155558u;
    {
        const bool branch_taken_0x155558 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15555Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155558u;
            // 0x15555c: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155558) {
            ctx->pc = 0x155AC0u;
            goto label_155ac0;
        }
    }
    ctx->pc = 0x155560u;
    // 0x155560: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x155560u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x155564: 0x24840d20  addiu       $a0, $a0, 0xD20
    ctx->pc = 0x155564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3360));
    // 0x155568: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x155568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15556c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15556cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155570: 0x600008  jr          $v1
    ctx->pc = 0x155570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155578u: goto label_155578;
            case 0x155590u: goto label_155590;
            case 0x1555A8u: goto label_1555a8;
            case 0x1555C0u: goto label_1555c0;
            case 0x1555D8u: goto label_1555d8;
            case 0x1555F0u: goto label_1555f0;
            case 0x155608u: goto label_155608;
            case 0x155620u: goto label_155620;
            default: break;
        }
        return;
    }
    ctx->pc = 0x155578u;
label_155578:
    // 0x155578: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15557c: 0x8c2325d8  lw          $v1, 0x25D8($at)
    ctx->pc = 0x15557cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9688)));
    // 0x155580: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155584: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x155584u;
    {
        const bool branch_taken_0x155584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155584u;
            // 0x155588: 0xac2321b0  sw          $v1, 0x21B0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8624), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155584) {
            ctx->pc = 0x155AC0u;
            goto label_155ac0;
        }
    }
    ctx->pc = 0x15558Cu;
    // 0x15558c: 0x0  nop
    ctx->pc = 0x15558cu;
    // NOP
label_155590:
    // 0x155590: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155594: 0x8c2325d0  lw          $v1, 0x25D0($at)
    ctx->pc = 0x155594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9680)));
    // 0x155598: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15559c: 0x10000148  b           . + 4 + (0x148 << 2)
    ctx->pc = 0x15559Cu;
    {
        const bool branch_taken_0x15559c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1555A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15559Cu;
            // 0x1555a0: 0xac2321b0  sw          $v1, 0x21B0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8624), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15559c) {
            ctx->pc = 0x155AC0u;
            goto label_155ac0;
        }
    }
    ctx->pc = 0x1555A4u;
    // 0x1555a4: 0x0  nop
    ctx->pc = 0x1555a4u;
    // NOP
label_1555a8:
    // 0x1555a8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1555a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1555ac: 0x8c2325c0  lw          $v1, 0x25C0($at)
    ctx->pc = 0x1555acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9664)));
    // 0x1555b0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1555b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1555b4: 0x10000142  b           . + 4 + (0x142 << 2)
    ctx->pc = 0x1555B4u;
    {
        const bool branch_taken_0x1555b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1555B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1555B4u;
            // 0x1555b8: 0xac2321b0  sw          $v1, 0x21B0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8624), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1555b4) {
            ctx->pc = 0x155AC0u;
            goto label_155ac0;
        }
    }
    ctx->pc = 0x1555BCu;
    // 0x1555bc: 0x0  nop
    ctx->pc = 0x1555bcu;
    // NOP
label_1555c0:
    // 0x1555c0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1555c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1555c4: 0x8c2325c8  lw          $v1, 0x25C8($at)
    ctx->pc = 0x1555c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9672)));
    // 0x1555c8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1555c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1555cc: 0x1000013c  b           . + 4 + (0x13C << 2)
    ctx->pc = 0x1555CCu;
    {
        const bool branch_taken_0x1555cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1555D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1555CCu;
            // 0x1555d0: 0xac2321b0  sw          $v1, 0x21B0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8624), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1555cc) {
            ctx->pc = 0x155AC0u;
            goto label_155ac0;
        }
    }
    ctx->pc = 0x1555D4u;
    // 0x1555d4: 0x0  nop
    ctx->pc = 0x1555d4u;
    // NOP
label_1555d8:
    // 0x1555d8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1555d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1555dc: 0x8c232598  lw          $v1, 0x2598($at)
    ctx->pc = 0x1555dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9624)));
    // 0x1555e0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1555e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1555e4: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x1555E4u;
    {
        const bool branch_taken_0x1555e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1555E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1555E4u;
            // 0x1555e8: 0xac2321b0  sw          $v1, 0x21B0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8624), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1555e4) {
            ctx->pc = 0x155AC0u;
            goto label_155ac0;
        }
    }
    ctx->pc = 0x1555ECu;
    // 0x1555ec: 0x0  nop
    ctx->pc = 0x1555ecu;
    // NOP
label_1555f0:
    // 0x1555f0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1555f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1555f4: 0x8c232590  lw          $v1, 0x2590($at)
    ctx->pc = 0x1555f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9616)));
    // 0x1555f8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1555f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1555fc: 0x10000130  b           . + 4 + (0x130 << 2)
    ctx->pc = 0x1555FCu;
    {
        const bool branch_taken_0x1555fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1555FCu;
            // 0x155600: 0xac2321b0  sw          $v1, 0x21B0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8624), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1555fc) {
            ctx->pc = 0x155AC0u;
            goto label_155ac0;
        }
    }
    ctx->pc = 0x155604u;
    // 0x155604: 0x0  nop
    ctx->pc = 0x155604u;
    // NOP
label_155608:
    // 0x155608: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15560c: 0x8c232588  lw          $v1, 0x2588($at)
    ctx->pc = 0x15560cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9608)));
    // 0x155610: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155614: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x155614u;
    {
        const bool branch_taken_0x155614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155614u;
            // 0x155618: 0xac2321b0  sw          $v1, 0x21B0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8624), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155614) {
            ctx->pc = 0x155AC0u;
            goto label_155ac0;
        }
    }
    ctx->pc = 0x15561Cu;
    // 0x15561c: 0x0  nop
    ctx->pc = 0x15561cu;
    // NOP
label_155620:
    // 0x155620: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155624: 0x8c232580  lw          $v1, 0x2580($at)
    ctx->pc = 0x155624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9600)));
    // 0x155628: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15562c: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x15562Cu;
    {
        const bool branch_taken_0x15562c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15562Cu;
            // 0x155630: 0xac2321b0  sw          $v1, 0x21B0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8624), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15562c) {
            ctx->pc = 0x155AC0u;
            goto label_155ac0;
        }
    }
    ctx->pc = 0x155634u;
    // 0x155634: 0x0  nop
    ctx->pc = 0x155634u;
    // NOP
label_155638:
    // 0x155638: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x155638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x15563c: 0x8c231638  lw          $v1, 0x1638($at)
    ctx->pc = 0x15563cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5688)));
    // 0x155640: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x155640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x155644: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x155644u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x155648: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x155648u;
    {
        const bool branch_taken_0x155648 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15564Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155648u;
            // 0x15564c: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155648) {
            ctx->pc = 0x155720u;
            goto label_155720;
        }
    }
    ctx->pc = 0x155650u;
    // 0x155650: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x155650u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x155654: 0x24840d00  addiu       $a0, $a0, 0xD00
    ctx->pc = 0x155654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3328));
    // 0x155658: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x155658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15565c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15565cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155660: 0x600008  jr          $v1
    ctx->pc = 0x155660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155668u: goto label_155668;
            case 0x155680u: goto label_155680;
            case 0x155698u: goto label_155698;
            case 0x1556B0u: goto label_1556b0;
            case 0x1556C8u: goto label_1556c8;
            case 0x1556E0u: goto label_1556e0;
            case 0x1556F8u: goto label_1556f8;
            case 0x155710u: goto label_155710;
            default: break;
        }
        return;
    }
    ctx->pc = 0x155668u;
label_155668:
    // 0x155668: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15566c: 0x8c232568  lw          $v1, 0x2568($at)
    ctx->pc = 0x15566cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9576)));
    // 0x155670: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155674: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x155674u;
    {
        const bool branch_taken_0x155674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155674u;
            // 0x155678: 0xac2321a0  sw          $v1, 0x21A0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8608), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155674) {
            ctx->pc = 0x155720u;
            goto label_155720;
        }
    }
    ctx->pc = 0x15567Cu;
    // 0x15567c: 0x0  nop
    ctx->pc = 0x15567cu;
    // NOP
label_155680:
    // 0x155680: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155684: 0x8c232560  lw          $v1, 0x2560($at)
    ctx->pc = 0x155684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9568)));
    // 0x155688: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15568c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x15568Cu;
    {
        const bool branch_taken_0x15568c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15568Cu;
            // 0x155690: 0xac2321a0  sw          $v1, 0x21A0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8608), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15568c) {
            ctx->pc = 0x155720u;
            goto label_155720;
        }
    }
    ctx->pc = 0x155694u;
    // 0x155694: 0x0  nop
    ctx->pc = 0x155694u;
    // NOP
label_155698:
    // 0x155698: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15569c: 0x8c232550  lw          $v1, 0x2550($at)
    ctx->pc = 0x15569cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9552)));
    // 0x1556a0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1556a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1556a4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1556A4u;
    {
        const bool branch_taken_0x1556a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1556A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1556A4u;
            // 0x1556a8: 0xac2321a0  sw          $v1, 0x21A0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8608), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1556a4) {
            ctx->pc = 0x155720u;
            goto label_155720;
        }
    }
    ctx->pc = 0x1556ACu;
    // 0x1556ac: 0x0  nop
    ctx->pc = 0x1556acu;
    // NOP
label_1556b0:
    // 0x1556b0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1556b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1556b4: 0x8c232558  lw          $v1, 0x2558($at)
    ctx->pc = 0x1556b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9560)));
    // 0x1556b8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1556b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1556bc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1556BCu;
    {
        const bool branch_taken_0x1556bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1556C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1556BCu;
            // 0x1556c0: 0xac2321a0  sw          $v1, 0x21A0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8608), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1556bc) {
            ctx->pc = 0x155720u;
            goto label_155720;
        }
    }
    ctx->pc = 0x1556C4u;
    // 0x1556c4: 0x0  nop
    ctx->pc = 0x1556c4u;
    // NOP
label_1556c8:
    // 0x1556c8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1556c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1556cc: 0x8c232528  lw          $v1, 0x2528($at)
    ctx->pc = 0x1556ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9512)));
    // 0x1556d0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1556d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1556d4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1556D4u;
    {
        const bool branch_taken_0x1556d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1556D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1556D4u;
            // 0x1556d8: 0xac2321a0  sw          $v1, 0x21A0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8608), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1556d4) {
            ctx->pc = 0x155720u;
            goto label_155720;
        }
    }
    ctx->pc = 0x1556DCu;
    // 0x1556dc: 0x0  nop
    ctx->pc = 0x1556dcu;
    // NOP
label_1556e0:
    // 0x1556e0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1556e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1556e4: 0x8c232520  lw          $v1, 0x2520($at)
    ctx->pc = 0x1556e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9504)));
    // 0x1556e8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1556e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1556ec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1556ECu;
    {
        const bool branch_taken_0x1556ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1556F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1556ECu;
            // 0x1556f0: 0xac2321a0  sw          $v1, 0x21A0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8608), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1556ec) {
            ctx->pc = 0x155720u;
            goto label_155720;
        }
    }
    ctx->pc = 0x1556F4u;
    // 0x1556f4: 0x0  nop
    ctx->pc = 0x1556f4u;
    // NOP
label_1556f8:
    // 0x1556f8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1556f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1556fc: 0x8c232518  lw          $v1, 0x2518($at)
    ctx->pc = 0x1556fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9496)));
    // 0x155700: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155704: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x155704u;
    {
        const bool branch_taken_0x155704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155704u;
            // 0x155708: 0xac2321a0  sw          $v1, 0x21A0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8608), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155704) {
            ctx->pc = 0x155720u;
            goto label_155720;
        }
    }
    ctx->pc = 0x15570Cu;
    // 0x15570c: 0x0  nop
    ctx->pc = 0x15570cu;
    // NOP
label_155710:
    // 0x155710: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155714: 0x8c232510  lw          $v1, 0x2510($at)
    ctx->pc = 0x155714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9488)));
    // 0x155718: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15571c: 0xac2321a0  sw          $v1, 0x21A0($at)
    ctx->pc = 0x15571cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8608), GPR_U32(ctx, 3));
label_155720:
    // 0x155720: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x155720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x155724: 0x8c23163c  lw          $v1, 0x163C($at)
    ctx->pc = 0x155724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5692)));
    // 0x155728: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x155728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x15572c: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x15572cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x155730: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x155730u;
    {
        const bool branch_taken_0x155730 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x155734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155730u;
            // 0x155734: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155730) {
            ctx->pc = 0x155808u;
            goto label_155808;
        }
    }
    ctx->pc = 0x155738u;
    // 0x155738: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x155738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15573c: 0x24840ce0  addiu       $a0, $a0, 0xCE0
    ctx->pc = 0x15573cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3296));
    // 0x155740: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x155740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x155744: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x155744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155748: 0x600008  jr          $v1
    ctx->pc = 0x155748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155750u: goto label_155750;
            case 0x155768u: goto label_155768;
            case 0x155780u: goto label_155780;
            case 0x155798u: goto label_155798;
            case 0x1557B0u: goto label_1557b0;
            case 0x1557C8u: goto label_1557c8;
            case 0x1557E0u: goto label_1557e0;
            case 0x1557F8u: goto label_1557f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x155750u;
label_155750:
    // 0x155750: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155754: 0x8c232568  lw          $v1, 0x2568($at)
    ctx->pc = 0x155754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9576)));
    // 0x155758: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15575c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x15575Cu;
    {
        const bool branch_taken_0x15575c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15575Cu;
            // 0x155760: 0xac232198  sw          $v1, 0x2198($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15575c) {
            ctx->pc = 0x155808u;
            goto label_155808;
        }
    }
    ctx->pc = 0x155764u;
    // 0x155764: 0x0  nop
    ctx->pc = 0x155764u;
    // NOP
label_155768:
    // 0x155768: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15576c: 0x8c232560  lw          $v1, 0x2560($at)
    ctx->pc = 0x15576cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9568)));
    // 0x155770: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155774: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x155774u;
    {
        const bool branch_taken_0x155774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155774u;
            // 0x155778: 0xac232198  sw          $v1, 0x2198($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155774) {
            ctx->pc = 0x155808u;
            goto label_155808;
        }
    }
    ctx->pc = 0x15577Cu;
    // 0x15577c: 0x0  nop
    ctx->pc = 0x15577cu;
    // NOP
label_155780:
    // 0x155780: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155784: 0x8c232550  lw          $v1, 0x2550($at)
    ctx->pc = 0x155784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9552)));
    // 0x155788: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15578c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x15578Cu;
    {
        const bool branch_taken_0x15578c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15578Cu;
            // 0x155790: 0xac232198  sw          $v1, 0x2198($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15578c) {
            ctx->pc = 0x155808u;
            goto label_155808;
        }
    }
    ctx->pc = 0x155794u;
    // 0x155794: 0x0  nop
    ctx->pc = 0x155794u;
    // NOP
label_155798:
    // 0x155798: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15579c: 0x8c232558  lw          $v1, 0x2558($at)
    ctx->pc = 0x15579cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9560)));
    // 0x1557a0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1557a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1557a4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1557A4u;
    {
        const bool branch_taken_0x1557a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1557A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1557A4u;
            // 0x1557a8: 0xac232198  sw          $v1, 0x2198($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1557a4) {
            ctx->pc = 0x155808u;
            goto label_155808;
        }
    }
    ctx->pc = 0x1557ACu;
    // 0x1557ac: 0x0  nop
    ctx->pc = 0x1557acu;
    // NOP
label_1557b0:
    // 0x1557b0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1557b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1557b4: 0x8c232528  lw          $v1, 0x2528($at)
    ctx->pc = 0x1557b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9512)));
    // 0x1557b8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1557b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1557bc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1557BCu;
    {
        const bool branch_taken_0x1557bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1557C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1557BCu;
            // 0x1557c0: 0xac232198  sw          $v1, 0x2198($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1557bc) {
            ctx->pc = 0x155808u;
            goto label_155808;
        }
    }
    ctx->pc = 0x1557C4u;
    // 0x1557c4: 0x0  nop
    ctx->pc = 0x1557c4u;
    // NOP
label_1557c8:
    // 0x1557c8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1557c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1557cc: 0x8c232520  lw          $v1, 0x2520($at)
    ctx->pc = 0x1557ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9504)));
    // 0x1557d0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1557d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1557d4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1557D4u;
    {
        const bool branch_taken_0x1557d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1557D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1557D4u;
            // 0x1557d8: 0xac232198  sw          $v1, 0x2198($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1557d4) {
            ctx->pc = 0x155808u;
            goto label_155808;
        }
    }
    ctx->pc = 0x1557DCu;
    // 0x1557dc: 0x0  nop
    ctx->pc = 0x1557dcu;
    // NOP
label_1557e0:
    // 0x1557e0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1557e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1557e4: 0x8c232518  lw          $v1, 0x2518($at)
    ctx->pc = 0x1557e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9496)));
    // 0x1557e8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1557e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1557ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1557ECu;
    {
        const bool branch_taken_0x1557ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1557F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1557ECu;
            // 0x1557f0: 0xac232198  sw          $v1, 0x2198($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1557ec) {
            ctx->pc = 0x155808u;
            goto label_155808;
        }
    }
    ctx->pc = 0x1557F4u;
    // 0x1557f4: 0x0  nop
    ctx->pc = 0x1557f4u;
    // NOP
label_1557f8:
    // 0x1557f8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1557f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1557fc: 0x8c232510  lw          $v1, 0x2510($at)
    ctx->pc = 0x1557fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9488)));
    // 0x155800: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155804: 0xac232198  sw          $v1, 0x2198($at)
    ctx->pc = 0x155804u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8600), GPR_U32(ctx, 3));
label_155808:
    // 0x155808: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x155808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x15580c: 0x8c231640  lw          $v1, 0x1640($at)
    ctx->pc = 0x15580cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5696)));
    // 0x155810: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x155810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x155814: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x155814u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x155818: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x155818u;
    {
        const bool branch_taken_0x155818 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15581Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155818u;
            // 0x15581c: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155818) {
            ctx->pc = 0x1558F0u;
            goto label_1558f0;
        }
    }
    ctx->pc = 0x155820u;
    // 0x155820: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x155820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x155824: 0x24840cc0  addiu       $a0, $a0, 0xCC0
    ctx->pc = 0x155824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3264));
    // 0x155828: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x155828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15582c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15582cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155830: 0x600008  jr          $v1
    ctx->pc = 0x155830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155838u: goto label_155838;
            case 0x155850u: goto label_155850;
            case 0x155868u: goto label_155868;
            case 0x155880u: goto label_155880;
            case 0x155898u: goto label_155898;
            case 0x1558B0u: goto label_1558b0;
            case 0x1558C8u: goto label_1558c8;
            case 0x1558E0u: goto label_1558e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x155838u;
label_155838:
    // 0x155838: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15583c: 0x8c232568  lw          $v1, 0x2568($at)
    ctx->pc = 0x15583cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9576)));
    // 0x155840: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155844: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x155844u;
    {
        const bool branch_taken_0x155844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155844u;
            // 0x155848: 0xac232190  sw          $v1, 0x2190($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8592), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155844) {
            ctx->pc = 0x1558F0u;
            goto label_1558f0;
        }
    }
    ctx->pc = 0x15584Cu;
    // 0x15584c: 0x0  nop
    ctx->pc = 0x15584cu;
    // NOP
label_155850:
    // 0x155850: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155854: 0x8c232560  lw          $v1, 0x2560($at)
    ctx->pc = 0x155854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9568)));
    // 0x155858: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15585c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x15585Cu;
    {
        const bool branch_taken_0x15585c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15585Cu;
            // 0x155860: 0xac232190  sw          $v1, 0x2190($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8592), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15585c) {
            ctx->pc = 0x1558F0u;
            goto label_1558f0;
        }
    }
    ctx->pc = 0x155864u;
    // 0x155864: 0x0  nop
    ctx->pc = 0x155864u;
    // NOP
label_155868:
    // 0x155868: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15586c: 0x8c232550  lw          $v1, 0x2550($at)
    ctx->pc = 0x15586cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9552)));
    // 0x155870: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155874: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x155874u;
    {
        const bool branch_taken_0x155874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155874u;
            // 0x155878: 0xac232190  sw          $v1, 0x2190($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8592), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155874) {
            ctx->pc = 0x1558F0u;
            goto label_1558f0;
        }
    }
    ctx->pc = 0x15587Cu;
    // 0x15587c: 0x0  nop
    ctx->pc = 0x15587cu;
    // NOP
label_155880:
    // 0x155880: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155884: 0x8c232558  lw          $v1, 0x2558($at)
    ctx->pc = 0x155884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9560)));
    // 0x155888: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15588c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x15588Cu;
    {
        const bool branch_taken_0x15588c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15588Cu;
            // 0x155890: 0xac232190  sw          $v1, 0x2190($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8592), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15588c) {
            ctx->pc = 0x1558F0u;
            goto label_1558f0;
        }
    }
    ctx->pc = 0x155894u;
    // 0x155894: 0x0  nop
    ctx->pc = 0x155894u;
    // NOP
label_155898:
    // 0x155898: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15589c: 0x8c232528  lw          $v1, 0x2528($at)
    ctx->pc = 0x15589cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9512)));
    // 0x1558a0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1558a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1558a4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1558A4u;
    {
        const bool branch_taken_0x1558a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1558A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1558A4u;
            // 0x1558a8: 0xac232190  sw          $v1, 0x2190($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8592), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1558a4) {
            ctx->pc = 0x1558F0u;
            goto label_1558f0;
        }
    }
    ctx->pc = 0x1558ACu;
    // 0x1558ac: 0x0  nop
    ctx->pc = 0x1558acu;
    // NOP
label_1558b0:
    // 0x1558b0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1558b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1558b4: 0x8c232520  lw          $v1, 0x2520($at)
    ctx->pc = 0x1558b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9504)));
    // 0x1558b8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1558b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1558bc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1558BCu;
    {
        const bool branch_taken_0x1558bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1558C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1558BCu;
            // 0x1558c0: 0xac232190  sw          $v1, 0x2190($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8592), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1558bc) {
            ctx->pc = 0x1558F0u;
            goto label_1558f0;
        }
    }
    ctx->pc = 0x1558C4u;
    // 0x1558c4: 0x0  nop
    ctx->pc = 0x1558c4u;
    // NOP
label_1558c8:
    // 0x1558c8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1558c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1558cc: 0x8c232518  lw          $v1, 0x2518($at)
    ctx->pc = 0x1558ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9496)));
    // 0x1558d0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1558d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1558d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1558D4u;
    {
        const bool branch_taken_0x1558d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1558D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1558D4u;
            // 0x1558d8: 0xac232190  sw          $v1, 0x2190($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8592), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1558d4) {
            ctx->pc = 0x1558F0u;
            goto label_1558f0;
        }
    }
    ctx->pc = 0x1558DCu;
    // 0x1558dc: 0x0  nop
    ctx->pc = 0x1558dcu;
    // NOP
label_1558e0:
    // 0x1558e0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1558e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1558e4: 0x8c232510  lw          $v1, 0x2510($at)
    ctx->pc = 0x1558e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9488)));
    // 0x1558e8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1558e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1558ec: 0xac232190  sw          $v1, 0x2190($at)
    ctx->pc = 0x1558ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8592), GPR_U32(ctx, 3));
label_1558f0:
    // 0x1558f0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1558f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1558f4: 0x8c231644  lw          $v1, 0x1644($at)
    ctx->pc = 0x1558f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5700)));
    // 0x1558f8: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1558f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x1558fc: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x1558fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x155900: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x155900u;
    {
        const bool branch_taken_0x155900 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x155904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155900u;
            // 0x155904: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155900) {
            ctx->pc = 0x1559D8u;
            goto label_1559d8;
        }
    }
    ctx->pc = 0x155908u;
    // 0x155908: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x155908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15590c: 0x24840ca0  addiu       $a0, $a0, 0xCA0
    ctx->pc = 0x15590cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3232));
    // 0x155910: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x155910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x155914: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x155914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155918: 0x600008  jr          $v1
    ctx->pc = 0x155918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155920u: goto label_155920;
            case 0x155938u: goto label_155938;
            case 0x155950u: goto label_155950;
            case 0x155968u: goto label_155968;
            case 0x155980u: goto label_155980;
            case 0x155998u: goto label_155998;
            case 0x1559B0u: goto label_1559b0;
            case 0x1559C8u: goto label_1559c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x155920u;
label_155920:
    // 0x155920: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155924: 0x8c232568  lw          $v1, 0x2568($at)
    ctx->pc = 0x155924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9576)));
    // 0x155928: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15592c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x15592Cu;
    {
        const bool branch_taken_0x15592c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15592Cu;
            // 0x155930: 0xac232188  sw          $v1, 0x2188($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8584), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15592c) {
            ctx->pc = 0x1559D8u;
            goto label_1559d8;
        }
    }
    ctx->pc = 0x155934u;
    // 0x155934: 0x0  nop
    ctx->pc = 0x155934u;
    // NOP
label_155938:
    // 0x155938: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15593c: 0x8c232560  lw          $v1, 0x2560($at)
    ctx->pc = 0x15593cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9568)));
    // 0x155940: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155944: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x155944u;
    {
        const bool branch_taken_0x155944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155944u;
            // 0x155948: 0xac232188  sw          $v1, 0x2188($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8584), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155944) {
            ctx->pc = 0x1559D8u;
            goto label_1559d8;
        }
    }
    ctx->pc = 0x15594Cu;
    // 0x15594c: 0x0  nop
    ctx->pc = 0x15594cu;
    // NOP
label_155950:
    // 0x155950: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155954: 0x8c232550  lw          $v1, 0x2550($at)
    ctx->pc = 0x155954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9552)));
    // 0x155958: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15595c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x15595Cu;
    {
        const bool branch_taken_0x15595c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15595Cu;
            // 0x155960: 0xac232188  sw          $v1, 0x2188($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8584), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15595c) {
            ctx->pc = 0x1559D8u;
            goto label_1559d8;
        }
    }
    ctx->pc = 0x155964u;
    // 0x155964: 0x0  nop
    ctx->pc = 0x155964u;
    // NOP
label_155968:
    // 0x155968: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15596c: 0x8c232558  lw          $v1, 0x2558($at)
    ctx->pc = 0x15596cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9560)));
    // 0x155970: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155974: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x155974u;
    {
        const bool branch_taken_0x155974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155974u;
            // 0x155978: 0xac232188  sw          $v1, 0x2188($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8584), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155974) {
            ctx->pc = 0x1559D8u;
            goto label_1559d8;
        }
    }
    ctx->pc = 0x15597Cu;
    // 0x15597c: 0x0  nop
    ctx->pc = 0x15597cu;
    // NOP
label_155980:
    // 0x155980: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155984: 0x8c232528  lw          $v1, 0x2528($at)
    ctx->pc = 0x155984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9512)));
    // 0x155988: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15598c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x15598Cu;
    {
        const bool branch_taken_0x15598c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15598Cu;
            // 0x155990: 0xac232188  sw          $v1, 0x2188($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8584), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15598c) {
            ctx->pc = 0x1559D8u;
            goto label_1559d8;
        }
    }
    ctx->pc = 0x155994u;
    // 0x155994: 0x0  nop
    ctx->pc = 0x155994u;
    // NOP
label_155998:
    // 0x155998: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15599c: 0x8c232520  lw          $v1, 0x2520($at)
    ctx->pc = 0x15599cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9504)));
    // 0x1559a0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1559a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1559a4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1559A4u;
    {
        const bool branch_taken_0x1559a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1559A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1559A4u;
            // 0x1559a8: 0xac232188  sw          $v1, 0x2188($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8584), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1559a4) {
            ctx->pc = 0x1559D8u;
            goto label_1559d8;
        }
    }
    ctx->pc = 0x1559ACu;
    // 0x1559ac: 0x0  nop
    ctx->pc = 0x1559acu;
    // NOP
label_1559b0:
    // 0x1559b0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1559b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1559b4: 0x8c232518  lw          $v1, 0x2518($at)
    ctx->pc = 0x1559b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9496)));
    // 0x1559b8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1559b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1559bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1559BCu;
    {
        const bool branch_taken_0x1559bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1559C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1559BCu;
            // 0x1559c0: 0xac232188  sw          $v1, 0x2188($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8584), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1559bc) {
            ctx->pc = 0x1559D8u;
            goto label_1559d8;
        }
    }
    ctx->pc = 0x1559C4u;
    // 0x1559c4: 0x0  nop
    ctx->pc = 0x1559c4u;
    // NOP
label_1559c8:
    // 0x1559c8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1559c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1559cc: 0x8c232510  lw          $v1, 0x2510($at)
    ctx->pc = 0x1559ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9488)));
    // 0x1559d0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1559d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1559d4: 0xac232188  sw          $v1, 0x2188($at)
    ctx->pc = 0x1559d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8584), GPR_U32(ctx, 3));
label_1559d8:
    // 0x1559d8: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1559d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1559dc: 0x8c231648  lw          $v1, 0x1648($at)
    ctx->pc = 0x1559dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5704)));
    // 0x1559e0: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x1559e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x1559e4: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x1559e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1559e8: 0x10200035  beqz        $at, . + 4 + (0x35 << 2)
    ctx->pc = 0x1559E8u;
    {
        const bool branch_taken_0x1559e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1559ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1559E8u;
            // 0x1559ec: 0x3c040022  lui         $a0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1559e8) {
            ctx->pc = 0x155AC0u;
            goto label_155ac0;
        }
    }
    ctx->pc = 0x1559F0u;
    // 0x1559f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1559f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1559f4: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x1559f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x1559f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1559f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1559fc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1559fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155a00: 0x600008  jr          $v1
    ctx->pc = 0x155A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155A08u: goto label_155a08;
            case 0x155A20u: goto label_155a20;
            case 0x155A38u: goto label_155a38;
            case 0x155A50u: goto label_155a50;
            case 0x155A68u: goto label_155a68;
            case 0x155A80u: goto label_155a80;
            case 0x155A98u: goto label_155a98;
            case 0x155AB0u: goto label_155ab0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x155A08u;
label_155a08:
    // 0x155a08: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155a08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155a0c: 0x8c232568  lw          $v1, 0x2568($at)
    ctx->pc = 0x155a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9576)));
    // 0x155a10: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155a14: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x155A14u;
    {
        const bool branch_taken_0x155a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155A14u;
            // 0x155a18: 0xac232180  sw          $v1, 0x2180($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8576), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a14) {
            ctx->pc = 0x155AC0u;
            goto label_155ac0;
        }
    }
    ctx->pc = 0x155A1Cu;
    // 0x155a1c: 0x0  nop
    ctx->pc = 0x155a1cu;
    // NOP
label_155a20:
    // 0x155a20: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155a24: 0x8c232560  lw          $v1, 0x2560($at)
    ctx->pc = 0x155a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9568)));
    // 0x155a28: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155a2c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x155A2Cu;
    {
        const bool branch_taken_0x155a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155A2Cu;
            // 0x155a30: 0xac232180  sw          $v1, 0x2180($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8576), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a2c) {
            ctx->pc = 0x155AC0u;
            goto label_155ac0;
        }
    }
    ctx->pc = 0x155A34u;
    // 0x155a34: 0x0  nop
    ctx->pc = 0x155a34u;
    // NOP
label_155a38:
    // 0x155a38: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155a3c: 0x8c232550  lw          $v1, 0x2550($at)
    ctx->pc = 0x155a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9552)));
    // 0x155a40: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155a44: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x155A44u;
    {
        const bool branch_taken_0x155a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155A44u;
            // 0x155a48: 0xac232180  sw          $v1, 0x2180($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8576), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a44) {
            ctx->pc = 0x155AC0u;
            goto label_155ac0;
        }
    }
    ctx->pc = 0x155A4Cu;
    // 0x155a4c: 0x0  nop
    ctx->pc = 0x155a4cu;
    // NOP
label_155a50:
    // 0x155a50: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155a54: 0x8c232558  lw          $v1, 0x2558($at)
    ctx->pc = 0x155a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9560)));
    // 0x155a58: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155a5c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x155A5Cu;
    {
        const bool branch_taken_0x155a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155A5Cu;
            // 0x155a60: 0xac232180  sw          $v1, 0x2180($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8576), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a5c) {
            ctx->pc = 0x155AC0u;
            goto label_155ac0;
        }
    }
    ctx->pc = 0x155A64u;
    // 0x155a64: 0x0  nop
    ctx->pc = 0x155a64u;
    // NOP
label_155a68:
    // 0x155a68: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155a6c: 0x8c232528  lw          $v1, 0x2528($at)
    ctx->pc = 0x155a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9512)));
    // 0x155a70: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155a74: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x155A74u;
    {
        const bool branch_taken_0x155a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155A74u;
            // 0x155a78: 0xac232180  sw          $v1, 0x2180($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8576), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a74) {
            ctx->pc = 0x155AC0u;
            goto label_155ac0;
        }
    }
    ctx->pc = 0x155A7Cu;
    // 0x155a7c: 0x0  nop
    ctx->pc = 0x155a7cu;
    // NOP
label_155a80:
    // 0x155a80: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155a84: 0x8c232520  lw          $v1, 0x2520($at)
    ctx->pc = 0x155a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9504)));
    // 0x155a88: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155a8c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x155A8Cu;
    {
        const bool branch_taken_0x155a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155A8Cu;
            // 0x155a90: 0xac232180  sw          $v1, 0x2180($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8576), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a8c) {
            ctx->pc = 0x155AC0u;
            goto label_155ac0;
        }
    }
    ctx->pc = 0x155A94u;
    // 0x155a94: 0x0  nop
    ctx->pc = 0x155a94u;
    // NOP
label_155a98:
    // 0x155a98: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155a9c: 0x8c232518  lw          $v1, 0x2518($at)
    ctx->pc = 0x155a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9496)));
    // 0x155aa0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155aa4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x155AA4u;
    {
        const bool branch_taken_0x155aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155AA4u;
            // 0x155aa8: 0xac232180  sw          $v1, 0x2180($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8576), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155aa4) {
            ctx->pc = 0x155AC0u;
            goto label_155ac0;
        }
    }
    ctx->pc = 0x155AACu;
    // 0x155aac: 0x0  nop
    ctx->pc = 0x155aacu;
    // NOP
label_155ab0:
    // 0x155ab0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155ab4: 0x8c232510  lw          $v1, 0x2510($at)
    ctx->pc = 0x155ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9488)));
    // 0x155ab8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155abc: 0xac232180  sw          $v1, 0x2180($at)
    ctx->pc = 0x155abcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8576), GPR_U32(ctx, 3));
label_155ac0:
    // 0x155ac0: 0x168000c5  bnez        $s4, . + 4 + (0xC5 << 2)
    ctx->pc = 0x155AC0u;
    {
        const bool branch_taken_0x155ac0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x155AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155AC0u;
            // 0x155ac4: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155ac0) {
            ctx->pc = 0x155DD8u;
            goto label_155dd8;
        }
    }
    ctx->pc = 0x155AC8u;
    // 0x155ac8: 0x8c282578  lw          $t0, 0x2578($at)
    ctx->pc = 0x155ac8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9592)));
    // 0x155acc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155ad0: 0x39070001  xori        $a3, $t0, 0x1
    ctx->pc = 0x155ad0u;
    SET_GPR_VEC(ctx, 7, PS2_PXOR(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)1u)));
    // 0x155ad4: 0x8c262498  lw          $a2, 0x2498($at)
    ctx->pc = 0x155ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9368)));
    // 0x155ad8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155adc: 0x8c2a2570  lw          $t2, 0x2570($at)
    ctx->pc = 0x155adcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9584)));
    // 0x155ae0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155ae4: 0x8c252490  lw          $a1, 0x2490($at)
    ctx->pc = 0x155ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9360)));
    // 0x155ae8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155aec: 0xa02826  xor         $a1, $a1, $zero
    ctx->pc = 0x155aecu;
    SET_GPR_VEC(ctx, 5, PS2_PXOR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x155af0: 0x8c2925a8  lw          $t1, 0x25A8($at)
    ctx->pc = 0x155af0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9640)));
    // 0x155af4: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x155af4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155af8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155afc: 0x8c2424c8  lw          $a0, 0x24C8($at)
    ctx->pc = 0x155afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9416)));
    // 0x155b00: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155b04: 0x8c2325b0  lw          $v1, 0x25B0($at)
    ctx->pc = 0x155b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9648)));
    // 0x155b08: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155b0c: 0xac282498  sw          $t0, 0x2498($at)
    ctx->pc = 0x155b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9368), GPR_U32(ctx, 8));
    // 0x155b10: 0x2ce80001  sltiu       $t0, $a3, 0x1
    ctx->pc = 0x155b10u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155b14: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155b18: 0xc03826  xor         $a3, $a2, $zero
    ctx->pc = 0x155b18u;
    SET_GPR_VEC(ctx, 7, PS2_PXOR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x155b1c: 0xac2a2490  sw          $t2, 0x2490($at)
    ctx->pc = 0x155b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9360), GPR_U32(ctx, 10));
    // 0x155b20: 0x2ce70001  sltiu       $a3, $a3, 0x1
    ctx->pc = 0x155b20u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155b24: 0x39460001  xori        $a2, $t2, 0x1
    ctx->pc = 0x155b24u;
    SET_GPR_VEC(ctx, 6, PS2_PXOR(GPR_VEC(ctx, 10), _mm_cvtsi32_si128((int)1u)));
    // 0x155b28: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x155b28u;
    SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x155b2c: 0x2cc60001  sltiu       $a2, $a2, 0x1
    ctx->pc = 0x155b2cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155b30: 0x7382b  sltu        $a3, $zero, $a3
    ctx->pc = 0x155b30u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x155b34: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155b38: 0xac2723b8  sw          $a3, 0x23B8($at)
    ctx->pc = 0x155b38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9144), GPR_U32(ctx, 7));
    // 0x155b3c: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x155b3cu;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    // 0x155b40: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155b44: 0x802826  xor         $a1, $a0, $zero
    ctx->pc = 0x155b44u;
    SET_GPR_VEC(ctx, 5, PS2_PXOR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x155b48: 0xac2924c8  sw          $t1, 0x24C8($at)
    ctx->pc = 0x155b48u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9416), GPR_U32(ctx, 9));
    // 0x155b4c: 0x6202b  sltu        $a0, $zero, $a2
    ctx->pc = 0x155b4cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x155b50: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155b54: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x155b54u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155b58: 0xac2423b0  sw          $a0, 0x23B0($at)
    ctx->pc = 0x155b58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9136), GPR_U32(ctx, 4));
    // 0x155b5c: 0x39240001  xori        $a0, $t1, 0x1
    ctx->pc = 0x155b5cu;
    SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 9), _mm_cvtsi32_si128((int)1u)));
    // 0x155b60: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155b60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155b64: 0x2c860001  sltiu       $a2, $a0, 0x1
    ctx->pc = 0x155b64u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155b68: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x155b68u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    // 0x155b6c: 0x38640001  xori        $a0, $v1, 0x1
    ctx->pc = 0x155b6cu;
    SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x155b70: 0x8c2624d0  lw          $a2, 0x24D0($at)
    ctx->pc = 0x155b70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9424)));
    // 0x155b74: 0x2c870001  sltiu       $a3, $a0, 0x1
    ctx->pc = 0x155b74u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155b78: 0x5202b  sltu        $a0, $zero, $a1
    ctx->pc = 0x155b78u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x155b7c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155b80: 0xac2423e8  sw          $a0, 0x23E8($at)
    ctx->pc = 0x155b80u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9192), GPR_U32(ctx, 4));
    // 0x155b84: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155b88: 0x8c2925a0  lw          $t1, 0x25A0($at)
    ctx->pc = 0x155b88u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9632)));
    // 0x155b8c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155b8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155b90: 0x8c2524c0  lw          $a1, 0x24C0($at)
    ctx->pc = 0x155b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9408)));
    // 0x155b94: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155b98: 0xa02826  xor         $a1, $a1, $zero
    ctx->pc = 0x155b98u;
    SET_GPR_VEC(ctx, 5, PS2_PXOR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x155b9c: 0x8c2825b8  lw          $t0, 0x25B8($at)
    ctx->pc = 0x155b9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9656)));
    // 0x155ba0: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x155ba0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155ba4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155ba8: 0x8c2424d8  lw          $a0, 0x24D8($at)
    ctx->pc = 0x155ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9432)));
    // 0x155bac: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155bb0: 0xac2324d0  sw          $v1, 0x24D0($at)
    ctx->pc = 0x155bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9424), GPR_U32(ctx, 3));
    // 0x155bb4: 0xc01826  xor         $v1, $a2, $zero
    ctx->pc = 0x155bb4u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x155bb8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155bbc: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x155bbcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155bc0: 0xe33024  and         $a2, $a3, $v1
    ctx->pc = 0x155bc0u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 7), GPR_VEC(ctx, 3)));
    // 0x155bc4: 0x8c2325c0  lw          $v1, 0x25C0($at)
    ctx->pc = 0x155bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9664)));
    // 0x155bc8: 0x6382b  sltu        $a3, $zero, $a2
    ctx->pc = 0x155bc8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x155bcc: 0x39260001  xori        $a2, $t1, 0x1
    ctx->pc = 0x155bccu;
    SET_GPR_VEC(ctx, 6, PS2_PXOR(GPR_VEC(ctx, 9), _mm_cvtsi32_si128((int)1u)));
    // 0x155bd0: 0x2cc60001  sltiu       $a2, $a2, 0x1
    ctx->pc = 0x155bd0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155bd4: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x155bd4u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    // 0x155bd8: 0x802826  xor         $a1, $a0, $zero
    ctx->pc = 0x155bd8u;
    SET_GPR_VEC(ctx, 5, PS2_PXOR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x155bdc: 0x6202b  sltu        $a0, $zero, $a2
    ctx->pc = 0x155bdcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x155be0: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x155be0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155be4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155be8: 0xac2723f0  sw          $a3, 0x23F0($at)
    ctx->pc = 0x155be8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9200), GPR_U32(ctx, 7));
    // 0x155bec: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155bf0: 0xac2924c0  sw          $t1, 0x24C0($at)
    ctx->pc = 0x155bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9408), GPR_U32(ctx, 9));
    // 0x155bf4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155bf8: 0xac2824d8  sw          $t0, 0x24D8($at)
    ctx->pc = 0x155bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9432), GPR_U32(ctx, 8));
    // 0x155bfc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155c00: 0xac2423e0  sw          $a0, 0x23E0($at)
    ctx->pc = 0x155c00u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9184), GPR_U32(ctx, 4));
    // 0x155c04: 0x39040001  xori        $a0, $t0, 0x1
    ctx->pc = 0x155c04u;
    SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)1u)));
    // 0x155c08: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155c08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155c0c: 0x2c860001  sltiu       $a2, $a0, 0x1
    ctx->pc = 0x155c0cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155c10: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x155c10u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    // 0x155c14: 0x38640001  xori        $a0, $v1, 0x1
    ctx->pc = 0x155c14u;
    SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x155c18: 0x8c2624e0  lw          $a2, 0x24E0($at)
    ctx->pc = 0x155c18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9440)));
    // 0x155c1c: 0x2c870001  sltiu       $a3, $a0, 0x1
    ctx->pc = 0x155c1cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155c20: 0x5202b  sltu        $a0, $zero, $a1
    ctx->pc = 0x155c20u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x155c24: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155c28: 0xac2423f8  sw          $a0, 0x23F8($at)
    ctx->pc = 0x155c28u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9208), GPR_U32(ctx, 4));
    // 0x155c2c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155c2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155c30: 0x8c2925d8  lw          $t1, 0x25D8($at)
    ctx->pc = 0x155c30u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9688)));
    // 0x155c34: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155c38: 0x8c2524f8  lw          $a1, 0x24F8($at)
    ctx->pc = 0x155c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9464)));
    // 0x155c3c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155c40: 0xa02826  xor         $a1, $a1, $zero
    ctx->pc = 0x155c40u;
    SET_GPR_VEC(ctx, 5, PS2_PXOR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x155c44: 0x8c2825d0  lw          $t0, 0x25D0($at)
    ctx->pc = 0x155c44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9680)));
    // 0x155c48: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x155c48u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155c4c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155c50: 0x8c2424f0  lw          $a0, 0x24F0($at)
    ctx->pc = 0x155c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9456)));
    // 0x155c54: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155c58: 0xac2324e0  sw          $v1, 0x24E0($at)
    ctx->pc = 0x155c58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9440), GPR_U32(ctx, 3));
    // 0x155c5c: 0xc01826  xor         $v1, $a2, $zero
    ctx->pc = 0x155c5cu;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x155c60: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155c64: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x155c64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155c68: 0xe33024  and         $a2, $a3, $v1
    ctx->pc = 0x155c68u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 7), GPR_VEC(ctx, 3)));
    // 0x155c6c: 0x8c2325c8  lw          $v1, 0x25C8($at)
    ctx->pc = 0x155c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9672)));
    // 0x155c70: 0x6382b  sltu        $a3, $zero, $a2
    ctx->pc = 0x155c70u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x155c74: 0x39260001  xori        $a2, $t1, 0x1
    ctx->pc = 0x155c74u;
    SET_GPR_VEC(ctx, 6, PS2_PXOR(GPR_VEC(ctx, 9), _mm_cvtsi32_si128((int)1u)));
    // 0x155c78: 0x2cc60001  sltiu       $a2, $a2, 0x1
    ctx->pc = 0x155c78u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155c7c: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x155c7cu;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    // 0x155c80: 0x802826  xor         $a1, $a0, $zero
    ctx->pc = 0x155c80u;
    SET_GPR_VEC(ctx, 5, PS2_PXOR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x155c84: 0x6202b  sltu        $a0, $zero, $a2
    ctx->pc = 0x155c84u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x155c88: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x155c88u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155c8c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155c90: 0xac272400  sw          $a3, 0x2400($at)
    ctx->pc = 0x155c90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9216), GPR_U32(ctx, 7));
    // 0x155c94: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155c98: 0xac2924f8  sw          $t1, 0x24F8($at)
    ctx->pc = 0x155c98u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9464), GPR_U32(ctx, 9));
    // 0x155c9c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155ca0: 0xac2824f0  sw          $t0, 0x24F0($at)
    ctx->pc = 0x155ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9456), GPR_U32(ctx, 8));
    // 0x155ca4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155ca8: 0xac242418  sw          $a0, 0x2418($at)
    ctx->pc = 0x155ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9240), GPR_U32(ctx, 4));
    // 0x155cac: 0x39040001  xori        $a0, $t0, 0x1
    ctx->pc = 0x155cacu;
    SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)1u)));
    // 0x155cb0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155cb4: 0x2c860001  sltiu       $a2, $a0, 0x1
    ctx->pc = 0x155cb4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155cb8: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x155cb8u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    // 0x155cbc: 0x38640001  xori        $a0, $v1, 0x1
    ctx->pc = 0x155cbcu;
    SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x155cc0: 0x8c2624e8  lw          $a2, 0x24E8($at)
    ctx->pc = 0x155cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9448)));
    // 0x155cc4: 0x2c870001  sltiu       $a3, $a0, 0x1
    ctx->pc = 0x155cc4u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155cc8: 0x5202b  sltu        $a0, $zero, $a1
    ctx->pc = 0x155cc8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x155ccc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155cd0: 0xac242410  sw          $a0, 0x2410($at)
    ctx->pc = 0x155cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9232), GPR_U32(ctx, 4));
    // 0x155cd4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155cd8: 0x8c292598  lw          $t1, 0x2598($at)
    ctx->pc = 0x155cd8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9624)));
    // 0x155cdc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155ce0: 0x8c2524b8  lw          $a1, 0x24B8($at)
    ctx->pc = 0x155ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9400)));
    // 0x155ce4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155ce8: 0xa02826  xor         $a1, $a1, $zero
    ctx->pc = 0x155ce8u;
    SET_GPR_VEC(ctx, 5, PS2_PXOR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x155cec: 0x8c282590  lw          $t0, 0x2590($at)
    ctx->pc = 0x155cecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9616)));
    // 0x155cf0: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x155cf0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155cf4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155cf8: 0x8c2424b0  lw          $a0, 0x24B0($at)
    ctx->pc = 0x155cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9392)));
    // 0x155cfc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155d00: 0xac2324e8  sw          $v1, 0x24E8($at)
    ctx->pc = 0x155d00u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9448), GPR_U32(ctx, 3));
    // 0x155d04: 0xc01826  xor         $v1, $a2, $zero
    ctx->pc = 0x155d04u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x155d08: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155d0c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x155d0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155d10: 0xe33024  and         $a2, $a3, $v1
    ctx->pc = 0x155d10u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 7), GPR_VEC(ctx, 3)));
    // 0x155d14: 0x8c232588  lw          $v1, 0x2588($at)
    ctx->pc = 0x155d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9608)));
    // 0x155d18: 0x6382b  sltu        $a3, $zero, $a2
    ctx->pc = 0x155d18u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x155d1c: 0x39260001  xori        $a2, $t1, 0x1
    ctx->pc = 0x155d1cu;
    SET_GPR_VEC(ctx, 6, PS2_PXOR(GPR_VEC(ctx, 9), _mm_cvtsi32_si128((int)1u)));
    // 0x155d20: 0x2cc60001  sltiu       $a2, $a2, 0x1
    ctx->pc = 0x155d20u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155d24: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x155d24u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    // 0x155d28: 0x802826  xor         $a1, $a0, $zero
    ctx->pc = 0x155d28u;
    SET_GPR_VEC(ctx, 5, PS2_PXOR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x155d2c: 0x6202b  sltu        $a0, $zero, $a2
    ctx->pc = 0x155d2cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x155d30: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x155d30u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155d34: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155d38: 0xac272408  sw          $a3, 0x2408($at)
    ctx->pc = 0x155d38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9224), GPR_U32(ctx, 7));
    // 0x155d3c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155d40: 0xac2924b8  sw          $t1, 0x24B8($at)
    ctx->pc = 0x155d40u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9400), GPR_U32(ctx, 9));
    // 0x155d44: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155d48: 0xac2824b0  sw          $t0, 0x24B0($at)
    ctx->pc = 0x155d48u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9392), GPR_U32(ctx, 8));
    // 0x155d4c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155d50: 0xac2423d8  sw          $a0, 0x23D8($at)
    ctx->pc = 0x155d50u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9176), GPR_U32(ctx, 4));
    // 0x155d54: 0x39040001  xori        $a0, $t0, 0x1
    ctx->pc = 0x155d54u;
    SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)1u)));
    // 0x155d58: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155d5c: 0x2c860001  sltiu       $a2, $a0, 0x1
    ctx->pc = 0x155d5cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155d60: 0x38640001  xori        $a0, $v1, 0x1
    ctx->pc = 0x155d60u;
    SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x155d64: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x155d64u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    // 0x155d68: 0x2c860001  sltiu       $a2, $a0, 0x1
    ctx->pc = 0x155d68u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155d6c: 0x5202b  sltu        $a0, $zero, $a1
    ctx->pc = 0x155d6cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x155d70: 0x8c2524a8  lw          $a1, 0x24A8($at)
    ctx->pc = 0x155d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9384)));
    // 0x155d74: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155d78: 0xac2423d0  sw          $a0, 0x23D0($at)
    ctx->pc = 0x155d78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9168), GPR_U32(ctx, 4));
    // 0x155d7c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155d80: 0x8c272580  lw          $a3, 0x2580($at)
    ctx->pc = 0x155d80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9600)));
    // 0x155d84: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155d84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155d88: 0x8c2424a0  lw          $a0, 0x24A0($at)
    ctx->pc = 0x155d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9376)));
    // 0x155d8c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155d90: 0xac2324a8  sw          $v1, 0x24A8($at)
    ctx->pc = 0x155d90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9384), GPR_U32(ctx, 3));
    // 0x155d94: 0xa01826  xor         $v1, $a1, $zero
    ctx->pc = 0x155d94u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x155d98: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155d98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155d9c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x155d9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155da0: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x155da0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 3)));
    // 0x155da4: 0x3282b  sltu        $a1, $zero, $v1
    ctx->pc = 0x155da4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x155da8: 0xac2523c8  sw          $a1, 0x23C8($at)
    ctx->pc = 0x155da8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9160), GPR_U32(ctx, 5));
    // 0x155dac: 0x38e30001  xori        $v1, $a3, 0x1
    ctx->pc = 0x155dacu;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)1u)));
    // 0x155db0: 0x2c650001  sltiu       $a1, $v1, 0x1
    ctx->pc = 0x155db0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155db4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155db8: 0x801826  xor         $v1, $a0, $zero
    ctx->pc = 0x155db8u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x155dbc: 0xac2724a0  sw          $a3, 0x24A0($at)
    ctx->pc = 0x155dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9376), GPR_U32(ctx, 7));
    // 0x155dc0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x155dc0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155dc4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155dc8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x155dc8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x155dcc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x155dccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x155dd0: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x155DD0u;
    {
        const bool branch_taken_0x155dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155DD0u;
            // 0x155dd4: 0xac2323c0  sw          $v1, 0x23C0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 9152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155dd0) {
            ctx->pc = 0x1560E8u;
            goto label_1560e8;
        }
    }
    ctx->pc = 0x155DD8u;
label_155dd8:
    // 0x155dd8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155ddc: 0x8c282508  lw          $t0, 0x2508($at)
    ctx->pc = 0x155ddcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9480)));
    // 0x155de0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155de4: 0x39070001  xori        $a3, $t0, 0x1
    ctx->pc = 0x155de4u;
    SET_GPR_VEC(ctx, 7, PS2_PXOR(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)1u)));
    // 0x155de8: 0x8c262428  lw          $a2, 0x2428($at)
    ctx->pc = 0x155de8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9256)));
    // 0x155dec: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155df0: 0x8c2a2500  lw          $t2, 0x2500($at)
    ctx->pc = 0x155df0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9472)));
    // 0x155df4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155df8: 0x8c252420  lw          $a1, 0x2420($at)
    ctx->pc = 0x155df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9248)));
    // 0x155dfc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155dfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155e00: 0xa02826  xor         $a1, $a1, $zero
    ctx->pc = 0x155e00u;
    SET_GPR_VEC(ctx, 5, PS2_PXOR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x155e04: 0x8c292538  lw          $t1, 0x2538($at)
    ctx->pc = 0x155e04u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9528)));
    // 0x155e08: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x155e08u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155e0c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155e10: 0x8c242458  lw          $a0, 0x2458($at)
    ctx->pc = 0x155e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9304)));
    // 0x155e14: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155e18: 0x8c232540  lw          $v1, 0x2540($at)
    ctx->pc = 0x155e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9536)));
    // 0x155e1c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155e20: 0xac282428  sw          $t0, 0x2428($at)
    ctx->pc = 0x155e20u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9256), GPR_U32(ctx, 8));
    // 0x155e24: 0x2ce80001  sltiu       $t0, $a3, 0x1
    ctx->pc = 0x155e24u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155e28: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155e2c: 0xc03826  xor         $a3, $a2, $zero
    ctx->pc = 0x155e2cu;
    SET_GPR_VEC(ctx, 7, PS2_PXOR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x155e30: 0xac2a2420  sw          $t2, 0x2420($at)
    ctx->pc = 0x155e30u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9248), GPR_U32(ctx, 10));
    // 0x155e34: 0x2ce70001  sltiu       $a3, $a3, 0x1
    ctx->pc = 0x155e34u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155e38: 0x39460001  xori        $a2, $t2, 0x1
    ctx->pc = 0x155e38u;
    SET_GPR_VEC(ctx, 6, PS2_PXOR(GPR_VEC(ctx, 10), _mm_cvtsi32_si128((int)1u)));
    // 0x155e3c: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x155e3cu;
    SET_GPR_VEC(ctx, 7, PS2_PAND(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x155e40: 0x2cc60001  sltiu       $a2, $a2, 0x1
    ctx->pc = 0x155e40u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155e44: 0x7382b  sltu        $a3, $zero, $a3
    ctx->pc = 0x155e44u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x155e48: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155e4c: 0xac272348  sw          $a3, 0x2348($at)
    ctx->pc = 0x155e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9032), GPR_U32(ctx, 7));
    // 0x155e50: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x155e50u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    // 0x155e54: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155e58: 0x802826  xor         $a1, $a0, $zero
    ctx->pc = 0x155e58u;
    SET_GPR_VEC(ctx, 5, PS2_PXOR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x155e5c: 0xac292458  sw          $t1, 0x2458($at)
    ctx->pc = 0x155e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9304), GPR_U32(ctx, 9));
    // 0x155e60: 0x6202b  sltu        $a0, $zero, $a2
    ctx->pc = 0x155e60u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x155e64: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155e68: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x155e68u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155e6c: 0xac242340  sw          $a0, 0x2340($at)
    ctx->pc = 0x155e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9024), GPR_U32(ctx, 4));
    // 0x155e70: 0x39240001  xori        $a0, $t1, 0x1
    ctx->pc = 0x155e70u;
    SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 9), _mm_cvtsi32_si128((int)1u)));
    // 0x155e74: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155e78: 0x2c860001  sltiu       $a2, $a0, 0x1
    ctx->pc = 0x155e78u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155e7c: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x155e7cu;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    // 0x155e80: 0x38640001  xori        $a0, $v1, 0x1
    ctx->pc = 0x155e80u;
    SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x155e84: 0x8c262460  lw          $a2, 0x2460($at)
    ctx->pc = 0x155e84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9312)));
    // 0x155e88: 0x2c870001  sltiu       $a3, $a0, 0x1
    ctx->pc = 0x155e88u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155e8c: 0x5202b  sltu        $a0, $zero, $a1
    ctx->pc = 0x155e8cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x155e90: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155e94: 0xac242378  sw          $a0, 0x2378($at)
    ctx->pc = 0x155e94u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9080), GPR_U32(ctx, 4));
    // 0x155e98: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155e9c: 0x8c292530  lw          $t1, 0x2530($at)
    ctx->pc = 0x155e9cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9520)));
    // 0x155ea0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155ea4: 0x8c252450  lw          $a1, 0x2450($at)
    ctx->pc = 0x155ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9296)));
    // 0x155ea8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155eac: 0xa02826  xor         $a1, $a1, $zero
    ctx->pc = 0x155eacu;
    SET_GPR_VEC(ctx, 5, PS2_PXOR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x155eb0: 0x8c282548  lw          $t0, 0x2548($at)
    ctx->pc = 0x155eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9544)));
    // 0x155eb4: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x155eb4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155eb8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155ebc: 0x8c242468  lw          $a0, 0x2468($at)
    ctx->pc = 0x155ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9320)));
    // 0x155ec0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155ec4: 0xac232460  sw          $v1, 0x2460($at)
    ctx->pc = 0x155ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9312), GPR_U32(ctx, 3));
    // 0x155ec8: 0xc01826  xor         $v1, $a2, $zero
    ctx->pc = 0x155ec8u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x155ecc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155ed0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x155ed0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155ed4: 0xe33024  and         $a2, $a3, $v1
    ctx->pc = 0x155ed4u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 7), GPR_VEC(ctx, 3)));
    // 0x155ed8: 0x8c232550  lw          $v1, 0x2550($at)
    ctx->pc = 0x155ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9552)));
    // 0x155edc: 0x6382b  sltu        $a3, $zero, $a2
    ctx->pc = 0x155edcu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x155ee0: 0x39260001  xori        $a2, $t1, 0x1
    ctx->pc = 0x155ee0u;
    SET_GPR_VEC(ctx, 6, PS2_PXOR(GPR_VEC(ctx, 9), _mm_cvtsi32_si128((int)1u)));
    // 0x155ee4: 0x2cc60001  sltiu       $a2, $a2, 0x1
    ctx->pc = 0x155ee4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155ee8: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x155ee8u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    // 0x155eec: 0x802826  xor         $a1, $a0, $zero
    ctx->pc = 0x155eecu;
    SET_GPR_VEC(ctx, 5, PS2_PXOR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x155ef0: 0x6202b  sltu        $a0, $zero, $a2
    ctx->pc = 0x155ef0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x155ef4: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x155ef4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155ef8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155efc: 0xac272380  sw          $a3, 0x2380($at)
    ctx->pc = 0x155efcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9088), GPR_U32(ctx, 7));
    // 0x155f00: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155f04: 0xac292450  sw          $t1, 0x2450($at)
    ctx->pc = 0x155f04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9296), GPR_U32(ctx, 9));
    // 0x155f08: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155f0c: 0xac282468  sw          $t0, 0x2468($at)
    ctx->pc = 0x155f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9320), GPR_U32(ctx, 8));
    // 0x155f10: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155f14: 0xac242370  sw          $a0, 0x2370($at)
    ctx->pc = 0x155f14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9072), GPR_U32(ctx, 4));
    // 0x155f18: 0x39040001  xori        $a0, $t0, 0x1
    ctx->pc = 0x155f18u;
    SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)1u)));
    // 0x155f1c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155f1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155f20: 0x2c860001  sltiu       $a2, $a0, 0x1
    ctx->pc = 0x155f20u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155f24: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x155f24u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    // 0x155f28: 0x38640001  xori        $a0, $v1, 0x1
    ctx->pc = 0x155f28u;
    SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x155f2c: 0x8c262470  lw          $a2, 0x2470($at)
    ctx->pc = 0x155f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9328)));
    // 0x155f30: 0x2c870001  sltiu       $a3, $a0, 0x1
    ctx->pc = 0x155f30u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155f34: 0x5202b  sltu        $a0, $zero, $a1
    ctx->pc = 0x155f34u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x155f38: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155f3c: 0xac242388  sw          $a0, 0x2388($at)
    ctx->pc = 0x155f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9096), GPR_U32(ctx, 4));
    // 0x155f40: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155f44: 0x8c292568  lw          $t1, 0x2568($at)
    ctx->pc = 0x155f44u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9576)));
    // 0x155f48: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155f4c: 0x8c252488  lw          $a1, 0x2488($at)
    ctx->pc = 0x155f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9352)));
    // 0x155f50: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155f54: 0xa02826  xor         $a1, $a1, $zero
    ctx->pc = 0x155f54u;
    SET_GPR_VEC(ctx, 5, PS2_PXOR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x155f58: 0x8c282560  lw          $t0, 0x2560($at)
    ctx->pc = 0x155f58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9568)));
    // 0x155f5c: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x155f5cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155f60: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155f64: 0x8c242480  lw          $a0, 0x2480($at)
    ctx->pc = 0x155f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9344)));
    // 0x155f68: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155f6c: 0xac232470  sw          $v1, 0x2470($at)
    ctx->pc = 0x155f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9328), GPR_U32(ctx, 3));
    // 0x155f70: 0xc01826  xor         $v1, $a2, $zero
    ctx->pc = 0x155f70u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x155f74: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155f78: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x155f78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155f7c: 0xe33024  and         $a2, $a3, $v1
    ctx->pc = 0x155f7cu;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 7), GPR_VEC(ctx, 3)));
    // 0x155f80: 0x8c232558  lw          $v1, 0x2558($at)
    ctx->pc = 0x155f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9560)));
    // 0x155f84: 0x6382b  sltu        $a3, $zero, $a2
    ctx->pc = 0x155f84u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x155f88: 0x39260001  xori        $a2, $t1, 0x1
    ctx->pc = 0x155f88u;
    SET_GPR_VEC(ctx, 6, PS2_PXOR(GPR_VEC(ctx, 9), _mm_cvtsi32_si128((int)1u)));
    // 0x155f8c: 0x2cc60001  sltiu       $a2, $a2, 0x1
    ctx->pc = 0x155f8cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155f90: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x155f90u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    // 0x155f94: 0x802826  xor         $a1, $a0, $zero
    ctx->pc = 0x155f94u;
    SET_GPR_VEC(ctx, 5, PS2_PXOR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x155f98: 0x6202b  sltu        $a0, $zero, $a2
    ctx->pc = 0x155f98u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x155f9c: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x155f9cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155fa0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155fa4: 0xac272390  sw          $a3, 0x2390($at)
    ctx->pc = 0x155fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9104), GPR_U32(ctx, 7));
    // 0x155fa8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155fac: 0xac292488  sw          $t1, 0x2488($at)
    ctx->pc = 0x155facu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9352), GPR_U32(ctx, 9));
    // 0x155fb0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155fb4: 0xac282480  sw          $t0, 0x2480($at)
    ctx->pc = 0x155fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9344), GPR_U32(ctx, 8));
    // 0x155fb8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155fbc: 0xac2423a8  sw          $a0, 0x23A8($at)
    ctx->pc = 0x155fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9128), GPR_U32(ctx, 4));
    // 0x155fc0: 0x39040001  xori        $a0, $t0, 0x1
    ctx->pc = 0x155fc0u;
    SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)1u)));
    // 0x155fc4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155fc8: 0x2c860001  sltiu       $a2, $a0, 0x1
    ctx->pc = 0x155fc8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155fcc: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x155fccu;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    // 0x155fd0: 0x38640001  xori        $a0, $v1, 0x1
    ctx->pc = 0x155fd0u;
    SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x155fd4: 0x8c262478  lw          $a2, 0x2478($at)
    ctx->pc = 0x155fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9336)));
    // 0x155fd8: 0x2c870001  sltiu       $a3, $a0, 0x1
    ctx->pc = 0x155fd8u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x155fdc: 0x5202b  sltu        $a0, $zero, $a1
    ctx->pc = 0x155fdcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x155fe0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155fe4: 0xac2423a0  sw          $a0, 0x23A0($at)
    ctx->pc = 0x155fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9120), GPR_U32(ctx, 4));
    // 0x155fe8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155fe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155fec: 0x8c292528  lw          $t1, 0x2528($at)
    ctx->pc = 0x155fecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9512)));
    // 0x155ff0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155ff4: 0x8c252448  lw          $a1, 0x2448($at)
    ctx->pc = 0x155ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9288)));
    // 0x155ff8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x155ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x155ffc: 0xa02826  xor         $a1, $a1, $zero
    ctx->pc = 0x155ffcu;
    SET_GPR_VEC(ctx, 5, PS2_PXOR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x156000: 0x8c282520  lw          $t0, 0x2520($at)
    ctx->pc = 0x156000u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9504)));
    // 0x156004: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x156004u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x156008: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15600c: 0x8c242440  lw          $a0, 0x2440($at)
    ctx->pc = 0x15600cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9280)));
    // 0x156010: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156014: 0xac232478  sw          $v1, 0x2478($at)
    ctx->pc = 0x156014u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9336), GPR_U32(ctx, 3));
    // 0x156018: 0xc01826  xor         $v1, $a2, $zero
    ctx->pc = 0x156018u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x15601c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15601cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156020: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x156020u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x156024: 0xe33024  and         $a2, $a3, $v1
    ctx->pc = 0x156024u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 7), GPR_VEC(ctx, 3)));
    // 0x156028: 0x8c232518  lw          $v1, 0x2518($at)
    ctx->pc = 0x156028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9496)));
    // 0x15602c: 0x6382b  sltu        $a3, $zero, $a2
    ctx->pc = 0x15602cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x156030: 0x39260001  xori        $a2, $t1, 0x1
    ctx->pc = 0x156030u;
    SET_GPR_VEC(ctx, 6, PS2_PXOR(GPR_VEC(ctx, 9), _mm_cvtsi32_si128((int)1u)));
    // 0x156034: 0x2cc60001  sltiu       $a2, $a2, 0x1
    ctx->pc = 0x156034u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x156038: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x156038u;
    SET_GPR_VEC(ctx, 6, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    // 0x15603c: 0x802826  xor         $a1, $a0, $zero
    ctx->pc = 0x15603cu;
    SET_GPR_VEC(ctx, 5, PS2_PXOR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x156040: 0x6202b  sltu        $a0, $zero, $a2
    ctx->pc = 0x156040u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x156044: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x156044u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x156048: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15604c: 0xac272398  sw          $a3, 0x2398($at)
    ctx->pc = 0x15604cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9112), GPR_U32(ctx, 7));
    // 0x156050: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156054: 0xac292448  sw          $t1, 0x2448($at)
    ctx->pc = 0x156054u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9288), GPR_U32(ctx, 9));
    // 0x156058: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15605c: 0xac282440  sw          $t0, 0x2440($at)
    ctx->pc = 0x15605cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9280), GPR_U32(ctx, 8));
    // 0x156060: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156064: 0xac242368  sw          $a0, 0x2368($at)
    ctx->pc = 0x156064u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9064), GPR_U32(ctx, 4));
    // 0x156068: 0x39040001  xori        $a0, $t0, 0x1
    ctx->pc = 0x156068u;
    SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)1u)));
    // 0x15606c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15606cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156070: 0x2c860001  sltiu       $a2, $a0, 0x1
    ctx->pc = 0x156070u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x156074: 0x38640001  xori        $a0, $v1, 0x1
    ctx->pc = 0x156074u;
    SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x156078: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x156078u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 5)));
    // 0x15607c: 0x2c860001  sltiu       $a2, $a0, 0x1
    ctx->pc = 0x15607cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x156080: 0x5202b  sltu        $a0, $zero, $a1
    ctx->pc = 0x156080u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x156084: 0x8c252438  lw          $a1, 0x2438($at)
    ctx->pc = 0x156084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9272)));
    // 0x156088: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15608c: 0xac242360  sw          $a0, 0x2360($at)
    ctx->pc = 0x15608cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9056), GPR_U32(ctx, 4));
    // 0x156090: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156094: 0x8c272510  lw          $a3, 0x2510($at)
    ctx->pc = 0x156094u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9488)));
    // 0x156098: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15609c: 0x8c242430  lw          $a0, 0x2430($at)
    ctx->pc = 0x15609cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9264)));
    // 0x1560a0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1560a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1560a4: 0xac232438  sw          $v1, 0x2438($at)
    ctx->pc = 0x1560a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9272), GPR_U32(ctx, 3));
    // 0x1560a8: 0xa01826  xor         $v1, $a1, $zero
    ctx->pc = 0x1560a8u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1560ac: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1560acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1560b0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1560b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1560b4: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1560b4u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 6), GPR_VEC(ctx, 3)));
    // 0x1560b8: 0x3282b  sltu        $a1, $zero, $v1
    ctx->pc = 0x1560b8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1560bc: 0xac252358  sw          $a1, 0x2358($at)
    ctx->pc = 0x1560bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9048), GPR_U32(ctx, 5));
    // 0x1560c0: 0x38e30001  xori        $v1, $a3, 0x1
    ctx->pc = 0x1560c0u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 7), _mm_cvtsi32_si128((int)1u)));
    // 0x1560c4: 0x2c650001  sltiu       $a1, $v1, 0x1
    ctx->pc = 0x1560c4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1560c8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1560c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1560cc: 0x801826  xor         $v1, $a0, $zero
    ctx->pc = 0x1560ccu;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1560d0: 0xac272430  sw          $a3, 0x2430($at)
    ctx->pc = 0x1560d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9264), GPR_U32(ctx, 7));
    // 0x1560d4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1560d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1560d8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1560d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1560dc: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1560dcu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x1560e0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1560e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1560e4: 0xac232350  sw          $v1, 0x2350($at)
    ctx->pc = 0x1560e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9040), GPR_U32(ctx, 3));
label_1560e8:
    // 0x1560e8: 0x16800075  bnez        $s4, . + 4 + (0x75 << 2)
    ctx->pc = 0x1560E8u;
    {
        const bool branch_taken_0x1560e8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1560ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1560E8u;
            // 0x1560ec: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1560e8) {
            ctx->pc = 0x1562C0u;
            goto label_1562c0;
        }
    }
    ctx->pc = 0x1560F0u;
    // 0x1560f0: 0x8c2525b8  lw          $a1, 0x25B8($at)
    ctx->pc = 0x1560f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9656)));
    // 0x1560f4: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1560F4u;
    {
        const bool branch_taken_0x1560f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1560f4) {
            ctx->pc = 0x156158u;
            goto label_156158;
        }
    }
    ctx->pc = 0x1560FCu;
    // 0x1560fc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1560fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156100: 0x8c2423f8  lw          $a0, 0x23F8($at)
    ctx->pc = 0x156100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9208)));
    // 0x156104: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156108: 0x8c2325e0  lw          $v1, 0x25E0($at)
    ctx->pc = 0x156108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9696)));
    // 0x15610c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15610cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156110: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x156110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x156114: 0xac242318  sw          $a0, 0x2318($at)
    ctx->pc = 0x156114u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8984), GPR_U32(ctx, 4));
    // 0x156118: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15611c: 0xac2325e0  sw          $v1, 0x25E0($at)
    ctx->pc = 0x15611cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9696), GPR_U32(ctx, 3));
    // 0x156120: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156124: 0x8c2425e0  lw          $a0, 0x25E0($at)
    ctx->pc = 0x156124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9696)));
    // 0x156128: 0x28830010  slti        $v1, $a0, 0x10
    ctx->pc = 0x156128u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x15612c: 0x146000d6  bnez        $v1, . + 4 + (0xD6 << 2)
    ctx->pc = 0x15612Cu;
    {
        const bool branch_taken_0x15612c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15612Cu;
            // 0x156130: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15612c) {
            ctx->pc = 0x156488u;
            goto label_156488;
        }
    }
    ctx->pc = 0x156134u;
    // 0x156134: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x156134u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x156138: 0x0  nop
    ctx->pc = 0x156138u;
    // NOP
    // 0x15613c: 0x0  nop
    ctx->pc = 0x15613cu;
    // NOP
    // 0x156140: 0x1810  mfhi        $v1
    ctx->pc = 0x156140u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x156144: 0x146000d0  bnez        $v1, . + 4 + (0xD0 << 2)
    ctx->pc = 0x156144u;
    {
        const bool branch_taken_0x156144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156144u;
            // 0x156148: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156144) {
            ctx->pc = 0x156488u;
            goto label_156488;
        }
    }
    ctx->pc = 0x15614Cu;
    // 0x15614c: 0x100000ce  b           . + 4 + (0xCE << 2)
    ctx->pc = 0x15614Cu;
    {
        const bool branch_taken_0x15614c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15614Cu;
            // 0x156150: 0xac252318  sw          $a1, 0x2318($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8984), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15614c) {
            ctx->pc = 0x156488u;
            goto label_156488;
        }
    }
    ctx->pc = 0x156154u;
    // 0x156154: 0x0  nop
    ctx->pc = 0x156154u;
    // NOP
label_156158:
    // 0x156158: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15615c: 0x8c2525b0  lw          $a1, 0x25B0($at)
    ctx->pc = 0x15615cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9648)));
    // 0x156160: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x156160u;
    {
        const bool branch_taken_0x156160 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x156164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156160u;
            // 0x156164: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156160) {
            ctx->pc = 0x1561C0u;
            goto label_1561c0;
        }
    }
    ctx->pc = 0x156168u;
    // 0x156168: 0x8c2423f0  lw          $a0, 0x23F0($at)
    ctx->pc = 0x156168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9200)));
    // 0x15616c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15616cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156170: 0x8c2325e0  lw          $v1, 0x25E0($at)
    ctx->pc = 0x156170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9696)));
    // 0x156174: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156178: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x156178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15617c: 0xac242310  sw          $a0, 0x2310($at)
    ctx->pc = 0x15617cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8976), GPR_U32(ctx, 4));
    // 0x156180: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156184: 0xac2325e0  sw          $v1, 0x25E0($at)
    ctx->pc = 0x156184u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9696), GPR_U32(ctx, 3));
    // 0x156188: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15618c: 0x8c2425e0  lw          $a0, 0x25E0($at)
    ctx->pc = 0x15618cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9696)));
    // 0x156190: 0x28830010  slti        $v1, $a0, 0x10
    ctx->pc = 0x156190u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x156194: 0x146000bc  bnez        $v1, . + 4 + (0xBC << 2)
    ctx->pc = 0x156194u;
    {
        const bool branch_taken_0x156194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156194u;
            // 0x156198: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156194) {
            ctx->pc = 0x156488u;
            goto label_156488;
        }
    }
    ctx->pc = 0x15619Cu;
    // 0x15619c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x15619cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1561a0: 0x0  nop
    ctx->pc = 0x1561a0u;
    // NOP
    // 0x1561a4: 0x0  nop
    ctx->pc = 0x1561a4u;
    // NOP
    // 0x1561a8: 0x1810  mfhi        $v1
    ctx->pc = 0x1561a8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1561ac: 0x146000b6  bnez        $v1, . + 4 + (0xB6 << 2)
    ctx->pc = 0x1561ACu;
    {
        const bool branch_taken_0x1561ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1561B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1561ACu;
            // 0x1561b0: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1561ac) {
            ctx->pc = 0x156488u;
            goto label_156488;
        }
    }
    ctx->pc = 0x1561B4u;
    // 0x1561b4: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x1561B4u;
    {
        const bool branch_taken_0x1561b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1561B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1561B4u;
            // 0x1561b8: 0xac252310  sw          $a1, 0x2310($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8976), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1561b4) {
            ctx->pc = 0x156488u;
            goto label_156488;
        }
    }
    ctx->pc = 0x1561BCu;
    // 0x1561bc: 0x0  nop
    ctx->pc = 0x1561bcu;
    // NOP
label_1561c0:
    // 0x1561c0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1561c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1561c4: 0x8c2525a8  lw          $a1, 0x25A8($at)
    ctx->pc = 0x1561c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9640)));
    // 0x1561c8: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1561C8u;
    {
        const bool branch_taken_0x1561c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1561CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1561C8u;
            // 0x1561cc: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1561c8) {
            ctx->pc = 0x156228u;
            goto label_156228;
        }
    }
    ctx->pc = 0x1561D0u;
    // 0x1561d0: 0x8c2423e8  lw          $a0, 0x23E8($at)
    ctx->pc = 0x1561d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9192)));
    // 0x1561d4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1561d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1561d8: 0x8c2325e0  lw          $v1, 0x25E0($at)
    ctx->pc = 0x1561d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9696)));
    // 0x1561dc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1561dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1561e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1561e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1561e4: 0xac242308  sw          $a0, 0x2308($at)
    ctx->pc = 0x1561e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8968), GPR_U32(ctx, 4));
    // 0x1561e8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1561e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1561ec: 0xac2325e0  sw          $v1, 0x25E0($at)
    ctx->pc = 0x1561ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9696), GPR_U32(ctx, 3));
    // 0x1561f0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1561f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1561f4: 0x8c2425e0  lw          $a0, 0x25E0($at)
    ctx->pc = 0x1561f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9696)));
    // 0x1561f8: 0x28830010  slti        $v1, $a0, 0x10
    ctx->pc = 0x1561f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1561fc: 0x146000a2  bnez        $v1, . + 4 + (0xA2 << 2)
    ctx->pc = 0x1561FCu;
    {
        const bool branch_taken_0x1561fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1561FCu;
            // 0x156200: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1561fc) {
            ctx->pc = 0x156488u;
            goto label_156488;
        }
    }
    ctx->pc = 0x156204u;
    // 0x156204: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x156204u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x156208: 0x0  nop
    ctx->pc = 0x156208u;
    // NOP
    // 0x15620c: 0x0  nop
    ctx->pc = 0x15620cu;
    // NOP
    // 0x156210: 0x1810  mfhi        $v1
    ctx->pc = 0x156210u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x156214: 0x1460009c  bnez        $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x156214u;
    {
        const bool branch_taken_0x156214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156214u;
            // 0x156218: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156214) {
            ctx->pc = 0x156488u;
            goto label_156488;
        }
    }
    ctx->pc = 0x15621Cu;
    // 0x15621c: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x15621Cu;
    {
        const bool branch_taken_0x15621c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15621Cu;
            // 0x156220: 0xac252308  sw          $a1, 0x2308($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8968), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15621c) {
            ctx->pc = 0x156488u;
            goto label_156488;
        }
    }
    ctx->pc = 0x156224u;
    // 0x156224: 0x0  nop
    ctx->pc = 0x156224u;
    // NOP
label_156228:
    // 0x156228: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15622c: 0x8c2525a0  lw          $a1, 0x25A0($at)
    ctx->pc = 0x15622cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9632)));
    // 0x156230: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x156230u;
    {
        const bool branch_taken_0x156230 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x156234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156230u;
            // 0x156234: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156230) {
            ctx->pc = 0x156290u;
            goto label_156290;
        }
    }
    ctx->pc = 0x156238u;
    // 0x156238: 0x8c2423e0  lw          $a0, 0x23E0($at)
    ctx->pc = 0x156238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9184)));
    // 0x15623c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15623cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156240: 0x8c2325e0  lw          $v1, 0x25E0($at)
    ctx->pc = 0x156240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9696)));
    // 0x156244: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156248: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x156248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15624c: 0xac242300  sw          $a0, 0x2300($at)
    ctx->pc = 0x15624cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8960), GPR_U32(ctx, 4));
    // 0x156250: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156254: 0xac2325e0  sw          $v1, 0x25E0($at)
    ctx->pc = 0x156254u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9696), GPR_U32(ctx, 3));
    // 0x156258: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15625c: 0x8c2425e0  lw          $a0, 0x25E0($at)
    ctx->pc = 0x15625cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9696)));
    // 0x156260: 0x28830010  slti        $v1, $a0, 0x10
    ctx->pc = 0x156260u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x156264: 0x14600088  bnez        $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x156264u;
    {
        const bool branch_taken_0x156264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156264u;
            // 0x156268: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156264) {
            ctx->pc = 0x156488u;
            goto label_156488;
        }
    }
    ctx->pc = 0x15626Cu;
    // 0x15626c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x15626cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x156270: 0x0  nop
    ctx->pc = 0x156270u;
    // NOP
    // 0x156274: 0x0  nop
    ctx->pc = 0x156274u;
    // NOP
    // 0x156278: 0x1810  mfhi        $v1
    ctx->pc = 0x156278u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x15627c: 0x14600082  bnez        $v1, . + 4 + (0x82 << 2)
    ctx->pc = 0x15627Cu;
    {
        const bool branch_taken_0x15627c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15627Cu;
            // 0x156280: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15627c) {
            ctx->pc = 0x156488u;
            goto label_156488;
        }
    }
    ctx->pc = 0x156284u;
    // 0x156284: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x156284u;
    {
        const bool branch_taken_0x156284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156284u;
            // 0x156288: 0xac252300  sw          $a1, 0x2300($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8960), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156284) {
            ctx->pc = 0x156488u;
            goto label_156488;
        }
    }
    ctx->pc = 0x15628Cu;
    // 0x15628c: 0x0  nop
    ctx->pc = 0x15628cu;
    // NOP
label_156290:
    // 0x156290: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156294: 0xac2025e0  sw          $zero, 0x25E0($at)
    ctx->pc = 0x156294u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9696), GPR_U32(ctx, 0));
    // 0x156298: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15629c: 0xac202318  sw          $zero, 0x2318($at)
    ctx->pc = 0x15629cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8984), GPR_U32(ctx, 0));
    // 0x1562a0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1562a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1562a4: 0xac202310  sw          $zero, 0x2310($at)
    ctx->pc = 0x1562a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8976), GPR_U32(ctx, 0));
    // 0x1562a8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1562a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1562ac: 0xac202308  sw          $zero, 0x2308($at)
    ctx->pc = 0x1562acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8968), GPR_U32(ctx, 0));
    // 0x1562b0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1562b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1562b4: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x1562B4u;
    {
        const bool branch_taken_0x1562b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1562B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1562B4u;
            // 0x1562b8: 0xac202300  sw          $zero, 0x2300($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8960), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1562b4) {
            ctx->pc = 0x156488u;
            goto label_156488;
        }
    }
    ctx->pc = 0x1562BCu;
    // 0x1562bc: 0x0  nop
    ctx->pc = 0x1562bcu;
    // NOP
label_1562c0:
    // 0x1562c0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1562c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1562c4: 0x8c252548  lw          $a1, 0x2548($at)
    ctx->pc = 0x1562c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9544)));
    // 0x1562c8: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1562C8u;
    {
        const bool branch_taken_0x1562c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1562CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1562C8u;
            // 0x1562cc: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1562c8) {
            ctx->pc = 0x156328u;
            goto label_156328;
        }
    }
    ctx->pc = 0x1562D0u;
    // 0x1562d0: 0x8c242388  lw          $a0, 0x2388($at)
    ctx->pc = 0x1562d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9096)));
    // 0x1562d4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1562d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1562d8: 0x8c2325e4  lw          $v1, 0x25E4($at)
    ctx->pc = 0x1562d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9700)));
    // 0x1562dc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1562dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1562e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1562e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1562e4: 0xac2422a8  sw          $a0, 0x22A8($at)
    ctx->pc = 0x1562e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8872), GPR_U32(ctx, 4));
    // 0x1562e8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1562e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1562ec: 0xac2325e4  sw          $v1, 0x25E4($at)
    ctx->pc = 0x1562ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9700), GPR_U32(ctx, 3));
    // 0x1562f0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1562f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1562f4: 0x8c2425e4  lw          $a0, 0x25E4($at)
    ctx->pc = 0x1562f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9700)));
    // 0x1562f8: 0x28830010  slti        $v1, $a0, 0x10
    ctx->pc = 0x1562f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1562fc: 0x14600062  bnez        $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x1562FCu;
    {
        const bool branch_taken_0x1562fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1562FCu;
            // 0x156300: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1562fc) {
            ctx->pc = 0x156488u;
            goto label_156488;
        }
    }
    ctx->pc = 0x156304u;
    // 0x156304: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x156304u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x156308: 0x0  nop
    ctx->pc = 0x156308u;
    // NOP
    // 0x15630c: 0x0  nop
    ctx->pc = 0x15630cu;
    // NOP
    // 0x156310: 0x1810  mfhi        $v1
    ctx->pc = 0x156310u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x156314: 0x1460005c  bnez        $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x156314u;
    {
        const bool branch_taken_0x156314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156314u;
            // 0x156318: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156314) {
            ctx->pc = 0x156488u;
            goto label_156488;
        }
    }
    ctx->pc = 0x15631Cu;
    // 0x15631c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x15631Cu;
    {
        const bool branch_taken_0x15631c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15631Cu;
            // 0x156320: 0xac2522a8  sw          $a1, 0x22A8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8872), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15631c) {
            ctx->pc = 0x156488u;
            goto label_156488;
        }
    }
    ctx->pc = 0x156324u;
    // 0x156324: 0x0  nop
    ctx->pc = 0x156324u;
    // NOP
label_156328:
    // 0x156328: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15632c: 0x8c252540  lw          $a1, 0x2540($at)
    ctx->pc = 0x15632cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9536)));
    // 0x156330: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x156330u;
    {
        const bool branch_taken_0x156330 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x156334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156330u;
            // 0x156334: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156330) {
            ctx->pc = 0x156390u;
            goto label_156390;
        }
    }
    ctx->pc = 0x156338u;
    // 0x156338: 0x8c242380  lw          $a0, 0x2380($at)
    ctx->pc = 0x156338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9088)));
    // 0x15633c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15633cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156340: 0x8c2325e4  lw          $v1, 0x25E4($at)
    ctx->pc = 0x156340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9700)));
    // 0x156344: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156348: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x156348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15634c: 0xac2422a0  sw          $a0, 0x22A0($at)
    ctx->pc = 0x15634cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8864), GPR_U32(ctx, 4));
    // 0x156350: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156354: 0xac2325e4  sw          $v1, 0x25E4($at)
    ctx->pc = 0x156354u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9700), GPR_U32(ctx, 3));
    // 0x156358: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15635c: 0x8c2425e4  lw          $a0, 0x25E4($at)
    ctx->pc = 0x15635cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9700)));
    // 0x156360: 0x28830010  slti        $v1, $a0, 0x10
    ctx->pc = 0x156360u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x156364: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x156364u;
    {
        const bool branch_taken_0x156364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156364u;
            // 0x156368: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156364) {
            ctx->pc = 0x156488u;
            goto label_156488;
        }
    }
    ctx->pc = 0x15636Cu;
    // 0x15636c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x15636cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x156370: 0x0  nop
    ctx->pc = 0x156370u;
    // NOP
    // 0x156374: 0x0  nop
    ctx->pc = 0x156374u;
    // NOP
    // 0x156378: 0x1810  mfhi        $v1
    ctx->pc = 0x156378u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x15637c: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x15637Cu;
    {
        const bool branch_taken_0x15637c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15637Cu;
            // 0x156380: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15637c) {
            ctx->pc = 0x156488u;
            goto label_156488;
        }
    }
    ctx->pc = 0x156384u;
    // 0x156384: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x156384u;
    {
        const bool branch_taken_0x156384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156384u;
            // 0x156388: 0xac2522a0  sw          $a1, 0x22A0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8864), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156384) {
            ctx->pc = 0x156488u;
            goto label_156488;
        }
    }
    ctx->pc = 0x15638Cu;
    // 0x15638c: 0x0  nop
    ctx->pc = 0x15638cu;
    // NOP
label_156390:
    // 0x156390: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156394: 0x8c252538  lw          $a1, 0x2538($at)
    ctx->pc = 0x156394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9528)));
    // 0x156398: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x156398u;
    {
        const bool branch_taken_0x156398 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15639Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156398u;
            // 0x15639c: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156398) {
            ctx->pc = 0x1563F8u;
            goto label_1563f8;
        }
    }
    ctx->pc = 0x1563A0u;
    // 0x1563a0: 0x8c242378  lw          $a0, 0x2378($at)
    ctx->pc = 0x1563a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9080)));
    // 0x1563a4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1563a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1563a8: 0x8c2325e4  lw          $v1, 0x25E4($at)
    ctx->pc = 0x1563a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9700)));
    // 0x1563ac: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1563acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1563b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1563b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1563b4: 0xac242298  sw          $a0, 0x2298($at)
    ctx->pc = 0x1563b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8856), GPR_U32(ctx, 4));
    // 0x1563b8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1563b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1563bc: 0xac2325e4  sw          $v1, 0x25E4($at)
    ctx->pc = 0x1563bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9700), GPR_U32(ctx, 3));
    // 0x1563c0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1563c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1563c4: 0x8c2425e4  lw          $a0, 0x25E4($at)
    ctx->pc = 0x1563c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9700)));
    // 0x1563c8: 0x28830010  slti        $v1, $a0, 0x10
    ctx->pc = 0x1563c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1563cc: 0x1460002e  bnez        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x1563CCu;
    {
        const bool branch_taken_0x1563cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1563D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1563CCu;
            // 0x1563d0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1563cc) {
            ctx->pc = 0x156488u;
            goto label_156488;
        }
    }
    ctx->pc = 0x1563D4u;
    // 0x1563d4: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x1563d4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1563d8: 0x0  nop
    ctx->pc = 0x1563d8u;
    // NOP
    // 0x1563dc: 0x0  nop
    ctx->pc = 0x1563dcu;
    // NOP
    // 0x1563e0: 0x1810  mfhi        $v1
    ctx->pc = 0x1563e0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1563e4: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1563E4u;
    {
        const bool branch_taken_0x1563e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1563E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1563E4u;
            // 0x1563e8: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1563e4) {
            ctx->pc = 0x156488u;
            goto label_156488;
        }
    }
    ctx->pc = 0x1563ECu;
    // 0x1563ec: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1563ECu;
    {
        const bool branch_taken_0x1563ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1563F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1563ECu;
            // 0x1563f0: 0xac252298  sw          $a1, 0x2298($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8856), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1563ec) {
            ctx->pc = 0x156488u;
            goto label_156488;
        }
    }
    ctx->pc = 0x1563F4u;
    // 0x1563f4: 0x0  nop
    ctx->pc = 0x1563f4u;
    // NOP
label_1563f8:
    // 0x1563f8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1563f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1563fc: 0x8c252530  lw          $a1, 0x2530($at)
    ctx->pc = 0x1563fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9520)));
    // 0x156400: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x156400u;
    {
        const bool branch_taken_0x156400 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x156404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156400u;
            // 0x156404: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156400) {
            ctx->pc = 0x156460u;
            goto label_156460;
        }
    }
    ctx->pc = 0x156408u;
    // 0x156408: 0x8c242370  lw          $a0, 0x2370($at)
    ctx->pc = 0x156408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9072)));
    // 0x15640c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15640cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156410: 0x8c2325e4  lw          $v1, 0x25E4($at)
    ctx->pc = 0x156410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9700)));
    // 0x156414: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156418: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x156418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15641c: 0xac242290  sw          $a0, 0x2290($at)
    ctx->pc = 0x15641cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8848), GPR_U32(ctx, 4));
    // 0x156420: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156424: 0xac2325e4  sw          $v1, 0x25E4($at)
    ctx->pc = 0x156424u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9700), GPR_U32(ctx, 3));
    // 0x156428: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15642c: 0x8c2425e4  lw          $a0, 0x25E4($at)
    ctx->pc = 0x15642cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9700)));
    // 0x156430: 0x28830010  slti        $v1, $a0, 0x10
    ctx->pc = 0x156430u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x156434: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x156434u;
    {
        const bool branch_taken_0x156434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156434u;
            // 0x156438: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156434) {
            ctx->pc = 0x156488u;
            goto label_156488;
        }
    }
    ctx->pc = 0x15643Cu;
    // 0x15643c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x15643cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x156440: 0x0  nop
    ctx->pc = 0x156440u;
    // NOP
    // 0x156444: 0x0  nop
    ctx->pc = 0x156444u;
    // NOP
    // 0x156448: 0x1810  mfhi        $v1
    ctx->pc = 0x156448u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x15644c: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x15644Cu;
    {
        const bool branch_taken_0x15644c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x156450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15644Cu;
            // 0x156450: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15644c) {
            ctx->pc = 0x156488u;
            goto label_156488;
        }
    }
    ctx->pc = 0x156454u;
    // 0x156454: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x156454u;
    {
        const bool branch_taken_0x156454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156454u;
            // 0x156458: 0xac252290  sw          $a1, 0x2290($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 8848), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156454) {
            ctx->pc = 0x156488u;
            goto label_156488;
        }
    }
    ctx->pc = 0x15645Cu;
    // 0x15645c: 0x0  nop
    ctx->pc = 0x15645cu;
    // NOP
label_156460:
    // 0x156460: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156464: 0xac2025e4  sw          $zero, 0x25E4($at)
    ctx->pc = 0x156464u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 9700), GPR_U32(ctx, 0));
    // 0x156468: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15646c: 0xac2022a0  sw          $zero, 0x22A0($at)
    ctx->pc = 0x15646cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8864), GPR_U32(ctx, 0));
    // 0x156470: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156474: 0xac2022a8  sw          $zero, 0x22A8($at)
    ctx->pc = 0x156474u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8872), GPR_U32(ctx, 0));
    // 0x156478: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15647c: 0xac202298  sw          $zero, 0x2298($at)
    ctx->pc = 0x15647cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8856), GPR_U32(ctx, 0));
    // 0x156480: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x156480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x156484: 0xac202290  sw          $zero, 0x2290($at)
    ctx->pc = 0x156484u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8848), GPR_U32(ctx, 0));
label_156488:
    // 0x156488: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x156488u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x15648c: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x15648cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x156490: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x156490u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x156494: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x156494u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x156498: 0x26310100  addiu       $s1, $s1, 0x100
    ctx->pc = 0x156498u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    // 0x15649c: 0x1460f998  bnez        $v1, . + 4 + (-0x668 << 2)
    ctx->pc = 0x15649Cu;
    {
        const bool branch_taken_0x15649c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1564A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15649Cu;
            // 0x1564a0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15649c) {
            ctx->pc = 0x154B00u;
            goto label_154b00;
        }
    }
    ctx->pc = 0x1564A4u;
    // 0x1564a4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1564a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1564a8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1564a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1564ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1564acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1564b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1564b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1564b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1564b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1564b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1564b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1564bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1564BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1564C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1564BCu;
            // 0x1564c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x154B00u: goto label_154b00;
            case 0x154B38u: goto label_154b38;
            case 0x154CB8u: goto label_154cb8;
            case 0x154CD0u: goto label_154cd0;
            case 0x154CF8u: goto label_154cf8;
            case 0x154D10u: goto label_154d10;
            case 0x154E88u: goto label_154e88;
            case 0x154EA0u: goto label_154ea0;
            case 0x154EC8u: goto label_154ec8;
            case 0x154EE0u: goto label_154ee0;
            case 0x155040u: goto label_155040;
            case 0x155198u: goto label_155198;
            case 0x1551A0u: goto label_1551a0;
            case 0x1551D8u: goto label_1551d8;
            case 0x1551F0u: goto label_1551f0;
            case 0x155208u: goto label_155208;
            case 0x155220u: goto label_155220;
            case 0x155238u: goto label_155238;
            case 0x155250u: goto label_155250;
            case 0x155268u: goto label_155268;
            case 0x155280u: goto label_155280;
            case 0x155290u: goto label_155290;
            case 0x1552C0u: goto label_1552c0;
            case 0x1552D8u: goto label_1552d8;
            case 0x1552F0u: goto label_1552f0;
            case 0x155308u: goto label_155308;
            case 0x155320u: goto label_155320;
            case 0x155338u: goto label_155338;
            case 0x155350u: goto label_155350;
            case 0x155368u: goto label_155368;
            case 0x155378u: goto label_155378;
            case 0x1553A8u: goto label_1553a8;
            case 0x1553C0u: goto label_1553c0;
            case 0x1553D8u: goto label_1553d8;
            case 0x1553F0u: goto label_1553f0;
            case 0x155408u: goto label_155408;
            case 0x155420u: goto label_155420;
            case 0x155438u: goto label_155438;
            case 0x155450u: goto label_155450;
            case 0x155460u: goto label_155460;
            case 0x155490u: goto label_155490;
            case 0x1554A8u: goto label_1554a8;
            case 0x1554C0u: goto label_1554c0;
            case 0x1554D8u: goto label_1554d8;
            case 0x1554F0u: goto label_1554f0;
            case 0x155508u: goto label_155508;
            case 0x155520u: goto label_155520;
            case 0x155538u: goto label_155538;
            case 0x155548u: goto label_155548;
            case 0x155578u: goto label_155578;
            case 0x155590u: goto label_155590;
            case 0x1555A8u: goto label_1555a8;
            case 0x1555C0u: goto label_1555c0;
            case 0x1555D8u: goto label_1555d8;
            case 0x1555F0u: goto label_1555f0;
            case 0x155608u: goto label_155608;
            case 0x155620u: goto label_155620;
            case 0x155638u: goto label_155638;
            case 0x155668u: goto label_155668;
            case 0x155680u: goto label_155680;
            case 0x155698u: goto label_155698;
            case 0x1556B0u: goto label_1556b0;
            case 0x1556C8u: goto label_1556c8;
            case 0x1556E0u: goto label_1556e0;
            case 0x1556F8u: goto label_1556f8;
            case 0x155710u: goto label_155710;
            case 0x155720u: goto label_155720;
            case 0x155750u: goto label_155750;
            case 0x155768u: goto label_155768;
            case 0x155780u: goto label_155780;
            case 0x155798u: goto label_155798;
            case 0x1557B0u: goto label_1557b0;
            case 0x1557C8u: goto label_1557c8;
            case 0x1557E0u: goto label_1557e0;
            case 0x1557F8u: goto label_1557f8;
            case 0x155808u: goto label_155808;
            case 0x155838u: goto label_155838;
            case 0x155850u: goto label_155850;
            case 0x155868u: goto label_155868;
            case 0x155880u: goto label_155880;
            case 0x155898u: goto label_155898;
            case 0x1558B0u: goto label_1558b0;
            case 0x1558C8u: goto label_1558c8;
            case 0x1558E0u: goto label_1558e0;
            case 0x1558F0u: goto label_1558f0;
            case 0x155920u: goto label_155920;
            case 0x155938u: goto label_155938;
            case 0x155950u: goto label_155950;
            case 0x155968u: goto label_155968;
            case 0x155980u: goto label_155980;
            case 0x155998u: goto label_155998;
            case 0x1559B0u: goto label_1559b0;
            case 0x1559C8u: goto label_1559c8;
            case 0x1559D8u: goto label_1559d8;
            case 0x155A08u: goto label_155a08;
            case 0x155A20u: goto label_155a20;
            case 0x155A38u: goto label_155a38;
            case 0x155A50u: goto label_155a50;
            case 0x155A68u: goto label_155a68;
            case 0x155A80u: goto label_155a80;
            case 0x155A98u: goto label_155a98;
            case 0x155AB0u: goto label_155ab0;
            case 0x155AC0u: goto label_155ac0;
            case 0x155DD8u: goto label_155dd8;
            case 0x1560E8u: goto label_1560e8;
            case 0x156158u: goto label_156158;
            case 0x1561C0u: goto label_1561c0;
            case 0x156228u: goto label_156228;
            case 0x156290u: goto label_156290;
            case 0x1562C0u: goto label_1562c0;
            case 0x156328u: goto label_156328;
            case 0x156390u: goto label_156390;
            case 0x1563F8u: goto label_1563f8;
            case 0x156460u: goto label_156460;
            case 0x156488u: goto label_156488;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1564C4u;
}
