#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: audioDecIsPreset
// Address: 0x119ab0 - 0x119ac4
void audioDecIsPreset_0x119ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x119ab0u;

    // 0x119ab0: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x119ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x119ab4: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x119ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x119ab8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x119ab8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x119abc: 0x3e00008  jr          $ra
    ctx->pc = 0x119ABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x119ABCu;
            // 0x119ac0: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x119AC4u;
}
