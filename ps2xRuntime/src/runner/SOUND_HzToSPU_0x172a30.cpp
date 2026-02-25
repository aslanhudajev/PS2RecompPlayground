#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SOUND_HzToSPU
// Address: 0x172a30 - 0x172a54
void SOUND_HzToSPU_0x172a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SOUND_HzToSPU_0x172a30");
#endif

    ctx->pc = 0x172a30u;

    // 0x172a30: 0x3c020576  lui         $v0, 0x576
    ctx->pc = 0x172a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1398 << 16));
    // 0x172a34: 0x41b00  sll         $v1, $a0, 12
    ctx->pc = 0x172a34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 12));
    // 0x172a38: 0x344219f1  ori         $v0, $v0, 0x19F1
    ctx->pc = 0x172a38u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)6641u)));
    // 0x172a3c: 0x430019  multu       $v0, $v1
    ctx->pc = 0x172a3cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x172a40: 0x0  nop
    ctx->pc = 0x172a40u;
    // NOP
    // 0x172a44: 0x0  nop
    ctx->pc = 0x172a44u;
    // NOP
    // 0x172a48: 0x1010  mfhi        $v0
    ctx->pc = 0x172a48u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x172a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x172A4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172A4Cu;
            // 0x172a50: 0x21282  srl         $v0, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x172A54u;
}
