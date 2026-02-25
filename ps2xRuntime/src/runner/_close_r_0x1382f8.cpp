#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _close_r
// Address: 0x1382f8 - 0x138350
void _close_r_0x1382f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_close_r_0x1382f8");
#endif

    ctx->pc = 0x1382f8u;

    // 0x1382f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1382f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1382fc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1382fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x138300: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x138300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x138304: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x138304u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138308: 0x3c100045  lui         $s0, 0x45
    ctx->pc = 0x138308u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)69 << 16));
    // 0x13830c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13830cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x138310: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x138310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138314: 0xc04bcd2  jal         func_12F348
    ctx->pc = 0x138314u;
    SET_GPR_U32(ctx, 31, 0x13831Cu);
    ctx->pc = 0x138318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138314u;
            // 0x138318: 0xae00c14c  sw          $zero, -0x3EB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294951244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F348u;
    if (runtime->hasFunction(0x12F348u)) {
        auto targetFn = runtime->lookupFunction(0x12F348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13831Cu; }
        if (ctx->pc != 0x13831Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        close_0x12f348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13831Cu; }
        if (ctx->pc != 0x13831Cu) { return; }
    }
    ctx->pc = 0x13831Cu;
    // 0x13831c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13831cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138320: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x138320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x138324: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x138324u;
    {
        const bool branch_taken_0x138324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x138328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138324u;
            // 0x138328: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138324) {
            ctx->pc = 0x13833Cu;
            goto label_13833c;
        }
    }
    ctx->pc = 0x13832Cu;
    // 0x13832c: 0x8e02c14c  lw          $v0, -0x3EB4($s0)
    ctx->pc = 0x13832cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951244)));
    // 0x138330: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x138330u;
    {
        const bool branch_taken_0x138330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138330) {
            ctx->pc = 0x138334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x138330u;
            // 0x138334: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13833Cu;
            goto label_13833c;
        }
    }
    ctx->pc = 0x138338u;
    // 0x138338: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x138338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13833c:
    // 0x13833c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x13833cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138340: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x138340u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138344: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x138344u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138348: 0x3e00008  jr          $ra
    ctx->pc = 0x138348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13834Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138348u;
            // 0x13834c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13833Cu: goto label_13833c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x138350u;
}
