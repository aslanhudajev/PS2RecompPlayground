#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _lastFrame
// Address: 0x12be88 - 0x12bf04
void _lastFrame_0x12be88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_lastFrame_0x12be88");
#endif

    ctx->pc = 0x12be88u;

    // 0x12be88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12be88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12be8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12be8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12be90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12be90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12be94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12be94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12be98: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x12be98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x12be9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12BE9Cu;
    {
        const bool branch_taken_0x12be9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BE9Cu;
            // 0x12bea0: 0x8e060118  lw          $a2, 0x118($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12be9c) {
            ctx->pc = 0x12BEB8u;
            goto label_12beb8;
        }
    }
    ctx->pc = 0x12BEA4u;
    // 0x12bea4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x12bea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x12bea8: 0xc04b01e  jal         func_12C078
    ctx->pc = 0x12BEA8u;
    SET_GPR_U32(ctx, 31, 0x12BEB0u);
    ctx->pc = 0x12BEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BEA8u;
            // 0x12beac: 0x24a5f4d8  addiu       $a1, $a1, -0xB28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C078u;
    if (runtime->hasFunction(0x12C078u)) {
        auto targetFn = runtime->lookupFunction(0x12C078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BEB0u; }
        if (ctx->pc != 0x12BEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x12c078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BEB0u; }
        if (ctx->pc != 0x12BEB0u) { return; }
    }
    ctx->pc = 0x12BEB0u;
    // 0x12beb0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x12BEB0u;
    {
        const bool branch_taken_0x12beb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BEB0u;
            // 0x12beb4: 0xae000120  sw          $zero, 0x120($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12beb0) {
            ctx->pc = 0x12BEF4u;
            goto label_12bef4;
        }
    }
    ctx->pc = 0x12BEB8u;
label_12beb8:
    // 0x12beb8: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x12beb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x12bebc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x12bebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12bec0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12BEC0u;
    {
        const bool branch_taken_0x12bec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12BEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BEC0u;
            // 0x12bec4: 0x24c7ffff  addiu       $a3, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bec0) {
            ctx->pc = 0x12BEE0u;
            goto label_12bee0;
        }
    }
    ctx->pc = 0x12BEC8u;
    // 0x12bec8: 0x8e0501bc  lw          $a1, 0x1BC($s0)
    ctx->pc = 0x12bec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x12becc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x12beccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x12bed0: 0xc04a59c  jal         func_129670
    ctx->pc = 0x12BED0u;
    SET_GPR_U32(ctx, 31, 0x12BED8u);
    ctx->pc = 0x12BED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BED0u;
            // 0x12bed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129670u;
    if (runtime->hasFunction(0x129670u)) {
        auto targetFn = runtime->lookupFunction(0x129670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BED8u; }
        if (ctx->pc != 0x12BED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispRefImage_0x129670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BED8u; }
        if (ctx->pc != 0x12BED8u) { return; }
    }
    ctx->pc = 0x12BED8u;
    // 0x12bed8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12BED8u;
    {
        const bool branch_taken_0x12bed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BED8u;
            // 0x12bedc: 0xae000120  sw          $zero, 0x120($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bed8) {
            ctx->pc = 0x12BEF4u;
            goto label_12bef4;
        }
    }
    ctx->pc = 0x12BEE0u;
label_12bee0:
    // 0x12bee0: 0x8e0501cc  lw          $a1, 0x1CC($s0)
    ctx->pc = 0x12bee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 460)));
    // 0x12bee4: 0x8e0601dc  lw          $a2, 0x1DC($s0)
    ctx->pc = 0x12bee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 476)));
    // 0x12bee8: 0xc04a5e0  jal         func_129780
    ctx->pc = 0x12BEE8u;
    SET_GPR_U32(ctx, 31, 0x12BEF0u);
    ctx->pc = 0x12BEECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BEE8u;
            // 0x12beec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129780u;
    if (runtime->hasFunction(0x129780u)) {
        auto targetFn = runtime->lookupFunction(0x129780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BEF0u; }
        if (ctx->pc != 0x12BEF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispRefImageField_0x129780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BEF0u; }
        if (ctx->pc != 0x12BEF0u) { return; }
    }
    ctx->pc = 0x12BEF0u;
    // 0x12bef0: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x12bef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
label_12bef4:
    // 0x12bef4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12bef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12bef8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12bef8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12befc: 0x3e00008  jr          $ra
    ctx->pc = 0x12BEFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BEFCu;
            // 0x12bf00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12BEB8u: goto label_12beb8;
            case 0x12BEE0u: goto label_12bee0;
            case 0x12BEF4u: goto label_12bef4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12BF04u;
}
