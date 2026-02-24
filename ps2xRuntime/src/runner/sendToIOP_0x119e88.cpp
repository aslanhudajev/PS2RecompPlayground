#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: sendToIOP
// Address: 0x119e88 - 0x119efc
void sendToIOP_0x119e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sendToIOP_0x119e88");
#endif

    ctx->pc = 0x119e88u;

    // 0x119e88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x119e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x119e8c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x119e8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e90: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x119e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x119e94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x119e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x119e98: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x119e98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e9c: 0x1e200003  bgtz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x119E9Cu;
    {
        const bool branch_taken_0x119e9c = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x119EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119E9Cu;
            // 0x119ea0: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119e9c) {
            ctx->pc = 0x119EACu;
            goto label_119eac;
        }
    }
    ctx->pc = 0x119EA4u;
    // 0x119ea4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x119EA4u;
    {
        const bool branch_taken_0x119ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119EA4u;
            // 0x119ea8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ea4) {
            ctx->pc = 0x119EE8u;
            goto label_119ee8;
        }
    }
    ctx->pc = 0x119EACu;
label_119eac:
    // 0x119eac: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x119eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x119eb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x119eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119eb4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x119eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x119eb8: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x119eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    // 0x119ebc: 0xc043948  jal         func_10E520
    ctx->pc = 0x119EBCu;
    SET_GPR_U32(ctx, 31, 0x119EC4u);
    ctx->pc = 0x119EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119EBCu;
            // 0x119ec0: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E520u;
    if (runtime->hasFunction(0x10E520u)) {
        auto targetFn = runtime->lookupFunction(0x10E520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119EC4u; }
        if (ctx->pc != 0x119EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119EC4u; }
        if (ctx->pc != 0x119EC4u) { return; }
    }
    ctx->pc = 0x119EC4u;
    // 0x119ec4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x119ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ec8: 0xc043998  jal         func_10E660
    ctx->pc = 0x119EC8u;
    SET_GPR_U32(ctx, 31, 0x119ED0u);
    ctx->pc = 0x119ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119EC8u;
            // 0x119ecc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E660u;
    if (runtime->hasFunction(0x10E660u)) {
        auto targetFn = runtime->lookupFunction(0x10E660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119ED0u; }
        if (ctx->pc != 0x119ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifSetDma_0x10e660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119ED0u; }
        if (ctx->pc != 0x119ED0u) { return; }
    }
    ctx->pc = 0x119ED0u;
    // 0x119ed0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x119ed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ed4: 0x0  nop
    ctx->pc = 0x119ed4u;
    // NOP
label_119ed8:
    // 0x119ed8: 0xc043990  jal         func_10E640
    ctx->pc = 0x119ED8u;
    SET_GPR_U32(ctx, 31, 0x119EE0u);
    ctx->pc = 0x119EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x119ED8u;
            // 0x119edc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E640u;
    if (runtime->hasFunction(0x10E640u)) {
        auto targetFn = runtime->lookupFunction(0x10E640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119EE0u; }
        if (ctx->pc != 0x119EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifDmaStat_0x10e640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x119EE0u; }
        if (ctx->pc != 0x119EE0u) { return; }
    }
    ctx->pc = 0x119EE0u;
    // 0x119ee0: 0x441fffd  bgez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x119EE0u;
    {
        const bool branch_taken_0x119ee0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x119EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119EE0u;
            // 0x119ee4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119ee0) {
            ctx->pc = 0x119ED8u;
            goto label_119ed8;
        }
    }
    ctx->pc = 0x119EE8u;
label_119ee8:
    // 0x119ee8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x119ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x119eec: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x119eecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119ef0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x119ef0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x119EF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119EF4u;
            // 0x119ef8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x119EACu: goto label_119eac;
            case 0x119ED8u: goto label_119ed8;
            case 0x119EE8u: goto label_119ee8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x119EFCu;
}
