#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: isRankin
// Address: 0x198450 - 0x198498
void isRankin_0x198450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("isRankin_0x198450");
#endif

    ctx->pc = 0x198450u;

    // 0x198450: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x198450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x198454: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x198454u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198458: 0x24a51610  addiu       $a1, $a1, 0x1610
    ctx->pc = 0x198458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5648));
    // 0x19845c: 0x0  nop
    ctx->pc = 0x19845cu;
    // NOP
label_198460:
    // 0x198460: 0x8ca3004c  lw          $v1, 0x4C($a1)
    ctx->pc = 0x198460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x198464: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x198464u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x198468: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x198468u;
    {
        const bool branch_taken_0x198468 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x198468) {
            ctx->pc = 0x198478u;
            goto label_198478;
        }
    }
    ctx->pc = 0x198470u;
    // 0x198470: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x198470u;
    {
        const bool branch_taken_0x198470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x198470) {
            ctx->pc = 0x198490u;
            goto label_198490;
        }
    }
    ctx->pc = 0x198478u;
label_198478:
    // 0x198478: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x198478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19847c: 0x28430014  slti        $v1, $v0, 0x14
    ctx->pc = 0x19847cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x198480: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x198480u;
    {
        const bool branch_taken_0x198480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x198484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198480u;
            // 0x198484: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198480) {
            ctx->pc = 0x198460u;
            goto label_198460;
        }
    }
    ctx->pc = 0x198488u;
    // 0x198488: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x198488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19848c: 0x0  nop
    ctx->pc = 0x19848cu;
    // NOP
label_198490:
    // 0x198490: 0x3e00008  jr          $ra
    ctx->pc = 0x198490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198460u: goto label_198460;
            case 0x198478u: goto label_198478;
            case 0x198490u: goto label_198490;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198498u;
}
