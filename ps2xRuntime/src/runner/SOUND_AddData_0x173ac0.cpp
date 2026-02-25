#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SOUND_AddData
// Address: 0x173ac0 - 0x173af4
void SOUND_AddData_0x173ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SOUND_AddData_0x173ac0");
#endif

    ctx->pc = 0x173ac0u;

    // 0x173ac0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x173ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x173ac4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x173ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x173ac8: 0x8c250ab0  lw          $a1, 0xAB0($at)
    ctx->pc = 0x173ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2736)));
    // 0x173acc: 0x24631780  addiu       $v1, $v1, 0x1780
    ctx->pc = 0x173accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6016));
    // 0x173ad0: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x173ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x173ad4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x173ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x173ad8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x173ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x173adc: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x173adcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x173ae0: 0x8c230ab0  lw          $v1, 0xAB0($at)
    ctx->pc = 0x173ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2736)));
    // 0x173ae4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x173ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x173ae8: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x173ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x173aec: 0x3e00008  jr          $ra
    ctx->pc = 0x173AECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173AECu;
            // 0x173af0: 0xac230ab0  sw          $v1, 0xAB0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 2736), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173AF4u;
}
