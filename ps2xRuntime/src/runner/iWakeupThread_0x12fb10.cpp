#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: iWakeupThread
// Address: 0x12fb10 - 0x12fba4
void iWakeupThread_0x12fb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("iWakeupThread_0x12fb10");
#endif

    ctx->pc = 0x12fb10u;

    // 0x12fb10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12fb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12fb14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12fb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12fb18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12fb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12fb1c: 0x2403ffd1  addiu       $v1, $zero, -0x2F
    ctx->pc = 0x12fb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967249));
    // 0x12fb20: 0xc  syscall     0
    ctx->pc = 0x12fb20u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12fb24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12fb24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb28: 0x12040005  beq         $s0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12FB28u;
    {
        const bool branch_taken_0x12fb28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x12FB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FB28u;
            // 0x12fb2c: 0x2e020100  sltiu       $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fb28) {
            ctx->pc = 0x12FB40u;
            goto label_12fb40;
        }
    }
    ctx->pc = 0x12FB30u;
    // 0x12fb30: 0xc04bae8  jal         func_12EBA0
    ctx->pc = 0x12FB30u;
    SET_GPR_U32(ctx, 31, 0x12FB38u);
    ctx->pc = 0x12EBA0u;
    if (runtime->hasFunction(0x12EBA0u)) {
        auto targetFn = runtime->lookupFunction(0x12EBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FB38u; }
        if (ctx->pc != 0x12FB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _iWakeupThread_0x12eba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FB38u; }
        if (ctx->pc != 0x12FB38u) { return; }
    }
    ctx->pc = 0x12FB38u;
    // 0x12fb38: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x12FB38u;
    {
        const bool branch_taken_0x12fb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FB38u;
            // 0x12fb3c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fb38) {
            ctx->pc = 0x12FB98u;
            goto label_12fb98;
        }
    }
    ctx->pc = 0x12FB40u;
label_12fb40:
    // 0x12fb40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12FB40u;
    {
        const bool branch_taken_0x12fb40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FB40u;
            // 0x12fb44: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fb40) {
            ctx->pc = 0x12FB54u;
            goto label_12fb54;
        }
    }
    ctx->pc = 0x12FB48u;
    // 0x12fb48: 0x8c4303f8  lw          $v1, 0x3F8($v0)
    ctx->pc = 0x12fb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1016)));
    // 0x12fb4c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12FB4Cu;
    {
        const bool branch_taken_0x12fb4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FB4Cu;
            // 0x12fb50: 0x3c030024  lui         $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fb4c) {
            ctx->pc = 0x12FB5Cu;
            goto label_12fb5c;
        }
    }
    ctx->pc = 0x12FB54u;
label_12fb54:
    // 0x12fb54: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x12FB54u;
    {
        const bool branch_taken_0x12fb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FB54u;
            // 0x12fb58: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fb54) {
            ctx->pc = 0x12FB94u;
            goto label_12fb94;
        }
    }
    ctx->pc = 0x12FB5Cu;
label_12fb5c:
    // 0x12fb5c: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x12fb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
    // 0x12fb60: 0x24632478  addiu       $v1, $v1, 0x2478
    ctx->pc = 0x12fb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9336));
    // 0x12fb64: 0x8ca42470  lw          $a0, 0x2470($a1)
    ctx->pc = 0x12fb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 9328)));
    // 0x12fb68: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x12fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x12fb6c: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x12fb6cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)511u)));
    // 0x12fb70: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x12fb70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x12fb74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12fb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12fb78: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x12fb78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x12fb7c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x12fb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x12fb80: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x12fb80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fb84: 0xa0a00008  sb          $zero, 0x8($a1)
    ctx->pc = 0x12fb84u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x12fb88: 0xc04bb24  jal         func_12EC90
    ctx->pc = 0x12FB88u;
    SET_GPR_U32(ctx, 31, 0x12FB90u);
    ctx->pc = 0x12FB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FB88u;
            // 0x12fb8c: 0xa0700009  sb          $s0, 0x9($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC90u;
    if (runtime->hasFunction(0x12EC90u)) {
        auto targetFn = runtime->lookupFunction(0x12EC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FB90u; }
        if (ctx->pc != 0x12FB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iSignalSema_0x12ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FB90u; }
        if (ctx->pc != 0x12FB90u) { return; }
    }
    ctx->pc = 0x12FB90u;
    // 0x12fb90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12fb90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12fb94:
    // 0x12fb94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12fb94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12fb98:
    // 0x12fb98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12fb98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12fb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x12FB9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FB9Cu;
            // 0x12fba0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12FB40u: goto label_12fb40;
            case 0x12FB54u: goto label_12fb54;
            case 0x12FB5Cu: goto label_12fb5c;
            case 0x12FB94u: goto label_12fb94;
            case 0x12FB98u: goto label_12fb98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12FBA4u;
}
