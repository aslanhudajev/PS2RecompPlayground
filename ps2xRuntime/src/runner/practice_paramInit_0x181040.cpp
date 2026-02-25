#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: practice_paramInit
// Address: 0x181040 - 0x181070
void practice_paramInit_0x181040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("practice_paramInit_0x181040");
#endif

    ctx->pc = 0x181040u;

    // 0x181040: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x181040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x181044: 0x3c03c362  lui         $v1, 0xC362
    ctx->pc = 0x181044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50018 << 16));
    // 0x181048: 0xac202b20  sw          $zero, 0x2B20($at)
    ctx->pc = 0x181048u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11040), GPR_U32(ctx, 0));
    // 0x18104c: 0x3c04c240  lui         $a0, 0xC240
    ctx->pc = 0x18104cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49728 << 16));
    // 0x181050: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x181050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x181054: 0xac232b18  sw          $v1, 0x2B18($at)
    ctx->pc = 0x181054u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11032), GPR_U32(ctx, 3));
    // 0x181058: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x181058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x18105c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x18105cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x181060: 0xac2427d8  sw          $a0, 0x27D8($at)
    ctx->pc = 0x181060u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10200), GPR_U32(ctx, 4));
    // 0x181064: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x181064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x181068: 0x3e00008  jr          $ra
    ctx->pc = 0x181068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18106Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181068u;
            // 0x18106c: 0xa0233c70  sb          $v1, 0x3C70($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 15472), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181070u;
}
