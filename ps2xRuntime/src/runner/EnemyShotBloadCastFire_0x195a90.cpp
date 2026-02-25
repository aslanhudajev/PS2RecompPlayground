#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotBloadCastFire
// Address: 0x195a90 - 0x195ac8
void EnemyShotBloadCastFire_0x195a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotBloadCastFire_0x195a90");
#endif

    ctx->pc = 0x195a90u;

    // 0x195a90: 0x3c010040  lui         $at, 0x40
    ctx->pc = 0x195a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)64 << 16));
    // 0x195a94: 0x8c240238  lw          $a0, 0x238($at)
    ctx->pc = 0x195a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 568)));
    // 0x195a98: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x195A98u;
    {
        const bool branch_taken_0x195a98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x195a98) {
            ctx->pc = 0x195AC0u;
            goto label_195ac0;
        }
    }
    ctx->pc = 0x195AA0u;
label_195aa0:
    // 0x195aa0: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x195aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x195aa4: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x195aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x195aa8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x195aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195aac: 0x0  nop
    ctx->pc = 0x195aacu;
    // NOP
    // 0x195ab0: 0x0  nop
    ctx->pc = 0x195ab0u;
    // NOP
    // 0x195ab4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x195AB4u;
    {
        const bool branch_taken_0x195ab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x195ab4) {
            ctx->pc = 0x195AA0u;
            goto label_195aa0;
        }
    }
    ctx->pc = 0x195ABCu;
    // 0x195abc: 0x0  nop
    ctx->pc = 0x195abcu;
    // NOP
label_195ac0:
    // 0x195ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x195AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x195AA0u: goto label_195aa0;
            case 0x195AC0u: goto label_195ac0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x195AC8u;
}
