#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: new_iob
// Address: 0x110c00 - 0x110c88
void new_iob_0x110c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x110c00u;

    // 0x110c00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x110c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x110c04: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x110c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x110c08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x110c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x110c0c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x110c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x110c10: 0xc0442e8  jal         func_110BA0
    ctx->pc = 0x110C10u;
    SET_GPR_U32(ctx, 31, 0x110C18u);
    ctx->pc = 0x110C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110C10u;
            // 0x110c14: 0x3c110017  lui         $s1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110BA0u;
    if (runtime->hasFunction(0x110BA0u)) {
        auto targetFn = runtime->lookupFunction(0x110BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110C18u; }
        if (ctx->pc != 0x110C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceFsIobSemaMK_0x110ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110C18u; }
        if (ctx->pc != 0x110C18u) { return; }
    }
    ctx->pc = 0x110C18u;
    // 0x110c18: 0xc0438b8  jal         func_10E2E0
    ctx->pc = 0x110C18u;
    SET_GPR_U32(ctx, 31, 0x110C20u);
    ctx->pc = 0x110C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110C18u;
            // 0x110c1c: 0x8e24fbc0  lw          $a0, -0x440($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294966208)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E2E0u;
    if (runtime->hasFunction(0x10E2E0u)) {
        auto targetFn = runtime->lookupFunction(0x10E2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110C20u; }
        if (ctx->pc != 0x110C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x10e2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110C20u; }
        if (ctx->pc != 0x110C20u) { return; }
    }
    ctx->pc = 0x110C20u;
    // 0x110c20: 0x3c030018  lui         $v1, 0x18
    ctx->pc = 0x110c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24 << 16));
    // 0x110c24: 0x247097c0  addiu       $s0, $v1, -0x6840
    ctx->pc = 0x110c24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940608));
    // 0x110c28: 0x26030200  addiu       $v1, $s0, 0x200
    ctx->pc = 0x110c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x110c2c: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x110c2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x110c30: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x110C30u;
    {
        const bool branch_taken_0x110c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110C30u;
            // 0x110c34: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110c30) {
            ctx->pc = 0x110C68u;
            goto label_110c68;
        }
    }
    ctx->pc = 0x110C38u;
    // 0x110c38: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x110c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x110c3c: 0x0  nop
    ctx->pc = 0x110c3cu;
    // NOP
label_110c40:
    // 0x110c40: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x110C40u;
    {
        const bool branch_taken_0x110c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110c40) {
            ctx->pc = 0x110C44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x110C40u;
            // 0x110c44: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x110C5Cu;
            goto label_110c5c;
        }
    }
    ctx->pc = 0x110C48u;
    // 0x110c48: 0x8e24fbc0  lw          $a0, -0x440($s1)
    ctx->pc = 0x110c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294966208)));
    // 0x110c4c: 0xc0438b0  jal         func_10E2C0
    ctx->pc = 0x110C4Cu;
    SET_GPR_U32(ctx, 31, 0x110C54u);
    ctx->pc = 0x110C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110C4Cu;
            // 0x110c50: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E2C0u;
    if (runtime->hasFunction(0x10E2C0u)) {
        auto targetFn = runtime->lookupFunction(0x10E2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110C54u; }
        if (ctx->pc != 0x110C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x10e2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110C54u; }
        if (ctx->pc != 0x110C54u) { return; }
    }
    ctx->pc = 0x110C54u;
    // 0x110c54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x110C54u;
    {
        const bool branch_taken_0x110c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110C54u;
            // 0x110c58: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110c54) {
            ctx->pc = 0x110C74u;
            goto label_110c74;
        }
    }
    ctx->pc = 0x110C5Cu;
label_110c5c:
    // 0x110c5c: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x110c5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x110c60: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x110C60u;
    {
        const bool branch_taken_0x110c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110c60) {
            ctx->pc = 0x110C64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x110C60u;
            // 0x110c64: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x110C40u;
            goto label_110c40;
        }
    }
    ctx->pc = 0x110C68u;
label_110c68:
    // 0x110c68: 0xc0438b0  jal         func_10E2C0
    ctx->pc = 0x110C68u;
    SET_GPR_U32(ctx, 31, 0x110C70u);
    ctx->pc = 0x110C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110C68u;
            // 0x110c6c: 0x8e24fbc0  lw          $a0, -0x440($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294966208)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E2C0u;
    if (runtime->hasFunction(0x10E2C0u)) {
        auto targetFn = runtime->lookupFunction(0x10E2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110C70u; }
        if (ctx->pc != 0x110C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SignalSema_0x10e2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110C70u; }
        if (ctx->pc != 0x110C70u) { return; }
    }
    ctx->pc = 0x110C70u;
    // 0x110c70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x110c70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110c74:
    // 0x110c74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x110c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110c78: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x110c78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110c7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x110c7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110c80: 0x3e00008  jr          $ra
    ctx->pc = 0x110C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110C80u;
            // 0x110c84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x110C40u: goto label_110c40;
            case 0x110C5Cu: goto label_110c5c;
            case 0x110C68u: goto label_110c68;
            case 0x110C74u: goto label_110c74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x110C88u;
}
