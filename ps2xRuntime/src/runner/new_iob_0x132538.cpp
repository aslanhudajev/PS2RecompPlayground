#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: new_iob
// Address: 0x132538 - 0x1325c0
void new_iob_0x132538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("new_iob_0x132538");
#endif

    ctx->pc = 0x132538u;

    // 0x132538: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x132538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13253c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x13253cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x132540: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x132540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x132544: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x132544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x132548: 0xc04c936  jal         func_1324D8
    ctx->pc = 0x132548u;
    SET_GPR_U32(ctx, 31, 0x132550u);
    ctx->pc = 0x13254Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132548u;
            // 0x13254c: 0x3c110021  lui         $s1, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1324D8u;
    if (runtime->hasFunction(0x1324D8u)) {
        auto targetFn = runtime->lookupFunction(0x1324D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132550u; }
        if (ctx->pc != 0x132550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceFsIobSemaMK_0x1324d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132550u; }
        if (ctx->pc != 0x132550u) { return; }
    }
    ctx->pc = 0x132550u;
    // 0x132550: 0xc04bb28  jal         func_12ECA0
    ctx->pc = 0x132550u;
    SET_GPR_U32(ctx, 31, 0x132558u);
    ctx->pc = 0x132554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132550u;
            // 0x132554: 0x8e2404a8  lw          $a0, 0x4A8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1192)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12ECA0u;
    if (runtime->hasFunction(0x12ECA0u)) {
        auto targetFn = runtime->lookupFunction(0x12ECA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132558u; }
        if (ctx->pc != 0x132558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x12eca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132558u; }
        if (ctx->pc != 0x132558u) { return; }
    }
    ctx->pc = 0x132558u;
    // 0x132558: 0x3c030024  lui         $v1, 0x24
    ctx->pc = 0x132558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
    // 0x13255c: 0x24705d00  addiu       $s0, $v1, 0x5D00
    ctx->pc = 0x13255cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23808));
    // 0x132560: 0x26030200  addiu       $v1, $s0, 0x200
    ctx->pc = 0x132560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x132564: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x132564u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x132568: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x132568u;
    {
        const bool branch_taken_0x132568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13256Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132568u;
            // 0x13256c: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132568) {
            ctx->pc = 0x1325A0u;
            goto label_1325a0;
        }
    }
    ctx->pc = 0x132570u;
    // 0x132570: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x132570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x132574: 0x0  nop
    ctx->pc = 0x132574u;
    // NOP
label_132578:
    // 0x132578: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x132578u;
    {
        const bool branch_taken_0x132578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132578) {
            ctx->pc = 0x13257Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x132578u;
            // 0x13257c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x132594u;
            goto label_132594;
        }
    }
    ctx->pc = 0x132580u;
    // 0x132580: 0x8e2404a8  lw          $a0, 0x4A8($s1)
    ctx->pc = 0x132580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1192)));
    // 0x132584: 0xc04bb20  jal         func_12EC80
    ctx->pc = 0x132584u;
    SET_GPR_U32(ctx, 31, 0x13258Cu);
    ctx->pc = 0x132588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x132584u;
            // 0x132588: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC80u;
    if (runtime->hasFunction(0x12EC80u)) {
        auto targetFn = runtime->lookupFunction(0x12EC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13258Cu; }
        if (ctx->pc != 0x13258Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x12ec80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13258Cu; }
        if (ctx->pc != 0x13258Cu) { return; }
    }
    ctx->pc = 0x13258Cu;
    // 0x13258c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13258Cu;
    {
        const bool branch_taken_0x13258c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13258Cu;
            // 0x132590: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13258c) {
            ctx->pc = 0x1325ACu;
            goto label_1325ac;
        }
    }
    ctx->pc = 0x132594u;
label_132594:
    // 0x132594: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x132594u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x132598: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x132598u;
    {
        const bool branch_taken_0x132598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132598) {
            ctx->pc = 0x13259Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x132598u;
            // 0x13259c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x132578u;
            goto label_132578;
        }
    }
    ctx->pc = 0x1325A0u;
label_1325a0:
    // 0x1325a0: 0xc04bb20  jal         func_12EC80
    ctx->pc = 0x1325A0u;
    SET_GPR_U32(ctx, 31, 0x1325A8u);
    ctx->pc = 0x1325A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1325A0u;
            // 0x1325a4: 0x8e2404a8  lw          $a0, 0x4A8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1192)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC80u;
    if (runtime->hasFunction(0x12EC80u)) {
        auto targetFn = runtime->lookupFunction(0x12EC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1325A8u; }
        if (ctx->pc != 0x1325A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x12ec80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1325A8u; }
        if (ctx->pc != 0x1325A8u) { return; }
    }
    ctx->pc = 0x1325A8u;
    // 0x1325a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1325a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1325ac:
    // 0x1325ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1325acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1325b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1325b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1325b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1325b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1325b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1325B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1325BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1325B8u;
            // 0x1325bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132578u: goto label_132578;
            case 0x132594u: goto label_132594;
            case 0x1325A0u: goto label_1325a0;
            case 0x1325ACu: goto label_1325ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1325C0u;
}
