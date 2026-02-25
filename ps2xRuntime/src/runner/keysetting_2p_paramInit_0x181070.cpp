#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: keysetting_2p_paramInit
// Address: 0x181070 - 0x1810a0
void keysetting_2p_paramInit_0x181070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("keysetting_2p_paramInit_0x181070");
#endif

    ctx->pc = 0x181070u;

    // 0x181070: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x181070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x181074: 0x3c03c080  lui         $v1, 0xC080
    ctx->pc = 0x181074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49280 << 16));
    // 0x181078: 0xac202b08  sw          $zero, 0x2B08($at)
    ctx->pc = 0x181078u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11016), GPR_U32(ctx, 0));
    // 0x18107c: 0x3c044344  lui         $a0, 0x4344
    ctx->pc = 0x18107cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17220 << 16));
    // 0x181080: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x181080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x181084: 0xac232b00  sw          $v1, 0x2B00($at)
    ctx->pc = 0x181084u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11008), GPR_U32(ctx, 3));
    // 0x181088: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x181088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x18108c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x18108cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x181090: 0xac2427e0  sw          $a0, 0x27E0($at)
    ctx->pc = 0x181090u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10208), GPR_U32(ctx, 4));
    // 0x181094: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x181094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x181098: 0x3e00008  jr          $ra
    ctx->pc = 0x181098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18109Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181098u;
            // 0x18109c: 0xa0233c80  sb          $v1, 0x3C80($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 15488), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1810A0u;
}
