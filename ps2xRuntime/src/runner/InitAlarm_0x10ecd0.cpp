#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitAlarm
// Address: 0x10ecd0 - 0x10eda4
void InitAlarm_0x10ecd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10ecd0u;

    // 0x10ecd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10ecd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10ecd4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10ecd8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10ecd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10ecdc: 0x34421810  ori         $v0, $v0, 0x1810
    ctx->pc = 0x10ecdcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)6160u)));
    // 0x10ece0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10ece0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10ece4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10ece4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10ece8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ece8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ecec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10ececu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10ecf0: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x10ecf0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)256u)));
    // 0x10ecf4: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x10ECF4u;
    {
        const bool branch_taken_0x10ecf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10ECF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ECF4u;
            // 0x10ecf8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ecf4) {
            ctx->pc = 0x10ED90u;
            goto label_10ed90;
        }
    }
    ctx->pc = 0x10ECFCu;
    // 0x10ecfc: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x10ecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x10ed00: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x10ed00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10ed04: 0x2450fae8  addiu       $s0, $v0, -0x518
    ctx->pc = 0x10ed04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965992));
    // 0x10ed08: 0x8c44fae8  lw          $a0, -0x518($v0)
    ctx->pc = 0x10ed08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965992)));
    // 0x10ed0c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x10ed0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10ed10: 0xc043b1a  jal         func_10EC68
    ctx->pc = 0x10ED10u;
    SET_GPR_U32(ctx, 31, 0x10ED18u);
    ctx->pc = 0x10ED14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ED10u;
            // 0x10ed14: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EC68u;
    if (runtime->hasFunction(0x10EC68u)) {
        auto targetFn = runtime->lookupFunction(0x10EC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ED18u; }
        if (ctx->pc != 0x10ED18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setup_0x10ec68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ED18u; }
        if (ctx->pc != 0x10ED18u) { return; }
    }
    ctx->pc = 0x10ED18u;
    // 0x10ed18: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x10ed18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x10ed1c: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x10ed1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x10ed20: 0x24a5f388  addiu       $a1, $a1, -0xC78
    ctx->pc = 0x10ed20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964104));
    // 0x10ed24: 0x34846000  ori         $a0, $a0, 0x6000
    ctx->pc = 0x10ed24u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)24576u)));
    // 0x10ed28: 0xc043b1e  jal         func_10EC78
    ctx->pc = 0x10ED28u;
    SET_GPR_U32(ctx, 31, 0x10ED30u);
    ctx->pc = 0x10ED2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ED28u;
            // 0x10ed2c: 0x24060740  addiu       $a2, $zero, 0x740 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EC78u;
    if (runtime->hasFunction(0x10EC78u)) {
        auto targetFn = runtime->lookupFunction(0x10EC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ED30u; }
        if (ctx->pc != 0x10ED30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Copy_0x10ec78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ED30u; }
        if (ctx->pc != 0x10ED30u) { return; }
    }
    ctx->pc = 0x10ED30u;
    // 0x10ed30: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x10ed30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x10ed34: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x10ed34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
    // 0x10ed38: 0x24a5fac8  addiu       $a1, $a1, -0x538
    ctx->pc = 0x10ed38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965960));
    // 0x10ed3c: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x10ed3cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)8192u)));
    // 0x10ed40: 0xc043b1e  jal         func_10EC78
    ctx->pc = 0x10ED40u;
    SET_GPR_U32(ctx, 31, 0x10ED48u);
    ctx->pc = 0x10ED44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ED40u;
            // 0x10ed44: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EC78u;
    if (runtime->hasFunction(0x10EC78u)) {
        auto targetFn = runtime->lookupFunction(0x10EC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ED48u; }
        if (ctx->pc != 0x10ED48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Copy_0x10ec78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ED48u; }
        if (ctx->pc != 0x10ED48u) { return; }
    }
    ctx->pc = 0x10ED48u;
    // 0x10ed48: 0xc043948  jal         func_10E520
    ctx->pc = 0x10ED48u;
    SET_GPR_U32(ctx, 31, 0x10ED50u);
    ctx->pc = 0x10ED4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ED48u;
            // 0x10ed4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E520u;
    if (runtime->hasFunction(0x10E520u)) {
        auto targetFn = runtime->lookupFunction(0x10E520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ED50u; }
        if (ctx->pc != 0x10ED50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ED50u; }
        if (ctx->pc != 0x10ED50u) { return; }
    }
    ctx->pc = 0x10ED50u;
    // 0x10ed50: 0xc043948  jal         func_10E520
    ctx->pc = 0x10ED50u;
    SET_GPR_U32(ctx, 31, 0x10ED58u);
    ctx->pc = 0x10ED54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ED50u;
            // 0x10ed54: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E520u;
    if (runtime->hasFunction(0x10E520u)) {
        auto targetFn = runtime->lookupFunction(0x10E520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ED58u; }
        if (ctx->pc != 0x10ED58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ED58u; }
        if (ctx->pc != 0x10ED58u) { return; }
    }
    ctx->pc = 0x10ED58u;
    // 0x10ed58: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x10ed58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x10ed5c: 0xc043b1a  jal         func_10EC68
    ctx->pc = 0x10ED5Cu;
    SET_GPR_U32(ctx, 31, 0x10ED64u);
    ctx->pc = 0x10ED60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ED5Cu;
            // 0x10ed60: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EC68u;
    if (runtime->hasFunction(0x10EC68u)) {
        auto targetFn = runtime->lookupFunction(0x10EC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ED64u; }
        if (ctx->pc != 0x10ED64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setup_0x10ec68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ED64u; }
        if (ctx->pc != 0x10ED64u) { return; }
    }
    ctx->pc = 0x10ED64u;
    // 0x10ed64: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x10ed64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_10ed68:
    // 0x10ed68: 0xc043b30  jal         func_10ECC0
    ctx->pc = 0x10ED68u;
    SET_GPR_U32(ctx, 31, 0x10ED70u);
    ctx->pc = 0x10ED6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ED68u;
            // 0x10ed6c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10ECC0u;
    if (runtime->hasFunction(0x10ECC0u)) {
        auto targetFn = runtime->lookupFunction(0x10ECC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ED70u; }
        if (ctx->pc != 0x10ED70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryAddress_0x10ecc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ED70u; }
        if (ctx->pc != 0x10ED70u) { return; }
    }
    ctx->pc = 0x10ED70u;
    // 0x10ed70: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x10ed70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x10ed74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10ed74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ed78: 0xc043b1a  jal         func_10EC68
    ctx->pc = 0x10ED78u;
    SET_GPR_U32(ctx, 31, 0x10ED80u);
    ctx->pc = 0x10ED7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10ED78u;
            // 0x10ed7c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EC68u;
    if (runtime->hasFunction(0x10EC68u)) {
        auto targetFn = runtime->lookupFunction(0x10EC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ED80u; }
        if (ctx->pc != 0x10ED80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setup_0x10ec68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10ED80u; }
        if (ctx->pc != 0x10ED80u) { return; }
    }
    ctx->pc = 0x10ED80u;
    // 0x10ed80: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x10ed80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x10ed84: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x10ED84u;
    {
        const bool branch_taken_0x10ed84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ed84) {
            ctx->pc = 0x10ED88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10ED84u;
            // 0x10ed88: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10ED68u;
            goto label_10ed68;
        }
    }
    ctx->pc = 0x10ED8Cu;
    // 0x10ed8c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10ed8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_10ed90:
    // 0x10ed90: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10ed90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ed94: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10ed94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ed98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ed98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ed9c: 0x3e00008  jr          $ra
    ctx->pc = 0x10ED9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10ED9Cu;
            // 0x10eda0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10ED68u: goto label_10ed68;
            case 0x10ED90u: goto label_10ed90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10EDA4u;
}
