#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotBloadCastDead
// Address: 0x195b10 - 0x195b48
void EnemyShotBloadCastDead_0x195b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotBloadCastDead_0x195b10");
#endif

    ctx->pc = 0x195b10u;

    // 0x195b10: 0x3c010040  lui         $at, 0x40
    ctx->pc = 0x195b10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)64 << 16));
    // 0x195b14: 0x8c240238  lw          $a0, 0x238($at)
    ctx->pc = 0x195b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 568)));
    // 0x195b18: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x195B18u;
    {
        const bool branch_taken_0x195b18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x195b18) {
            ctx->pc = 0x195B40u;
            goto label_195b40;
        }
    }
    ctx->pc = 0x195B20u;
label_195b20:
    // 0x195b20: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x195b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x195b24: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x195b24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x195b28: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x195b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195b2c: 0x0  nop
    ctx->pc = 0x195b2cu;
    // NOP
    // 0x195b30: 0x0  nop
    ctx->pc = 0x195b30u;
    // NOP
    // 0x195b34: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x195B34u;
    {
        const bool branch_taken_0x195b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x195b34) {
            ctx->pc = 0x195B20u;
            goto label_195b20;
        }
    }
    ctx->pc = 0x195B3Cu;
    // 0x195b3c: 0x0  nop
    ctx->pc = 0x195b3cu;
    // NOP
label_195b40:
    // 0x195b40: 0x3e00008  jr          $ra
    ctx->pc = 0x195B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195B20u: goto label_195b20;
            case 0x195B40u: goto label_195b40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x195B48u;
}
