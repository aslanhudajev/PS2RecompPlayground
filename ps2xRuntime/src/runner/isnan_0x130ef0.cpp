#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: isnan
// Address: 0x130ef0 - 0x130f28
void isnan_0x130ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x130ef0u;

    // 0x130ef0: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x130ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x130ef4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x130ef4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x130ef8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x130ef8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x130efc: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x130efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x130f00: 0x22823  negu        $a1, $v0
    ctx->pc = 0x130f00u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x130f04: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x130f04u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x130f08: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x130f08u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x130f0c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x130f0cu;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x130f10: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x130f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x130f14: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x130f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x130f18: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x130f18u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x130f1c: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x130f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x130f20: 0x3e00008  jr          $ra
    ctx->pc = 0x130F20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130F20u;
            // 0x130f24: 0x417c2  srl         $v0, $a0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x130F28u;
}
