#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SOUND_AddLongData
// Address: 0x173a60 - 0x173ac0
void SOUND_AddLongData_0x173a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SOUND_AddLongData_0x173a60");
#endif

    ctx->pc = 0x173a60u;

    // 0x173a60: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x173a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x173a64: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x173a64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x173a68: 0x8c230ab0  lw          $v1, 0xAB0($at)
    ctx->pc = 0x173a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2736)));
    // 0x173a6c: 0x24a51780  addiu       $a1, $a1, 0x1780
    ctx->pc = 0x173a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6016));
    // 0x173a70: 0x43402  srl         $a2, $a0, 16
    ctx->pc = 0x173a70u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x173a74: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x173a74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x173a78: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x173a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x173a7c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x173a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x173a80: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x173a80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x173a84: 0x8c230ab0  lw          $v1, 0xAB0($at)
    ctx->pc = 0x173a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2736)));
    // 0x173a88: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x173a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x173a8c: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x173a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x173a90: 0xac230ab0  sw          $v1, 0xAB0($at)
    ctx->pc = 0x173a90u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 2736), GPR_U32(ctx, 3));
    // 0x173a94: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x173a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x173a98: 0x8c230ab0  lw          $v1, 0xAB0($at)
    ctx->pc = 0x173a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2736)));
    // 0x173a9c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x173a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x173aa0: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x173aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x173aa4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x173aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x173aa8: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x173aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x173aac: 0x8c230ab0  lw          $v1, 0xAB0($at)
    ctx->pc = 0x173aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2736)));
    // 0x173ab0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x173ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x173ab4: 0x3c01003a  lui         $at, 0x3A
    ctx->pc = 0x173ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)58 << 16));
    // 0x173ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x173AB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173AB8u;
            // 0x173abc: 0xac230ab0  sw          $v1, 0xAB0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 2736), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173AC0u;
}
