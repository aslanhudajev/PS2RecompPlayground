#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ItemHitFunction_BOMB
// Address: 0x196e20 - 0x196e90
void ItemHitFunction_BOMB_0x196e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ItemHitFunction_BOMB_0x196e20");
#endif

    ctx->pc = 0x196e20u;

    // 0x196e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x196e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x196e24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x196e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x196e28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x196e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x196e2c: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x196e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x196e30: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x196e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x196e34: 0x18800012  blez        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x196E34u;
    {
        const bool branch_taken_0x196e34 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x196E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196E34u;
            // 0x196e38: 0x8cb0000c  lw          $s0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196e34) {
            ctx->pc = 0x196E80u;
            goto label_196e80;
        }
    }
    ctx->pc = 0x196E3Cu;
    // 0x196e3c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x196e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x196e40: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x196E40u;
    {
        const bool branch_taken_0x196e40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x196e40) {
            ctx->pc = 0x196E50u;
            goto label_196e50;
        }
    }
    ctx->pc = 0x196E48u;
    // 0x196e48: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x196E48u;
    {
        const bool branch_taken_0x196e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196e48) {
            ctx->pc = 0x196E80u;
            goto label_196e80;
        }
    }
    ctx->pc = 0x196E50u;
label_196e50:
    // 0x196e50: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x196e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x196e54: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x196e54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x196e58: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x196e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x196e5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x196e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x196e60: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x196e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x196e64: 0xc4cc000c  lwc1        $f12, 0xC($a2)
    ctx->pc = 0x196e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x196e68: 0xc4cd0010  lwc1        $f13, 0x10($a2)
    ctx->pc = 0x196e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x196e6c: 0xc05d080  jal         func_174200
    ctx->pc = 0x196E6Cu;
    SET_GPR_U32(ctx, 31, 0x196E74u);
    ctx->pc = 0x196E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196E6Cu;
            // 0x196e70: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196E74u; }
        if (ctx->pc != 0x196E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196E74u; }
        if (ctx->pc != 0x196E74u) { return; }
    }
    ctx->pc = 0x196E74u;
    // 0x196e74: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x196e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x196e78: 0xc055124  jal         func_154490
    ctx->pc = 0x196E78u;
    SET_GPR_U32(ctx, 31, 0x196E80u);
    ctx->pc = 0x196E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196E78u;
            // 0x196e7c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196E80u; }
        if (ctx->pc != 0x196E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196E80u; }
        if (ctx->pc != 0x196E80u) { return; }
    }
    ctx->pc = 0x196E80u;
label_196e80:
    // 0x196e80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x196e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196e84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x196e84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196e88: 0x3e00008  jr          $ra
    ctx->pc = 0x196E88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196E88u;
            // 0x196e8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196E50u: goto label_196e50;
            case 0x196E80u: goto label_196e80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x196E90u;
}
