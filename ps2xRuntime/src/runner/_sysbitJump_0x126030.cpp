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
// Address: 0x126030 - 0x126084
void _sysbitJump_0x126030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_sysbitJump_0x126030");
#endif

    ctx->pc = 0x126030u;

    // 0x126030: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x126030u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126034: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x126034u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x126038: 0xdce20018  ld          $v0, 0x18($a3)
    ctx->pc = 0x126038u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x12603c: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x12603cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x126040: 0xa2102d  daddu       $v0, $a1, $v0
    ctx->pc = 0x126040u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
    // 0x126044: 0x8ce30024  lw          $v1, 0x24($a3)
    ctx->pc = 0x126044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x126048: 0x22778  dsll        $a0, $v0, 29
    ctx->pc = 0x126048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 29);
    // 0x12604c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x12604cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x126050: 0xfce00000  sd          $zero, 0x0($a3)
    ctx->pc = 0x126050u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 0));
    // 0x126054: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x126054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x126058: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x126058u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x12605c: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x12605cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x126060: 0xfce20018  sd          $v0, 0x18($a3)
    ctx->pc = 0x126060u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 2));
    // 0x126064: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x126064u;
    {
        const bool branch_taken_0x126064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x126068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126064u;
            // 0x126068: 0xace6000c  sw          $a2, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126064) {
            ctx->pc = 0x126078u;
            goto label_126078;
        }
    }
    ctx->pc = 0x12606Cu;
    // 0x12606c: 0x8ce20028  lw          $v0, 0x28($a3)
    ctx->pc = 0x12606cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x126070: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x126070u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x126074: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x126074u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_126078:
    // 0x126078: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x126078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12607c: 0x80497c0  j           func_125F00
    ctx->pc = 0x12607Cu;
    ctx->pc = 0x126080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12607Cu;
            // 0x126080: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F00u;
    if (runtime->hasFunction(0x125F00u)) {
        auto targetFn = runtime->lookupFunction(0x125F00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        _sysbitFlush_0x125f00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x126084u;
}
