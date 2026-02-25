#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ItemUnInit
// Address: 0x197120 - 0x197170
void ItemUnInit_0x197120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ItemUnInit_0x197120");
#endif

    ctx->pc = 0x197120u;

    // 0x197120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x197120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x197124: 0x3c010042  lui         $at, 0x42
    ctx->pc = 0x197124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)66 << 16));
    // 0x197128: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x197128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19712c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19712cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x197130: 0x8c241608  lw          $a0, 0x1608($at)
    ctx->pc = 0x197130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 5640)));
    // 0x197134: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x197134u;
    {
        const bool branch_taken_0x197134 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x197134) {
            ctx->pc = 0x197160u;
            goto label_197160;
        }
    }
    ctx->pc = 0x19713Cu;
    // 0x19713c: 0x0  nop
    ctx->pc = 0x19713cu;
    // NOP
label_197140:
    // 0x197140: 0xc065c5c  jal         func_197170
    ctx->pc = 0x197140u;
    SET_GPR_U32(ctx, 31, 0x197148u);
    ctx->pc = 0x197144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197140u;
            // 0x197144: 0x8c900034  lw          $s0, 0x34($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197170u;
    if (runtime->hasFunction(0x197170u)) {
        auto targetFn = runtime->lookupFunction(0x197170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197148u; }
        if (ctx->pc != 0x197148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemFree_0x197170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197148u; }
        if (ctx->pc != 0x197148u) { return; }
    }
    ctx->pc = 0x197148u;
    // 0x197148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19714c: 0x0  nop
    ctx->pc = 0x19714cu;
    // NOP
    // 0x197150: 0x0  nop
    ctx->pc = 0x197150u;
    // NOP
    // 0x197154: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x197154u;
    {
        const bool branch_taken_0x197154 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x197154) {
            ctx->pc = 0x197140u;
            goto label_197140;
        }
    }
    ctx->pc = 0x19715Cu;
    // 0x19715c: 0x0  nop
    ctx->pc = 0x19715cu;
    // NOP
label_197160:
    // 0x197160: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x197160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197164: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x197164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197168: 0x3e00008  jr          $ra
    ctx->pc = 0x197168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19716Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197168u;
            // 0x19716c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197140u: goto label_197140;
            case 0x197160u: goto label_197160;
            default: break;
        }
        return;
    }
    ctx->pc = 0x197170u;
}
