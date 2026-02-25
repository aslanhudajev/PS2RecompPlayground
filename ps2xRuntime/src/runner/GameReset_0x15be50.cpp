#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: GameReset
// Address: 0x15be50 - 0x15beec
void GameReset_0x15be50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("GameReset_0x15be50");
#endif

    ctx->pc = 0x15be50u;

    // 0x15be50: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15be50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15be54: 0xac203510  sw          $zero, 0x3510($at)
    ctx->pc = 0x15be54u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13584), GPR_U32(ctx, 0));
    // 0x15be58: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15be58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15be5c: 0xac203514  sw          $zero, 0x3514($at)
    ctx->pc = 0x15be5cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13588), GPR_U32(ctx, 0));
    // 0x15be60: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15be60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15be64: 0xac203524  sw          $zero, 0x3524($at)
    ctx->pc = 0x15be64u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13604), GPR_U32(ctx, 0));
    // 0x15be68: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15be68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15be6c: 0xac203530  sw          $zero, 0x3530($at)
    ctx->pc = 0x15be6cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13616), GPR_U32(ctx, 0));
    // 0x15be70: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15be70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15be74: 0xac203534  sw          $zero, 0x3534($at)
    ctx->pc = 0x15be74u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13620), GPR_U32(ctx, 0));
    // 0x15be78: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15be78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15be7c: 0xac203538  sw          $zero, 0x3538($at)
    ctx->pc = 0x15be7cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13624), GPR_U32(ctx, 0));
    // 0x15be80: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15be80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15be84: 0xac20353c  sw          $zero, 0x353C($at)
    ctx->pc = 0x15be84u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13628), GPR_U32(ctx, 0));
    // 0x15be88: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15be88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15be8c: 0xac203540  sw          $zero, 0x3540($at)
    ctx->pc = 0x15be8cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13632), GPR_U32(ctx, 0));
    // 0x15be90: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15be90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15be94: 0xac203544  sw          $zero, 0x3544($at)
    ctx->pc = 0x15be94u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13636), GPR_U32(ctx, 0));
    // 0x15be98: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15be98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15be9c: 0xac203548  sw          $zero, 0x3548($at)
    ctx->pc = 0x15be9cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13640), GPR_U32(ctx, 0));
    // 0x15bea0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15bea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15bea4: 0xac20354c  sw          $zero, 0x354C($at)
    ctx->pc = 0x15bea4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13644), GPR_U32(ctx, 0));
    // 0x15bea8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15bea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15beac: 0xac203550  sw          $zero, 0x3550($at)
    ctx->pc = 0x15beacu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13648), GPR_U32(ctx, 0));
    // 0x15beb0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15beb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15beb4: 0xac203554  sw          $zero, 0x3554($at)
    ctx->pc = 0x15beb4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13652), GPR_U32(ctx, 0));
    // 0x15beb8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15beb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15bebc: 0xac203558  sw          $zero, 0x3558($at)
    ctx->pc = 0x15bebcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13656), GPR_U32(ctx, 0));
    // 0x15bec0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15bec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15bec4: 0xac20355c  sw          $zero, 0x355C($at)
    ctx->pc = 0x15bec4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13660), GPR_U32(ctx, 0));
    // 0x15bec8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15bec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15becc: 0xac203560  sw          $zero, 0x3560($at)
    ctx->pc = 0x15beccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13664), GPR_U32(ctx, 0));
    // 0x15bed0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15bed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15bed4: 0xac203564  sw          $zero, 0x3564($at)
    ctx->pc = 0x15bed4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13668), GPR_U32(ctx, 0));
    // 0x15bed8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15bed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15bedc: 0xac203568  sw          $zero, 0x3568($at)
    ctx->pc = 0x15bedcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13672), GPR_U32(ctx, 0));
    // 0x15bee0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15bee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15bee4: 0x3e00008  jr          $ra
    ctx->pc = 0x15BEE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BEE4u;
            // 0x15bee8: 0xac20356c  sw          $zero, 0x356C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13676), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15BEECu;
}
