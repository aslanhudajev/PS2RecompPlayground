#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _read_r
// Address: 0x130e48 - 0x130ea8
void _read_r_0x130e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x130e48u;

    // 0x130e48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x130e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x130e4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130e50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x130e50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e54: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x130e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x130e58: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x130e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e5c: 0x3c110017  lui         $s1, 0x17
    ctx->pc = 0x130e5cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)23 << 16));
    // 0x130e60: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x130e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x130e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x130e68: 0xae205fe0  sw          $zero, 0x5FE0($s1)
    ctx->pc = 0x130e68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24544), GPR_U32(ctx, 0));
    // 0x130e6c: 0xc043a10  jal         func_10E840
    ctx->pc = 0x130E6Cu;
    SET_GPR_U32(ctx, 31, 0x130E74u);
    ctx->pc = 0x130E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130E6Cu;
            // 0x130e70: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E840u;
    if (runtime->hasFunction(0x10E840u)) {
        auto targetFn = runtime->lookupFunction(0x10E840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130E74u; }
        if (ctx->pc != 0x130E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        read_0x10e840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130E74u; }
        if (ctx->pc != 0x130E74u) { return; }
    }
    ctx->pc = 0x130E74u;
    // 0x130e74: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x130e74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x130e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x130e7c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x130E7Cu;
    {
        const bool branch_taken_0x130e7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x130E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130E7Cu;
            // 0x130e80: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130e7c) {
            ctx->pc = 0x130E94u;
            goto label_130e94;
        }
    }
    ctx->pc = 0x130E84u;
    // 0x130e84: 0x8e225fe0  lw          $v0, 0x5FE0($s1)
    ctx->pc = 0x130e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24544)));
    // 0x130e88: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x130E88u;
    {
        const bool branch_taken_0x130e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x130e88) {
            ctx->pc = 0x130E8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x130E88u;
            // 0x130e8c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x130E94u;
            goto label_130e94;
        }
    }
    ctx->pc = 0x130E90u;
    // 0x130e90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x130e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_130e94:
    // 0x130e94: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x130e94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e98: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x130e98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130e9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130e9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x130EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130EA0u;
            // 0x130ea4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130E94u: goto label_130e94;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130EA8u;
}
