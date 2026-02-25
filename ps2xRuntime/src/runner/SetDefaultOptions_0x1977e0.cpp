#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SetDefaultOptions
// Address: 0x1977e0 - 0x19781c
void SetDefaultOptions_0x1977e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SetDefaultOptions_0x1977e0");
#endif

    ctx->pc = 0x1977e0u;

    // 0x1977e0: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1977e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1977e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1977e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1977e8: 0xac20182c  sw          $zero, 0x182C($at)
    ctx->pc = 0x1977e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6188), GPR_U32(ctx, 0));
    // 0x1977ec: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1977ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1977f0: 0xac201830  sw          $zero, 0x1830($at)
    ctx->pc = 0x1977f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6192), GPR_U32(ctx, 0));
    // 0x1977f4: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x1977f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x1977f8: 0xac231614  sw          $v1, 0x1614($at)
    ctx->pc = 0x1977f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5652), GPR_U32(ctx, 3));
    // 0x1977fc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1977fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197800: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197804: 0xac231618  sw          $v1, 0x1618($at)
    ctx->pc = 0x197804u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5656), GPR_U32(ctx, 3));
    // 0x197808: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x19780c: 0xac23161c  sw          $v1, 0x161C($at)
    ctx->pc = 0x19780cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 5660), GPR_U32(ctx, 3));
    // 0x197810: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x197810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x197814: 0x3e00008  jr          $ra
    ctx->pc = 0x197814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197814u;
            // 0x197818: 0xac231620  sw          $v1, 0x1620($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 5664), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19781Cu;
}
