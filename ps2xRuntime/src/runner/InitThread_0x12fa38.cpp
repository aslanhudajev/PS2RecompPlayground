#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: InitThread
// Address: 0x12fa38 - 0x12fb0c
void InitThread_0x12fa38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitThread_0x12fa38");
#endif

    ctx->pc = 0x12fa38u;

    // 0x12fa38: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x12fa38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x12fa3c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x12fa3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x12fa40: 0x3c100021  lui         $s0, 0x21
    ctx->pc = 0x12fa40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)33 << 16));
    // 0x12fa44: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x12fa44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x12fa48: 0x8e0203f8  lw          $v0, 0x3F8($s0)
    ctx->pc = 0x12fa48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1016)));
    // 0x12fa4c: 0x1c40001c  bgtz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x12FA4Cu;
    {
        const bool branch_taken_0x12fa4c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x12FA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FA4Cu;
            // 0x12fa50: 0xffb10060  sd          $s1, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fa4c) {
            ctx->pc = 0x12FAC0u;
            goto label_12fac0;
        }
    }
    ctx->pc = 0x12FA54u;
    // 0x12fa54: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x12fa54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x12fa58: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x12fa58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x12fa5c: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x12fa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x12fa60: 0xc04bb18  jal         func_12EC60
    ctx->pc = 0x12FA60u;
    SET_GPR_U32(ctx, 31, 0x12FA68u);
    ctx->pc = 0x12FA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FA60u;
            // 0x12fa64: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC60u;
    if (runtime->hasFunction(0x12EC60u)) {
        auto targetFn = runtime->lookupFunction(0x12EC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FA68u; }
        if (ctx->pc != 0x12FA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x12ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FA68u; }
        if (ctx->pc != 0x12FA68u) { return; }
    }
    ctx->pc = 0x12FA68u;
    // 0x12fa68: 0x3c110024  lui         $s1, 0x24
    ctx->pc = 0x12fa68u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)36 << 16));
    // 0x12fa6c: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x12FA6Cu;
    {
        const bool branch_taken_0x12fa6c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x12FA70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FA6Cu;
            // 0x12fa70: 0xae222470  sw          $v0, 0x2470($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 9328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fa6c) {
            ctx->pc = 0x12FAC0u;
            goto label_12fac0;
        }
    }
    ctx->pc = 0x12FA74u;
    // 0x12fa74: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x12fa74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x12fa78: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x12fa78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x12fa7c: 0x3c050023  lui         $a1, 0x23
    ctx->pc = 0x12fa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35 << 16));
    // 0x12fa80: 0x2442f960  addiu       $v0, $v0, -0x6A0
    ctx->pc = 0x12fa80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965600));
    // 0x12fa84: 0x24632070  addiu       $v1, $v1, 0x2070
    ctx->pc = 0x12fa84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8304));
    // 0x12fa88: 0x24a5b670  addiu       $a1, $a1, -0x4990
    ctx->pc = 0x12fa88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948464));
    // 0x12fa8c: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x12fa8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x12fa90: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x12fa90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x12fa94: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x12fa94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x12fa98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12fa98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa9c: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x12fa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x12faa0: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x12faa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x12faa4: 0xc04ba98  jal         func_12EA60
    ctx->pc = 0x12FAA4u;
    SET_GPR_U32(ctx, 31, 0x12FAACu);
    ctx->pc = 0x12FAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FAA4u;
            // 0x12faa8: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EA60u;
    if (runtime->hasFunction(0x12EA60u)) {
        auto targetFn = runtime->lookupFunction(0x12EA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FAACu; }
        if (ctx->pc != 0x12FAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateThread_0x12ea60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FAACu; }
        if (ctx->pc != 0x12FAACu) { return; }
    }
    ctx->pc = 0x12FAACu;
    // 0x12faac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12faacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fab0: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12FAB0u;
    {
        const bool branch_taken_0x12fab0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x12FAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FAB0u;
            // 0x12fab4: 0xae0403f8  sw          $a0, 0x3F8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1016), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fab0) {
            ctx->pc = 0x12FAC8u;
            goto label_12fac8;
        }
    }
    ctx->pc = 0x12FAB8u;
    // 0x12fab8: 0xc04bb1c  jal         func_12EC70
    ctx->pc = 0x12FAB8u;
    SET_GPR_U32(ctx, 31, 0x12FAC0u);
    ctx->pc = 0x12FABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FAB8u;
            // 0x12fabc: 0x8e242470  lw          $a0, 0x2470($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 9328)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC70u;
    if (runtime->hasFunction(0x12EC70u)) {
        auto targetFn = runtime->lookupFunction(0x12EC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FAC0u; }
        if (ctx->pc != 0x12FAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteSema_0x12ec70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FAC0u; }
        if (ctx->pc != 0x12FAC0u) { return; }
    }
    ctx->pc = 0x12FAC0u;
