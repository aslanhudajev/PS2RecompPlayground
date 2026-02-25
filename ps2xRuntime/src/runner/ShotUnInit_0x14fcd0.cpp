#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ShotUnInit
// Address: 0x14fcd0 - 0x14fd20
void ShotUnInit_0x14fcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ShotUnInit_0x14fcd0");
#endif

    ctx->pc = 0x14fcd0u;

    // 0x14fcd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14fcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14fcd4: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x14fcd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x14fcd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14fcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14fcdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14fcdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14fce0: 0x8c242160  lw          $a0, 0x2160($at)
    ctx->pc = 0x14fce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 8544)));
    // 0x14fce4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x14FCE4u;
    {
        const bool branch_taken_0x14fce4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14fce4) {
            ctx->pc = 0x14FD10u;
            goto label_14fd10;
        }
    }
    ctx->pc = 0x14FCECu;
    // 0x14fcec: 0x0  nop
    ctx->pc = 0x14fcecu;
    // NOP
label_14fcf0:
    // 0x14fcf0: 0xc054a88  jal         func_152A20
    ctx->pc = 0x14FCF0u;
    SET_GPR_U32(ctx, 31, 0x14FCF8u);
    ctx->pc = 0x14FCF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FCF0u;
            // 0x14fcf4: 0x8c90004c  lw          $s0, 0x4C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (runtime->hasFunction(0x152A20u)) {
        auto targetFn = runtime->lookupFunction(0x152A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FCF8u; }
        if (ctx->pc != 0x14FCF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShotDeadFunction_0x152a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FCF8u; }
        if (ctx->pc != 0x14FCF8u) { return; }
    }
    ctx->pc = 0x14FCF8u;
    // 0x14fcf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14fcf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fcfc: 0x0  nop
    ctx->pc = 0x14fcfcu;
    // NOP
    // 0x14fd00: 0x0  nop
    ctx->pc = 0x14fd00u;
    // NOP
    // 0x14fd04: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14FD04u;
    {
        const bool branch_taken_0x14fd04 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14fd04) {
            ctx->pc = 0x14FCF0u;
            goto label_14fcf0;
        }
    }
    ctx->pc = 0x14FD0Cu;
    // 0x14fd0c: 0x0  nop
    ctx->pc = 0x14fd0cu;
    // NOP
label_14fd10:
    // 0x14fd10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14fd10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14fd14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14fd14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14fd18: 0x3e00008  jr          $ra
    ctx->pc = 0x14FD18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FD1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FD18u;
            // 0x14fd1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14FCF0u: goto label_14fcf0;
            case 0x14FD10u: goto label_14fd10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14FD20u;
}
