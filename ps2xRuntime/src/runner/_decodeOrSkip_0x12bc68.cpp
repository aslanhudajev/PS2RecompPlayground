#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _decodeOrSkip
// Address: 0x12bc68 - 0x12bcac
void _decodeOrSkip_0x12bc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_decodeOrSkip_0x12bc68");
#endif

    ctx->pc = 0x12bc68u;

    // 0x12bc68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12bc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12bc6c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x12bc6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bc70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12bc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12bc74: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12bc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12bc78: 0x8ce40040  lw          $a0, 0x40($a3)
    ctx->pc = 0x12bc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x12bc7c: 0x8c820174  lw          $v0, 0x174($a0)
    ctx->pc = 0x12bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
    // 0x12bc80: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12BC80u;
    {
        const bool branch_taken_0x12bc80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x12bc80) {
            ctx->pc = 0x12BC98u;
            goto label_12bc98;
        }
    }
    ctx->pc = 0x12BC88u;
    // 0x12bc88: 0xc04af2c  jal         func_12BCB0
    ctx->pc = 0x12BC88u;
    SET_GPR_U32(ctx, 31, 0x12BC90u);
    ctx->pc = 0x12BC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BC88u;
            // 0x12bc8c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BCB0u;
    if (runtime->hasFunction(0x12BCB0u)) {
        auto targetFn = runtime->lookupFunction(0x12BCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BC90u; }
        if (ctx->pc != 0x12BC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _decodeOrSkipField_0x12bcb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BC90u; }
        if (ctx->pc != 0x12BC90u) { return; }
    }
    ctx->pc = 0x12BC90u;
    // 0x12bc90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12BC90u;
    {
        const bool branch_taken_0x12bc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BC90u;
            // 0x12bc94: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bc90) {
            ctx->pc = 0x12BCA4u;
            goto label_12bca4;
        }
    }
    ctx->pc = 0x12BC98u;
label_12bc98:
    // 0x12bc98: 0xc04aed4  jal         func_12BB50
    ctx->pc = 0x12BC98u;
    SET_GPR_U32(ctx, 31, 0x12BCA0u);
    ctx->pc = 0x12BC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12BC98u;
            // 0x12bc9c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BB50u;
    if (runtime->hasFunction(0x12BB50u)) {
        auto targetFn = runtime->lookupFunction(0x12BB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BCA0u; }
        if (ctx->pc != 0x12BCA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _decodeOrSkipFrame_0x12bb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12BCA0u; }
        if (ctx->pc != 0x12BCA0u) { return; }
    }
    ctx->pc = 0x12BCA0u;
    // 0x12bca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12bca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12bca4:
    // 0x12bca4: 0x3e00008  jr          $ra
    ctx->pc = 0x12BCA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12BCA4u;
            // 0x12bca8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12BC98u: goto label_12bc98;
            case 0x12BCA4u: goto label_12bca4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12BCACu;
}
