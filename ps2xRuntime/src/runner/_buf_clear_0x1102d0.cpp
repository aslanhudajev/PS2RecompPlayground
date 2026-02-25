#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _buf_clear
// Address: 0x1102d0 - 0x110300
void _buf_clear_0x1102d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_buf_clear_0x1102d0");
#endif

    ctx->pc = 0x1102d0u;

    // 0x1102d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1102d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1102d4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1102d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1102d8: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1102d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1102dc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1102dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1102e0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1102e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1102e4: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x1102e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x1102e8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1102e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1102ec: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1102ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1102f0: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1102f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1102f4: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1102f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1102f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1102F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1102FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1102F8u;
            // 0x1102fc: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x110300u;
}
