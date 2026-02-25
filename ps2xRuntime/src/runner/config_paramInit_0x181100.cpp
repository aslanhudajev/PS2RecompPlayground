#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: config_paramInit
// Address: 0x181100 - 0x181130
void config_paramInit_0x181100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("config_paramInit_0x181100");
#endif

    ctx->pc = 0x181100u;

    // 0x181100: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x181100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x181104: 0x3c03c362  lui         $v1, 0xC362
    ctx->pc = 0x181104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50018 << 16));
    // 0x181108: 0xac202b20  sw          $zero, 0x2B20($at)
    ctx->pc = 0x181108u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11040), GPR_U32(ctx, 0));
    // 0x18110c: 0x3c044294  lui         $a0, 0x4294
    ctx->pc = 0x18110cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17044 << 16));
    // 0x181110: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x181110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x181114: 0xac232b18  sw          $v1, 0x2B18($at)
    ctx->pc = 0x181114u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11032), GPR_U32(ctx, 3));
    // 0x181118: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x181118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x18111c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x18111cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x181120: 0xac2427d8  sw          $a0, 0x27D8($at)
    ctx->pc = 0x181120u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10200), GPR_U32(ctx, 4));
    // 0x181124: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x181124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x181128: 0x3e00008  jr          $ra
    ctx->pc = 0x181128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18112Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181128u;
            // 0x18112c: 0xa0233c88  sb          $v1, 0x3C88($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 15496), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181130u;
}
