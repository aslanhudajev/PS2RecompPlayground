#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _lseek_r
// Address: 0x13a518 - 0x13a578
void _lseek_r_0x13a518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_lseek_r_0x13a518");
#endif

    ctx->pc = 0x13a518u;

    // 0x13a518: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13a518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13a51c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13a51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13a520: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13a520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a524: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x13a524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x13a528: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x13a528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a52c: 0x3c110045  lui         $s1, 0x45
    ctx->pc = 0x13a52cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)69 << 16));
    // 0x13a530: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x13a530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a534: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13a534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13a538: 0xae20c14c  sw          $zero, -0x3EB4($s1)
    ctx->pc = 0x13a538u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294951244), GPR_U32(ctx, 0));
    // 0x13a53c: 0xc04bcd6  jal         func_12F358
    ctx->pc = 0x13A53Cu;
    SET_GPR_U32(ctx, 31, 0x13A544u);
    ctx->pc = 0x13A540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13A53Cu;
            // 0x13a540: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F358u;
    if (runtime->hasFunction(0x12F358u)) {
        auto targetFn = runtime->lookupFunction(0x12F358u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A544u; }
        if (ctx->pc != 0x13A544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        lseek_0x12f358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A544u; }
        if (ctx->pc != 0x13A544u) { return; }
    }
    ctx->pc = 0x13A544u;
    // 0x13a544: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13a544u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a548: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x13a548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13a54c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13A54Cu;
    {
        const bool branch_taken_0x13a54c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13A550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A54Cu;
            // 0x13a550: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a54c) {
            ctx->pc = 0x13A564u;
            goto label_13a564;
        }
    }
    ctx->pc = 0x13A554u;
    // 0x13a554: 0x8e22c14c  lw          $v0, -0x3EB4($s1)
    ctx->pc = 0x13a554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951244)));
    // 0x13a558: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x13A558u;
    {
        const bool branch_taken_0x13a558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a558) {
            ctx->pc = 0x13A55Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A558u;
            // 0x13a55c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A564u;
            goto label_13a564;
        }
    }
    ctx->pc = 0x13A560u;
    // 0x13a560: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13a560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13a564:
    // 0x13a564: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x13a564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a568: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x13a568u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a56c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13a56cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a570: 0x3e00008  jr          $ra
    ctx->pc = 0x13A570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A570u;
            // 0x13a574: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13A564u: goto label_13a564;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13A578u;
}
