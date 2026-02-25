#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _sysbitJump
// Address: 0x12a448 - 0x12a49c
void _sysbitJump_0x12a448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_sysbitJump_0x12a448");
#endif

    ctx->pc = 0x12a448u;

    // 0x12a448: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x12a448u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a44c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x12a44cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x12a450: 0xdce20018  ld          $v0, 0x18($a3)
    ctx->pc = 0x12a450u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x12a454: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x12a454u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x12a458: 0xa2102d  daddu       $v0, $a1, $v0
    ctx->pc = 0x12a458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
    // 0x12a45c: 0x8ce30024  lw          $v1, 0x24($a3)
    ctx->pc = 0x12a45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x12a460: 0x22778  dsll        $a0, $v0, 29
    ctx->pc = 0x12a460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 29);
    // 0x12a464: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x12a464u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x12a468: 0xfce00000  sd          $zero, 0x0($a3)
    ctx->pc = 0x12a468u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 0));
    // 0x12a46c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x12a46cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x12a470: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x12a470u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x12a474: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x12a474u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12a478: 0xfce20018  sd          $v0, 0x18($a3)
    ctx->pc = 0x12a478u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 2));
    // 0x12a47c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A47Cu;
    {
        const bool branch_taken_0x12a47c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A47Cu;
            // 0x12a480: 0xace6000c  sw          $a2, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a47c) {
            ctx->pc = 0x12A490u;
            goto label_12a490;
        }
    }
    ctx->pc = 0x12A484u;
    // 0x12a484: 0x8ce20028  lw          $v0, 0x28($a3)
    ctx->pc = 0x12a484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x12a488: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x12a488u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x12a48c: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x12a48cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_12a490:
    // 0x12a490: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x12a490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a494: 0x804a8c6  j           func_12A318
    ctx->pc = 0x12A494u;
    ctx->pc = 0x12A498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A494u;
            // 0x12a498: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A318u;
    if (runtime->hasFunction(0x12A318u)) {
        auto targetFn = runtime->lookupFunction(0x12A318u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _sysbitFlush_0x12a318(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x12A49Cu;
}
