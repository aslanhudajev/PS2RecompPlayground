#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: EnemyShotHitFunction_Denai
// Address: 0x1943f0 - 0x194430
void EnemyShotHitFunction_Denai_0x1943f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("EnemyShotHitFunction_Denai_0x1943f0");
#endif

    ctx->pc = 0x1943f0u;

    // 0x1943f0: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1943f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1943f4: 0x8ce60018  lw          $a2, 0x18($a3)
    ctx->pc = 0x1943f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1943f8: 0x18c0000b  blez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x1943F8u;
    {
        const bool branch_taken_0x1943f8 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x1943f8) {
            ctx->pc = 0x194428u;
            goto label_194428;
        }
    }
    ctx->pc = 0x194400u;
    // 0x194400: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x194400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x194404: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x194404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x194408: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x194408u;
    {
        const bool branch_taken_0x194408 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x194408) {
            ctx->pc = 0x194428u;
            goto label_194428;
        }
    }
    ctx->pc = 0x194410u;
    // 0x194410: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x194410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194414: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x194414u;
    {
        const bool branch_taken_0x194414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x194414) {
            ctx->pc = 0x194428u;
            goto label_194428;
        }
    }
    ctx->pc = 0x19441Cu;
    // 0x19441c: 0x0  nop
    ctx->pc = 0x19441cu;
    // NOP
    // 0x194420: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x194420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x194424: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x194424u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
label_194428:
    // 0x194428: 0x3e00008  jr          $ra
    ctx->pc = 0x194428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x194428u: goto label_194428;
            default: break;
        }
        return;
    }
    ctx->pc = 0x194430u;
}
