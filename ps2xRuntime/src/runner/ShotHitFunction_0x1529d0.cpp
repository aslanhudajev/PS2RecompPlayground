#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ShotHitFunction
// Address: 0x1529d0 - 0x152a18
void ShotHitFunction_0x1529d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ShotHitFunction_0x1529d0");
#endif

    ctx->pc = 0x1529d0u;

    // 0x1529d0: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x1529d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1529d4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1529d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1529d8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1529d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1529dc: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1529DCu;
    {
        const bool branch_taken_0x1529dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1529dc) {
            ctx->pc = 0x152A10u;
            goto label_152a10;
        }
    }
    ctx->pc = 0x1529E4u;
    // 0x1529e4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1529e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1529e8: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1529E8u;
    {
        const bool branch_taken_0x1529e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1529e8) {
            ctx->pc = 0x152A10u;
            goto label_152a10;
        }
    }
    ctx->pc = 0x1529F0u;
    // 0x1529f0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1529f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1529f4: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1529F4u;
    {
        const bool branch_taken_0x1529f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1529f4) {
            ctx->pc = 0x152A10u;
            goto label_152a10;
        }
    }
    ctx->pc = 0x1529FCu;
    // 0x1529fc: 0x0  nop
    ctx->pc = 0x1529fcu;
    // NOP
    // 0x152a00: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x152a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x152a04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x152a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x152a08: 0xacc30030  sw          $v1, 0x30($a2)
    ctx->pc = 0x152a08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 3));
    // 0x152a0c: 0x0  nop
    ctx->pc = 0x152a0cu;
    // NOP
label_152a10:
    // 0x152a10: 0x3e00008  jr          $ra
    ctx->pc = 0x152A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x152A10u: goto label_152a10;
            default: break;
        }
        return;
    }
    ctx->pc = 0x152A18u;
}
