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
// Address: 0x12db48 - 0x12dba8
void _write_r_0x12db48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_write_r_0x12db48");
#endif

    ctx->pc = 0x12db48u;

    // 0x12db48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12db48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12db4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12db4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12db50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12db50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db54: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x12db54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x12db58: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12db58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db5c: 0x3c110017  lui         $s1, 0x17
    ctx->pc = 0x12db5cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)23 << 16));
    // 0x12db60: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x12db60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12db64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12db68: 0xae205fe0  sw          $zero, 0x5FE0($s1)
    ctx->pc = 0x12db68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24544), GPR_U32(ctx, 0));
    // 0x12db6c: 0xc0439f0  jal         func_10E7C0
    ctx->pc = 0x12DB6Cu;
    SET_GPR_U32(ctx, 31, 0x12DB74u);
    ctx->pc = 0x12DB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12DB6Cu;
            // 0x12db70: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E7C0u;
    if (runtime->hasFunction(0x10E7C0u)) {
        auto targetFn = runtime->lookupFunction(0x10E7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DB74u; }
        if (ctx->pc != 0x12DB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        write_0x10e7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DB74u; }
        if (ctx->pc != 0x12DB74u) { return; }
    }
    ctx->pc = 0x12DB74u;
    // 0x12db74: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12db74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12db78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12db7c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12DB7Cu;
    {
        const bool branch_taken_0x12db7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12DB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DB7Cu;
            // 0x12db80: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12db7c) {
            ctx->pc = 0x12DB94u;
            goto label_12db94;
        }
    }
    ctx->pc = 0x12DB84u;
    // 0x12db84: 0x8e225fe0  lw          $v0, 0x5FE0($s1)
    ctx->pc = 0x12db84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24544)));
    // 0x12db88: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x12DB88u;
    {
        const bool branch_taken_0x12db88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12db88) {
            ctx->pc = 0x12DB8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12DB88u;
            // 0x12db8c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12DB94u;
            goto label_12db94;
        }
    }
    ctx->pc = 0x12DB90u;
    // 0x12db90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12db90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12db94:
    // 0x12db94: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x12db94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12db98: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x12db98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12db9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12db9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12dba0: 0x3e00008  jr          $ra
    ctx->pc = 0x12DBA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DBA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DBA0u;
            // 0x12dba4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12DB94u: goto label_12db94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12DBA8u;
}
