#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _write_r
// Address: 0x13f2a8 - 0x13f308
void _write_r_0x13f2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_write_r_0x13f2a8");
#endif

    ctx->pc = 0x13f2a8u;

    // 0x13f2a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13f2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13f2ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13f2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13f2b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13f2b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f2b4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x13f2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x13f2b8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x13f2b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f2bc: 0x3c110045  lui         $s1, 0x45
    ctx->pc = 0x13f2bcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)69 << 16));
    // 0x13f2c0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x13f2c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f2c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13f2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13f2c8: 0xae20c14c  sw          $zero, -0x3EB4($s1)
    ctx->pc = 0x13f2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294951244), GPR_U32(ctx, 0));
    // 0x13f2cc: 0xc04bc8a  jal         func_12F228
    ctx->pc = 0x13F2CCu;
    SET_GPR_U32(ctx, 31, 0x13F2D4u);
    ctx->pc = 0x13F2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F2CCu;
            // 0x13f2d0: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F228u;
    if (runtime->hasFunction(0x12F228u)) {
        auto targetFn = runtime->lookupFunction(0x12F228u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F2D4u; }
        if (ctx->pc != 0x13F2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        write_0x12f228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F2D4u; }
        if (ctx->pc != 0x13F2D4u) { return; }
    }
    ctx->pc = 0x13F2D4u;
    // 0x13f2d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13f2d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f2d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13f2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13f2dc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13F2DCu;
    {
        const bool branch_taken_0x13f2dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13F2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F2DCu;
            // 0x13f2e0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f2dc) {
            ctx->pc = 0x13F2F4u;
            goto label_13f2f4;
        }
    }
    ctx->pc = 0x13F2E4u;
    // 0x13f2e4: 0x8e22c14c  lw          $v0, -0x3EB4($s1)
    ctx->pc = 0x13f2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951244)));
    // 0x13f2e8: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x13F2E8u;
    {
        const bool branch_taken_0x13f2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f2e8) {
            ctx->pc = 0x13F2ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13F2E8u;
            // 0x13f2ec: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13F2F4u;
            goto label_13f2f4;
        }
    }
    ctx->pc = 0x13F2F0u;
    // 0x13f2f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13f2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13f2f4:
    // 0x13f2f4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x13f2f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f2f8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x13f2f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f2fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13f2fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f300: 0x3e00008  jr          $ra
    ctx->pc = 0x13F300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F300u;
            // 0x13f304: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13F2F4u: goto label_13f2f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13F308u;
}
