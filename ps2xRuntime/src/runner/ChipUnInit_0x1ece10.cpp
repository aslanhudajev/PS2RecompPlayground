#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ChipUnInit
// Address: 0x1ece10 - 0x1ece60
void ChipUnInit_0x1ece10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ChipUnInit_0x1ece10");
#endif

    ctx->pc = 0x1ece10u;

    // 0x1ece10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ece10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ece14: 0x3c010044  lui         $at, 0x44
    ctx->pc = 0x1ece14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)68 << 16));
    // 0x1ece18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ece18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ece1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ece1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ece20: 0x8c243838  lw          $a0, 0x3838($at)
    ctx->pc = 0x1ece20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 14392)));
    // 0x1ece24: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1ECE24u;
    {
        const bool branch_taken_0x1ece24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ece24) {
            ctx->pc = 0x1ECE50u;
            goto label_1ece50;
        }
    }
    ctx->pc = 0x1ECE2Cu;
    // 0x1ece2c: 0x0  nop
    ctx->pc = 0x1ece2cu;
    // NOP
label_1ece30:
    // 0x1ece30: 0xc07b398  jal         func_1ECE60
    ctx->pc = 0x1ECE30u;
    SET_GPR_U32(ctx, 31, 0x1ECE38u);
    ctx->pc = 0x1ECE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECE30u;
            // 0x1ece34: 0x8c90003c  lw          $s0, 0x3C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE60u;
    if (runtime->hasFunction(0x1ECE60u)) {
        auto targetFn = runtime->lookupFunction(0x1ECE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECE38u; }
        if (ctx->pc != 0x1ECE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ChipFree_0x1ece60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECE38u; }
        if (ctx->pc != 0x1ECE38u) { return; }
    }
    ctx->pc = 0x1ECE38u;
    // 0x1ece38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ece38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ece3c: 0x0  nop
    ctx->pc = 0x1ece3cu;
    // NOP
    // 0x1ece40: 0x0  nop
    ctx->pc = 0x1ece40u;
    // NOP
    // 0x1ece44: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1ECE44u;
    {
        const bool branch_taken_0x1ece44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ece44) {
            ctx->pc = 0x1ECE30u;
            goto label_1ece30;
        }
    }
    ctx->pc = 0x1ECE4Cu;
    // 0x1ece4c: 0x0  nop
    ctx->pc = 0x1ece4cu;
    // NOP
label_1ece50:
    // 0x1ece50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ece50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ece54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ece54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ece58: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECE58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECE58u;
            // 0x1ece5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ECE30u: goto label_1ece30;
            case 0x1ECE50u: goto label_1ece50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ECE60u;
}
