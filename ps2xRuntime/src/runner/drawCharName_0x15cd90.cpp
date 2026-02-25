#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: drawCharName
// Address: 0x15cd90 - 0x15ceb0
void drawCharName_0x15cd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("drawCharName_0x15cd90");
#endif

    ctx->pc = 0x15cd90u;

    // 0x15cd90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15cd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x15cd94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15cd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15cd98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15cd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15cd9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15cd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15cda0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x15cda0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cda4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15cda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15cda8: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x15CDA8u;
    {
        const bool branch_taken_0x15cda8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CDA8u;
            // 0x15cdac: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cda8) {
            ctx->pc = 0x15CDC0u;
            goto label_15cdc0;
        }
    }
    ctx->pc = 0x15CDB0u;
    // 0x15cdb0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x15cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x15cdb4: 0x24429c60  addiu       $v0, $v0, -0x63A0
    ctx->pc = 0x15cdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941792));
    // 0x15cdb8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15CDB8u;
    {
        const bool branch_taken_0x15cdb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CDB8u;
            // 0x15cdbc: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cdb8) {
            ctx->pc = 0x15CDD0u;
            goto label_15cdd0;
        }
    }
    ctx->pc = 0x15CDC0u;
label_15cdc0:
    // 0x15cdc0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x15cdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x15cdc4: 0x24429cc0  addiu       $v0, $v0, -0x6340
    ctx->pc = 0x15cdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941888));
    // 0x15cdc8: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x15cdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x15cdcc: 0x0  nop
    ctx->pc = 0x15cdccu;
    // NOP
label_15cdd0:
    // 0x15cdd0: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x15CDD0u;
    SET_GPR_U32(ctx, 31, 0x15CDD8u);
    ctx->pc = 0x15CDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CDD0u;
            // 0x15cdd4: 0x2404003d  addiu       $a0, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CDD8u; }
        if (ctx->pc != 0x15CDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CDD8u; }
        if (ctx->pc != 0x15CDD8u) { return; }
    }
    ctx->pc = 0x15CDD8u;
    // 0x15cdd8: 0x2e410006  sltiu       $at, $s2, 0x6
    ctx->pc = 0x15cdd8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x15cddc: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x15CDDCu;
    {
        const bool branch_taken_0x15cddc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CDDCu;
            // 0x15cde0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cddc) {
            ctx->pc = 0x15CE30u;
            goto label_15ce30;
        }
    }
    ctx->pc = 0x15CDE4u;
    // 0x15cde4: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x15cde4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x15cde8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x15cde8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x15cdec: 0x24631010  addiu       $v1, $v1, 0x1010
    ctx->pc = 0x15cdecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4112));
    // 0x15cdf0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15cdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15cdf4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15cdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15cdf8: 0x400008  jr          $v0
    ctx->pc = 0x15CDF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15CE00u: goto label_15ce00;
            case 0x15CE08u: goto label_15ce08;
            case 0x15CE10u: goto label_15ce10;
            case 0x15CE18u: goto label_15ce18;
            case 0x15CE20u: goto label_15ce20;
            case 0x15CE28u: goto label_15ce28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15CE00u;
label_15ce00:
    // 0x15ce00: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15CE00u;
    {
        const bool branch_taken_0x15ce00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CE00u;
            // 0x15ce04: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce00) {
            ctx->pc = 0x15CE30u;
            goto label_15ce30;
        }
    }
    ctx->pc = 0x15CE08u;
label_15ce08:
    // 0x15ce08: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15CE08u;
    {
        const bool branch_taken_0x15ce08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CE08u;
            // 0x15ce0c: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce08) {
            ctx->pc = 0x15CE30u;
            goto label_15ce30;
        }
    }
    ctx->pc = 0x15CE10u;
label_15ce10:
    // 0x15ce10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15CE10u;
    {
        const bool branch_taken_0x15ce10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CE10u;
            // 0x15ce14: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce10) {
            ctx->pc = 0x15CE30u;
            goto label_15ce30;
        }
    }
    ctx->pc = 0x15CE18u;
