#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ShienLogoDraw
// Address: 0x1ea6b0 - 0x1ea760
void ShienLogoDraw_0x1ea6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ShienLogoDraw_0x1ea6b0");
#endif

    ctx->pc = 0x1ea6b0u;

    // 0x1ea6b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ea6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ea6b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ea6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ea6b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ea6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ea6bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ea6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ea6c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ea6c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea6c4: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EA6C4u;
    {
        const bool branch_taken_0x1ea6c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ea6c4) {
            ctx->pc = 0x1EA6D8u;
            goto label_1ea6d8;
        }
    }
    ctx->pc = 0x1EA6CCu;
    // 0x1ea6cc: 0xc07ac54  jal         func_1EB150
    ctx->pc = 0x1EA6CCu;
    SET_GPR_U32(ctx, 31, 0x1EA6D4u);
    ctx->pc = 0x1EB150u;
    if (runtime->hasFunction(0x1EB150u)) {
        auto targetFn = runtime->lookupFunction(0x1EB150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA6D4u; }
        if (ctx->pc != 0x1EA6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RgbAnim2_0x1eb150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA6D4u; }
        if (ctx->pc != 0x1EA6D4u) { return; }
    }
    ctx->pc = 0x1EA6D4u;
    // 0x1ea6d4: 0x0  nop
    ctx->pc = 0x1ea6d4u;
    // NOP
label_1ea6d8:
    // 0x1ea6d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ea6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea6dc: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EA6DCu;
    {
        const bool branch_taken_0x1ea6dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EA6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA6DCu;
            // 0x1ea6e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea6dc) {
            ctx->pc = 0x1EA6F0u;
            goto label_1ea6f0;
        }
    }
    ctx->pc = 0x1EA6E4u;
    // 0x1ea6e4: 0xc07aa04  jal         func_1EA810
    ctx->pc = 0x1EA6E4u;
    SET_GPR_U32(ctx, 31, 0x1EA6ECu);
    ctx->pc = 0x1EA810u;
    if (runtime->hasFunction(0x1EA810u)) {
        auto targetFn = runtime->lookupFunction(0x1EA810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA6ECu; }
        if (ctx->pc != 0x1EA6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        VertexAnim2_0x1ea810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA6ECu; }
        if (ctx->pc != 0x1EA6ECu) { return; }
    }
    ctx->pc = 0x1EA6ECu;
    // 0x1ea6ec: 0x0  nop
    ctx->pc = 0x1ea6ecu;
    // NOP
label_1ea6f0:
    // 0x1ea6f0: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EA6F0u;
    {
        const bool branch_taken_0x1ea6f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA6F0u;
            // 0x1ea6f4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea6f0) {
            ctx->pc = 0x1EA700u;
            goto label_1ea700;
        }
    }
    ctx->pc = 0x1EA6F8u;
    // 0x1ea6f8: 0xc07aa04  jal         func_1EA810
    ctx->pc = 0x1EA6F8u;
    SET_GPR_U32(ctx, 31, 0x1EA700u);
    ctx->pc = 0x1EA810u;
    if (runtime->hasFunction(0x1EA810u)) {
        auto targetFn = runtime->lookupFunction(0x1EA810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA700u; }
        if (ctx->pc != 0x1EA700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        VertexAnim2_0x1ea810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA700u; }
        if (ctx->pc != 0x1EA700u) { return; }
    }
    ctx->pc = 0x1EA700u;
label_1ea700:
    // 0x1ea700: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1ea700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1ea704: 0x24423110  addiu       $v0, $v0, 0x3110
    ctx->pc = 0x1ea704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12560));
    // 0x1ea708: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x1ea708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1ea70c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1ea70cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x1ea710: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1ea710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1ea714: 0x24422ed0  addiu       $v0, $v0, 0x2ED0
    ctx->pc = 0x1ea714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11984));
    // 0x1ea718: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x1ea718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x1ea71c: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1ea71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1ea720: 0x24422f10  addiu       $v0, $v0, 0x2F10
    ctx->pc = 0x1ea720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12048));
    // 0x1ea724: 0xc05c1d0  jal         func_170740
    ctx->pc = 0x1EA724u;
    SET_GPR_U32(ctx, 31, 0x1EA72Cu);
    ctx->pc = 0x1EA728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA724u;
            // 0x1ea728: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170740u;
    if (runtime->hasFunction(0x170740u)) {
        auto targetFn = runtime->lookupFunction(0x170740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA72Cu; }
        if (ctx->pc != 0x1EA72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsGetTextureAddr_0x170740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA72Cu; }
        if (ctx->pc != 0x1EA72Cu) { return; }
    }
    ctx->pc = 0x1EA72Cu;
    // 0x1ea72c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1ea72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ea730: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ea730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea734: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1ea734u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1ea738: 0xc07a9a8  jal         func_1EA6A0
    ctx->pc = 0x1EA738u;
    SET_GPR_U32(ctx, 31, 0x1EA740u);
    ctx->pc = 0x1EA73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA738u;
            // 0x1ea73c: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA6A0u;
    if (runtime->hasFunction(0x1EA6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1EA6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA740u; }
        if (ctx->pc != 0x1EA740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetAlphaFunc_0x1ea6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA740u; }
        if (ctx->pc != 0x1EA740u) { return; }
    }
    ctx->pc = 0x1EA740u;
    // 0x1ea740: 0xc07a9a4  jal         func_1EA690
    ctx->pc = 0x1EA740u;
    SET_GPR_U32(ctx, 31, 0x1EA748u);
    ctx->pc = 0x1EA744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA740u;
            // 0x1ea744: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EA690u;
    if (runtime->hasFunction(0x1EA690u)) {
        auto targetFn = runtime->lookupFunction(0x1EA690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA748u; }
        if (ctx->pc != 0x1EA748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsSetPrimNum_0x1ea690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA748u; }
        if (ctx->pc != 0x1EA748u) { return; }
    }
    ctx->pc = 0x1EA748u;
    // 0x1ea748: 0xc05c29c  jal         func_170A70
    ctx->pc = 0x1EA748u;
    SET_GPR_U32(ctx, 31, 0x1EA750u);
    ctx->pc = 0x170A70u;
    if (runtime->hasFunction(0x170A70u)) {
        auto targetFn = runtime->lookupFunction(0x170A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA750u; }
        if (ctx->pc != 0x1EA750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsPrimSpriteFTU_0x170a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA750u; }
        if (ctx->pc != 0x1EA750u) { return; }
    }
    ctx->pc = 0x1EA750u;
    // 0x1ea750: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ea750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea754: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ea754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea758: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA758u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA758u;
            // 0x1ea75c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EA6D8u: goto label_1ea6d8;
            case 0x1EA6F0u: goto label_1ea6f0;
            case 0x1EA700u: goto label_1ea700;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EA760u;
}
