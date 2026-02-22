#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: packageGetNextParamInt
// Address: 0x108cb8 - 0x108d60
void packageGetNextParamInt_0x108cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x108cb8u;

    // 0x108cb8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x108cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x108cbc: 0x8f8382bc  lw          $v1, -0x7D44($gp)
    ctx->pc = 0x108cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
    // 0x108cc0: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x108cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x108cc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x108cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108cc8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x108cc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ccc: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x108cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x108cd0: 0x27a200ff  addiu       $v0, $sp, 0xFF
    ctx->pc = 0x108cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 255));
    // 0x108cd4: 0x0  nop
    ctx->pc = 0x108cd4u;
    // NOP
label_108cd8:
    // 0x108cd8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x108cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x108cdc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x108cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x108ce0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x108ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x108ce4: 0x0  nop
    ctx->pc = 0x108ce4u;
    // NOP
    // 0x108ce8: 0x0  nop
    ctx->pc = 0x108ce8u;
    // NOP
    // 0x108cec: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x108CECu;
    {
        const bool branch_taken_0x108cec = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x108cec) {
            ctx->pc = 0x108CD8u;
            goto label_108cd8;
        }
    }
    ctx->pc = 0x108CF4u;
    // 0x108cf4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x108cf4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x108cf8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x108CF8u;
    {
        const bool branch_taken_0x108cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108CF8u;
            // 0x108cfc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108cf8) {
            ctx->pc = 0x108D30u;
            goto label_108d30;
        }
    }
    ctx->pc = 0x108D00u;
    // 0x108d00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x108D00u;
    {
        const bool branch_taken_0x108d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108D00u;
            // 0x108d04: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108d00) {
            ctx->pc = 0x108D10u;
            goto label_108d10;
        }
    }
    ctx->pc = 0x108D08u;
label_108d08:
    // 0x108d08: 0x3a53021  addu        $a2, $sp, $a1
    ctx->pc = 0x108d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x108d0c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x108d0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_108d10:
    // 0x108d10: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x108d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x108d14: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x108d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x108d18: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x108d18u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x108d1c: 0xaf8382bc  sw          $v1, -0x7D44($gp)
    ctx->pc = 0x108d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935228), GPR_U32(ctx, 3));
    // 0x108d20: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x108d20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x108d24: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x108D24u;
    {
        const bool branch_taken_0x108d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108D24u;
            // 0x108d28: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108d24) {
            ctx->pc = 0x108D08u;
            goto label_108d08;
        }
    }
    ctx->pc = 0x108D2Cu;
    // 0x108d2c: 0x3a53021  addu        $a2, $sp, $a1
    ctx->pc = 0x108d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
label_108d30:
    // 0x108d30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x108d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x108d34: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x108d34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x108d38: 0xaf8382bc  sw          $v1, -0x7D44($gp)
    ctx->pc = 0x108d38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935228), GPR_U32(ctx, 3));
    // 0x108d3c: 0x24845c78  addiu       $a0, $a0, 0x5C78
    ctx->pc = 0x108d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23672));
    // 0x108d40: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x108d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108d44: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x108D44u;
    SET_GPR_U32(ctx, 31, 0x108D4Cu);
    ctx->pc = 0x108D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108D44u;
            // 0x108d48: 0xa0c00000  sb          $zero, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108D4Cu; }
        if (ctx->pc != 0x108D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108D4Cu; }
        if (ctx->pc != 0x108D4Cu) { return; }
    }
    ctx->pc = 0x108D4Cu;
    // 0x108d4c: 0xc04a83a  jal         func_12A0E8
    ctx->pc = 0x108D4Cu;
    SET_GPR_U32(ctx, 31, 0x108D54u);
    ctx->pc = 0x108D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108D4Cu;
            // 0x108d50: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0E8u;
    if (runtime->hasFunction(0x12A0E8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108D54u; }
        if (ctx->pc != 0x108D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atoi_0x12a0e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108D54u; }
        if (ctx->pc != 0x108D54u) { return; }
    }
    ctx->pc = 0x108D54u;
    // 0x108d54: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x108d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x108d58: 0x3e00008  jr          $ra
    ctx->pc = 0x108D58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108D58u;
            // 0x108d5c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x108CD8u: goto label_108cd8;
            case 0x108D08u: goto label_108d08;
            case 0x108D10u: goto label_108d10;
            case 0x108D30u: goto label_108d30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x108D60u;
}
