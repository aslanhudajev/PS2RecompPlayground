#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: packageGetNextParamStr
// Address: 0x108c10 - 0x108cb4
void packageGetNextParamStr_0x108c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("packageGetNextParamStr_0x108c10");
#endif

    ctx->pc = 0x108c10u;

    // 0x108c10: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x108c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x108c14: 0x8f8382bc  lw          $v1, -0x7D44($gp)
    ctx->pc = 0x108c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935228)));
    // 0x108c18: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x108c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x108c1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x108c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c20: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x108c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c24: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x108c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x108c28: 0x27a200ff  addiu       $v0, $sp, 0xFF
    ctx->pc = 0x108c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 255));
    // 0x108c2c: 0x0  nop
    ctx->pc = 0x108c2cu;
    // NOP
label_108c30:
    // 0x108c30: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x108c30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x108c34: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x108c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x108c38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x108c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x108c3c: 0x0  nop
    ctx->pc = 0x108c3cu;
    // NOP
    // 0x108c40: 0x0  nop
    ctx->pc = 0x108c40u;
    // NOP
    // 0x108c44: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x108C44u;
    {
        const bool branch_taken_0x108c44 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x108c44) {
            ctx->pc = 0x108C30u;
            goto label_108c30;
        }
    }
    ctx->pc = 0x108C4Cu;
    // 0x108c4c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x108c4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x108c50: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x108C50u;
    {
        const bool branch_taken_0x108c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x108C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108C50u;
            // 0x108c54: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108c50) {
            ctx->pc = 0x108C88u;
            goto label_108c88;
        }
    }
    ctx->pc = 0x108C58u;
    // 0x108c58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x108C58u;
    {
        const bool branch_taken_0x108c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108C58u;
            // 0x108c5c: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108c58) {
            ctx->pc = 0x108C68u;
            goto label_108c68;
        }
    }
    ctx->pc = 0x108C60u;
label_108c60:
    // 0x108c60: 0x3a53021  addu        $a2, $sp, $a1
    ctx->pc = 0x108c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x108c64: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x108c64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_108c68:
    // 0x108c68: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x108c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x108c6c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x108c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x108c70: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x108c70u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x108c74: 0xaf8382bc  sw          $v1, -0x7D44($gp)
    ctx->pc = 0x108c74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935228), GPR_U32(ctx, 3));
    // 0x108c78: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x108c78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x108c7c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x108C7Cu;
    {
        const bool branch_taken_0x108c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108C7Cu;
            // 0x108c80: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108c7c) {
            ctx->pc = 0x108C60u;
            goto label_108c60;
        }
    }
    ctx->pc = 0x108C84u;
    // 0x108c84: 0x3a53021  addu        $a2, $sp, $a1
    ctx->pc = 0x108c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
label_108c88:
    // 0x108c88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x108c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x108c8c: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x108c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x108c90: 0xaf8382bc  sw          $v1, -0x7D44($gp)
    ctx->pc = 0x108c90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935228), GPR_U32(ctx, 3));
    // 0x108c94: 0x24845c70  addiu       $a0, $a0, 0x5C70
    ctx->pc = 0x108c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23664));
    // 0x108c98: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x108c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108c9c: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x108C9Cu;
    SET_GPR_U32(ctx, 31, 0x108CA4u);
    ctx->pc = 0x108CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108C9Cu;
            // 0x108ca0: 0xa0c00000  sb          $zero, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108CA4u; }
        if (ctx->pc != 0x108CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108CA4u; }
        if (ctx->pc != 0x108CA4u) { return; }
    }
    ctx->pc = 0x108CA4u;
    // 0x108ca4: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x108ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x108ca8: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x108ca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108cac: 0x3e00008  jr          $ra
    ctx->pc = 0x108CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108CACu;
            // 0x108cb0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x108C30u: goto label_108c30;
            case 0x108C60u: goto label_108c60;
            case 0x108C68u: goto label_108c68;
            case 0x108C88u: goto label_108c88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x108CB4u;
}
