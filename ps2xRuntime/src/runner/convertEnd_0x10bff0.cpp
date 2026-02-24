#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: convertEnd
// Address: 0x10bff0 - 0x10c018
void convertEnd_0x10bff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("convertEnd_0x10bff0");
#endif

    ctx->pc = 0x10bff0u;

    // 0x10bff0: 0x3085ff00  andi        $a1, $a0, 0xFF00
    ctx->pc = 0x10bff0u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)65280u)));
    // 0x10bff4: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x10bff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x10bff8: 0x41a02  srl         $v1, $a0, 8
    ctx->pc = 0x10bff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x10bffc: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x10bffcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
    // 0x10c000: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x10c000u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x10c004: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x10c004u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65280u)));
    // 0x10c008: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10c008u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x10c00c: 0x42602  srl         $a0, $a0, 24
    ctx->pc = 0x10c00cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x10c010: 0x3e00008  jr          $ra
    ctx->pc = 0x10C010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10C010u;
            // 0x10c014: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C018u;
}
