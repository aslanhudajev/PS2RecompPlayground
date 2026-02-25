#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: sub_001091C0
// Address: 0x1091c0 - 0x1091e8
void sub_001091C0_0x1091c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("sub_001091C0_0x1091c0");
#endif

    ctx->pc = 0x1091c0u;

    // 0x1091c0: 0x30840007  andi        $a0, $a0, 0x7
    ctx->pc = 0x1091c0u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)7u)));
    // 0x1091c4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x1091c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1091c8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1091c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1091cc: 0x38840003  xori        $a0, $a0, 0x3
    ctx->pc = 0x1091ccu;
    SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)3u)));
    // 0x1091d0: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x1091d0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x1091d4: 0x30a50007  andi        $a1, $a1, 0x7
    ctx->pc = 0x1091d4u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)7u)));
    // 0x1091d8: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x1091d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1091dc: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1091dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1091e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1091E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1091E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1091E0u;
            // 0x1091e4: 0x65100a  movz        $v0, $v1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1091E8u;
}
