#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _fstat_r
// Address: 0x130fe8 - 0x131044
void _fstat_r_0x130fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_fstat_r_0x130fe8");
#endif

    ctx->pc = 0x130fe8u;

    // 0x130fe8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x130fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x130fec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130ff0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x130ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x130ff4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x130ff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ff8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x130ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ffc: 0x3c110017  lui         $s1, 0x17
    ctx->pc = 0x130ffcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)23 << 16));
    // 0x131000: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x131000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x131004: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x131004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131008: 0xc043a6c  jal         func_10E9B0
    ctx->pc = 0x131008u;
    SET_GPR_U32(ctx, 31, 0x131010u);
    ctx->pc = 0x13100Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131008u;
            // 0x13100c: 0xae205fe0  sw          $zero, 0x5FE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24544), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E9B0u;
    if (runtime->hasFunction(0x10E9B0u)) {
        auto targetFn = runtime->lookupFunction(0x10E9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131010u; }
        if (ctx->pc != 0x131010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fstat_0x10e9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131010u; }
        if (ctx->pc != 0x131010u) { return; }
    }
    ctx->pc = 0x131010u;
    // 0x131010: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x131010u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131014: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x131014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x131018: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x131018u;
    {
        const bool branch_taken_0x131018 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13101Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131018u;
            // 0x13101c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131018) {
            ctx->pc = 0x131030u;
            goto label_131030;
        }
    }
    ctx->pc = 0x131020u;
    // 0x131020: 0x8e225fe0  lw          $v0, 0x5FE0($s1)
    ctx->pc = 0x131020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24544)));
    // 0x131024: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x131024u;
    {
        const bool branch_taken_0x131024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x131024) {
            ctx->pc = 0x131028u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x131024u;
            // 0x131028: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x131030u;
            goto label_131030;
        }
    }
    ctx->pc = 0x13102Cu;
    // 0x13102c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13102cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_131030:
    // 0x131030: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x131030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131034: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x131034u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131038: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x131038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13103c: 0x3e00008  jr          $ra
    ctx->pc = 0x13103Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13103Cu;
            // 0x131040: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131030u: goto label_131030;
            default: break;
        }
        return;
    }
    ctx->pc = 0x131044u;
}
