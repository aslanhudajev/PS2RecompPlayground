#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: get_iob
// Address: 0x1325c0 - 0x13262c
void get_iob_0x1325c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("get_iob_0x1325c0");
#endif

    ctx->pc = 0x1325c0u;

    // 0x1325c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1325c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1325c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1325c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1325c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1325c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1325cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1325ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1325d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1325d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1325d4: 0xc04c936  jal         func_1324D8
    ctx->pc = 0x1325D4u;
    SET_GPR_U32(ctx, 31, 0x1325DCu);
    ctx->pc = 0x1325D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1325D4u;
            // 0x1325d8: 0x3c110021  lui         $s1, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1324D8u;
    if (runtime->hasFunction(0x1324D8u)) {
        auto targetFn = runtime->lookupFunction(0x1324D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1325DCu; }
        if (ctx->pc != 0x1325DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceFsIobSemaMK_0x1324d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1325DCu; }
        if (ctx->pc != 0x1325DCu) { return; }
    }
    ctx->pc = 0x1325DCu;
    // 0x1325dc: 0xc04bb28  jal         func_12ECA0
    ctx->pc = 0x1325DCu;
    SET_GPR_U32(ctx, 31, 0x1325E4u);
    ctx->pc = 0x1325E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1325DCu;
            // 0x1325e0: 0x8e2404a8  lw          $a0, 0x4A8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1192)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12ECA0u;
    if (runtime->hasFunction(0x12ECA0u)) {
        auto targetFn = runtime->lookupFunction(0x12ECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1325E4u; }
        if (ctx->pc != 0x1325E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x12eca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1325E4u; }
        if (ctx->pc != 0x1325E4u) { return; }
    }
    ctx->pc = 0x1325E4u;
    // 0x1325e4: 0x2e030020  sltiu       $v1, $s0, 0x20
    ctx->pc = 0x1325e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1325e8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1325E8u;
    {
        const bool branch_taken_0x1325e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1325ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1325E8u;
            // 0x1325ec: 0x3c020024  lui         $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1325e8) {
            ctx->pc = 0x132600u;
            goto label_132600;
        }
    }
    ctx->pc = 0x1325F0u;
    // 0x1325f0: 0xc04bb20  jal         func_12EC80
    ctx->pc = 0x1325F0u;
    SET_GPR_U32(ctx, 31, 0x1325F8u);
    ctx->pc = 0x1325F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1325F0u;
            // 0x1325f4: 0x8e2404a8  lw          $a0, 0x4A8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1192)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC80u;
    if (runtime->hasFunction(0x12EC80u)) {
        auto targetFn = runtime->lookupFunction(0x12EC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1325F8u; }
        if (ctx->pc != 0x1325F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x12ec80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1325F8u; }
        if (ctx->pc != 0x1325F8u) { return; }
    }
    ctx->pc = 0x1325F8u;
    // 0x1325f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1325F8u;
    {
        const bool branch_taken_0x1325f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1325FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1325F8u;
            // 0x1325fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1325f8) {
            ctx->pc = 0x132618u;
            goto label_132618;
        }
    }
    ctx->pc = 0x132600u;
label_132600:
    // 0x132600: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x132600u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x132604: 0x24425d00  addiu       $v0, $v0, 0x5D00
    ctx->pc = 0x132604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23808));
    // 0x132608: 0x8e2404a8  lw          $a0, 0x4A8($s1)
    ctx->pc = 0x132608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1192)));
    // 0x13260c: 0xc04bb20  jal         func_12EC80
    ctx->pc = 0x13260Cu;
    SET_GPR_U32(ctx, 31, 0x132614u);
    ctx->pc = 0x132610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13260Cu;
            // 0x132610: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC80u;
    if (runtime->hasFunction(0x12EC80u)) {
        auto targetFn = runtime->lookupFunction(0x12EC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132614u; }
        if (ctx->pc != 0x132614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x12ec80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132614u; }
        if (ctx->pc != 0x132614u) { return; }
    }
    ctx->pc = 0x132614u;
    // 0x132614: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x132614u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_132618:
    // 0x132618: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x132618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13261c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x13261cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132620: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x132620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132624: 0x3e00008  jr          $ra
    ctx->pc = 0x132624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132624u;
            // 0x132628: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132600u: goto label_132600;
            case 0x132618u: goto label_132618;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13262Cu;
}
