#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _sbrk_r
// Address: 0x13c8a0 - 0x13c8fc
void _sbrk_r_0x13c8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_sbrk_r_0x13c8a0");
#endif

    ctx->pc = 0x13c8a0u;

    // 0x13c8a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13c8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13c8a4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x13c8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x13c8a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13c8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13c8ac: 0x3c110045  lui         $s1, 0x45
    ctx->pc = 0x13c8acu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)69 << 16));
    // 0x13c8b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13c8b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c8b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13c8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13c8b8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x13c8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c8bc: 0xc04bcd8  jal         func_12F360
    ctx->pc = 0x13C8BCu;
    SET_GPR_U32(ctx, 31, 0x13C8C4u);
    ctx->pc = 0x13C8C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C8BCu;
            // 0x13c8c0: 0xae20c14c  sw          $zero, -0x3EB4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294951244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F360u;
    if (runtime->hasFunction(0x12F360u)) {
        auto targetFn = runtime->lookupFunction(0x12F360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C8C4u; }
        if (ctx->pc != 0x13C8C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sbrk_0x12f360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C8C4u; }
        if (ctx->pc != 0x13C8C4u) { return; }
    }
    ctx->pc = 0x13C8C4u;
    // 0x13c8c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13c8c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c8c8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x13c8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x13c8cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13c8ccu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x13c8d0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13C8D0u;
    {
        const bool branch_taken_0x13c8d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13C8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C8D0u;
            // 0x13c8d4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c8d0) {
            ctx->pc = 0x13C8E8u;
            goto label_13c8e8;
        }
    }
    ctx->pc = 0x13C8D8u;
    // 0x13c8d8: 0x8e22c14c  lw          $v0, -0x3EB4($s1)
    ctx->pc = 0x13c8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951244)));
    // 0x13c8dc: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x13C8DCu;
    {
        const bool branch_taken_0x13c8dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c8dc) {
            ctx->pc = 0x13C8E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13C8DCu;
            // 0x13c8e0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13C8E8u;
            goto label_13c8e8;
        }
    }
    ctx->pc = 0x13C8E4u;
    // 0x13c8e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13c8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13c8e8:
    // 0x13c8e8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x13c8e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c8ec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x13c8ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c8f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13c8f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c8f4: 0x3e00008  jr          $ra
    ctx->pc = 0x13C8F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C8F4u;
            // 0x13c8f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13C8E8u: goto label_13c8e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13C8FCu;
}
