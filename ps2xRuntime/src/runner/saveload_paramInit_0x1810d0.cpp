#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: saveload_paramInit
// Address: 0x1810d0 - 0x181100
void saveload_paramInit_0x1810d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("saveload_paramInit_0x1810d0");
#endif

    ctx->pc = 0x1810d0u;

    // 0x1810d0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1810d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1810d4: 0x3c03c362  lui         $v1, 0xC362
    ctx->pc = 0x1810d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50018 << 16));
    // 0x1810d8: 0xac202b20  sw          $zero, 0x2B20($at)
    ctx->pc = 0x1810d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11040), GPR_U32(ctx, 0));
    // 0x1810dc: 0x3c044294  lui         $a0, 0x4294
    ctx->pc = 0x1810dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17044 << 16));
    // 0x1810e0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1810e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1810e4: 0xac232b18  sw          $v1, 0x2B18($at)
    ctx->pc = 0x1810e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11032), GPR_U32(ctx, 3));
    // 0x1810e8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1810e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1810ec: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1810ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1810f0: 0xac2427d8  sw          $a0, 0x27D8($at)
    ctx->pc = 0x1810f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10200), GPR_U32(ctx, 4));
    // 0x1810f4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x1810f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x1810f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1810F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1810FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1810F8u;
            // 0x1810fc: 0xa0233c78  sb          $v1, 0x3C78($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 15480), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181100u;
}
