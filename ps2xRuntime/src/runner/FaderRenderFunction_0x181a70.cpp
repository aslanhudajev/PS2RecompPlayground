#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: FaderRenderFunction
// Address: 0x181a70 - 0x181acc
void FaderRenderFunction_0x181a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("FaderRenderFunction_0x181a70");
#endif

    ctx->pc = 0x181a70u;

    // 0x181a70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x181a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x181a74: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x181a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x181a78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x181a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x181a7c: 0x8c23b610  lw          $v1, -0x49F0($at)
    ctx->pc = 0x181a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948368)));
    // 0x181a80: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x181A80u;
    {
        const bool branch_taken_0x181a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x181A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181A80u;
            // 0x181a84: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181a80) {
            ctx->pc = 0x181AC0u;
            goto label_181ac0;
        }
    }
    ctx->pc = 0x181A88u;
    // 0x181a88: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x181a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x181a8c: 0x2463b5f0  addiu       $v1, $v1, -0x4A10
    ctx->pc = 0x181a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948336));
    // 0x181a90: 0x2442b5e8  addiu       $v0, $v0, -0x4A18
    ctx->pc = 0x181a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948328));
    // 0x181a94: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x181a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x181a98: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x181a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x181a9c: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x181a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x181aa0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x181aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181aa4: 0xc0606b8  jal         func_181AE0
    ctx->pc = 0x181AA4u;
    SET_GPR_U32(ctx, 31, 0x181AACu);
    ctx->pc = 0x181AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181AA4u;
            // 0x181aa8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181AE0u;
    if (runtime->hasFunction(0x181AE0u)) {
        auto targetFn = runtime->lookupFunction(0x181AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181AACu; }
        if (ctx->pc != 0x181AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x181ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181AACu; }
        if (ctx->pc != 0x181AACu) { return; }
    }
    ctx->pc = 0x181AACu;
    // 0x181aac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x181aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x181ab0: 0xc0606b4  jal         func_181AD0
    ctx->pc = 0x181AB0u;
    SET_GPR_U32(ctx, 31, 0x181AB8u);
    ctx->pc = 0x181AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181AB0u;
            // 0x181ab4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181AD0u;
    if (runtime->hasFunction(0x181AD0u)) {
        auto targetFn = runtime->lookupFunction(0x181AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181AB8u; }
        if (ctx->pc != 0x181AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x181ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181AB8u; }
        if (ctx->pc != 0x181AB8u) { return; }
    }
    ctx->pc = 0x181AB8u;
    // 0x181ab8: 0xc05c2a8  jal         func_170AA0
    ctx->pc = 0x181AB8u;
    SET_GPR_U32(ctx, 31, 0x181AC0u);
    ctx->pc = 0x181ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181AB8u;
            // 0x181abc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170AA0u;
    if (runtime->hasFunction(0x170AA0u)) {
        auto targetFn = runtime->lookupFunction(0x170AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181AC0u; }
        if (ctx->pc != 0x181AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFM_0x170aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181AC0u; }
        if (ctx->pc != 0x181AC0u) { return; }
    }
    ctx->pc = 0x181AC0u;
label_181ac0:
    // 0x181ac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x181AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181AC4u;
            // 0x181ac8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x181AC0u: goto label_181ac0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x181ACCu;
}
