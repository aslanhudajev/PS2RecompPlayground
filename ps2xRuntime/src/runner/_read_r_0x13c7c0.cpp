#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _read_r
// Address: 0x13c7c0 - 0x13c820
void _read_r_0x13c7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_read_r_0x13c7c0");
#endif

    ctx->pc = 0x13c7c0u;

    // 0x13c7c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13c7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13c7c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13c7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13c7c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13c7c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c7cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x13c7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x13c7d0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x13c7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c7d4: 0x3c110045  lui         $s1, 0x45
    ctx->pc = 0x13c7d4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)69 << 16));
    // 0x13c7d8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x13c7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c7dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13c7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13c7e0: 0xae20c14c  sw          $zero, -0x3EB4($s1)
    ctx->pc = 0x13c7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294951244), GPR_U32(ctx, 0));
    // 0x13c7e4: 0xc04bcaa  jal         func_12F2A8
    ctx->pc = 0x13C7E4u;
    SET_GPR_U32(ctx, 31, 0x13C7ECu);
    ctx->pc = 0x13C7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C7E4u;
            // 0x13c7e8: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F2A8u;
    if (runtime->hasFunction(0x12F2A8u)) {
        auto targetFn = runtime->lookupFunction(0x12F2A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C7ECu; }
        if (ctx->pc != 0x13C7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        read_0x12f2a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C7ECu; }
        if (ctx->pc != 0x13C7ECu) { return; }
    }
    ctx->pc = 0x13C7ECu;
    // 0x13c7ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13c7ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c7f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13c7f4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13C7F4u;
    {
        const bool branch_taken_0x13c7f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13C7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C7F4u;
            // 0x13c7f8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c7f4) {
            ctx->pc = 0x13C80Cu;
            goto label_13c80c;
        }
    }
    ctx->pc = 0x13C7FCu;
    // 0x13c7fc: 0x8e22c14c  lw          $v0, -0x3EB4($s1)
    ctx->pc = 0x13c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951244)));
    // 0x13c800: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x13C800u;
    {
        const bool branch_taken_0x13c800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c800) {
            ctx->pc = 0x13C804u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13C800u;
            // 0x13c804: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13C80Cu;
            goto label_13c80c;
        }
    }
    ctx->pc = 0x13C808u;
    // 0x13c808: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13c808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13c80c:
    // 0x13c80c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x13c80cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c810: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x13c810u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c814: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13c814u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c818: 0x3e00008  jr          $ra
    ctx->pc = 0x13C818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C818u;
            // 0x13c81c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13C80Cu: goto label_13c80c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13C820u;
}
