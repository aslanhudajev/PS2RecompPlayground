#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: CharaselParamInit
// Address: 0x15cd40 - 0x15cd88
void CharaselParamInit_0x15cd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("CharaselParamInit_0x15cd40");
#endif

    ctx->pc = 0x15cd40u;

    // 0x15cd40: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15cd40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15cd44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15cd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15cd48: 0xac203578  sw          $zero, 0x3578($at)
    ctx->pc = 0x15cd48u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13688), GPR_U32(ctx, 0));
    // 0x15cd4c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15cd4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15cd50: 0xac203580  sw          $zero, 0x3580($at)
    ctx->pc = 0x15cd50u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13696), GPR_U32(ctx, 0));
    // 0x15cd54: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15cd54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15cd58: 0xac239ce0  sw          $v1, -0x6320($at)
    ctx->pc = 0x15cd58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941920), GPR_U32(ctx, 3));
    // 0x15cd5c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15cd5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15cd60: 0xac203588  sw          $zero, 0x3588($at)
    ctx->pc = 0x15cd60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13704), GPR_U32(ctx, 0));
    // 0x15cd64: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15cd64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15cd68: 0xac203590  sw          $zero, 0x3590($at)
    ctx->pc = 0x15cd68u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13712), GPR_U32(ctx, 0));
    // 0x15cd6c: 0x3c010022  lui         $at, 0x22
    ctx->pc = 0x15cd6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)34 << 16));
    // 0x15cd70: 0xac209ce8  sw          $zero, -0x6318($at)
    ctx->pc = 0x15cd70u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294941928), GPR_U32(ctx, 0));
    // 0x15cd74: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15cd74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15cd78: 0xac203598  sw          $zero, 0x3598($at)
    ctx->pc = 0x15cd78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13720), GPR_U32(ctx, 0));
    // 0x15cd7c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x15cd7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15cd80: 0x3e00008  jr          $ra
    ctx->pc = 0x15CD80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CD80u;
            // 0x15cd84: 0xac2035a0  sw          $zero, 0x35A0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 13728), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15CD88u;
}
