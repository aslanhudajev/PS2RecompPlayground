#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Enemy_BloadCast_All_Hp0
// Address: 0x16e730 - 0x16e770
void Enemy_BloadCast_All_Hp0_0x16e730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Enemy_BloadCast_All_Hp0_0x16e730");
#endif

    ctx->pc = 0x16e730u;

    // 0x16e730: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x16e730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x16e734: 0x8c234ce0  lw          $v1, 0x4CE0($at)
    ctx->pc = 0x16e734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19680)));
    // 0x16e738: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x16E738u;
    {
        const bool branch_taken_0x16e738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e738) {
            ctx->pc = 0x16E768u;
            goto label_16e768;
        }
    }
    ctx->pc = 0x16E740u;
label_16e740:
    // 0x16e740: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16E740u;
    {
        const bool branch_taken_0x16e740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x16e740) {
            ctx->pc = 0x16E750u;
            goto label_16e750;
        }
    }
    ctx->pc = 0x16E748u;
    // 0x16e748: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x16e748u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x16e74c: 0x0  nop
    ctx->pc = 0x16e74cu;
    // NOP
label_16e750:
    // 0x16e750: 0x8c630108  lw          $v1, 0x108($v1)
    ctx->pc = 0x16e750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x16e754: 0x0  nop
    ctx->pc = 0x16e754u;
    // NOP
    // 0x16e758: 0x0  nop
    ctx->pc = 0x16e758u;
    // NOP
    // 0x16e75c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x16E75Cu;
    {
        const bool branch_taken_0x16e75c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e75c) {
            ctx->pc = 0x16E740u;
            goto label_16e740;
        }
    }
    ctx->pc = 0x16E764u;
    // 0x16e764: 0x0  nop
    ctx->pc = 0x16e764u;
    // NOP
label_16e768:
    // 0x16e768: 0x3e00008  jr          $ra
    ctx->pc = 0x16E768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16E740u: goto label_16e740;
            case 0x16E750u: goto label_16e750;
            case 0x16E768u: goto label_16e768;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16E770u;
}
