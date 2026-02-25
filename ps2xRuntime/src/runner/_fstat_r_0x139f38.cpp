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
// Address: 0x139f38 - 0x139f94
void _fstat_r_0x139f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_fstat_r_0x139f38");
#endif

    ctx->pc = 0x139f38u;

    // 0x139f38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x139f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x139f3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x139f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x139f40: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x139f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x139f44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x139f44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139f48: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x139f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139f4c: 0x3c110045  lui         $s1, 0x45
    ctx->pc = 0x139f4cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)69 << 16));
    // 0x139f50: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x139f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x139f54: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x139f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139f58: 0xc04bd06  jal         func_12F418
    ctx->pc = 0x139F58u;
    SET_GPR_U32(ctx, 31, 0x139F60u);
    ctx->pc = 0x139F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139F58u;
            // 0x139f5c: 0xae20c14c  sw          $zero, -0x3EB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294951244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F418u;
    if (runtime->hasFunction(0x12F418u)) {
        auto targetFn = runtime->lookupFunction(0x12F418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139F60u; }
        if (ctx->pc != 0x139F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fstat_0x12f418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139F60u; }
        if (ctx->pc != 0x139F60u) { return; }
    }
    ctx->pc = 0x139F60u;
    // 0x139f60: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x139f60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139f64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x139f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x139f68: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x139F68u;
    {
        const bool branch_taken_0x139f68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x139F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139F68u;
            // 0x139f6c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139f68) {
            ctx->pc = 0x139F80u;
            goto label_139f80;
        }
    }
    ctx->pc = 0x139F70u;
    // 0x139f70: 0x8e22c14c  lw          $v0, -0x3EB4($s1)
    ctx->pc = 0x139f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951244)));
    // 0x139f74: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x139F74u;
    {
        const bool branch_taken_0x139f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x139f74) {
            ctx->pc = 0x139F78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139F74u;
            // 0x139f78: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139F80u;
            goto label_139f80;
        }
    }
    ctx->pc = 0x139F7Cu;
    // 0x139f7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x139f7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_139f80:
    // 0x139f80: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x139f80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139f84: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x139f84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139f88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x139f88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x139F8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139F8Cu;
            // 0x139f90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x139F80u: goto label_139f80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x139F94u;
}
