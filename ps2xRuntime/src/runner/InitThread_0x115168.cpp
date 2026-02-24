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
// Address: 0x115168 - 0x11523c
void InitThread_0x115168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("InitThread_0x115168");
#endif

    ctx->pc = 0x115168u;

    // 0x115168: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x115168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11516c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x11516cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x115170: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x115170u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x115174: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x115174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x115178: 0x8e02fbd8  lw          $v0, -0x428($s0)
    ctx->pc = 0x115178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294966232)));
    // 0x11517c: 0x1c40001c  bgtz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x11517Cu;
    {
        const bool branch_taken_0x11517c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x115180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11517Cu;
            // 0x115180: 0xffb10060  sd          $s1, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11517c) {
            ctx->pc = 0x1151F0u;
            goto label_1151f0;
        }
    }
    ctx->pc = 0x115184u;
    // 0x115184: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x115184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x115188: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x115188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x11518c: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x11518cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x115190: 0xc0438a8  jal         func_10E2A0
    ctx->pc = 0x115190u;
    SET_GPR_U32(ctx, 31, 0x115198u);
    ctx->pc = 0x115194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x115190u;
            // 0x115194: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E2A0u;
    if (runtime->hasFunction(0x10E2A0u)) {
        auto targetFn = runtime->lookupFunction(0x10E2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115198u; }
        if (ctx->pc != 0x115198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x10e2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115198u; }
        if (ctx->pc != 0x115198u) { return; }
    }
    ctx->pc = 0x115198u;
    // 0x115198: 0x3c110018  lui         $s1, 0x18
    ctx->pc = 0x115198u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)24 << 16));
    // 0x11519c: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x11519Cu;
    {
        const bool branch_taken_0x11519c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1151A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11519Cu;
            // 0x1151a0: 0xae22a2f0  sw          $v0, -0x5D10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294943472), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11519c) {
            ctx->pc = 0x1151F0u;
            goto label_1151f0;
        }
    }
    ctx->pc = 0x1151A4u;
    // 0x1151a4: 0x3c020011  lui         $v0, 0x11
    ctx->pc = 0x1151a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17 << 16));
    // 0x1151a8: 0x3c030018  lui         $v1, 0x18
    ctx->pc = 0x1151a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24 << 16));
    // 0x1151ac: 0x3c050018  lui         $a1, 0x18
    ctx->pc = 0x1151acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)24 << 16));
    // 0x1151b0: 0x24425090  addiu       $v0, $v0, 0x5090
    ctx->pc = 0x1151b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20624));
    // 0x1151b4: 0x24639ef0  addiu       $v1, $v1, -0x6110
    ctx->pc = 0x1151b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942448));
    // 0x1151b8: 0x24a5daf0  addiu       $a1, $a1, -0x2510
    ctx->pc = 0x1151b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957808));
    // 0x1151bc: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x1151bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1151c0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1151c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1151c4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x1151c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x1151c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1151c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1151cc: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x1151ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x1151d0: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1151d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1151d4: 0xc043828  jal         func_10E0A0
    ctx->pc = 0x1151D4u;
    SET_GPR_U32(ctx, 31, 0x1151DCu);
    ctx->pc = 0x1151D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1151D4u;
            // 0x1151d8: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E0A0u;
    if (runtime->hasFunction(0x10E0A0u)) {
        auto targetFn = runtime->lookupFunction(0x10E0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1151DCu; }
        if (ctx->pc != 0x1151DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateThread_0x10e0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1151DCu; }
        if (ctx->pc != 0x1151DCu) { return; }
    }
    ctx->pc = 0x1151DCu;
    // 0x1151dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1151dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1151e0: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1151E0u;
    {
        const bool branch_taken_0x1151e0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1151E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1151E0u;
            // 0x1151e4: 0xae04fbd8  sw          $a0, -0x428($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294966232), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151e0) {
            ctx->pc = 0x1151F8u;
            goto label_1151f8;
        }
    }
    ctx->pc = 0x1151E8u;
    // 0x1151e8: 0xc0438ac  jal         func_10E2B0
    ctx->pc = 0x1151E8u;
    SET_GPR_U32(ctx, 31, 0x1151F0u);
    ctx->pc = 0x1151ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1151E8u;
            // 0x1151ec: 0x8e24a2f0  lw          $a0, -0x5D10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943472)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E2B0u;
    if (runtime->hasFunction(0x10E2B0u)) {
        auto targetFn = runtime->lookupFunction(0x10E2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1151F0u; }
        if (ctx->pc != 0x1151F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteSema_0x10e2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1151F0u; }
        if (ctx->pc != 0x1151F0u) { return; }
    }
    ctx->pc = 0x1151F0u;
label_1151f0:
    // 0x1151f0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1151F0u;
    {
        const bool branch_taken_0x1151f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1151F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1151F0u;
            // 0x1151f4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151f0) {
            ctx->pc = 0x115228u;
            goto label_115228;
        }
    }
    ctx->pc = 0x1151F8u;
label_1151f8:
    // 0x1151f8: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x1151f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x1151fc: 0x2443a2f8  addiu       $v1, $v0, -0x5D08
    ctx->pc = 0x1151fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943480));
    // 0x115200: 0xac40a2f8  sw          $zero, -0x5D08($v0)
    ctx->pc = 0x115200u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943480), GPR_U32(ctx, 0));
    // 0x115204: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x115204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115208: 0xc043830  jal         func_10E0C0
    ctx->pc = 0x115208u;
    SET_GPR_U32(ctx, 31, 0x115210u);
    ctx->pc = 0x11520Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x115208u;
            // 0x11520c: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E0C0u;
    if (runtime->hasFunction(0x10E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x10E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115210u; }
        if (ctx->pc != 0x115210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartThread_0x10e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115210u; }
        if (ctx->pc != 0x115210u) { return; }
    }
    ctx->pc = 0x115210u;
    // 0x115210: 0xc043864  jal         func_10E190
    ctx->pc = 0x115210u;
    SET_GPR_U32(ctx, 31, 0x115218u);
    ctx->pc = 0x10E190u;
    if (runtime->hasFunction(0x10E190u)) {
        auto targetFn = runtime->lookupFunction(0x10E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115218u; }
        if (ctx->pc != 0x115218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetThreadId_0x10e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115218u; }
        if (ctx->pc != 0x115218u) { return; }
    }
    ctx->pc = 0x115218u;
    // 0x115218: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x115218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11521c: 0xc04384c  jal         func_10E130
    ctx->pc = 0x11521Cu;
    SET_GPR_U32(ctx, 31, 0x115224u);
    ctx->pc = 0x115220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11521Cu;
            // 0x115220: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E130u;
    if (runtime->hasFunction(0x10E130u)) {
        auto targetFn = runtime->lookupFunction(0x10E130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115224u; }
        if (ctx->pc != 0x115224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChangeThreadPriority_0x10e130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115224u; }
        if (ctx->pc != 0x115224u) { return; }
    }
    ctx->pc = 0x115224u;
    // 0x115224: 0x8e02fbd8  lw          $v0, -0x428($s0)
    ctx->pc = 0x115224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294966232)));
label_115228:
    // 0x115228: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x115228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11522c: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x11522cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x115230: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x115230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x115234: 0x3e00008  jr          $ra
    ctx->pc = 0x115234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115234u;
            // 0x115238: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1151F0u: goto label_1151f0;
            case 0x1151F8u: goto label_1151f8;
            case 0x115228u: goto label_115228;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11523Cu;
}
