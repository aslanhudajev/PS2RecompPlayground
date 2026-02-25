#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: gameCharaselInit
// Address: 0x15ac00 - 0x15ac48
void gameCharaselInit_0x15ac00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("gameCharaselInit_0x15ac00");
#endif

    ctx->pc = 0x15ac00u;

    // 0x15ac00: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15ac00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15ac04: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x15ac04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x15ac08: 0xac202cf8  sw          $zero, 0x2CF8($at)
    ctx->pc = 0x15ac08u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11512), GPR_U32(ctx, 0));
    // 0x15ac0c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15ac0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15ac10: 0xac202cf0  sw          $zero, 0x2CF0($at)
    ctx->pc = 0x15ac10u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11504), GPR_U32(ctx, 0));
    // 0x15ac14: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15ac14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15ac18: 0xac202ce8  sw          $zero, 0x2CE8($at)
    ctx->pc = 0x15ac18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11496), GPR_U32(ctx, 0));
    // 0x15ac1c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15ac1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15ac20: 0xac232ce0  sw          $v1, 0x2CE0($at)
    ctx->pc = 0x15ac20u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11488), GPR_U32(ctx, 3));
    // 0x15ac24: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15ac24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15ac28: 0xac232ce4  sw          $v1, 0x2CE4($at)
    ctx->pc = 0x15ac28u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11492), GPR_U32(ctx, 3));
    // 0x15ac2c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15ac2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15ac30: 0xac202cfc  sw          $zero, 0x2CFC($at)
    ctx->pc = 0x15ac30u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11516), GPR_U32(ctx, 0));
    // 0x15ac34: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15ac34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15ac38: 0xac202cf4  sw          $zero, 0x2CF4($at)
    ctx->pc = 0x15ac38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11508), GPR_U32(ctx, 0));
    // 0x15ac3c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15ac3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15ac40: 0x3e00008  jr          $ra
    ctx->pc = 0x15AC40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15AC40u;
            // 0x15ac44: 0xac202cec  sw          $zero, 0x2CEC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11500), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15AC48u;
}
