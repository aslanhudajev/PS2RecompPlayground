#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: iSuspendThread
// Address: 0x12fc28 - 0x12fcc0
void iSuspendThread_0x12fc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("iSuspendThread_0x12fc28");
#endif

    ctx->pc = 0x12fc28u;

    // 0x12fc28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12fc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12fc2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12fc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12fc30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12fc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12fc34: 0x2403ffd1  addiu       $v1, $zero, -0x2F
    ctx->pc = 0x12fc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967249));
    // 0x12fc38: 0xc  syscall     0
    ctx->pc = 0x12fc38u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x12fc3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12fc3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fc40: 0x12040005  beq         $s0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12FC40u;
    {
        const bool branch_taken_0x12fc40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x12FC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FC40u;
            // 0x12fc44: 0x2e020100  sltiu       $v0, $s0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc40) {
            ctx->pc = 0x12FC58u;
            goto label_12fc58;
        }
    }
    ctx->pc = 0x12FC48u;
    // 0x12fc48: 0xc04baf8  jal         func_12EBE0
    ctx->pc = 0x12FC48u;
    SET_GPR_U32(ctx, 31, 0x12FC50u);
    ctx->pc = 0x12EBE0u;
    if (runtime->hasFunction(0x12EBE0u)) {
        auto targetFn = runtime->lookupFunction(0x12EBE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FC50u; }
        if (ctx->pc != 0x12FC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _iSuspendThread_0x12ebe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FC50u; }
        if (ctx->pc != 0x12FC50u) { return; }
    }
    ctx->pc = 0x12FC50u;
    // 0x12fc50: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x12FC50u;
    {
        const bool branch_taken_0x12fc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FC50u;
            // 0x12fc54: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc50) {
            ctx->pc = 0x12FCB4u;
            goto label_12fcb4;
        }
    }
    ctx->pc = 0x12FC58u;
label_12fc58:
    // 0x12fc58: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12FC58u;
    {
        const bool branch_taken_0x12fc58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FC58u;
            // 0x12fc5c: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc58) {
            ctx->pc = 0x12FC6Cu;
            goto label_12fc6c;
        }
    }
    ctx->pc = 0x12FC60u;
    // 0x12fc60: 0x8c4303f8  lw          $v1, 0x3F8($v0)
    ctx->pc = 0x12fc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1016)));
    // 0x12fc64: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12FC64u;
    {
        const bool branch_taken_0x12fc64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FC64u;
            // 0x12fc68: 0x3c030024  lui         $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc64) {
            ctx->pc = 0x12FC74u;
            goto label_12fc74;
        }
    }
    ctx->pc = 0x12FC6Cu;
label_12fc6c:
    // 0x12fc6c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x12FC6Cu;
    {
        const bool branch_taken_0x12fc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FC6Cu;
            // 0x12fc70: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc6c) {
            ctx->pc = 0x12FCB0u;
            goto label_12fcb0;
        }
    }
    ctx->pc = 0x12FC74u;
label_12fc74:
    // 0x12fc74: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x12fc74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
    // 0x12fc78: 0x24632478  addiu       $v1, $v1, 0x2478
    ctx->pc = 0x12fc78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9336));
    // 0x12fc7c: 0x8ca42470  lw          $a0, 0x2470($a1)
    ctx->pc = 0x12fc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 9328)));
    // 0x12fc80: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x12fc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x12fc84: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x12fc84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12fc88: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x12fc88u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)511u)));
    // 0x12fc8c: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x12fc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x12fc90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12fc94: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x12fc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x12fc98: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x12fc98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x12fc9c: 0xa0a70008  sb          $a3, 0x8($a1)
    ctx->pc = 0x12fc9cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 8), (uint8_t)GPR_U32(ctx, 7));
    // 0x12fca0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x12fca0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fca4: 0xc04bb24  jal         func_12EC90
    ctx->pc = 0x12FCA4u;
    SET_GPR_U32(ctx, 31, 0x12FCACu);
    ctx->pc = 0x12FCA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12FCA4u;
            // 0x12fca8: 0xa0700009  sb          $s0, 0x9($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EC90u;
    if (runtime->hasFunction(0x12EC90u)) {
        auto targetFn = runtime->lookupFunction(0x12EC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FCACu; }
        if (ctx->pc != 0x12FCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iSignalSema_0x12ec90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12FCACu; }
        if (ctx->pc != 0x12FCACu) { return; }
    }
    ctx->pc = 0x12FCACu;
    // 0x12fcac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12fcacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12fcb0:
    // 0x12fcb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12fcb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12fcb4:
    // 0x12fcb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12fcb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12fcb8: 0x3e00008  jr          $ra
    ctx->pc = 0x12FCB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12FCB8u;
            // 0x12fcbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12FC58u: goto label_12fc58;
            case 0x12FC6Cu: goto label_12fc6c;
            case 0x12FC74u: goto label_12fc74;
            case 0x12FCB0u: goto label_12fcb0;
            case 0x12FCB4u: goto label_12fcb4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12FCC0u;
}
