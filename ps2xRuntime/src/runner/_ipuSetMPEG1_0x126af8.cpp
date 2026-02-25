#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _ipuSetMPEG1
// Address: 0x126af8 - 0x126b20
void _ipuSetMPEG1_0x126af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_ipuSetMPEG1_0x126af8");
#endif

    ctx->pc = 0x126af8u;

    // 0x126af8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x126af8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x126afc: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x126afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x126b00: 0x34a52010  ori         $a1, $a1, 0x2010
    ctx->pc = 0x126b00u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)8208u)));
    // 0x126b04: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x126b04u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x126b08: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x126b08u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0))); // MMIO: 0x10000000
    // 0x126b0c: 0x425c0  sll         $a0, $a0, 23
    ctx->pc = 0x126b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
    // 0x126b10: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x126b10u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x126b14: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x126b14u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x126b18: 0x3e00008  jr          $ra
    ctx->pc = 0x126B18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126B18u;
            // 0x126b1c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x126B20u;
}
