#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: kputchar
// Address: 0x1303c0 - 0x1303f8
void kputchar_0x1303c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("kputchar_0x1303c0");
#endif

    ctx->pc = 0x1303c0u;

    // 0x1303c0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1303c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1303c4: 0x3463f130  ori         $v1, $v1, 0xF130
    ctx->pc = 0x1303c4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)61744u)));
label_1303c8:
    // 0x1303c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1303c8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x1303cc: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1303ccu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)32768u)));
    // 0x1303d0: 0x0  nop
    ctx->pc = 0x1303d0u;
    // NOP
    // 0x1303d4: 0x0  nop
    ctx->pc = 0x1303d4u;
    // NOP
    // 0x1303d8: 0x0  nop
    ctx->pc = 0x1303d8u;
    // NOP
    // 0x1303dc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1303DCu;
    {
        const bool branch_taken_0x1303dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1303dc) {
            ctx->pc = 0x1303C8u;
            goto label_1303c8;
        }
    }
    ctx->pc = 0x1303E4u;
    // 0x1303e4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1303e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1303e8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1303e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1303ec: 0x3463f180  ori         $v1, $v1, 0xF180
    ctx->pc = 0x1303ecu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)61824u)));
    // 0x1303f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1303F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1303F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1303F0u;
            // 0x1303f4: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1303C8u: goto label_1303c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1303F8u;
}
