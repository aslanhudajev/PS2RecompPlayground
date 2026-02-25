#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _get_slice
// Address: 0x110210 - 0x11023c
void _get_slice_0x110210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_get_slice_0x110210");
#endif

    ctx->pc = 0x110210u;

    // 0x110210: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x110210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x110214: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x110214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x110218: 0x8c467180  lw          $a2, 0x7180($v0)
    ctx->pc = 0x110218u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29056)));
    // 0x11021c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11021Cu;
    {
        const bool branch_taken_0x11021c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11021c) {
            ctx->pc = 0x110220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11021Cu;
            // 0x110220: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x110224u;
            goto label_110224;
        }
    }
    ctx->pc = 0x110224u;
label_110224:
    // 0x110224: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x110224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x110228: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x110228u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11022c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x11022cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x110230: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x110230u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x110234: 0x3e00008  jr          $ra
    ctx->pc = 0x110234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110234u;
            // 0x110238: 0x1012  mflo        $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ctx->lo);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x110224u: goto label_110224;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11023Cu;
}
