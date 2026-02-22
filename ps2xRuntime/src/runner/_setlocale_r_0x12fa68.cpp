#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _setlocale_r
// Address: 0x12fa68 - 0x12faec
void _setlocale_r_0x12fa68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x12fa68u;

    // 0x12fa68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12fa68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12fa6c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12fa6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12fa70: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x12fa70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x12fa74: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12fa74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12fa78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12fa7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12fa7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa80: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x12fa80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x12fa84: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x12fa84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa88: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x12FA88u;
    {
        const bool branch_taken_0x12fa88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FA88u;
            // 0x12fa8c: 0xffb30030  sd          $s3, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fa88) {
            ctx->pc = 0x12FAC8u;
            goto label_12fac8;
        }
    }
    ctx->pc = 0x12FA90u;
    // 0x12fa90: 0x3c130017  lui         $s3, 0x17
    ctx->pc = 0x12fa90u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)23 << 16));
    // 0x12fa94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12fa94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa98: 0xc04ae16  jal         func_12B858
    ctx->pc = 0x12FA98u;
    SET_GPR_U32(ctx, 31, 0x12FAA0u);
    ctx->pc = 0x12FA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FA98u;
            // 0x12fa9c: 0x26655988  addiu       $a1, $s3, 0x5988 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 22920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B858u;
    if (runtime->hasFunction(0x12B858u)) {
        auto targetFn = runtime->lookupFunction(0x12B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FAA0u; }
        if (ctx->pc != 0x12FAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FAA0u; }
        if (ctx->pc != 0x12FAA0u) { return; }
    }
    ctx->pc = 0x12FAA0u;
    // 0x12faa0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12FAA0u;
    {
        const bool branch_taken_0x12faa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FAA0u;
            // 0x12faa4: 0x3c050017  lui         $a1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12faa0) {
            ctx->pc = 0x12FABCu;
            goto label_12fabc;
        }
    }
    ctx->pc = 0x12FAA8u;
    // 0x12faa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12faa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12faac: 0xc04ae16  jal         func_12B858
    ctx->pc = 0x12FAACu;
    SET_GPR_U32(ctx, 31, 0x12FAB4u);
    ctx->pc = 0x12FAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FAACu;
            // 0x12fab0: 0x24a55978  addiu       $a1, $a1, 0x5978 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B858u;
    if (runtime->hasFunction(0x12B858u)) {
        auto targetFn = runtime->lookupFunction(0x12B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FAB4u; }
        if (ctx->pc != 0x12FAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x12b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FAB4u; }
        if (ctx->pc != 0x12FAB4u) { return; }
    }
    ctx->pc = 0x12FAB4u;
    // 0x12fab4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12FAB4u;
    {
        const bool branch_taken_0x12fab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FAB4u;
            // 0x12fab8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fab4) {
            ctx->pc = 0x12FAD0u;
            goto label_12fad0;
        }
    }
    ctx->pc = 0x12FABCu;
label_12fabc:
    // 0x12fabc: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x12fabcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x12fac0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12FAC0u;
    {
        const bool branch_taken_0x12fac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FAC0u;
            // 0x12fac4: 0xae320030  sw          $s2, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fac0) {
            ctx->pc = 0x12FACCu;
            goto label_12facc;
        }
    }
    ctx->pc = 0x12FAC8u;
label_12fac8:
    // 0x12fac8: 0x3c130017  lui         $s3, 0x17
    ctx->pc = 0x12fac8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)23 << 16));
label_12facc:
    // 0x12facc: 0x26625988  addiu       $v0, $s3, 0x5988
    ctx->pc = 0x12faccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 22920));
label_12fad0:
    // 0x12fad0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x12fad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12fad4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x12fad4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12fad8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12fad8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12fadc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x12fadcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12fae0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12fae0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12fae4: 0x3e00008  jr          $ra
    ctx->pc = 0x12FAE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FAE4u;
            // 0x12fae8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12FABCu: goto label_12fabc;
            case 0x12FAC8u: goto label_12fac8;
            case 0x12FACCu: goto label_12facc;
            case 0x12FAD0u: goto label_12fad0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12FAECu;
}