label_12fac0:
    // 0x12fac0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x12FAC0u;
    {
        const bool branch_taken_0x12fac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FAC0u;
            // 0x12fac4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fac0) {
            ctx->pc = 0x12FAF8u;
            goto label_12faf8;
        }
    }
    ctx->pc = 0x12FAC8u;
label_12fac8:
    // 0x12fac8: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x12fac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x12facc: 0x24432478  addiu       $v1, $v0, 0x2478
    ctx->pc = 0x12faccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9336));
    // 0x12fad0: 0xac402478  sw          $zero, 0x2478($v0)
    ctx->pc = 0x12fad0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 9336), GPR_U32(ctx, 0));
    // 0x12fad4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x12fad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fad8: 0xc04baa0  jal         func_12EA80
    ctx->pc = 0x12FAD8u;
    SET_GPR_U32(ctx, 31, 0x12FAE0u);
    ctx->pc = 0x12FADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FAD8u;
            // 0x12fadc: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EA80u;
    if (runtime->hasFunction(0x12EA80u)) {
        auto targetFn = runtime->lookupFunction(0x12EA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FAE0u; }
        if (ctx->pc != 0x12FAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartThread_0x12ea80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FAE0u; }
        if (ctx->pc != 0x12FAE0u) { return; }
    }
    ctx->pc = 0x12FAE0u;
    // 0x12fae0: 0xc04bad4  jal         func_12EB50
    ctx->pc = 0x12FAE0u;
    SET_GPR_U32(ctx, 31, 0x12FAE8u);
    ctx->pc = 0x12EB50u;
    if (runtime->hasFunction(0x12EB50u)) {
        auto targetFn = runtime->lookupFunction(0x12EB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FAE8u; }
        if (ctx->pc != 0x12FAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetThreadId_0x12eb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FAE8u; }
        if (ctx->pc != 0x12FAE8u) { return; }
    }
    ctx->pc = 0x12FAE8u;
    // 0x12fae8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12fae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12faec: 0xc04babc  jal         func_12EAF0
    ctx->pc = 0x12FAECu;
    SET_GPR_U32(ctx, 31, 0x12FAF4u);
    ctx->pc = 0x12FAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FAECu;
            // 0x12faf0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EAF0u;
    if (runtime->hasFunction(0x12EAF0u)) {
        auto targetFn = runtime->lookupFunction(0x12EAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FAF4u; }
        if (ctx->pc != 0x12FAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChangeThreadPriority_0x12eaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FAF4u; }
        if (ctx->pc != 0x12FAF4u) { return; }
    }
    ctx->pc = 0x12FAF4u;
    // 0x12faf4: 0x8e0203f8  lw          $v0, 0x3F8($s0)
    ctx->pc = 0x12faf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1016)));
label_12faf8:
    // 0x12faf8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x12faf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12fafc: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x12fafcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12fb00: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x12fb00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12fb04: 0x3e00008  jr          $ra
    ctx->pc = 0x12FB04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FB04u;
            // 0x12fb08: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12FAC0u: goto label_12fac0;
            case 0x12FAC8u: goto label_12fac8;
            case 0x12FAF8u: goto label_12faf8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12FB0Cu;
}
