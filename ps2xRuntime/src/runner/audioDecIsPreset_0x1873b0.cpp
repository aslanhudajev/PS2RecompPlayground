#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: audioDecIsPreset
// Address: 0x1873b0 - 0x1873c4
void audioDecIsPreset_0x1873b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("audioDecIsPreset_0x1873b0");
#endif

    ctx->pc = 0x1873b0u;

    // 0x1873b0: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x1873b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1873b4: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x1873b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1873b8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1873b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1873bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1873BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1873C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1873BCu;
            // 0x1873c0: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1873C4u;
}