label_15ce18:
    // 0x15ce18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15CE18u;
    {
        const bool branch_taken_0x15ce18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CE18u;
            // 0x15ce1c: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce18) {
            ctx->pc = 0x15CE30u;
            goto label_15ce30;
        }
    }
    ctx->pc = 0x15CE20u;
label_15ce20:
    // 0x15ce20: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15CE20u;
    {
        const bool branch_taken_0x15ce20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CE20u;
            // 0x15ce24: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce20) {
            ctx->pc = 0x15CE30u;
            goto label_15ce30;
        }
    }
    ctx->pc = 0x15CE28u;
label_15ce28:
    // 0x15ce28: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x15ce28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15ce2c: 0x0  nop
    ctx->pc = 0x15ce2cu;
    // NOP
label_15ce30:
    // 0x15ce30: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x15CE30u;
    {
        const bool branch_taken_0x15ce30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CE30u;
            // 0x15ce34: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce30) {
            ctx->pc = 0x15CE60u;
            goto label_15ce60;
        }
    }
    ctx->pc = 0x15CE38u;
    // 0x15ce38: 0x102140  sll         $a0, $s0, 5
    ctx->pc = 0x15ce38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x15ce3c: 0x24423740  addiu       $v0, $v0, 0x3740
    ctx->pc = 0x15ce3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14144));
    // 0x15ce40: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x15ce40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15ce44: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15ce44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15ce48: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x15ce48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x15ce4c: 0x244235c0  addiu       $v0, $v0, 0x35C0
    ctx->pc = 0x15ce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13760));
    // 0x15ce50: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15ce50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15ce54: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x15CE54u;
    {
        const bool branch_taken_0x15ce54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CE54u;
            // 0x15ce58: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ce54) {
            ctx->pc = 0x15CE90u;
            goto label_15ce90;
        }
    }
    ctx->pc = 0x15CE5Cu;
    // 0x15ce5c: 0x0  nop
    ctx->pc = 0x15ce5cu;
    // NOP
label_15ce60:
    // 0x15ce60: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x15ce60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x15ce64: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x15ce64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x15ce68: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x15ce68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x15ce6c: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x15ce6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15ce70: 0x24633740  addiu       $v1, $v1, 0x3740
    ctx->pc = 0x15ce70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14144));
    // 0x15ce74: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x15ce74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x15ce78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15ce78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15ce7c: 0x244235c0  addiu       $v0, $v0, 0x35C0
    ctx->pc = 0x15ce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13760));
    // 0x15ce80: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x15ce80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x15ce84: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15ce88: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x15ce88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x15ce8c: 0x0  nop
    ctx->pc = 0x15ce8cu;
    // NOP
label_15ce90:
    // 0x15ce90: 0xc057608  jal         func_15D820
    ctx->pc = 0x15CE90u;
    SET_GPR_U32(ctx, 31, 0x15CE98u);
    ctx->pc = 0x15CE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CE90u;
            // 0x15ce94: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D820u;
    if (runtime->hasFunction(0x15D820u)) {
        auto targetFn = runtime->lookupFunction(0x15D820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CE98u; }
        if (ctx->pc != 0x15CE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        drawOnePrim_0x15d820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CE98u; }
        if (ctx->pc != 0x15CE98u) { return; }
    }
    ctx->pc = 0x15CE98u;
    // 0x15ce98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15ce98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15ce9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15ce9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cea0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15cea0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15cea4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15cea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cea8: 0x3e00008  jr          $ra
    ctx->pc = 0x15CEA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CEA8u;
            // 0x15ceac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15CDC0u: goto label_15cdc0;
            case 0x15CDD0u: goto label_15cdd0;
            case 0x15CE00u: goto label_15ce00;
            case 0x15CE08u: goto label_15ce08;
            case 0x15CE10u: goto label_15ce10;
            case 0x15CE18u: goto label_15ce18;
            case 0x15CE20u: goto label_15ce20;
            case 0x15CE28u: goto label_15ce28;
            case 0x15CE30u: goto label_15ce30;
            case 0x15CE60u: goto label_15ce60;
            case 0x15CE90u: goto label_15ce90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15CEB0u;
}
