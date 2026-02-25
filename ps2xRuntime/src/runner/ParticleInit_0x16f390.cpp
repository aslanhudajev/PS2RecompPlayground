#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ParticleInit
// Address: 0x16f390 - 0x16f39c
void ParticleInit_0x16f390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ParticleInit_0x16f390");
#endif

    ctx->pc = 0x16f390u;

    // 0x16f390: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x16f390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x16f394: 0x3e00008  jr          $ra
    ctx->pc = 0x16F394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F394u;
            // 0x16f398: 0xac204cf0  sw          $zero, 0x4CF0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 19696), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16F39Cu;
}
