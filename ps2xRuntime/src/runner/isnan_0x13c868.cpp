#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: isnan
// Address: 0x13c868 - 0x13c8a0
void isnan_0x13c868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("isnan_0x13c868");
#endif

    ctx->pc = 0x13c868u;

    // 0x13c868: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x13c868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x13c86c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x13c86cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x13c870: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x13c870u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x13c874: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x13c874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x13c878: 0x22823  negu        $a1, $v0
    ctx->pc = 0x13c878u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x13c87c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x13c87cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x13c880: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x13c880u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x13c884: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x13c884u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x13c888: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x13c888u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x13c88c: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x13c88cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x13c890: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x13c890u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x13c894: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x13c894u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13c898: 0x3e00008  jr          $ra
    ctx->pc = 0x13C898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C898u;
            // 0x13c89c: 0x417c2  srl         $v0, $a0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13C8A0u;
}
