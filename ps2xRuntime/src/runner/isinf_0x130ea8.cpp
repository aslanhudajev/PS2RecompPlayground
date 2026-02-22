#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: isinf
// Address: 0x130ea8 - 0x130ef0
void isinf_0x130ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x130ea8u;

    // 0x130ea8: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x130ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x130eac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x130eacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x130eb0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x130eb0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x130eb4: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x130eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x130eb8: 0x22823  negu        $a1, $v0
    ctx->pc = 0x130eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x130ebc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x130ebcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x130ec0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x130ec0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x130ec4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x130ec4u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x130ec8: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x130ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x130ecc: 0x3c057ff0  lui         $a1, 0x7FF0
    ctx->pc = 0x130eccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32752 << 16));
    // 0x130ed0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x130ed0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x130ed4: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x130ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x130ed8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x130ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130edc: 0x41823  negu        $v1, $a0
    ctx->pc = 0x130edcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x130ee0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x130ee0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x130ee4: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x130ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x130ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x130EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130EE8u;
            // 0x130eec: 0x441023  subu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x130EF0u;
}
